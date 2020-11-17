//#include "typedefs.h"
#include "bnn.h"
#include "layer.h"
//#include "dimension_def.h"

//extern "C" {

using namespace std;

//inline void get_image(uint16 *image, bool bin_image[96][32][32])
//{
//	LOOP_GetImg:
//	for (int c = 0; c < 96; c ++) {
//		for (int row = 0; row < 32; row ++) {
//			for (int col = 0; col < 32; col ++) {
//#pragma HLS PIPELINE
//				bin_image[c][row][col] = image[c*32*32 + row*32 + col];
//			}
//		}
//	}
//}

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

//inline void PackImage(
//		bool input[96][32][32],
//		uint16 output[6][33][33]
//)
//{
//	LOOP_PACK:
//	for(int j=0; j<6; j++){
//		for(int row=0; row<32; row++){
//			for(int col=0; col<32; col++){
//#pragma HLS PIPELINE
//				/*
//                uint16 w_pack = 0;
//                for(int b=0; b<16; b++){
//                    w_pack += (input[j*16+b][row][col])<<(15-b);
//                }
//                output[j][row][col] = w_pack;
//				 */
//				for(int b=0; b<16; b++){
//					output[j][row][col][15-b] = input[j*16+b][row][col];
//				}
//			}
//		}
//	}
//	return;
//}


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

//#pragma HLS INTERFACE s_axilite port=images bundle=control
//#pragma HLS INTERFACE s_axilite port=index bundle=control
//#pragma HLS INTERFACE s_axilite port=output bundle=control

#pragma HLS INTERFACE s_axilite port=return bundle=control

#pragma HLS ALLOCATION instances=pg_conv3x3_tile limit=1 function
#pragma HLS ALLOCATION instances=quant_and_pack limit=1 function
#pragma HLS ALLOCATION instances=merge_tile limit=1 function
#pragma HLS ALLOCATION instances=batchnorm limit=1 function
#pragma HLS ALLOCATION instances=rprelu limit=1 function
#pragma HLS ALLOCATION instances=shortcut limit=1 function

	bool bin_img[96][32][32];
#pragma HLS ARRAY_PARTITION variable=bin_img cyclic factor=16 dim=1
	uint16 msb_fmap[6][33][33];
	uint16 lsb_fmap[6][33][33];

	get_image(image, msb_fmap);
//	PackImage(bin_img, msb_fmap);

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

