//#include "typedefs.h"
#include "bnn.h"
#include "layer.h"
//#include "dimension_def.h"

//extern "C" {

using namespace std;

inline void get_image(
		uint16 image[6][32][32],
		uint16 output[6][33][33])
{
	LOOP_GetImg:
	for (int c = 0; c < 6; c ++) {
		for (int row = 0; row < 32; row ++) {
			for (int col = 0; col < 32; col ++) {
#pragma HLS PIPELINE
				output[c][row][col] = image[c][row][col];
			}
		}
	}
}

/*
------------------------------------------------------
Top function
------------------------------------------------------
 */

void FracNet(
		uint16 image[6][32][32],
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

	uint16 msb_fmap[6][33][33];
	uint16 lsb_fmap[6][33][33];

	FIX_FM_acc out_buf_0[CHANNEL_OUT][WIDTH][WIDTH];
	FIX_FM_acc out_buf_1[CHANNEL_OUT][WIDTH][WIDTH];
	FIX_FM_acc out_buf_2[CHANNEL_OUT][WIDTH][WIDTH];
#pragma HLS ARRAY_PARTITION variable=out_buf_1 complete dim=1
#pragma HLS ARRAY_PARTITION variable=out_buf_2 complete dim=1
#pragma HLS ARRAY_PARTITION variable=out_buf_0 complete dim=1

	uint16 weight_tile_buffer[OUT_CHANNEL_PARALLELISM][CHANNEL_IN][3][3];
#pragma HLS ARRAY_PARTITION variable=weight_tile_buffer complete dim=3
#pragma HLS ARRAY_PARTITION variable=weight_tile_buffer complete dim=4
#pragma HLS ARRAY_PARTITION variable=weight_tile_buffer complete dim=1


	int H_fmap_in, H_fmap_out, in_channels, in_channels_after_pack, out_channels;

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

	LOOP_Conv1:
	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
		// compute one tile
		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
		load_weights_tile<6, 16>(conv1_weight_fix, weight_tile_buffer, out_channel_start, in_channels_after_pack);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_1, out_buf_2,
				out_channel_start, in_channels_after_pack, H_fmap_out
		);
	}
	batchnorm(out_buf_1, bn1_weight_fix, bn1_bias_fix, 32, 16); // out_buf_1 -> shortcuts

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
	// layer1_pgconv(out_buf_1, weight_tile_buffer, msb_fmap, lsb_fmap, layer1_0_conv1_weight_fix, layer1_0_conv1_threshold_fix, out_buf_0, out_buf_2);
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_Layer1_0_PGConv1:
	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
		// compute one tile
		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
		load_weights_tile<1, 16>(
				layer1_0_conv1_weight_fix, weight_tile_buffer,
				out_channel_start, in_channels_after_pack
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_0, out_buf_2,
				out_channel_start, in_channels_after_pack, H_fmap_out
		);
		merge_tile(
				out_buf_0, out_buf_2, layer1_0_conv1_threshold_fix,
				out_channel_start, H_fmap_out+1
		);
	}
	batchnorm(out_buf_0, layer1_0_bn1_weight_fix, layer1_0_bn1_bias_fix, 32, 16);
	rprelu(out_buf_0, layer1_0_rprelu1_shift_x_bias_fix, layer1_0_rprelu1_shift_y_bias_fix, layer1_0_rprelu1_prelu_weight_fix, 32, 16);
	shortcut(out_buf_0, out_buf_1, out_buf_2, 32, 16);
	batchnorm(out_buf_2, layer1_0_bn3_weight_fix, layer1_0_bn3_bias_fix, 32, 16); // out_buf_2 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 1.0 PG2 /////////////////////
	// layer1_pgconv(out_buf_2, weight_tile_buffer, msb_fmap, lsb_fmap, layer1_0_conv2_weight_fix, layer1_0_conv2_threshold_fix, out_buf_0, out_buf_1);
	quant_and_pack(out_buf_2, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_Layer1_0_PGConv2:
	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
		// compute one tile
		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
		load_weights_tile<1, 16>(
				layer1_0_conv2_weight_fix, weight_tile_buffer,
				out_channel_start, in_channels_after_pack
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_0, out_buf_1,
				out_channel_start, in_channels_after_pack, H_fmap_out
		);
		merge_tile(
				out_buf_0, out_buf_1, layer1_0_conv2_threshold_fix,
				out_channel_start, H_fmap_out+1
		);
	}
	batchnorm(out_buf_0, layer1_0_bn2_weight_fix, layer1_0_bn2_bias_fix, 32, 16);
	rprelu(out_buf_0, layer1_0_rprelu2_shift_x_bias_fix, layer1_0_rprelu2_shift_y_bias_fix, layer1_0_rprelu2_prelu_weight_fix, 32, 16);
	shortcut(out_buf_0, out_buf_2, out_buf_1, 32, 16);
	batchnorm(out_buf_1, layer1_0_bn4_weight_fix, layer1_0_bn4_bias_fix, 32, 16); // out_buf_1 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 1.1 PG1 /////////////////////
	// layer1_pgconv(out_buf_1, weight_tile_buffer, msb_fmap, lsb_fmap, layer1_1_conv1_weight_fix, layer1_1_conv1_threshold_fix, out_buf_0, out_buf_2);
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_Layer1_1_PGConv1:
	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
		// compute one tile
		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
		load_weights_tile<1, 16>(
				layer1_1_conv1_weight_fix, weight_tile_buffer,
				out_channel_start, in_channels_after_pack
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_0, out_buf_2,
				out_channel_start, in_channels_after_pack, H_fmap_out
		);
		merge_tile(
				out_buf_0, out_buf_2, layer1_1_conv1_threshold_fix,
				out_channel_start, H_fmap_out+1
		);
	}
	batchnorm(out_buf_0, layer1_1_bn1_weight_fix, layer1_1_bn1_bias_fix, 32, 16);
	rprelu(out_buf_0, layer1_1_rprelu1_shift_x_bias_fix, layer1_1_rprelu1_shift_y_bias_fix, layer1_1_rprelu1_prelu_weight_fix, 32, 16);
	shortcut(out_buf_0, out_buf_1, out_buf_2, 32, 16);
	batchnorm(out_buf_2, layer1_1_bn3_weight_fix, layer1_1_bn3_bias_fix, 32, 16); // out_buf_2 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 1.1 PG2 /////////////////////
	// layer1_pgconv(out_buf_2, weight_tile_buffer, msb_fmap, lsb_fmap, layer1_1_conv2_weight_fix, layer1_1_conv2_threshold_fix, out_buf_0, out_buf_1);
	quant_and_pack(out_buf_2, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_Layer1_1_PGConv2:
	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
		// compute one tile
		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
		load_weights_tile<1, 16>(
				layer1_1_conv2_weight_fix, weight_tile_buffer,
				out_channel_start, in_channels_after_pack
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_0, out_buf_1,
				out_channel_start, in_channels_after_pack, H_fmap_out
		);
		merge_tile(
				out_buf_0, out_buf_1, layer1_1_conv2_threshold_fix,
				out_channel_start, H_fmap_out+1
		);
	}
	batchnorm(out_buf_0, layer1_1_bn2_weight_fix, layer1_1_bn2_bias_fix, 32, 16);
	rprelu(out_buf_0, layer1_1_rprelu2_shift_x_bias_fix, layer1_1_rprelu2_shift_y_bias_fix, layer1_1_rprelu2_prelu_weight_fix, 32, 16);
	shortcut(out_buf_0, out_buf_2, out_buf_1, 32, 16);
	batchnorm(out_buf_1, layer1_1_bn4_weight_fix, layer1_1_bn4_bias_fix, 32, 16); // out_buf_1 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 1.2 PG1 /////////////////////
	// layer1_pgconv(out_buf_1, weight_tile_buffer, msb_fmap, lsb_fmap, layer1_2_conv1_weight_fix, layer1_2_conv1_threshold_fix, out_buf_0, out_buf_2);
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_Layer1_2_PGConv1:
	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
		// compute one tile
		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
		load_weights_tile<1, 16>(
				layer1_2_conv1_weight_fix, weight_tile_buffer,
				out_channel_start, in_channels_after_pack
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_0, out_buf_2,
				out_channel_start, in_channels_after_pack, H_fmap_out
		);
		merge_tile(
				out_buf_0, out_buf_2, layer1_2_conv1_threshold_fix,
				out_channel_start, H_fmap_out+1
		);
	}
	batchnorm(out_buf_0, layer1_2_bn1_weight_fix, layer1_2_bn1_bias_fix, 32, 16);
	rprelu(out_buf_0, layer1_2_rprelu1_shift_x_bias_fix, layer1_2_rprelu1_shift_y_bias_fix, layer1_2_rprelu1_prelu_weight_fix, 32, 16);
	shortcut(out_buf_0, out_buf_1, out_buf_2, 32, 16);
	batchnorm(out_buf_2, layer1_2_bn3_weight_fix, layer1_2_bn3_bias_fix, 32, 16); // out_buf_2 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 1.2 PG2 /////////////////////
	// layer1_pgconv(out_buf_2, weight_tile_buffer, msb_fmap, lsb_fmap, layer1_2_conv2_weight_fix, layer1_2_conv2_threshold_fix, out_buf_0, out_buf_1);
	quant_and_pack(out_buf_2, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_Layer1_2_PGConv2:
	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
		// compute one tile
		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
		load_weights_tile<1, 16>(
				layer1_2_conv2_weight_fix, weight_tile_buffer,
				out_channel_start, in_channels_after_pack
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_0, out_buf_1,
				out_channel_start, in_channels_after_pack, H_fmap_out
		);
		merge_tile(
				out_buf_0, out_buf_1, layer1_2_conv2_threshold_fix,
				out_channel_start, H_fmap_out+1
		);
	}
	batchnorm(out_buf_0, layer1_2_bn2_weight_fix, layer1_2_bn2_bias_fix, 32, 16);
	rprelu(out_buf_0, layer1_2_rprelu2_shift_x_bias_fix, layer1_2_rprelu2_shift_y_bias_fix, layer1_2_rprelu2_prelu_weight_fix, 32, 16);
	shortcut(out_buf_0, out_buf_2, out_buf_1, 32, 16);
	batchnorm(out_buf_1, layer1_2_bn4_weight_fix, layer1_2_bn4_bias_fix, 32, 16); // out_buf_1 -> shortcuts


	////////////////////////////////////////////////
	//////////// LAYER 2 Special ///////////////////
	////////////////////////////////////////////////

	H_fmap_in = 32;
	H_fmap_out = 32;
	in_channels = 16;
	in_channels_after_pack = in_channels / 16; // assume packing 16 bits
	out_channels = 32;

	////////////////////////////////////////////////
	//////////// Layer 2.0 PG1 /////////////////////
	// layer2_pgconv_sp(out_buf_1, weight_tile_buffer, msb_fmap, lsb_fmap, layer2_0_conv1_weight_fix, layer2_0_conv1_threshold_fix, out_buf_0, out_buf_2);
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_Layer2_0_PGConv1:
	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
		// compute one tile
		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
		load_weights_tile<1, 32>(
				layer2_0_conv1_weight_fix, weight_tile_buffer,
				out_channel_start, in_channels_after_pack
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_0, out_buf_2,
				out_channel_start, in_channels_after_pack, H_fmap_out
		);
		merge_tile(
				out_buf_0, out_buf_2, layer2_0_conv1_threshold_fix,
				out_channel_start, H_fmap_out+1
		);
	}
	batchnorm_s2(out_buf_0, layer2_0_bn1_weight_fix, layer2_0_bn1_bias_fix, 16, 32);
	rprelu(out_buf_0, layer2_0_rprelu1_shift_x_bias_fix, layer2_0_rprelu1_shift_y_bias_fix, layer2_0_rprelu1_prelu_weight_fix, 16, 32);
	avgpool_concat(out_buf_1, 16, 16);
	shortcut(out_buf_0, out_buf_1, out_buf_2, 16, 32);
	batchnorm(out_buf_2, layer2_0_bn3_weight_fix, layer2_0_bn3_bias_fix, 16, 32); // out_buf_2 -> shortcuts

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
	// layer2_pgconv(out_buf_2, weight_tile_buffer, msb_fmap, lsb_fmap, layer2_0_conv2_weight_fix, layer2_0_conv2_threshold_fix, out_buf_0, out_buf_1);
	quant_and_pack(out_buf_2, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_Layer2_0_PGConv2:
	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
		// compute one tile
		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
		load_weights_tile<2, 32>(
				layer2_0_conv2_weight_fix, weight_tile_buffer,
				out_channel_start, in_channels_after_pack
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_0, out_buf_1,
				out_channel_start, in_channels_after_pack, H_fmap_out
		);
		merge_tile(
				out_buf_0, out_buf_1, layer2_0_conv2_threshold_fix,
				out_channel_start, H_fmap_out+1
		);
	}
	batchnorm(out_buf_0, layer2_0_bn2_weight_fix, layer2_0_bn2_bias_fix, 16, 32);
	rprelu(out_buf_0, layer2_0_rprelu2_shift_x_bias_fix, layer2_0_rprelu2_shift_y_bias_fix, layer2_0_rprelu2_prelu_weight_fix, 16, 32);
	shortcut(out_buf_0, out_buf_2, out_buf_1, 16, 32);
	batchnorm(out_buf_1, layer2_0_bn4_weight_fix, layer2_0_bn4_bias_fix, 16, 32); // out_buf_1 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 2.1 PG1 /////////////////////
	// layer2_pgconv(out_buf_1, weight_tile_buffer, msb_fmap, lsb_fmap, layer2_1_conv1_weight_fix, layer2_1_conv1_threshold_fix, out_buf_0, out_buf_2);
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_Layer2_1_PGConv1:
	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
		// compute one tile
		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
		load_weights_tile<2, 32>(
				layer2_1_conv1_weight_fix, weight_tile_buffer,
				out_channel_start, in_channels_after_pack
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_0, out_buf_2,
				out_channel_start, in_channels_after_pack, H_fmap_out
		);
		merge_tile(
				out_buf_0, out_buf_2, layer2_1_conv1_threshold_fix,
				out_channel_start, H_fmap_out+1
		);
	}
	batchnorm(out_buf_0, layer2_1_bn1_weight_fix, layer2_1_bn1_bias_fix, 16, 32);
	rprelu(out_buf_0, layer2_1_rprelu1_shift_x_bias_fix, layer2_1_rprelu1_shift_y_bias_fix, layer2_1_rprelu1_prelu_weight_fix, 16, 32);
	shortcut(out_buf_0, out_buf_1, out_buf_2, 16, 32);
	batchnorm(out_buf_2, layer2_1_bn3_weight_fix, layer2_1_bn3_bias_fix, 16, 32); // out_buf_2 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 2.1 PG2 /////////////////////
	// layer2_pgconv(out_buf_2, weight_tile_buffer, msb_fmap, lsb_fmap, layer2_1_conv2_weight_fix, layer2_1_conv2_threshold_fix, out_buf_0, out_buf_1);
	quant_and_pack(out_buf_2, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_Layer2_1_PGConv2:
	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
		// compute one tile
		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
		load_weights_tile<2, 32>(
				layer2_1_conv2_weight_fix, weight_tile_buffer,
				out_channel_start, in_channels_after_pack
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_0, out_buf_1,
				out_channel_start, in_channels_after_pack, H_fmap_out
		);
		merge_tile(
				out_buf_0, out_buf_1, layer2_1_conv2_threshold_fix,
				out_channel_start, H_fmap_out+1
		);
	}
	batchnorm(out_buf_0, layer2_1_bn2_weight_fix, layer2_1_bn2_bias_fix, 16, 32);
	rprelu(out_buf_0, layer2_1_rprelu2_shift_x_bias_fix, layer2_1_rprelu2_shift_y_bias_fix, layer2_1_rprelu2_prelu_weight_fix, 16, 32);
	shortcut(out_buf_0, out_buf_2, out_buf_1, 16, 32);
	batchnorm(out_buf_1, layer2_1_bn4_weight_fix, layer2_1_bn4_bias_fix, 16, 32); // out_buf_1 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 2.2 PG1 /////////////////////
	// layer2_pgconv(out_buf_1, weight_tile_buffer, msb_fmap, lsb_fmap, layer2_2_conv1_weight_fix, layer2_2_conv1_threshold_fix, out_buf_0, out_buf_2);
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_Layer2_2_PGConv1:
	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
		// compute one tile
		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
		load_weights_tile<2, 32>(
				layer2_2_conv1_weight_fix, weight_tile_buffer,
				out_channel_start, in_channels_after_pack
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_0, out_buf_2,
				out_channel_start, in_channels_after_pack, H_fmap_out
		);
		merge_tile(
				out_buf_0, out_buf_2, layer2_2_conv1_threshold_fix,
				out_channel_start, H_fmap_out+1
		);
	}
	batchnorm(out_buf_0, layer2_2_bn1_weight_fix, layer2_2_bn1_bias_fix, 16, 32);
	rprelu(out_buf_0, layer2_2_rprelu1_shift_x_bias_fix, layer2_2_rprelu1_shift_y_bias_fix, layer2_2_rprelu1_prelu_weight_fix, 16, 32);
	shortcut(out_buf_0, out_buf_1, out_buf_2, 16, 32);
	batchnorm(out_buf_2, layer2_2_bn3_weight_fix, layer2_2_bn3_bias_fix, 16, 32); // out_buf_2 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 2.2 PG2 /////////////////////
	// layer2_pgconv(out_buf_2, weight_tile_buffer, msb_fmap, lsb_fmap, layer2_2_conv2_weight_fix, layer2_2_conv2_threshold_fix, out_buf_0, out_buf_1);
	quant_and_pack(out_buf_2, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_Layer2_2_PGConv2:
	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
		// compute one tile
		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
		load_weights_tile<2, 32>(
				layer2_2_conv2_weight_fix, weight_tile_buffer,
				out_channel_start, in_channels_after_pack
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_0, out_buf_1,
				out_channel_start, in_channels_after_pack, H_fmap_out
		);
		merge_tile(
				out_buf_0, out_buf_1, layer2_2_conv2_threshold_fix,
				out_channel_start, H_fmap_out+1
		);
	}
	batchnorm(out_buf_0, layer2_2_bn2_weight_fix, layer2_2_bn2_bias_fix, 16, 32);
	rprelu(out_buf_0, layer2_2_rprelu2_shift_x_bias_fix, layer2_2_rprelu2_shift_y_bias_fix, layer2_2_rprelu2_prelu_weight_fix, 16, 32);
	shortcut(out_buf_0, out_buf_2, out_buf_1, 16, 32);
	batchnorm(out_buf_1, layer2_2_bn4_weight_fix, layer2_2_bn4_bias_fix, 16, 32); // out_buf_1 -> shortcuts


	////////////////////////////////////////////////
	//////////// LAYER 3 Special ///////////////////
	////////////////////////////////////////////////

	H_fmap_in = 16;
	H_fmap_out = 16;
	in_channels = 32;
	in_channels_after_pack = in_channels / 16; // assume packing 16 bits
	out_channels = 64;

	////////////////////////////////////////////////
	//////////// Layer 3.0 PG1 /////////////////////
	// layer3_pgconv_sp(out_buf_1, weight_tile_buffer, msb_fmap, lsb_fmap, layer3_0_conv1_weight_fix, layer3_0_conv1_threshold_fix, out_buf_0, out_buf_2);
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_Layer3_0_PGConv1:
	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
		// compute one tile
		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
		load_weights_tile<2, 64>(
				layer3_0_conv1_weight_fix, weight_tile_buffer,
				out_channel_start, in_channels_after_pack
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_0, out_buf_2,
				out_channel_start, in_channels_after_pack, H_fmap_out
		);
		merge_tile(
				out_buf_0, out_buf_2, layer3_0_conv1_threshold_fix,
				out_channel_start, H_fmap_out+1
		);
	}
	batchnorm_s2(out_buf_0, layer3_0_bn1_weight_fix, layer3_0_bn1_bias_fix, 8, 64);
	rprelu(out_buf_0, layer3_0_rprelu1_shift_x_bias_fix, layer3_0_rprelu1_shift_y_bias_fix, layer3_0_rprelu1_prelu_weight_fix, 8, 64);
	avgpool_concat(out_buf_1, 8, 32);
	shortcut(out_buf_0, out_buf_1, out_buf_2, 8, 64);
	batchnorm(out_buf_2, layer3_0_bn3_weight_fix, layer3_0_bn3_bias_fix, 8, 64); // out_buf_2 -> shortcuts

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
	// layer3_pgconv(out_buf_2, weight_tile_buffer, msb_fmap, lsb_fmap, layer3_0_conv2_weight_fix, layer3_0_conv2_threshold_fix, out_buf_0, out_buf_1);
	quant_and_pack(out_buf_2, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_Layer3_0_PGConv2:
	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
		// compute one tile
		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
		load_weights_tile<4, 64>(
				layer3_0_conv2_weight_fix, weight_tile_buffer,
				out_channel_start, in_channels_after_pack
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_0, out_buf_1,
				out_channel_start, in_channels_after_pack, H_fmap_out
		);
		merge_tile(
				out_buf_0, out_buf_1, layer3_0_conv2_threshold_fix,
				out_channel_start, H_fmap_out+1
		);
	}
	batchnorm(out_buf_0, layer3_0_bn2_weight_fix, layer3_0_bn2_bias_fix, 8, 64);
	rprelu(out_buf_0, layer3_0_rprelu2_shift_x_bias_fix, layer3_0_rprelu2_shift_y_bias_fix, layer3_0_rprelu2_prelu_weight_fix, 8, 64);
	shortcut(out_buf_0, out_buf_2, out_buf_1, 8, 64);
	batchnorm(out_buf_1, layer3_0_bn4_weight_fix, layer3_0_bn4_bias_fix, 8, 64); // out_buf_1 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 3.1 PG1 /////////////////////
	// layer3_pgconv(out_buf_1, weight_tile_buffer, msb_fmap, lsb_fmap, layer3_1_conv1_weight_fix, layer3_1_conv1_threshold_fix, out_buf_0, out_buf_2);
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_Layer3_1_PGConv1:
	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
		// compute one tile
		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
		load_weights_tile<4, 64>(
				layer3_1_conv1_weight_fix, weight_tile_buffer,
				out_channel_start, in_channels_after_pack
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_0, out_buf_2,
				out_channel_start, in_channels_after_pack, H_fmap_out
		);
		merge_tile(
				out_buf_0, out_buf_2, layer3_1_conv1_threshold_fix,
				out_channel_start, H_fmap_out+1
		);
	}
	batchnorm(out_buf_0, layer3_1_bn1_weight_fix, layer3_1_bn1_bias_fix, 8, 64);
	rprelu(out_buf_0, layer3_1_rprelu1_shift_x_bias_fix, layer3_1_rprelu1_shift_y_bias_fix, layer3_1_rprelu1_prelu_weight_fix, 8, 64);
	shortcut(out_buf_0, out_buf_1, out_buf_2, 8, 64);
	batchnorm(out_buf_2, layer3_1_bn3_weight_fix, layer3_1_bn3_bias_fix, 8, 64); // out_buf_2 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 3.1 PG2 /////////////////////
	// layer3_pgconv(out_buf_2, weight_tile_buffer, msb_fmap, lsb_fmap, layer3_1_conv2_weight_fix, layer3_1_conv2_threshold_fix, out_buf_0, out_buf_1);
	quant_and_pack(out_buf_2, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_Layer3_1_PGConv2:
	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
		// compute one tile
		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
		load_weights_tile<4, 64>(
				layer3_1_conv2_weight_fix, weight_tile_buffer,
				out_channel_start, in_channels_after_pack
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_0, out_buf_1,
				out_channel_start, in_channels_after_pack, H_fmap_out
		);
		merge_tile(
				out_buf_0, out_buf_1, layer3_1_conv2_threshold_fix,
				out_channel_start, H_fmap_out+1
		);
	}
	batchnorm(out_buf_0, layer3_1_bn2_weight_fix, layer3_1_bn2_bias_fix, 8, 64);
	rprelu(out_buf_0, layer3_1_rprelu2_shift_x_bias_fix, layer3_1_rprelu2_shift_y_bias_fix, layer3_1_rprelu2_prelu_weight_fix, 8, 64);
	shortcut(out_buf_0, out_buf_2, out_buf_1, 8, 64);
	batchnorm(out_buf_1, layer3_1_bn4_weight_fix, layer3_1_bn4_bias_fix, 8, 64); // out_buf_1 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 3.2 PG1 /////////////////////
	// layer3_pgconv(out_buf_1, weight_tile_buffer, msb_fmap, lsb_fmap, layer3_2_conv1_weight_fix, layer3_2_conv1_threshold_fix, out_buf_0, out_buf_2);
	quant_and_pack(out_buf_1, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_Layer3_2_PGConv1:
	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
		// compute one tile
		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
		load_weights_tile<4, 64>(
				layer3_2_conv1_weight_fix, weight_tile_buffer,
				out_channel_start, in_channels_after_pack
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_0, out_buf_2,
				out_channel_start, in_channels_after_pack, H_fmap_out
		);
		merge_tile(
				out_buf_0, out_buf_2, layer3_2_conv1_threshold_fix,
				out_channel_start, H_fmap_out+1
		);
	}
	batchnorm(out_buf_0, layer3_2_bn1_weight_fix, layer3_2_bn1_bias_fix, 8, 64);
	rprelu(out_buf_0, layer3_2_rprelu1_shift_x_bias_fix, layer3_2_rprelu1_shift_y_bias_fix, layer3_2_rprelu1_prelu_weight_fix, 8, 64);
	shortcut(out_buf_0, out_buf_1, out_buf_2, 8, 64);
	batchnorm(out_buf_2, layer3_2_bn3_weight_fix, layer3_2_bn3_bias_fix, 8, 64); // out_buf_2 -> shortcuts

	////////////////////////////////////////////////
	//////////// Layer 3.2 PG2 /////////////////////
	// layer3_pgconv(out_buf_2, weight_tile_buffer, msb_fmap, lsb_fmap, layer3_2_conv2_weight_fix, layer3_2_conv2_threshold_fix, out_buf_0, out_buf_1);
	quant_and_pack(out_buf_2, msb_fmap, lsb_fmap, H_fmap_in, in_channels);
	LOOP_Layer3_2_PGConv2:
	for(int tile=0; tile<out_channels/OUT_CHANNEL_PARALLELISM; tile++){
		// compute one tile
		int out_channel_start = tile * OUT_CHANNEL_PARALLELISM;
		load_weights_tile<4, 64>(
				layer3_2_conv2_weight_fix, weight_tile_buffer,
				out_channel_start, in_channels_after_pack
		);
		pg_conv3x3_tile(
				msb_fmap, lsb_fmap, weight_tile_buffer,
				out_buf_0, out_buf_1,
				out_channel_start, in_channels_after_pack, H_fmap_out
		);
		merge_tile(
				out_buf_0, out_buf_1, layer3_2_conv2_threshold_fix,
				out_channel_start, H_fmap_out+1
		);
	}
	batchnorm(out_buf_0, layer3_2_bn2_weight_fix, layer3_2_bn2_bias_fix, 8, 64);
	rprelu(out_buf_0, layer3_2_rprelu2_shift_x_bias_fix, layer3_2_rprelu2_shift_y_bias_fix, layer3_2_rprelu2_prelu_weight_fix, 8, 64);
	shortcut(out_buf_0, out_buf_2, out_buf_1, 8, 64);
	batchnorm(out_buf_1, layer3_2_bn4_weight_fix, layer3_2_bn4_bias_fix, 8, 64); // out_buf_1 -> shortcuts

	FIX_FM_acc pool_out_buf[64];
#pragma HLS ARRAY_PARTITION variable=pool_out_buf complete dim=1
	FIX_FM_acc linear_out_buf[10];
#pragma HLS ARRAY_PARTITION variable=linear_out_buf complete dim=1

	avgpool_8x8(out_buf_1, pool_out_buf);
	matmul(pool_out_buf, linear_weight_fix, linear_bias_fix, linear_out_buf);

	// ------- verified above ---------

	LOOP_StrmOut:
	for(int i=0; i<10; i++){
		output[i] = linear_out_buf[i];
	}

}


//} // extern "C"
