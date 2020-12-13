#ifndef LAYER_H
#define LAYER_H

#include "typedefs.h"
#include "dimension_def.h"
#include "bnn.h"
//#include "weights_fracnet_64.h"
//#include "conv_weights.h"
#include <iostream>

using namespace std;

inline uint2 to2bit(FIX_FM_acc x)
{
#pragma HLS INLINE
	const FIX_WT scale = 1.5;
	ap_ufixed<2, 2, AP_RND, AP_SAT> temp = (ap_ufixed<2, 2, AP_RND, AP_SAT>)((x+1)*scale);
	return (uint2)temp;
}

void load_1D_weights(
		uint512 weights_all[69525],
		int weights_all_ptr,
		FIX_WT weight_buffer[OUT_CHANNEL_PARALLELISM]
)
{
	//#pragma HLS ARRAY_PARTITION variable=weight_buffer complete dim=2

	int incremented_ptr = weights_all_ptr;
	uint512 data_pack = weights_all[incremented_ptr];
	incremented_ptr += 1;
	for (int j = 0; j < NUM_WT_PACKS_OTHER; j ++) {
		FIX_1D_PACK tmp = 0;
		tmp.range(WEIGHT_BITS_OTHER-1, 0) = data_pack.range(WEIGHT_BITS_OTHER-1+j*WEIGHT_BITS_OTHER, j*WEIGHT_BITS_OTHER);
		weight_buffer[j] = (FIX_WT)tmp;
	}
}

void load_layer_1D_weights_conv(
		FIX_WT conv_0_threshold[OUT_CHANNEL_PARALLELISM],
		FIX_WT conv_1_weight[OUT_CHANNEL_PARALLELISM],
		FIX_WT conv_1_bias[OUT_CHANNEL_PARALLELISM],
		FIX_WT relu_shift_x[OUT_CHANNEL_PARALLELISM],
		FIX_WT relu_shift_y[OUT_CHANNEL_PARALLELISM],
		FIX_WT relu_weight[OUT_CHANNEL_PARALLELISM],
		FIX_WT bn_weight[OUT_CHANNEL_PARALLELISM],
		FIX_WT bn_bias[OUT_CHANNEL_PARALLELISM],

		uint512 weights_all[69525],
		int weights_all_ptr_start,
		int c_out,
		int conv_out_channels,
		int pw_out_channels
)
{
#pragma HLS INLINE
	int conv_channels_after_tile = conv_out_channels/OUT_CHANNEL_PARALLELISM;
	int pw_channels_after_tile = pw_out_channels/OUT_CHANNEL_PARALLELISM;

	int weights_all_ptr = weights_all_ptr_start + c_out;

	load_1D_weights(weights_all, weights_all_ptr, conv_0_threshold);
	weights_all_ptr += conv_channels_after_tile;
	load_1D_weights(weights_all, weights_all_ptr, conv_1_weight);
	weights_all_ptr += conv_channels_after_tile;
	load_1D_weights(weights_all, weights_all_ptr, conv_1_bias);
	weights_all_ptr += conv_channels_after_tile;

	//	load_1D_weights(weights_all, weights_all_ptr, conv_0_threshold);
	weights_all_ptr += pw_channels_after_tile;
	//	load_1D_weights(weights_all, weights_all_ptr, conv_1_weight);
	weights_all_ptr += pw_channels_after_tile;
	//	load_1D_weights(weights_all, weights_all_ptr, conv_1_bias);
	weights_all_ptr += pw_channels_after_tile;

	load_1D_weights(weights_all, weights_all_ptr, relu_shift_x);
	weights_all_ptr += conv_channels_after_tile;
	load_1D_weights(weights_all, weights_all_ptr, relu_shift_y);
	weights_all_ptr += conv_channels_after_tile;
	load_1D_weights(weights_all, weights_all_ptr, relu_weight);
	weights_all_ptr += conv_channels_after_tile;

	//	load_1D_weights(weights_all, weights_all_ptr, relu_shift_x);
	weights_all_ptr += pw_channels_after_tile;
	//	load_1D_weights(weights_all, weights_all_ptr, relu_shift_y);
	weights_all_ptr += pw_channels_after_tile;
	//	load_1D_weights(weights_all, weights_all_ptr, relu_weight);
	weights_all_ptr += pw_channels_after_tile;

	load_1D_weights(weights_all, weights_all_ptr, bn_weight);
	weights_all_ptr += conv_channels_after_tile;
	load_1D_weights(weights_all, weights_all_ptr, bn_bias);
	weights_all_ptr += conv_channels_after_tile;

	//	load_1D_weights(weights_all, weights_all_ptr, bn_weight);
	weights_all_ptr += pw_channels_after_tile;
	//	load_1D_weights(weights_all, weights_all_ptr, bn_bias);
	weights_all_ptr += pw_channels_after_tile;
}

