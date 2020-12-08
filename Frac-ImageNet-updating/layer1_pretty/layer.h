#ifndef LAYER_H
#define LAYER_H

#include "typedefs.h"
#include "dimension_def.h"
#include "bnn.h"
//#include "weights_fracnet_64.h"
//#include "conv_weights.h"
#include <iostream>
inline uint2 to2bit(FIX_FM_acc x)
{
	const FIX_WT scale = 1.5;
	ap_ufixed<2, 2, AP_RND, AP_SAT> temp = (ap_ufixed<2, 2, AP_RND, AP_SAT>)((x+1)*scale);
	return (uint2)temp;
}

inline int load_1D_weights(
		uint512 weights_all[8313],
		FIX_32_8 weight_buffer[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],
		int out_channels,
		int weights_all_ptr)
{
#pragma HLS ARRAY_PARTITION variable=weight_buffer cyclic factor=16 dim=2

	int incremented_ptr = weights_all_ptr;
	for (int c_out = 0; c_out < out_channels/OUT_CHANNEL_PARALLELISM; c_out ++){
		for (int i = 0; i < NUM_BUS_READS; i ++){
#pragma HLS PIPELINE II=1
			uint512 data_pack = weights_all[incremented_ptr];
			incremented_ptr += 1;
			for (int j = 0; j < NUM_WT_PACKS; j ++) {
				weight_buffer[c_out][i*NUM_WT_PACKS + j].range(WEIGHT_BITS-1, 0) = data_pack.range(WEIGHT_BITS-1+j*WEIGHT_BITS, j*WEIGHT_BITS);
			}
		}
	}
	return incremented_ptr;
}

int load_layer_1D_weights(
		FIX_32_8 conv3x3_0_threshold[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],
		FIX_32_8 conv3x3_1_weight[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],
		FIX_32_8 conv3x3_1_bias[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],
		FIX_32_8 pw_0_threshold[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],
		FIX_32_8 pw_1_weight[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],
		FIX_32_8 pw_1_bias[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],
		FIX_32_8 relu1_shift_x[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],
		FIX_32_8 relu1_shift_y[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],
		FIX_32_8 relu1_weight[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],
		FIX_32_8 relu2_shift_x[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],
		FIX_32_8 relu2_shift_y[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],
		FIX_32_8 relu2_weight[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],
		FIX_32_8 bn1_weight[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],
		FIX_32_8 bn1_bias[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],
		FIX_32_8 bn2_weight[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],
		FIX_32_8 bn2_bias[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],

		uint512 weights_all[8313],
		int weights_all_ptr,
		int conv_out_channels,
		int pw_out_channels
)
{
	weights_all_ptr = load_1D_weights(weights_all, conv3x3_0_threshold, conv_out_channels, weights_all_ptr);
	weights_all_ptr = load_1D_weights(weights_all, conv3x3_1_weight, conv_out_channels, weights_all_ptr);
	weights_all_ptr = load_1D_weights(weights_all, conv3x3_1_bias, conv_out_channels, weights_all_ptr);
	weights_all_ptr = load_1D_weights(weights_all, pw_0_threshold, pw_out_channels, weights_all_ptr);
	weights_all_ptr = load_1D_weights(weights_all, pw_1_weight, pw_out_channels, weights_all_ptr);
	weights_all_ptr = load_1D_weights(weights_all, pw_1_bias, pw_out_channels, weights_all_ptr);
	weights_all_ptr = load_1D_weights(weights_all, relu1_shift_x, conv_out_channels, weights_all_ptr);
	weights_all_ptr = load_1D_weights(weights_all, relu1_shift_y, conv_out_channels, weights_all_ptr);
	weights_all_ptr = load_1D_weights(weights_all, relu1_weight, conv_out_channels, weights_all_ptr);
	weights_all_ptr = load_1D_weights(weights_all, relu2_shift_x, pw_out_channels, weights_all_ptr);
	weights_all_ptr = load_1D_weights(weights_all, relu2_shift_y, pw_out_channels, weights_all_ptr);
	weights_all_ptr = load_1D_weights(weights_all, relu2_weight, pw_out_channels, weights_all_ptr);
	weights_all_ptr = load_1D_weights(weights_all, bn1_weight, conv_out_channels, weights_all_ptr);
	weights_all_ptr = load_1D_weights(weights_all, bn1_bias, conv_out_channels, weights_all_ptr);
	weights_all_ptr = load_1D_weights(weights_all, bn2_weight, pw_out_channels, weights_all_ptr);
	weights_all_ptr = load_1D_weights(weights_all, bn2_bias, pw_out_channels, weights_all_ptr);

	return weights_all_ptr;
}

