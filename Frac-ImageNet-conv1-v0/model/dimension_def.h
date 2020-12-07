
#define CHANNEL_IN 3
#define CHANNEL_OUT 64
#define BUF_HEIGHT_1 226
#define BUF_HEIGHT_0 114
#define BUF_WIDTH_1 225
#define BUF_WIDTH_0 113
#define IN_CHANNEL_BITPACK 32 //uint32
#define OUT_CHANNEL_PARALLELISM 32
#define ROW_TILE_SIZE 8

#define WEIGHT_BITS 32
#define BUS_WIDTH 512
#define NUM_WT_PACKS 16 // BUS_WIDTH/WEIGHT_BITS
#define NUM_BUS_READS 2 // WEIGHT_BITS/(BUS_WIDTH/WEIGHT_BITS)