void load_layer_1D_weights_pw(
		FIX_WT conv_0_threshold[OUT_CHANNEL_PARALLELISM],
		FIX_WT conv_1_weight[OUT_CHANNEL_PARALLELISM],
		FIX_WT conv_1_bias[OUT_CHANNEL_PARALLELISM],
		FIX_WT relu_shift_x[OUT_CHANNEL_PARALLELISM],
		FIX_WT relu_shift_y[OUT_CHANNEL_PARALLELISM],
		FIX_WT relu_weight[OUT_CHANNEL_PARALLELISM],
		FIX_WT bn_weight[OUT_CHANNEL_PARALLELISM],
		FIX_WT bn_bias[OUT_CHANNEL_PARALLELISM],

		uint512 weights_all[69525],
		int weights_all_ptr_start,
		int c_out,
		int conv_out_channels,
		int pw_out_channels
)
{
#pragma HLS INLINE
	int conv_channels_after_tile = conv_out_channels/OUT_CHANNEL_PARALLELISM;
	int pw_channels_after_tile = pw_out_channels/OUT_CHANNEL_PARALLELISM;

	int weights_all_ptr = weights_all_ptr_start + c_out;

	//		load_1D_weights(weights_all, weights_all_ptr, conv_0_threshold);
	weights_all_ptr += conv_channels_after_tile;
	//		load_1D_weights(weights_all, weights_all_ptr, conv_1_weight);
	weights_all_ptr += conv_channels_after_tile;
	//		load_1D_weights(weights_all, weights_all_ptr, conv_1_bias);
	weights_all_ptr += conv_channels_after_tile;

	load_1D_weights(weights_all, weights_all_ptr, conv_0_threshold);
	weights_all_ptr += pw_channels_after_tile;
	load_1D_weights(weights_all, weights_all_ptr, conv_1_weight);
	weights_all_ptr += pw_channels_after_tile;
	load_1D_weights(weights_all, weights_all_ptr, conv_1_bias);
	weights_all_ptr += pw_channels_after_tile;

	//		load_1D_weights(weights_all, weights_all_ptr, relu_shift_x);
	weights_all_ptr += conv_channels_after_tile;
	//		load_1D_weights(weights_all, weights_all_ptr, relu_shift_y);
	weights_all_ptr += conv_channels_after_tile;
	//		load_1D_weights(weights_all, weights_all_ptr, relu_weight);
	weights_all_ptr += conv_channels_after_tile;

	load_1D_weights(weights_all, weights_all_ptr, relu_shift_x);
	weights_all_ptr += pw_channels_after_tile;
	load_1D_weights(weights_all, weights_all_ptr, relu_shift_y);
	weights_all_ptr += pw_channels_after_tile;
	load_1D_weights(weights_all, weights_all_ptr, relu_weight);
	weights_all_ptr += pw_channels_after_tile;

	//		load_1D_weights(weights_all, weights_all_ptr, bn_weight);
	weights_all_ptr += conv_channels_after_tile;
	//		load_1D_weights(weights_all, weights_all_ptr, bn_bias);
	weights_all_ptr += conv_channels_after_tile;

	load_1D_weights(weights_all, weights_all_ptr, bn_weight);
	weights_all_ptr += pw_channels_after_tile;
	load_1D_weights(weights_all, weights_all_ptr, bn_bias);
	weights_all_ptr += pw_channels_after_tile;
}

