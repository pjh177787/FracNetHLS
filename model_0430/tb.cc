
#include "bnn.h"
#include "typedefs.h"
#include "hls_stream.h"
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <math.h>
#include <ap_fixed.h>
#include "array_def.h"
//#include "weights_dummy.h"

using namespace std;


//float DDR_ptr[2048][226][225];

//void read_all_images()
//{
//	std::ifstream ifs_param0("conv1_input.bin", std::ios::in | std::ios::binary);
//	ifs_param0.read((char*)(images), NUM_TESTS*96*224*224*sizeof(unsigned char));
//	ifs_param0.close();
//}
//
//void get_image(unsigned char *images, unsigned int idx, float image[96][224][224])
//{
//	unsigned int offset = idx*96*224*224;
//	for (int c = 0; c < 96; c ++) {
//		for (int row = 0; row < 224; row ++) {
//			for (int col = 0; col < 224; col ++) {
//				image[c][row][col] = images[offset + c*224*224 + row*224 + col];
//			}
//		}
//	}
//}
//
//void load_weights()
//{
//	std::ifstream ifs_param0("conv3x3_weights.bin", std::ios::in | std::ios::binary);
//	ifs_param0.read((char*)(conv3x3_all), 25141248*sizeof(float));
//	ifs_param0.close();
//	std::ifstream ifs_param1("conv1x1_weights.bin", std::ios::in | std::ios::binary);
//	ifs_param1.read((char*)(conv1x1_all), 3139584*sizeof(float));
//	ifs_param1.close();
//	std::ifstream ifs_param2("other_weights.bin", std::ios::in | std::ios::binary);
//	ifs_param2.read((char*)(weights_all), 133014*sizeof(float));
//	ifs_param2.close();
//}
//
//template <int C_OUT, int C_IN>
//void get_weight_3x3(int ptr, float weight_3x3[C_OUT][C_IN][3][3])
//{
//	for (int co = 0; co < C_OUT; co ++) {
//		for (int ci = 0; ci < C_IN; ci ++) {
//			for (int row = 0; row < 3; row ++) {
//				for (int col = 0; col < 3; col ++) {
//					int index = co*C_IN*3*3 + ci*3*3 + row*3 + col;
//					weight_3x3[co][ci][row][col] = conv3x3_all[ptr + index];
//				}
//			}
//		}
//	}
//}
//
//template <int C_OUT, int C_IN>
//void get_weight_1x1(int ptr, float weight_1x1[C_OUT][C_IN])
//{
//	for (int co = 0; co < C_OUT; co ++) {
//		for (int ci = 0; ci < C_IN; ci ++) {
//			int index = co*C_IN + ci;
//			weight_1x1[co][ci] = conv1x1_all[ptr + index];
//		}
//	}
//}
//
//template <int CH>
//void get_weight_other(int ptr, float weight_other[CH])
//{
//	for (int ch = 0; ch < CH; ch ++) {
//		weight_other[ch] = weights_all[ptr + ch];
//	}
//}

uint4 to4bit_tb(float x)
{
	const float scale = 7.5;
	ap_ufixed<4, 4, AP_RND_MIN_INF, AP_SAT> temp = (ap_ufixed<4, 4, AP_RND_MIN_INF, AP_SAT>)((x+1)*scale);
	return (uint4)temp;
}

uint2 to2bit_tb(float x)
{
#pragma HLS INLINE
	const float scale = 1.5;
	ap_ufixed<2, 2, AP_RND_MIN_INF, AP_SAT> temp = (ap_ufixed<2, 2, AP_RND_MIN_INF, AP_SAT>)((x+1)*scale);
	return (uint2)temp;
}

void conv1(unsigned char input[96][224][224], float weights[32][96][3][3], float output[32][112][112])
{
	for (int c_out = 0; c_out < 32; c_out ++) {
		for (int row = 0; row < 112; row ++) {
			for (int col = 0; col < 112; col ++) {
				int accum = 0;
				for (int c_in = 0; c_in < 96; c_in ++) {
					for (int k_row = 0; k_row < 3; k_row ++) {
						for (int k_col = 0; k_col < 3; k_col ++) {
							int row_in = row*2 + k_row - 1;
							int col_in = col*2 + k_col - 1;
							if (row_in >= 0 && row_in < 224 && col_in >= 0 && col_in < 224) {
								int inp = input[c_in][row_in][col_in];
								float wei = weights[c_out][c_in][k_row][k_col];
								if ((inp == 1 && wei > 0) || (inp == 0 && wei <= 0)) {
									accum += 1;
								} else {
									accum -= 1;
								}
							}
						}
					}
				}
				output[c_out][row][col] = accum;
			}
		}
	}
}

template <int CHANNEL, int HEIGHT, int WIDTH>
void bn(float input[CHANNEL][HEIGHT][WIDTH], float weight[CHANNEL], float bias[CHANNEL], float output[CHANNEL][HEIGHT][WIDTH]){
	for (int c = 0; c < CHANNEL; c ++) {
		for (int row = 0; row < HEIGHT; row ++) {
			for (int col = 0; col < WIDTH; col ++) {
				output[c][row][col] = input[c][row][col]*weight[c] + bias[c];
			}
		}
	}
}

template <int CHANNEL, int HEIGHT, int WIDTH>
void rprelu(float input[CHANNEL][HEIGHT][WIDTH],
		float x_bias[CHANNEL],
		float y_bias[CHANNEL],
		float weight[CHANNEL],
		float output[CHANNEL][HEIGHT][WIDTH])
{
	for (int c = 0; c < CHANNEL; c ++) {
		for (int row = 0; row < HEIGHT; row ++) {
			for (int col = 0; col < WIDTH; col ++) {
				float t = input[c][row][col] + x_bias[c];
				if (t < 0) {
					t = weight[c]*t;
				}
				output[c][row][col] = t + y_bias[c];
			}
		}
	}
}

template <int CHANNEL, int HEIGHT, int WIDTH>
void quant_sign(float input[CHANNEL][HEIGHT][WIDTH], float output[CHANNEL][HEIGHT][WIDTH]){
	const float d = 2.0/3.0;
	for (int c = 0; c < CHANNEL; c ++) {
		for (int row = 0; row < HEIGHT; row ++) {
			for (int col = 0; col < WIDTH; col ++) {
				float x = input[c][row][col];
//				float o = -1.0;
//				if (x > 2.0/3) {
//					o = 1.0;
//				} else if (x <= 2.0/3 && x >= 0) {
//					o = 1.0/3;
//				} else if (x < 0 && x >= -2.0/3) {
//					o = -1.0/3;
//				} else {
//					o = -1.0;
//				}
				output[c][row][col] = to2bit_tb(x)*d - 1.0;
			}
		}
	}
}

template <int CHANNEL_IN, int CHANNEL_OUT, int HEIGHT_OUT, int WIDTH_OUT>
void generic_conv1x1(float input[CHANNEL_IN][HEIGHT_OUT][WIDTH_OUT],
		float weight[CHANNEL_OUT][CHANNEL_IN],
		float output[CHANNEL_OUT][HEIGHT_OUT][WIDTH_OUT])
{
	//assert( (HEIGHT_IN == HEIGHT_OUT) && (WIDTH_IN == WIDTH_OUT) && "input and output height or width should be the same in conv1x1" );
	for (int co = 0; co < CHANNEL_OUT; co ++) {
		for (int row = 0; row < HEIGHT_OUT; row ++) {
			for (int col = 0; col < WIDTH_OUT; col ++) {
				float accum = 0;
				for (int ci = 0; ci < CHANNEL_IN; ci ++) {
					float w = (weight[co][ci] >= 0) ? 1 : (-1);
					accum += input[ci][row][col] * w;
				}
				output[co][row][col] = accum;
			}
		}
	}
}

template <int CHANNEL_IN, int CHANNEL_OUT, int HEIGHT_IN, int WIDTH_IN, int HEIGHT_OUT, int WIDTH_OUT>
void generic_conv3x3(float input[CHANNEL_IN][HEIGHT_IN][WIDTH_IN],
		float weight[CHANNEL_OUT][CHANNEL_IN][3][3],
		float output[CHANNEL_OUT][HEIGHT_OUT][WIDTH_OUT],
		int stride)
{
	for (int co = 0; co < CHANNEL_OUT; co ++) {
		for (int row = 0; row < HEIGHT_OUT; row ++) {
			for (int col = 0; col < WIDTH_OUT; col ++) {
				float accum = 0;
				for (int ci = 0; ci < CHANNEL_IN; ci ++) {
					for (int krow = 0; krow < 3; krow ++) {
						for (int kcol = 0; kcol < 3; kcol ++) {
							int row_in = row*stride + krow - 1;
							int col_in = col*stride + kcol - 1;
							if (row_in >= 0 && row_in < HEIGHT_IN && col_in >= 0 && col_in < WIDTH_IN) {
								float w = (weight[co][ci][krow][kcol] >= 0) ? 1 : (-1);
								accum += input[ci][row_in][col_in] * w;
							}
						}
					}
				}
				output[co][row][col] = accum;
			}
		}
	}
}

