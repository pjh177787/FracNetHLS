#ifndef LAYER_H
#define LAYER_H

#include "typedefs.h"
#include "dimension_def.h"
//#include "biconv.h"
#include "pgconv.h"
#include "weights_fracnet.h"
#include <iostream>


//---------------------
//   util functions
//---------------------

inline uint2 to2bit(FIX_FM_acc x)
{
	//	uint2 y = 0;
	//	if (x > 2.0/3) {
	//		y = 3;
	//	} else if (x <= 2.0/3 && x >= 0) {
	//		y = 2;
	//	} else if (x < 0 && x >= -2.0/3) {
	//		y = 1;
	//	} else {
	//		y = 0;
	//	}
	//	return y;
	const FIX_FM_acc scale = 1.5;
	// the RND and SAT features of ap_ufixed are important for quantization
	ap_ufixed<2, 2, AP_RND, AP_SAT> temp = (ap_ufixed<2, 2, AP_RND, AP_SAT>)((x+1)*scale);
	return (uint2)temp;
}

void quant_and_pack( // TODO: FIX II issue
		FIX_FM_acc prior_outputs[CHANNEL_OUT][WIDTH][WIDTH],
		uint16 msb_buffer[CHANNEL_IN][WIDTH][WIDTH],
		uint16 lsb_buffer[CHANNEL_IN][WIDTH][WIDTH],
		int H_fmap,
		int in_channels
)
{
	//	LOOP_Quant_Pack:
	//	for (int row=0; row<H_fmap; row++){
	//		for (int col=0; col<H_fmap; col++){
	//			for (int tile=0; tile<in_channels/OUT_CHANNEL_PARALLELISM; tile++){
	//#pragma HLS PIPELINE
	//				int ch_start = tile * OUT_CHANNEL_PARALLELISM;
	//				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
	//					int ch = ch_start + ch_offset;
	//					FIX_FM_acc raw_input = prior_outputs[ch][row][col];
	//					uint2 val = to2bit(raw_input);
	//					msb_buffer[ch/16][row][col][16-1-ch%16] = val[1]; // pack 16 bits
	//					lsb_buffer[ch/16][row][col][16-1-ch%16] = val[0]; // pack 16 bits
	//				}
	//			}
	//		}
	//	}
	LOOP_Quant_Pack:
	for (int tile=0; tile<in_channels/16; tile++){
		for (int row=0; row<H_fmap; row++){
			for (int col=0; col<H_fmap; col++){
#pragma HLS PIPELINE
				int ch_start = tile << 4;
				for (int ch_offset=0; ch_offset<16; ch_offset++){
					int ch = ch_start + ch_offset;
					FIX_FM_acc raw_input = prior_outputs[ch][row][col];
					uint2 val = to2bit(raw_input);
					msb_buffer[ch/16][row][col][16-1-ch%16] = val[1]; // pack 16 bits
					lsb_buffer[ch/16][row][col][16-1-ch%16] = val[0]; // pack 16 bits
				}
			}
		}
	}
}

void merge_tile( // merge results to msb_outputs
		FIX_FM_acc msb_outputs[CHANNEL_OUT][WIDTH][WIDTH],
		FIX_FM_acc lsb_outputs[CHANNEL_OUT][WIDTH][WIDTH],
		const FIX_WT* threshold,
		int channel_start,
		int H_fmap
)
{
	
#pragma HLS ARRAY_PARTITION variable=threshold complete dim=1
	LOOP_Merge:
	for (int row=0; row<H_fmap; row++){
		for (int col=0; col<H_fmap; col++){
#pragma HLS PIPELINE
			FIX_FM_acc msb_register[OUT_CHANNEL_PARALLELISM];
			FIX_FM_acc lsb_register[OUT_CHANNEL_PARALLELISM];
#pragma HLS ARRAY_PARTITION variable=msb_register complete dim=1
#pragma HLS ARRAY_PARTITION variable=lsb_register complete dim=1
			for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
				int ch = channel_start + ch_offset;
				msb_register[ch_offset] = msb_outputs[ch][row][col];
				lsb_register[ch_offset] = lsb_outputs[ch][row][col];
			}
			for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
				const FIX_FM_acc msb_scale = 2.0/3.0;
				const FIX_FM_acc lsb_scale = 1.0/3.0;
				msb_register[ch_offset] *= msb_scale;
				if (msb_register[ch_offset] > threshold[channel_start+ch_offset])
					msb_register[ch_offset] += (lsb_register[ch_offset] * lsb_scale);
			}
			for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
				msb_outputs[channel_start+ch_offset][row][col] = msb_register[ch_offset];
			}
		}
	}
}