void load_conv3x3_weights(
		uint32 weight3x3_tile_buffer[OUT_CHANNEL_PARALLELISM][3][3],
		uint512 conv_weight_3x3_all[49104],
		int conv3x3_weight_ptr,
		int c_out,
		int c_in,
		int in_channels_after_pack
)
{

#pragma HLS ARRAY_PARTITION variable=weight3x3_tile_buffer complete dim=0

	// [c_out][c_in][2][512][3][3]
	// tile:uint32 [32][3][3] = [2][512][3][3]
	//	int ptr_start = conv3x3_weight_ptr + c_in*out_channels_after_tile*NUM_BUS_READS + c_out*NUM_BUS_READS;
	int ptr_start = conv3x3_weight_ptr + (c_out*in_channels_after_pack*NUM_BUS_READS + c_in*NUM_BUS_READS)*9;
	//		for (int i = 0; i < NUM_BUS_READS; i ++) {
	//			for (int row = 0; row < 3; row ++) {
	//				for (int col = 0; col < 3; col ++) {
	//	#pragma HLS PIPELINE
	//					int index = i*9 + row*3 + col + ptr_start;
	//					uint512 data_pack = conv_weight_3x3_all[index];
	//					for (int j = 0; j < NUM_WT_PACKS; j ++) {
	//						weight3x3_tile_buffer[i*NUM_WT_PACKS + j][row][col].range(WEIGHT_BITS-1, 0) = data_pack.range(WEIGHT_BITS-1+j*WEIGHT_BITS, j*WEIGHT_BITS);
	//					}
	//				}
	//			}
	//		}

	uint512 data_pack_buf[18];

	for (int i = 0; i < 18; i ++){
#pragma HLS PIPELINE
		uint512 data_pack = conv_weight_3x3_all[ptr_start+i];
		data_pack_buf[i] = data_pack;
	}
	for (int i = 0; i < NUM_BUS_READS; i ++){
		for (int row = 0; row < 3; row ++) {
			for (int col = 0; col < 3; col ++) {
#pragma HLS PIPELINE
				int index = i*9 + row*3 +col;
				uint512 data_pack = data_pack_buf[index];
				uint32 tmp[16];
				for (int j = 0; j < NUM_WT_PACKS; j ++) {
					tmp[j].range(WEIGHT_BITS-1, 0) = data_pack.range(WEIGHT_BITS-1+j*WEIGHT_BITS, j*WEIGHT_BITS);
				}
				for (int j = 0; j < NUM_WT_PACKS; j ++) {
					weight3x3_tile_buffer[i*NUM_WT_PACKS + j][row][col] = tmp[j];
				}
			}
		}
	}
}

void load_conv1x1_weights(
		uint32 weight1x1_tile_buffer[OUT_CHANNEL_PARALLELISM],
		uint512 conv_weight_1x1_all[6132],
		int conv1x1_weight_ptr,
		int c_out,
		int c_in,
		int in_channels_after_pack
)
{
	//#pragma HLS ARRAY_PARTITION variable=weight1x1_tile_buffer complete dim=1

	int ptr_start = conv1x1_weight_ptr + c_out*in_channels_after_pack*NUM_BUS_READS + c_in*NUM_BUS_READS;
	for (int i = 0; i < NUM_BUS_READS; i ++) {
#pragma HLS PIPELINE
		uint512 data_pack = conv_weight_1x1_all[ptr_start+i];
		for (int j = 0; j < NUM_WT_PACKS; j ++) {
			weight1x1_tile_buffer[i*NUM_WT_PACKS + j].range(WEIGHT_BITS-1, 0) = data_pack.range(WEIGHT_BITS-1+j*WEIGHT_BITS, j*WEIGHT_BITS);
		}
	}
}

void load_shortcut(
		FIX_FM_acc out_buf_sc[OUT_CHANNEL_PARALLELISM][ROW_TILE_SIZE + 1][BUF_WIDTH_0],
		uint512 DDR_buf[64][226][225],

		int H_fmap_out,
		int in_channels,
		int out_channel_start,
		int row_tile_start,
		int switch_bank
)
{
#pragma HLS ARRAY_PARTITION variable=out_buf_sc complete dim=1

	int ddr_channel_ptr = out_channel_start/OUT_CHANNEL_PARALLELISM;
	if (switch_bank) {
		if (ddr_channel_ptr >= in_channels/OUT_CHANNEL_PARALLELISM) ddr_channel_ptr -= in_channels/OUT_CHANNEL_PARALLELISM;
		ddr_channel_ptr += DDR_CH_OFFSET;
	}
	for (int row = 0; row < ROW_TILE_SIZE + 1; row ++) {
		for (int col = 0; col < H_fmap_out; col ++) {
#pragma HLS PIPELINE
			uint512 data = DDR_buf[ddr_channel_ptr][row_tile_start + row][col];
			for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++) {
				FIX_DDR tmp = 0;
				tmp.range(15, 0) = data.range(ch*16+15, ch*16);
				out_buf_sc[ch][row][col] = (FIX_FM_acc)tmp;
			}
		}
	}
}

