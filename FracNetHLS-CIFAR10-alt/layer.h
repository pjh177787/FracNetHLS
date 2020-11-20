#ifndef LAYER_H
#define LAYER_H

#include "typedefs.h"
#include "dimension_def.h"
//#include "biconv.h"
#include "pgconv.h"
#include "weights_fracnet_64.h"
#include <iostream>


//---------------------
//   util functions
//---------------------

inline uint2 to2bit(FIX_FM_acc x)
{
	const FIX_FM_acc scale = 1.5;
	ap_ufixed<2, 2, AP_RND, AP_SAT> temp = (ap_ufixed<2, 2, AP_RND, AP_SAT>)((x+1)*scale);
	return (uint2)temp;
}

void quant_and_pack(
		FIX_FM_acc prior_outputs[CHANNEL_OUT/CHANNEL_OUT_T][CHANNEL_OUT_T][WIDTH][WIDTH],
		uint64 msb_buffer[CHANNEL_IN][WIDTH][WIDTH],
		uint64 lsb_buffer[CHANNEL_IN][WIDTH][WIDTH],
		int H_fmap,
		int in_channels
)
{
	uint2 val = 0;
	LOOP_Quant_Pack:
	for (int ch_t=0; ch_t<CHANNEL_OUT/CHANNEL_OUT_T; ch_t++){
		for (int row=0; row<H_fmap; row++){
			for (int col=0; col<H_fmap; col++){
#pragma HLS PIPELINE
				int channel_start = ch_t*CHANNEL_OUT_T;
				for (int ch_offset=0; ch_offset<CHANNEL_OUT_T; ch_offset++){
					FIX_FM_acc raw_input = prior_outputs[ch_t][ch_offset][row][col];
					int ch = channel_start + ch_offset;
					if (ch < in_channels) {
						val = to2bit(raw_input);
					} else {
						val = 0;
					}
					msb_buffer[0][row][col][63 - ch] = val[1];
					lsb_buffer[0][row][col][63 - ch] = val[0];
				}
			}
		}
	}
}

void bn_relu_shortcut(
		FIX_FM_acc residual[CHANNEL_OUT/CHANNEL_OUT_T][CHANNEL_OUT_T][WIDTH][WIDTH],
		FIX_FM_acc block_t0[CHANNEL_OUT_T][WIDTH][WIDTH],
		FIX_FM_acc block_t1[CHANNEL_OUT_T][WIDTH][WIDTH],

		FIX_WT threshold[CHANNEL_OUT_T],
		FIX_WT bn_weight_0[CHANNEL_OUT_T],
		FIX_WT bn_weight_1[CHANNEL_OUT_T],
		FIX_WT bn_bias_0[CHANNEL_OUT_T],
		FIX_WT bn_bias_1[CHANNEL_OUT_T],
		FIX_WT relu_x_bias[CHANNEL_OUT_T],
		FIX_WT relu_y_bias[CHANNEL_OUT_T],
		FIX_WT relu_weight[CHANNEL_OUT_T],

		int stride,
		int channel_tile,
		int H_fmap,
		int out_channels
)
{
#pragma HLS ARRAY_PARTITION variable=threshold cyclic factor=8 dim=1
#pragma HLS ARRAY_PARTITION variable=bn_weight_0 cyclic factor=8 dim=1
#pragma HLS ARRAY_PARTITION variable=bn_weight_1 cyclic factor=8 dim=1
#pragma HLS ARRAY_PARTITION variable=bn_bias_0 cyclic factor=8 dim=1
#pragma HLS ARRAY_PARTITION variable=bn_bias_1 cyclic factor=8 dim=1
#pragma HLS ARRAY_PARTITION variable=relu_x_bias cyclic factor=8 dim=1
#pragma HLS ARRAY_PARTITION variable=relu_y_bias cyclic factor=8 dim=1
#pragma HLS ARRAY_PARTITION variable=relu_weight cyclic factor=8 dim=1


	FIX_FM_acc out_feature_t0[BN_CHANNEL_PARALLELISM];
	FIX_FM_acc out_feature_t1[BN_CHANNEL_PARALLELISM];
#pragma HLS ARRAY_PARTITION variable=out_feature_t0 complete dim=1
#pragma HLS ARRAY_PARTITION variable=out_feature_t1 complete dim=1

	const FIX_WT msb_scale = 2.0/3.0;
	const FIX_WT lsb_scale = 1.0/3.0;

	LOOP_BN_RELU_SC:
	for (int i=0; i<H_fmap; i++) {
		for (int j=0; j<H_fmap; j++) {
#pragma HLS PIPELINE

			// Merge Tile
			for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
				out_feature_t0[ch_offset] = block_t0[ch_offset][i*stride+1][j*stride+1];
				out_feature_t1[ch_offset] = block_t1[ch_offset][i*stride+1][j*stride+1];
			}
			for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
				out_feature_t0[ch_offset] *= msb_scale;
				if (out_feature_t0[ch_offset] > threshold[ch_offset])
					out_feature_t0[ch_offset] += (out_feature_t1[ch_offset]*lsb_scale);
			}

			// Load Residual
			for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
				out_feature_t1[channel_pt] = residual[channel_tile][channel_pt][i][j];
			}

			// Batch Normalization
			for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
				out_feature_t0[channel_pt] = bn_weight_0[channel_pt]*out_feature_t0[channel_pt] + bn_bias_0[channel_pt]; // the first row and column are invalid
			}

			// ReLU
			for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
				out_feature_t0[channel_pt] += relu_x_bias[channel_pt];
				if (out_feature_t0[channel_pt] < 0) out_feature_t0[channel_pt] *= relu_weight[channel_pt];
				out_feature_t0[channel_pt] += relu_y_bias[channel_pt];
			}

			// Shortcut
			for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
				out_feature_t1[channel_pt] += out_feature_t0[channel_pt];
			}

			// Batch Normalization and Write-back
			for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
				residual[channel_tile][channel_pt][i][j] = bn_weight_1[channel_pt]*out_feature_t1[channel_pt] + bn_bias_1[channel_pt];
			}
		}
	}
}

