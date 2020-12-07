#ifndef ARRAY_DEF_TB
#define ARRAY_DEF_TB

#define NUM_TESTS 1

////////////////////////////
// Individual weight buffer
////////////////////////////
float layer_0_0_weight[32][96][3][3];
float layer_0_1_weight[32];
float layer_0_1_bias[32];

float layer_1_conv3x3_0_weight[32][32][3][3];
float layer_1_conv3x3_0_threshold[32];
float layer_1_conv3x3_1_weight[32];
float layer_1_conv3x3_1_bias[32];
float layer_1_pointwise_0_weight[64][32];
float layer_1_pointwise_0_threshold[64];
float layer_1_pointwise_1_weight[64];
float layer_1_pointwise_1_bias[64];
float layer_1_rprelu1_shift_x_bias[32];
float layer_1_rprelu1_shift_y_bias[32];
float layer_1_rprelu1_prelu_weight[32];
float layer_1_rprelu2_shift_x_bias[64];
float layer_1_rprelu2_shift_y_bias[64];
float layer_1_rprelu2_prelu_weight[64];
float layer_1_shiftbn1_weight[32];
float layer_1_shiftbn1_bias[32];
float layer_1_shiftbn2_weight[64];
float layer_1_shiftbn2_bias[64];

float layer_2_conv3x3_0_weight[64][64][3][3];
float layer_2_conv3x3_0_threshold[64];
float layer_2_conv3x3_1_weight[64];
float layer_2_conv3x3_1_bias[64];
float layer_2_pointwise_0_weight[128][64];
float layer_2_pointwise_0_threshold[128];
float layer_2_pointwise_1_weight[128];
float layer_2_pointwise_1_bias[128];
float layer_2_rprelu1_shift_x_bias[64];
float layer_2_rprelu1_shift_y_bias[64];
float layer_2_rprelu1_prelu_weight[64];
float layer_2_rprelu2_shift_x_bias[128];
float layer_2_rprelu2_shift_y_bias[128];
float layer_2_rprelu2_prelu_weight[128];
float layer_2_shiftbn1_weight[64];
float layer_2_shiftbn1_bias[64];
float layer_2_shiftbn2_weight[128];
float layer_2_shiftbn2_bias[128];

float layer_3_conv3x3_0_weight[128][128][3][3];
float layer_3_conv3x3_0_threshold[128];
float layer_3_conv3x3_1_weight[128];
float layer_3_conv3x3_1_bias[128];
float layer_3_pointwise_0_weight[128][128];
float layer_3_pointwise_0_threshold[128];
float layer_3_pointwise_1_weight[128];
float layer_3_pointwise_1_bias[128];
float layer_3_rprelu1_shift_x_bias[128];
float layer_3_rprelu1_shift_y_bias[128];
float layer_3_rprelu1_prelu_weight[128];
float layer_3_rprelu2_shift_x_bias[128];
float layer_3_rprelu2_shift_y_bias[128];
float layer_3_rprelu2_prelu_weight[128];
float layer_3_shiftbn1_weight[128];
float layer_3_shiftbn1_bias[128];
float layer_3_shiftbn2_weight[128];
float layer_3_shiftbn2_bias[128];

float layer_4_conv3x3_0_weight[128][128][3][3];
float layer_4_conv3x3_0_threshold[128];
float layer_4_conv3x3_1_weight[128];
float layer_4_conv3x3_1_bias[128];
float layer_4_pointwise_0_weight[256][128];
float layer_4_pointwise_0_threshold[256];
float layer_4_pointwise_1_weight[256];
float layer_4_pointwise_1_bias[256];
float layer_4_rprelu1_shift_x_bias[128];
float layer_4_rprelu1_shift_y_bias[128];
float layer_4_rprelu1_prelu_weight[128];
float layer_4_rprelu2_shift_x_bias[256];
float layer_4_rprelu2_shift_y_bias[256];
float layer_4_rprelu2_prelu_weight[256];
float layer_4_shiftbn1_weight[128];
float layer_4_shiftbn1_bias[128];
float layer_4_shiftbn2_weight[256];
float layer_4_shiftbn2_bias[256];

