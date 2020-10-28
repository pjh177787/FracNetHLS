
#include "net_hls.h"
#include <stdio.h>
#include <math.h>
#include <ap_fixed.h>

#define CH_OUT 64
#define CH_OUT_PAR 16
//const static uint4 lut16[] = {0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4};
//
//inline uint6 compute_engine_32(uint32 b, uint32 w)
//{
//#pragma HLS PIPELINE
//    uint32 t = ~(b^w);
//    ap_int<4> add0, add1, add2, add3;
//    ap_int<5> add4, add5;
//
//    add0 = lut16[(int)t.range(3,  0 )] + lut16[(int)t.range(7,  4 )];
//    add1 = lut16[(int)t.range(11, 8 )] + lut16[(int)t.range(15, 12)];
//    add2 = lut16[(int)t.range(19, 16)] + lut16[(int)t.range(23, 20)];
//    add3 = lut16[(int)t.range(27, 24)] + lut16[(int)t.range(31, 28)];
//
//    add4 = add0 + add1;
//    add5 = add2 + add3;
//
//    return add4 + add5;
//}

inline uint6 compute_engine_32(uint32 b, uint32 w)
{
#pragma HLS LATENCY max=1
    uint32 t = ~(b^w);
    uint6 sum;
    for (int i = 0; i < 32; i ++) {
    	sum += t[i];
    }
    return sum;
}

inline uint8 sum_engine(uint6 t0,
        uint6 t1,
        uint6 t2,
        uint6 t3,
        uint6 t4,
        uint6 t5,
        uint6 t6,
        uint6 t7,
        uint6 t8)
{
#pragma HLS PIPELINE
    ap_int<6> add0, add1, add2, add3;
    ap_int<7> add4, add5, add6;

    add0 = t0 + t1;
    add1 = t2 + t3;
    add2 = t4 + t5;
    add3 = t6 + t7;

    add4 = add0 + add1;
    add5 = add2 + add3;

    add6 = add4 + add5;

    return add6 + t8;
}

inline FIX_FM_acc batch_norm(uint8 sum, FIX_WT weight, FIX_WT bias)
{
    return sum*weight + bias;
}

inline FIX_FM_acc relu(FIX_FM_acc norm, FIX_WT shiftx, FIX_WT shifty, FIX_WT weight)
{
    FIX_FM_acc tmp = norm + shiftx;
    if (tmp > 0) {
        return tmp + shifty;
    } else {
        return tmp*weight + shifty;
    }
}