template <int W_CH_OUT>
void load_weights_tile(
		const uint64 weight_src[W_CH_OUT][1][3][3],
		const FIX_WT threshold_src[W_CH_OUT],
		const FIX_WT bn_weight_0_src[W_CH_OUT],
		const FIX_WT bn_weight_1_src[W_CH_OUT],
		const FIX_WT bn_bias_0_src[W_CH_OUT],
		const FIX_WT bn_bias_1_src[W_CH_OUT],
		const FIX_WT relu_x_bias_src[W_CH_OUT],
		const FIX_WT relu_y_bias_src[W_CH_OUT],
		const FIX_WT relu_weight_src[W_CH_OUT],

		uint64 weight_dest[OUT_CHANNEL_PARALLELISM][CHANNEL_IN][3][3],
		FIX_WT threshold_dest[OUT_CHANNEL_PARALLELISM],
		FIX_WT bn_weight_0_dest[OUT_CHANNEL_PARALLELISM],
		FIX_WT bn_weight_1_dest[OUT_CHANNEL_PARALLELISM],
		FIX_WT bn_bias_0_dest[OUT_CHANNEL_PARALLELISM],
		FIX_WT bn_bias_1_dest[OUT_CHANNEL_PARALLELISM],
		FIX_WT relu_x_bias_dest[OUT_CHANNEL_PARALLELISM],
		FIX_WT relu_y_bias_dest[OUT_CHANNEL_PARALLELISM],
		FIX_WT relu_weight_dest[OUT_CHANNEL_PARALLELISM],

		int start_filter_id,
		int in_channels_after_pack
)
{
#pragma HLS ARRAY_PARTITION variable=weight_src cyclic factor=8 dim=1
#pragma HLS ARRAY_PARTITION variable=weight_src complete dim=3
#pragma HLS ARRAY_PARTITION variable=weight_src complete dim=4
#pragma HLS ARRAY_PARTITION variable=threshold_src cyclic factor=8 dim=1
#pragma HLS ARRAY_PARTITION variable=bn_weight_0_src cyclic factor=8 dim=1
#pragma HLS ARRAY_PARTITION variable=bn_weight_1_src cyclic factor=8 dim=1
#pragma HLS ARRAY_PARTITION variable=bn_bias_0_src cyclic factor=8 dim=1
#pragma HLS ARRAY_PARTITION variable=bn_bias_1_src cyclic factor=8 dim=1
#pragma HLS ARRAY_PARTITION variable=relu_x_bias_src cyclic factor=8 dim=1
#pragma HLS ARRAY_PARTITION variable=relu_y_bias_src cyclic factor=8 dim=1
#pragma HLS ARRAY_PARTITION variable=relu_weight_src cyclic factor=8 dim=1

	int c_in = 0;
	LOOP_Load_Weights_Tile:
	for(int n_filter=0; n_filter<OUT_CHANNEL_PARALLELISM; n_filter++){
#pragma HLS PIPELINE
		for(int k_row=0; k_row<3; k_row++){
			for(int k_col=0; k_col<3; k_col++){
				weight_dest[n_filter][c_in][k_row][k_col] = weight_src[start_filter_id+n_filter][c_in][k_row][k_col];
			}
		}
		threshold_dest[n_filter] = threshold_src[start_filter_id+n_filter];
		bn_weight_0_dest[n_filter] = bn_weight_0_src[start_filter_id+n_filter];
		bn_weight_1_dest[n_filter] = bn_weight_1_src[start_filter_id+n_filter];
		bn_bias_0_dest[n_filter] = bn_bias_0_src[start_filter_id+n_filter];
		bn_bias_1_dest[n_filter] = bn_bias_1_src[start_filter_id+n_filter];
		relu_x_bias_dest[n_filter] = relu_x_bias_src[start_filter_id+n_filter];
		relu_y_bias_dest[n_filter] = relu_y_bias_src[start_filter_id+n_filter];
		relu_weight_dest[n_filter] = relu_weight_src[start_filter_id+n_filter];
	}
}

