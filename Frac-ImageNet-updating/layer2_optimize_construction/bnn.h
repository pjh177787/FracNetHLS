#ifndef BNN_H
#define BNN_H

#include "typedefs.h"


void FracNet(
		uint32 image_thermo[3*224*224],

		uint512 conv_weight_3x3_all_new[5456][3][3],
		uint512 conv_weight_1x1_all[6132],
		uint512 weights_all[69525],
		uint512 linear_weight[1000][32],
		uint512 linear_bias[32],

		uint512 DDR_buf[64][226][225],
//		FIX_32_12 avgpool_out_buf[1024],

		float *output
);

#endif
