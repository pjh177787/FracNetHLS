
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



uint512 conv3x3_all_hw[5456][3][3];
uint512 conv1x1_all_hw[6132];
uint512 weights_all_hw[8313];
int image_hw_test[3][224][224];

float DDR_ptr[2048][226][225];

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
    for (int c = 0; c < CHANNEL; c ++) {
        for (int row = 0; row < HEIGHT; row ++) {
            for (int col = 0; col < WIDTH; col ++) {
                float x = input[c][row][col];
                float o = -1.0;
                if (x > 2.0/3) {
                    o = 1.0;
                } else if (x <= 2.0/3 && x >= 0) {
                    o = 1.0/3;
                } else if (x < 0 && x >= -2.0/3) {
                    o = -1.0/3;
                } else {
                    o = -1.0;
                }
                output[c][row][col] = o;
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
                if (x >= 0) {
                    o = 1.0; //o = 1.0/3;
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
                float s = sigmoid(5*t);
                if (s > 0.5) {
                    output[c][row][col] = full_msb[c][row][col];
                } else {
                    output[c][row][col] = out_msb[c][row][col]*2.0/3.0;
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
                float s = sigmoid(5*t);
                if (s > 0.5) {
                    output[c][row][col] = full_msb[c][row][col];
                } else {
                    output[c][row][col] = out_msb[c][row][col]*2.0/3.0;
                }
            }
        }
    }
}

template <int CHANNEL, int HEIGHT, int WIDTH>
void shortcut(float input_a[CHANNEL][HEIGHT][WIDTH],
        float input_b[CHANNEL][HEIGHT][WIDTH],
        float output[CHANNEL][HEIGHT][WIDTH])
{
    for (int c = 0; c < CHANNEL; c ++) {
        for (int row = 0; row < HEIGHT; row ++) {
            for (int col = 0; col < WIDTH; col ++) {
                float x = input_a[c][row][col];
                float y = input_b[c][row][col];
                output[c][row][col] = x + y;
            }
        }
    }
}

template <int CHANNEL_IN, int CHANNEL_OUT, int HEIGHT_OUT, int WIDTH_OUT>
void concat(float input[CHANNEL_IN][HEIGHT_OUT][WIDTH_OUT],
            float output[CHANNEL_OUT][HEIGHT_OUT][WIDTH_OUT])
{
    assert( (CHANNEL_IN*2 == CHANNEL_OUT) && "num of output channels should be twice the num of input channels in concat()" );
    for (int c = 0; c < CHANNEL_IN; c ++) {
        for (int row = 0; row < HEIGHT_OUT; row ++) {
            for (int col = 0; col < WIDTH_OUT; col ++) {
                float m = input[c][row][col];
                output[c][row][col] = m;
                output[c+CHANNEL_IN][row][col] = m;
            }
        }
    }
}

template <int CHANNEL_OUT, int HEIGHT_IN, int WIDTH_IN, int HEIGHT_OUT, int WIDTH_OUT>
void avgpool2x2(float input[CHANNEL_OUT][HEIGHT_IN][WIDTH_IN],
                float output[CHANNEL_OUT][HEIGHT_OUT][WIDTH_OUT])
{
    assert( (HEIGHT_OUT*2 == HEIGHT_IN) && (WIDTH_OUT*2 == WIDTH_IN) && "output spatial dimension should be twice the input spatial dimension in avgpool2x2()" );
    for (int c = 0; c < CHANNEL_OUT; c ++) {
        for (int row = 0; row < HEIGHT_OUT; row ++) {
            for (int col = 0; col < WIDTH_OUT; col ++) {
                float m = 0;
                m += input[c][row*2 + 0][col*2 + 0];
                m += input[c][row*2 + 0][col*2 + 1];
                m += input[c][row*2 + 1][col*2 + 0];
                m += input[c][row*2 + 1][col*2 + 1];
                m = m/4.0;
                output[c][row][col] = m;
            }
        }
    }
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
//    bn<64, 56, 56>(layer_2_conv3x3_0_output, layer_2_conv3x3_1_weight, layer_2_conv3x3_1_bias, layer_2_conv3x3_0_output);
//    rprelu<64, 56, 56>(
//        layer_2_conv3x3_0_output, layer_2_rprelu1_shift_x_bias,
//        layer_2_rprelu1_shift_y_bias, layer_2_rprelu1_prelu_weight,
//        layer_2_conv3x3_0_output
//    );
//    avgpool2x2<64, 112, 112, 56, 56>(layer_1_pointwise_0_output, layer_1_pointwise_0_output_avgpool);
//    shortcut<64, 56, 56>(layer_2_conv3x3_0_output, layer_1_pointwise_0_output_avgpool, layer_2_conv3x3_0_output);
//    bn<64, 56, 56>(layer_2_conv3x3_0_output, layer_2_shiftbn1_weight, layer_2_shiftbn1_bias, layer_2_conv3x3_0_output);

    // quant_sign<64, 56, 56>(layer_2_conv3x3_0_output, layer_2_conv3x3_0_output_quant);
    // pgconv1x1<64, 128, 56, 56>(
    //     layer_2_conv3x3_0_output_quant, layer_2_pointwise_0_weight,
    //     layer_2_pointwise_0_threshold, layer_2_pointwise_0_output
    // );
    // bn<128, 56, 56>(
    //     layer_2_pointwise_0_output, layer_2_pointwise_1_weight,
    //     layer_2_pointwise_1_bias, layer_2_pointwise_0_output
    // );
    // rprelu<128, 56, 56>(
    //     layer_2_pointwise_0_output, layer_2_rprelu2_shift_x_bias,
    //     layer_2_rprelu2_shift_y_bias, layer_2_rprelu2_prelu_weight,
    //     layer_2_pointwise_0_output
    // );
    // concat<64, 128, 56, 56>(layer_2_conv3x3_0_output, layer_2_conv3x3_0_output_concat);
    // shortcut<128, 56, 56>(layer_2_pointwise_0_output, layer_2_conv3x3_0_output_concat, layer_2_pointwise_0_output);
    // bn<128, 56, 56>(layer_2_pointwise_0_output, layer_2_shiftbn2_weight, layer_2_shiftbn2_bias, layer_2_pointwise_0_output);

}


int main()
{
	read_all_images();
	load_weights();

	for (int k = 0; k < NUM_TESTS; k ++) {



		unsigned char image[96][224][224] = {0};
		get_image(images, k, image);


		cout << "image " << k << endl;

		////////////////////////////////
		//////// SOFTWARE //////////////
		////////////////////////////////
		load_individual_weight();
		cout << "Weights loading success " << endl;
		net_sw(image);

		int ch = 0;
		for (int row = 0; row < 32; row ++) {
			for (int col = 0; col < 32; col ++) {
				cout << layer_2_conv3x3_0_output[ch][row][col] << "  ";
			}
			cout << endl;
		}
		cout << "---------- SW above ------------" << endl;


		////////////////////////////////
		//////// HARDWARE //////////////
		////////////////////////////////
		int weight_3x3_ptr = 0;
		int weight_1x1_ptr = 0;
		int weight_other_ptr = 6; // first six are mean and std
#ifdef LAYER_TEST
		float accelerator_output[64*114*114];
#else
		float accelerator_output[1000];
#endif

		uint32 image_hw[3*224*224] = {0};

		for (int j = 0; j < 3; j ++){
			for (int row = 0; row < 224; row ++){
				for (int col = 0; col < 224; col ++){
					int index = j*224*224 + row*224 + col;
					for (int b = 0; b < 32; b ++){
						if (image[j*32 + b][row][col] > 0) {
							image_hw[index][b] = 1;
						} else {
							image_hw[index][b] = 0;
						}
					}
					image_hw_test[j][row][col] = image_hw[index];
				}
			}
		}
		//		uint512 conv3x3_all_hw[5456][3][3];
		//		uint512 conv1x1_all_hw[6132];
		//		uint512 weights_all_hw[260];

		for (int i = 0; i < 5456; i ++){
			for (int ch = 0; ch < 512; ch ++) {
				for (int row = 0; row < 3; row ++){
					for (int col = 0; col < 3; col ++){
						int index = i*512*3*3 + ch*3*3 + row*3 + col;
						float w = conv3x3_all[index];
						if (w > 0) {
							conv3x3_all_hw[i][row][col][ch] = 1;
						} else {
							conv3x3_all_hw[i][row][col][ch] = 0;
						}
					}
				}
			}
		}

		for (int i = 0; i < 6132; i ++){
			for (int ch = 0; ch < 512; ch ++) {
				int index = i*512 + ch;
				float w = conv1x1_all[index];
				if (w > 0) {
					conv1x1_all_hw[i][ch] = 1;
				} else {
					conv1x1_all_hw[i][ch] = 0;
				}
			}
		}
/////////////////////////////////////////////////////////////////////////////
////////////// THIS IS FOR 32 BIT WEIGHTS !!! DONT DELETE //////////////////
///////////////////////////////////////////////////////////////////////////
//		for (int i = 0; i < 8314; i ++){
//			for (int j = 0; j < 32; j ++){
//				// we use 16 bits
//				FIX_16_4 weight = other_weights[i*32 + j + 6];
//				//				cout << weight << endl;
//				weights_all_hw[i].range(j*16 + 15, j*16) = weight.range(15, 0);
//				//				cout << weights_all_hw[i] << endl;
//			}
//		}
/////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

		for (int i = 0; i < 8314; i ++){
			for (int j = 0; j < 16; j ++){
				// we use 16 bits
				FIX_WT_TEST weight = other_weights[i*16 + j + 6];
				//				cout << weight << endl;
				weights_all_hw[i].range(j*32 + 31, j*32) = weight.range(31, 0);
				//				cout << weights_all_hw[i] << endl;
			}
		}

		FracNet(image_hw, conv3x3_all_hw, conv1x1_all_hw, weights_all_hw, DDR_ptr, accelerator_output);

		for (int row = 0; row < 32; row ++) {
			for (int col = 0; col < 32; col ++) {
				cout << DDR_ptr[ch][row][col] << "  ";
			}
			cout << endl;
		}

		float err = 0;
		float total_err = 0;
		float max_err = 0;
		int err_cnt = 0;
		int total = 0;
		for(int i=0; i<64; i++){
			for(int j=0; j<56; j++){
				for(int k=0; k<56; k++){
					err = abs(DDR_ptr[i][j][k] - layer_2_conv3x3_0_output[i][j][k]);
					if (err > max_err) max_err = err;
					if (err > 0.001){
						err_cnt += 1;
						//						cout << "(" << i << ", " << j << ", " << k << ") " << DDR_ptr[i][j][k] << ", " << layer_1_pointwise_0_output[i][j][k] << endl;
					}
					total_err += err;
					total += 1;
				}
			}
		}
		cout << endl << "Total absolute error: " << total_err << endl;
		cout << "Total number of errors: " << err_cnt << "/" << total << endl;
		cout << "Maximum absolute pixel error: " << max_err << endl;

		//		get_weight_3x3<32, 96>(weight_3x3_ptr, layer_0_0_weight);
		//		get_weight_1x1<64, 32>(weight_1x1_ptr, layer_1_pointwise_0_weight);
		//		get_weight_other<32>(weight_other_ptr, layer_0_1_weight);
		//		weight_other_ptr += 32;
		//		get_weight_other<32>(weight_other_ptr, layer_0_1_bias);
	}

	printf("Tested\n");
	return 0;
}