void shortcut( // add results to input_a (make first row & col invalid)
		FIX_FM_acc input_a[CHANNEL_OUT][WIDTH][WIDTH],
		FIX_FM_acc input_b[CHANNEL_OUT][WIDTH][WIDTH],
		int H_fmap,
		int out_channels
)
{
	LOOP_Shortcut:
	for (int tile=0; tile<out_channels/BN_CHANNEL_PARALLELISM; tile++) {
		int channel_start = tile * BN_CHANNEL_PARALLELISM;
		for (int i=0; i<H_fmap; i++) { // possible to add dataflow
			for (int j=0; j<H_fmap; j++) {
#pragma HLS PIPELINE
				FIX_FM_acc out_feature[BN_CHANNEL_PARALLELISM];
#pragma HLS ARRAY_PARTITION variable=out_feature complete dim=1
				for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
					out_feature[channel_pt] = input_a[channel_start+channel_pt][i][j];
				}

				for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
					out_feature[channel_pt] += input_b[channel_start+channel_pt][i][j];
				}

				for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
					input_a[channel_start+channel_pt][i][j] = out_feature[channel_pt];
				}
			}
		}
	}
}

template <int W_CH_IN, int W_CH_OUT>
void load_weights_tile(
		const uint16 weight_src[W_CH_OUT][W_CH_IN][3][3],
		const FIX_WT threshold_src[W_CH_OUT],
		uint16 weight_dest[OUT_CHANNEL_PARALLELISM][CHANNEL_IN][3][3],
		FIX_WT threshold_dest[OUT_CHANNEL_PARALLELISM],
		int start_filter_id,
		int in_channels
)
{
#pragma HLS ARRAY_PARTITION variable=weight_src cyclic factor=8 dim=1
#pragma HLS ARRAY_PARTITION variable=weight_src complete dim=3
#pragma HLS ARRAY_PARTITION variable=weight_src complete dim=4
#pragma HLS ARRAY_PARTITION variable=threshold_src cyclic factor=8 dim=1

	LOOP_Load_Weights_Tile:
	for(int n_filter=0; n_filter<OUT_CHANNEL_PARALLELISM; n_filter++){
		for(int c_in=0; c_in<in_channels; c_in++){
#pragma HLS PIPELINE
			threshold_dest[n_filter] = threshold_src[start_filter_id+n_filter];
			for(int k_row=0; k_row<3; k_row++){
				for(int k_col=0; k_col<3; k_col++){
					weight_dest[n_filter][c_in][k_row][k_col] = weight_src[start_filter_id+n_filter][c_in][k_row][k_col];
				}
			}
		}
	}
}


//---------------------
//   BN + Activation
//---------------------

