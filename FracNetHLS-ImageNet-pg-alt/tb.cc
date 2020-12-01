
//#include "net_hls.h"
#include "hls_stream.h"
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <math.h>
#include <ap_fixed.h>
//#include "weights_dummy.h"

#define NUM_TESTS 10

unsigned char images[NUM_TESTS*96*224*224];
float conv3x3_all[25141248];
float conv1x1_all[3139584];
float other_weights[133014];

float layer_0_0_weight[32][96][3][3];
float layer_0_1_weight[32];
float layer_0_1_bias[32];

float layer_1_pointwise_0_weight[64][32];

float out[1000];

void read_all_images()
{
	std::ifstream ifs_param0("conv1_input.bin", std::ios::in | std::ios::binary);
	ifs_param0.read((char*)(images), NUM_TESTS*96*224*224*sizeof(unsigned char));
	ifs_param0.close();
}

void get_image(unsigned char *images, unsigned int idx, float image[96][32][32])
{
	unsigned int offset = idx*96*32*32;
	for (int c = 0; c < 96; c ++) {
		for (int row = 0; row < 32; row ++) {
			for (int col = 0; col < 32; col ++) {
				image[c][row][col] = images[offset + c*32*32 + row*32 + col];
			}
		}
	}
}

void load_weights()
{
	std::ifstream ifs_param0("conv3x3_weights.bin", std::ios::in | std::ios::binary);
	ifs_param0.read((char*)(conv3x3_all), 25141248*sizeof(float));
	ifs_param0.close();
	std::ifstream ifs_param1("conv1x1_weights.bin", std::ios::in | std::ios::binary);
	ifs_param1.read((char*)(conv1x1_all), 3139584*sizeof(float));
	ifs_param1.close();
	std::ifstream ifs_param2("other_weights.bin", std::ios::in | std::ios::binary);
	ifs_param2.read((char*)(other_weights), 133014*sizeof(float));
	ifs_param2.close();
}

template <int C_OUT, int C_IN>
void get_weight_3x3(int ptr, float weight_3x3[C_OUT][C_IN][3][3])
{
	for (int co = 0; co < C_OUT; co ++) {
		for (int ci = 0; ci < C_IN; ci ++) {
			for (int row = 0; row < 3; row ++) {
				for (int col = 0; col < 3; col ++) {
					int index = co*C_IN*3*3 + ci*3*3 + row*3 + col;
					weight_3x3[co][ci][row][col] = conv3x3_all[ptr + index];
				}
			}
		}
	}
}

template <int C_OUT, int C_IN>
void get_weight_1x1(int ptr, float weight_1x1[C_OUT][C_IN])
{
	for (int co = 0; co < C_OUT; co ++) {
		for (int ci = 0; ci < C_IN; ci ++) {
			int index = co*C_IN + ci;
			weight_1x1[co][ci] = conv1x1_all[ptr + index];
		}
	}
}

template <int CH>
void get_weight_other(int ptr, float weight_other[CH])
{
	for (int ch = 0; ch < CH; ch ++) {
		weight_other[ch] = other_weights[ptr + ch];
	}
}

int main()
{
	read_all_images();
	load_weights();
	for (int k = 0; k < NUM_TESTS; k ++) {
		float image[96][32][32] = {0};
		int weight_3x3_ptr = 0;
		int weight_1x1_ptr = 0;
		int weight_other_ptr = 6; // first six are mean and std

		get_image(images, k, image);
		get_weight_3x3<32, 96>(weight_3x3_ptr, layer_0_0_weight);
		get_weight_1x1<64, 32>(weight_1x1_ptr, layer_1_pointwise_0_weight);
		get_weight_other<32>(weight_other_ptr, layer_0_1_weight);
		weight_other_ptr += 32;
		get_weight_other<32>(weight_other_ptr, layer_0_1_bias);
	}

	std::cout << out;
	printf("Tested\n");
	return 0;
}
