//
#include "net_hls.h"
#include <stdio.h>
#include <math.h>
#include <ap_fixed.h>

const static uint4 lut16[] = {0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4};

#define CH_OUT 64
#define CH_OUT_PAR 32

const static uint32 m1("0x55555555", 16);
const static uint32 m2("0x33333333", 16);
const static uint32 m4("0x0f0f0f0f", 16);

//inline uint6 compute_engine_64(uint64 b, uint64 w)
//{
//#pragma HLS latency max=1
//    uint64 x = ~(b^w);
//
//    x -= (x >> 1) & m1;             //put count of each 2 bits into those 2 bits
//    x = (x & m2) + ((x >> 2) & m2); //put count of each 4 bits into those 4 bits
//    x = (x + (x >> 4)) & m4;        //put count of each 8 bits into those 8 bits
//    x += x >>  8;  //put count of each 16 bits into their lowest 8 bits
//    x += x >> 16;  //put count of each 32 bits into their lowest 8 bits
//    x += x >> 32;  //put count of each 64 bits into their lowest 8 bits
//    return x & 0x7f;
//}

 inline uint6 compute_engine_64(uint64 b, uint64 w)
 {

 #pragma HLS latency max=1
     uint64 t = ~(b^w);
     uint6 sum;
     for (int i = 0; i < 64; i ++) {
#pragma HLS UNROLL
    	 sum += t[i];
     }
     return sum;
 }
