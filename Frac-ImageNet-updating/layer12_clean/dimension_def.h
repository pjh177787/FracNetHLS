
#define CHANNEL_IN 3
#define CHANNEL_OUT 64
#define BUF_HEIGHT_1 226
#define BUF_HEIGHT_0 114
#define BUF_WIDTH_1 225
#define BUF_WIDTH_0 113
#define IN_CHANNEL_BITPACK 32 //uint32
#define OUT_CHANNEL_PARALLELISM 32
#define ROW_TILE_SIZE 14

#define BUS_WIDTH 512
#define WEIGHT_BITS 32
#define NUM_WT_PACKS 16 // BUS_WIDTH/WEIGHT_BITS
#define NUM_BUS_READS 2 // OUT_CHANNEL_PARALLELISM/(BUS_WIDTH/WEIGHT_BITS)
/////////////////////////////////
//#define WEIGHT_BITS 16
//#define NUM_WT_PACKS 32 // BUS_WIDTH/WEIGHT_BITS
//#define NUM_BUS_READS 1 // OUT_CHANNEL_PARALLELISM/(BUS_WIDTH/WEIGHT_BITS)
/////////////////////////////////
#define DDR_CH_OFFSET 1024
#define FEAT_BUF_OFFSET 25650 // 114*225 cannot be 113*225
