#ifndef BNN_H
#define BNN_H

#include "typedefs.h"


void FracNet(
		uint32 image_thermo[3*224*224],

		uint512 conv_weight_3x3_all[174592][3][3],

		uint512 layer_2_conv3x3_0_weight_hw[8][3][3],
		uint512 layer_2_pointwise_0_weight_hw[16],

		uint512 conv_weight_1x1_all[196224],
		uint512 weights_all[8313],

		float DDR_buf[1024][226][225],

		float *output
);

#endif