template <int CHANNEL, int HEIGHT, int WIDTH>
void truncate(float input[CHANNEL][HEIGHT][WIDTH], float output[CHANNEL][HEIGHT][WIDTH]){
	for (int c = 0; c < CHANNEL; c ++) {
		for (int row = 0; row < HEIGHT; row ++) {
			for (int col = 0; col < WIDTH; col ++) {
				float x = input[c][row][col];
				float o = -1.0;
				if (x > 0) {
					o = 1.0;
					//					o = 1.0/3;
				} else {
					o = -1.0;
				}
				output[c][row][col] = o;
			}
		}
	}
}

float sigmoid(float x)
{
	return 1/(1 + exp(-x));
}

template <int CHANNEL_IN, int CHANNEL_OUT, int HEIGHT_IN, int WIDTH_IN, int HEIGHT_OUT, int WIDTH_OUT>
void pgconv3x3(float input[CHANNEL_IN][HEIGHT_IN][WIDTH_IN],
		float weight[CHANNEL_OUT][CHANNEL_IN][3][3],
		float threshold[CHANNEL_OUT],
		float output[CHANNEL_OUT][HEIGHT_OUT][WIDTH_OUT])
{
	float input_truncate[CHANNEL_IN][HEIGHT_IN][HEIGHT_IN];
	float out_msb[CHANNEL_OUT][HEIGHT_OUT][WIDTH_OUT];
	float full_msb[CHANNEL_OUT][HEIGHT_OUT][WIDTH_OUT];
	int stride = 1;
	if (HEIGHT_IN != HEIGHT_OUT) {
		stride = 2;
	}
	truncate<CHANNEL_IN, HEIGHT_IN, WIDTH_IN>(input, input_truncate);
	generic_conv3x3<CHANNEL_IN, CHANNEL_OUT, HEIGHT_IN, WIDTH_IN, HEIGHT_OUT, WIDTH_OUT>(input_truncate, weight, out_msb, stride);
	generic_conv3x3<CHANNEL_IN, CHANNEL_OUT, HEIGHT_IN, WIDTH_IN, HEIGHT_OUT, WIDTH_OUT>(input, weight, full_msb, stride);
	for (int c = 0; c < CHANNEL_OUT; c ++) {
		for (int row = 0; row < HEIGHT_OUT; row ++) {
			for (int col = 0; col < WIDTH_OUT; col ++) {
				float t = out_msb[c][row][col]*2.0/3.0 - threshold[c];
				//				float t = out_msb[c][row][col] - threshold[c];
				float s = sigmoid(5*t);
				if (s > 0.5) {
					output[c][row][col] = full_msb[c][row][col];
				} else {
					output[c][row][col] = out_msb[c][row][col]*2.0/3.0;
					//					output[c][row][col] = out_msb[c][row][col];
				}
			}
		}
	}
}

template <int CHANNEL_IN, int CHANNEL_OUT, int HEIGHT_OUT, int WIDTH_OUT>
void pgconv1x1(float input[CHANNEL_IN][HEIGHT_OUT][WIDTH_OUT],
		float weight[CHANNEL_OUT][CHANNEL_IN],
		float threshold[CHANNEL_OUT],
		float output[CHANNEL_OUT][HEIGHT_OUT][WIDTH_OUT])
{
	float input_truncate[CHANNEL_IN][HEIGHT_OUT][HEIGHT_OUT];
	float out_msb[CHANNEL_OUT][HEIGHT_OUT][WIDTH_OUT];
	float full_msb[CHANNEL_OUT][HEIGHT_OUT][WIDTH_OUT];
	truncate<CHANNEL_IN, HEIGHT_OUT, WIDTH_OUT>(input, input_truncate);
	generic_conv1x1<CHANNEL_IN, CHANNEL_OUT, HEIGHT_OUT, WIDTH_OUT>(input_truncate, weight, out_msb);
	generic_conv1x1<CHANNEL_IN, CHANNEL_OUT, HEIGHT_OUT, WIDTH_OUT>(input, weight, full_msb);
	for (int c = 0; c < CHANNEL_OUT; c ++) {
		for (int row = 0; row < HEIGHT_OUT; row ++) {
			for (int col = 0; col < WIDTH_OUT; col ++) {
				float t = out_msb[c][row][col]*2.0/3.0 - threshold[c];
				//				float t = out_msb[c][row][col] - threshold[c];
				float s = sigmoid(5*t);
				if (s > 0.5) {
					output[c][row][col] = full_msb[c][row][col];
				} else {
					output[c][row][col] = out_msb[c][row][col]*2.0/3.0;
					//					output[c][row][col] = out_msb[c][row][col];
				}
			}
		}
	}
}

float clip(float x) {
	if (x > 1) return 1;
	else if (x < -1) return -1;
	else return x;
}

template <int CHANNEL, int HEIGHT, int WIDTH>
void shortcut(float input_a[CHANNEL][HEIGHT][WIDTH],
		float input_b[CHANNEL][HEIGHT][WIDTH],
		float output[CHANNEL][HEIGHT][WIDTH])
{
	float d = 2.0/(2.0*2.0*2.0*2.0 - 1.0);
	for (int c = 0; c < CHANNEL; c ++) {
		for (int row = 0; row < HEIGHT; row ++) {
			for (int col = 0; col < WIDTH; col ++) {
				float x = input_a[c][row][col];
				float y = input_b[c][row][col];
				float yclip = clip(y);
//				float yquant = round((yclip + 1.0)/d)*d - 1.0;
				float yquant = to4bit_tb(yclip)*d - 1.0;
				output[c][row][col] = x + yquant;
			}
		}
	}
}

template <int CHANNEL_IN, int CHANNEL_OUT, int HEIGHT_OUT, int WIDTH_OUT>
void concat(float input[CHANNEL_IN][HEIGHT_OUT][WIDTH_OUT],
		float output[CHANNEL_OUT][HEIGHT_OUT][WIDTH_OUT])
{
	float d = 2.0/(2.0*2.0*2.0*2.0 - 1.0);
	assert( (CHANNEL_IN*2 == CHANNEL_OUT) && "num of output channels should be twice the num of input channels in concat()" );
	for (int c = 0; c < CHANNEL_IN; c ++) {
		for (int row = 0; row < HEIGHT_OUT; row ++) {
			for (int col = 0; col < WIDTH_OUT; col ++) {
				float y = input[c][row][col];
				//				float yclip = clip(y);
				//				float yquant = round((yclip + 1.0)/d)*d - 1.0;
				output[c][row][col] = y;
				output[c+CHANNEL_IN][row][col] = y;
			}
		}
	}
}

template <int CHANNEL_OUT, int HEIGHT_IN, int WIDTH_IN, int HEIGHT_OUT, int WIDTH_OUT>
void avgpool2x2(float input[CHANNEL_OUT][HEIGHT_IN][WIDTH_IN],
		float output[CHANNEL_OUT][HEIGHT_OUT][WIDTH_OUT])
{
	assert( (HEIGHT_OUT*2 == HEIGHT_IN) && (WIDTH_OUT*2 == WIDTH_IN) && "output spatial dimension should be twice the input spatial dimension in avgpool2x2()" );

	float d = 2.0/(2.0*2.0*2.0*2.0 - 1.0);
	for (int c = 0; c < CHANNEL_OUT; c ++) {
		for (int row = 0; row < HEIGHT_OUT; row ++) {
			for (int col = 0; col < WIDTH_OUT; col ++) {
				float m = 0;
				for (int i = 0; i < 2; i ++) {
					for (int j = 0; j < 2; j ++) {
						float y = input[c][row*2 + i][col*2 + j]; // float
						float yclip = clip(y);
//						float yquant = round((yclip + 1.0)/d)*d - 1.0;
						float yquant = to4bit_tb(yclip)*d - 1.0;
						m += yquant;
						// yquant : [-1, 1] splitted into 16;
					}
				}
				//				m += input[c][row*2 + 0][col*2 + 0];
				//				m += input[c][row*2 + 0][col*2 + 1];
				//				m += input[c][row*2 + 1][col*2 + 0];
				//				m += input[c][row*2 + 1][col*2 + 1];
//				float y = input[c][row*2][col*2];
				m = m/4.0;
//				m = 0.2;
				output[c][row][col] = m;
			}
		}
	}
}