#pragma HLS ARRAY_PARTITION variable=conv1_weight complete dim=3
#pragma HLS ARRAY_PARTITION variable=conv1_weight complete dim=4

	//#pragma HLS ARRAY_PARTITION variable=bn1_weight cyclic factor=8 dim=1
	//#pragma HLS ARRAY_PARTITION variable=bn1_bias cyclic factor=8 dim=1
	//#pragma HLS ARRAY_PARTITION variable=layer1_0_bn1_weight cyclic factor=8 dim=1
	//#pragma HLS ARRAY_PARTITION variable=layer1_0_bn1_bias cyclic factor=8 dim=1
	//#pragma HLS ARRAY_PARTITION variable=layer1_0_rprelu1_shift_x_bias cyclic factor=8 dim=1
	//#pragma HLS ARRAY_PARTITION variable=layer1_0_rprelu1_shift_y_bias cyclic factor=8 dim=1
	//#pragma HLS ARRAY_PARTITION variable=layer1_0_rprelu1_prelu_weight cyclic factor=8 dim=1
	//#pragma HLS ARRAY_PARTITION variable=layer1_0_bn3_weight cyclic factor=8 dim=1
	//#pragma HLS ARRAY_PARTITION variable=layer1_0_bn3_bias cyclic factor=8 dim=1

	conv1(msb_fmap, lsb_fmap, weight_tile_buffer, out_buf_1, out_buf_2);
	batchnorm(out_buf_1, bn1_weight_fix, bn1_bias_fix, 32, 16); // out_buf_1 -> shortcuts

	layer1_pgconv(out_buf_1, weight_tile_buffer, msb_fmap, lsb_fmap, layer1_0_conv1_weight_fix, layer1_0_conv1_threshold_fix, out_buf_0, out_buf_2);
	batchnorm(out_buf_0, layer1_0_bn1_weight_fix, layer1_0_bn1_bias_fix, 32, 16);
	rprelu(out_buf_0, layer1_0_rprelu1_shift_x_bias_fix, layer1_0_rprelu1_shift_y_bias_fix, layer1_0_rprelu1_prelu_weight_fix, 32, 16);
	shortcut(out_buf_0, out_buf_1, out_buf_2, 32, 16);
	batchnorm(out_buf_2, layer1_0_bn3_weight_fix, layer1_0_bn3_bias_fix, 32, 16); // out_buf_2 -> shortcuts

	layer1_pgconv(out_buf_2, weight_tile_buffer, msb_fmap, lsb_fmap, layer1_0_conv2_weight_fix, layer1_0_conv2_threshold_fix, out_buf_0, out_buf_1);
	batchnorm(out_buf_0, layer1_0_bn2_weight_fix, layer1_0_bn2_bias_fix, 32, 16);
	rprelu(out_buf_0, layer1_0_rprelu2_shift_x_bias_fix, layer1_0_rprelu2_shift_y_bias_fix, layer1_0_rprelu2_prelu_weight_fix, 32, 16);
	shortcut(out_buf_0, out_buf_2, out_buf_1, 32, 16);
	batchnorm(out_buf_1, layer1_0_bn4_weight_fix, layer1_0_bn4_bias_fix, 32, 16); // out_buf_1 -> shortcuts

	layer1_pgconv(out_buf_1, weight_tile_buffer, msb_fmap, lsb_fmap, layer1_1_conv1_weight_fix, layer1_1_conv1_threshold_fix, out_buf_0, out_buf_2);
	batchnorm(out_buf_0, layer1_1_bn1_weight_fix, layer1_1_bn1_bias_fix, 32, 16);
	rprelu(out_buf_0, layer1_1_rprelu1_shift_x_bias_fix, layer1_1_rprelu1_shift_y_bias_fix, layer1_1_rprelu1_prelu_weight_fix, 32, 16);
	shortcut(out_buf_0, out_buf_1, out_buf_2, 32, 16);
	batchnorm(out_buf_2, layer1_1_bn3_weight_fix, layer1_1_bn3_bias_fix, 32, 16); // out_buf_2 -> shortcuts

	layer1_pgconv(out_buf_2, weight_tile_buffer, msb_fmap, lsb_fmap, layer1_1_conv2_weight_fix, layer1_1_conv2_threshold_fix, out_buf_0, out_buf_1);
	batchnorm(out_buf_0, layer1_1_bn2_weight_fix, layer1_1_bn2_bias_fix, 32, 16);
	rprelu(out_buf_0, layer1_1_rprelu2_shift_x_bias_fix, layer1_1_rprelu2_shift_y_bias_fix, layer1_1_rprelu2_prelu_weight_fix, 32, 16);
	shortcut(out_buf_0, out_buf_2, out_buf_1, 32, 16);
	batchnorm(out_buf_1, layer1_1_bn4_weight_fix, layer1_1_bn4_bias_fix, 32, 16); // out_buf_1 -> shortcuts

	layer1_pgconv(out_buf_1, weight_tile_buffer, msb_fmap, lsb_fmap, layer1_2_conv1_weight_fix, layer1_2_conv1_threshold_fix, out_buf_0, out_buf_2);
	batchnorm(out_buf_0, layer1_2_bn1_weight_fix, layer1_2_bn1_bias_fix, 32, 16);
	rprelu(out_buf_0, layer1_2_rprelu1_shift_x_bias_fix, layer1_2_rprelu1_shift_y_bias_fix, layer1_2_rprelu1_prelu_weight_fix, 32, 16);
	shortcut(out_buf_0, out_buf_1, out_buf_2, 32, 16);
	batchnorm(out_buf_2, layer1_2_bn3_weight_fix, layer1_2_bn3_bias_fix, 32, 16); // out_buf_2 -> shortcuts

	layer1_pgconv(out_buf_2, weight_tile_buffer, msb_fmap, lsb_fmap, layer1_2_conv2_weight_fix, layer1_2_conv2_threshold_fix, out_buf_0, out_buf_1);
	batchnorm(out_buf_0, layer1_2_bn2_weight_fix, layer1_2_bn2_bias_fix, 32, 16);
	rprelu(out_buf_0, layer1_2_rprelu2_shift_x_bias_fix, layer1_2_rprelu2_shift_y_bias_fix, layer1_2_rprelu2_prelu_weight_fix, 32, 16);
	shortcut(out_buf_0, out_buf_2, out_buf_1, 32, 16);
	batchnorm(out_buf_1, layer1_2_bn4_weight_fix, layer1_2_bn4_bias_fix, 32, 16); // out_buf_1 -> shortcuts

	layer2_pgconv_sp(out_buf_1, weight_tile_buffer, msb_fmap, lsb_fmap, layer2_0_conv1_weight_fix, layer2_0_conv1_threshold_fix, out_buf_0, out_buf_2);
	batchnorm_s2(out_buf_0, layer2_0_bn1_weight_fix, layer2_0_bn1_bias_fix, 16, 32);
	rprelu(out_buf_0, layer2_0_rprelu1_shift_x_bias_fix, layer2_0_rprelu1_shift_y_bias_fix, layer2_0_rprelu1_prelu_weight_fix, 16, 32);
	avgpool_concat(out_buf_1, 16, 16);
	shortcut(out_buf_0, out_buf_1, out_buf_2, 16, 32);
	batchnorm(out_buf_2, layer2_0_bn3_weight_fix, layer2_0_bn3_bias_fix, 16, 32); // out_buf_2 -> shortcuts

	layer2_pgconv(out_buf_2, weight_tile_buffer, msb_fmap, lsb_fmap, layer2_0_conv2_weight_fix, layer2_0_conv2_threshold_fix, out_buf_0, out_buf_1);
	batchnorm(out_buf_0, layer2_0_bn2_weight_fix, layer2_0_bn2_bias_fix, 16, 32);
	rprelu(out_buf_0, layer2_0_rprelu2_shift_x_bias_fix, layer2_0_rprelu2_shift_y_bias_fix, layer2_0_rprelu2_prelu_weight_fix, 16, 32);
	shortcut(out_buf_0, out_buf_2, out_buf_1, 16, 32);
	batchnorm(out_buf_1, layer2_0_bn4_weight_fix, layer2_0_bn4_bias_fix, 16, 32); // out_buf_1 -> shortcuts

    layer2_pgconv(out_buf_1, weight_tile_buffer, msb_fmap, lsb_fmap, layer2_1_conv1_weight_fix, layer2_1_conv1_threshold_fix, out_buf_0, out_buf_2);
    batchnorm(out_buf_0, layer2_1_bn1_weight_fix, layer2_1_bn1_bias_fix, 16, 32);
    rprelu(out_buf_0, layer2_1_rprelu1_shift_x_bias_fix, layer2_1_rprelu1_shift_y_bias_fix, layer2_1_rprelu1_prelu_weight_fix, 16, 32);
    shortcut(out_buf_0, out_buf_1, out_buf_2, 16, 32);
    batchnorm(out_buf_2, layer2_1_bn3_weight_fix, layer2_1_bn3_bias_fix, 16, 32); // out_buf_2 -> shortcuts

    layer2_pgconv(out_buf_2, weight_tile_buffer, msb_fmap, lsb_fmap, layer2_1_conv2_weight_fix, layer2_1_conv2_threshold_fix, out_buf_0, out_buf_1);
    batchnorm(out_buf_0, layer2_1_bn2_weight_fix, layer2_1_bn2_bias_fix, 16, 32);
    rprelu(out_buf_0, layer2_1_rprelu2_shift_x_bias_fix, layer2_1_rprelu2_shift_y_bias_fix, layer2_1_rprelu2_prelu_weight_fix, 16, 32);
    shortcut(out_buf_0, out_buf_2, out_buf_1, 16, 32);
    batchnorm(out_buf_1, layer2_1_bn4_weight_fix, layer2_1_bn4_bias_fix, 16, 32); // out_buf_1 -> shortcuts

    layer2_pgconv(out_buf_1, weight_tile_buffer, msb_fmap, lsb_fmap, layer2_2_conv1_weight_fix, layer2_2_conv1_threshold_fix, out_buf_0, out_buf_2);
    batchnorm(out_buf_0, layer2_2_bn1_weight_fix, layer2_2_bn1_bias_fix, 16, 32);
    rprelu(out_buf_0, layer2_2_rprelu1_shift_x_bias_fix, layer2_2_rprelu1_shift_y_bias_fix, layer2_2_rprelu1_prelu_weight_fix, 16, 32);
    shortcut(out_buf_0, out_buf_1, out_buf_2, 16, 32);
    batchnorm(out_buf_2, layer2_2_bn3_weight_fix, layer2_2_bn3_bias_fix, 16, 32); // out_buf_2 -> shortcuts

    layer2_pgconv(out_buf_2, weight_tile_buffer, msb_fmap, lsb_fmap, layer2_2_conv2_weight_fix, layer2_2_conv2_threshold_fix, out_buf_0, out_buf_1);
    batchnorm(out_buf_0, layer2_2_bn2_weight_fix, layer2_2_bn2_bias_fix, 16, 32);
    rprelu(out_buf_0, layer2_2_rprelu2_shift_x_bias_fix, layer2_2_rprelu2_shift_y_bias_fix, layer2_2_rprelu2_prelu_weight_fix, 16, 32);
    shortcut(out_buf_0, out_buf_2, out_buf_1, 16, 32);
    batchnorm(out_buf_1, layer2_2_bn4_weight_fix, layer2_2_bn4_bias_fix, 16, 32); // out_buf_1 -> shortcuts

    layer3_pgconv_sp(out_buf_1, weight_tile_buffer, msb_fmap, lsb_fmap, layer3_0_conv1_weight_fix, layer3_0_conv1_threshold_fix, out_buf_0, out_buf_2);
    batchnorm_s2(out_buf_0, layer3_0_bn1_weight_fix, layer3_0_bn1_bias_fix, 8, 64);
    rprelu(out_buf_0, layer3_0_rprelu1_shift_x_bias_fix, layer3_0_rprelu1_shift_y_bias_fix, layer3_0_rprelu1_prelu_weight_fix, 8, 64);
    avgpool_concat(out_buf_1, 8, 32);
    shortcut(out_buf_0, out_buf_1, out_buf_2, 8, 64);
    batchnorm(out_buf_2, layer3_0_bn3_weight_fix, layer3_0_bn3_bias_fix, 8, 64); // out_buf_2 -> shortcuts

    layer3_pgconv(out_buf_2, weight_tile_buffer, msb_fmap, lsb_fmap, layer3_0_conv2_weight_fix, layer3_0_conv2_threshold_fix, out_buf_0, out_buf_1);
    batchnorm(out_buf_0, layer3_0_bn2_weight_fix, layer3_0_bn2_bias_fix, 8, 64);
    rprelu(out_buf_0, layer3_0_rprelu2_shift_x_bias_fix, layer3_0_rprelu2_shift_y_bias_fix, layer3_0_rprelu2_prelu_weight_fix, 8, 64);
    shortcut(out_buf_0, out_buf_2, out_buf_1, 8, 64);
    batchnorm(out_buf_1, layer3_0_bn4_weight_fix, layer3_0_bn4_bias_fix, 8, 64); // out_buf_1 -> shortcuts

    layer3_pgconv(out_buf_1, weight_tile_buffer, msb_fmap, lsb_fmap, layer3_1_conv1_weight_fix, layer3_1_conv1_threshold_fix, out_buf_0, out_buf_2);
    batchnorm(out_buf_0, layer3_1_bn1_weight_fix, layer3_1_bn1_bias_fix, 8, 64);
    rprelu(out_buf_0, layer3_1_rprelu1_shift_x_bias_fix, layer3_1_rprelu1_shift_y_bias_fix, layer3_1_rprelu1_prelu_weight_fix, 8, 64);
    shortcut(out_buf_0, out_buf_1, out_buf_2, 8, 64);
    batchnorm(out_buf_2, layer3_1_bn3_weight_fix, layer3_1_bn3_bias_fix, 8, 64); // out_buf_2 -> shortcuts

    layer3_pgconv(out_buf_2, weight_tile_buffer, msb_fmap, lsb_fmap, layer3_1_conv2_weight_fix, layer3_1_conv2_threshold_fix, out_buf_0, out_buf_1);
    batchnorm(out_buf_0, layer3_1_bn2_weight_fix, layer3_1_bn2_bias_fix, 8, 64);
    rprelu(out_buf_0, layer3_1_rprelu2_shift_x_bias_fix, layer3_1_rprelu2_shift_y_bias_fix, layer3_1_rprelu2_prelu_weight_fix, 8, 64);
    shortcut(out_buf_0, out_buf_2, out_buf_1, 8, 64);
    batchnorm(out_buf_1, layer3_1_bn4_weight_fix, layer3_1_bn4_bias_fix, 8, 64); // out_buf_1 -> shortcuts

    layer3_pgconv(out_buf_1, weight_tile_buffer, msb_fmap, lsb_fmap, layer3_2_conv1_weight_fix, layer3_2_conv1_threshold_fix, out_buf_0, out_buf_2);
    batchnorm(out_buf_0, layer3_2_bn1_weight_fix, layer3_2_bn1_bias_fix, 8, 64);
    rprelu(out_buf_0, layer3_2_rprelu1_shift_x_bias_fix, layer3_2_rprelu1_shift_y_bias_fix, layer3_2_rprelu1_prelu_weight_fix, 8, 64);
    shortcut(out_buf_0, out_buf_1, out_buf_2, 8, 64);
    batchnorm(out_buf_2, layer3_2_bn3_weight_fix, layer3_2_bn3_bias_fix, 8, 64); // out_buf_2 -> shortcuts

    layer3_pgconv(out_buf_2, weight_tile_buffer, msb_fmap, lsb_fmap, layer3_2_conv2_weight_fix, layer3_2_conv2_threshold_fix, out_buf_0, out_buf_1);
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
//	for(int i=0; i<64; i++){ //attention!!! the upper bound of i
//		for(int j=0; j<32; j++){
//			for(int k=0; k<32; k++){
//				output[i*32*32+j*32+k] = pool_out_buf[i];
//			}
//		}
//	}
	for(int i=0; i<10; i++){
		output[i] = linear_out_buf[i];
	}

}


//} // extern "C"