void load_conv3x3_weights(
		uint32 weight3x3_tile_buffer[OUT_CHANNEL_PARALLELISM][3][3],
		uint512 conv_weight_3x3_all[174592][3][3],
		int conv3x3_weight_ptr,
		int c_out,
		int c_in,
		int in_channels_after_pack
)
{
	for (int i = 0; i < NUM_BUS_READS; i ++) {
		for (int row = 0; row < 3; row ++) {
			for (int col = 0; col < 3; col ++) {
#pragma HLS PIPELINE
				int ptr_start = conv3x3_weight_ptr + c_out*in_channels_after_pack*NUM_BUS_READS + c_in*NUM_BUS_READS;
				uint512 data_pack = conv_weight_3x3_all[ptr_start+i][row][col];
				for (int j = 0; j < NUM_WT_PACKS; j ++) {
					weight3x3_tile_buffer[i*NUM_WT_PACKS + j][row][col].range(WEIGHT_BITS-1, 0) = data_pack.range(WEIGHT_BITS-1+j*WEIGHT_BITS, j*WEIGHT_BITS);
				}
			}
		}
	}
}

void load_conv1x1_weights(
		uint32 weight1x1_tile_buffer[OUT_CHANNEL_PARALLELISM],
		uint512 conv_weight_1x1_all[174592],
		int conv1x1_weight_ptr,
		int c_out,
		int c_in,
		int in_channels_after_pack
)
{
	for (int i = 0; i < NUM_BUS_READS; i ++) {
#pragma HLS PIPELINE
		int ptr_start = conv1x1_weight_ptr + c_out*in_channels_after_pack*NUM_BUS_READS + c_in*NUM_BUS_READS;
		uint512 data_pack = conv_weight_1x1_all[ptr_start+i];
		for (int j = 0; j < NUM_WT_PACKS; j ++) {
			weight1x1_tile_buffer[i*NUM_WT_PACKS + j].range(WEIGHT_BITS-1, 0) = data_pack.range(WEIGHT_BITS-1+j*WEIGHT_BITS, j*WEIGHT_BITS);
		}
	}
}

void load_shortcut(
		FIX_FM_acc out_buf_sc[OUT_CHANNEL_PARALLELISM][ROW_TILE_SIZE][BUF_WIDTH_0],
		float DDR_buf[2048][226][225],

		int H_fmap_out,
		int in_channels,
		int out_channel_start,
		int row_tile_start,
		int switch_bank
)
{
	for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++) {
		for (int row = 0; row < ROW_TILE_SIZE; row ++) {
			for (int col = 0; col < H_fmap_out; col ++) {
#pragma HLS PIPELINE
				int ddr_channel_ptr = out_channel_start + ch;
				if (switch_bank) {
					if (ddr_channel_ptr >= in_channels) ddr_channel_ptr -= in_channels;
					ddr_channel_ptr += DDR_CH_OFFSET;
				}
				out_buf_sc[ch][row][col] = DDR_buf[ddr_channel_ptr][row_tile_start + row][col];
			}
		}
	}
}

