#ifndef BNN_H
#define BNN_H

#include "typedefs.h"
//#include "dimension_def.h"

#define WEIGHTS_ALL_DIM 5460
#define DDR_BUF_DIM 203400
//#define DDR_BUF_DIM 16384

void FracNet(
		uint32 image_thermo[3*224*224],

		uint512 conv_weight_3x3_all_new[49104],
		uint512 conv_weight_1x1_all_new[6132],

		uint512 weights_all[WEIGHTS_ALL_DIM],
//		uint512 linear_weight[1000][32],
//		uint512 linear_bias[32],

		//		float DDR_buf[2048][226][225],
		uint512 DDR_buf_pack[DDR_BUF_DIM]

		//		FIX_32_12 avgpool_out_buf[1024],

//		float output[1000]
);

#endif
