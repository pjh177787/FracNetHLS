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

		float DDR_buf[2048][226][225],

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

	//	uint32 conv_buf_1[ROW_TILE_SIZE+2][BUF_WIDTH_0] = {}; // 114*113
	//	uint32 conv_buf_0[ROW_TILE_SIZE+2][BUF_WIDTH_0] = {}; // 114*113
	uint32 feat_buf_all[3][BUF_HEIGHT_1*BUF_WIDTH_1] = {}; // 3*226*225 = 4881600 = 272 18K

	// Arrange feat_buf_all as such:
	// [ROW][CH][COL]

	// feat_buf_all[3][BUF_HEIGHT_1*BUF_WIDTH_1]
	// feaf_buf_all[1].. // bit1
	// feat_buf_all[0].. // bit0

	//	FIX_FM_acc out_buf_t1[OUT_CHANNEL_PARALLELISM][(ROW_TILE_SIZE+2)*(BUF_WIDTH_1+1)] = {};
	//	FIX_FM_acc out_buf_t0[OUT_CHANNEL_PARALLELISM][(ROW_TILE_SIZE+2)*(BUF_WIDTH_1+1)] = {};
	FIX_FM_acc out_buf_sc[OUT_CHANNEL_PARALLELISM][ROW_TILE_SIZE][BUF_WIDTH_0] = {}; // shortcut 32*8*114 = 917504
	FIX_FM_acc out_buf_all[OUT_CHANNEL_PARALLELISM][(ROW_TILE_SIZE+2)*(BUF_WIDTH_1+1)] = {}; // all 32*10*226 = 2315240
#pragma HLS ARRAY_PARTITION variable=out_buf_t1 complete dim=1
#pragma HLS ARRAY_PARTITION variable=out_buf_t0 complete dim=1
#pragma HLS ARRAY_PARTITION variable=out_buf_sc complete dim=1

	uint32 weight3x3_tile_buffer[OUT_CHANNEL_PARALLELISM][3][3] = {};
#pragma HLS ARRAY_PARTITION variable=weight3x3_tile_buffer complete dim=1
	uint32 weight1x1_tile_buffer[OUT_CHANNEL_PARALLELISM] = {};