void pgconv32_2bit(uint2 bottom[32][11][11],
                    uint32 weights[32][3][3],
        			FIX_WT thres[32],
                    FIX_WT bn_weights[32],
                    FIX_WT bn_bias[32],
                    FIX_WT relu_shiftx[32],
                    FIX_WT relu_shifty[32],
                    FIX_WT relu_weights[32],
                    FIX_FM_acc top[32][11][11]
)
{
#pragma HLS array_partition variable=bottom dim=1 complete
#pragma HLS array_partition variable=weights dim=1 complete
#pragma HLS array_partition variable=thres dim=1 complete
#pragma HLS array_partition variable=bn_weights dim=1 complete
#pragma HLS array_partition variable=bn_bias dim=1 complete
#pragma HLS array_partition variable=relu_shiftx dim=1 complete
#pragma HLS array_partition variable=relu_shifty dim=1 complete
#pragma HLS array_partition variable=relu_weights dim=1 complete
#pragma HLS array_partition variable=top dim=1 complete

	for (int row = 2; row < 9; row ++) {
		for (int col = 2; col < 9; col ++) {
#pragma HLS
			uint32 bottom_buf_1[3][3];
			uint32 bottom_buf_0[3][3];
			for (int cii = 0; cii < 32; cii ++) {
#pragma HLS UNROLL
				bottom_buf_1[0][0][cii] = bottom[cii][row-1][col-1][1];
                bottom_buf_1[0][1][cii] = bottom[cii][row-1][col  ][1];
                bottom_buf_1[0][2][cii] = bottom[cii][row-1][col+1][1];
                bottom_buf_1[1][0][cii] = bottom[cii][row  ][col-1][1];
                bottom_buf_1[1][1][cii] = bottom[cii][row  ][col  ][1];
                bottom_buf_1[1][2][cii] = bottom[cii][row  ][col+1][1];
                bottom_buf_1[2][0][cii] = bottom[cii][row+1][col-1][1];
                bottom_buf_1[2][1][cii] = bottom[cii][row+1][col  ][1];
                bottom_buf_1[2][2][cii] = bottom[cii][row+1][col+1][1];
				bottom_buf_0[0][0][cii] = bottom[cii][row-1][col-1][0];
                bottom_buf_0[0][1][cii] = bottom[cii][row-1][col  ][0];
                bottom_buf_0[0][2][cii] = bottom[cii][row-1][col+1][0];
                bottom_buf_0[1][0][cii] = bottom[cii][row  ][col-1][0];
                bottom_buf_0[1][1][cii] = bottom[cii][row  ][col  ][0];
                bottom_buf_0[1][2][cii] = bottom[cii][row  ][col+1][0];
                bottom_buf_0[2][0][cii] = bottom[cii][row+1][col-1][0];
                bottom_buf_0[2][1][cii] = bottom[cii][row+1][col  ][0];
                bottom_buf_0[2][2][cii] = bottom[cii][row+1][col+1][0];
			}
			for (int coo = 0; coo < 32; coo ++) {
#pragma HLS UNROLL
				uint6 tmp0 = compute_engine_32(bottom_buf_1[row-1][col-1], weights[coo][0][0]);
				uint6 tmp1 = compute_engine_32(bottom_buf_1[row-1][col  ], weights[coo][0][1]);
				uint6 tmp2 = compute_engine_32(bottom_buf_1[row-1][col+1], weights[coo][0][2]);
				uint6 tmp3 = compute_engine_32(bottom_buf_1[row  ][col-1], weights[coo][1][0]);
				uint6 tmp4 = compute_engine_32(bottom_buf_1[row  ][col  ], weights[coo][1][1]);
				uint6 tmp5 = compute_engine_32(bottom_buf_1[row  ][col+1], weights[coo][1][2]);
				uint6 tmp6 = compute_engine_32(bottom_buf_1[row+1][col-1], weights[coo][2][0]);
				uint6 tmp7 = compute_engine_32(bottom_buf_1[row+1][col  ], weights[coo][2][1]);
				uint6 tmp8 = compute_engine_32(bottom_buf_1[row+1][col+1], weights[coo][2][2]);
				uint8 sum = sum_engine(tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8);

				uint6 tmp00 = compute_engine_32(bottom_buf_0[row-1][col-1], weights[coo][0][0]);
				uint6 tmp01 = compute_engine_32(bottom_buf_0[row-1][col  ], weights[coo][0][1]);
				uint6 tmp02 = compute_engine_32(bottom_buf_0[row-1][col+1], weights[coo][0][2]);
				uint6 tmp03 = compute_engine_32(bottom_buf_0[row  ][col-1], weights[coo][1][0]);
				uint6 tmp04 = compute_engine_32(bottom_buf_0[row  ][col  ], weights[coo][1][1]);
				uint6 tmp05 = compute_engine_32(bottom_buf_0[row  ][col+1], weights[coo][1][2]);
				uint6 tmp06 = compute_engine_32(bottom_buf_0[row+1][col-1], weights[coo][2][0]);
				uint6 tmp07 = compute_engine_32(bottom_buf_0[row+1][col  ], weights[coo][2][1]);
				uint6 tmp08 = compute_engine_32(bottom_buf_0[row+1][col+1], weights[coo][2][2]);
				uint8 sum0 = sum_engine(tmp00, tmp01, tmp02, tmp03, tmp04, tmp05, tmp06, tmp07, tmp08);

				if (sum > thres[coo]) {
					sum += sum0;
				}
				FIX_FM_acc norm = batch_norm(sum, bn_weights[coo], bn_bias[coo]);
				top[coo][row][col] = relu(norm, relu_shiftx[coo], relu_shifty[coo], relu_weights[coo]);
			}
		}
	}
}

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
)
{
// #pragma HLS array_partition variable=bottom dim=1 complete
// #pragma HLS array_partition variable=weights dim=1 complete
// #pragma HLS array_partition variable=thres dim=1 complete
// #pragma HLS array_partition variable=bn_weights dim=1 complete
// #pragma HLS array_partition variable=bn_bias dim=1 complete
// #pragma HLS array_partition variable=relu_shiftx dim=1 complete
// #pragma HLS array_partition variable=relu_shifty dim=1 complete
// #pragma HLS array_partition variable=relu_weights dim=1 complete
// #pragma HLS array_partition variable=top dim=1 complete

	int s = 1;
	if (stride == 1) {
		s = 2;
	}
	for (int row = 2; row < 9; row +=s) {
		for (int col = 2; col < 9; col +=s) {
#pragma HLS PIPELINE II=5
			uint32 bottom_buf_0[3][3];
			for (int cii = 0; cii < 32; cii ++) {
#pragma HLS UNROLL
				bottom_buf_0[0][0][cii] = bottom[cii][row-1][col-1];
                bottom_buf_0[0][1][cii] = bottom[cii][row-1][col  ];
                bottom_buf_0[0][2][cii] = bottom[cii][row-1][col+1];
                bottom_buf_0[1][0][cii] = bottom[cii][row  ][col-1];
                bottom_buf_0[1][1][cii] = bottom[cii][row  ][col  ];
                bottom_buf_0[1][2][cii] = bottom[cii][row  ][col+1];
                bottom_buf_0[2][0][cii] = bottom[cii][row+1][col-1];
                bottom_buf_0[2][1][cii] = bottom[cii][row+1][col  ];
                bottom_buf_0[2][2][cii] = bottom[cii][row+1][col+1];
			}
			for (int coo = 0; coo < 32; coo ++) {
#pragma HLS UNROLL
				uint6 tmp0 = compute_engine_32(bottom_buf_0[0][0], weights[coo][0][0]);
				uint6 tmp1 = compute_engine_32(bottom_buf_0[0][1], weights[coo][0][1]);
				uint6 tmp2 = compute_engine_32(bottom_buf_0[0][2], weights[coo][0][2]);
				uint6 tmp3 = compute_engine_32(bottom_buf_0[1][0], weights[coo][1][0]);
				uint6 tmp4 = compute_engine_32(bottom_buf_0[1][1], weights[coo][1][1]);
				uint6 tmp5 = compute_engine_32(bottom_buf_0[1][2], weights[coo][1][2]);
				uint6 tmp6 = compute_engine_32(bottom_buf_0[2][0], weights[coo][2][0]);
				uint6 tmp7 = compute_engine_32(bottom_buf_0[2][1], weights[coo][2][1]);
				uint6 tmp8 = compute_engine_32(bottom_buf_0[2][2], weights[coo][2][2]);
				uint8 sum0 = sum_engine(tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8);

				FIX_FM_acc norm = batch_norm(sum0, bn_weights[coo], bn_bias[coo]);
				top[coo][row][col] = relu(norm, relu_shiftx[coo], relu_shifty[coo], relu_weights[coo]);
			}
		}
	}
}