void batchnorm(
		FIX_FM_acc outputs[CHANNEL_OUT][WIDTH][WIDTH],
		const FIX_WT* norm_weights,
		const FIX_WT* norm_bias,
		int H_fmap,
		int out_channels
)
{

#pragma HLS ARRAY_PARTITION variable=norm_weights cyclic factor=8 dim=1
#pragma HLS ARRAY_PARTITION variable=norm_bias cyclic factor=8 dim=1

	LOOP_BN:
	for (int tile=0; tile<out_channels/BN_CHANNEL_PARALLELISM; tile++) {
		int channel_start = tile * BN_CHANNEL_PARALLELISM;
		for (int i=0; i<H_fmap; i++) { // possible to add dataflow
			for (int j=0; j<H_fmap; j++) {
#pragma HLS PIPELINE

				FIX_FM_acc out_feature[BN_CHANNEL_PARALLELISM];
#pragma HLS ARRAY_PARTITION variable=out_feature complete dim=1
				for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
					out_feature[channel_pt] = outputs[channel_start+channel_pt][i][j]; // the first row and column are invalid
				}

				for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
					int ch = channel_start + channel_pt;
					out_feature[channel_pt] = norm_weights[ch] * out_feature[channel_pt] + norm_bias[ch];
				}

				for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
					outputs[channel_start+channel_pt][i][j] = out_feature[channel_pt];
				}

			}
		}
	}
}

//void batchnorm_s2(
//		FIX_FM_acc outputs[CHANNEL_OUT][WIDTH][WIDTH],
//		const FIX_WT* norm_weights,
//		const FIX_WT* norm_bias,
//		int H_fmap,
//		int out_channels
//)
//{
//
//#pragma HLS ARRAY_PARTITION variable=norm_weights cyclic factor=8 dim=1
//#pragma HLS ARRAY_PARTITION variable=norm_bias cyclic factor=8 dim=1
//
//	LOOP_BN:
//	for (int tile=0; tile<out_channels/BN_CHANNEL_PARALLELISM; tile++) {
//		int channel_start = tile * BN_CHANNEL_PARALLELISM;
//		for (int i=0; i<H_fmap; i++) { // possible to add dataflow
//			for (int j=0; j<H_fmap; j++) {
//#pragma HLS PIPELINE
//
//				FIX_FM_acc out_feature[BN_CHANNEL_PARALLELISM];
//#pragma HLS ARRAY_PARTITION variable=out_feature complete dim=1
//				for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
//					out_feature[channel_pt] = outputs[channel_start+channel_pt][i*2][j*2]; // the first row and column are invalid
//				}
//
//				for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
//					int ch = channel_start + channel_pt;
//					out_feature[channel_pt] = norm_weights[ch] * out_feature[channel_pt] + norm_bias[ch];
//				}
//
//				for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
//					outputs[channel_start+channel_pt][i][j] = out_feature[channel_pt];
//				}
//
//			}
//		}
//	}
//}

void rprelu(
		FIX_FM_acc outputs[CHANNEL_OUT][WIDTH][WIDTH],
		const FIX_WT* x_bias,
		const FIX_WT* y_bias,
		const FIX_WT* weight,
		int H_fmap,
		int out_channels
)
{

#pragma HLS ARRAY_PARTITION variable=x_bias cyclic factor=8 dim=1
#pragma HLS ARRAY_PARTITION variable=y_bias cyclic factor=8 dim=1
#pragma HLS ARRAY_PARTITION variable=weight cyclic factor=8 dim=1

	LOOP_RPReLU:
	for (int tile=0; tile<out_channels/BN_CHANNEL_PARALLELISM; tile++) {
		int channel_start = tile * BN_CHANNEL_PARALLELISM;
		for (int i=0; i<H_fmap; i++) { // possible to add dataflow
			for (int j=0; j<H_fmap; j++) {
#pragma HLS PIPELINE

				FIX_FM_acc out_feature[BN_CHANNEL_PARALLELISM];
#pragma HLS ARRAY_PARTITION variable=out_feature complete dim=1
				for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
					out_feature[channel_pt] = outputs[channel_start+channel_pt][i][j];
				}

				for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
					int ch = channel_start + channel_pt;
					out_feature[channel_pt] += x_bias[ch];
					if (out_feature[channel_pt] < 0) out_feature[channel_pt] *= weight[ch];
					out_feature[channel_pt] += y_bias[ch];
				}

				for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
					outputs[channel_start+channel_pt][i][j] = out_feature[channel_pt];
				}

			}
		}
	}
}

