#include "bnn.h"
#include "layer.h"

using namespace std;

void FracNet_T(
		uint64 image[3][32][32],
		//		float output[64*32*32]
		float output[10]
)
{
#pragma HLS INTERFACE m_axi depth=3072 port=image offset=slave bundle=IMG
#pragma HLS INTERFACE m_axi depth=10 port=output offset=slave bundle=RESULT
#pragma HLS INTERFACE s_axilite port=return bundle=CTRL

#pragma HLS ALLOCATION instances=pg_conv3x3_tile limit=1 function
#pragma HLS ALLOCATION instances=bn_relu_shortcut limit=1 function
#pragma HLS ALLOCATION instances=quant_and_pack limit=1 function
#pragma HLS ALLOCATION instances=load_weights_tile limit=1 function

	uint64 msb_fmap[3][WIDTH][WIDTH];
	uint64 lsb_fmap[1][WIDTH][WIDTH];
#pragma HLS ARRAY_PARTITION variable=msb_fmap complete dim=1
#pragma HLS ARRAY_PARTITION variable=lsb_fmap complete dim=1

	FIX_FM_acc out_buf_0[CHANNEL_OUT/CHANNEL_OUT_T][CHANNEL_OUT_T][WIDTH][WIDTH];
	FIX_FM_acc out_buf_t0[CHANNEL_OUT_T][WIDTH][WIDTH];
	FIX_FM_acc out_buf_t1[CHANNEL_OUT_T][WIDTH][WIDTH];
#pragma HLS ARRAY_PARTITION variable=out_buf_0 complete dim=2
#pragma HLS ARRAY_PARTITION variable=out_buf_t0 complete dim=1
#pragma HLS ARRAY_PARTITION variable=out_buf_t1 complete dim=1

	uint64 weight_tile_buffer[OUT_CHANNEL_PARALLELISM][3][3];
	//#pragma HLS ARRAY_PARTITION variable=weight_tile_buffer complete dim=1
#pragma HLS ARRAY_PARTITION variable=weight_tile_buffer complete dim=2
#pragma HLS ARRAY_PARTITION variable=weight_tile_buffer complete dim=3

	FIX_WT threshold_tile_buffer[OUT_CHANNEL_PARALLELISM];
#pragma HLS ARRAY_PARTITION variable=threshold_tile_buffer complete dim=1

	FIX_WT bn_weight_0_tile_buffer[OUT_CHANNEL_PARALLELISM];
	FIX_WT bn_weight_1_tile_buffer[OUT_CHANNEL_PARALLELISM];
#pragma HLS ARRAY_PARTITION variable=bn_weight_0_tile_buffer complete dim=1
#pragma HLS ARRAY_PARTITION variable=bn_weight_1_tile_buffer complete dim=1

	FIX_WT bn_bias_0_tile_buffer[OUT_CHANNEL_PARALLELISM];
	FIX_WT bn_bias_1_tile_buffer[OUT_CHANNEL_PARALLELISM];
#pragma HLS ARRAY_PARTITION variable=bn_bias_0_tile_buffer complete dim=1
#pragma HLS ARRAY_PARTITION variable=bn_bias_1_tile_buffer complete dim=1

	FIX_WT relu_x_bias_tile_buffer[OUT_CHANNEL_PARALLELISM];
#pragma HLS ARRAY_PARTITION variable=relu_x_bias_tile_buffer complete dim=1

	FIX_WT relu_y_bias_tile_buffer[OUT_CHANNEL_PARALLELISM];
#pragma HLS ARRAY_PARTITION variable=relu_y_bias_tile_buffer complete dim=1

	FIX_WT relu_weight_tile_buffer[OUT_CHANNEL_PARALLELISM];
#pragma HLS ARRAY_PARTITION variable=relu_weight_tile_buffer complete dim=1

	int H_fmap_in, H_fmap_out, in_channels, in_channels_after_pack, out_channels, out_channel_start, stride;



	////////////////////////////////////////////////
	//////////// GET IMAGE /////////////////////////
	////////////////////////////////////////////////

	LOOP_GetImg:
	for (int c = 0; c < 3; c ++) {
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

	in_channels = 32;
	in_channels_after_pack = 3;
	out_channels = 16;
	H_fmap_out = 32;

	LOOP_Conv1:
	for (int c_out = 0; c_out < out_channels/OUT_CHANNEL_PARALLELISM; c_out ++){
		load_weights_tile(
				layer1_0_conv1_threshold_fix,
				bn1_weight_fix, bn1_bias_fix,
				layer1_0_bn1_bias_fix, layer1_0_bn3_bias_fix,
				layer1_0_rprelu1_shift_x_bias_fix, layer1_0_rprelu1_shift_y_bias_fix,
				layer1_0_rprelu1_prelu_weight_fix,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,
				c_out
		);
		for(int c_in = 0; c_in < in_channels_after_pack; c_in ++){
			load_conv_weights_tile(
					conv1_weight_fix[c_out][c_in], weight_tile_buffer
			);
			pg_conv3x3_tile(
					msb_fmap, lsb_fmap, weight_tile_buffer,
					out_buf_t0, out_buf_t1,
					c_in, in_channels, H_fmap_out
			);
		}
		bn1(
				out_buf_0, out_buf_t0,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				stride, c_out, H_fmap_out
		);
	}

	////////////////////////////////////////////////
	//////////// LAYER 1 ///////////////////////////
	////////////////////////////////////////////////

	H_fmap_in = 32;
	H_fmap_out = 32;
	in_channels = 16;
	in_channels_after_pack = 1;
	out_channels = 16;
	stride = 1;

	////////////////////////////////////////////////
	//////////// layer1_0 PG1 /////////////////////
	quant_and_pack(out_buf_0, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer1_0_PGConv1:
	for (int c_out = 0; c_out < out_channels/OUT_CHANNEL_PARALLELISM; c_out ++) {
		int c_in = 0;
		load_weights_tile(
				layer1_0_conv1_threshold_fix,
				layer1_0_bn1_weight_fix, layer1_0_bn3_weight_fix,
				layer1_0_bn1_bias_fix, layer1_0_bn3_bias_fix,
				layer1_0_rprelu1_shift_x_bias_fix, layer1_0_rprelu1_shift_y_bias_fix,
				layer1_0_rprelu1_prelu_weight_fix,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,
				c_out
		);
		load_conv_weights_tile(
				layer1_0_conv1_weight_fix[c_out], weight_tile_buffer
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_t0, out_buf_t1,
				c_in, in_channels, H_fmap_out
		);
		bn_relu_shortcut(
				out_buf_0, out_buf_t0, out_buf_t1,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,

				stride, c_out, H_fmap_out, out_channels
		);
	}

	////////////////////////////////////////////////
	//////////// layer1_0 PG2 /////////////////////
	quant_and_pack(out_buf_0, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer1_0_PGConv2:
	for (int c_out = 0; c_out < out_channels/OUT_CHANNEL_PARALLELISM; c_out ++) {
		int c_in = 0;
		load_weights_tile(
				layer1_0_conv2_threshold_fix,
				layer1_0_bn2_weight_fix, layer1_0_bn4_weight_fix,
				layer1_0_bn2_bias_fix, layer1_0_bn4_bias_fix,
				layer1_0_rprelu2_shift_x_bias_fix, layer1_0_rprelu2_shift_y_bias_fix,
				layer1_0_rprelu2_prelu_weight_fix,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,
				c_out
		);
		load_conv_weights_tile(
				layer1_0_conv2_weight_fix[c_out], weight_tile_buffer
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_t0, out_buf_t1,
				c_in, in_channels, H_fmap_out
		);
		bn_relu_shortcut(
				out_buf_0, out_buf_t0, out_buf_t1,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,

				stride, c_out, H_fmap_out, out_channels
		);
	}

	////////////////////////////////////////////////
	//////////// layer1_1 PG1 /////////////////////
	quant_and_pack(out_buf_0, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer1_1_PGConv1:
	for (int c_out = 0; c_out < out_channels/OUT_CHANNEL_PARALLELISM; c_out ++) {
		int c_in = 0;
		load_weights_tile(
				layer1_1_conv1_threshold_fix,
				layer1_1_bn1_weight_fix, layer1_1_bn3_weight_fix,
				layer1_1_bn1_bias_fix, layer1_1_bn3_bias_fix,
				layer1_1_rprelu1_shift_x_bias_fix, layer1_1_rprelu1_shift_y_bias_fix,
				layer1_1_rprelu1_prelu_weight_fix,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,
				c_out
		);
		load_conv_weights_tile(
				layer1_1_conv1_weight_fix[c_out], weight_tile_buffer
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_t0, out_buf_t1,
				c_in, in_channels, H_fmap_out
		);
		bn_relu_shortcut(
				out_buf_0, out_buf_t0, out_buf_t1,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,

				stride, c_out, H_fmap_out, out_channels
		);
	}

	////////////////////////////////////////////////
	//////////// layer1_1 PG2 /////////////////////
	quant_and_pack(out_buf_0, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer1_1_PGConv2:
	for (int c_out = 0; c_out < out_channels/OUT_CHANNEL_PARALLELISM; c_out ++) {
		int c_in = 0;
		load_weights_tile(
				layer1_1_conv2_threshold_fix,
				layer1_1_bn2_weight_fix, layer1_1_bn4_weight_fix,
				layer1_1_bn2_bias_fix, layer1_1_bn4_bias_fix,
				layer1_1_rprelu2_shift_x_bias_fix, layer1_1_rprelu2_shift_y_bias_fix,
				layer1_1_rprelu2_prelu_weight_fix,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,
				c_out
		);
		load_conv_weights_tile(
				layer1_1_conv2_weight_fix[c_out], weight_tile_buffer
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_t0, out_buf_t1,
				c_in, in_channels, H_fmap_out
		);
		bn_relu_shortcut(
				out_buf_0, out_buf_t0, out_buf_t1,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,

				stride, c_out, H_fmap_out, out_channels
		);
	}

	////////////////////////////////////////////////
	//////////// layer1_2 PG1 /////////////////////
	quant_and_pack(out_buf_0, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer1_2_PGConv1:
	for (int c_out = 0; c_out < out_channels/OUT_CHANNEL_PARALLELISM; c_out ++) {
		int c_in = 0;
		load_weights_tile(
				layer1_2_conv1_threshold_fix,
				layer1_2_bn1_weight_fix, layer1_2_bn3_weight_fix,
				layer1_2_bn1_bias_fix, layer1_2_bn3_bias_fix,
				layer1_2_rprelu1_shift_x_bias_fix, layer1_2_rprelu1_shift_y_bias_fix,
				layer1_2_rprelu1_prelu_weight_fix,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,
				c_out
		);
		load_conv_weights_tile(
				layer1_2_conv1_weight_fix[c_out], weight_tile_buffer
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_t0, out_buf_t1,
				c_in, in_channels, H_fmap_out
		);
		bn_relu_shortcut(
				out_buf_0, out_buf_t0, out_buf_t1,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,

				stride, c_out, H_fmap_out, out_channels
		);
	}

	////////////////////////////////////////////////
	//////////// layer1_2 PG2 /////////////////////
	quant_and_pack(out_buf_0, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer1_2_PGConv2:
	for (int c_out = 0; c_out < out_channels/OUT_CHANNEL_PARALLELISM; c_out ++) {
		int c_in = 0;
		load_weights_tile(
				layer1_2_conv2_threshold_fix,
				layer1_2_bn2_weight_fix, layer1_2_bn4_weight_fix,
				layer1_2_bn2_bias_fix, layer1_2_bn4_bias_fix,
				layer1_2_rprelu2_shift_x_bias_fix, layer1_2_rprelu2_shift_y_bias_fix,
				layer1_2_rprelu2_prelu_weight_fix,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,
				c_out
		);
		load_conv_weights_tile(
				layer1_2_conv2_weight_fix[c_out], weight_tile_buffer
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_t0, out_buf_t1,
				c_in, in_channels, H_fmap_out
		);
		bn_relu_shortcut(
				out_buf_0, out_buf_t0, out_buf_t1,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,

				stride, c_out, H_fmap_out, out_channels
		);
	}

	////////////////////////////////////////////////
	//////////// LAYER 2 SPECIAL ///////////////////
	////////////////////////////////////////////////

	H_fmap_in = 32;
	H_fmap_out = 16;
	in_channels = 16;
	in_channels_after_pack = 1;
	out_channels = 32;
	stride = 2;

	////////////////////////////////////////////////
	//////////// layer2_0 PG1 /////////////////////
	quant_and_pack(out_buf_0, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	avgpool_concat(out_buf_0, H_fmap_out, in_channels);
	LOOP_layer2_0_PGConv1:
	for (int c_out = 0; c_out < out_channels/OUT_CHANNEL_PARALLELISM; c_out ++) {
		int c_in = 0;
		load_weights_tile(
				layer2_0_conv1_threshold_fix,
				layer2_0_bn1_weight_fix, layer2_0_bn3_weight_fix,
				layer2_0_bn1_bias_fix, layer2_0_bn3_bias_fix,
				layer2_0_rprelu1_shift_x_bias_fix, layer2_0_rprelu1_shift_y_bias_fix,
				layer2_0_rprelu1_prelu_weight_fix,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,
				c_out
		);
		load_conv_weights_tile(
				layer2_0_conv1_weight_fix[c_out], weight_tile_buffer
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_t0, out_buf_t1,
				c_in, in_channels, H_fmap_in
		);
		bn_relu_shortcut(
				out_buf_0, out_buf_t0, out_buf_t1,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,

				stride, c_out, H_fmap_out, out_channels
		);
	}

	////////////////////////////////////////////////
	//////////// LAYER 2 ///////////////////////////
	////////////////////////////////////////////////

	H_fmap_in = 16;
	H_fmap_out = 16;
	in_channels = 32;
	in_channels_after_pack = 1;
	out_channels = 32;
	stride = 1;

	////////////////////////////////////////////////
	//////////// layer2_0 PG2 /////////////////////
	quant_and_pack(out_buf_0, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer2_0_PGConv2:
	for (int c_out = 0; c_out < out_channels/OUT_CHANNEL_PARALLELISM; c_out ++) {
		int c_in = 0;
		load_weights_tile(
				layer2_0_conv2_threshold_fix,
				layer2_0_bn2_weight_fix, layer2_0_bn4_weight_fix,
				layer2_0_bn2_bias_fix, layer2_0_bn4_bias_fix,
				layer2_0_rprelu2_shift_x_bias_fix, layer2_0_rprelu2_shift_y_bias_fix,
				layer2_0_rprelu2_prelu_weight_fix,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,
				c_out
		);
		load_conv_weights_tile(
				layer2_0_conv2_weight_fix[c_out], weight_tile_buffer
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_t0, out_buf_t1,
				c_in, in_channels, H_fmap_out
		);
		bn_relu_shortcut(
				out_buf_0, out_buf_t0, out_buf_t1,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,

				stride, c_out, H_fmap_out, out_channels
		);
	}

	////////////////////////////////////////////////
	//////////// layer2_1 PG1 /////////////////////
	quant_and_pack(out_buf_0, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer2_1_PGConv1:
	for (int c_out = 0; c_out < out_channels/OUT_CHANNEL_PARALLELISM; c_out ++) {
		int c_in = 0;
		load_weights_tile(
				layer2_1_conv1_threshold_fix,
				layer2_1_bn1_weight_fix, layer2_1_bn3_weight_fix,
				layer2_1_bn1_bias_fix, layer2_1_bn3_bias_fix,
				layer2_1_rprelu1_shift_x_bias_fix, layer2_1_rprelu1_shift_y_bias_fix,
				layer2_1_rprelu1_prelu_weight_fix,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,
				c_out
		);
		load_conv_weights_tile(
				layer2_1_conv1_weight_fix[c_out], weight_tile_buffer
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_t0, out_buf_t1,
				c_in, in_channels, H_fmap_out
		);
		bn_relu_shortcut(
				out_buf_0, out_buf_t0, out_buf_t1,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,

				stride, c_out, H_fmap_out, out_channels
		);
	}

	////////////////////////////////////////////////
	//////////// layer2_1 PG2 /////////////////////
	quant_and_pack(out_buf_0, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer2_1_PGConv2:
	for (int c_out = 0; c_out < out_channels/OUT_CHANNEL_PARALLELISM; c_out ++) {
		int c_in = 0;
		load_weights_tile(
				layer2_1_conv2_threshold_fix,
				layer2_1_bn2_weight_fix, layer2_1_bn4_weight_fix,
				layer2_1_bn2_bias_fix, layer2_1_bn4_bias_fix,
				layer2_1_rprelu2_shift_x_bias_fix, layer2_1_rprelu2_shift_y_bias_fix,
				layer2_1_rprelu2_prelu_weight_fix,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,
				c_out
		);
		load_conv_weights_tile(
				layer2_1_conv2_weight_fix[c_out], weight_tile_buffer
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_t0, out_buf_t1,
				c_in, in_channels, H_fmap_out
		);
		bn_relu_shortcut(
				out_buf_0, out_buf_t0, out_buf_t1,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,

				stride, c_out, H_fmap_out, out_channels
		);
	}

	////////////////////////////////////////////////
	//////////// layer2_2 PG1 /////////////////////
	quant_and_pack(out_buf_0, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer2_2_PGConv1:
	for (int c_out = 0; c_out < out_channels/OUT_CHANNEL_PARALLELISM; c_out ++) {
		int c_in = 0;
		load_weights_tile(
				layer2_2_conv1_threshold_fix,
				layer2_2_bn1_weight_fix, layer2_2_bn3_weight_fix,
				layer2_2_bn1_bias_fix, layer2_2_bn3_bias_fix,
				layer2_2_rprelu1_shift_x_bias_fix, layer2_2_rprelu1_shift_y_bias_fix,
				layer2_2_rprelu1_prelu_weight_fix,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,
				c_out
		);
		load_conv_weights_tile(
				layer2_2_conv1_weight_fix[c_out], weight_tile_buffer
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_t0, out_buf_t1,
				c_in, in_channels, H_fmap_out
		);
		bn_relu_shortcut(
				out_buf_0, out_buf_t0, out_buf_t1,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,

				stride, c_out, H_fmap_out, out_channels
		);
	}

	////////////////////////////////////////////////
	//////////// layer2_2 PG2 /////////////////////
	quant_and_pack(out_buf_0, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer2_2_PGConv2:
	for (int c_out = 0; c_out < out_channels/OUT_CHANNEL_PARALLELISM; c_out ++) {
		int c_in = 0;
		load_weights_tile(
				layer2_2_conv2_threshold_fix,
				layer2_2_bn2_weight_fix, layer2_2_bn4_weight_fix,
				layer2_2_bn2_bias_fix, layer2_2_bn4_bias_fix,
				layer2_2_rprelu2_shift_x_bias_fix, layer2_2_rprelu2_shift_y_bias_fix,
				layer2_2_rprelu2_prelu_weight_fix,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,
				c_out
		);
		load_conv_weights_tile(
				layer2_2_conv2_weight_fix[c_out], weight_tile_buffer
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_t0, out_buf_t1,
				c_in, in_channels, H_fmap_out
		);
		bn_relu_shortcut(
				out_buf_0, out_buf_t0, out_buf_t1,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,

				stride, c_out, H_fmap_out, out_channels
		);
	}

	////////////////////////////////////////////////
	//////////// LAYER 3 SPECIAL ///////////////////
	////////////////////////////////////////////////

	H_fmap_in = 16;
	H_fmap_out = 8;
	in_channels = 32;
	in_channels_after_pack = 1;
	out_channels = 64;
	stride = 2;

	////////////////////////////////////////////////
	//////////// layer3_0 PG1 /////////////////////
	quant_and_pack(out_buf_0, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	avgpool_concat(out_buf_0, H_fmap_out, in_channels);
	LOOP_layer3_0_PGConv1:
	for (int c_out = 0; c_out < out_channels/OUT_CHANNEL_PARALLELISM; c_out ++) {
		int c_in = 0;
		load_weights_tile(
				layer3_0_conv1_threshold_fix,
				layer3_0_bn1_weight_fix, layer3_0_bn3_weight_fix,
				layer3_0_bn1_bias_fix, layer3_0_bn3_bias_fix,
				layer3_0_rprelu1_shift_x_bias_fix, layer3_0_rprelu1_shift_y_bias_fix,
				layer3_0_rprelu1_prelu_weight_fix,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,
				c_out
		);
		load_conv_weights_tile(
				layer3_0_conv1_weight_fix[c_out], weight_tile_buffer
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_t0, out_buf_t1,
				c_in, in_channels, H_fmap_in
		);
		bn_relu_shortcut(
				out_buf_0, out_buf_t0, out_buf_t1,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,

				stride, c_out, H_fmap_out, out_channels
		);
	}

	////////////////////////////////////////////////
	//////////// LAYER 3 ///////////////////////////
	////////////////////////////////////////////////

	H_fmap_in = 8;
	H_fmap_out = 8;
	in_channels = 64;
	in_channels_after_pack = 1;
	out_channels = 64;
	stride = 1;

	////////////////////////////////////////////////
	//////////// layer3_0 PG2 /////////////////////
	quant_and_pack(out_buf_0, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer3_0_PGConv2:
	for (int c_out = 0; c_out < out_channels/OUT_CHANNEL_PARALLELISM; c_out ++) {
		int c_in = 0;
		load_weights_tile(
				layer3_0_conv2_threshold_fix,
				layer3_0_bn2_weight_fix, layer3_0_bn4_weight_fix,
				layer3_0_bn2_bias_fix, layer3_0_bn4_bias_fix,
				layer3_0_rprelu2_shift_x_bias_fix, layer3_0_rprelu2_shift_y_bias_fix,
				layer3_0_rprelu2_prelu_weight_fix,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,
				c_out
		);
		load_conv_weights_tile(
				layer3_0_conv2_weight_fix[c_out], weight_tile_buffer
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_t0, out_buf_t1,
				c_in, in_channels, H_fmap_out
		);
		bn_relu_shortcut(
				out_buf_0, out_buf_t0, out_buf_t1,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,

				stride, c_out, H_fmap_out, out_channels
		);
	}

	////////////////////////////////////////////////
	//////////// layer3_1 PG1 /////////////////////
	quant_and_pack(out_buf_0, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer3_1_PGConv1:
	for (int c_out = 0; c_out < out_channels/OUT_CHANNEL_PARALLELISM; c_out ++) {
		int c_in = 0;
		load_weights_tile(
				layer3_1_conv1_threshold_fix,
				layer3_1_bn1_weight_fix, layer3_1_bn3_weight_fix,
				layer3_1_bn1_bias_fix, layer3_1_bn3_bias_fix,
				layer3_1_rprelu1_shift_x_bias_fix, layer3_1_rprelu1_shift_y_bias_fix,
				layer3_1_rprelu1_prelu_weight_fix,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,
				c_out
		);
		load_conv_weights_tile(
				layer3_1_conv1_weight_fix[c_out], weight_tile_buffer
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_t0, out_buf_t1,
				c_in, in_channels, H_fmap_out
		);
		bn_relu_shortcut(
				out_buf_0, out_buf_t0, out_buf_t1,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,

				stride, c_out, H_fmap_out, out_channels
		);
	}

	////////////////////////////////////////////////
	//////////// layer3_1 PG2 /////////////////////
	quant_and_pack(out_buf_0, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer3_1_PGConv2:
	for (int c_out = 0; c_out < out_channels/OUT_CHANNEL_PARALLELISM; c_out ++) {
		int c_in = 0;
		load_weights_tile(
				layer3_1_conv2_threshold_fix,
				layer3_1_bn2_weight_fix, layer3_1_bn4_weight_fix,
				layer3_1_bn2_bias_fix, layer3_1_bn4_bias_fix,
				layer3_1_rprelu2_shift_x_bias_fix, layer3_1_rprelu2_shift_y_bias_fix,
				layer3_1_rprelu2_prelu_weight_fix,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,
				c_out
		);
		load_conv_weights_tile(
				layer3_1_conv2_weight_fix[c_out], weight_tile_buffer
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_t0, out_buf_t1,
				c_in, in_channels, H_fmap_out
		);
		bn_relu_shortcut(
				out_buf_0, out_buf_t0, out_buf_t1,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,

				stride, c_out, H_fmap_out, out_channels
		);
	}

	////////////////////////////////////////////////
	//////////// layer3_2 PG1 /////////////////////
	quant_and_pack(out_buf_0, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer3_2_PGConv1:
	for (int c_out = 0; c_out < out_channels/OUT_CHANNEL_PARALLELISM; c_out ++) {
		int c_in = 0;
		load_weights_tile(
				layer3_2_conv1_threshold_fix,
				layer3_2_bn1_weight_fix, layer3_2_bn3_weight_fix,
				layer3_2_bn1_bias_fix, layer3_2_bn3_bias_fix,
				layer3_2_rprelu1_shift_x_bias_fix, layer3_2_rprelu1_shift_y_bias_fix,
				layer3_2_rprelu1_prelu_weight_fix,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,
				c_out
		);
		load_conv_weights_tile(
				layer3_2_conv1_weight_fix[c_out], weight_tile_buffer
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_t0, out_buf_t1,
				c_in, in_channels, H_fmap_out
		);
		bn_relu_shortcut(
				out_buf_0, out_buf_t0, out_buf_t1,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,

				stride, c_out, H_fmap_out, out_channels
		);
	}

	////////////////////////////////////////////////
	//////////// layer3_2 PG2 /////////////////////
	quant_and_pack(out_buf_0, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_layer3_2_PGConv2:
	for (int c_out = 0; c_out < out_channels/OUT_CHANNEL_PARALLELISM; c_out ++) {
		int c_in = 0;
		load_weights_tile(
				layer3_2_conv2_threshold_fix,
				layer3_2_bn2_weight_fix, layer3_2_bn4_weight_fix,
				layer3_2_bn2_bias_fix, layer3_2_bn4_bias_fix,
				layer3_2_rprelu2_shift_x_bias_fix, layer3_2_rprelu2_shift_y_bias_fix,
				layer3_2_rprelu2_prelu_weight_fix,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,
				c_out
		);
		load_conv_weights_tile(
				layer3_2_conv2_weight_fix[c_out], weight_tile_buffer
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_t0, out_buf_t1,
				c_in, in_channels, H_fmap_out
		);
		bn_relu_shortcut(
				out_buf_0, out_buf_t0, out_buf_t1,

				threshold_tile_buffer,
				bn_weight_0_tile_buffer, bn_bias_0_tile_buffer,
				bn_weight_1_tile_buffer, bn_bias_1_tile_buffer,
				relu_x_bias_tile_buffer, relu_y_bias_tile_buffer,
				relu_weight_tile_buffer,

				stride, c_out, H_fmap_out, out_channels
		);
	}


	FIX_FM_acc pool_out_buf[64];
#pragma HLS ARRAY_PARTITION variable=pool_out_buf complete dim=1
	FIX_FM_acc linear_out_buf[10];
#pragma HLS ARRAY_PARTITION variable=linear_out_buf complete dim=1

	avgpool_8x8(out_buf_0, pool_out_buf);
	matmul(pool_out_buf, linear_weight_fix, linear_bias_fix, linear_out_buf);

	for(int i=0; i<10; i++){
		output[i] = linear_out_buf[i];
	}

	//	for (int i = 0; i < 8; i ++){
	//		for (int j = 0; j < 8; j ++){
	//			for (int k = 0; k < 32; k ++){
	//				for (int l = 0; l < 32; l ++){
	//					output[i*8*32*32 + j*32*32 + k*32 + l] = out_buf_0[i][j][k][l];
	//				}
	//			}
	//		}
	//	}

}