void bn_relu_small(
		FIX_WT bn_weight[OUT_CHANNEL_PARALLELISM],
		FIX_WT bn_bias[OUT_CHANNEL_PARALLELISM],

		uint512 DDR_buf[64][226][225],
		int16 out_buf_all[OUT_CHANNEL_PARALLELISM][(ROW_TILE_SIZE+2)*(BUF_WIDTH_1+1)],
		uint32 feat_buf_all_1[FEAT_MAP_DIM],
		uint32 feat_buf_all_0[FEAT_MAP_DIM],

		int H_fmap_in,
		int H_fmap_out,
		int row_tile_start,
		int stride
)
{
	int odd = row_tile_start%2;
	int row_tile_offset = row_tile_start/stride + odd;
	for (int row = 0; row < (ROW_TILE_SIZE + 1 - odd)/stride; row ++) { // Stride 2
		for (int col = 0; col < H_fmap_out; col ++) { // Stride 2
#pragma HLS PIPELINE
			for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++) {
				FIX_FM_acc out_feature = out_buf_all[ch][(row*stride+odd+2)*(H_fmap_in+1)+col*stride+1];
				out_feature = bn_weight[ch]*out_feature + bn_bias[ch];

				FIX_DDR tmp = out_feature;
				DDR_buf[0][row_tile_offset + row][col].range(ch*16+15, ch*16) = tmp.range(15, 0);

				uint2 result_t = to2bit(out_feature);
				feat_buf_all_1[(row_tile_offset+row+1)*(H_fmap_out+1) + col][ch] = result_t[1]; // MSB
				feat_buf_all_0[(row_tile_offset+row+1)*(H_fmap_out+1) + col][ch] = result_t[0]; // LSB
			}
		}
	}
}