void pgconv32_1x1_2bit(uint2 bottom[32][11][11],
                    uint32 weights[32],
        			FIX_WT thres[32],
                    FIX_WT bn_weights[32],
                    FIX_WT bn_bias[32],
                    FIX_WT relu_shiftx[32],
                    FIX_WT relu_shifty[32],
                    FIX_WT relu_weights[32],
                    FIX_FM_acc top[32][11][11]
)
{
#pragma HLS array_partition variable=bottom dim=1 complete
#pragma HLS array_partition variable=weights dim=1 complete
#pragma HLS array_partition variable=thres dim=1 complete
#pragma HLS array_partition variable=bn_weights dim=1 complete
#pragma HLS array_partition variable=bn_bias dim=1 complete
#pragma HLS array_partition variable=relu_shiftx dim=1 complete
#pragma HLS array_partition variable=relu_shifty dim=1 complete
#pragma HLS array_partition variable=relu_weights dim=1 complete
#pragma HLS array_partition variable=top dim=1 complete

	for (int row = 2; row < 9; row ++) {
		for (int col = 2; col < 9; col ++) {
#pragma HLS PIPELINE II=5
			uint32 bottom_buf_1;
			uint32 bottom_buf_0;
			for (int cii = 0; cii < 32; cii ++) {
#pragma HLS UNROLL
				bottom_buf_1[cii] = bottom[cii][row][col][1];
				bottom_buf_0[cii] = bottom[cii][row][col][0];
			}
			for (int coo = 0; coo < 32; coo ++) {
#pragma HLS UNROLL
				uint6 tmp1 = compute_engine_32(bottom_buf_1, weights[coo]);
				uint6 tmp0 = compute_engine_32(bottom_buf_0, weights[coo]);
				uint8 sum = tmp1;
				if (tmp1 > thres[coo]) {
					sum += tmp0;
				}
				FIX_FM_acc norm = batch_norm(sum, bn_weights[coo], bn_bias[coo]);
				top[coo][row][col] = relu(norm, relu_shiftx[coo], relu_shifty[coo], relu_weights[coo]);
			}
		}
	}
}

void pgconv32_1x1_1bit(uint1 bottom[32][11][11],
                    uint32 weights[32],
                    FIX_WT thres[32],
                    FIX_WT bn_weights[32],
                    FIX_WT bn_bias[32],
                    FIX_WT relu_shiftx[32],
                    FIX_WT relu_shifty[32],
                    FIX_WT relu_weights[32],
                    FIX_FM_acc top[32][11][11]
)
{
#pragma HLS array_partition variable=bottom dim=1 complete
#pragma HLS array_partition variable=weights dim=1 complete
#pragma HLS array_partition variable=thres dim=1 complete
#pragma HLS array_partition variable=bn_weights dim=1 complete
#pragma HLS array_partition variable=bn_bias dim=1 complete
#pragma HLS array_partition variable=relu_shiftx dim=1 complete
#pragma HLS array_partition variable=relu_shifty dim=1 complete
#pragma HLS array_partition variable=relu_weights dim=1 complete
#pragma HLS array_partition variable=top dim=1 complete

    for (int row = 2; row < 9; row ++) {
        for (int col = 2; col < 9; col ++) {
#pragma HLS PIPELINE II=5
            uint32 bottom_buf_1;
            for (int cii = 0; cii < 32; cii ++) {
#pragma HLS UNROLL
                bottom_buf_1[cii] = bottom[cii][row][col];
            }
            for (int coo = 0; coo < 32; coo ++) {
#pragma HLS UNROLL
                uint6 tmp1 = compute_engine_32(bottom_buf_1, weights[coo]);
                uint8 sum = tmp1;
                FIX_FM_acc norm = batch_norm(sum, bn_weights[coo], bn_bias[coo]);
                top[coo][row][col] = relu(norm, relu_shiftx[coo], relu_shifty[coo], relu_weights[coo]);
            }
        }
    }
}


