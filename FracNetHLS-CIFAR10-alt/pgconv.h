#ifndef PGCONV_H
#define PGCONV_H

#include "typedefs.h"
#include "dimension_def.h"
#include <iostream>

using namespace std;
const uint64 m1 = 6148914691236517205;
const uint64 m2 = 3689348814741910323;
const uint64 m4 = 1085102592571150095;

inline uint8 compute_engine_64(uint64 b, uint64 w)
{
#pragma HLS latency max=1
    uint64 x = b^w;

    x -= (x >> 1) & m1;
    x = (x & m2) + ((x >> 2) & m2);
    x = (x + (x >> 4)) & m4;
    x += x >>  8;
    x += x >> 16;
    x += x >> 32;
    return (x & 0x7f);
}

//inline uint8 compute_engine_64(uint64 b, uint64 w)
//{
//#pragma HLS latency max=1
//	uint64 t = b^w;
//	uint8 sum = 0;
//	for(int i = 0; i < 64; i++){
//#pragma HLS UNROLL
//		sum += t[i];
//	}
//	// use yichi method
//	return sum;
//}


/*
 * Attention: 
 * when lsb_outputs is not used, for example, in the first binary conv layer,
 * its values are still modified.
 * This makes the next accumulation in the lsb_outputs buffer incorrect because
 * the registers directly copy the values from the buffer.
 */

void pg_conv3x3_tile( 
		uint64 msb_inputs[CHANNEL_IN][WIDTH][WIDTH], // [6][32+1][32+1] padded inputs, padding len = 1
		uint64 lsb_inputs[CHANNEL_IN][WIDTH][WIDTH],
		const uint64 weights[OUT_CHANNEL_PARALLELISM][3][3],
		FIX_FM_acc msb_outputs[CHANNEL_OUT_T][WIDTH][WIDTH], // [8][32+1][32+1]
		FIX_FM_acc lsb_outputs[CHANNEL_OUT_T][WIDTH][WIDTH],

		int c_in,
		int in_channels,
		int H_fmap_out
)
{
#pragma HLS ARRAY_PARTITION variable=weights complete dim=1
#pragma HLS ARRAY_PARTITION variable=weights complete dim=2
#pragma HLS ARRAY_PARTITION variable=weights complete dim=3
#pragma HLS ARRAY_PARTITION variable=msb_outputs complete dim=1
#pragma HLS ARRAY_PARTITION variable=lsb_outputs complete dim=1

	uint64 msb_line_buffer[2][WIDTH];
	uint64 msb_window_buffer[3][3];
	uint64 lsb_line_buffer[2][WIDTH];
	uint64 lsb_window_buffer[3][3];
#pragma HLS ARRAY_PARTITION variable=msb_line_buffer complete dim=0
#pragma HLS ARRAY_PARTITION variable=msb_window_buffer complete dim=0
#pragma HLS ARRAY_PARTITION variable=lsb_line_buffer complete dim=0
#pragma HLS ARRAY_PARTITION variable=lsb_window_buffer complete dim=0

	int16 msb_partial_out_feature[OUT_CHANNEL_PARALLELISM];
	int16 lsb_partial_out_feature[OUT_CHANNEL_PARALLELISM];
#pragma HLS ARRAY_PARTITION variable=msb_partial_out_feature complete dim=1
#pragma HLS ARRAY_PARTITION variable=lsb_partial_out_feature complete dim=1

	Loop_Tile:
	for (int row=0; row<H_fmap_out+1; row++) {
		for (int col=0; col<H_fmap_out+1; col++) {
#pragma HLS PIPELINE

			// update window buffer and line buffer
			for (int i=0; i<3; i++) {
				msb_window_buffer[i][0] = msb_window_buffer[i][1];
				msb_window_buffer[i][1] = msb_window_buffer[i][2];
				lsb_window_buffer[i][0] = lsb_window_buffer[i][1];
				lsb_window_buffer[i][1] = lsb_window_buffer[i][2];
			}

			msb_window_buffer[0][2] = (msb_line_buffer[0][col]);
			msb_window_buffer[1][2] = (msb_line_buffer[0][col] = msb_line_buffer[1][col]);
			msb_window_buffer[2][2] = (msb_line_buffer[1][col] = msb_inputs[c_in][row][col]);

			lsb_window_buffer[0][2] = (lsb_line_buffer[0][col]);
			lsb_window_buffer[1][2] = (lsb_line_buffer[0][col] = lsb_line_buffer[1][col]);
			lsb_window_buffer[2][2] = (lsb_line_buffer[1][col] = lsb_inputs[0][row][col]);

			// copy output features into registers
			for (int channel_pt=0; channel_pt<OUT_CHANNEL_PARALLELISM; channel_pt++) {
				if (c_in > 0){
					msb_partial_out_feature[channel_pt] = msb_outputs[channel_pt][row][col];
					lsb_partial_out_feature[channel_pt] = lsb_outputs[channel_pt][row][col];
				}
				else{
					msb_partial_out_feature[channel_pt] = 0;
					lsb_partial_out_feature[channel_pt] = 0;
				}
			}

			// Compute each feature in an output channel
			for (int channel_pt=0; channel_pt<OUT_CHANNEL_PARALLELISM; channel_pt++) {
				int16 msb_accumulation = 0;
				int16 lsb_accumulation = 0;
				// Compute each output channel
				for (int k_row=0; k_row<3; k_row++) {
					for (int k_col=0; k_col<3; k_col++) {
						int row_idx_pad = row - 2 + k_row;
						int col_idx_pad = col - 2 + k_col;
						if(row_idx_pad>=0 && row_idx_pad<H_fmap_out && col_idx_pad>=0 && col_idx_pad<H_fmap_out){
							uint64 msb_a = msb_window_buffer[k_row][k_col];
							uint64 lsb_a = lsb_window_buffer[k_row][k_col];
							uint64 w = weights[channel_pt][k_row][k_col];
							msb_accumulation += in_channels - 2*compute_engine_64(msb_a, w);
							lsb_accumulation += in_channels - 2*compute_engine_64(lsb_a, w);
						}
					}
				}
				msb_partial_out_feature[channel_pt] += msb_accumulation;
				lsb_partial_out_feature[channel_pt] += lsb_accumulation;
			}

			for (int channel_pt=0; channel_pt<OUT_CHANNEL_PARALLELISM; channel_pt++) {
				msb_outputs[channel_pt][row][col] = msb_partial_out_feature[channel_pt];
				lsb_outputs[channel_pt][row][col] = lsb_partial_out_feature[channel_pt];
			}

		}
	}
	return;
}


#endif