template <int DIM>
int argmax(float arr[DIM])
{
	int index = 0;
	float max = -100000;
	for (int i = 0; i < DIM; i ++){
		if (arr[i] > max) {
			index = i;
			max = arr[i];
		}
	}
	return index;
}

void net_sw(unsigned char image[96][224][224])
{
	conv1(image, layer_0_0_weight, layer_0_0_output);
	bn<32, 112, 112>(layer_0_0_output, layer_0_1_weight, layer_0_1_bias, layer_0_0_output); // [32][112][112]
	cout << "Done conv1" << endl;

	// layer 1
	quant_sign<32, 112, 112>(layer_0_0_output, layer_0_0_output_quant);
	pgconv3x3<32, 32, 112, 112, 112, 112>(
			layer_0_0_output_quant, layer_1_conv3x3_0_weight,
			layer_1_conv3x3_0_threshold, layer_1_conv3x3_0_output
	);
	bn<32, 112, 112>(layer_1_conv3x3_0_output, layer_1_conv3x3_1_weight, layer_1_conv3x3_1_bias, layer_1_conv3x3_0_output);
	rprelu<32, 112, 112>(
			layer_1_conv3x3_0_output, layer_1_rprelu1_shift_x_bias,
			layer_1_rprelu1_shift_y_bias, layer_1_rprelu1_prelu_weight,
			layer_1_conv3x3_0_output
	);
	shortcut<32, 112, 112>(layer_1_conv3x3_0_output, layer_0_0_output, layer_1_conv3x3_0_output);
	bn<32, 112, 112>(layer_1_conv3x3_0_output, layer_1_shiftbn1_weight, layer_1_shiftbn1_bias, layer_1_conv3x3_0_output);

	quant_sign<32, 112, 112>(layer_1_conv3x3_0_output, layer_1_conv3x3_0_output_quant);
	pgconv1x1<32, 64, 112, 112>(
			layer_1_conv3x3_0_output_quant, layer_1_pointwise_0_weight,
			layer_1_pointwise_0_threshold, layer_1_pointwise_0_output
	);
	bn<64, 112, 112>(
			layer_1_pointwise_0_output, layer_1_pointwise_1_weight,
			layer_1_pointwise_1_bias, layer_1_pointwise_0_output
	);
	rprelu<64, 112, 112>(
			layer_1_pointwise_0_output, layer_1_rprelu2_shift_x_bias,
			layer_1_rprelu2_shift_y_bias, layer_1_rprelu2_prelu_weight,
			layer_1_pointwise_0_output
	);
	concat<32, 64, 112, 112>(layer_1_conv3x3_0_output, layer_1_conv3x3_0_output_concat);
	shortcut<64, 112, 112>(layer_1_pointwise_0_output, layer_1_conv3x3_0_output_concat, layer_1_pointwise_0_output);
	bn<64, 112, 112>(layer_1_pointwise_0_output, layer_1_shiftbn2_weight, layer_1_shiftbn2_bias, layer_1_pointwise_0_output);
	cout << "Done layer 1" << endl;

	// layer 2
	quant_sign<64, 112, 112>(layer_1_pointwise_0_output, layer_1_pointwise_0_output_quant);
	pgconv3x3<64, 64, 112, 112, 56, 56>(
			layer_1_pointwise_0_output_quant, layer_2_conv3x3_0_weight,
			layer_2_conv3x3_0_threshold, layer_2_conv3x3_0_output
	);
	bn<64, 56, 56>(layer_2_conv3x3_0_output, layer_2_conv3x3_1_weight, layer_2_conv3x3_1_bias, layer_2_conv3x3_0_output);
	rprelu<64, 56, 56>(
			layer_2_conv3x3_0_output, layer_2_rprelu1_shift_x_bias,
			layer_2_rprelu1_shift_y_bias, layer_2_rprelu1_prelu_weight,
			layer_2_conv3x3_0_output
	);
	avgpool2x2<64, 112, 112, 56, 56>(layer_1_pointwise_0_output, layer_1_pointwise_0_output_avgpool);
	shortcut<64, 56, 56>(layer_2_conv3x3_0_output, layer_1_pointwise_0_output_avgpool, layer_2_conv3x3_0_output);
	bn<64, 56, 56>(layer_2_conv3x3_0_output, layer_2_shiftbn1_weight, layer_2_shiftbn1_bias, layer_2_conv3x3_0_output);

	quant_sign<64, 56, 56>(layer_2_conv3x3_0_output, layer_2_conv3x3_0_output_quant);
	pgconv1x1<64, 128, 56, 56>(
			layer_2_conv3x3_0_output_quant, layer_2_pointwise_0_weight,
			layer_2_pointwise_0_threshold, layer_2_pointwise_0_output
	);
	bn<128, 56, 56>(
			layer_2_pointwise_0_output, layer_2_pointwise_1_weight,
			layer_2_pointwise_1_bias, layer_2_pointwise_0_output
	);
	rprelu<128, 56, 56>(
			layer_2_pointwise_0_output, layer_2_rprelu2_shift_x_bias,
			layer_2_rprelu2_shift_y_bias, layer_2_rprelu2_prelu_weight,
			layer_2_pointwise_0_output
	);
	concat<64, 128, 56, 56>(layer_2_conv3x3_0_output, layer_2_conv3x3_0_output_concat);
	shortcut<128, 56, 56>(layer_2_pointwise_0_output, layer_2_conv3x3_0_output_concat, layer_2_pointwise_0_output);
	bn<128, 56, 56>(layer_2_pointwise_0_output, layer_2_shiftbn2_weight, layer_2_shiftbn2_bias, layer_2_pointwise_0_output);
	cout << "Done layer 2" << endl;

	// layer 3
	quant_sign<128, 56, 56>(layer_2_pointwise_0_output, layer_2_pointwise_0_output_quant);
	pgconv3x3<128, 128, 56, 56, 56, 56>(
			layer_2_pointwise_0_output_quant, layer_3_conv3x3_0_weight,
			layer_3_conv3x3_0_threshold, layer_3_conv3x3_0_output
	);
	bn<128, 56, 56>(layer_3_conv3x3_0_output, layer_3_conv3x3_1_weight, layer_3_conv3x3_1_bias, layer_3_conv3x3_0_output);
	rprelu<128, 56, 56>(
			layer_3_conv3x3_0_output, layer_3_rprelu1_shift_x_bias,
			layer_3_rprelu1_shift_y_bias, layer_3_rprelu1_prelu_weight,
			layer_3_conv3x3_0_output
	);
	shortcut<128, 56, 56>(layer_3_conv3x3_0_output, layer_2_pointwise_0_output, layer_3_conv3x3_0_output);
	bn<128, 56, 56>(layer_3_conv3x3_0_output, layer_3_shiftbn1_weight, layer_3_shiftbn1_bias, layer_3_conv3x3_0_output);

	quant_sign<128, 56, 56>(layer_3_conv3x3_0_output, layer_3_conv3x3_0_output_quant);
	pgconv1x1<128, 128, 56, 56>(
			layer_3_conv3x3_0_output_quant, layer_3_pointwise_0_weight,
			layer_3_pointwise_0_threshold, layer_3_pointwise_0_output
	);
	bn<128, 56, 56>(
			layer_3_pointwise_0_output, layer_3_pointwise_1_weight,
			layer_3_pointwise_1_bias, layer_3_pointwise_0_output
	);
	rprelu<128, 56, 56>(
			layer_3_pointwise_0_output, layer_3_rprelu2_shift_x_bias,
			layer_3_rprelu2_shift_y_bias, layer_3_rprelu2_prelu_weight,
			layer_3_pointwise_0_output
	);
	shortcut<128, 56, 56>(layer_3_pointwise_0_output, layer_3_conv3x3_0_output, layer_3_pointwise_0_output);
	bn<128, 56, 56>(layer_3_pointwise_0_output, layer_3_shiftbn2_weight, layer_3_shiftbn2_bias, layer_3_pointwise_0_output);
	cout << "Done layer 3" << endl;

	// layer 4
	quant_sign<128, 56, 56>(layer_3_pointwise_0_output, layer_3_pointwise_0_output_quant);
	pgconv3x3<128, 128, 56, 56, 28, 28>(
			layer_3_pointwise_0_output_quant, layer_4_conv3x3_0_weight,
			layer_4_conv3x3_0_threshold, layer_4_conv3x3_0_output
	);
	bn<128, 28, 28>(layer_4_conv3x3_0_output, layer_4_conv3x3_1_weight, layer_4_conv3x3_1_bias, layer_4_conv3x3_0_output);
	rprelu<128, 28, 28>(
			layer_4_conv3x3_0_output, layer_4_rprelu1_shift_x_bias,
			layer_4_rprelu1_shift_y_bias, layer_4_rprelu1_prelu_weight,
			layer_4_conv3x3_0_output
	);
	avgpool2x2<128, 56, 56, 28, 28>(layer_3_pointwise_0_output, layer_3_pointwise_0_output_avgpool);
	shortcut<128, 28, 28>(layer_4_conv3x3_0_output, layer_3_pointwise_0_output_avgpool, layer_4_conv3x3_0_output);
	bn<128, 28, 28>(layer_4_conv3x3_0_output, layer_4_shiftbn1_weight, layer_4_shiftbn1_bias, layer_4_conv3x3_0_output);

	quant_sign<128, 28, 28>(layer_4_conv3x3_0_output, layer_4_conv3x3_0_output_quant);
	pgconv1x1<128, 256, 28, 28>(
			layer_4_conv3x3_0_output_quant, layer_4_pointwise_0_weight,
			layer_4_pointwise_0_threshold, layer_4_pointwise_0_output
	);
	bn<256, 28, 28>(
			layer_4_pointwise_0_output, layer_4_pointwise_1_weight,
			layer_4_pointwise_1_bias, layer_4_pointwise_0_output
	);
	rprelu<256, 28, 28>(
			layer_4_pointwise_0_output, layer_4_rprelu2_shift_x_bias,
			layer_4_rprelu2_shift_y_bias, layer_4_rprelu2_prelu_weight,
			layer_4_pointwise_0_output
	);
	concat<128, 256, 28, 28>(layer_4_conv3x3_0_output, layer_4_conv3x3_0_output_concat);
	shortcut<256, 28, 28>(layer_4_pointwise_0_output, layer_4_conv3x3_0_output_concat, layer_4_pointwise_0_output);
	bn<256, 28, 28>(layer_4_pointwise_0_output, layer_4_shiftbn2_weight, layer_4_shiftbn2_bias, layer_4_pointwise_0_output);
	cout << "Done layer 4" << endl;

	// layer 5
	quant_sign<256, 28, 28>(layer_4_pointwise_0_output, layer_4_pointwise_0_output_quant);
	pgconv3x3<256, 256, 28, 28, 28, 28>(
			layer_4_pointwise_0_output_quant, layer_5_conv3x3_0_weight,
			layer_5_conv3x3_0_threshold, layer_5_conv3x3_0_output
	);
	bn<256, 28, 28>(layer_5_conv3x3_0_output, layer_5_conv3x3_1_weight, layer_5_conv3x3_1_bias, layer_5_conv3x3_0_output);
	rprelu<256, 28, 28>(
			layer_5_conv3x3_0_output, layer_5_rprelu1_shift_x_bias,
			layer_5_rprelu1_shift_y_bias, layer_5_rprelu1_prelu_weight,
			layer_5_conv3x3_0_output
	);
	shortcut<256, 28, 28>(layer_5_conv3x3_0_output, layer_4_pointwise_0_output, layer_5_conv3x3_0_output);
	bn<256, 28, 28>(layer_5_conv3x3_0_output, layer_5_shiftbn1_weight, layer_5_shiftbn1_bias, layer_5_conv3x3_0_output);

	quant_sign<256, 28, 28>(layer_5_conv3x3_0_output, layer_5_conv3x3_0_output_quant);
	pgconv1x1<256, 256, 28, 28>(
			layer_5_conv3x3_0_output_quant, layer_5_pointwise_0_weight,
			layer_5_pointwise_0_threshold, layer_5_pointwise_0_output
	);
	bn<256, 28, 28>(
			layer_5_pointwise_0_output, layer_5_pointwise_1_weight,
			layer_5_pointwise_1_bias, layer_5_pointwise_0_output
	);
	rprelu<256, 28, 28>(
			layer_5_pointwise_0_output, layer_5_rprelu2_shift_x_bias,
			layer_5_rprelu2_shift_y_bias, layer_5_rprelu2_prelu_weight,
			layer_5_pointwise_0_output
	);
	shortcut<256, 28, 28>(layer_5_pointwise_0_output, layer_5_conv3x3_0_output, layer_5_pointwise_0_output);
	bn<256, 28, 28>(layer_5_pointwise_0_output, layer_5_shiftbn2_weight, layer_5_shiftbn2_bias, layer_5_pointwise_0_output);
	cout << "Done layer 5" << endl;

	// layer 6
	quant_sign<256, 28, 28>(layer_5_pointwise_0_output, layer_5_pointwise_0_output_quant);
	pgconv3x3<256, 256, 28, 28, 14, 14>(
			layer_5_pointwise_0_output_quant, layer_6_conv3x3_0_weight,
			layer_6_conv3x3_0_threshold, layer_6_conv3x3_0_output
	);
	bn<256, 14, 14>(layer_6_conv3x3_0_output, layer_6_conv3x3_1_weight, layer_6_conv3x3_1_bias, layer_6_conv3x3_0_output);
	rprelu<256, 14, 14>(
			layer_6_conv3x3_0_output, layer_6_rprelu1_shift_x_bias,
			layer_6_rprelu1_shift_y_bias, layer_6_rprelu1_prelu_weight,
			layer_6_conv3x3_0_output
	);
	avgpool2x2<256, 28, 28, 14, 14>(layer_5_pointwise_0_output, layer_5_pointwise_0_output_avgpool);
	shortcut<256, 14, 14>(layer_6_conv3x3_0_output, layer_5_pointwise_0_output_avgpool, layer_6_conv3x3_0_output);
	bn<256, 14, 14>(layer_6_conv3x3_0_output, layer_6_shiftbn1_weight, layer_6_shiftbn1_bias, layer_6_conv3x3_0_output);

	quant_sign<256, 14, 14>(layer_6_conv3x3_0_output, layer_6_conv3x3_0_output_quant);
	pgconv1x1<256, 512, 14, 14>(
			layer_6_conv3x3_0_output_quant, layer_6_pointwise_0_weight,
			layer_6_pointwise_0_threshold, layer_6_pointwise_0_output
	);
	bn<512, 14, 14>(
			layer_6_pointwise_0_output, layer_6_pointwise_1_weight,
			layer_6_pointwise_1_bias, layer_6_pointwise_0_output
	);
	rprelu<512, 14, 14>(
			layer_6_pointwise_0_output, layer_6_rprelu2_shift_x_bias,
			layer_6_rprelu2_shift_y_bias, layer_6_rprelu2_prelu_weight,
			layer_6_pointwise_0_output
	);
	concat<256, 512, 14, 14>(layer_6_conv3x3_0_output, layer_6_conv3x3_0_output_concat);
	shortcut<512, 14, 14>(layer_6_pointwise_0_output, layer_6_conv3x3_0_output_concat, layer_6_pointwise_0_output);
	bn<512, 14, 14>(layer_6_pointwise_0_output, layer_6_shiftbn2_weight, layer_6_shiftbn2_bias, layer_6_pointwise_0_output);
	cout << "Done layer 6" << endl;

	// layer 7
	quant_sign<512, 14, 14>(layer_6_pointwise_0_output, layer_6_pointwise_0_output_quant);
	pgconv3x3<512, 512, 14, 14, 14, 14>(
			layer_6_pointwise_0_output_quant, layer_7_conv3x3_0_weight,
			layer_7_conv3x3_0_threshold, layer_7_conv3x3_0_output
	);
	bn<512, 14, 14>(layer_7_conv3x3_0_output, layer_7_conv3x3_1_weight, layer_7_conv3x3_1_bias, layer_7_conv3x3_0_output);
	rprelu<512, 14, 14>(
			layer_7_conv3x3_0_output, layer_7_rprelu1_shift_x_bias,
			layer_7_rprelu1_shift_y_bias, layer_7_rprelu1_prelu_weight,
			layer_7_conv3x3_0_output
	);
	shortcut<512, 14, 14>(layer_7_conv3x3_0_output, layer_6_pointwise_0_output, layer_7_conv3x3_0_output);
	bn<512, 14, 14>(layer_7_conv3x3_0_output, layer_7_shiftbn1_weight, layer_7_shiftbn1_bias, layer_7_conv3x3_0_output);

	quant_sign<512, 14, 14>(layer_7_conv3x3_0_output, layer_7_conv3x3_0_output_quant);
	pgconv1x1<512, 512, 14, 14>(
			layer_7_conv3x3_0_output_quant, layer_7_pointwise_0_weight,
			layer_7_pointwise_0_threshold, layer_7_pointwise_0_output
	);
	bn<512, 14, 14>(
			layer_7_pointwise_0_output, layer_7_pointwise_1_weight,
			layer_7_pointwise_1_bias, layer_7_pointwise_0_output
	);
	rprelu<512, 14, 14>(
			layer_7_pointwise_0_output, layer_7_rprelu2_shift_x_bias,
			layer_7_rprelu2_shift_y_bias, layer_7_rprelu2_prelu_weight,
			layer_7_pointwise_0_output
	);
	shortcut<512, 14, 14>(layer_7_pointwise_0_output, layer_7_conv3x3_0_output, layer_7_pointwise_0_output);
	bn<512, 14, 14>(layer_7_pointwise_0_output, layer_7_shiftbn2_weight, layer_7_shiftbn2_bias, layer_7_pointwise_0_output);
	cout << "Done layer 7" << endl;

	// layer 8
	quant_sign<512, 14, 14>(layer_7_pointwise_0_output, layer_7_pointwise_0_output_quant);
	pgconv3x3<512, 512, 14, 14, 14, 14>(
			layer_7_pointwise_0_output_quant, layer_8_conv3x3_0_weight,
			layer_8_conv3x3_0_threshold, layer_8_conv3x3_0_output
	);
	bn<512, 14, 14>(layer_8_conv3x3_0_output, layer_8_conv3x3_1_weight, layer_8_conv3x3_1_bias, layer_8_conv3x3_0_output);
	rprelu<512, 14, 14>(
			layer_8_conv3x3_0_output, layer_8_rprelu1_shift_x_bias,
			layer_8_rprelu1_shift_y_bias, layer_8_rprelu1_prelu_weight,
			layer_8_conv3x3_0_output
	);
	shortcut<512, 14, 14>(layer_8_conv3x3_0_output, layer_7_pointwise_0_output, layer_8_conv3x3_0_output);
	bn<512, 14, 14>(layer_8_conv3x3_0_output, layer_8_shiftbn1_weight, layer_8_shiftbn1_bias, layer_8_conv3x3_0_output);

	quant_sign<512, 14, 14>(layer_8_conv3x3_0_output, layer_8_conv3x3_0_output_quant);
	pgconv1x1<512, 512, 14, 14>(
			layer_8_conv3x3_0_output_quant, layer_8_pointwise_0_weight,
			layer_8_pointwise_0_threshold, layer_8_pointwise_0_output
	);
	bn<512, 14, 14>(
			layer_8_pointwise_0_output, layer_8_pointwise_1_weight,
			layer_8_pointwise_1_bias, layer_8_pointwise_0_output
	);
	rprelu<512, 14, 14>(
			layer_8_pointwise_0_output, layer_8_rprelu2_shift_x_bias,
			layer_8_rprelu2_shift_y_bias, layer_8_rprelu2_prelu_weight,
			layer_8_pointwise_0_output
	);
	shortcut<512, 14, 14>(layer_8_pointwise_0_output, layer_8_conv3x3_0_output, layer_8_pointwise_0_output);
	bn<512, 14, 14>(layer_8_pointwise_0_output, layer_8_shiftbn2_weight, layer_8_shiftbn2_bias, layer_8_pointwise_0_output);
	cout << "Done layer 8" << endl;

	// layer 9
	quant_sign<512, 14, 14>(layer_8_pointwise_0_output, layer_8_pointwise_0_output_quant);
	pgconv3x3<512, 512, 14, 14, 14, 14>(
			layer_8_pointwise_0_output_quant, layer_9_conv3x3_0_weight,
			layer_9_conv3x3_0_threshold, layer_9_conv3x3_0_output
	);
	bn<512, 14, 14>(layer_9_conv3x3_0_output, layer_9_conv3x3_1_weight, layer_9_conv3x3_1_bias, layer_9_conv3x3_0_output);
	rprelu<512, 14, 14>(
			layer_9_conv3x3_0_output, layer_9_rprelu1_shift_x_bias,
			layer_9_rprelu1_shift_y_bias, layer_9_rprelu1_prelu_weight,
			layer_9_conv3x3_0_output
	);
	shortcut<512, 14, 14>(layer_9_conv3x3_0_output, layer_8_pointwise_0_output, layer_9_conv3x3_0_output);
	bn<512, 14, 14>(layer_9_conv3x3_0_output, layer_9_shiftbn1_weight, layer_9_shiftbn1_bias, layer_9_conv3x3_0_output);

	quant_sign<512, 14, 14>(layer_9_conv3x3_0_output, layer_9_conv3x3_0_output_quant);
	pgconv1x1<512, 512, 14, 14>(
			layer_9_conv3x3_0_output_quant, layer_9_pointwise_0_weight,
			layer_9_pointwise_0_threshold, layer_9_pointwise_0_output
	);
	bn<512, 14, 14>(
			layer_9_pointwise_0_output, layer_9_pointwise_1_weight,
			layer_9_pointwise_1_bias, layer_9_pointwise_0_output
	);
	rprelu<512, 14, 14>(
			layer_9_pointwise_0_output, layer_9_rprelu2_shift_x_bias,
			layer_9_rprelu2_shift_y_bias, layer_9_rprelu2_prelu_weight,
			layer_9_pointwise_0_output
	);
	shortcut<512, 14, 14>(layer_9_pointwise_0_output, layer_9_conv3x3_0_output, layer_9_pointwise_0_output);
	bn<512, 14, 14>(layer_9_pointwise_0_output, layer_9_shiftbn2_weight, layer_9_shiftbn2_bias, layer_9_pointwise_0_output);
	cout << "Done layer 9" << endl;

	// layer 10
	quant_sign<512, 14, 14>(layer_9_pointwise_0_output, layer_9_pointwise_0_output_quant);
	pgconv3x3<512, 512, 14, 14, 14, 14>(
			layer_9_pointwise_0_output_quant, layer_10_conv3x3_0_weight,
			layer_10_conv3x3_0_threshold, layer_10_conv3x3_0_output
	);
	bn<512, 14, 14>(layer_10_conv3x3_0_output, layer_10_conv3x3_1_weight, layer_10_conv3x3_1_bias, layer_10_conv3x3_0_output);
	rprelu<512, 14, 14>(
			layer_10_conv3x3_0_output, layer_10_rprelu1_shift_x_bias,
			layer_10_rprelu1_shift_y_bias, layer_10_rprelu1_prelu_weight,
			layer_10_conv3x3_0_output
	);
	shortcut<512, 14, 14>(layer_10_conv3x3_0_output, layer_9_pointwise_0_output, layer_10_conv3x3_0_output);
	bn<512, 14, 14>(layer_10_conv3x3_0_output, layer_10_shiftbn1_weight, layer_10_shiftbn1_bias, layer_10_conv3x3_0_output);

	quant_sign<512, 14, 14>(layer_10_conv3x3_0_output, layer_10_conv3x3_0_output_quant);
	pgconv1x1<512, 512, 14, 14>(
			layer_10_conv3x3_0_output_quant, layer_10_pointwise_0_weight,
			layer_10_pointwise_0_threshold, layer_10_pointwise_0_output
	);
	bn<512, 14, 14>(
			layer_10_pointwise_0_output, layer_10_pointwise_1_weight,
			layer_10_pointwise_1_bias, layer_10_pointwise_0_output
	);
	rprelu<512, 14, 14>(
			layer_10_pointwise_0_output, layer_10_rprelu2_shift_x_bias,
			layer_10_rprelu2_shift_y_bias, layer_10_rprelu2_prelu_weight,
			layer_10_pointwise_0_output
	);
	shortcut<512, 14, 14>(layer_10_pointwise_0_output, layer_10_conv3x3_0_output, layer_10_pointwise_0_output);
	bn<512, 14, 14>(layer_10_pointwise_0_output, layer_10_shiftbn2_weight, layer_10_shiftbn2_bias, layer_10_pointwise_0_output);
	cout << "Done layer 10" << endl;

	// layer 11
	quant_sign<512, 14, 14>(layer_10_pointwise_0_output, layer_10_pointwise_0_output_quant);
	pgconv3x3<512, 512, 14, 14, 14, 14>(
			layer_10_pointwise_0_output_quant, layer_11_conv3x3_0_weight,
			layer_11_conv3x3_0_threshold, layer_11_conv3x3_0_output
	);
	bn<512, 14, 14>(layer_11_conv3x3_0_output, layer_11_conv3x3_1_weight, layer_11_conv3x3_1_bias, layer_11_conv3x3_0_output);
	rprelu<512, 14, 14>(
			layer_11_conv3x3_0_output, layer_11_rprelu1_shift_x_bias,
			layer_11_rprelu1_shift_y_bias, layer_11_rprelu1_prelu_weight,
			layer_11_conv3x3_0_output
	);
	shortcut<512, 14, 14>(layer_11_conv3x3_0_output, layer_10_pointwise_0_output, layer_11_conv3x3_0_output);
	bn<512, 14, 14>(layer_11_conv3x3_0_output, layer_11_shiftbn1_weight, layer_11_shiftbn1_bias, layer_11_conv3x3_0_output);

	quant_sign<512, 14, 14>(layer_11_conv3x3_0_output, layer_11_conv3x3_0_output_quant);
	pgconv1x1<512, 512, 14, 14>(
			layer_11_conv3x3_0_output_quant, layer_11_pointwise_0_weight,
			layer_11_pointwise_0_threshold, layer_11_pointwise_0_output
	);
	bn<512, 14, 14>(
			layer_11_pointwise_0_output, layer_11_pointwise_1_weight,
			layer_11_pointwise_1_bias, layer_11_pointwise_0_output
	);
	rprelu<512, 14, 14>(
			layer_11_pointwise_0_output, layer_11_rprelu2_shift_x_bias,
			layer_11_rprelu2_shift_y_bias, layer_11_rprelu2_prelu_weight,
			layer_11_pointwise_0_output
	);
	shortcut<512, 14, 14>(layer_11_pointwise_0_output, layer_11_conv3x3_0_output, layer_11_pointwise_0_output);
	bn<512, 14, 14>(layer_11_pointwise_0_output, layer_11_shiftbn2_weight, layer_11_shiftbn2_bias, layer_11_pointwise_0_output);
	cout << "Done layer 11" << endl;

	// layer 12
	quant_sign<512, 14, 14>(layer_11_pointwise_0_output, layer_11_pointwise_0_output_quant);
	pgconv3x3<512, 512, 14, 14, 7, 7>(
			layer_11_pointwise_0_output_quant, layer_12_conv3x3_0_weight,
			layer_12_conv3x3_0_threshold, layer_12_conv3x3_0_output
	);
	bn<512, 7, 7>(layer_12_conv3x3_0_output, layer_12_conv3x3_1_weight, layer_12_conv3x3_1_bias, layer_12_conv3x3_0_output);
	rprelu<512, 7, 7>(
			layer_12_conv3x3_0_output, layer_12_rprelu1_shift_x_bias,
			layer_12_rprelu1_shift_y_bias, layer_12_rprelu1_prelu_weight,
			layer_12_conv3x3_0_output
	);
	avgpool2x2<512, 14, 14, 7, 7>(layer_11_pointwise_0_output, layer_11_pointwise_0_output_avgpool);
	shortcut<512, 7, 7>(layer_12_conv3x3_0_output, layer_11_pointwise_0_output_avgpool, layer_12_conv3x3_0_output);
	bn<512, 7, 7>(layer_12_conv3x3_0_output, layer_12_shiftbn1_weight, layer_12_shiftbn1_bias, layer_12_conv3x3_0_output);

	quant_sign<512, 7, 7>(layer_12_conv3x3_0_output, layer_12_conv3x3_0_output_quant);
	pgconv1x1<512, 1024, 7, 7>(
			layer_12_conv3x3_0_output_quant, layer_12_pointwise_0_weight,
			layer_12_pointwise_0_threshold, layer_12_pointwise_0_output
	);
	bn<1024, 7, 7>(
			layer_12_pointwise_0_output, layer_12_pointwise_1_weight,
			layer_12_pointwise_1_bias, layer_12_pointwise_0_output
	);
	rprelu<1024, 7, 7>(
			layer_12_pointwise_0_output, layer_12_rprelu2_shift_x_bias,
			layer_12_rprelu2_shift_y_bias, layer_12_rprelu2_prelu_weight,
			layer_12_pointwise_0_output
	);
	concat<512, 1024, 7, 7>(layer_12_conv3x3_0_output, layer_12_conv3x3_0_output_concat);
	shortcut<1024, 7, 7>(layer_12_pointwise_0_output, layer_12_conv3x3_0_output_concat, layer_12_pointwise_0_output);
	bn<1024, 7, 7>(layer_12_pointwise_0_output, layer_12_shiftbn2_weight, layer_12_shiftbn2_bias, layer_12_pointwise_0_output);
	cout << "Done layer 12" << endl;

	// layer 13
	quant_sign<1024, 7, 7>(layer_12_pointwise_0_output, layer_12_pointwise_0_output_quant);
	pgconv3x3<1024, 1024, 7, 7, 7, 7>(
			layer_12_pointwise_0_output_quant, layer_13_conv3x3_0_weight,
			layer_13_conv3x3_0_threshold, layer_13_conv3x3_0_output
	);
	bn<1024, 7, 7>(layer_13_conv3x3_0_output, layer_13_conv3x3_1_weight, layer_13_conv3x3_1_bias, layer_13_conv3x3_0_output);
	rprelu<1024, 7, 7>(
			layer_13_conv3x3_0_output, layer_13_rprelu1_shift_x_bias,
			layer_13_rprelu1_shift_y_bias, layer_13_rprelu1_prelu_weight,
			layer_13_conv3x3_0_output
	);
	shortcut<1024, 7, 7>(layer_13_conv3x3_0_output, layer_12_pointwise_0_output, layer_13_conv3x3_0_output);
	bn<1024, 7, 7>(layer_13_conv3x3_0_output, layer_13_shiftbn1_weight, layer_13_shiftbn1_bias, layer_13_conv3x3_0_output);

	quant_sign<1024, 7, 7>(layer_13_conv3x3_0_output, layer_13_conv3x3_0_output_quant);
	pgconv1x1<1024, 1024, 7, 7>(
			layer_13_conv3x3_0_output_quant, layer_13_pointwise_0_weight,
			layer_13_pointwise_0_threshold, layer_13_pointwise_0_output
	);
	bn<1024, 7, 7>(
			layer_13_pointwise_0_output, layer_13_pointwise_1_weight,
			layer_13_pointwise_1_bias, layer_13_pointwise_0_output
	);
	rprelu<1024, 7, 7>(
			layer_13_pointwise_0_output, layer_13_rprelu2_shift_x_bias,
			layer_13_rprelu2_shift_y_bias, layer_13_rprelu2_prelu_weight,
			layer_13_pointwise_0_output
	);
	shortcut<1024, 7, 7>(layer_13_pointwise_0_output, layer_13_conv3x3_0_output, layer_13_pointwise_0_output);
	bn<1024, 7, 7>(layer_13_pointwise_0_output, layer_13_shiftbn2_weight, layer_13_shiftbn2_bias, layer_13_pointwise_0_output);
	cout << "Done layer 13" << endl;

	float d = 2.0/(2.0*2.0*2.0*2.0 - 1.0);
	for (int i = 0; i < 1024; i ++){
		float tmp = 0;
		for (int j = 0; j < 7; j ++){
			for (int k = 0; k < 7; k ++){
				float x = clip(layer_13_pointwise_0_output[i][j][k]);
				float y = round((x + 1.0)/d)*d - 1.0;
				tmp += y;
			}
		}
		avgpool_out_sw[i] = tmp/(float)49.0;
	}

	for (int i = 0; i < 1000; i ++){
		linear_out_sw[i] = fc_bias[i];
		for (int j = 0; j < 1024; j ++){
			linear_out_sw[i] += avgpool_out_sw[j]*fc_weight[i][j];
		}
	}
}



