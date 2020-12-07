#include "bnn.h"
#include "layer.h"
#include "pgconv.h"
#include "weights_conv1_32_ch32.h"
#include "dimension_def.h"

using namespace std;
FIX_FM_acc popcnt(uint32 a, uint32 b){
	uint32 c = ~(a^b);
	FIX_FM_acc sum = 0;
	for (int i = 0; i <32; i ++){
		if (c[i] == 1) {
			sum += 1;
		} else {
			sum -= 1;
		}
	}
	return sum;
}

void FracNet(
		uint32 image_thermo[3*224*224],

		uint512 conv_weight_3x3_all[174592][3][3],
		uint512 conv_weight_1x1_all[196224],
		uint512 weights_all[8313],

		float DDR_buf[1024][226][225],

		float *output
)
{


#pragma HLS INTERFACE m_axi depth=150528 port=image_thermo offset=slave bundle=BUS32


#pragma HLS INTERFACE m_axi depth=196224 port=conv_weight_1x1_all offset=slave bundle=CONVBUS512
#pragma HLS INTERFACE m_axi depth=1571328 port=conv_weight_3x3_all offset=slave bundle=CONVBUS512

#pragma HLS INTERFACE m_axi depth=8314 port=weights_all offset=slave bundle=OTHRBUS512

#pragma HLS INTERFACE m_axi depth=52070400 port=DDR_buf offset=slave bundle=DDR512

#pragma HLS INTERFACE m_axi depth=831744 port=output bundle=BUS32

#pragma HLS INTERFACE s_axilite port=return bundle=CTRL

	// #pragma HLS ALLOCATION instances=pg_conv3x3_tile limit=1 function
	// #pragma HLS ALLOCATION instances=bn_relu_shortcut limit=1 function
	// #pragma HLS ALLOCATION instances=quant_and_pack limit=1 function

	// feature map buffers
	// FIX_FM FM_buf0[BLK_DEPTH][9][9];
	// FIX_FM FM_buf1[BLK_DEPTH][9][9];
	// uint64 pg_buf_all_1[12996];//114*114
	// uint64 pg_buf_all_0[12996];//114*114
	// uint64 pg_buf_all_in[12996];
	// uint64 pg_buf[3][9][9];
	// FIX_FM_acc FM_buf_acc0[BLK_DEPTH][9][9];
	// // FIX_FM_acc FM_buf_acc1[BLK_DEPTH][11][11];
	// // FIX_FM_acc FM_buf_acc2[BLK_DEPTH][11][11];

	// // weight buffers
	// uint64 weight_buf_1x1[2][BLK_DEPTH];
	// uint64 weight_buf_3x3[3][BLK_DEPTH][3][3];
	// FIX_WT thres_buf[4][BLK_DEPTH];
	// FIX_WT bn_weight_buf[4][BLK_DEPTH];
	// FIX_WT bn_bias_buf[4][BLK_DEPTH];
	// FIX_WT relu_shiftx_buf[2][BLK_DEPTH];
	// FIX_WT relu_shifty_buf[2][BLK_DEPTH];
	// FIX_WT relu_weight_buf[2][BLK_DEPTH];

	uint32 conv_buf_1[ROW_TILE_SIZE+2][BUF_WIDTH_0] = {}; // 114*113
	uint32 conv_buf_0[ROW_TILE_SIZE+2][BUF_WIDTH_0] = {}; // 114*113
	uint32 feat_buf_all[3][BUF_HEIGHT_1*BUF_WIDTH_1] = {}; // 3*226*225

	// Arrange feat_buf_all as such:
	// [ROW][CH][COL]

	// feat_buf_all[3][BUF_HEIGHT_1*BUF_WIDTH_1]
	// feaf_buf_all[1].. // bit1
	// feat_buf_all[0].. // bit0

	FIX_FM_acc out_buf_t1[OUT_CHANNEL_PARALLELISM][ROW_TILE_SIZE+2][BUF_WIDTH_1] = {};
	//	FIX_FM_acc out_buf_t0[OUT_CHANNEL_PARALLELISM][ROW_TILE_SIZE+2][BUF_WIDTH_0] = {};
#pragma HLS ARRAY_PARTITION variable=out_buf_t1 complete dim=1
	//#pragma HLS ARRAY_PARTITION variable=out_buf_t0 complete dim=1

	uint32 weight_tile_buffer[OUT_CHANNEL_PARALLELISM][3][3] = {}; // output parallelism 8 is ideal because 8*64=512 which is the bus width.
#pragma HLS ARRAY_PARTITION variable=weight_tile_buffer complete dim=1

	FIX_32_8 conv3x3_0_threshold[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_32_8 conv3x3_1_weight[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_32_8 conv3x3_1_bias[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_32_8 pw_0_threshold[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_32_8 pw_1_weight[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_32_8 pw_1_bias[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_32_8 relu1_shift_x[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_32_8 relu1_shift_y[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_32_8 relu1_weight[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_32_8 relu2_shift_x[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_32_8 relu2_shift_y[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_32_8 relu2_weight[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_32_8 bn1_weight[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_32_8 bn1_bias[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_32_8 bn2_weight[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_32_8 bn2_bias[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};

	int H_fmap_in, H_fmap_out, stride;
	int conv_in_channels, conv_out_channels;
	int pw_in_channels, pw_out_channels;
	int in_channels_after_pack, out_channels_after_tile;
	int in_channel_start, out_channel_start, row_tile_start;
	int conv3x3_weight_ptr, weights_all_ptr;
	int conv3x3_weight_ptr_inc;


	////////////////////////////////////////////////
	//////////// GET IMAGE + CONV1 /////////////////
	////////////////////////////////////////////////
	conv3x3_weight_ptr = 0;
	weights_all_ptr = 0;
	in_channels_after_pack = 3;
	conv_in_channels = 96;
	conv_out_channels = 32;
	H_fmap_out = 224;

	weights_all_ptr = load_1D_weights(weights_all, bn1_weight, conv_out_channels, weights_all_ptr);
	weights_all_ptr = load_1D_weights(weights_all, bn1_bias, conv_out_channels, weights_all_ptr);

	LOOP_Conv1:
	for (int row_t = 0; row_t < H_fmap_out/ROW_TILE_SIZE; row_t++){
		row_tile_start = row_t*ROW_TILE_SIZE;
		for (int c_in = 0; c_in < in_channels_after_pack; c_in ++) {
			LOOP_GetImg:
			for (int row = 0; row < ROW_TILE_SIZE+2; row ++){
				for (int col = 0; col < 225; col ++){
#pragma HLS PIPELINE
					int index_thermo = c_in*224*224 + (row_tile_start+row-1)*224 + col;
					int index_feature = (row_tile_start+row)*225 + col;
					if (row_tile_start+row >= 1 && row_tile_start+row <= 224 && col <= 223){
						feat_buf_all[2][index_feature] = image_thermo[index_thermo];
					} else {
						feat_buf_all[2][index_feature] = 0;
					}
				}
			}
			LOOP_load_weights:
			for (int row = 0; row < 3; row ++) {
				for (int col = 0; col < 3; col ++) {
#pragma HLS PIPELINE
					for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++){
#pragma HLS ARRAY_PARTITION variable=l_0_0_weight complete dim=3
						weight_tile_buffer[ch][row][col] = l_0_0_weight[0][c_in][ch][row][col].range(31, 0);
					}
				}
			}

			/*
                // The Fake Conv mimics the behavior of pg_conv3x3_tile
				LOOP_Fake_Conv:
				for (int row = 0; row < ROW_TILE_SIZE+2; row ++){
					for (int col = 0; col < 225; col ++){
						for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++){
							if (c_in == 0) {
								out_buf_t1[ch][row][col] = 0;
							}
							for (int krow = 0; krow < 3; krow ++){
								for (int kcol = 0; kcol < 3; kcol ++){
                                    int row_idx_pad = row + row_tile_start - 2 + krow;
                                    int col_idx_pad = col - 2 + kcol;
									if (row_idx_pad>=1 && row_idx_pad<H_fmap_out+1 && col_idx_pad>=0 && col_idx_pad<H_fmap_out) {
                                        int buf_index = c_in*226*225 + row_idx_pad*225 + col_idx_pad;
										uint64 a = feat_buf_all[buf_index];
										uint64 b = weight_tile_buffer[ch][krow][kcol];
										out_buf_t1[ch][row][col] += popcnt(a, b) - out_channels;
									}
								}
							}
						}
					}
				}
			 */

			pg_conv3x3_tile(
					feat_buf_all[2], weight_tile_buffer, out_buf_t1,
					c_in, H_fmap_out, row_tile_start
			);
		}

		/////////////////
		//// This following loop is for demo only, showing that the first two rows
		//// and the first column in out_buf_t1 are invalid.
		//// Finally, we want to merge it to batchnorm
		/////////////////
		//            for (int ii=0; ii<8; ii++){
		//                for (int jj=0; jj<ROW_TILE_SIZE; jj++){
		//                    for (int kk=0; kk<224; kk++){
		//                        out_buf_t1[ii][jj][kk] = out_buf_t1[ii][jj+2][kk+1];
		//                    }
		//                }
		//            }
		for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++) {
			for (int row = 0; row < ROW_TILE_SIZE/2; row ++) {
				for (int col = 0; col < H_fmap_out/2; col ++) {
#pragma HLS PIPELINE
					FIX_FM_acc output = out_buf_t1[ch][row*2+2][col*2+1];
#ifdef SW_TEST
					float result = (float)bn1_weight[0][ch]*output + (float)bn1_bias[0][ch];
#else
					float result = (FIX_32_8)bn1_weight[0][ch]*output + (FIX_32_8)bn1_bias[0][ch];
#endif
					DDR_buf[ch][row_tile_start/2 + row][col] = result;
					uint2 result_t = to2bit(result);
					//						conv_buf_all_1[(row_tile_start/2 + row + 1)*113 + col][out_channel_start + ch] = result_t[1];
					//						conv_buf_all_0[(row_tile_start/2 + row + 1)*113 + col][out_channel_start + ch] = result_t[0];
				}
			}
		}

	}



	//	////////////////////////////////////////////////
	//	//////////// LAYER 1 ///////////////////////////
	//	////////////////////////////////////////////////
	//
	//	H_fmap_in = 112;
	//	H_fmap_out = 112;
	//	stride = 1;
	//	conv_in_channels = 32;
	//	conv_out_channels = 32;
	//	pw_in_channels = 32;
	//	pw_out_channels = 64;
	//
	//	weights_all_ptr = load_1D_weights(weights_all, conv3x3_0_threshold, conv_out_channels, weights_all_ptr);
	//	weights_all_ptr = load_1D_weights(weights_all, conv3x3_1_weight, conv_out_channels, weights_all_ptr);
	//	weights_all_ptr = load_1D_weights(weights_all, conv3x3_1_bias, conv_out_channels, weights_all_ptr);
	//	weights_all_ptr = load_1D_weights(weights_all, pw_0_threshold, pw_out_channels, weights_all_ptr);
	//	weights_all_ptr = load_1D_weights(weights_all, pw_1_weight, pw_out_channels, weights_all_ptr);
	//	weights_all_ptr = load_1D_weights(weights_all, pw_1_bias, pw_out_channels, weights_all_ptr);
	//	weights_all_ptr = load_1D_weights(weights_all, relu1_shift_x, conv_out_channels, weights_all_ptr);
	//	weights_all_ptr = load_1D_weights(weights_all, relu1_shift_y, conv_out_channels, weights_all_ptr);
	//	weights_all_ptr = load_1D_weights(weights_all, relu1_weight, conv_out_channels, weights_all_ptr);
	//	weights_all_ptr = load_1D_weights(weights_all, relu2_shift_x, pw_out_channels, weights_all_ptr);
	//	weights_all_ptr = load_1D_weights(weights_all, relu2_shift_y, pw_out_channels, weights_all_ptr);
	//	weights_all_ptr = load_1D_weights(weights_all, relu2_weight, pw_out_channels, weights_all_ptr);
	//	weights_all_ptr = load_1D_weights(weights_all, bn1_weight, conv_out_channels, weights_all_ptr);
	//	weights_all_ptr = load_1D_weights(weights_all, bn1_bias, conv_out_channels, weights_all_ptr);
	//	weights_all_ptr = load_1D_weights(weights_all, bn2_weight, pw_out_channels, weights_all_ptr);
	//	weights_all_ptr = load_1D_weights(weights_all, bn2_bias, pw_out_channels, weights_all_ptr);
	//
	//	////////////////////////////////////////////////
	//	//////////// layer1_0 PG1 /////////////////////
	//
	//
	//	in_channels_after_pack = conv_in_channels/IN_CHANNEL_BITPACK;
	//	out_channels_after_tile = conv_out_channels/OUT_CHANNEL_PARALLELISM;
	//
	//	conv3x3_weight_ptr = 6; // 32*96/512 skips first layer
	//	conv3x3_weight_ptr_inc = conv_in_channels*conv_out_channels/BUS_WIDTH;
	//
	//	LOOP_layer1_0:
	//	for (int c_out = 0; c_out < out_channels_after_tile; c_out ++) {
	//		for (int row_t = 0; row_t < H_fmap_out/ROW_TILE_SIZE; row_t ++) {
	//			for (int c_in = 0; c_in < in_channels_after_pack; c_in ++) {
	//				out_channel_start = c_out*OUT_CHANNEL_PARALLELISM;
	//				row_tile_start = row_t*ROW_TILE_SIZE;
	//				in_channel_start = c_in*IN_CHANNEL_BITPACK;
	//
	//				for (int ch = 0; ch < IN_CHANNEL_BITPACK; ch ++) {
	//					for (int row = 0; row < ROW_TILE_SIZE+2; row ++) {
	//						for (int col = 0; col < H_fmap_in+1; col ++) {
	//							if (row_tile_start + row >= 1 && row_tile_start + row <= H_fmap_in && col < H_fmap_in){
	//								float value = DDR_buf[in_channel_start + ch][row_tile_start + row - 1][col];
	//								uint2 v2bit = to2bit(value);
	//								conv_buf_1[row][col][ch] = v2bit[1];
	//								conv_buf_0[row][col][ch] = v2bit[0];
	//							} else {
	//								conv_buf_1[row][col][ch] = 0;
	//								conv_buf_0[row][col][ch] = 0;
	//							}
	//						}
	//					}
	//				}
	//				for (int i = 0; i < NUM_BUS_READS; i ++) {
	//					for (int row = 0; row < 3; row ++) {
	//						for (int col = 0; col < 3; col ++) {
	//							int ptr_start = conv3x3_weight_ptr + c_out*in_channels_after_pack*NUM_BUS_READS + c_in*NUM_BUS_READS;
	//							uint512 data_pack = conv_weight_3x3_all[ptr_start+i][row][col];
	//							for (int j = 0; j < NUM_WT_PACKS; j ++) {
	//								weight_tile_buffer[i*NUM_WT_PACKS + j][row][col].range(WEIGHT_BITS-1, 0) = data_pack.range(WEIGHT_BITS-1+j*WEIGHT_BITS, j*WEIGHT_BITS);
	//							}
	//						}
	//					}
	//				}
	//
	//
	//				// The Fake Conv mimics the behavior of pg_conv3x3_tile
	//				LOOP_Fake_Conv_1:
	//				for (int row = 0; row < ROW_TILE_SIZE+2; row ++){
	//					for (int col = 0; col < H_fmap_out; col ++){
	//						for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++){
	//							if (c_in == 0) {
	//								out_buf_t1[ch][row][col] = 0;
	//							}
	//							for (int krow = 0; krow < 3; krow ++){
	//								for (int kcol = 0; kcol < 3; kcol ++){
	//									int row_idx_pad = row - 2 + krow;
	//									int col_idx_pad = col - 2 + kcol;
	//									if (row_idx_pad>=1 && row_idx_pad<ROW_TILE_SIZE+2 && col_idx_pad>=0 && col_idx_pad<H_fmap_out) {
	//										uint32 a = conv_buf_1[row_idx_pad][col_idx_pad];
	//										uint32 b = weight_tile_buffer[ch][krow][kcol];
	//										out_buf_t1[ch][row][col] += popcnt(a, b);
	//									}
	//								}
	//							}
	//						}
	//					}
	//				}
	//				LOOP_Fake_Conv_0:
	//				for (int row = 0; row < ROW_TILE_SIZE+2; row ++){
	//					for (int col = 0; col < H_fmap_out; col ++){
	//						for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++){
	//							if (c_in == 0) {
	//								out_buf_t0[ch][row][col] = 0;
	//							}
	//							for (int krow = 0; krow < 3; krow ++){
	//								for (int kcol = 0; kcol < 3; kcol ++){
	//									int row_idx_pad = row - 2 + krow;
	//									int col_idx_pad = col - 2 + kcol;
	//									if (row_idx_pad>=1 && row_idx_pad<ROW_TILE_SIZE+2 && col_idx_pad>=0 && col_idx_pad<H_fmap_out) {
	//										uint32 a = conv_buf_0[row_idx_pad][col_idx_pad];
	//										uint32 b = weight_tile_buffer[ch][krow][kcol];
	//										out_buf_t0[ch][row][col] += popcnt(a, b);
	//									}
	//								}
	//							}
	//						}
	//					}
	//				}
	//			}
	//			for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++) {
	//				for (int row = 0; row < ROW_TILE_SIZE; row ++) {
	//					for (int col = 0; col < H_fmap_out; col ++) {
	//						float msb = (float)out_buf_t1[ch][row+2][col+1]*2.0/3;
	//						float lsb = (float)out_buf_t0[ch][row+2][col+1]*1.0/3;
	//						float result = msb;
	//						if (msb > (float)conv3x3_0_threshold[c_out][ch]) result = msb + lsb;
	//						DDR_buf[out_channel_start + ch][row_tile_start + row][col] = result;
	//					}
	//				}
	//			}
	//		}
	//	}


	FIX_32_12 linear_out_buf[1000] = {};

	write_output:
	for(int i=0; i<1000; i++){
#pragma HLS PIPELINE
		output[i] = linear_out_buf[i];
	}
}
