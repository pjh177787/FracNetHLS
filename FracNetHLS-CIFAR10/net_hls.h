#include <cstddef>
#include <stdio.h>
#include <math.h>
#include <ap_int.h>
#include <ap_fixed.h>
#include "hls_stream.h"
#include <iostream>
#include <fstream>
#include <cmath>



//#define CSIM_DEBUG
//#define CSIM_CMP_OUTPUT


// for .range(Hi, Lo)
#define FM_RG			8
#define FM_ACC_RG		11
#define WT_RG			10


#ifdef CSIM_DEBUG
	typedef float FIX_32_4;	//fix point
	typedef float FIX_32_25;	//fix point
	typedef float FIX_FM;	//fix point for feature map
	typedef float FIX_FM_acc;	//fix point for feature map
	typedef float FIX_FM_last;
	typedef float FIX_WT;	//fix point for weights
	typedef float FIX_32_16;
	typedef float FIX_32_10;
	typedef float FIX_32_12;
	typedef float FIX_16_6;
	typedef float FIX_16_5;
	typedef float FIX_16_4;
	typedef float FIX_16_10;

	typedef float uint8;
	typedef float uint16;
	typedef float uint128;
	typedef float uint256;
	typedef float uint512;

#else

	typedef ap_fixed<9,  3, AP_RND, AP_SAT> FIX_FM;	//fix point for feature map
	typedef ap_fixed<14, 6, AP_RND, AP_SAT> FIX_FM_acc;	//fix point for accumulation
	typedef ap_fixed<11, 4, AP_RND, AP_SAT> FIX_WT;	//fix point for weights
	typedef ap_fixed<8, 8, AP_RND, AP_SAT> FIX_INT; //signed int
	typedef ap_fixed<16, 3, AP_RND, AP_SAT> FIX_OUT;

	typedef ap_fixed<16, 8, AP_RND, AP_SAT> FIX_16_8;
	typedef ap_fixed<16, 6, AP_RND, AP_SAT> FIX_16_6;
	typedef ap_fixed<16, 5, AP_RND, AP_SAT> FIX_16_5;
	typedef ap_fixed<16, 4, AP_RND, AP_SAT> FIX_16_4;
	typedef ap_fixed<16, 3, AP_RND, AP_SAT> FIX_16_3;
	typedef ap_fixed<16, 10, AP_RND, AP_SAT> FIX_16_10;
	typedef ap_fixed<32,16, AP_RND, AP_SAT> FIX_32_16;
	typedef ap_fixed<32,12, AP_RND, AP_SAT> FIX_32_12;
	typedef ap_fixed<32,10, AP_RND, AP_SAT> FIX_32_10;
	typedef ap_fixed<32, 4, AP_RND, AP_SAT> FIX_32_4;
	typedef ap_fixed<32, 7, AP_RND, AP_SAT> FIX_32_7;
	typedef ap_fixed<32,25, AP_RND, AP_SAT> FIX_32_25;

	typedef ap_uint<1> uint1;
	typedef ap_uint<2> uint2;
	typedef ap_uint<4> uint4;
	typedef ap_uint<6> uint6;
	typedef ap_uint<8> uint8;
	typedef ap_uint<16> uint16;
	typedef ap_uint<32> uint32;
	typedef ap_uint<256> uint256;
	typedef ap_uint<512> uint512;


#endif


	void ReActNet(  uint16 image_thermo[6*224*224],

	                uint512 conv_weight_1x1_all[1000],
	                uint512 conv_weight_3x3_all[1000][3][3],
	                uint256 thres_all[500],
	                uint256 bn_weight_all[500],
	                uint256 bn_bias_all[500],
	                uint256 relu_shiftx_all[500],
	                uint256 relu_shifty_all[500],
	                uint256 relu_weight_all[500],

	                uint512* DDR_buff_merge,

	                float out[1000]
	);
	void pgconv32_1bit(uint1 bottom[32][11][11],
	                    uint32 weights[32][3][3],
	        			FIX_WT thres[32],
	                    FIX_WT bn_weights[32],
	                    FIX_WT bn_bias[32],
	                    FIX_WT relu_shiftx[32],
	                    FIX_WT relu_shifty[32],
	                    FIX_WT relu_weights[32],
	                    FIX_FM_acc top[32][11][11],
						uint1 stride
	);
//void pgconv32_1bit(uint1 bottom[32][32][32],
//                    uint32 weights[32][3][3],
//                    FIX_WT thres[32],
//                    FIX_WT bn_weights[32],
//                    FIX_WT bn_bias[32],
//                    FIX_WT relu_shiftx[32],
//                    FIX_WT relu_shifty[32],
//                    FIX_WT relu_weights[32],
//                    FIX_FM_acc top[32][32][32]
//);

void pgconv32_2bit(uint2 bottom[32][32][32],
                    uint32 weights[32][3][3],
        			FIX_WT thres[32],
                    FIX_WT bn_weights[32],
                    FIX_WT bn_bias[32],
                    FIX_WT relu_shiftx[32],
                    FIX_WT relu_shifty[32],
                    FIX_WT relu_weights[32],
                    FIX_FM_acc top[32][32][32]
);

void pgconv32_1x1_1bit(uint1 bottom[32][11][11],
                    uint32 weights[32],
                    FIX_WT thres[32],
                    FIX_WT bn_weights[32],
                    FIX_WT bn_bias[32],
                    FIX_WT relu_shiftx[32],
                    FIX_WT relu_shifty[32],
                    FIX_WT relu_weights[32],
                    FIX_FM_acc top[32][11][11]
);
//void pgconv32_1x1_1bit(uint1 bottom[32][32][32],
//                    uint32 weights[32],
//                    FIX_WT thres[32],
//                    FIX_WT bn_weights[32],
//                    FIX_WT bn_bias[32],
//                    FIX_WT relu_shiftx[32],
//                    FIX_WT relu_shifty[32],
//                    FIX_WT relu_weights[32],
//                    FIX_FM_acc top[32][32][32]
//);

//void pgconv32_1x1_2bit(uint2 bottom[32][32][32],
//                    uint32 weights[32],
//        			FIX_WT thres[32],
//                    FIX_WT bn_weights[32],
//                    FIX_WT bn_bias[32],
//                    FIX_WT relu_shiftx[32],
//                    FIX_WT relu_shifty[32],
//                    FIX_WT relu_weights[32],
//                    FIX_FM_acc top[32][32][32]
//);

void biconv16(uint16 bottom[11][11],
			  uint16 weights[32][3][3],
              FIX_FM_acc top[32][11][11]
);

void matmul(FIX_FM_acc bottom[64],
            FIX_WT weights[10][64],
            FIX_WT bias[10],
            float top[10]
);