void bn_relu_sc_relu(
		FIX_WT conv_threshold[OUT_CHANNEL_PARALLELISM],
		FIX_WT conv_bn_weight[OUT_CHANNEL_PARALLELISM],
		FIX_WT conv_bn_bias[OUT_CHANNEL_PARALLELISM],
		FIX_WT relu_shift_x[OUT_CHANNEL_PARALLELISM],
		FIX_WT relu_shift_y[OUT_CHANNEL_PARALLELISM],
		FIX_WT relu_weight[OUT_CHANNEL_PARALLELISM],
		FIX_WT bn_weight[OUT_CHANNEL_PARALLELISM],
		FIX_WT bn_bias[OUT_CHANNEL_PARALLELISM],

		uint512 DDR_buf[64][226][225],
		int16 out_buf_all[OUT_CHANNEL_PARALLELISM][(ROW_TILE_SIZE+2)*(BUF_WIDTH_1+1)],
		FIX_FM_acc out_buf_sc[OUT_CHANNEL_PARALLELISM][ROW_TILE_SIZE+1][BUF_WIDTH_0],
		uint32 feat_buf_all_1[FEAT_MAP_DIM],
		uint32 feat_buf_all_0[FEAT_MAP_DIM],

		int H_fmap_in,
		int H_fmap_out,
		int c_out,
		int row_tile_start,
		int stride,
		int switch_bank
)
{
	//#pragma HLS ARRAY_PARTITION variable=conv_threshold complete dim=1
	//#pragma HLS ARRAY_PARTITION variable=conv_bn_weight complete dim=1
	//#pragma HLS ARRAY_PARTITION variable=conv_bn_bias complete dim=1
	//#pragma HLS ARRAY_PARTITION variable=relu_shift_x complete dim=1
	//#pragma HLS ARRAY_PARTITION variable=relu_shift_y complete dim=1
	//#pragma HLS ARRAY_PARTITION variable=relu_weight complete dim=1
	//#pragma HLS ARRAY_PARTITION variable=bn_weight complete dim=1
	//#pragma HLS ARRAY_PARTITION variable=bn_bias complete dim=1
	//
	//#pragma HLS ARRAY_PARTITION variable=out_buf_all complete dim=1
	//#pragma HLS ARRAY_PARTITION variable=out_buf_sc complete dim=1


	FIX_FM_acc out_feature_t0[OUT_CHANNEL_PARALLELISM];
	FIX_FM_acc out_feature_t1[OUT_CHANNEL_PARALLELISM];
#pragma HLS ARRAY_PARTITION variable=out_feature_t0 complete dim=1
#pragma HLS ARRAY_PARTITION variable=out_feature_t1 complete dim=1

	const FIX_WT msb_scale = 2.0/3.0;
	const FIX_WT lsb_scale = 1.0/3.0;
	const int out_buf_offset = (ROW_TILE_SIZE+2)*(H_fmap_in+1);
	const int fmap_ptr_offset_0 = c_out*(H_fmap_out)*(H_fmap_out);
	const int fmap_ptr_offset_1 = c_out*(H_fmap_out+1)*(H_fmap_out+1);
	int ddr_ptr = c_out + DDR_CH_OFFSET;
	if (switch_bank == 1) ddr_ptr = c_out;
	int odd = row_tile_start%2*(stride-1);
	int row_tile_offset = row_tile_start/stride + odd;


	for (int row = 0; row < (ROW_TILE_SIZE + (1 - odd)*(stride-1))/stride; row ++) {
		for (int col = 0; col < H_fmap_out; col ++) {
#pragma HLS PIPELINE
			int fmap_ptr = fmap_ptr_offset_0 + (row_tile_offset+row)*(H_fmap_out) + col + FEAT_BUF_OFFSET;
			if (switch_bank == 1) {
				// switch_bank = 0: prepare for 1x1 conv
				// switch_bank = 1: prepare for 3x3 conv
				fmap_ptr = fmap_ptr_offset_1 + (row_tile_offset+row+1)*(H_fmap_out+1) + col;
			}
			int out_buf_index = (row*stride+odd+2)*(H_fmap_in+1)+col*stride+1;

			// merge_tile
			for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++) {
				out_feature_t1[ch] = out_buf_all[ch][out_buf_index];
				//				out_feature_t0[ch] = out_buf_all[ch][out_buf_index+out_buf_offset];
			}
			// threshold
			for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++) {
				out_feature_t1[ch] *= msb_scale;
				if (out_feature_t1[ch] > conv_threshold[ch]) {
					out_feature_t1[ch] += out_buf_all[ch][out_buf_index+out_buf_offset]*lsb_scale;
				}
			}

			// Batch-norm
			for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++) {
				out_feature_t1[ch] = conv_bn_weight[ch]*out_feature_t1[ch] + conv_bn_bias[ch];
			}

			// ReLU
			for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++) {
				out_feature_t1[ch] += relu_shift_x[ch];
				if (out_feature_t1[ch] < 0) out_feature_t1[ch]*= relu_weight[ch];
				out_feature_t1[ch] += relu_shift_y[ch];
			}

			// Shortcut
			for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++) {
				out_feature_t1[ch] += out_buf_sc[ch][row][col];
			}

			// Batch-norm
			for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++) {
				out_feature_t1[ch] = bn_weight[ch]*out_feature_t1[ch] + bn_bias[ch];
			}

			// Write-back
			for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++) {
				FIX_DDR tmp = out_feature_t1[ch];
				DDR_buf[ddr_ptr][row_tile_offset + row][col].range(ch*16+15, ch*16) = tmp.range(15, 0);
			}

			// quant and pack
			for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++) {
				uint2 result_t = to2bit(out_feature_t1[ch]);
				feat_buf_all_1[fmap_ptr][ch] = result_t[1]; // MSB
				feat_buf_all_0[fmap_ptr][ch] = result_t[0]; // LSB
			}
		}
	}
}


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