float layer_5_conv3x3_0_weight[256][256][3][3];
float layer_5_conv3x3_0_threshold[256];
float layer_5_conv3x3_1_weight[256];
float layer_5_conv3x3_1_bias[256];
float layer_5_pointwise_0_weight[256][256];
float layer_5_pointwise_0_threshold[256];
float layer_5_pointwise_1_weight[256];
float layer_5_pointwise_1_bias[256];
float layer_5_rprelu1_shift_x_bias[256];
float layer_5_rprelu1_shift_y_bias[256];
float layer_5_rprelu1_prelu_weight[256];
float layer_5_rprelu2_shift_x_bias[256];
float layer_5_rprelu2_shift_y_bias[256];
float layer_5_rprelu2_prelu_weight[256];
float layer_5_shiftbn1_weight[256];
float layer_5_shiftbn1_bias[256];
float layer_5_shiftbn2_weight[256];
float layer_5_shiftbn2_bias[256];

float layer_6_conv3x3_0_weight[256][256][3][3];
float layer_6_conv3x3_0_threshold[256];
float layer_6_conv3x3_1_weight[256];
float layer_6_conv3x3_1_bias[256];
float layer_6_pointwise_0_weight[512][256];
float layer_6_pointwise_0_threshold[512];
float layer_6_pointwise_1_weight[512];
float layer_6_pointwise_1_bias[512];
float layer_6_rprelu1_shift_x_bias[256];
float layer_6_rprelu1_shift_y_bias[256];
float layer_6_rprelu1_prelu_weight[256];
float layer_6_rprelu2_shift_x_bias[512];
float layer_6_rprelu2_shift_y_bias[512];
float layer_6_rprelu2_prelu_weight[512];
float layer_6_shiftbn1_weight[256];
float layer_6_shiftbn1_bias[256];
float layer_6_shiftbn2_weight[512];
float layer_6_shiftbn2_bias[512];

float layer_7_conv3x3_0_weight[512][512][3][3];
float layer_7_conv3x3_0_threshold[512];
float layer_7_conv3x3_1_weight[512];
float layer_7_conv3x3_1_bias[512];
float layer_7_pointwise_0_weight[512][512];
float layer_7_pointwise_0_threshold[512];
float layer_7_pointwise_1_weight[512];
float layer_7_pointwise_1_bias[512];
float layer_7_rprelu1_shift_x_bias[512];
float layer_7_rprelu1_shift_y_bias[512];
float layer_7_rprelu1_prelu_weight[512];
float layer_7_rprelu2_shift_x_bias[512];
float layer_7_rprelu2_shift_y_bias[512];
float layer_7_rprelu2_prelu_weight[512];
float layer_7_shiftbn1_weight[512];
float layer_7_shiftbn1_bias[512];
float layer_7_shiftbn2_weight[512];
float layer_7_shiftbn2_bias[512];

float layer_8_conv3x3_0_weight[512][512][3][3];
float layer_8_conv3x3_0_threshold[512];
float layer_8_conv3x3_1_weight[512];
float layer_8_conv3x3_1_bias[512];
float layer_8_pointwise_0_weight[512][512];
float layer_8_pointwise_0_threshold[512];
float layer_8_pointwise_1_weight[512];
float layer_8_pointwise_1_bias[512];
float layer_8_rprelu1_shift_x_bias[512];
float layer_8_rprelu1_shift_y_bias[512];
float layer_8_rprelu1_prelu_weight[512];
float layer_8_rprelu2_shift_x_bias[512];
float layer_8_rprelu2_shift_y_bias[512];
float layer_8_rprelu2_prelu_weight[512];
float layer_8_shiftbn1_weight[512];
float layer_8_shiftbn1_bias[512];
float layer_8_shiftbn2_weight[512];
float layer_8_shiftbn2_bias[512];

float layer_9_conv3x3_0_weight[512][512][3][3];
float layer_9_conv3x3_0_threshold[512];
float layer_9_conv3x3_1_weight[512];
float layer_9_conv3x3_1_bias[512];
float layer_9_pointwise_0_weight[512][512];
float layer_9_pointwise_0_threshold[512];
float layer_9_pointwise_1_weight[512];
float layer_9_pointwise_1_bias[512];
float layer_9_rprelu1_shift_x_bias[512];
float layer_9_rprelu1_shift_y_bias[512];
float layer_9_rprelu1_prelu_weight[512];
float layer_9_rprelu2_shift_x_bias[512];
float layer_9_rprelu2_shift_y_bias[512];
float layer_9_rprelu2_prelu_weight[512];
float layer_9_shiftbn1_weight[512];
float layer_9_shiftbn1_bias[512];
float layer_9_shiftbn2_weight[512];
float layer_9_shiftbn2_bias[512];