void avgpool_concat(
		FIX_FM_acc outputs[CHANNEL_OUT/CHANNEL_OUT_T][CHANNEL_OUT_T][WIDTH][WIDTH],
		int H_fmap,
		int in_channels
)
{

#pragma HLS ARRAY_PARTITION variable=outputs complete dim=2

	int in_channel_blocks = in_channels/BN_CHANNEL_PARALLELISM;
	LOOP_avgpool_concat:
	for (int tile=0; tile<in_channel_blocks; tile++) {
		int channel_start = tile * BN_CHANNEL_PARALLELISM;
		for (int i=0; i<H_fmap; i++) {
			for (int j=0; j<H_fmap; j++) {
				FIX_FM_acc out_feature[BN_CHANNEL_PARALLELISM];
#pragma HLS ARRAY_PARTITION variable=out_feature complete dim=1
				for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
#pragma HLS UNROLL
					FIX_FM_acc m = 0;
					for (int ii = 0; ii < 2; ii ++)
						for (int jj = 0; jj < 2; jj ++)
							m += outputs[tile][channel_pt][i*2 + ii][j*2 + jj];
					out_feature[channel_pt] = m/(FIX_WT)4.0;
				}
				for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
#pragma HLS UNROLL
					outputs[tile][channel_pt][i][j] = out_feature[channel_pt];
					outputs[tile+in_channel_blocks][channel_pt][i][j] = out_feature[channel_pt];
				}
			}
		}
	}
}

void avgpool_8x8(
		FIX_FM_acc inputs[CHANNEL_OUT/CHANNEL_OUT_T][CHANNEL_OUT_T][WIDTH][WIDTH],
		FIX_FM_acc outputs[CHANNEL_OUT]
)
{

#pragma HLS ARRAY_PARTITION variable=inputs complete dim=2

	FIX_FM_acc tmp[CHANNEL_OUT];
#pragma HLS ARRAY_PARTITION variable=tmp complete dim=1

	LOOP_avgpool_8x8:
	for (int c0 = 0; c0 < 8; c0 ++) {
		for (int i = 0; i < 8; i ++) {
			for (int j = 0; j < 8; j ++) {
#pragma HLS PIPELINE
				for (int c1 = 0; c1 < 8; c1 ++) {
					int ch = c0*8 + c1;
					if (i + j == 0)
						tmp[ch] = inputs[c0][c1][i][j];
					else
						tmp[ch] += inputs[c0][c1][i][j];
				}
			}
		}
	}
	for (int c = 0; c < CHANNEL_OUT; c++) {
#pragma HLS PIPELINE
		outputs[c] = tmp[c]/(FIX_WT)64.0;
	}
}

void matmul(
		FIX_FM_acc inputs[64],
		const FIX_WT linear_weight[10][64],
		const FIX_WT linear_bias[10],
		FIX_FM_acc outputs[10]
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
		for(int coo = 0; coo < 10; coo ++) {
#pragma HLS UNROLL
			buf[coo] += inputs[cii] * linear_weight[coo][cii];
		}
	}

	for(int coo = 0; coo < 10; coo ++) {
#pragma HLS PIPELINE
		outputs[coo] = buf[coo];
	}
}

#endif