void avgpool(
		FIX_FM_acc out_buf_sc[OUT_CHANNEL_PARALLELISM][ROW_TILE_SIZE+1][BUF_WIDTH_0],
		int H_fmap,
		int row_tile_start
)
{
	//#pragma HLS ARRAY_PARTITION variable=out_buf_sc complete dim=1
	int odd = row_tile_start %2;

	// even 0, 2, 4, 6,
	// even_row 0, 1, 2, 3
	// odd: 1, 3, 5,
	// odd_row 0, 1, 2

	for (int row = 0; row < ROW_TILE_SIZE/2 + (1 - odd) ; row ++){
		for (int col = 0; col < H_fmap/2; col ++){
			FIX_FM_acc tmp[OUT_CHANNEL_PARALLELISM];
#pragma HLS ARRAY_PARTITION variable=tmp complete dim=1

			int row_start = row*2 + odd;
			int col_start = col*2;
			for (int ii = 0; ii < 2; ii ++) {
				for (int jj = 0; jj < 2; jj ++) {
#pragma HLS PIPELINE
					for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++){
						if (ii + jj == 0) tmp[ch] = out_buf_sc[ch][row_start+ii][col_start+jj];
						else tmp[ch] += out_buf_sc[ch][row_start+ii][col_start+jj];
					}
				}
			}
			for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++){
#pragma HLS UNROLL
				out_buf_sc[ch][row][col] = tmp[ch]/(FIX_FM_acc)4.0;
			}
		}
	}
}


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

void avgpool7x7(
		uint512 DDR_buf[64][226][225],
		FIX_LINR avgpool_out_buf[32][32]
)
{
#pragma HLS ARRAY_PARTITION variable=avgpool_out_buf complete dim=2
	//	FIX_20_12 temp = 0;
	//	LOOP_Avg_Pool:
	//	for (int ch0 = 0; ch0 < 32; ch0 ++){
	//		for (int ch1 = 0; ch1 < 32; ch1 ++){
	//			for (int row = 0; row < 7; row ++) {
	//				for (int col = 0; col < 7; col ++) {
	//#pragma HLS PIPELINE II=2
	//					FIX_DDR data_fix = 0;
	//					data_fix.range(15, 0) = DDR_buf[ch0][row][col].range(ch1*16 + 15, ch1*16);
	//					if (row + col == 0) temp = (FIX_20_12)data_fix;
	//					if (row + col == 14) avgpool_out_buf[ch0*32 + ch1] = temp/(FIX_FM_acc)49.0;
	//					else temp += (FIX_20_12)data_fix;
	//				}
	//			}
	//		}
	//	}

	FIX_LINR data_buf[32];
#pragma HLS ARRAY_PARTITION variable=data_buf complete dim=1
	LOOP_Avg_Pool:
	for (int ch_t = 0; ch_t < 32; ch_t ++){
		for (int ch = 0; ch < 32; ch ++){
			data_buf[ch] = 0;
		}
		for (int row = 0; row < 7; row ++) {
			for (int col = 0; col < 7; col ++) {
#pragma HLS PIPELINE
				uint512 data = DDR_buf[ch_t][row][col];
				for (int ch = 0; ch < 32; ch ++){
					FIX_DDR data_fix = 0;
					data_fix.range(15, 0) = data.range(ch*16 + 15, ch*16);
					data_buf[ch] += data_fix;
				}
			}
		}
		for (int ch = 0; ch < 32; ch ++){
			avgpool_out_buf[ch_t][ch] = data_buf[ch]/(FIX_FM_acc)49.0;
		}
	}
}

