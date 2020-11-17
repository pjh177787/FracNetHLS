#ifndef BICONV_H
#define BICONV_H

#include "typedefs.h"
#include "dimension_def.h"
#include <iostream>

using namespace std;


inline FIX_FM_acc compute_engine_16(uint16 b, uint16 w)
{
#pragma HLS latency max=1
    uint16 t = ~(b^w);
    char sum = 0;
    for(int i = 0; i < 16; i++){
#pragma HLS UNROLL
        sum += ((t[i]<<1)-1);
    }
    return FIX_FM_acc(sum);
}


void conv3x3_s1_tile( 
    uint16 inputs[CHANNEL_IN][WIDTH][WIDTH], // [6][32+1][32+1] padded inputs, padding len = 1
    uint16 weights[OUT_CHANNEL_PARALLELISM][CHANNEL_IN][3][3],
    FIX_FM_acc outputs[CHANNEL_OUT][WIDTH][WIDTH], // [64][32+1][32+1]

    int channel_start,
    int in_channels,
    int H_fmap_out
)
{
    Loop_Tile:
    for (int cin=0; cin<in_channels; cin++) {
        uint16 line_buffer[2][WIDTH];
        uint16 window_buffer[3][3];
        for (int row=0; row<H_fmap_out+1; row++) {
            for (int col=0; col<H_fmap_out+1; col++) {
            #pragma HLS PIPELINE

                FIX_FM_acc partial_out_feature[OUT_CHANNEL_PARALLELISM];
                #pragma HLS array_partition variable=partial_out_feature dim=1 complete

                for (int channel_pt=0; channel_pt<OUT_CHANNEL_PARALLELISM; channel_pt++) {
                    if (cin > 0)
                        partial_out_feature[channel_pt] = outputs[channel_start+channel_pt][row][col];
                    else
                        partial_out_feature[channel_pt] = 0;
                }

                // update window buffer and line buffer
                for (int i=0; i<3; i++) {
                    window_buffer[i][0] = window_buffer[i][1];
                    window_buffer[i][1] = window_buffer[i][2];
                }
                window_buffer[0][2] = (line_buffer[0][col]);
                window_buffer[1][2] = (line_buffer[0][col] = line_buffer[1][col]);
                window_buffer[2][2] = (line_buffer[1][col] = inputs[cin][row][col]);

                // Compute each feature in an output channel
                for (int channel_pt=0; channel_pt<OUT_CHANNEL_PARALLELISM; channel_pt++) {
                    FIX_FM_acc accumulation = 0;
                    // Compute each output channel
                    for (int k_row=0; k_row<3; k_row++) {
                        for (int k_col=0; k_col<3; k_col++) {
                            int row_idx_pad = row - 2 + k_row;
                            int col_idx_pad = col - 2 + k_col;
                            if(row_idx_pad>=0 && row_idx_pad<H_fmap_out && col_idx_pad>=0 && col_idx_pad<H_fmap_out){
                                uint16 a = window_buffer[k_row][k_col]; 
                                uint16 w = weights[channel_pt][cin][k_row][k_col];
                                accumulation += compute_engine_16(a, w);
                            }
                        }
                    }
                    partial_out_feature[channel_pt] += accumulation;
                }

                for (int channel_pt=0; channel_pt<OUT_CHANNEL_PARALLELISM; channel_pt++) {
                    outputs[channel_start+channel_pt][row][col] = partial_out_feature[channel_pt];
                }

            }
        }
    }


    return;
}

#endif

