#ifndef BNN_H
#define BNN_H

#include "typedefs.h"

void FracNet(
    uint16 image[6][32][32],
    float output[10]
);

void FracNet_T(
    uint64 image[3][32][32],
    float out[64*32*32]
);

#endif
