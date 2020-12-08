#ifndef PGCONV_H
#define PGCONV_H

#include "bnn.h"
#include "typedefs.h"
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

void bi_conv3x3_tile(
        uint64 inputs[CHANNEL_IN][PG_WIDTH][PG_HEIGHT],
        const uint64 weights[OUT_CHANNEL_PARALLELISM][3][3],
        int16 outputs[CHANNEL_OUT_T][PG_WIDTH][PG_HEIGHT],

        int c_in,
        int in_channels,
        int H_fmap_out
)
{
#pragma HLS ARRAY_PARTITION variable=weights complete dim=1
#pragma HLS ARRAY_PARTITION variable=weights complete dim=2
#pragma HLS ARRAY_PARTITION variable=weights complete dim=3
#pragma HLS ARRAY_PARTITION variable=outputs complete dim=

    uint64 line_buffer[2][PG_WIDTH] = {0};
    uint64 window_buffer[3][3] = {0};
#pragma HLS ARRAY_PARTITION variable=line_buffer complete dim=0
#pragma HLS ARRAY_PARTITION variable=window_buffer complete dim=0

    int16 partial_out_feature[OUT_CHANNEL_PARALLELISM] = {0};
#pragma HLS ARRAY_PARTITION variable=partial_out_feature complete dim=1

    Loop_Tile:
    for (int row=0; row<H_fmap_out+1; row++) {
        for (int col=0; col<H_fmap_out+1; col++) {
#pragma HLS PIPELINE

            // update window buffer and line buffer
            for (int i=0; i<3; i++) {
            	window_buffer[i][0] = window_buffer[i][1];
            	window_buffer[i][1] = window_buffer[i][2];
            }

            window_buffer[0][2] = (line_buffer[0][col]);
            window_buffer[1][2] = (line_buffer[0][col] = line_buffer[1][col]);
            window_buffer[2][2] = (line_buffer[1][col] = inputs[c_in][row][col]);

            // copy output features into registers
            for (int channel_pt=0; channel_pt<OUT_CHANNEL_PARALLELISM; channel_pt++) {
                if (c_in > 0){
                	partial_out_feature[channel_pt] = outputs[channel_pt][row][col];
                } else {
                	partial_out_feature[channel_pt] = 0;
                }
            }

            // Compute each feature in an output channel
            for (int channel_pt=0; channel_pt<OUT_CHANNEL_PARALLELISM; channel_pt++) {
                int16 msb_accumulation = 0;
                // Compute each output channel
                for (int k_row=0; k_row<3; k_row++) {
                    for (int k_col=0; k_col<3; k_col++) {
                        int row_idx_pad = row - 2 + k_row;
                        int col_idx_pad = col - 2 + k_col;
                        if(row_idx_pad>=0 && row_idx_pad<H_fmap_out && col_idx_pad>=0 && col_idx_pad<H_fmap_out){
                            uint64 msb_a = window_buffer[k_row][k_col];
                            uint64 w = weights[channel_pt][k_row][k_col];
                            msb_accumulation += in_channels - 2*compute_engine_64(msb_a, w);
                        }
                    }
                }
                partial_out_feature[channel_pt] += msb_accumulation;
            }

            for (int channel_pt=0; channel_pt<OUT_CHANNEL_PARALLELISM; channel_pt++) {
            	outputs[channel_pt][row][col] = partial_out_feature[channel_pt];
            }

        }
    }
    return;
}


#endif