void bn_relu_sc_relu(
		FIX_32_8 conv_threshold[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],
		FIX_32_8 conv_bn_weight[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],
		FIX_32_8 conv_bn_bias[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],
		FIX_32_8 relu_shift_x[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],
		FIX_32_8 relu_shift_y[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],
		FIX_32_8 relu_weight[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],
		FIX_32_8 bn_weight[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],
		FIX_32_8 bn_bias[1024/OUT_CHANNEL_PARALLELISM][OUT_CHANNEL_PARALLELISM],

		float DDR_buf[2048][226][225],
		FIX_FM_acc out_buf_all[OUT_CHANNEL_PARALLELISM][(ROW_TILE_SIZE+2)*(BUF_WIDTH_1+1)],
		FIX_FM_acc out_buf_sc[OUT_CHANNEL_PARALLELISM][ROW_TILE_SIZE][BUF_WIDTH_0],
		uint32 feat_buf_all[3][BUF_HEIGHT_1*BUF_WIDTH_1],

		int H_fmap_out,
		int c_out,
		int out_channel_start,
		int row_tile_start,
		int stride,
		int switch_bank
)
{
	for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++) {
		for (int row = 0; row < ROW_TILE_SIZE/stride; row ++) {
			for (int col = 0; col < H_fmap_out/stride; col ++) {
#pragma HLS PIPELINE
				int out_buf_col_start = 0;
				FIX_FM_acc msb = out_buf_all[ch][(row*stride+2)*(H_fmap_out+1)+col*stride+1+out_buf_col_start]*(FIX_WT)(2.0/3);
				out_buf_col_start = (ROW_TILE_SIZE+2)*(H_fmap_out+1);
				FIX_FM_acc lsb = out_buf_all[ch][(row*stride+2)*(H_fmap_out+1)+col*stride+1+out_buf_col_start]*(FIX_WT)(1.0/3);
				FIX_FM_acc output = msb;
				if (msb > (float)conv_threshold[c_out][ch]) output = msb + lsb;
#ifdef SW_TEST
				float result_bn = (float)conv_bn_weight[c_out][ch]*output + (float)conv_bn_bias[c_out][ch];
				float t = result_bn + (float)relu_shift_x[c_out][ch];
				if (t < 0) {
					t = (float)relu_shift_y[c_out][ch]*t;
				}
				float result_relu = t + (float)relu_weight[c_out][ch];
				float result_sc = (float)result_relu + out_buf_sc[ch][row][col];
				result_bn = (float)bn_weight[c_out][ch]*result_sc + (float)bn_bias[c_out][ch];
#else
				FIX_FM_acc result_bn = conv3x3_1_weight[c_out][ch]*output + conv3x3_1_bias[c_out][ch];
				FIX_FM_acc t = result_bn + relu1_shift_x[c_out][ch];
				if (t < 0) {
					t = relu1_weight[c_out][ch]*t;
				}
				FIX_FM_acc result_relu = t + relu1_shift_y[c_out][ch];
				FIX_FM_acc result_sc = result_relu + out_buf_sc[ch][row][col];
				result_bn = bn1_weight[c_out][ch]*result_sc + bn1_bias[c_out][ch];
#endif
				int ddr_ptr = 0;
				int fmap_ptr = 0;
				if (switch_bank == 0) {
					ddr_ptr =  out_channel_start + ch + DDR_CH_OFFSET;
					fmap_ptr = (row_tile_start/stride+row)*(H_fmap_out/stride) + col + FEAT_BUF_OFFSET;
				} else {
					ddr_ptr = out_channel_start + ch;
					fmap_ptr = (row_tile_start/stride+row+1)*(H_fmap_out/stride+1) + col;
				}
				DDR_buf[ddr_ptr][row_tile_start/stride + row][col] = result_bn;
				uint2 result_t = to2bit(result_bn);
				feat_buf_all[1][fmap_ptr][ch] = result_t[1]; // MSB
				feat_buf_all[0][fmap_ptr][ch] = result_t[0]; // LSB
			}
		}
	}
}

//void quant_and_pack(
//		FIX_FM_acc prior_outputs[CHANNEL_OUT/CHANNEL_OUT_T][CHANNEL_OUT_T][WIDTH][WIDTH],
//		uint64 msb_buffer[3][WIDTH][WIDTH],
//		uint64 lsb_buffer[1][WIDTH][WIDTH],
//		int H_fmap,
//		int in_channels
//)
//{
//	uint2 val = 0;
//	LOOP_Quant_Pack:
//	for (int ch_t=0; ch_t<CHANNEL_OUT/CHANNEL_OUT_T; ch_t++){
//		for (int row=0; row<H_fmap; row++){
//			for (int col=0; col<H_fmap; col++){
//#pragma HLS PIPELINE
//				int channel_start = ch_t*CHANNEL_OUT_T;
//				for (int ch_offset=0; ch_offset<CHANNEL_OUT_T; ch_offset++){
//					FIX_FM_acc raw_input = prior_outputs[ch_t][ch_offset][row][col];
//					int ch = channel_start + ch_offset;
//					if (ch < in_channels) {
//						val = to2bit(raw_input);
//					} else {
//						val = 0;
//					}
//					msb_buffer[0][row][col][63 - ch] = val[1];
//					lsb_buffer[0][row][col][63 - ch] = val[0];
//				}
//			}
//		}
//	}
//}

//void bn1(
//		FIX_FM_acc out_buf[CHANNEL_OUT/CHANNEL_OUT_T][CHANNEL_OUT_T][WIDTH][WIDTH],
//		int16 block_t0[CHANNEL_OUT_T][WIDTH][WIDTH],
//
//		const FIX_WT *bn_weight,
//		const FIX_WT *bn_bias,
//
//		int stride,
//		int channel_tile,
//		int H_fmap
//)
//{
//	for (int row = 0; row < H_fmap; row ++) {
//		for (int col = 0; col < H_fmap; col ++) {
//#pragma HLS PIPELINE
//			for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++) {
//				out_buf[channel_tile][ch][row][col] = bn_weight[ch]*block_t0[ch][row+1][col+1] + bn_bias[ch];
//			}
//		}
//	}
//}

