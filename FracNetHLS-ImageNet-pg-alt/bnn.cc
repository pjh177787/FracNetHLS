#include "bnn.h"
#include "layer.h"
#include "pgconv.h"
#include "weights_conv1_64.h"
#include "dimension_def.h"

using namespace std;
FIX_FM_acc popcnt(uint64 a, uint64 b){
	uint64 c = ~(a^b);
	FIX_FM_acc sum = 0;
	for (int i = 0; i <64; i ++){
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

	uint64 conv_buf_all_1[BUF_HEIGHT_1][BUF_WIDTH_1] = {}; // 226*225
	uint64 conv_buf_all_0[BUF_HEIGHT_0][BUF_WIDTH_0] = {}; // 114*113

	FIX_FM_acc out_buf_1[CHANNEL_OUT_T][ROW_TILE_SIZE+2][BUF_WIDTH_1] = {};
	FIX_FM_acc out_buf_0[CHANNEL_OUT_T][ROW_TILE_SIZE+2][BUF_WIDTH_0] = {};
	FIX_FM_acc out_buf_t1[CHANNEL_OUT_T][ROW_TILE_SIZE+2][BUF_WIDTH_1] = {};
	FIX_FM_acc out_buf_t0[CHANNEL_OUT_T][ROW_TILE_SIZE+2][BUF_WIDTH_0] = {};
#pragma HLS ARRAY_PARTITION variable=out_buf_1 complete dim=1
#pragma HLS ARRAY_PARTITION variable=out_buf_0 complete dim=1
#pragma HLS ARRAY_PARTITION variable=out_buf_t1 complete dim=1
#pragma HLS ARRAY_PARTITION variable=out_buf_t0 complete dim=1

	uint64 weight_tile_buffer[128][8][3][3] = {}; // output parallelism 8 is ideal because 8*64=512 which is the bus width.
#pragma HLS ARRAY_PARTITION variable=weight_tile_buffer complete dim=1

	FIX_32_8 bn_weight_buffer[128][8] = {};
	FIX_32_8 bn_bias_buffer[128][8] = {};

	// 	global_buffer_init_0:
	// 	for (int i = 0; i < 12996; i ++){
	// #pragma HLS PIPELINE
	// 		conv_buf_all_1[i] = 0;
	// 		conv_buf_all_0[i] = 0;
	// 	}

	int H_fmap_in, H_fmap_out, in_channels, out_channels;
	int in_channels_after_pack, stride;
	int out_channel_start, row_tile_start;
	int conv3x3_weight_ptr, weights_all_ptr;

	////////////////////////////////////////////////
	//////////// GET IMAGE + CONV1 /////////////////
	////////////////////////////////////////////////
	conv3x3_weight_ptr = 0;
	weights_all_ptr = 0;
	in_channels_after_pack = 3;
	out_channels = 32;
	H_fmap_out = 224;

	LOOP_Load_BN_weight:
	for (int c_out = 0; c_out < out_channels/16; c_out ++){
#pragma HLS PIPELINE II=8
		uint512 data_pack = weights_all[weights_all_ptr];
		weights_all_ptr += 1;
		for (int i = 0; i < 2; i ++) {
			for (int j = 0; j < 8; j ++){
				int k = i*8 + j;
				bn_weight_buffer[c_out*2 + i][j].range(31, 0) = data_pack.range(31+k*32, k*32);
			}
		}
	}
	LOOP_Load_BN_bias:
	for (int c_out = 0; c_out < out_channels/16; c_out ++){
#pragma HLS PIPELINE II=8
		uint512 data_pack = weights_all[weights_all_ptr];
		weights_all_ptr += 1;
		for (int i = 0; i < 2; i ++){
			for (int j = 0; j < 8; j ++){
				int k = i*8 + j;
				bn_bias_buffer[c_out*2 + i][j].range(31, 0) = data_pack.range(31+k*32, k*32);
			}
		}
	}
	LOOP_GetImg_Conv1:
	for (int c_out = 0; c_out < out_channels/OUT_CHANNEL_PARALLELISM; c_out ++){
		for (int row_t = 0; row_t < H_fmap_out/ROW_TILE_SIZE; row_t++){
			for (int c_in = 0; c_in < 3; c_in ++) {
				out_channel_start = c_out*OUT_CHANNEL_PARALLELISM;
				row_tile_start = row_t*ROW_TILE_SIZE;

				LOOP_GetImg:
				for (int row = 0; row < ROW_TILE_SIZE+2; row ++){
					for (int col = 0; col < 225; col ++){
#pragma HLS PIPELINE
						int index_thermo = c_in*224*224 + (row_tile_start+row-1)*224 + col;
						if ((row_tile_start+row >= 1) && (row_tile_start+row <= 224) && (col <= 223)) {
							conv_buf_all_1[row_tile_start+row][col].range(63,32) = 0;
							conv_buf_all_1[row_tile_start+row][col].range(31,0) = image_thermo[index_thermo];
						} else {
							conv_buf_all_1[row_tile_start+row][col] = 0;
						}
					}
				}
				// After this conv_buf_all_1 should be full
				// the first row is padded with zero
				// the last row is padded with zero
				// the last col is padded with zero
				// LOOP_Conv1:


				LOOP_load_weights:
				for (int row = 0; row < 3; row ++) {
					for (int col = 0; col < 3; col ++) {
#pragma HLS PIPELINE
						for (int ch = 0; ch < 8; ch ++){
#pragma HLS ARRAY_PARTITION variable=l_0_0_weight complete dim=3
							weight_tile_buffer[c_in][ch][row][col] = l_0_0_weight[c_out][c_in][ch][row][col];
						}
					}
				}

				LOOP_Fake_Conv:
				for (int row = 0; row < ROW_TILE_SIZE; row ++){
					for (int col = 0; col < 225; col ++){
						for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++){
							if (c_in == 0) {
								out_buf_t1[ch][row][col] = 0;
							}
							for (int krow = 0; krow < 3; krow ++){
								for (int kcol = 0; kcol < 3; kcol ++){
									if (col+kcol-1 >= 0 && col+kcol-1 < 225 && row_tile_start+row+krow > 0 && row_tile_start+row+krow < 226) {
										uint64 a = conv_buf_all_1[row_tile_start+row+krow][col+kcol-1];
										uint64 b = weight_tile_buffer[c_in][ch][krow][kcol];
										out_buf_t1[ch][row][col] += popcnt(a, b) - out_channels;
									}
								}
							}
						}
					}
				}

//				pg_conv3x3_tile(
//						conv_buf_all_1, conv_buf_all_0, weight_tile_buffer[c_in],
//						out_buf_t1, out_buf_t0,
//						c_in, out_channels, H_fmap_out, row_tile_start
//				);

			}
			for (int row = 0; row < ROW_TILE_SIZE/2; row ++) {
				for (int col = 0; col < H_fmap_out/2; col ++) {
					for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++) {
#pragma HLS PIPELINE
#ifdef SW_TEST
						float result = (float)bn_weight_buffer[c_out][ch]*out_buf_t1[ch][row*2][col*2] + (float)bn_bias_buffer[c_out][ch];
#else
						float result = (FIX_32_8)bn_weight_buffer[c_out][ch]*out_buf_t1[ch][row*2][col*2] + (FIX_32_8)bn_bias_buffer[c_out][ch];
#endif
						DDR_buf[out_channel_start + ch][row_tile_start/2 + row][col] = result;
					}
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
//	in_channels = 32;
//	in_channels_after_pack = 1;
//	out_channels = 32;
//	stride = 1;
//
//	////////////////////////////////////////////////
//	//////////// layer1_0 PG1 /////////////////////
//	LOOP_Load_BN_weight_layer1_0:
//	for (int c_out = 0; c_out < out_channels/16; c_out ++){
//#pragma HLS PIPELINE II=8
//		uint512 data_pack = weights_all[weights_all_ptr];
//		weights_all_ptr += 1;
//		for (int i = 0; i < 2; i ++) {
//			for (int j = 0; j < 8; j ++){
//				bn_weight_buffer[c_out*16 + i][j].range(31, 0) = data_pack.range(31+i*32, i*32);
//			}
//		}
//	}
//	LOOP_Load_BN_bias_layer1_0:
//	for (int c_out = 0; c_out < out_channels/16; c_out ++){
//#pragma HLS PIPELINE II=8
//		uint512 data_pack = weights_all[weights_all_ptr];
//		weights_all_ptr += 1;
//		for (int i = 0; i < 2; i ++){
//			for (int j = 0; j < 8; j ++){
//				bn_bias_buffer[c_out*16 + i][j].range(31, 0) = data_pack.range(31+i*32, i*32);
//			}
//		}
//	}
//	LOOP_layer1_0:
//	for (int c_out = 0; c_out < out_channels/OUT_CHANNEL_PARALLELISM; c_out ++) {
//
//	}


	FIX_32_12 linear_out_buf[1000] = {};

	write_output:
	for(int i=0; i<1000; i++){
#pragma HLS PIPELINE
		output[i] = linear_out_buf[i];
	}
}