// inline uint6 compute_engine_64(uint64 b, uint64 w)
// {
//
// #pragma HLS latency max=1
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
    if (norm > 0) {
        return norm + shifty;
    } else {
        return norm*weight + shifty;
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

void pgconv64(uint64 bottom1[12996],
                uint64 bottom0[12996],
                uint64 weights[CH_OUT][3][3],
                FIX_WT thres[CH_OUT],
//                FIX_WT bn_weights[CH_OUT],
//                FIX_WT bn_bias[CH_OUT],
//                FIX_WT relu_shiftx[CH_OUT],
//                FIX_WT relu_shifty[CH_OUT],
//                FIX_WT relu_weights[CH_OUT],
                FIX_FM_acc top[CH_OUT][9][9],
				int tile_row,
				int tile_col,
				int ch_row,
				int ch_col,
				int map_dim,
				int stride
)
{

#pragma HLS array_partition variable=weights dim=2 complete
#pragma HLS array_partition variable=weights dim=3 complete
#pragma HLS array_partition variable=weights dim=1 cyclic factor=8
#pragma HLS array_partition variable=top dim=1 cyclic factor=32
 #pragma HLS array_partition variable=thres dim=1 cyclic factor=8
//#pragma HLS array_partition variable=bn_weights dim=1 complete
//#pragma HLS array_partition variable=bn_bias dim=1 complete
//#pragma HLS array_partition variable=relu_shiftx dim=1 complete
//#pragma HLS array_partition variable=relu_shifty dim=1 complete
//#pragma HLS array_partition variable=relu_weights dim=1 complete
// #pragma HLS array_partition variable=top dim=1 complete

    uint64 bot1_LB[3][9];
    uint64 bot1_WB[3][3];
    uint64 bot0_LB[3][9];
    uint64 bot0_WB[3][3];

#pragma HLS array_partition variable=bot1_LB dim=1 complete
#pragma HLS array_partition variable=bot1_WB dim=1 complete
#pragma HLS array_partition variable=bot0_LB dim=1 complete
#pragma HLS array_partition variable=bot0_WB dim=1 complete

	int index = (ch_row*map_dim + tile_row*7)*114 + (ch_col*map_dim + tile_col*7);
	int s;
	if (stride == 2) {
		s = 4;
	} else {
		s = 7;
	}
	Ch_factor:for (int ch_factor = 0; ch_factor < CH_OUT/CH_OUT_PAR; ch_factor ++) {
		Row:for(int row0 = 0; row0 < s; row0 ++){
			Col:for(int col0 = 0; col0 < s; col0 ++) {
#pragma HLS PIPELINE II=1
				int row = row0 + 1;
				int col = col0 + 1;

                int ch_start = ch_factor*CH_OUT_PAR;
                FIX_FM_acc top_buf[CH_OUT_PAR];
#pragma HLS array_partition variable=top_buf dim=1 complete
                for (int coo = 0; coo < CH_OUT_PAR; coo ++) {
                    top_buf[coo] = top[ch_start + coo][row][col];
                }
				bot1_LB[0][col] = bot1_LB[1][col];
				bot1_LB[1][col] = bot1_LB[2][col];
				bot1_LB[2][col] = bottom1[index + row*114 + col];
				bot0_LB[0][col] = bot0_LB[1][col];
				bot0_LB[1][col] = bot0_LB[2][col];
				bot0_LB[2][col] = bottom0[index + row*114 + col];


				for (int i = 0; i < 3; i ++) {
					bot1_WB[i][0] = bot1_WB[i][1];
					bot1_WB[i][1] = bot1_WB[i][2];
					bot1_WB[i][2] = bot1_LB[i][col];
					bot0_WB[i][0] = bot0_WB[i][1];
					bot0_WB[i][1] = bot0_WB[i][2];
					bot0_WB[i][2] = bot0_LB[i][col];
				}
				int w_i = 0;
				for (int coo = 0; coo < CH_OUT_PAR; coo ++) {
					w_i = ch_factor*CH_OUT_PAR + coo;
					FIX_FM_acc sum1 = 0;
					FIX_FM_acc sum0 = 0;
					for (int k_row = 0; k_row < 3; k_row ++) {
						for (int k_col = 0; k_col < 3; k_col ++) {
							uint64 a1 = bot1_WB[k_row][k_col];
							uint64 a0 = bot0_WB[k_row][k_col];
							uint64 w = weights[w_i][k_row][k_col];
							FIX_FM_acc mul1 = compute_engine_64(a1, w);
							FIX_FM_acc mul0 = compute_engine_64(a0, w);
							sum1 += mul1;
							sum0 += mul0;
						}
					}
					if (sum0 < thres[ch_start + coo]) {
						top_buf[coo] += sum0;
					} else {
						top_buf[coo] += sum1*2 + sum0;
					}
				}
				for (int coo = 0; coo < CH_OUT_PAR; coo ++) {
					top[ch_start + coo][row][col] = top_buf[coo];
				}
            }
        }
    }
}

void pgconv64_1x1(uint64 bottom1[12996],
					uint64 bottom0[12996],
                    uint64 weights[CH_OUT],
                    FIX_WT thres[CH_OUT],
//                    FIX_WT bn_weights[32],
//                    FIX_WT bn_bias[32],
//                    FIX_WT relu_shiftx[32],
//                    FIX_WT relu_shifty[32],
//                    FIX_WT relu_weights[32],
                    FIX_FM_acc top[CH_OUT][9][9],
					int tile_row,
					int tile_col,
					int ch_row,
					int ch_col,
					int map_dim
)
{
//#pragma HLS array_partition variable=bottom dim=1 complete
//#pragma HLS array_partition variable=weights dim=1 complete
//#pragma HLS array_partition variable=thres dim=1 complete
//#pragma HLS array_partition variable=bn_weights dim=1 complete
//#pragma HLS array_partition variable=bn_bias dim=1 complete
//#pragma HLS array_partition variable=relu_shiftx dim=1 complete
//#pragma HLS array_partition variable=relu_shifty dim=1 complete
//#pragma HLS array_partition variable=relu_weights dim=1 complete
#pragma HLS array_partition variable=weights dim=1 cyclic factor=8
#pragma HLS array_partition variable=top dim=1 cyclic factor=32

    uint64 bot1_LB[9];
    uint64 bot1_WB;
    uint64 bot0_LB[9];
    uint64 bot0_WB;

    FIX_FM_acc top_buf[CH_OUT_PAR];
#pragma HLS array_partition variable=top_buf dim=1 complete

	int index = (ch_row*map_dim + tile_row*7)*114 + (ch_col*map_dim + tile_col*7);

	Ch_factor:for (int ch_factor = 0; ch_factor < CH_OUT/CH_OUT_PAR; ch_factor ++) {
		Row:for(int row = 1; row < 8; row ++){
			Col:for(int col = 1; col < 8; col ++) {
#pragma HLS PIPELINE II=1
				bot1_LB[col] = bottom1[index + row*114 + col];
				bot0_LB[col] = bottom0[index + row*114 + col];
				if (0 < row && row < 9) {
					bot1_WB = bot1_LB[col];
					bot0_WB = bot0_LB[col];
					if (0 < col && col < 9) {
						int ch_start = ch_factor*CH_OUT_PAR;
						for (int coo = 0; coo < CH_OUT_PAR; coo ++) {
							top_buf[coo] = top[ch_start + coo][row][col];
						}
						for (int coo = 0; coo < CH_OUT_PAR; coo ++) {
							uint64 w = weights[coo];
							uint8 sum1 = compute_engine_64(bot1_WB, weights[coo]);
							uint8 sum0 = compute_engine_64(bot0_WB, weights[coo]);
							if (sum0 < thres[ch_start + coo]) {
								top_buf[coo] += sum0;
							} else {
								top_buf[coo] += sum1*2 + sum0;
							}
						}
						for (int coo = 0; coo < CH_OUT_PAR; coo ++) {
							top[ch_start + coo][row][col] = top_buf[coo];
						}
					}
				}
        	}
        }
    }
}
