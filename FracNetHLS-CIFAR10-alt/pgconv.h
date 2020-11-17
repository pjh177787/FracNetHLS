#ifndef PGCONV_H
#define PGCONV_H

#include "typedefs.h"
#include "dimension_def.h"
#include <iostream>

using namespace std;


inline FIX_FM_acc compute_engine_16(uint16 b, uint16 w)
{
#pragma HLS LATENCY max=1
	uint16 t = ~(b^w);
	char sum = 0;
	for(int i = 0; i < 16; i++){
#pragma HLS UNROLL
		sum += ((t[i]<<1)-1);
	}
	return FIX_FM_acc(sum);
}


/*
 * Attention: 
 * when lsb_outputs is not used, for example, in the first binary conv layer,
 * its values are still modified.
 * This makes the next accumulation in the lsb_outputs buffer incorrect because
 * the registers directly copy the values from the buffer.
 */

void pg_conv3x3_tile(
		uint16 msb_inputs[CHANNEL_IN][WIDTH][WIDTH], // [6][32+1][32+1] padded inputs, padding len = 1
		uint16 lsb_inputs[CHANNEL_IN][WIDTH][WIDTH],
		uint16 weights[OUT_CHANNEL_PARALLELISM][CHANNEL_IN][3][3],
		FIX_FM_acc msb_outputs[CHANNEL_OUT][WIDTH][WIDTH], // [64][32+1][32+1]
		FIX_FM_acc lsb_outputs[CHANNEL_OUT][WIDTH][WIDTH],

		int channel_start,
		int in_channels,
		int H_fmap_out
)
{
	Loop_Tile:
	for (int cin=0; cin<in_channels; cin++) {
		uint16 msb_line_buffer[2][WIDTH];
		uint16 msb_window_buffer[3][3];
		uint16 lsb_line_buffer[2][WIDTH];
		uint16 lsb_window_buffer[3][3];
#pragma HLS ARRAY_PARTITION variable=msb_line_buffer complete dim=0
#pragma HLS ARRAY_PARTITION variable=msb_window_buffer complete dim=0
#pragma HLS ARRAY_PARTITION variable=lsb_line_buffer complete dim=0
#pragma HLS ARRAY_PARTITION variable=lsb_window_buffer complete dim=0

		for (int row=0; row < H_fmap_out + 1; row ++) {
			for (int col=0; col < H_fmap_out + 1; col ++) {
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
				msb_window_buffer[2][2] = (msb_line_buffer[1][col] = msb_inputs[cin][row][col]);

				lsb_window_buffer[0][2] = (lsb_line_buffer[0][col]);
				lsb_window_buffer[1][2] = (lsb_line_buffer[0][col] = lsb_line_buffer[1][col]);
				lsb_window_buffer[2][2] = (lsb_line_buffer[1][col] = lsb_inputs[cin][row][col]);

				// copy output features into registers

				FIX_FM_acc msb_partial_out_feature[OUT_CHANNEL_PARALLELISM];
#pragma HLS ARRAY_PARTITION variable=msb_partial_out_feature complete dim=1
				FIX_FM_acc lsb_partial_out_feature[OUT_CHANNEL_PARALLELISM];
#pragma HLS ARRAY_PARTITION variable=lsb_partial_out_feature complete dim=1
				for (int channel_pt=0; channel_pt<OUT_CHANNEL_PARALLELISM; channel_pt++) {
					if (cin > 0){
						msb_partial_out_feature[channel_pt] = msb_outputs[channel_start+channel_pt][row][col];
						lsb_partial_out_feature[channel_pt] = lsb_outputs[channel_start+channel_pt][row][col];
					}
					else{
						msb_partial_out_feature[channel_pt] = 0;
						lsb_partial_out_feature[channel_pt] = 0;
					}
				}

				// Compute each feature in an output channel
				for (int channel_pt=0; channel_pt<OUT_CHANNEL_PARALLELISM; channel_pt++) {
					FIX_FM_acc msb_accumulation = 0;
					FIX_FM_acc lsb_accumulation = 0;
					// Compute each output channel
					for (int k_row=0; k_row<3; k_row++) {
						for (int k_col=0; k_col<3; k_col++) {
							int row_idx_pad = row - 2 + k_row;
							int col_idx_pad = col - 2 + k_col;
							if(row_idx_pad>=0 && row_idx_pad<H_fmap_out && col_idx_pad>=0 && col_idx_pad<H_fmap_out){
								uint16 msb_a = msb_window_buffer[k_row][k_col];
								uint16 lsb_a = lsb_window_buffer[k_row][k_col];
								uint16 w = weights[channel_pt][cin][k_row][k_col];
								msb_accumulation += compute_engine_16(msb_a, w);
								lsb_accumulation += compute_engine_16(lsb_a, w);
							}
						}
					}
					msb_partial_out_feature[channel_pt] += msb_accumulation;
					lsb_partial_out_feature[channel_pt] += lsb_accumulation;
				}

				for (int channel_pt=0; channel_pt<OUT_CHANNEL_PARALLELISM; channel_pt++) {
					msb_outputs[channel_start+channel_pt][row][col] = msb_partial_out_feature[channel_pt];
					lsb_outputs[channel_start+channel_pt][row][col] = lsb_partial_out_feature[channel_pt];
				}

			}
		}
	}
	return;
}


#endif