#pragma HLS ARRAY_PARTITION variable=weight1x1_tile_buffer complete dim=1

	FIX_WT_TEST conv3x3_0_threshold[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_WT_TEST conv3x3_1_weight[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_WT_TEST conv3x3_1_bias[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_WT_TEST pw_0_threshold[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_WT_TEST pw_1_weight[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_WT_TEST pw_1_bias[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_WT_TEST relu1_shift_x[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_WT_TEST relu1_shift_y[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_WT_TEST relu1_weight[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_WT_TEST relu2_shift_x[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_WT_TEST relu2_shift_y[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_WT_TEST relu2_weight[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_WT_TEST bn1_weight[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_WT_TEST bn1_bias[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_WT_TEST bn2_weight[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};
	FIX_WT_TEST bn2_bias[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM] = {};

	int H_fmap_in, H_fmap_out, stride;
	int conv_in_channels, conv_out_channels;
	int pw_in_channels, pw_out_channels;
	int in_channels_after_pack, out_channels_after_tile;
	int in_channel_start, out_channel_start, row_tile_start, out_buf_col_start;
	int conv3x3_weight_ptr, conv1x1_weight_ptr, weights_all_ptr;
	int conv3x3_weight_ptr_inc, conv1x1_weight_ptr_inc;
	int switch_bank;


	////////////////////////////////////////////////
	//////////// GET IMAGE + CONV1 /////////////////
	////////////////////////////////////////////////
	conv3x3_weight_ptr = 0;
	weights_all_ptr = 0;
	in_channels_after_pack = 3;
	conv_in_channels = 96;
	conv_out_channels = 32;
	H_fmap_out = 224;
	stride=2;

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
						weight3x3_tile_buffer[ch][row][col] = l_0_0_weight[0][c_in][ch][row][col].range(31, 0);
					}
				}
			}
			out_buf_col_start = 0;
			pg_conv3x3_tile(
					feat_buf_all[2], weight3x3_tile_buffer, out_buf_all,
					c_in, H_fmap_out, row_tile_start, out_buf_col_start
			);
		}
		for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++) {
			for (int row = 0; row < ROW_TILE_SIZE/stride; row ++) { // Stride 2
				for (int col = 0; col < H_fmap_out/stride; col ++) { // Stride 2
#pragma HLS PIPELINE
					FIX_FM_acc output = out_buf_all[ch][(row*stride+2)*(H_fmap_out+1)+col*stride+1];
#ifdef SW_TEST
					float result = (float)bn1_weight[0][ch]*output + (float)bn1_bias[0][ch];
#else
					float result = bn1_weight[0][ch]*output + bn1_bias[0][ch];
#endif
					DDR_buf[ch][row_tile_start/stride + row][col] = result;

					uint2 result_t = to2bit(result);
					feat_buf_all[1][(row_tile_start/stride+row+1)*(H_fmap_out/stride+1) + col][ch] = result_t[1]; // MSB
					feat_buf_all[0][(row_tile_start/stride+row+1)*(H_fmap_out/stride+1) + col][ch] = result_t[0]; // LSB
				}
			}
		}
	}



	////////////////////////////////////////////////
	//////////// LAYER 1 ///////////////////////////
	////////////////////////////////////////////////

	conv_in_channels = 32;
	conv_out_channels = 32;
	pw_in_channels = 32;
	pw_out_channels = 64;

	weights_all_ptr = load_layer_1D_weights(
			conv3x3_0_threshold, conv3x3_1_weight, conv3x3_1_bias,
			pw_0_threshold, pw_1_weight, pw_1_bias,
			relu1_shift_x, relu1_shift_y, relu1_weight,
			relu2_shift_x, relu2_shift_y, relu2_weight,
			bn1_weight, bn1_bias, bn2_weight, bn2_bias,

			weights_all,
			weights_all_ptr,
			conv_out_channels,
			pw_out_channels
	);

	////////////////////////////////////////////////
	//////////// layer1_0 PG1 /////////////////////

	H_fmap_in = 112;
	H_fmap_out = 112;
	stride = 1;
	switch_bank = 0;


	in_channels_after_pack = conv_in_channels/IN_CHANNEL_BITPACK;
	out_channels_after_tile = conv_out_channels/OUT_CHANNEL_PARALLELISM;

	conv3x3_weight_ptr = 6; // 32*96/512 skips first layer
	conv3x3_weight_ptr_inc = conv_in_channels*conv_out_channels/BUS_WIDTH;

	LOOP_layer1_0:
	for (int c_out = 0; c_out < out_channels_after_tile; c_out ++) {
		for (int row_t = 0; row_t < H_fmap_out/ROW_TILE_SIZE; row_t ++) {
			for (int c_in = 0; c_in < in_channels_after_pack; c_in ++) {
				out_channel_start = c_out*OUT_CHANNEL_PARALLELISM;
				row_tile_start = row_t*ROW_TILE_SIZE;
				in_channel_start = c_in*IN_CHANNEL_BITPACK;

				load_conv3x3_weights(
						weight3x3_tile_buffer,
						conv_weight_3x3_all,
						conv3x3_weight_ptr,
						c_out, c_in,
						in_channels_after_pack
				);
				out_buf_col_start = 0;
				pg_conv3x3_tile(
						feat_buf_all[1], weight3x3_tile_buffer, out_buf_all,
						c_in, H_fmap_out, row_tile_start, out_buf_col_start
				);
				out_buf_col_start = (ROW_TILE_SIZE+2)*(H_fmap_out+1);
				pg_conv3x3_tile(
						feat_buf_all[0], weight3x3_tile_buffer, out_buf_all,
						c_in, H_fmap_out, row_tile_start, out_buf_col_start
				);
			}
			load_shortcut(
					out_buf_sc, DDR_buf,
					H_fmap_out, conv_in_channels,
					out_channel_start, row_tile_start, switch_bank
			);
			bn_relu_sc_relu(
					conv3x3_0_threshold, conv3x3_1_weight, conv3x3_1_bias,
					relu1_shift_x, relu1_shift_y, relu1_weight,
					bn1_weight, bn1_bias,

					DDR_buf,
					out_buf_all, out_buf_sc, feat_buf_all,

					H_fmap_out, c_out,
					out_channel_start, row_tile_start,
					stride, switch_bank
			);
		}
	}

	////////////////////////////////////////////////
	//////////// layer1_pw /////////////////////////

	H_fmap_in = 112;
	H_fmap_out = 112;
	stride = 1;
	switch_bank = 1;

	in_channels_after_pack = pw_in_channels/IN_CHANNEL_BITPACK;
	out_channels_after_tile = pw_out_channels/OUT_CHANNEL_PARALLELISM;

	conv1x1_weight_ptr = 0;
	conv1x1_weight_ptr_inc = pw_in_channels*pw_out_channels/BUS_WIDTH;

	LOOP_layer1_pw:
	for (int c_out = 0; c_out < out_channels_after_tile; c_out ++) {
		for (int row_t = 0; row_t < H_fmap_out/ROW_TILE_SIZE; row_t ++) {
			for (int c_in = 0; c_in < in_channels_after_pack; c_in ++) {
				out_channel_start = c_out*OUT_CHANNEL_PARALLELISM;
				row_tile_start = row_t*ROW_TILE_SIZE;
				in_channel_start = c_in*IN_CHANNEL_BITPACK;

				load_conv1x1_weights(
						weight1x1_tile_buffer,
						conv_weight_1x1_all,
						conv1x1_weight_ptr,
						c_out, c_in,
						in_channels_after_pack
				);
				out_buf_col_start = 0;
				pg_conv1x1_tile(
						feat_buf_all[1], weight1x1_tile_buffer, out_buf_all,
						c_in, H_fmap_out, row_tile_start, out_buf_col_start
				);
				out_buf_col_start = (ROW_TILE_SIZE+2)*(H_fmap_out+1);
				pg_conv1x1_tile(
						feat_buf_all[0], weight1x1_tile_buffer, out_buf_all,
						c_in, H_fmap_out, row_tile_start, out_buf_col_start
				);
			}
			load_shortcut(
					out_buf_sc, DDR_buf,
					H_fmap_out, pw_in_channels,
					out_channel_start, row_tile_start, switch_bank
			);
			bn_relu_sc_relu(
					pw_0_threshold, pw_1_weight, pw_1_bias,
					relu2_shift_x, relu2_shift_y, relu2_weight,
					bn2_weight, bn2_bias,

					DDR_buf,
					out_buf_all, out_buf_sc, feat_buf_all,

					H_fmap_out, c_out,
					out_channel_start, row_tile_start,
					stride, switch_bank
			);
		}
	}

	////////////////////////////////////////////////
	//////////// LAYER 2 ///////////////////////////
	////////////////////////////////////////////////

	conv_in_channels = 64;
	conv_out_channels = 64;
	pw_in_channels = 64;
	pw_out_channels = 128;

	weights_all_ptr = load_layer_1D_weights(
			conv3x3_0_threshold, conv3x3_1_weight, conv3x3_1_bias,
			pw_0_threshold, pw_1_weight, pw_1_bias,
			relu1_shift_x, relu1_shift_y, relu1_weight,
			relu2_shift_x, relu2_shift_y, relu2_weight,
			bn1_weight, bn1_bias, bn2_weight, bn2_bias,

			weights_all,
			weights_all_ptr,
			conv_out_channels,
			pw_out_channels
	);

	////////////////////////////////////////////////
	//////////// layer2_conv /////////////////////

	H_fmap_in = 112;
	H_fmap_out = 56;
	stride = 2;
	switch_bank = 0;


	in_channels_after_pack = conv_in_channels/IN_CHANNEL_BITPACK;
	out_channels_after_tile = conv_out_channels/OUT_CHANNEL_PARALLELISM;

	conv3x3_weight_ptr += conv3x3_weight_ptr_inc;
	conv3x3_weight_ptr_inc = conv_in_channels*conv_out_channels/BUS_WIDTH;

	LOOP_layer2_conv:
	for (int c_out = 0; c_out < out_channels_after_tile; c_out ++) {
		for (int row_t = 0; row_t < H_fmap_in/ROW_TILE_SIZE; row_t ++) {
			for (int c_in = 0; c_in < in_channels_after_pack; c_in ++) {
				out_channel_start = c_out*OUT_CHANNEL_PARALLELISM;
				row_tile_start = row_t*ROW_TILE_SIZE;
				in_channel_start = c_in*IN_CHANNEL_BITPACK;

				load_conv3x3_weights(
						weight3x3_tile_buffer,
						conv_weight_3x3_all,
						conv3x3_weight_ptr,
						c_out, c_in,
						in_channels_after_pack
				);

				out_buf_col_start = 0;
				pg_conv3x3_tile(
						feat_buf_all[1], weight3x3_tile_buffer, out_buf_all,
						c_in, H_fmap_in, row_tile_start, out_buf_col_start
				);
				out_buf_col_start = (ROW_TILE_SIZE+2)*(H_fmap_in+1);
				pg_conv3x3_tile(
						feat_buf_all[0], weight3x3_tile_buffer, out_buf_all,
						c_in, H_fmap_in, row_tile_start, out_buf_col_start
				);
			}
//			load_shortcut(
//					out_buf_sc, DDR_buf,
//					H_fmap_out, conv_in_channels,
//					out_channel_start, row_tile_start, switch_bank
//			);
//			LOOP_avg_pool:
//			for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++){
//				for (int row = 0; row < ROW_TILE_SIZE/2; row ++){
//					for (int col = 0; col < H_fmap_in/2; col ++){
//						float tmp = 0;
//						for (int ii = 0; ii < 2; ii ++) {
//							for (int jj = 0; jj < 2; jj ++) {
//								tmp += out_buf_sc[ch][row*2+ii][col*2+jj];
//							}
//						}
//						out_buf_sc[ch][row][col] = tmp;
//					}
//				}
//			}
//			bn_relu_sc_relu(
//					conv3x3_0_threshold, conv3x3_1_weight, conv3x3_1_bias,
//					relu1_shift_x, relu1_shift_y, relu1_weight,
//					bn1_weight, bn1_bias,
//
//					DDR_buf,
//					out_buf_all, out_buf_sc, feat_buf_all,
//
//					H_fmap_out, c_out,
//					out_channel_start, row_tile_start,
//					stride, switch_bank
//			);
			for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++) {
				for (int row = 0; row < ROW_TILE_SIZE/stride; row ++) {
					for (int col = 0; col < H_fmap_in/stride; col ++) {
#pragma HLS PIPELINE
						int out_buf_col_start = 0;
						FIX_FM_acc msb = out_buf_all[ch][(row*stride+2)*(H_fmap_in+1)+col*stride+1+out_buf_col_start]*(FIX_WT)(2.0/3);
						out_buf_col_start = (ROW_TILE_SIZE+2)*(H_fmap_in+1);
						FIX_FM_acc lsb = out_buf_all[ch][(row*stride+2)*(H_fmap_in+1)+col*stride+1+out_buf_col_start]*(FIX_WT)(1.0/3);
						FIX_FM_acc output = msb;
						if (msb > (float)conv3x3_0_threshold[c_out][ch]) output = msb + lsb;
						//#ifdef SW_TEST
						//						float result_bn = (float)conv3x3_1_weight[c_out][ch]*output + (float)conv3x3_1_bias[c_out][ch];
						//						float t = result_bn + (float)relu1_shift_x[c_out][ch];
						//						if (t < 0) {
						//							t = (float)relu1_weight[c_out][ch]*t;
						//						}
						//						float result_relu = t + (float)relu1_shift_y[c_out][ch];
						//						float result_sc = (float)result_relu + out_buf_sc[ch][row][col];
						//						result_bn = (float)bn1_weight[c_out][ch]*result_sc + (float)bn1_bias[c_out][ch];
						//#else
						//						FIX_FM_acc result_bn = conv_bn_weight[c_out][ch]*output + conv_bn_bias[c_out][ch];
						//						FIX_FM_acc t = result_bn + relu_shift_x[c_out][ch];
						//						if (t < 0) {
						//							t = relu1_weight[c_out][ch]*t;
						//						}
						//						FIX_FM_acc result_relu = t + relu1_shift_y[c_out][ch];
						//						FIX_FM_acc result_sc = result_relu + out_buf_sc[ch][row][col];
						//						result_bn = bn_weight[c_out][ch]*result_sc + bn_bias[c_out][ch];
						//#endif
						int ddr_ptr = out_channel_start + ch;
						int fmap_ptr = (row_tile_start/stride+row)*(H_fmap_in/stride) + col + FEAT_BUF_OFFSET;
						DDR_buf[ddr_ptr][row_tile_start/stride + row][col] = output;
						//						uint2 result_t = to2bit(result_bn);
						//						feat_buf_all[1][fmap_ptr][ch] = result_t[1]; // MSB
						//						feat_buf_all[0][fmap_ptr][ch] = result_t[0]; // LSB
					}
				}
			}
		}
	}

	//	////////////////////////////////////////////////
	//	//////////// layer2_pw /////////////////////////
	//
	//	H_fmap_in = 112;
	//	H_fmap_out = 112;
	//	stride = 1;
	//	switch_bank = 1;
	//
	//	in_channels_after_pack = pw_in_channels/IN_CHANNEL_BITPACK;
	//	out_channels_after_tile = pw_out_channels/OUT_CHANNEL_PARALLELISM;
	//
	//	conv1x1_weight_ptr = 0;
	//	conv1x1_weight_ptr_inc = pw_in_channels*pw_out_channels/BUS_WIDTH;
	//
	//	LOOP_layer2_pw:
	//	for (int c_out = 0; c_out < out_channels_after_tile; c_out ++) {
	//		for (int row_t = 0; row_t < H_fmap_out/ROW_TILE_SIZE; row_t ++) {
	//			for (int c_in = 0; c_in < in_channels_after_pack; c_in ++) {
	//				out_channel_start = c_out*OUT_CHANNEL_PARALLELISM;
	//				row_tile_start = row_t*ROW_TILE_SIZE;
	//				in_channel_start = c_in*IN_CHANNEL_BITPACK;
	//
	//				load_conv1x1_weights(
	//						weight1x1_tile_buffer,
	//						conv_weight_1x1_all,
	//						conv1x1_weight_ptr,
	//						c_out, c_in,
	//						in_channels_after_pack
	//				);
	//				out_buf_col_start = 0;
	//				pg_conv1x1_tile(
	//						feat_buf_all[1], weight1x1_tile_buffer, out_buf_all,
	//						c_in, H_fmap_out, row_tile_start, out_buf_col_start
	//				);
	//				out_buf_col_start = (ROW_TILE_SIZE+2)*(H_fmap_out+1);
	//				pg_conv1x1_tile(
	//						feat_buf_all[0], weight1x1_tile_buffer, out_buf_all,
	//						c_in, H_fmap_out, row_tile_start, out_buf_col_start
	//				);
	//			}
	//			load_shortcut(
	//					out_buf_sc, DDR_buf,
	//					H_fmap_out, pw_in_channels,
	//					out_channel_start, row_tile_start, switch_bank
	//			);
	//			bn_relu_sc_relu(
	//					pw_0_threshold, pw_1_weight, pw_1_bias,
	//					relu2_shift_x, relu2_shift_y, relu2_weight,
	//					bn2_weight, bn2_bias,
	//
	//					DDR_buf,
	//					out_buf_all, out_buf_sc, feat_buf_all,
	//
	//					H_fmap_out, c_out,
	//					out_channel_start, row_tile_start,
	//					stride, switch_bank
	//			);
	//		}
	//	}



	FIX_32_12 linear_out_buf[1000] = {};

	write_output:
	for(int i=0; i<1000; i++){
#pragma HLS PIPELINE
		output[i] = linear_out_buf[i];
	}
}