void avgpool_concat(
		FIX_FM_acc outputs[CHANNEL_OUT][WIDTH][WIDTH],
		int H_fmap,
		int in_channels
)
{

#pragma HLS ARRAY_PARTITION variable=outputs complete dim=1

	//	FIX_FM_acc out_feature[BN_CHANNEL_PARALLELISM][WIDTH][WIDTH];
	//#pragma HLS ARRAY_PARTITION variable=out_feature complete dim=1

	LOOP_avgpool_concat:
	for (int tile=0; tile<in_channels/BN_CHANNEL_PARALLELISM; tile++) {
		int channel_start = tile * BN_CHANNEL_PARALLELISM;
		for (int i=0; i<H_fmap; i++) { // possible to add dataflow
			for (int j=0; j<H_fmap; j++) {
				//#pragma HLS PIPELINE

				FIX_FM_acc out_feature[BN_CHANNEL_PARALLELISM];
#pragma HLS ARRAY_PARTITION variable=out_feature complete dim=1
				for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
#pragma HLS UNROLL
					FIX_FM_acc m = 0;
					for (int ii = 0; ii < 2; ii ++)
						for (int jj = 0; jj < 2; jj ++)
							m += outputs[channel_start+channel_pt][i*2 + ii][j*2 + jj];
					out_feature[channel_pt] = m/(FIX_WT)4.0;
				}
				for (int channel_pt=0; channel_pt<BN_CHANNEL_PARALLELISM; channel_pt++) {
#pragma HLS UNROLL
					outputs[channel_start+channel_pt][i][j] = out_feature[channel_pt];
					outputs[channel_start+channel_pt+in_channels][i][j] = out_feature[channel_pt];
				}
			}
		}
	}
}

