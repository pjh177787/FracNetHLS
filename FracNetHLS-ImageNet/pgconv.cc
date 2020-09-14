#include "hls.h"
#include <stdio.h>
#include <math.h>
#include <ap_fixed.h>

const static uint4 lut16[] = {0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4};
const static uint32 m1("0x55555555", 16);
const static uint32 m2("0x33333333", 16);
const static uint32 m4("0x0f0f0f0f", 16);

inline uint6 compute_engine_64(uint64 b, uint64 w)
{
#pragma HLS PIPELINE
    uint64 x = ~(b^w);
    x -= (x >> 1) & m1;             //put count of each 2 bits into those 2 bits
    x = (x & m2) + ((x >> 2) & m2); //put count of each 4 bits into those 4 bits
    x = (x + (x >> 4)) & m4;        //put count of each 8 bits into those 8 bits
    x += x >>  8;  //put count of each 16 bits into their lowest 8 bits
    x += x >> 16;  //put count of each 32 bits into their lowest 8 bits
    x += x >> 32;  //put count of each 64 bits into their lowest 8 bits
    return x & 0x7f;
}

// inline uint6 compute_engine_64(uint64 b, uint64 w)
// {
// #pragma HLS PIPELINE
//     uint64 t = ~(b^w);
//     ap_int<4> add0, add1, add2, add3, add4, add5, add6, add7;
//     ap_int<5> add8, add9, adda, addb;
//     ap_int<6> addc, addd;
//
//     add0 = lut16[(int)t.range(3,  0 )] + lut16[(int)t.range(7,  4 )];
//     add1 = lut16[(int)t.range(11, 8 )] + lut16[(int)t.range(15, 12)];
//     add2 = lut16[(int)t.range(19, 16)] + lut16[(int)t.range(23, 20)];
//     add3 = lut16[(int)t.range(27, 24)] + lut16[(int)t.range(31, 28)];
//     add4 = lut16[(int)t.range(35, 32)] + lut16[(int)t.range(39, 36)];
//     add5 = lut16[(int)t.range(43, 40)] + lut16[(int)t.range(47, 44)];
//     add6 = lut16[(int)t.range(51, 48)] + lut16[(int)t.range(55, 52)];
//     add7 = lut16[(int)t.range(59, 56)] + lut16[(int)t.range(63, 60)];
//
//     add8 = add0 + add1;
//     add9 = add2 + add3;
//     adda = add4 + add5;
//     addb = add6 + add7;
//
//     addc = add8 + add9;
//     addd = adda + addb;
//
//     return addc + addd;
// }

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

void pgconv64(uint64 bottom1[9][9],
                // uint64 bottom0[9][9],
                const uint64 weights[32][3][3],
                const FIX_WT thres[32],
                const FIX_WT bn_weights[32],
                const FIX_WT bn_bias[32],
                const FIX_WT relu_shiftx[32],
                const FIX_WT relu_shifty[32],
                const FIX_WT relu_weights[32],
                FIX_FM_acc top[32][9][9]
)
{

#pragma HLS array_partition variable=weights dim=0 complete
#pragma HLS array_partition variable=thres dim=1 complete
#pragma HLS array_partition variable=bn_weights dim=1 complete
#pragma HLS array_partition variable=bn_bias dim=1 complete
#pragma HLS array_partition variable=relu_shiftx dim=1 complete
#pragma HLS array_partition variable=relu_shifty dim=1 complete
#pragma HLS array_partition variable=relu_weights dim=1 complete
#pragma HLS array_partition variable=top dim=1 complete

    uint64 bot1_LB[3][9];
    uint64 bot1_WB[3][3];
    uint64 bot0_LB[3][9];
    uint64 bot0_WB[3][3];
    biconv_row:for(int row = 1; row < 8; row ++){
        biconv_col:for(int col = 1; col < 8; col ++) {
//#pragma HLS PIPELINE

            bot1_LB[0][col] = bot1_LB[1][col];
            bot1_LB[1][col] = bot1_LB[2][col];
            bot1_LB[2][col] = bottom1[row][col];
            bot0_LB[0][col] = bot0_LB[1][col];
            bot0_LB[1][col] = bot0_LB[2][col];
            bot0_LB[2][col] = bottom0[row][col];
            if (0 < row && row < 8) { // move left one column, update window buffer
                for (int LB_1 = 0; LB_1 < 3; ++LB_1) {
#pragma HLS UNROLL
                    bot1_WB[LB_1][0] = bot1_WB[LB_1][1];
                    bot1_WB[LB_1][1] = bot1_WB[LB_1][2];
                    bot1_WB[LB_1][2] = bot1_LB[LB_1][col];
                    bot0_WB[LB_1][0] = bot0_WB[LB_1][1];
                    bot0_WB[LB_1][1] = bot0_WB[LB_1][2];
                    bot0_WB[LB_1][2] = bot0_LB[LB_1][col];
                }
                if (0 < col && col < 8) {
                    biconv_coo:for (int coo = 0; coo < 32; coo ++) {
#pragma HLS UNROLL
                        uint6 tmp0 = compute_engine_64(bot1_WB[0][0], weights[coo][0][0]);
                        uint6 tmp1 = compute_engine_64(bot1_WB[0][1], weights[coo][0][1]);
                        uint6 tmp2 = compute_engine_64(bot1_WB[0][2], weights[coo][0][2]);
                        uint6 tmp3 = compute_engine_64(bot1_WB[1][0], weights[coo][1][0]);
                        uint6 tmp4 = compute_engine_64(bot1_WB[1][1], weights[coo][1][1]);
                        uint6 tmp5 = compute_engine_64(bot1_WB[1][2], weights[coo][1][2]);
                        uint6 tmp6 = compute_engine_64(bot1_WB[2][0], weights[coo][2][0]);
                        uint6 tmp7 = compute_engine_64(bot1_WB[2][1], weights[coo][2][1]);
                        uint6 tmp8 = compute_engine_64(bot1_WB[2][2], weights[coo][2][2]);
                        uint8 sum = sum_engine(tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8);


//                uint6 tmp00 = compute_engine_64(bottom0[row-1][col-1], weights[coo][0][0]);
//                uint6 tmp01 = compute_engine_64(bottom0[row-1][col  ], weights[coo][0][1]);
//                uint6 tmp02 = compute_engine_64(bottom0[row-1][col+1], weights[coo][0][2]);
//                uint6 tmp03 = compute_engine_64(bottom0[row  ][col-1], weights[coo][1][0]);
//                uint6 tmp04 = compute_engine_64(bottom0[row  ][col  ], weights[coo][1][1]);
//                uint6 tmp05 = compute_engine_64(bottom0[row  ][col+1], weights[coo][1][2]);
//                uint6 tmp06 = compute_engine_64(bottom0[row+1][col-1], weights[coo][2][0]);
//                uint6 tmp07 = compute_engine_64(bottom0[row+1][col  ], weights[coo][2][1]);
//                uint6 tmp08 = compute_engine_64(bottom0[row+1][col+1], weights[coo][2][2]);
//                uint8 sum0 = sum_engine(tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8);
//
//                if (sum > thres[coo]) {
//                    sum += sum0;
//                }
                        FIX_FM_acc norm = batch_norm(sum, bn_weights[coo], bn_bias[coo]);
                        top[coo][row][col] = relu(norm, relu_shiftx[coo], relu_shifty[coo], relu_weights[coo]);
                    }
                }
            }
        }
    }
}
