#include "bnn.h"
#include "layer.h"

using namespace std;

void FracNet_T(
		uint16 image[6][32][32],
		// float output[64*32*32]
					 float output[10]
)
{
#pragma HLS INTERFACE m_axi port=image offset=slave bundle=IMG
#pragma HLS INTERFACE m_axi port=output offset=slave bundle=RESULT
#pragma HLS INTERFACE s_axilite port=return bundle=control

#pragma HLS ALLOCATION instances=pg_conv3x3_tile limit=1 function
#pragma HLS ALLOCATION instances=quant_and_pack limit=1 function
#pragma HLS ALLOCATION instances=merge_tile limit=1 function
#pragma HLS ALLOCATION instances=batchnorm limit=1 function
#pragma HLS ALLOCATION instances=rprelu limit=1 function
#pragma HLS ALLOCATION instances=shortcut limit=1 function

	uint16 msb_fmap[6][WIDTH][WIDTH];
	uint16 lsb_fmap[6][WIDTH][WIDTH];

	FIX_FM_acc out_buf_0[CHANNEL_OUT][WIDTH][WIDTH];
	FIX_FM_acc out_buf_1[CHANNEL_OUT][WIDTH][WIDTH];
	FIX_FM_acc out_buf_t0[CHANNEL_OUT_T][WIDTH][WIDTH];
	FIX_FM_acc out_buf_t1[CHANNEL_OUT_T][WIDTH][WIDTH];
#pragma HLS ARRAY_PARTITION variable=out_buf_0 complete dim=1
#pragma HLS ARRAY_PARTITION variable=out_buf_1 complete dim=1
#pragma HLS ARRAY_PARTITION variable=out_buf_t0 complete dim=1
#pragma HLS ARRAY_PARTITION variable=out_buf_t1 complete dim=1

	uint16 weight_tile_buffer[OUT_CHANNEL_PARALLELISM][CHANNEL_IN][3][3];
#pragma HLS ARRAY_PARTITION variable=weight_tile_buffer complete dim=1
#pragma HLS ARRAY_PARTITION variable=weight_tile_buffer complete dim=3
#pragma HLS ARRAY_PARTITION variable=weight_tile_buffer complete dim=4

	FIX_WT threshold_tile_buffer[OUT_CHANNEL_PARALLELISM];
#pragma HLS ARRAY_PARTITION variable=weight_tile_buffer complete dim=1

	int H_fmap_in, H_fmap_out, in_channels, in_channels_after_pack, out_channels, out_channel_start;

	const FIX_WT msb_scale = 2.0/3.0;
	const FIX_WT lsb_scale = 1.0/3.0;

	FIX_FM_acc msb_register[OUT_CHANNEL_PARALLELISM];
	FIX_FM_acc lsb_register[OUT_CHANNEL_PARALLELISM];
#pragma HLS ARRAY_PARTITION variable=msb_register complete dim=1
#pragma HLS ARRAY_PARTITION variable=lsb_register complete dim=1


	////////////////////////////////////////////////
	//////////// GET IMAGE /////////////////////////
	////////////////////////////////////////////////

	LOOP_GetImg:
	for (int c = 0; c < 6; c ++) {
		for (int row = 0; row < 32; row ++) {
			for (int col = 0; col < 32; col ++) {
#pragma HLS PIPELINE
				msb_fmap[c][row][col] = image[c][row][col];
			}
		}
	}

	////////////////////////////////////////////////
	//////////// CONV 1 Binary /////////////////////
	////////////////////////////////////////////////

	// conv1(msb_fmap, lsb_fmap, weight_tile_buffer, out_buf_1, out_buf_2);
	in_channels_after_pack = 6;
	out_channels = 16;
	H_fmap_out = 32;

#pragma HLS ARRAY_PARTITION variable=conv1_weight_fix complete dim=3
#pragma HLS ARRAY_PARTITION variable=conv1_weight_fix complete dim=4

	LOOP_Conv1:
	for (int ch_t = 0; ch_t < out_channels/OUT_CHANNEL_PARALLELISM; ch_t ++){
		out_channel_start = ch_t*OUT_CHANNEL_PARALLELISM;
		for(int n_filter = 0; n_filter < OUT_CHANNEL_PARALLELISM; n_filter ++){
			for(int c_in = 0; c_in < in_channels_after_pack; c_in ++){
#pragma HLS PIPELINE
				for(int k_row = 0; k_row < 3; k_row ++){
					for(int k_col = 0; k_col < 3; k_col ++){
						weight_tile_buffer[n_filter][c_in][k_row][k_col] = conv1_weight_fix[out_channel_start+n_filter][c_in][k_row][k_col];
					}
				}
			}
		}
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_t0, out_buf_t1,
				in_channels_after_pack, H_fmap_out
		);
		for (int row = 0; row < H_fmap_out; row ++) {
			for (int col = 0; col < H_fmap_out; col ++) {
				for (int ch = 0; ch < OUT_CHANNEL_PARALLELISM; ch ++) {
					out_buf_1[out_channel_start+ch][row][col] = out_buf_t0[ch][row+1][col+1];
				}
			}
		}
	}
	batchnorm(out_buf_1, bn1_weight_fix, bn1_bias_fix, H_fmap_out, out_channels); // out_buf_1 -> shortcuts


	////////////////////////////////////////////////
	//////////// LAYER 1 ///////////////////////////
	////////////////////////////////////////////////

	H_fmap_in = 32;
	H_fmap_out = 32;
	in_channels = 16;
	in_channels_after_pack = in_channels / 16; // assume packing 16 bits
	out_channels = 16;

	////////////////////////////////////////////////
	//////////// Layer 1.0 PG1 /////////////////////
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_Layer1_0_PGConv1:
	for (int ch_t = 0; ch_t < out_channels/OUT_CHANNEL_PARALLELISM; ch_t ++) {
		for (int row = 0; row < H_fmap_out; row ++){
			for (int col = 0; col < H_fmap_out; col ++){
#pragma HLS PIPELINE
				if (row == 0 && col == 0) {
					out_channel_start = ch_t*OUT_CHANNEL_PARALLELISM;
					load_weights_tile<1, 16>(
							layer1_0_conv1_weight_fix, layer1_0_conv1_threshold_fix,
							weight_tile_buffer, threshold_tile_buffer,
							out_channel_start, in_channels_after_pack
					);
					pg_conv3x3_tile(
							msb_fmap, lsb_fmap, weight_tile_buffer,
							out_buf_t0, out_buf_t1,
							in_channels_after_pack, H_fmap_out
					);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] = out_buf_t0[ch_offset][row+1][col+1];
					lsb_register[ch_offset] = out_buf_t1[ch_offset][row+1][col+1];
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] *= msb_scale;
					if (msb_register[ch_offset] > threshold_tile_buffer[ch_offset])
						msb_register[ch_offset] += (lsb_register[ch_offset]*lsb_scale);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					out_buf_0[out_channel_start + ch_offset][row][col] = msb_register[ch_offset];
				}
			}
		}
	}
	batchnorm(out_buf_0, layer1_0_bn1_weight_fix, layer1_0_bn1_bias_fix, H_fmap_out, out_channels);
	rprelu(out_buf_0, layer1_0_rprelu1_shift_x_bias_fix, layer1_0_rprelu1_shift_y_bias_fix, layer1_0_rprelu1_prelu_weight_fix, H_fmap_out, out_channels);
	shortcut(out_buf_1, out_buf_0, H_fmap_out, out_channels);
	batchnorm(out_buf_1, layer1_0_bn3_weight_fix, layer1_0_bn3_bias_fix, H_fmap_out, out_channels); // out_buf_2 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 1.0 PG2 /////////////////////
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_Layer1_0_PGConv2:
	for (int ch_t = 0; ch_t < out_channels/OUT_CHANNEL_PARALLELISM; ch_t ++) {
		for (int row = 0; row < H_fmap_out; row ++){
			for (int col = 0; col < H_fmap_out; col ++){
#pragma HLS PIPELINE
				if (row == 0 && col == 0) {
					out_channel_start = ch_t*OUT_CHANNEL_PARALLELISM;
					load_weights_tile<1, 16>(
							layer1_0_conv2_weight_fix, layer1_0_conv2_threshold_fix,
							weight_tile_buffer, threshold_tile_buffer,
							out_channel_start, in_channels_after_pack
					);
					pg_conv3x3_tile(
							msb_fmap, lsb_fmap, weight_tile_buffer,
							out_buf_t0, out_buf_t1,
							in_channels_after_pack, H_fmap_out
					);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] = out_buf_t0[ch_offset][row+1][col+1];
					lsb_register[ch_offset] = out_buf_t1[ch_offset][row+1][col+1];
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] *= msb_scale;
					if (msb_register[ch_offset] > threshold_tile_buffer[ch_offset])
						msb_register[ch_offset] += (lsb_register[ch_offset]*lsb_scale);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					out_buf_0[out_channel_start + ch_offset][row][col] = msb_register[ch_offset];
				}
			}
		}
	}
	batchnorm(out_buf_0, layer1_0_bn2_weight_fix, layer1_0_bn2_bias_fix, H_fmap_out, out_channels);
	rprelu(out_buf_0, layer1_0_rprelu2_shift_x_bias_fix, layer1_0_rprelu2_shift_y_bias_fix, layer1_0_rprelu2_prelu_weight_fix, H_fmap_out, out_channels);
	shortcut(out_buf_1, out_buf_0, H_fmap_out, out_channels);
	batchnorm(out_buf_1, layer1_0_bn4_weight_fix, layer1_0_bn4_bias_fix, H_fmap_out, out_channels); // out_buf_2 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 1.1 PG1 /////////////////////
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_Layer1_1_PGConv1:
	for (int ch_t = 0; ch_t < out_channels/OUT_CHANNEL_PARALLELISM; ch_t ++) {
		for (int row = 0; row < H_fmap_out; row ++){
			for (int col = 0; col < H_fmap_out; col ++){
#pragma HLS PIPELINE
				if (row == 0 && col == 0) {
					out_channel_start = ch_t*OUT_CHANNEL_PARALLELISM;
					load_weights_tile<1, 16>(
							layer1_1_conv1_weight_fix, layer1_1_conv1_threshold_fix,
							weight_tile_buffer, threshold_tile_buffer,
							out_channel_start, in_channels_after_pack
					);
					pg_conv3x3_tile(
							msb_fmap, lsb_fmap, weight_tile_buffer,
							out_buf_t0, out_buf_t1,
							in_channels_after_pack, H_fmap_out
					);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] = out_buf_t0[ch_offset][row+1][col+1];
					lsb_register[ch_offset] = out_buf_t1[ch_offset][row+1][col+1];
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] *= msb_scale;
					if (msb_register[ch_offset] > threshold_tile_buffer[ch_offset])
						msb_register[ch_offset] += (lsb_register[ch_offset]*lsb_scale);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					out_buf_0[out_channel_start + ch_offset][row][col] = msb_register[ch_offset];
				}
			}
		}
	}
	batchnorm(out_buf_0, layer1_1_bn1_weight_fix, layer1_1_bn1_bias_fix, H_fmap_out, out_channels);
	rprelu(out_buf_0, layer1_1_rprelu1_shift_x_bias_fix, layer1_1_rprelu1_shift_y_bias_fix, layer1_1_rprelu1_prelu_weight_fix, H_fmap_out, out_channels);
	shortcut(out_buf_1, out_buf_0, H_fmap_out, out_channels);
	batchnorm(out_buf_1, layer1_1_bn3_weight_fix, layer1_1_bn3_bias_fix, H_fmap_out, out_channels); // out_buf_2 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 1.1 PG2 /////////////////////
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_Layer1_1_PGConv2:
	for (int ch_t = 0; ch_t < out_channels/OUT_CHANNEL_PARALLELISM; ch_t ++) {
		for (int row = 0; row < H_fmap_out; row ++){
			for (int col = 0; col < H_fmap_out; col ++){
#pragma HLS PIPELINE
				if (row == 0 && col == 0) {
					out_channel_start = ch_t*OUT_CHANNEL_PARALLELISM;
					load_weights_tile<1, 16>(
							layer1_1_conv2_weight_fix, layer1_1_conv2_threshold_fix,
							weight_tile_buffer, threshold_tile_buffer,
							out_channel_start, in_channels_after_pack
					);
					pg_conv3x3_tile(
							msb_fmap, lsb_fmap, weight_tile_buffer,
							out_buf_t0, out_buf_t1,
							in_channels_after_pack, H_fmap_out
					);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] = out_buf_t0[ch_offset][row+1][col+1];
					lsb_register[ch_offset] = out_buf_t1[ch_offset][row+1][col+1];
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] *= msb_scale;
					if (msb_register[ch_offset] > threshold_tile_buffer[ch_offset])
						msb_register[ch_offset] += (lsb_register[ch_offset]*lsb_scale);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					out_buf_0[out_channel_start + ch_offset][row][col] = msb_register[ch_offset];
				}
			}
		}
	}
	batchnorm(out_buf_0, layer1_1_bn2_weight_fix, layer1_1_bn2_bias_fix, H_fmap_out, out_channels);
	rprelu(out_buf_0, layer1_1_rprelu2_shift_x_bias_fix, layer1_1_rprelu2_shift_y_bias_fix, layer1_1_rprelu2_prelu_weight_fix, H_fmap_out, out_channels);
	shortcut(out_buf_1, out_buf_0, H_fmap_out, out_channels);
	batchnorm(out_buf_1, layer1_1_bn4_weight_fix, layer1_1_bn4_bias_fix, H_fmap_out, out_channels); // out_buf_2 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 1.2 PG1 /////////////////////
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_Layer1_2_PGConv1:
	for (int ch_t = 0; ch_t < out_channels/OUT_CHANNEL_PARALLELISM; ch_t ++) {
		for (int row = 0; row < H_fmap_out; row ++){
			for (int col = 0; col < H_fmap_out; col ++){
#pragma HLS PIPELINE
				if (row == 0 && col == 0) {
					out_channel_start = ch_t*OUT_CHANNEL_PARALLELISM;
					load_weights_tile<1, 16>(
							layer1_2_conv1_weight_fix, layer1_2_conv1_threshold_fix,
							weight_tile_buffer, threshold_tile_buffer,
							out_channel_start, in_channels_after_pack
					);
					pg_conv3x3_tile(
							msb_fmap, lsb_fmap, weight_tile_buffer,
							out_buf_t0, out_buf_t1,
							in_channels_after_pack, H_fmap_out
					);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] = out_buf_t0[ch_offset][row+1][col+1];
					lsb_register[ch_offset] = out_buf_t1[ch_offset][row+1][col+1];
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] *= msb_scale;
					if (msb_register[ch_offset] > threshold_tile_buffer[ch_offset])
						msb_register[ch_offset] += (lsb_register[ch_offset]*lsb_scale);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					out_buf_0[out_channel_start + ch_offset][row][col] = msb_register[ch_offset];
				}
			}
		}
	}
	batchnorm(out_buf_0, layer1_2_bn1_weight_fix, layer1_2_bn1_bias_fix, H_fmap_out, out_channels);
	rprelu(out_buf_0, layer1_2_rprelu1_shift_x_bias_fix, layer1_2_rprelu1_shift_y_bias_fix, layer1_2_rprelu1_prelu_weight_fix, H_fmap_out, out_channels);
	shortcut(out_buf_1, out_buf_0, H_fmap_out, out_channels);
	batchnorm(out_buf_1, layer1_2_bn3_weight_fix, layer1_2_bn3_bias_fix, H_fmap_out, out_channels); // out_buf_2 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 1.2 PG2 /////////////////////
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_Layer1_2_PGConv2:
	for (int ch_t = 0; ch_t < out_channels/OUT_CHANNEL_PARALLELISM; ch_t ++) {
		for (int row = 0; row < H_fmap_out; row ++){
			for (int col = 0; col < H_fmap_out; col ++){
#pragma HLS PIPELINE
				if (row == 0 && col == 0) {
					out_channel_start = ch_t*OUT_CHANNEL_PARALLELISM;
					load_weights_tile<1, 16>(
							layer1_2_conv2_weight_fix, layer1_2_conv2_threshold_fix,
							weight_tile_buffer, threshold_tile_buffer,
							out_channel_start, in_channels_after_pack
					);
					pg_conv3x3_tile(
							msb_fmap, lsb_fmap, weight_tile_buffer,
							out_buf_t0, out_buf_t1,
							in_channels_after_pack, H_fmap_out
					);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] = out_buf_t0[ch_offset][row+1][col+1];
					lsb_register[ch_offset] = out_buf_t1[ch_offset][row+1][col+1];
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] *= msb_scale;
					if (msb_register[ch_offset] > threshold_tile_buffer[ch_offset])
						msb_register[ch_offset] += (lsb_register[ch_offset]*lsb_scale);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					out_buf_0[out_channel_start + ch_offset][row][col] = msb_register[ch_offset];
				}
			}
		}
	}
	batchnorm(out_buf_0, layer1_2_bn2_weight_fix, layer1_2_bn2_bias_fix, H_fmap_out, out_channels);
	rprelu(out_buf_0, layer1_2_rprelu2_shift_x_bias_fix, layer1_2_rprelu2_shift_y_bias_fix, layer1_2_rprelu2_prelu_weight_fix, H_fmap_out, out_channels);
	shortcut(out_buf_1, out_buf_0, H_fmap_out, out_channels);
	batchnorm(out_buf_1, layer1_2_bn4_weight_fix, layer1_2_bn4_bias_fix, H_fmap_out, out_channels); // out_buf_2 -> shortcuts


	////////////////////////////////////////////////
	//////////// LAYER 2 SPECIAL ///////////////////
	////////////////////////////////////////////////

	H_fmap_in = 32;
	H_fmap_out = 32;
	in_channels = 16;
	in_channels_after_pack = in_channels / 16; // assume packing 16 bits
	out_channels = 32;

	////////////////////////////////////////////////
	//////////// Layer 2.0 PG1 /////////////////////
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer2_0_PGConv1:
	for (int ch_t = 0; ch_t < out_channels/OUT_CHANNEL_PARALLELISM; ch_t ++) {
		for (int row = 0; row < 16; row ++){
			for (int col = 0; col < 16; col ++){
#pragma HLS PIPELINE
				if (row == 0 && col == 0) {
					out_channel_start = ch_t*OUT_CHANNEL_PARALLELISM;
					load_weights_tile<1, 32>(
							layer2_0_conv1_weight_fix, layer2_0_conv1_threshold_fix,
							weight_tile_buffer, threshold_tile_buffer,
							out_channel_start, in_channels_after_pack
					);
					pg_conv3x3_tile(
							msb_fmap, lsb_fmap, weight_tile_buffer,
							out_buf_t0, out_buf_t1,
							in_channels_after_pack, H_fmap_out
					);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] = out_buf_t0[ch_offset][row*2+1][col*2+1];
					lsb_register[ch_offset] = out_buf_t1[ch_offset][row*2+1][col*2+1];
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] *= msb_scale;
					if (msb_register[ch_offset] > threshold_tile_buffer[ch_offset])
						msb_register[ch_offset] += (lsb_register[ch_offset]*lsb_scale);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					out_buf_0[out_channel_start + ch_offset][row][col] = msb_register[ch_offset];
				}
			}
		}
	}
	batchnorm(out_buf_0, layer2_0_bn1_weight_fix, layer2_0_bn1_bias_fix, 16, out_channels);
	rprelu(out_buf_0, layer2_0_rprelu1_shift_x_bias_fix, layer2_0_rprelu1_shift_y_bias_fix, layer2_0_rprelu1_prelu_weight_fix, 16, out_channels);
	avgpool_concat(out_buf_1, 16, 16);
	shortcut(out_buf_1, out_buf_0, 16, out_channels);
	batchnorm(out_buf_1, layer2_0_bn3_weight_fix, layer2_0_bn3_bias_fix, 16, out_channels); // out_buf_2 -> shortcuts

	////////////////////////////////////////////////
	//////////// LAYER 2 ///////////////////////////
	////////////////////////////////////////////////

	H_fmap_in = 16;
	H_fmap_out = 16;
	in_channels = 32;
	in_channels_after_pack = in_channels / 16; // assume packing 16 bits
	out_channels = 32;

	////////////////////////////////////////////////
	//////////// Layer 2.0 PG2 /////////////////////
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer2_0_PGConv2:
	for (int ch_t = 0; ch_t < out_channels/OUT_CHANNEL_PARALLELISM; ch_t ++) {
		for (int row = 0; row < H_fmap_out; row ++){
			for (int col = 0; col < H_fmap_out; col ++){
#pragma HLS PIPELINE
				if (row == 0 && col == 0) {
					out_channel_start = ch_t*OUT_CHANNEL_PARALLELISM;
					load_weights_tile<2, 32>(
							layer2_0_conv2_weight_fix, layer2_0_conv2_threshold_fix,
							weight_tile_buffer, threshold_tile_buffer,
							out_channel_start, in_channels_after_pack
					);
					pg_conv3x3_tile(
							msb_fmap, lsb_fmap, weight_tile_buffer,
							out_buf_t0, out_buf_t1,
							in_channels_after_pack, H_fmap_out
					);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] = out_buf_t0[ch_offset][row+1][col+1];
					lsb_register[ch_offset] = out_buf_t1[ch_offset][row+1][col+1];
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] *= msb_scale;
					if (msb_register[ch_offset] > threshold_tile_buffer[ch_offset])
						msb_register[ch_offset] += (lsb_register[ch_offset]*lsb_scale);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					out_buf_0[out_channel_start + ch_offset][row][col] = msb_register[ch_offset];
				}
			}
		}
	}
	batchnorm(out_buf_0, layer2_0_bn2_weight_fix, layer2_0_bn2_bias_fix, H_fmap_out, out_channels);
	rprelu(out_buf_0, layer2_0_rprelu2_shift_x_bias_fix, layer2_0_rprelu2_shift_y_bias_fix, layer2_0_rprelu2_prelu_weight_fix, H_fmap_out, out_channels);
	shortcut(out_buf_1, out_buf_0, H_fmap_out, out_channels);
	batchnorm(out_buf_1, layer2_0_bn4_weight_fix, layer2_0_bn4_bias_fix, H_fmap_out, out_channels); // out_buf_2 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 2.1 PG1 /////////////////////
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer2_1_PGConv1:
	for (int ch_t = 0; ch_t < out_channels/OUT_CHANNEL_PARALLELISM; ch_t ++) {
		for (int row = 0; row < H_fmap_out; row ++){
			for (int col = 0; col < H_fmap_out; col ++){
#pragma HLS PIPELINE
				if (row == 0 && col == 0) {
					out_channel_start = ch_t*OUT_CHANNEL_PARALLELISM;
					load_weights_tile<2, 32>(
							layer2_1_conv1_weight_fix, layer2_1_conv1_threshold_fix,
							weight_tile_buffer, threshold_tile_buffer,
							out_channel_start, in_channels_after_pack
					);
					pg_conv3x3_tile(
							msb_fmap, lsb_fmap, weight_tile_buffer,
							out_buf_t0, out_buf_t1,
							in_channels_after_pack, H_fmap_out
					);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] = out_buf_t0[ch_offset][row+1][col+1];
					lsb_register[ch_offset] = out_buf_t1[ch_offset][row+1][col+1];
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] *= msb_scale;
					if (msb_register[ch_offset] > threshold_tile_buffer[ch_offset])
						msb_register[ch_offset] += (lsb_register[ch_offset]*lsb_scale);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					out_buf_0[out_channel_start + ch_offset][row][col] = msb_register[ch_offset];
				}
			}
		}
	}
	batchnorm(out_buf_0, layer2_1_bn1_weight_fix, layer2_1_bn1_bias_fix, H_fmap_out, out_channels);
	rprelu(out_buf_0, layer2_1_rprelu1_shift_x_bias_fix, layer2_1_rprelu1_shift_y_bias_fix, layer2_1_rprelu1_prelu_weight_fix, H_fmap_out, out_channels);
	shortcut(out_buf_1, out_buf_0, H_fmap_out, out_channels);
	batchnorm(out_buf_1, layer2_1_bn3_weight_fix, layer2_1_bn3_bias_fix, H_fmap_out, out_channels); // out_buf_2 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 2.1 PG2 /////////////////////
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer2_1_PGConv2:
	for (int ch_t = 0; ch_t < out_channels/OUT_CHANNEL_PARALLELISM; ch_t ++) {
		for (int row = 0; row < H_fmap_out; row ++){
			for (int col = 0; col < H_fmap_out; col ++){
#pragma HLS PIPELINE
				if (row == 0 && col == 0) {
					out_channel_start = ch_t*OUT_CHANNEL_PARALLELISM;
					load_weights_tile<2, 32>(
							layer2_1_conv2_weight_fix, layer2_1_conv2_threshold_fix,
							weight_tile_buffer, threshold_tile_buffer,
							out_channel_start, in_channels_after_pack
					);
					pg_conv3x3_tile(
							msb_fmap, lsb_fmap, weight_tile_buffer,
							out_buf_t0, out_buf_t1,
							in_channels_after_pack, H_fmap_out
					);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] = out_buf_t0[ch_offset][row+1][col+1];
					lsb_register[ch_offset] = out_buf_t1[ch_offset][row+1][col+1];
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] *= msb_scale;
					if (msb_register[ch_offset] > threshold_tile_buffer[ch_offset])
						msb_register[ch_offset] += (lsb_register[ch_offset]*lsb_scale);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					out_buf_0[out_channel_start + ch_offset][row][col] = msb_register[ch_offset];
				}
			}
		}
	}
	batchnorm(out_buf_0, layer2_1_bn2_weight_fix, layer2_1_bn2_bias_fix, H_fmap_out, out_channels);
	rprelu(out_buf_0, layer2_1_rprelu2_shift_x_bias_fix, layer2_1_rprelu2_shift_y_bias_fix, layer2_1_rprelu2_prelu_weight_fix, H_fmap_out, out_channels);
	shortcut(out_buf_1, out_buf_0, H_fmap_out, out_channels);
	batchnorm(out_buf_1, layer2_1_bn4_weight_fix, layer2_1_bn4_bias_fix, H_fmap_out, out_channels); // out_buf_2 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 2.2 PG1 /////////////////////
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer2_2_PGConv1:
	for (int ch_t = 0; ch_t < out_channels/OUT_CHANNEL_PARALLELISM; ch_t ++) {
		for (int row = 0; row < H_fmap_out; row ++){
			for (int col = 0; col < H_fmap_out; col ++){
#pragma HLS PIPELINE
				if (row == 0 && col == 0) {
					out_channel_start = ch_t*OUT_CHANNEL_PARALLELISM;
					load_weights_tile<2, 32>(
							layer2_2_conv1_weight_fix, layer2_2_conv1_threshold_fix,
							weight_tile_buffer, threshold_tile_buffer,
							out_channel_start, in_channels_after_pack
					);
					pg_conv3x3_tile(
							msb_fmap, lsb_fmap, weight_tile_buffer,
							out_buf_t0, out_buf_t1,
							in_channels_after_pack, H_fmap_out
					);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] = out_buf_t0[ch_offset][row+1][col+1];
					lsb_register[ch_offset] = out_buf_t1[ch_offset][row+1][col+1];
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] *= msb_scale;
					if (msb_register[ch_offset] > threshold_tile_buffer[ch_offset])
						msb_register[ch_offset] += (lsb_register[ch_offset]*lsb_scale);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					out_buf_0[out_channel_start + ch_offset][row][col] = msb_register[ch_offset];
				}
			}
		}
	}
	batchnorm(out_buf_0, layer2_2_bn1_weight_fix, layer2_2_bn1_bias_fix, H_fmap_out, out_channels);
	rprelu(out_buf_0, layer2_2_rprelu1_shift_x_bias_fix, layer2_2_rprelu1_shift_y_bias_fix, layer2_2_rprelu1_prelu_weight_fix, H_fmap_out, out_channels);
	shortcut(out_buf_1, out_buf_0, H_fmap_out, out_channels);
	batchnorm(out_buf_1, layer2_2_bn3_weight_fix, layer2_2_bn3_bias_fix, H_fmap_out, out_channels); // out_buf_2 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 2.2 PG2 /////////////////////
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer2_2_PGConv2:
	for (int ch_t = 0; ch_t < out_channels/OUT_CHANNEL_PARALLELISM; ch_t ++) {
		for (int row = 0; row < H_fmap_out; row ++){
			for (int col = 0; col < H_fmap_out; col ++){
#pragma HLS PIPELINE
				if (row == 0 && col == 0) {
					out_channel_start = ch_t*OUT_CHANNEL_PARALLELISM;
					load_weights_tile<2, 32>(
							layer2_2_conv2_weight_fix, layer2_2_conv2_threshold_fix,
							weight_tile_buffer, threshold_tile_buffer,
							out_channel_start, in_channels_after_pack
					);
					pg_conv3x3_tile(
							msb_fmap, lsb_fmap, weight_tile_buffer,
							out_buf_t0, out_buf_t1,
							in_channels_after_pack, H_fmap_out
					);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] = out_buf_t0[ch_offset][row+1][col+1];
					lsb_register[ch_offset] = out_buf_t1[ch_offset][row+1][col+1];
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] *= msb_scale;
					if (msb_register[ch_offset] > threshold_tile_buffer[ch_offset])
						msb_register[ch_offset] += (lsb_register[ch_offset]*lsb_scale);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					out_buf_0[out_channel_start + ch_offset][row][col] = msb_register[ch_offset];
				}
			}
		}
	}
	batchnorm(out_buf_0, layer2_2_bn2_weight_fix, layer2_2_bn2_bias_fix, H_fmap_out, out_channels);
	rprelu(out_buf_0, layer2_2_rprelu2_shift_x_bias_fix, layer2_2_rprelu2_shift_y_bias_fix, layer2_2_rprelu2_prelu_weight_fix, H_fmap_out, out_channels);
	shortcut(out_buf_1, out_buf_0, H_fmap_out, out_channels);
	batchnorm(out_buf_1, layer2_2_bn4_weight_fix, layer2_2_bn4_bias_fix, H_fmap_out, out_channels); // out_buf_2 -> shortcuts

	////////////////////////////////////////////////
	//////////// LAYER 3 SPECIAL ///////////////////
	////////////////////////////////////////////////

	H_fmap_in = 16;
	H_fmap_out = 16;
	in_channels = 32;
	in_channels_after_pack = in_channels / 16; // assume packing 16 bits
	out_channels = 64;

	////////////////////////////////////////////////
	//////////// LAYER 3.0 PG1 /////////////////////
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer3_0_PGConv1:
	for (int ch_t = 0; ch_t < out_channels/OUT_CHANNEL_PARALLELISM; ch_t ++) {
		for (int row = 0; row < 8; row ++){
			for (int col = 0; col < 8; col ++){
#pragma HLS PIPELINE
				if (row == 0 && col == 0) {
					out_channel_start = ch_t*OUT_CHANNEL_PARALLELISM;
					load_weights_tile<2, 64>(
							layer3_0_conv1_weight_fix, layer3_0_conv1_threshold_fix,
							weight_tile_buffer, threshold_tile_buffer,
							out_channel_start, in_channels_after_pack
					);
					pg_conv3x3_tile(
							msb_fmap, lsb_fmap, weight_tile_buffer,
							out_buf_t0, out_buf_t1,
							in_channels_after_pack, H_fmap_out
					);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] = out_buf_t0[ch_offset][row*2+1][col*2+1];
					lsb_register[ch_offset] = out_buf_t1[ch_offset][row*2+1][col*2+1];
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] *= msb_scale;
					if (msb_register[ch_offset] > threshold_tile_buffer[ch_offset])
						msb_register[ch_offset] += (lsb_register[ch_offset]*lsb_scale);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					out_buf_0[out_channel_start + ch_offset][row][col] = msb_register[ch_offset];
				}
			}
		}
	}
	batchnorm(out_buf_0, layer3_0_bn1_weight_fix, layer3_0_bn1_bias_fix, 8, out_channels);
	rprelu(out_buf_0, layer3_0_rprelu1_shift_x_bias_fix, layer3_0_rprelu1_shift_y_bias_fix, layer3_0_rprelu1_prelu_weight_fix, 8, out_channels);
	avgpool_concat(out_buf_1, 8, 32);
	shortcut(out_buf_1, out_buf_0, 8, out_channels);
	batchnorm(out_buf_1, layer3_0_bn3_weight_fix, layer3_0_bn3_bias_fix, 8, out_channels); // out_buf_2 -> shortcuts

	////////////////////////////////////////////////
	//////////// LAYER 3 ///////////////////////////
	////////////////////////////////////////////////

	H_fmap_in = 8;
	H_fmap_out = 8;
	in_channels = 64;
	in_channels_after_pack = in_channels / 16; // assume packing 16 bits
	out_channels = 64;

	////////////////////////////////////////////////
	//////////// Layer 3.0 PG2 /////////////////////
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer3_0_PGConv2:
	for (int ch_t = 0; ch_t < out_channels/OUT_CHANNEL_PARALLELISM; ch_t ++) {
		for (int row = 0; row < H_fmap_out; row ++){
			for (int col = 0; col < H_fmap_out; col ++){
#pragma HLS PIPELINE
				if (row == 0 && col == 0) {
					out_channel_start = ch_t*OUT_CHANNEL_PARALLELISM;
					load_weights_tile<4, 64>(
							layer3_0_conv2_weight_fix, layer3_0_conv2_threshold_fix,
							weight_tile_buffer, threshold_tile_buffer,
							out_channel_start, in_channels_after_pack
					);
					pg_conv3x3_tile(
							msb_fmap, lsb_fmap, weight_tile_buffer,
							out_buf_t0, out_buf_t1,
							in_channels_after_pack, H_fmap_out
					);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] = out_buf_t0[ch_offset][row+1][col+1];
					lsb_register[ch_offset] = out_buf_t1[ch_offset][row+1][col+1];
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] *= msb_scale;
					if (msb_register[ch_offset] > threshold_tile_buffer[ch_offset])
						msb_register[ch_offset] += (lsb_register[ch_offset]*lsb_scale);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					out_buf_0[out_channel_start + ch_offset][row][col] = msb_register[ch_offset];
				}
			}
		}
	}
	batchnorm(out_buf_0, layer3_0_bn2_weight_fix, layer3_0_bn2_bias_fix, H_fmap_out, out_channels);
	rprelu(out_buf_0, layer3_0_rprelu2_shift_x_bias_fix, layer3_0_rprelu2_shift_y_bias_fix, layer3_0_rprelu2_prelu_weight_fix, H_fmap_out, out_channels);
	shortcut(out_buf_1, out_buf_0, H_fmap_out, out_channels);
	batchnorm(out_buf_1, layer3_0_bn4_weight_fix, layer3_0_bn4_bias_fix, H_fmap_out, out_channels); // out_buf_2 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 3.1 PG1 /////////////////////
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer3_1_PGConv1:
	for (int ch_t = 0; ch_t < out_channels/OUT_CHANNEL_PARALLELISM; ch_t ++) {
		for (int row = 0; row < H_fmap_out; row ++){
			for (int col = 0; col < H_fmap_out; col ++){
#pragma HLS PIPELINE
				if (row == 0 && col == 0) {
					out_channel_start = ch_t*OUT_CHANNEL_PARALLELISM;
					load_weights_tile<4, 64>(
							layer3_1_conv1_weight_fix, layer3_1_conv1_threshold_fix,
							weight_tile_buffer, threshold_tile_buffer,
							out_channel_start, in_channels_after_pack
					);
					pg_conv3x3_tile(
							msb_fmap, lsb_fmap, weight_tile_buffer,
							out_buf_t0, out_buf_t1,
							in_channels_after_pack, H_fmap_out
					);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] = out_buf_t0[ch_offset][row+1][col+1];
					lsb_register[ch_offset] = out_buf_t1[ch_offset][row+1][col+1];
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] *= msb_scale;
					if (msb_register[ch_offset] > threshold_tile_buffer[ch_offset])
						msb_register[ch_offset] += (lsb_register[ch_offset]*lsb_scale);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					out_buf_0[out_channel_start + ch_offset][row][col] = msb_register[ch_offset];
				}
			}
		}
	}
	batchnorm(out_buf_0, layer3_1_bn1_weight_fix, layer3_1_bn1_bias_fix, H_fmap_out, out_channels);
	rprelu(out_buf_0, layer3_1_rprelu1_shift_x_bias_fix, layer3_1_rprelu1_shift_y_bias_fix, layer3_1_rprelu1_prelu_weight_fix, H_fmap_out, out_channels);
	shortcut(out_buf_1, out_buf_0, H_fmap_out, out_channels);
	batchnorm(out_buf_1, layer3_1_bn3_weight_fix, layer3_1_bn3_bias_fix, H_fmap_out, out_channels); // out_buf_2 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 3.1 PG2 /////////////////////
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer3_1_PGConv2:
	for (int ch_t = 0; ch_t < out_channels/OUT_CHANNEL_PARALLELISM; ch_t ++) {
		for (int row = 0; row < H_fmap_out; row ++){
			for (int col = 0; col < H_fmap_out; col ++){
#pragma HLS PIPELINE
				if (row == 0 && col == 0) {
					out_channel_start = ch_t*OUT_CHANNEL_PARALLELISM;
					load_weights_tile<4, 64>(
							layer3_1_conv2_weight_fix, layer3_1_conv2_threshold_fix,
							weight_tile_buffer, threshold_tile_buffer,
							out_channel_start, in_channels_after_pack
					);
					pg_conv3x3_tile(
							msb_fmap, lsb_fmap, weight_tile_buffer,
							out_buf_t0, out_buf_t1,
							in_channels_after_pack, H_fmap_out
					);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] = out_buf_t0[ch_offset][row+1][col+1];
					lsb_register[ch_offset] = out_buf_t1[ch_offset][row+1][col+1];
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] *= msb_scale;
					if (msb_register[ch_offset] > threshold_tile_buffer[ch_offset])
						msb_register[ch_offset] += (lsb_register[ch_offset]*lsb_scale);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					out_buf_0[out_channel_start + ch_offset][row][col] = msb_register[ch_offset];
				}
			}
		}
	}
	batchnorm(out_buf_0, layer3_1_bn2_weight_fix, layer3_1_bn2_bias_fix, H_fmap_out, out_channels);
	rprelu(out_buf_0, layer3_1_rprelu2_shift_x_bias_fix, layer3_1_rprelu2_shift_y_bias_fix, layer3_1_rprelu2_prelu_weight_fix, H_fmap_out, out_channels);
	shortcut(out_buf_1, out_buf_0, H_fmap_out, out_channels);
	batchnorm(out_buf_1, layer3_1_bn4_weight_fix, layer3_1_bn4_bias_fix, H_fmap_out, out_channels); // out_buf_2 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 3.2 PG1 /////////////////////
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer3_2_PGConv1:
	for (int ch_t = 0; ch_t < out_channels/OUT_CHANNEL_PARALLELISM; ch_t ++) {
		for (int row = 0; row < H_fmap_out; row ++){
			for (int col = 0; col < H_fmap_out; col ++){
#pragma HLS PIPELINE
				if (row == 0 && col == 0) {
					out_channel_start = ch_t*OUT_CHANNEL_PARALLELISM;
					load_weights_tile<4, 64>(
							layer3_2_conv1_weight_fix, layer3_2_conv1_threshold_fix,
							weight_tile_buffer, threshold_tile_buffer,
							out_channel_start, in_channels_after_pack
					);
					pg_conv3x3_tile(
							msb_fmap, lsb_fmap, weight_tile_buffer,
							out_buf_t0, out_buf_t1,
							in_channels_after_pack, H_fmap_out
					);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] = out_buf_t0[ch_offset][row+1][col+1];
					lsb_register[ch_offset] = out_buf_t1[ch_offset][row+1][col+1];
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] *= msb_scale;
					if (msb_register[ch_offset] > threshold_tile_buffer[ch_offset])
						msb_register[ch_offset] += (lsb_register[ch_offset]*lsb_scale);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					out_buf_0[out_channel_start + ch_offset][row][col] = msb_register[ch_offset];
				}
			}
		}
	}
	batchnorm(out_buf_0, layer3_2_bn1_weight_fix, layer3_2_bn1_bias_fix, H_fmap_out, out_channels);
	rprelu(out_buf_0, layer3_2_rprelu1_shift_x_bias_fix, layer3_2_rprelu1_shift_y_bias_fix, layer3_2_rprelu1_prelu_weight_fix, H_fmap_out, out_channels);
	shortcut(out_buf_1, out_buf_0, H_fmap_out, out_channels);
	batchnorm(out_buf_1, layer3_2_bn3_weight_fix, layer3_2_bn3_bias_fix, H_fmap_out, out_channels); // out_buf_2 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 3.2 PG2 /////////////////////
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer3_2_PGConv2:
	for (int ch_t = 0; ch_t < out_channels/OUT_CHANNEL_PARALLELISM; ch_t ++) {
		for (int row = 0; row < H_fmap_out; row ++){
			for (int col = 0; col < H_fmap_out; col ++){
#pragma HLS PIPELINE
				if (row == 0 && col == 0) {
					out_channel_start = ch_t*OUT_CHANNEL_PARALLELISM;
					load_weights_tile<4, 64>(
							layer3_2_conv2_weight_fix, layer3_2_conv2_threshold_fix,
							weight_tile_buffer, threshold_tile_buffer,
							out_channel_start, in_channels_after_pack
					);
					pg_conv3x3_tile(
							msb_fmap, lsb_fmap, weight_tile_buffer,
							out_buf_t0, out_buf_t1,
							in_channels_after_pack, H_fmap_out
					);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] = out_buf_t0[ch_offset][row+1][col+1];
					lsb_register[ch_offset] = out_buf_t1[ch_offset][row+1][col+1];
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					msb_register[ch_offset] *= msb_scale;
					if (msb_register[ch_offset] > threshold_tile_buffer[ch_offset])
						msb_register[ch_offset] += (lsb_register[ch_offset]*lsb_scale);
				}
				for (int ch_offset=0; ch_offset<OUT_CHANNEL_PARALLELISM; ch_offset++){
					out_buf_0[out_channel_start + ch_offset][row][col] = msb_register[ch_offset];
				}
			}
		}
	}
	batchnorm(out_buf_0, layer3_2_bn2_weight_fix, layer3_2_bn2_bias_fix, H_fmap_out, out_channels);
	rprelu(out_buf_0, layer3_2_rprelu2_shift_x_bias_fix, layer3_2_rprelu2_shift_y_bias_fix, layer3_2_rprelu2_prelu_weight_fix, H_fmap_out, out_channels);
	shortcut(out_buf_1, out_buf_0, H_fmap_out, out_channels);
	batchnorm(out_buf_1, layer3_2_bn4_weight_fix, layer3_2_bn4_bias_fix, H_fmap_out, out_channels); // out_buf_2 -> shortcuts

FIX_FM_acc pool_out_buf[64];
#pragma HLS ARRAY_PARTITION variable=pool_out_buf complete dim=1
    FIX_FM_acc linear_out_buf[10];
#pragma HLS ARRAY_PARTITION variable=linear_out_buf complete dim=1

    avgpool_8x8(out_buf_1, pool_out_buf);
    matmul(pool_out_buf, linear_weight_fix, linear_bias_fix, linear_out_buf);


    for(int i=0; i<10; i++){
        output[i] = linear_out_buf[i];
    }
	// for(int i=0; i<64; i++){
	// 	for(int j=0; j<32; j++){
	// 		for(int k=0; k<32; k++){
	// 			output[i*32*32+j*32+k] = out_buf_1[i][j][k];
	// 		}
	// 	}
	// }
}