//void bn_relu_shortcut(
//		FIX_FM_acc residual[CHANNEL_OUT/CHANNEL_OUT_T][CHANNEL_OUT_T][WIDTH][WIDTH],
//		int16 block_t0[CHANNEL_OUT_T][WIDTH][WIDTH],
//		int16 block_t1[CHANNEL_OUT_T][WIDTH][WIDTH],
//
//		const FIX_WT *threshold,
//		const FIX_WT *bn_weight_0,
//		const FIX_WT *bn_weight_1,
//		const FIX_WT *bn_bias_0,
//		const FIX_WT *bn_bias_1,
//		const FIX_WT *relu_x_bias,
//		const FIX_WT *relu_y_bias,
//		const FIX_WT *relu_weight,
//
//		int stride,
//		int channel_tile,
//		int H_fmap,
//		int out_channels
//)
//{
//	FIX_FM_acc out_feature_t0[BN_CHANNEL_PARALLELISM];
//	FIX_FM_acc out_feature_t1[BN_CHANNEL_PARALLELISM];
//#pragma HLS ARRAY_PARTITION variable=out_feature_t0 complete dim=1
//#pragma HLS ARRAY_PARTITION variable=out_feature_t1 complete dim=1
//
//	const FIX_WT msb_scale = 2.0/3.0;
//	const FIX_WT lsb_scale = 1.0/3.0;
//
//	LOOP_BN_RELU_SC:
//	for (int i=0; i<H_fmap; i++) {
//		for (int j=0; j<H_fmap; j++) {
//#pragma HLS PIPELINE
//
//			// Merge Tile
//			for (int ch_offset=0; ch_offset<BN_CHANNEL_PARALLELISM; ch_offset++){
//				out_feature_t0[ch_offset] = block_t0[ch_offset][i*stride+1][j*stride+1];
//				out_feature_t1[ch_offset] = block_t1[ch_offset][i*stride+1][j*stride+1];
//			}
//			for (int ch_offset=0; ch_offset<BN_CHANNEL_PARALLELISM; ch_offset++){
//				out_feature_t0[ch_offset] *= msb_scale;
//				if (out_feature_t0[ch_offset] > threshold[ch_offset])
//					out_feature_t0[ch_offset] += (out_feature_t1[ch_offset]*lsb_scale);
//			}
//
//			// Load Residual
//			for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
//				out_feature_t1[channel_pt] = residual[channel_tile][channel_pt][i][j];
//			}
//
//			// Batch Normalization
//			for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
//				out_feature_t0[channel_pt] = bn_weight_0[channel_pt]*out_feature_t0[channel_pt] + bn_bias_0[channel_pt]; // the first row and column are invalid
//			}
//
//			// ReLU
//			for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
//				out_feature_t0[channel_pt] += relu_x_bias[channel_pt];
//				if (out_feature_t0[channel_pt] < 0) out_feature_t0[channel_pt] *= relu_weight[channel_pt];
//				out_feature_t0[channel_pt] += relu_y_bias[channel_pt];
//			}
//
//			// Shortcut
//			for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
//				out_feature_t1[channel_pt] += out_feature_t0[channel_pt];
//			}
//
//			// Batch Normalization and Write-back
//			for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
//				residual[channel_tile][channel_pt][i][j] = bn_weight_1[channel_pt]*out_feature_t1[channel_pt] + bn_bias_1[channel_pt];
//			}
//		}
//	}
//}