int main()
{
//	float ddd = 2.0/15.0;
//	for (int i = 0; i < 200; i ++) {
//		float ii = i/100.0 - 1;
//		uint4 ii_hls = to4bit_tb(ii);
//		float ii_c = round((ii + 1.0)/ddd);
//		cout << "ii = " << ii << " ii_hls = " << (float)ii_hls << " ii_c = " << ii_c << endl;
//	}
	read_all_images();
	load_weights();

	load_individual_weight();
	for (int k = 0; k < NUM_TESTS; k ++) {



		unsigned char image[96][224][224] = {0};
		get_image(images, k, image);


		cout << "image " << k << endl;

		////////////////////////////////
		//////// SOFTWARE //////////////
		////////////////////////////////
		cout << "Weights loading success " << endl;

		net_sw(image);
		int img_ch = 1024;
		int img_height = 7;
		int img_width = 7;
		int print_dim = 7;
		int print_row_start = 0;
		int print_row_end = print_row_start + print_dim;
		int print_col_start = 0;
		int print_col_end = print_col_start + print_dim;
		int ch = 12;
		const float d = 2.0/(2.0*2.0*2.0*2.0 - 1.0);

		float arr_layer_output[img_ch*img_height*img_width]; // 1D array for loading layer output from txt file
		//		load_layer_output("layer_outputs/layer2_shiftbn2_output", arr_layer_output);
		//				cout << "--------- layer_2_pointwise_0_output ---------" << endl;
		//		for (int row = 0; row < print_dim; row ++) {
		//			for (int col = 0; col < print_dim; col ++) {
		//				cout << fixed << setprecision(6) << arr_layer_output[ch*img_height*img_width + row*img_width + col] << "  ";
		//			}
		//			cout << endl;
		//		}
		//		cout << "---------- Torch above --------------------" << endl << endl;
		for (int row = print_row_start; row < print_row_end; row ++) {
			for (int col = print_col_start; col < print_col_end; col ++) {
				//				layer_0_0_output
				//				layer_1_pointwise_0_output
				//				layer_2_pointwise_0_output
				float x = clip(layer_13_pointwise_0_output[ch][row][col]);
				float y = round((x + 1.0)/d)*d - 1.0;
				cout << fixed << setprecision(3) << y << "  ";
			}
			cout << endl;
		}
		cout << "---------- SW above -----------------------" << endl << endl;
		float err = 0;
		float total_err = 0;
		float max_err = 0;
		int err_cnt = 0;
		int local_err_cnt = 0;
		int total = 0;
		//		for(int i=0; i<img_ch; i++){
		//			for(int j=0; j<img_height; j++){
		//				for(int k=0; k<img_width; k++){
		//					err = abs(layer_2_pointwise_0_output[i][j][k] - arr_layer_output[i*img_height*img_width + j*img_width + k]);
		//					if (err > max_err) max_err = err;
		//					if (err > 0.1){
		//						err_cnt += 1;}
		//					total_err += err;
		//					total += 1;
		//				}
		//			}
		//		}
		//		cout << "Total absolute error C vs py: " << total_err << endl;
		//		cout << "Total number of errors C vs py: " << err_cnt << "/" << total << endl;
		//		cout << "Maximum absolute pixel error C vs py: " << max_err << endl << endl;


		//				float avgpool7x7_py[1024];
		//				load_layer_output("layer_outputs/avgpool7x7_output", avgpool7x7_py);
		//				cout << "--------- avgpool7x7_output ---------------" << endl;
		//				for (int i = 0; i < 32; i ++){
		//					for (int j = 0; j < 32; j ++){
		//						int index = i*32 + j;
		//						cout << avgpool7x7_py[index] << " ";
		//					}
		//					cout << endl;
		//				}
		//				cout << "---------- Torch AvgPool 7x7 above --------" << endl << endl;
		//		for (int i = 0; i < print_dim; i ++){
		//			for (int j = 0; j < print_dim; j ++){
		//				int index = i*print_dim + j;
		//				cout << avgpool_out_sw[index] << " ";
		//			}
		//			cout << endl;
		//		}
		//		cout << "---------- SW AvgPool 7x7 above ------------" << endl << endl;

		//				err = 0;
		//				total_err = 0;
		//				max_err = 0;
		//				err_cnt = 0;
		//				total = 0;
		//				for(int i=0; i<1024; i++){
		//					err = abs(avgpool_out_sw[i] - avgpool7x7_py[i]);
		//					if (err > max_err) max_err = err;
		//					if (err > 0.1){
		//						err_cnt += 1;
		//					}
		//					total_err += err;
		//					total += 1;
		//				}
		//				cout << "Total absolute error C vs py: " << total_err << endl;
		//				cout << "Total number of errors C vs py: " << err_cnt << "/" << total << endl;
		//				cout << "Maximum absolute pixel error C vs py: " << max_err << endl << endl;

		//				float classifier_py[1000];
		//				load_layer_output("layer_outputs/classifier", classifier_py);
		//		cout << "--------- classifier_output ---------------" << endl;
		//				for (int i = 0; i < 25; i ++){
		//					for (int j = 0; j < 40; j ++){
		//						int index = i*40 + j;
		//						cout << classifier_py[index] << " ";
		//					}
		//					cout << endl;
		//				}
		//						cout << "Predict: " << argmax<1000>(classifier_py) << endl;
		//				cout << "---------- Torch Classifier above ---------" << endl << endl;
		for (int i = 0; i < 20; i ++){
			for (int j = 0; j < 50; j ++){
				int index = i*50 + j;
				cout << fixed << setprecision(2) << linear_out_sw[index] << " ";
			}
			cout << endl;
		}
		cout << "Predict: " << argmax<1000>(linear_out_sw) << " at " << linear_out_sw[argmax<1000>(linear_out_sw)] << endl;
		cout << "---------- SW Classifier above ------------" << endl << endl;
		//		err = 0;
		//		total_err = 0;
		//		max_err = 0;
		//		err_cnt = 0;
		//		total = 0;
		//		for(int i=0; i<1000; i++){
		//			err = abs(linear_out_sw[i] - classifier_py[i]);
		//			if (err > max_err) max_err = err;
		//			if (err > 0.1){
		//				err_cnt += 1;
		//			}
		//			total_err += err;
		//			total += 1;
		//		}
		//		cout << "Total absolute error C vs py: " << total_err << endl;
		//		cout << "Total number of errors C vs py: " << err_cnt << "/" << total << endl;
		//		cout << "Maximum absolute pixel error C vs py: " << max_err << endl << endl;





		////////////////////////////////
		//////// HARDWARE //////////////
		////////////////////////////////
		//		int weight_3x3_ptr = 0;
		//		int weight_1x1_ptr = 0;
		//		int weight_other_ptr = 6; // first six are mean and std
		//
		//		uint32 image_hw[3*224*224] = {0};
		//
		//		for (int j = 0; j < 3; j ++){
		//			for (int row = 0; row < 224; row ++){
		//				for (int col = 0; col < 224; col ++){
		//					int index = j*224*224 + row*224 + col;
		//					for (int b = 0; b < 32; b ++){
		//						if (image[j*32 + b][row][col] > 0) {
		//							image_hw[index][b] = 1;
		//						} else {
		//							image_hw[index][b] = 0;
		//						}
		//					}
		//					//					image_hw_test[j][row][col] = image_hw[index];
		//				}
		//			}
		//		}
		//		cout << "WRITE IMAGE OK" << endl;

		//		for (int i = 0; i < 5456; i ++){
		//			for (int ch = 0; ch < 512; ch ++) {
		//				for (int row = 0; row < 3; row ++){
		//					for (int col = 0; col < 3; col ++){
		//						int index = i*512*3*3 + ch*3*3 + row*3 + col;
		//						float w = conv3x3_all[index];
		//						if (w > 0) {
		//							conv3x3_all_hw[i][row][col][ch] = 1;
		//						} else {
		//							conv3x3_all_hw[i][row][col][ch] = 0;
		//						}
		//					}
		//				}
		//			}
		//		}
		//
		//		for (int i = 0; i < 6132; i ++){
		//			for (int ch = 0; ch < 512; ch ++) {
		//				int index = i*512 + ch;
		//				float w = conv1x1_all[index];
		//				if (w > 0) {
		//					conv1x1_all_hw[i][ch] = 1;
		//				} else {
		//					conv1x1_all_hw[i][ch] = 0;
		//				}
		//			}
		//		}

		uint512 conv3x3_all_from_host[49104];
		uint512 conv1x1_all_from_host[6132];
//		uint512 weights_all_from_host[5460];
		uint512 weights_all_from_host[2730];

		uint32 image_hw_all[NUM_TESTS*3*224*224];


//		std::ifstream ifs_param0("conv3x3_weights_host.bin", std::ios::in | std::ios::binary);
//		ifs_param0.read((char*)(conv3x3_all_from_host), 49104*sizeof(uint512));
//		ifs_param0.close();
//		std::ifstream ifs_param1("conv1x1_weights_host.bin", std::ios::in | std::ios::binary);
//		ifs_param1.read((char*)(conv1x1_all_from_host), 6132*sizeof(uint512));
//		ifs_param1.close();
//		std::ifstream ifs_param2("other_weights_host.bin", std::ios::in | std::ios::binary);
//		ifs_param2.read((char*)(weights_all_from_host), 5460*sizeof(uint512));
//		ifs_param2.close();

		std::ifstream ifs_param3("image_hw_all_host.bin", std::ios::in | std::ios::binary);
		ifs_param3.read((char*)(image_hw_all), NUM_TESTS*3*224*224*sizeof(uint32));
		ifs_param3.close();

		uint32 image_hw_0[3*224*224];
		for (int i = 0; i < 3; i ++){
			for (int row = 0; row < 224; row ++){
				for (int col = 0; col < 224; col ++){
					image_hw_0[i*224*224 + row*224 + col] = image_hw_all[k*3*224*224 + i*224*224 + row*224 + col];
				}
			}
		}


		uint512 DDR_ptr_pack[DDR_BUF_DIM] = {};
		//		float conv13_hw_output[1024][7][7];
		//////////////////////////////////////////
		////////////// THE FUNCTION //////////////
		FracNet(image_hw_0,
				conv3x3_all_hw_new, conv1x1_all_hw_new,
				weights_all_hw,
				//				linear_weight_hw, linear_bias_hw,
				DDR_ptr_pack
				//				avgpool_out_buf,
		);
		////////////// THE FUNCTION //////////////
		//////////////////////////////////////////
		int ch_ptr = ch/32;
//		ch_ptr += 32;
		int ch_off = ch%32;
		int img_width_ceil = ceil(img_width/4.0);
		for (int row = print_row_start; row < print_row_end; row ++) {
			for (int col = ceil(print_col_start/4.0); col < ceil(print_col_end/4.0); col ++) {
				for (int col_i = 0; col_i < 4; col_i ++) {
					if (col*4 + col_i >= print_col_start && col*4 + col_i < print_col_end) {
						uint128 ddr_tmp_0 = 0;
						ddr_tmp_0.range(127, 0) = DDR_ptr_pack[ch_ptr*img_height*img_width_ceil + row*img_width_ceil + col].range(col_i*128+127, col_i*128);
						uint4 tmp = 0;
						tmp.range(3, 0) = ddr_tmp_0.range(ch_off*4+3, ch_off*4);
						cout << fixed << setprecision(3) << tmp*2/15.0 - 1 << "  ";
					}
				}

				//				FIX_DDR tmp = 0;
				//				tmp.range(3, 0) = DDR_ptr_pack[ch_ptr*img_height*img_width + row*img_width + col].range(ch_off*16+3, ch_off*16);
				//				cout << fixed << setprecision(6) << tmp << "  ";
			}
			cout << endl;
		}
		cout << "---------- HW above ------------" << endl << endl;
		err = 0;
		total_err = 0;
		max_err = 0;
		err_cnt = 0;
		total = 0;
		for(int i = 0; i < img_ch; i ++){
			int ch_ptr = i/32;
//			ch_ptr += 32;
			int ch_off = i%32;
			for(int row = 0; row < img_height; row ++){
				for(int col = 0; col < img_width_ceil; col ++){
					for (int col_i = 0; col_i < 4; col_i ++) {
						if (col*4 + col_i >= 0 && col*4 + col_i < img_width) {
							uint128 ddr_tmp_0 = 0;
							ddr_tmp_0.range(127, 0) = DDR_ptr_pack[ch_ptr*img_height*img_width_ceil + row*img_width_ceil + col].range(col_i*128+127, col_i*128);
							uint4 tmp = 0;
							tmp.range(3, 0) = ddr_tmp_0.range(ch_off*4+3, ch_off*4);

							float x = clip(layer_13_pointwise_0_output[i][row][col*4 + col_i]);
							float y = round((x + 1.0)/d)*d - 1.0;

							float tt = (float)tmp*2/15.0 - 1;
							err = abs(tt - y);
							if (err > max_err) max_err = err;
							if (err > 0.000001){
								err_cnt += 1;
								if (i == ch && row >= print_row_start && row < print_row_end && col*4 + col_i >= print_col_start && col*4 + col_i < print_col_end) {
									cout << "(" << i << ", " << row << ", " << col*4 + col_i << ") " << y << ", " << tt << endl;
									local_err_cnt += 1;
								}
							}
							total_err += err;
							total += 1;
						}
					}
				}
			}
		}
		float mean_error = total_err/total;
		cout << endl << "Local number of errors C vs hw: " << local_err_cnt << "/" << print_dim*print_dim << endl;
		cout << "Total number of errors C vs hw: " << err_cnt << "/" << total << endl;
		cout << fixed << setprecision(6) << "Mean error C vs hw: " << mean_error << endl;
		cout << fixed << setprecision(6) << "Total absolute error C vs hw: " << total_err << endl;
		cout << fixed << setprecision(6) << "Maximum absolute pixel error C vs hw: " << max_err << endl<<endl;

		float conv13_hw_output[1024][7][7];

		for(int i=0; i<1024; i++){
			int ch_ptr = i/32;
			int ch_off = i%32;
			for(int row=0; row<7; row++){
				for(int col=0; col<2; col++){
					for (int col_i = 0; col_i < 4; col_i ++) {
						if ((col*4 + col_i) < 7) {
							uint128 ddr_tmp_0 = 0;
							ddr_tmp_0.range(127, 0) = DDR_ptr_pack[ch_ptr*img_height*img_width_ceil + row*img_width_ceil + col].range(col_i*128+127, col_i*128);
							uint4 tmp = 0;
							tmp.range(3, 0) = ddr_tmp_0.range(ch_off*4+3, ch_off*4);
							conv13_hw_output[i][row][col*4 + col_i] = (float)tmp*2/15.0 - 1;
						}
					}
				}
			}
		}

		float avgpool_out_hw[1024];
		float linear_out_hw[1000];
		for (int i = 0; i < 1024; i ++){
			float tmp = 0;
			for (int j = 0; j < 7; j ++){
				for (int k = 0; k < 7; k ++){
					tmp += conv13_hw_output[i][j][k];
				}
			}
			avgpool_out_hw[i] = tmp/(float)49.0;
		}

		for (int i = 0; i < 1000; i ++){
			linear_out_hw[i] = fc_bias[i];
			for (int j = 0; j < 1024; j ++){
				linear_out_hw[i] += avgpool_out_hw[j]*fc_weight[i][j];
			}
		}

		for (int i = 0; i < 20; i ++){
			for (int j = 0; j < 50; j ++){
				int index = i*50 + j;
				cout << linear_out_hw[index] << " ";
			}
			cout << endl;
		}
		cout << "Predict: " << argmax<1000>(linear_out_hw) << endl;
		cout << "---------- HW Classifier above ------------" << endl << endl;

		//		cout << "Average-pooling 7x7 Out:" << endl;
		//		for (int i = 0; i < 32; i ++){
		//			for (int j = 0; j < 32; j ++){
		//				int index = i*32 + j;
		//				cout << avgpool_out_buf[index] << " ";
		//			}
		//			cout << endl;
		//		}
		//		err = 0;
		//		total_err = 0;
		//		max_err = 0;
		//		err_cnt = 0;
		//		total = 0;
		//		for(int i=0; i<1024; i++){
		//			err = abs(avgpool_out_sw[i] - (float)avgpool_out_buf[i]);
		//			if (err > max_err) max_err = err;
		//			if (err > 0.1){
		//				err_cnt += 1;
		//				//				cout << "(" << i <<  ") " << avgpool_out_sw[i] << ", " << avgpool7x7_py[i] << endl;
		//			}
		//			total_err += err;
		//			total += 1;
		//		}
		//		cout << "Total absolute error C vs hw: " << total_err << endl;
		//		cout << "Total number of errors C vs hw: " << err_cnt << "/" << total << endl;
		//		cout << "Maximum absolute pixel error C vs hw: " << max_err << endl << endl;

		//		for (int i = 0; i < 25; i ++){
		//			for (int j = 0; j < 40; j ++){
		//				int index = i*40 + j;
		//				cout << accelerator_output[index] << " ";
		//			}
		//			cout << endl;
		//		}
		//		cout << "Predict: " << argmax<1000>(accelerator_output) << endl;
		//		cout << "---------- SW Classifier above ------------" << endl << endl;
		//		err = 0;
		//		total_err = 0;
		//		max_err = 0;
		//		err_cnt = 0;
		//		total = 0;
		//		for(int i=0; i<1000; i++){
		//			err = abs(linear_out_sw[i] - (float)accelerator_output[i]);
		//			if (err > max_err) max_err = err;
		//			if (err > 0.1){
		//				err_cnt += 1;
		//				//				cout << "(" << i <<  ") " << avgpool_out_sw[i] << ", " << avgpool7x7_py[i] << endl;
		//			}
		//			total_err += err;
		//			total += 1;
		//		}
		//		cout << "Total absolute error C vs hw: " << total_err << endl;
		//		cout << "Total number of errors C vs hw: " << err_cnt << "/" << total << endl;
		//		cout << "Maximum absolute pixel error C vs hw: " << max_err << endl << endl;

	}

	printf("Tested\n");
	return 0;
}