float layer_10_conv3x3_0_weight[512][512][3][3];
float layer_10_conv3x3_0_threshold[512];
float layer_10_conv3x3_1_weight[512];
float layer_10_conv3x3_1_bias[512];
float layer_10_pointwise_0_weight[512][512];
float layer_10_pointwise_0_threshold[512];
float layer_10_pointwise_1_weight[512];
float layer_10_pointwise_1_bias[512];
float layer_10_rprelu1_shift_x_bias[512];
float layer_10_rprelu1_shift_y_bias[512];
float layer_10_rprelu1_prelu_weight[512];
float layer_10_rprelu2_shift_x_bias[512];
float layer_10_rprelu2_shift_y_bias[512];
float layer_10_rprelu2_prelu_weight[512];
float layer_10_shiftbn1_weight[512];
float layer_10_shiftbn1_bias[512];
float layer_10_shiftbn2_weight[512];
float layer_10_shiftbn2_bias[512];

float layer_11_conv3x3_0_weight[512][512][3][3];
float layer_11_conv3x3_0_threshold[512];
float layer_11_conv3x3_1_weight[512];
float layer_11_conv3x3_1_bias[512];
float layer_11_pointwise_0_weight[512][512];
float layer_11_pointwise_0_threshold[512];
float layer_11_pointwise_1_weight[512];
float layer_11_pointwise_1_bias[512];
float layer_11_rprelu1_shift_x_bias[512];
float layer_11_rprelu1_shift_y_bias[512];
float layer_11_rprelu1_prelu_weight[512];
float layer_11_rprelu2_shift_x_bias[512];
float layer_11_rprelu2_shift_y_bias[512];
float layer_11_rprelu2_prelu_weight[512];
float layer_11_shiftbn1_weight[512];
float layer_11_shiftbn1_bias[512];
float layer_11_shiftbn2_weight[512];
float layer_11_shiftbn2_bias[512];

float layer_12_conv3x3_0_weight[512][512][3][3];
float layer_12_conv3x3_0_threshold[512];
float layer_12_conv3x3_1_weight[512];
float layer_12_conv3x3_1_bias[512];
float layer_12_pointwise_0_weight[1024][512];
float layer_12_pointwise_0_threshold[1024];
float layer_12_pointwise_1_weight[1024];
float layer_12_pointwise_1_bias[1024];
float layer_12_rprelu1_shift_x_bias[512];
float layer_12_rprelu1_shift_y_bias[512];
float layer_12_rprelu1_prelu_weight[512];
float layer_12_rprelu2_shift_x_bias[1024];
float layer_12_rprelu2_shift_y_bias[1024];
float layer_12_rprelu2_prelu_weight[1024];
float layer_12_shiftbn1_weight[512];
float layer_12_shiftbn1_bias[512];
float layer_12_shiftbn2_weight[1024];
float layer_12_shiftbn2_bias[1024];

float layer_13_conv3x3_0_weight[1024][1024][3][3];
float layer_13_conv3x3_0_threshold[1024];
float layer_13_conv3x3_1_weight[1024];
float layer_13_conv3x3_1_bias[1024];
float layer_13_pointwise_0_weight[1024][1024];
float layer_13_pointwise_0_threshold[1024];
float layer_13_pointwise_1_weight[1024];
float layer_13_pointwise_1_bias[1024];
float layer_13_rprelu1_shift_x_bias[1024];
float layer_13_rprelu1_shift_y_bias[1024];
float layer_13_rprelu1_prelu_weight[1024];
float layer_13_rprelu2_shift_x_bias[1024];
float layer_13_rprelu2_shift_y_bias[1024];
float layer_13_rprelu2_prelu_weight[1024];
float layer_13_shiftbn1_weight[1024];
float layer_13_shiftbn1_bias[1024];
float layer_13_shiftbn2_weight[1024];
float layer_13_shiftbn2_bias[1024];

float fc_weight[1000][1024];
float fc_bias[1000];

///////////////////
// Output buffers
///////////////////
float layer_0_0_output[32][112][112];
float layer_0_1_output[32][112][112];
float layer_0_1_output_quant[32][112][112];
float layer_1_conv3x3_0_output[32][112][112];
float layer_1_conv3x3_0_output_quant[32][112][112];
float layer_1_pointwise_0_output[64][112][112];
float layer_1_conv3x3_0_output_concat[64][112][112];
float out[1000];