//void avgpool_concat(
//		FIX_FM_acc outputs[CHANNEL_OUT/CHANNEL_OUT_T][CHANNEL_OUT_T][WIDTH][WIDTH],
//		int H_fmap,
//		int in_channels
//)
//{
//#pragma HLS ARRAY_PARTITION variable=outputs complete dim=1
//#pragma HLS ARRAY_PARTITION variable=outputs complete dim=2
//
//	int in_channel_blocks = in_channels/BN_CHANNEL_PARALLELISM;
//
//	FIX_FM_acc out_feature[BN_CHANNEL_PARALLELISM];
//#pragma HLS ARRAY_PARTITION variable=out_feature complete dim=1
//	FIX_FM_acc out_tmp[BN_CHANNEL_PARALLELISM][WIDTH/2][WIDTH/2];
//#pragma HLS ARRAY_PARTITION variable=out_tmp complete dim=1
//
//	LOOP_init:
//	for (int i = 0; i < WIDTH/2; i ++){
//		for (int j = 0; j < WIDTH/2; j ++){
//#pragma HLS PIPELINE
//			for (int channel_pt = 0; channel_pt < BN_CHANNEL_PARALLELISM; channel_pt ++){
//				out_tmp[channel_pt][i][j] = 0;
//			}
//		}
//	}
//	LOOP_avgpool:
//	for (int tile=0; tile < in_channel_blocks; tile ++) {
//		for (int i = 0; i < H_fmap; i ++){
//			for (int j = 0; j < H_fmap; j ++){
//				for (int ii = 0; ii < 2; ii ++){
//					for (int jj = 0; jj < 2; jj ++){
//#pragma HLS PIPELINE
//						for (int channel_pt = 0; channel_pt < BN_CHANNEL_PARALLELISM; channel_pt ++){
//							if (ii + jj == 0) {
//								out_feature[channel_pt] = outputs[tile][channel_pt][i*2 + ii][j*2 + jj];;
//							} else{
//								out_feature[channel_pt] += outputs[tile][channel_pt][i*2 + ii][j*2 + jj];;
//							}
//						}
//						for (int channel_pt = 0; channel_pt < BN_CHANNEL_PARALLELISM; channel_pt ++){
//							out_tmp[channel_pt][i][j] = out_feature[channel_pt]/(FIX_FM_acc)4.0;
//						}
//					}
//				}
//			}
//		}
//		for (int i = 0; i < H_fmap; i ++){
//			for (int j = 0; j < H_fmap; j ++){
//#pragma HLS PIPELINE
//				for (int channel_pt = 0; channel_pt < BN_CHANNEL_PARALLELISM; channel_pt ++){
//					outputs[tile][channel_pt][i][j] = out_tmp[channel_pt][i][j];
//					outputs[tile+in_channel_blocks][channel_pt][i][j] = out_tmp[channel_pt][i][j];
//				}
//			}
//		}
//	}
//}

//void avgpool_8x8(
//		FIX_FM_acc inputs[CHANNEL_OUT/CHANNEL_OUT_T][CHANNEL_OUT_T][WIDTH][WIDTH],
//		FIX_32_10 outputs[CHANNEL_OUT]
//)
//{
//#pragma HLS ARRAY_PARTITION variable=inputs complete dim=2
//
//	FIX_32_10 tmp[CHANNEL_OUT_T];
//#pragma HLS ARRAY_PARTITION variable=tmp complete dim=1
//
//	LOOP_avgpool_8x8:
//	for (int tile = 0; tile < 8; tile ++) {
//		for (int k = 0; k < 8; k ++) {
//#pragma HLS PIPELINE
//			tmp[k] = 0;
//		}
//		for (int i = 0; i < 8; i ++) {
//			for (int j = 0; j < 8; j ++) {
//#pragma HLS PIPELINE
//				for (int ch = 0; ch < 8; ch ++) {
//					tmp[ch] += inputs[tile][ch][i][j];
//				}
//			}
//		}
//		for (int k = 0; k < 8; k++) {
//#pragma HLS PIPELINE
//			outputs[tile*8 + k] = tmp[k]/(FIX_32_10)64.0;
//		}
//	}
//}

void matmul(
		FIX_32_10 inputs[64],
		const FIX_WT linear_weight[10][64],
		const FIX_WT linear_bias[10],
		FIX_32_10 outputs[10]
)
{
#pragma HLS ARRAY_PARTITION variable=linear_weight complete dim=1
#pragma HLS ARRAY_PARTITION variable=linear_bias complete dim=1

	FIX_FM_acc buf[10];
#pragma HLS ARRAY_PARTITION variable=buf complete dim=1

	for(int coo = 0; coo < 10; coo ++) {
#pragma HLS PIPELINE
		buf[coo] = linear_bias[coo];
	}

	for(int cii = 0; cii < 64; cii++) {
#pragma HLS PIPELINE
		FIX_FM_acc tmp_in = inputs[cii];
		FIX_FM_acc tmp_wt[10];
#pragma HLS ARRAY_PARTITION variable=tmp_wt complete dim=1
		for(int coo = 0; coo < 10; coo ++) {
			tmp_wt[coo] = linear_weight[coo][cii];
		}
		for(int coo = 0; coo < 10; coo ++) {
			buf[coo] += tmp_in*tmp_wt[coo];
		}
	}

	for(int coo = 0; coo < 10; coo ++) {
#pragma HLS PIPELINE
		outputs[coo] = buf[coo];
	}
}

#endif