void avgpool_8x8(
		FIX_FM_acc inputs[CHANNEL_OUT][WIDTH][WIDTH],
		FIX_FM_acc outputs[CHANNEL_OUT]
)
{

#pragma HLS ARRAY_PARTITION variable=inputs complete dim=1

	FIX_FM_acc tmp[CHANNEL_OUT];
#pragma HLS ARRAY_PARTITION variable=tmp complete dim=1

	LOOP_avgpool_8x8:
	for (int i=0; i<8; i++) {
		for (int j=0; j<8; j++) {
			for (int c = 0; c < CHANNEL_OUT; c++) {
#pragma HLS UNROLL
				if (i + j == 0)
					tmp[c] = inputs[c][i][j];
				else
					tmp[c] += inputs[c][i][j];
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

	FIX_FM_acc buf[10];
#pragma HLS ARRAY_PARTITION variable=buf complete dim=1

	for(int coo = 0; coo < 10; coo ++) {
#pragma HLS UNROLL
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


//---------------------
//   conv layers
//---------------------

//inline void conv1(
//		uint16 inputs[CHANNEL_IN][WIDTH][WIDTH],
//		uint16 dummy_inputs[CHANNEL_IN][WIDTH][WIDTH],
//		uint16 weights_tile[OUT_CHANNEL_PARALLELISM][CHANNEL_IN][3][3],
//		FIX_FM_acc outputs[CHANNEL_OUT][WIDTH][WIDTH],
//		FIX_FM_acc dummy_outputs[CHANNEL_OUT][WIDTH][WIDTH]
//)
//{
//#pragma HLS ARRAY_PARTITION variable=conv1_weight_fix complete dim=3
//#pragma HLS ARRAY_PARTITION variable=conv1_weight_fix complete dim=4
//
//	int in_channels_after_pack = 6;
//	int out_channels = 16;
//	int H_fmap_out = 32;
//
//	LOOP_Conv1:
//	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
//		// compute one tile
//		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
//		load_weights_tile<6, 16>(conv1_weight_fix, weights_tile, out_channel_start, in_channels_after_pack);
//		//conv3x3_s1_tile(inputs, weights_tile, outputs, out_channel_start, in_channels_after_pack, H_fmap_out);
//		pg_conv3x3_tile(
//				inputs, dummy_inputs, weights_tile,
//				outputs, dummy_outputs,
//				out_channel_start, in_channels_after_pack, H_fmap_out
//		);
//	}
//}
//
//inline void layer1_pgconv( // final results are in msb_outputs
//		FIX_FM_acc prior_outputs[CHANNEL_OUT][WIDTH][WIDTH],
//		uint16 weights_tile[OUT_CHANNEL_PARALLELISM][CHANNEL_IN][3][3],
//		uint16 msb_fmap[CHANNEL_IN][WIDTH][WIDTH],
//		uint16 lsb_fmap[CHANNEL_IN][WIDTH][WIDTH],
//		const uint16 pgconv_weight[16][1][3][3],
//		const FIX_WT pgconv_threshold[16],
//		FIX_FM_acc out_msb[CHANNEL_OUT][WIDTH][WIDTH],
//		FIX_FM_acc out_lsb[CHANNEL_OUT][WIDTH][WIDTH]
//)
//{
//#pragma HLS ARRAY_PARTITION variable=pgconv_weight complete dim=3
//#pragma HLS ARRAY_PARTITION variable=pgconv_weight complete dim=4
//#pragma HLS ARRAY_PARTITION variable=pgconv_threshold complete dim=1
//
//	int H_fmap_in = 32;
//	int in_channels = 16;
//	quant_and_pack(prior_outputs, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
//
//	int in_channels_after_pack = in_channels / 16; // assume packing 16 bits
//	int out_channels = 16;
//	int H_fmap_out = 32;
//	LOOP_Layer1PGConv2:
//	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
//		// compute one tile
//		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
//		load_weights_tile<1, 16>(
//				pgconv_weight, weights_tile,
//				out_channel_start, in_channels_after_pack
//		);
//		//conv3x3_s1_tile(msb_fmap, weights_tile, out_msb, out_channel_start, in_channels_after_pack, H_fmap_out);
//		//conv3x3_s1_tile(lsb_fmap, weights_tile, out_lsb, out_channel_start, in_channels_after_pack, H_fmap_out);
//		pg_conv3x3_tile(
//				msb_fmap, lsb_fmap, weights_tile,
//				out_msb,  out_lsb,
//				out_channel_start, in_channels_after_pack, H_fmap_out
//		);
//
//		merge_tile(
//				out_msb, out_lsb, pgconv_threshold,
//				out_channel_start, H_fmap_out+1
//		);
//	}
//}
//
//inline void layer2_pgconv_sp( // final results are in msb_outputs
//		FIX_FM_acc prior_outputs[CHANNEL_OUT][WIDTH][WIDTH],
//		uint16 weights_tile[OUT_CHANNEL_PARALLELISM][CHANNEL_IN][3][3],
//		uint16 msb_fmap[CHANNEL_IN][WIDTH][WIDTH],
//		uint16 lsb_fmap[CHANNEL_IN][WIDTH][WIDTH],
//		const uint16 pgconv_weight[32][1][3][3],
//		const FIX_WT pgconv_threshold[32],
//		FIX_FM_acc out_msb[CHANNEL_OUT][WIDTH][WIDTH],
//		FIX_FM_acc out_lsb[CHANNEL_OUT][WIDTH][WIDTH]
//)
//{
//#pragma HLS ARRAY_PARTITION variable=pgconv_weight complete dim=3
//#pragma HLS ARRAY_PARTITION variable=pgconv_weight complete dim=4
//#pragma HLS ARRAY_PARTITION variable=pgconv_threshold complete dim=1
//
//	int H_fmap_in = 32;
//	int in_channels = 16;
//	quant_and_pack(prior_outputs, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
//
//	int in_channels_after_pack = in_channels / 16; // assume packing 16 bits
//	int out_channels = 32;
//	int H_fmap_out = 32;
//	LOOP_Layer1PGConv2:
//	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
//		// compute one tile
//		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
//		load_weights_tile<1, 32>(
//				pgconv_weight, weights_tile,
//				out_channel_start, in_channels_after_pack
//		);
//		//conv3x3_s1_tile(msb_fmap, weights_tile, out_msb, out_channel_start, in_channels_after_pack, H_fmap_out);
//		//conv3x3_s1_tile(lsb_fmap, weights_tile, out_lsb, out_channel_start, in_channels_after_pack, H_fmap_out);
//		pg_conv3x3_tile(
//				msb_fmap, lsb_fmap, weights_tile,
//				out_msb,  out_lsb,
//				out_channel_start, in_channels_after_pack, H_fmap_out
//		);
//
//		merge_tile(
//				out_msb, out_lsb, pgconv_threshold,
//				out_channel_start, H_fmap_out+1
//		);
//	}
//}
//
//inline void layer2_pgconv( // final results are in msb_outputs
//		FIX_FM_acc prior_outputs[CHANNEL_OUT][WIDTH][WIDTH],
//		uint16 weights_tile[OUT_CHANNEL_PARALLELISM][CHANNEL_IN][3][3],
//		uint16 msb_fmap[CHANNEL_IN][WIDTH][WIDTH],
//		uint16 lsb_fmap[CHANNEL_IN][WIDTH][WIDTH],
//		const uint16 pgconv_weight[32][2][3][3],
//		const FIX_WT pgconv_threshold[32],
//		FIX_FM_acc out_msb[CHANNEL_OUT][WIDTH][WIDTH],
//		FIX_FM_acc out_lsb[CHANNEL_OUT][WIDTH][WIDTH]
//)
//{
//#pragma HLS ARRAY_PARTITION variable=pgconv_weight complete dim=3
//#pragma HLS ARRAY_PARTITION variable=pgconv_weight complete dim=4
//#pragma HLS ARRAY_PARTITION variable=pgconv_threshold complete dim=1
//
//	int H_fmap_in = 16;
//	int in_channels = 32;
//	quant_and_pack(prior_outputs, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
//
//	int in_channels_after_pack = in_channels / 16; // assume packing 16 bits
//	int out_channels = 32;
//	int H_fmap_out = 16;
//	LOOP_Layer1PGConv2:
//	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
//		// compute one tile
//		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
//		load_weights_tile<2, 32>(
//				pgconv_weight, weights_tile,
//				out_channel_start, in_channels_after_pack
//		);
//		//conv3x3_s1_tile(msb_fmap, weights_tile, out_msb, out_channel_start, in_channels_after_pack, H_fmap_out);
//		//conv3x3_s1_tile(lsb_fmap, weights_tile, out_lsb, out_channel_start, in_channels_after_pack, H_fmap_out);
//		pg_conv3x3_tile(
//				msb_fmap, lsb_fmap, weights_tile,
//				out_msb,  out_lsb,
//				out_channel_start, in_channels_after_pack, H_fmap_out
//		);
//
//		merge_tile(
//				out_msb, out_lsb, pgconv_threshold,
//				out_channel_start, H_fmap_out+1
//		);
//	}
//}
//
//inline void layer3_pgconv_sp( // final results are in msb_outputs
//		FIX_FM_acc prior_outputs[CHANNEL_OUT][WIDTH][WIDTH],
//		uint16 weights_tile[OUT_CHANNEL_PARALLELISM][CHANNEL_IN][3][3],
//		uint16 msb_fmap[CHANNEL_IN][WIDTH][WIDTH],
//		uint16 lsb_fmap[CHANNEL_IN][WIDTH][WIDTH],
//		const uint16 pgconv_weight[64][2][3][3],
//		const FIX_WT pgconv_threshold[64],
//		FIX_FM_acc out_msb[CHANNEL_OUT][WIDTH][WIDTH],
//		FIX_FM_acc out_lsb[CHANNEL_OUT][WIDTH][WIDTH]
//)
//{
//#pragma HLS ARRAY_PARTITION variable=pgconv_weight complete dim=3
//#pragma HLS ARRAY_PARTITION variable=pgconv_weight complete dim=4
//#pragma HLS ARRAY_PARTITION variable=pgconv_threshold complete dim=1
//
//	int H_fmap_in = 16;
//	int in_channels = 32;
//	quant_and_pack(prior_outputs, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
//
//	int in_channels_after_pack = in_channels / 16; // assume packing 16 bits
//	int out_channels = 64;
//	int H_fmap_out = 16;
//	LOOP_Layer1PGConv2:
//	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
//		// compute one tile
//		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
//		load_weights_tile<2, 64>(
//				pgconv_weight, weights_tile,
//				out_channel_start, in_channels_after_pack
//		);
//		//conv3x3_s1_tile(msb_fmap, weights_tile, out_msb, out_channel_start, in_channels_after_pack, H_fmap_out);
//		//conv3x3_s1_tile(lsb_fmap, weights_tile, out_lsb, out_channel_start, in_channels_after_pack, H_fmap_out);
//		pg_conv3x3_tile(
//				msb_fmap, lsb_fmap, weights_tile,
//				out_msb,  out_lsb,
//				out_channel_start, in_channels_after_pack, H_fmap_out
//		);
//
//		merge_tile(
//				out_msb, out_lsb, pgconv_threshold,
//				out_channel_start, H_fmap_out+1
//		);
//	}
//}
//
//inline void layer3_pgconv( // final results are in msb_outputs
//		FIX_FM_acc prior_outputs[CHANNEL_OUT][WIDTH][WIDTH],
//		uint16 weights_tile[OUT_CHANNEL_PARALLELISM][CHANNEL_IN][3][3],
//		uint16 msb_fmap[CHANNEL_IN][WIDTH][WIDTH],
//		uint16 lsb_fmap[CHANNEL_IN][WIDTH][WIDTH],
//		const uint16 pgconv_weight[64][4][3][3],
//		const FIX_WT pgconv_threshold[64],
//		FIX_FM_acc out_msb[CHANNEL_OUT][WIDTH][WIDTH],
//		FIX_FM_acc out_lsb[CHANNEL_OUT][WIDTH][WIDTH]
//)
//{
//#pragma HLS ARRAY_PARTITION variable=pgconv_weight complete dim=3
//#pragma HLS ARRAY_PARTITION variable=pgconv_weight complete dim=4
//#pragma HLS ARRAY_PARTITION variable=pgconv_threshold complete dim=1
//
//	int H_fmap_in = 8;
//	int in_channels = 64;
//	quant_and_pack(prior_outputs, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
//
//	int in_channels_after_pack = in_channels / 16; // assume packing 16 bits
//	int out_channels = 64;
//	int H_fmap_out = 8;
//	LOOP_Layer1PGConv2:
//	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
//		// compute one tile
//		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
//		load_weights_tile<4, 64>(
//				pgconv_weight, weights_tile,
//				out_channel_start, in_channels_after_pack
//		);
//		//conv3x3_s1_tile(msb_fmap, weights_tile, out_msb, out_channel_start, in_channels_after_pack, H_fmap_out);
//		//conv3x3_s1_tile(lsb_fmap, weights_tile, out_lsb, out_channel_start, in_channels_after_pack, H_fmap_out);
//		pg_conv3x3_tile(
//				msb_fmap, lsb_fmap, weights_tile,
//				out_msb,  out_lsb,
//				out_channel_start, in_channels_after_pack, H_fmap_out
//		);
//
//		merge_tile(
//				out_msb, out_lsb, pgconv_threshold,
//				out_channel_start, H_fmap_out+1
//		);
//	}
//}

#endif