/////////////////////
// lump sum buffers
/////////////////////
unsigned char images[NUM_TESTS*96*224*224];
float conv3x3_all[25141248];
float conv1x1_all[3139584];
float weights_all[133014];
int ptr[3] = {0, 0, 6}; // {weight_3x3_ptr, weight_1x1_ptr, weight_other_ptr (first six are mean and std)}


void read_all_images()
{
    std::ifstream ifs_param0("conv1_input.bin", std::ios::in | std::ios::binary);
    ifs_param0.read((char*)(images), NUM_TESTS*96*224*224*sizeof(unsigned char));
    ifs_param0.close();
}

void get_image(unsigned char *images, unsigned int idx, unsigned char image[96][224][224])
{
    unsigned int offset = idx*96*224*224;
    for (int c = 0; c < 96; c ++) {
        for (int row = 0; row < 224; row ++) {
            for (int col = 0; col < 224; col ++) {
                image[c][row][col] = images[offset + c*224*224 + row*224 + col];
            }
        }
    }
}

void load_weights()
{
    std::ifstream ifs_param0("conv3x3_weights.bin", std::ios::in | std::ios::binary);
    ifs_param0.read((char*)(conv3x3_all), 25141248*sizeof(float));
    ifs_param0.close();
    std::ifstream ifs_param1("conv1x1_weights.bin", std::ios::in | std::ios::binary);
    ifs_param1.read((char*)(conv1x1_all), 3139584*sizeof(float));
    ifs_param1.close();
    std::ifstream ifs_param2("other_weights.bin", std::ios::in | std::ios::binary);
    ifs_param2.read((char*)(weights_all), 133014*sizeof(float));
    ifs_param2.close();
}

template <int C_OUT, int C_IN>
void get_weight_3x3(float weight_3x3[C_OUT][C_IN][3][3])
{
    for (int co = 0; co < C_OUT; co ++) {
        for (int ci = 0; ci < C_IN; ci ++) {
            for (int row = 0; row < 3; row ++) {
                for (int col = 0; col < 3; col ++) {
                    int index = co*C_IN*3*3 + ci*3*3 + row*3 + col;
                    weight_3x3[co][ci][row][col] = conv3x3_all[ptr[0] + index];
                }
            }
        }
    }
    ptr[0] += C_OUT * C_IN * 3 * 3;
}

template <int C_OUT, int C_IN>
void get_weight_1x1(float weight_1x1[C_OUT][C_IN])
{
    for (int co = 0; co < C_OUT; co ++) {
        for (int ci = 0; ci < C_IN; ci ++) {
            int index = co*C_IN + ci;
            weight_1x1[co][ci] = conv1x1_all[ptr[1] + index];
        }
    }
    ptr[1] += C_OUT * C_IN;
}

template <int CH>
void get_weight_other(float weight_other[CH])
{
    for (int ch = 0; ch < CH; ch ++) {
        weight_other[ch] = weights_all[ptr[2] + ch];
    }
    ptr[2] += CH;
}

void load_individual_weight()
{
    // conv1 + bn1
    get_weight_3x3<32, 96>(layer_0_0_weight);
    get_weight_other<32>(layer_0_1_weight);
    get_weight_other<32>(layer_0_1_bias);

    // layer 1
    get_weight_3x3<32, 32>(layer_1_conv3x3_0_weight);
    get_weight_other<32>(layer_1_conv3x3_0_threshold);
    get_weight_other<32>(layer_1_conv3x3_1_weight);
    get_weight_other<32>(layer_1_conv3x3_1_bias);
    get_weight_1x1<64, 32>(layer_1_pointwise_0_weight);
    get_weight_other<64>(layer_1_pointwise_0_threshold);
    get_weight_other<64>(layer_1_pointwise_1_weight);
    get_weight_other<64>(layer_1_pointwise_1_bias);
    get_weight_other<32>(layer_1_rprelu1_shift_x_bias);
    get_weight_other<32>(layer_1_rprelu1_shift_y_bias);
    get_weight_other<32>(layer_1_rprelu1_prelu_weight);
    get_weight_other<64>(layer_1_rprelu2_shift_x_bias);
    get_weight_other<64>(layer_1_rprelu2_shift_y_bias);
    get_weight_other<64>(layer_1_rprelu2_prelu_weight);
    get_weight_other<32>(layer_1_shiftbn1_weight);
    get_weight_other<32>(layer_1_shiftbn1_bias);
    get_weight_other<64>(layer_1_shiftbn2_weight);
    get_weight_other<64>(layer_1_shiftbn2_bias);

}


#endif