void matmul32(
		uint512 linear_weight[1000][32],
		uint512 linear_bias[32],
		FIX_LINR avgpool_out_buf[32][32],
		FIX_LINR linear_out_buf[1000]
)
{
	FIX_16_4 linear_bias_buf[32][32];
	FIX_16_4 linear_weight_buf[32][32];
#pragma HLS ARRAY_PARTITION variable=linear_bias_buf complete dim=2
#pragma HLS ARRAY_PARTITION variable=linear_weight_buf complete dim=1
#pragma HLS ARRAY_PARTITION variable=linear_weight_buf complete dim=2

	//	FIX_20_12 avgpool_buf_buf[32][32];
	FIX_LINR linear_buf_buf[32];
	//#pragma HLS ARRAY_PARTITION variable=avgpool_buf_buf complete dim=2
#pragma HLS ARRAY_PARTITION variable=linear_buf_buf complete dim=1


	LOOP_linear_bias:
	for (int i = 0; i < 32; i ++){
#pragma HLS PIPELINE
		uint512 data = linear_bias[i];
		for (int j = 0; j < 32; j ++){
			FIX_16_4 tmp = 0;
			tmp.range(15, 0) = data.range(j*16 + 15, j*16);
			linear_bias_buf[i][j] = tmp;
		}
	}
	//	LOOP_buf_buf:
	//	for (int i = 0; i < 32; i ++){
	//		for (int j = 0; j < 32; j ++){
	//#pragma HLS PIPELINE
	//			avgpool_buf_buf[i][j] = avgpool_out_buf[i*32+j];
	//		}
	//	}
	LOOP_matmul:
	for (int row_t = 0; row_t < 32; row_t ++){
		for (int row = 0; row < 32; row ++){
#pragma HLS PIPELINE
			linear_buf_buf[row] = linear_bias_buf[row_t][row];
		}
		for (int col_t = 0; col_t < 32; col_t ++){
			for (int row = 0; row < 32; row ++){
#pragma HLS PIPELINE
				uint512 data = linear_weight[row_t*32 + row][col_t];
				for (int col = 0; col < 32; col ++){
					FIX_16_4 tmp = 0;
					tmp.range(15, 0) = data.range(col*16 + 15, col*16);
					linear_weight_buf[row][col] = tmp;
				}
			}
			for (int col = 0; col < 32; col ++){
#pragma HLS PIPELINE
				for (int row = 0; row < 32; row ++){
					linear_buf_buf[row] += linear_weight_buf[row][col]*avgpool_out_buf[col_t][col];
				}
			}
		}
		for (int row = 0; row < 32; row ++){
#pragma HLS PIPELINE
			int row_index = row_t*32 + row;
			if (row_index < 1000) linear_out_buf[row_index] = linear_buf_buf[row];
		}

	}


	//	for (int i = 0; i < 32; i ++){ // out_tile
	//		for (int j = 0; j < 32; j ++){ // in_tile
	//#pragma HLS PIPELINE
	//			uint512 data = linear_weight[i][j];
	//			for (int k = 0; k < 32; k ++){
	//				FIX_16_4 tmp = 0;
	//				tmp.range(15, 0) = data.range(k*16 + 15, k*16);
	//				linear_weight_buf[j][k] = tmp;
	//			}
	//		}
	//		FIX_20_12 tmp = (FIX_20_12)linear_bias_buf[i/32][i%32];
	//		for (int j = 0; j < 32; j ++){
	//			#pragma HLS PIPELINE
	//			for (int k = 0; k < 32; k ++){
	//				tmp += linear_weight_buf[j][k]*avgpool_buf_buf[j][k];
	//			}
	//		}
	//		linear_out_buf[i] = tmp;
	//	}
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

//void matmul(
//		FIX_32_10 inputs[64],
//		const FIX_WT linear_weight[10][64],
//		const FIX_WT linear_bias[10],
//		FIX_32_10 outputs[10]
//)
//{
//#pragma HLS ARRAY_PARTITION variable=linear_weight complete dim=1
//#pragma HLS ARRAY_PARTITION variable=linear_bias complete dim=1
//
//	FIX_FM_acc buf[10];
//#pragma HLS ARRAY_PARTITION variable=buf complete dim=1
//
//	for(int coo = 0; coo < 10; coo ++) {
//#pragma HLS PIPELINE
//		buf[coo] = linear_bias[coo];
//	}
//
//	for(int cii = 0; cii < 64; cii++) {
//#pragma HLS PIPELINE
//		FIX_FM_acc tmp_in = inputs[cii];
//		FIX_FM_acc tmp_wt[10];
//#pragma HLS ARRAY_PARTITION variable=tmp_wt complete dim=1
//		for(int coo = 0; coo < 10; coo ++) {
//			tmp_wt[coo] = linear_weight[coo][cii];
//		}
//		for(int coo = 0; coo < 10; coo ++) {
//			buf[coo] += tmp_in*tmp_wt[coo];
//		}
//	}
//
//	for(int coo = 0; coo < 10; coo ++) {
//#pragma HLS PIPELINE
//		outputs[coo] = buf[coo];
//	}
//}

#endif
