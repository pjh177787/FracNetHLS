#include "bn_relu_small.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void bn_relu_small::thread_DDR_buf_V_blk_n_AW() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln291_reg_25426_pp0_iter5_reg.read()))) {
        DDR_buf_V_blk_n_AW = m_axi_DDR_buf_V_AWREADY.read();
    } else {
        DDR_buf_V_blk_n_AW = ap_const_logic_1;
    }
}

void bn_relu_small::thread_DDR_buf_V_blk_n_B() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln291_reg_25426_pp0_iter11_reg.read()))) {
        DDR_buf_V_blk_n_B = m_axi_DDR_buf_V_BVALID.read();
    } else {
        DDR_buf_V_blk_n_B = ap_const_logic_1;
    }
}

void bn_relu_small::thread_DDR_buf_V_blk_n_W() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln291_reg_25426_pp0_iter6_reg.read()))) {
        DDR_buf_V_blk_n_W = m_axi_DDR_buf_V_WREADY.read();
    } else {
        DDR_buf_V_blk_n_W = ap_const_logic_1;
    }
}

void bn_relu_small::thread_add_ln1192_10_fu_7128_p2() {
    add_ln1192_10_fu_7128_p2 = (!sext_ln728_5_reg_25016.read().is_01() || !mul_ln1118_5_reg_25829.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_5_reg_25016.read()) + sc_bigint<32>(mul_ln1118_5_reg_25829.read()));
}

void bn_relu_small::thread_add_ln1192_11_fu_13484_p2() {
    add_ln1192_11_fu_13484_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_5_fu_13480_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_5_fu_13480_p1.read()));
}

void bn_relu_small::thread_add_ln1192_12_fu_7310_p2() {
    add_ln1192_12_fu_7310_p2 = (!sext_ln728_6_reg_25031.read().is_01() || !mul_ln1118_6_reg_25835.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_6_reg_25031.read()) + sc_bigint<32>(mul_ln1118_6_reg_25835.read()));
}

void bn_relu_small::thread_add_ln1192_13_fu_13734_p2() {
    add_ln1192_13_fu_13734_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_6_fu_13730_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_6_fu_13730_p1.read()));
}

void bn_relu_small::thread_add_ln1192_14_fu_7492_p2() {
    add_ln1192_14_fu_7492_p2 = (!sext_ln728_7_reg_25046.read().is_01() || !mul_ln1118_7_reg_25841.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_7_reg_25046.read()) + sc_bigint<32>(mul_ln1118_7_reg_25841.read()));
}

void bn_relu_small::thread_add_ln1192_15_fu_13984_p2() {
    add_ln1192_15_fu_13984_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_7_fu_13980_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_7_fu_13980_p1.read()));
}

void bn_relu_small::thread_add_ln1192_16_fu_7674_p2() {
    add_ln1192_16_fu_7674_p2 = (!sext_ln728_8_reg_25061.read().is_01() || !mul_ln1118_8_reg_25847.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_8_reg_25061.read()) + sc_bigint<32>(mul_ln1118_8_reg_25847.read()));
}

void bn_relu_small::thread_add_ln1192_17_fu_14234_p2() {
    add_ln1192_17_fu_14234_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_8_fu_14230_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_8_fu_14230_p1.read()));
}

void bn_relu_small::thread_add_ln1192_18_fu_7856_p2() {
    add_ln1192_18_fu_7856_p2 = (!sext_ln728_9_reg_25076.read().is_01() || !mul_ln1118_9_reg_25853.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_9_reg_25076.read()) + sc_bigint<32>(mul_ln1118_9_reg_25853.read()));
}

void bn_relu_small::thread_add_ln1192_19_fu_14484_p2() {
    add_ln1192_19_fu_14484_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_9_fu_14480_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_9_fu_14480_p1.read()));
}

void bn_relu_small::thread_add_ln1192_1_fu_12234_p2() {
    add_ln1192_1_fu_12234_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_fu_12230_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_fu_12230_p1.read()));
}

void bn_relu_small::thread_add_ln1192_20_fu_8038_p2() {
    add_ln1192_20_fu_8038_p2 = (!sext_ln728_10_reg_25091.read().is_01() || !mul_ln1118_10_reg_25859.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_10_reg_25091.read()) + sc_bigint<32>(mul_ln1118_10_reg_25859.read()));
}

void bn_relu_small::thread_add_ln1192_21_fu_14734_p2() {
    add_ln1192_21_fu_14734_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_10_fu_14730_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_10_fu_14730_p1.read()));
}

void bn_relu_small::thread_add_ln1192_22_fu_8220_p2() {
    add_ln1192_22_fu_8220_p2 = (!sext_ln728_11_reg_25106.read().is_01() || !mul_ln1118_11_reg_25865.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_11_reg_25106.read()) + sc_bigint<32>(mul_ln1118_11_reg_25865.read()));
}

void bn_relu_small::thread_add_ln1192_23_fu_14984_p2() {
    add_ln1192_23_fu_14984_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_11_fu_14980_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_11_fu_14980_p1.read()));
}

void bn_relu_small::thread_add_ln1192_24_fu_8402_p2() {
    add_ln1192_24_fu_8402_p2 = (!sext_ln728_12_reg_25121.read().is_01() || !mul_ln1118_12_reg_25871.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_12_reg_25121.read()) + sc_bigint<32>(mul_ln1118_12_reg_25871.read()));
}

void bn_relu_small::thread_add_ln1192_25_fu_15234_p2() {
    add_ln1192_25_fu_15234_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_12_fu_15230_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_12_fu_15230_p1.read()));
}

void bn_relu_small::thread_add_ln1192_26_fu_8584_p2() {
    add_ln1192_26_fu_8584_p2 = (!sext_ln728_13_reg_25136.read().is_01() || !mul_ln1118_13_reg_25877.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_13_reg_25136.read()) + sc_bigint<32>(mul_ln1118_13_reg_25877.read()));
}

void bn_relu_small::thread_add_ln1192_27_fu_15484_p2() {
    add_ln1192_27_fu_15484_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_13_fu_15480_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_13_fu_15480_p1.read()));
}

void bn_relu_small::thread_add_ln1192_28_fu_8766_p2() {
    add_ln1192_28_fu_8766_p2 = (!sext_ln728_14_reg_25151.read().is_01() || !mul_ln1118_14_reg_25883.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_14_reg_25151.read()) + sc_bigint<32>(mul_ln1118_14_reg_25883.read()));
}

void bn_relu_small::thread_add_ln1192_29_fu_15734_p2() {
    add_ln1192_29_fu_15734_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_14_fu_15730_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_14_fu_15730_p1.read()));
}

void bn_relu_small::thread_add_ln1192_2_fu_6400_p2() {
    add_ln1192_2_fu_6400_p2 = (!sext_ln728_1_reg_24956.read().is_01() || !mul_ln1118_1_reg_25805.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_1_reg_24956.read()) + sc_bigint<32>(mul_ln1118_1_reg_25805.read()));
}

void bn_relu_small::thread_add_ln1192_30_fu_8948_p2() {
    add_ln1192_30_fu_8948_p2 = (!sext_ln728_15_reg_25166.read().is_01() || !mul_ln1118_15_reg_25889.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_15_reg_25166.read()) + sc_bigint<32>(mul_ln1118_15_reg_25889.read()));
}

void bn_relu_small::thread_add_ln1192_31_fu_15984_p2() {
    add_ln1192_31_fu_15984_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_15_fu_15980_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_15_fu_15980_p1.read()));
}

void bn_relu_small::thread_add_ln1192_32_fu_9130_p2() {
    add_ln1192_32_fu_9130_p2 = (!sext_ln728_16_reg_25181.read().is_01() || !mul_ln1118_16_reg_25895.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_16_reg_25181.read()) + sc_bigint<32>(mul_ln1118_16_reg_25895.read()));
}

void bn_relu_small::thread_add_ln1192_33_fu_16234_p2() {
    add_ln1192_33_fu_16234_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_16_fu_16230_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_16_fu_16230_p1.read()));
}

void bn_relu_small::thread_add_ln1192_34_fu_9312_p2() {
    add_ln1192_34_fu_9312_p2 = (!sext_ln728_17_reg_25196.read().is_01() || !mul_ln1118_17_reg_25901.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_17_reg_25196.read()) + sc_bigint<32>(mul_ln1118_17_reg_25901.read()));
}

void bn_relu_small::thread_add_ln1192_35_fu_16484_p2() {
    add_ln1192_35_fu_16484_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_17_fu_16480_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_17_fu_16480_p1.read()));
}

void bn_relu_small::thread_add_ln1192_36_fu_9494_p2() {
    add_ln1192_36_fu_9494_p2 = (!sext_ln728_18_reg_25211.read().is_01() || !mul_ln1118_18_reg_25907.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_18_reg_25211.read()) + sc_bigint<32>(mul_ln1118_18_reg_25907.read()));
}

void bn_relu_small::thread_add_ln1192_37_fu_16734_p2() {
    add_ln1192_37_fu_16734_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_18_fu_16730_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_18_fu_16730_p1.read()));
}

void bn_relu_small::thread_add_ln1192_38_fu_9676_p2() {
    add_ln1192_38_fu_9676_p2 = (!sext_ln728_19_reg_25226.read().is_01() || !mul_ln1118_19_reg_25913.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_19_reg_25226.read()) + sc_bigint<32>(mul_ln1118_19_reg_25913.read()));
}

void bn_relu_small::thread_add_ln1192_39_fu_16984_p2() {
    add_ln1192_39_fu_16984_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_19_fu_16980_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_19_fu_16980_p1.read()));
}

void bn_relu_small::thread_add_ln1192_3_fu_12484_p2() {
    add_ln1192_3_fu_12484_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_1_fu_12480_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_1_fu_12480_p1.read()));
}

void bn_relu_small::thread_add_ln1192_40_fu_9858_p2() {
    add_ln1192_40_fu_9858_p2 = (!sext_ln728_20_reg_25241.read().is_01() || !mul_ln1118_20_reg_25919.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_20_reg_25241.read()) + sc_bigint<32>(mul_ln1118_20_reg_25919.read()));
}

void bn_relu_small::thread_add_ln1192_41_fu_17234_p2() {
    add_ln1192_41_fu_17234_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_20_fu_17230_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_20_fu_17230_p1.read()));
}

void bn_relu_small::thread_add_ln1192_42_fu_10040_p2() {
    add_ln1192_42_fu_10040_p2 = (!sext_ln728_21_reg_25256.read().is_01() || !mul_ln1118_21_reg_25925.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_21_reg_25256.read()) + sc_bigint<32>(mul_ln1118_21_reg_25925.read()));
}

void bn_relu_small::thread_add_ln1192_43_fu_17484_p2() {
    add_ln1192_43_fu_17484_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_21_fu_17480_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_21_fu_17480_p1.read()));
}

void bn_relu_small::thread_add_ln1192_44_fu_10222_p2() {
    add_ln1192_44_fu_10222_p2 = (!sext_ln728_22_reg_25271.read().is_01() || !mul_ln1118_22_reg_25931.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_22_reg_25271.read()) + sc_bigint<32>(mul_ln1118_22_reg_25931.read()));
}

void bn_relu_small::thread_add_ln1192_45_fu_17734_p2() {
    add_ln1192_45_fu_17734_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_22_fu_17730_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_22_fu_17730_p1.read()));
}

void bn_relu_small::thread_add_ln1192_46_fu_10404_p2() {
    add_ln1192_46_fu_10404_p2 = (!sext_ln728_23_reg_25286.read().is_01() || !mul_ln1118_23_reg_25937.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_23_reg_25286.read()) + sc_bigint<32>(mul_ln1118_23_reg_25937.read()));
}

void bn_relu_small::thread_add_ln1192_47_fu_17984_p2() {
    add_ln1192_47_fu_17984_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_23_fu_17980_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_23_fu_17980_p1.read()));
}

void bn_relu_small::thread_add_ln1192_48_fu_10586_p2() {
    add_ln1192_48_fu_10586_p2 = (!sext_ln728_24_reg_25301.read().is_01() || !mul_ln1118_24_reg_25943.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_24_reg_25301.read()) + sc_bigint<32>(mul_ln1118_24_reg_25943.read()));
}

void bn_relu_small::thread_add_ln1192_49_fu_18234_p2() {
    add_ln1192_49_fu_18234_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_24_fu_18230_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_24_fu_18230_p1.read()));
}

void bn_relu_small::thread_add_ln1192_4_fu_6582_p2() {
    add_ln1192_4_fu_6582_p2 = (!sext_ln728_2_reg_24971.read().is_01() || !mul_ln1118_2_reg_25811.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_2_reg_24971.read()) + sc_bigint<32>(mul_ln1118_2_reg_25811.read()));
}

void bn_relu_small::thread_add_ln1192_50_fu_10768_p2() {
    add_ln1192_50_fu_10768_p2 = (!sext_ln728_25_reg_25316.read().is_01() || !mul_ln1118_25_reg_25949.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_25_reg_25316.read()) + sc_bigint<32>(mul_ln1118_25_reg_25949.read()));
}

void bn_relu_small::thread_add_ln1192_51_fu_18484_p2() {
    add_ln1192_51_fu_18484_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_25_fu_18480_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_25_fu_18480_p1.read()));
}

void bn_relu_small::thread_add_ln1192_52_fu_10950_p2() {
    add_ln1192_52_fu_10950_p2 = (!sext_ln728_26_reg_25331.read().is_01() || !mul_ln1118_26_reg_25955.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_26_reg_25331.read()) + sc_bigint<32>(mul_ln1118_26_reg_25955.read()));
}

void bn_relu_small::thread_add_ln1192_53_fu_18734_p2() {
    add_ln1192_53_fu_18734_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_26_fu_18730_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_26_fu_18730_p1.read()));
}

void bn_relu_small::thread_add_ln1192_54_fu_11132_p2() {
    add_ln1192_54_fu_11132_p2 = (!sext_ln728_27_reg_25346.read().is_01() || !mul_ln1118_27_reg_25961.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_27_reg_25346.read()) + sc_bigint<32>(mul_ln1118_27_reg_25961.read()));
}

void bn_relu_small::thread_add_ln1192_55_fu_18984_p2() {
    add_ln1192_55_fu_18984_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_27_fu_18980_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_27_fu_18980_p1.read()));
}

void bn_relu_small::thread_add_ln1192_56_fu_11314_p2() {
    add_ln1192_56_fu_11314_p2 = (!sext_ln728_28_reg_25361.read().is_01() || !mul_ln1118_28_reg_25967.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_28_reg_25361.read()) + sc_bigint<32>(mul_ln1118_28_reg_25967.read()));
}

void bn_relu_small::thread_add_ln1192_57_fu_19234_p2() {
    add_ln1192_57_fu_19234_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_28_fu_19230_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_28_fu_19230_p1.read()));
}

void bn_relu_small::thread_add_ln1192_58_fu_11496_p2() {
    add_ln1192_58_fu_11496_p2 = (!sext_ln728_29_reg_25376.read().is_01() || !mul_ln1118_29_reg_25973.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_29_reg_25376.read()) + sc_bigint<32>(mul_ln1118_29_reg_25973.read()));
}

void bn_relu_small::thread_add_ln1192_59_fu_19484_p2() {
    add_ln1192_59_fu_19484_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_29_fu_19480_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_29_fu_19480_p1.read()));
}

void bn_relu_small::thread_add_ln1192_5_fu_12734_p2() {
    add_ln1192_5_fu_12734_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_2_fu_12730_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_2_fu_12730_p1.read()));
}

void bn_relu_small::thread_add_ln1192_60_fu_11678_p2() {
    add_ln1192_60_fu_11678_p2 = (!sext_ln728_30_reg_25391.read().is_01() || !mul_ln1118_30_reg_25979.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_30_reg_25391.read()) + sc_bigint<32>(mul_ln1118_30_reg_25979.read()));
}

void bn_relu_small::thread_add_ln1192_61_fu_19734_p2() {
    add_ln1192_61_fu_19734_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_30_fu_19730_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_30_fu_19730_p1.read()));
}

void bn_relu_small::thread_add_ln1192_62_fu_11860_p2() {
    add_ln1192_62_fu_11860_p2 = (!sext_ln728_31_reg_25406.read().is_01() || !mul_ln1118_31_reg_25985.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_31_reg_25406.read()) + sc_bigint<32>(mul_ln1118_31_reg_25985.read()));
}

void bn_relu_small::thread_add_ln1192_63_fu_19984_p2() {
    add_ln1192_63_fu_19984_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_31_fu_19980_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_31_fu_19980_p1.read()));
}

void bn_relu_small::thread_add_ln1192_6_fu_6764_p2() {
    add_ln1192_6_fu_6764_p2 = (!sext_ln728_3_reg_24986.read().is_01() || !mul_ln1118_3_reg_25817.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_3_reg_24986.read()) + sc_bigint<32>(mul_ln1118_3_reg_25817.read()));
}

void bn_relu_small::thread_add_ln1192_7_fu_12984_p2() {
    add_ln1192_7_fu_12984_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_3_fu_12980_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_3_fu_12980_p1.read()));
}

void bn_relu_small::thread_add_ln1192_8_fu_6946_p2() {
    add_ln1192_8_fu_6946_p2 = (!sext_ln728_4_reg_25001.read().is_01() || !mul_ln1118_4_reg_25823.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_4_reg_25001.read()) + sc_bigint<32>(mul_ln1118_4_reg_25823.read()));
}

void bn_relu_small::thread_add_ln1192_9_fu_13234_p2() {
    add_ln1192_9_fu_13234_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_4_fu_13230_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_4_fu_13230_p1.read()));
}

void bn_relu_small::thread_add_ln1192_fu_6218_p2() {
    add_ln1192_fu_6218_p2 = (!sext_ln728_reg_24941.read().is_01() || !mul_ln1118_reg_25799.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln728_reg_24941.read()) + sc_bigint<32>(mul_ln1118_reg_25799.read()));
}

void bn_relu_small::thread_add_ln291_fu_2060_p2() {
    add_ln291_fu_2060_p2 = (!indvar_flatten_reg_1240.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(indvar_flatten_reg_1240.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void bn_relu_small::thread_add_ln295_fu_2129_p2() {
    add_ln295_fu_2129_p2 = (!ap_const_lv10_1C3.is_01() || !zext_ln295_1_fu_2125_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1C3) + sc_biguint<10>(zext_ln295_1_fu_2125_p1.read()));
}

void bn_relu_small::thread_add_ln302_1_fu_20065_p2() {
    add_ln302_1_fu_20065_p2 = (!zext_ln302_fu_20061_p1.read().is_01() || !mul_ln302_mid2_reg_27532.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln302_fu_20061_p1.read()) + sc_biguint<32>(mul_ln302_mid2_reg_27532.read()));
}

void bn_relu_small::thread_add_ln302_fu_20055_p2() {
    add_ln302_fu_20055_p2 = (!ap_const_lv8_71.is_01() || !zext_ln292_fu_20052_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_71) + sc_biguint<8>(zext_ln292_fu_20052_p1.read()));
}

void bn_relu_small::thread_add_ln414_1_fu_6213_p2() {
    add_ln414_1_fu_6213_p2 = (!zext_ln291_reg_25421.read().is_01() || !add_ln414_fu_6208_p2.read().is_01())? sc_lv<40>(): (sc_biguint<40>(zext_ln291_reg_25421.read()) + sc_biguint<40>(add_ln414_fu_6208_p2.read()));
}

void bn_relu_small::thread_add_ln414_fu_6208_p2() {
    add_ln414_fu_6208_p2 = (!mul_ln414_reg_25794.read().is_01() || !zext_ln414_fu_6205_p1.read().is_01())? sc_lv<40>(): (sc_biguint<40>(mul_ln414_reg_25794.read()) + sc_biguint<40>(zext_ln414_fu_6205_p1.read()));
}

void bn_relu_small::thread_add_ln415_10_fu_7174_p2() {
    add_ln415_10_fu_7174_p2 = (!zext_ln415_10_fu_7170_p1.read().is_01() || !trunc_ln708_s_fu_7140_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_10_fu_7170_p1.read()) + sc_biguint<16>(trunc_ln708_s_fu_7140_p4.read()));
}

void bn_relu_small::thread_add_ln415_11_fu_20786_p2() {
    add_ln415_11_fu_20786_p2 = (!trunc_ln708_10_reg_27725.read().is_01() || !zext_ln415_11_fu_20783_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_10_reg_27725.read()) + sc_biguint<2>(zext_ln415_11_fu_20783_p1.read()));
}

void bn_relu_small::thread_add_ln415_12_fu_7356_p2() {
    add_ln415_12_fu_7356_p2 = (!zext_ln415_12_fu_7352_p1.read().is_01() || !trunc_ln708_11_fu_7322_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_12_fu_7352_p1.read()) + sc_biguint<16>(trunc_ln708_11_fu_7322_p4.read()));
}

void bn_relu_small::thread_add_ln415_13_fu_20926_p2() {
    add_ln415_13_fu_20926_p2 = (!trunc_ln708_12_reg_27758.read().is_01() || !zext_ln415_13_fu_20923_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_12_reg_27758.read()) + sc_biguint<2>(zext_ln415_13_fu_20923_p1.read()));
}

void bn_relu_small::thread_add_ln415_14_fu_7538_p2() {
    add_ln415_14_fu_7538_p2 = (!zext_ln415_14_fu_7534_p1.read().is_01() || !trunc_ln708_13_fu_7504_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_14_fu_7534_p1.read()) + sc_biguint<16>(trunc_ln708_13_fu_7504_p4.read()));
}

void bn_relu_small::thread_add_ln415_15_fu_21066_p2() {
    add_ln415_15_fu_21066_p2 = (!trunc_ln708_14_reg_27791.read().is_01() || !zext_ln415_15_fu_21063_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_14_reg_27791.read()) + sc_biguint<2>(zext_ln415_15_fu_21063_p1.read()));
}

void bn_relu_small::thread_add_ln415_16_fu_7720_p2() {
    add_ln415_16_fu_7720_p2 = (!zext_ln415_16_fu_7716_p1.read().is_01() || !trunc_ln708_15_fu_7686_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_16_fu_7716_p1.read()) + sc_biguint<16>(trunc_ln708_15_fu_7686_p4.read()));
}

void bn_relu_small::thread_add_ln415_17_fu_21206_p2() {
    add_ln415_17_fu_21206_p2 = (!trunc_ln708_16_reg_27824.read().is_01() || !zext_ln415_17_fu_21203_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_16_reg_27824.read()) + sc_biguint<2>(zext_ln415_17_fu_21203_p1.read()));
}

void bn_relu_small::thread_add_ln415_18_fu_7902_p2() {
    add_ln415_18_fu_7902_p2 = (!zext_ln415_18_fu_7898_p1.read().is_01() || !trunc_ln708_17_fu_7868_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_18_fu_7898_p1.read()) + sc_biguint<16>(trunc_ln708_17_fu_7868_p4.read()));
}

void bn_relu_small::thread_add_ln415_19_fu_21346_p2() {
    add_ln415_19_fu_21346_p2 = (!trunc_ln708_18_reg_27857.read().is_01() || !zext_ln415_19_fu_21343_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_18_reg_27857.read()) + sc_biguint<2>(zext_ln415_19_fu_21343_p1.read()));
}

void bn_relu_small::thread_add_ln415_1_fu_20086_p2() {
    add_ln415_1_fu_20086_p2 = (!trunc_ln708_1_reg_27560.read().is_01() || !zext_ln415_1_fu_20083_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_1_reg_27560.read()) + sc_biguint<2>(zext_ln415_1_fu_20083_p1.read()));
}

void bn_relu_small::thread_add_ln415_20_fu_8084_p2() {
    add_ln415_20_fu_8084_p2 = (!zext_ln415_20_fu_8080_p1.read().is_01() || !trunc_ln708_19_fu_8050_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_20_fu_8080_p1.read()) + sc_biguint<16>(trunc_ln708_19_fu_8050_p4.read()));
}

void bn_relu_small::thread_add_ln415_21_fu_21486_p2() {
    add_ln415_21_fu_21486_p2 = (!trunc_ln708_20_reg_27890.read().is_01() || !zext_ln415_21_fu_21483_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_20_reg_27890.read()) + sc_biguint<2>(zext_ln415_21_fu_21483_p1.read()));
}

void bn_relu_small::thread_add_ln415_22_fu_8266_p2() {
    add_ln415_22_fu_8266_p2 = (!zext_ln415_22_fu_8262_p1.read().is_01() || !trunc_ln708_21_fu_8232_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_22_fu_8262_p1.read()) + sc_biguint<16>(trunc_ln708_21_fu_8232_p4.read()));
}

void bn_relu_small::thread_add_ln415_23_fu_21626_p2() {
    add_ln415_23_fu_21626_p2 = (!trunc_ln708_22_reg_27923.read().is_01() || !zext_ln415_23_fu_21623_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_22_reg_27923.read()) + sc_biguint<2>(zext_ln415_23_fu_21623_p1.read()));
}

void bn_relu_small::thread_add_ln415_24_fu_8448_p2() {
    add_ln415_24_fu_8448_p2 = (!zext_ln415_24_fu_8444_p1.read().is_01() || !trunc_ln708_23_fu_8414_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_24_fu_8444_p1.read()) + sc_biguint<16>(trunc_ln708_23_fu_8414_p4.read()));
}

void bn_relu_small::thread_add_ln415_25_fu_21766_p2() {
    add_ln415_25_fu_21766_p2 = (!trunc_ln708_24_reg_27956.read().is_01() || !zext_ln415_25_fu_21763_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_24_reg_27956.read()) + sc_biguint<2>(zext_ln415_25_fu_21763_p1.read()));
}

void bn_relu_small::thread_add_ln415_26_fu_8630_p2() {
    add_ln415_26_fu_8630_p2 = (!zext_ln415_26_fu_8626_p1.read().is_01() || !trunc_ln708_25_fu_8596_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_26_fu_8626_p1.read()) + sc_biguint<16>(trunc_ln708_25_fu_8596_p4.read()));
}

void bn_relu_small::thread_add_ln415_27_fu_21906_p2() {
    add_ln415_27_fu_21906_p2 = (!trunc_ln708_26_reg_27989.read().is_01() || !zext_ln415_27_fu_21903_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_26_reg_27989.read()) + sc_biguint<2>(zext_ln415_27_fu_21903_p1.read()));
}

void bn_relu_small::thread_add_ln415_28_fu_8812_p2() {
    add_ln415_28_fu_8812_p2 = (!zext_ln415_28_fu_8808_p1.read().is_01() || !trunc_ln708_27_fu_8778_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_28_fu_8808_p1.read()) + sc_biguint<16>(trunc_ln708_27_fu_8778_p4.read()));
}

void bn_relu_small::thread_add_ln415_29_fu_22046_p2() {
    add_ln415_29_fu_22046_p2 = (!trunc_ln708_28_reg_28022.read().is_01() || !zext_ln415_29_fu_22043_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_28_reg_28022.read()) + sc_biguint<2>(zext_ln415_29_fu_22043_p1.read()));
}

void bn_relu_small::thread_add_ln415_2_fu_6446_p2() {
    add_ln415_2_fu_6446_p2 = (!zext_ln415_2_fu_6442_p1.read().is_01() || !trunc_ln708_2_fu_6412_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_2_fu_6442_p1.read()) + sc_biguint<16>(trunc_ln708_2_fu_6412_p4.read()));
}

void bn_relu_small::thread_add_ln415_30_fu_8994_p2() {
    add_ln415_30_fu_8994_p2 = (!zext_ln415_30_fu_8990_p1.read().is_01() || !trunc_ln708_29_fu_8960_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_30_fu_8990_p1.read()) + sc_biguint<16>(trunc_ln708_29_fu_8960_p4.read()));
}

void bn_relu_small::thread_add_ln415_31_fu_22186_p2() {
    add_ln415_31_fu_22186_p2 = (!trunc_ln708_30_reg_28055.read().is_01() || !zext_ln415_31_fu_22183_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_30_reg_28055.read()) + sc_biguint<2>(zext_ln415_31_fu_22183_p1.read()));
}

void bn_relu_small::thread_add_ln415_32_fu_9176_p2() {
    add_ln415_32_fu_9176_p2 = (!zext_ln415_32_fu_9172_p1.read().is_01() || !trunc_ln708_31_fu_9142_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_32_fu_9172_p1.read()) + sc_biguint<16>(trunc_ln708_31_fu_9142_p4.read()));
}

void bn_relu_small::thread_add_ln415_33_fu_22326_p2() {
    add_ln415_33_fu_22326_p2 = (!trunc_ln708_32_reg_28088.read().is_01() || !zext_ln415_33_fu_22323_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_32_reg_28088.read()) + sc_biguint<2>(zext_ln415_33_fu_22323_p1.read()));
}

void bn_relu_small::thread_add_ln415_34_fu_9358_p2() {
    add_ln415_34_fu_9358_p2 = (!zext_ln415_34_fu_9354_p1.read().is_01() || !trunc_ln708_33_fu_9324_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_34_fu_9354_p1.read()) + sc_biguint<16>(trunc_ln708_33_fu_9324_p4.read()));
}

void bn_relu_small::thread_add_ln415_35_fu_22466_p2() {
    add_ln415_35_fu_22466_p2 = (!trunc_ln708_34_reg_28121.read().is_01() || !zext_ln415_35_fu_22463_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_34_reg_28121.read()) + sc_biguint<2>(zext_ln415_35_fu_22463_p1.read()));
}

void bn_relu_small::thread_add_ln415_36_fu_9540_p2() {
    add_ln415_36_fu_9540_p2 = (!zext_ln415_36_fu_9536_p1.read().is_01() || !trunc_ln708_35_fu_9506_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_36_fu_9536_p1.read()) + sc_biguint<16>(trunc_ln708_35_fu_9506_p4.read()));
}

void bn_relu_small::thread_add_ln415_37_fu_22606_p2() {
    add_ln415_37_fu_22606_p2 = (!trunc_ln708_36_reg_28154.read().is_01() || !zext_ln415_37_fu_22603_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_36_reg_28154.read()) + sc_biguint<2>(zext_ln415_37_fu_22603_p1.read()));
}

void bn_relu_small::thread_add_ln415_38_fu_9722_p2() {
    add_ln415_38_fu_9722_p2 = (!zext_ln415_38_fu_9718_p1.read().is_01() || !trunc_ln708_37_fu_9688_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_38_fu_9718_p1.read()) + sc_biguint<16>(trunc_ln708_37_fu_9688_p4.read()));
}

void bn_relu_small::thread_add_ln415_39_fu_22746_p2() {
    add_ln415_39_fu_22746_p2 = (!trunc_ln708_38_reg_28187.read().is_01() || !zext_ln415_39_fu_22743_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_38_reg_28187.read()) + sc_biguint<2>(zext_ln415_39_fu_22743_p1.read()));
}

void bn_relu_small::thread_add_ln415_3_fu_20226_p2() {
    add_ln415_3_fu_20226_p2 = (!trunc_ln708_3_reg_27593.read().is_01() || !zext_ln415_3_fu_20223_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_3_reg_27593.read()) + sc_biguint<2>(zext_ln415_3_fu_20223_p1.read()));
}

void bn_relu_small::thread_add_ln415_40_fu_9904_p2() {
    add_ln415_40_fu_9904_p2 = (!zext_ln415_40_fu_9900_p1.read().is_01() || !trunc_ln708_39_fu_9870_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_40_fu_9900_p1.read()) + sc_biguint<16>(trunc_ln708_39_fu_9870_p4.read()));
}

void bn_relu_small::thread_add_ln415_41_fu_22886_p2() {
    add_ln415_41_fu_22886_p2 = (!trunc_ln708_40_reg_28220.read().is_01() || !zext_ln415_41_fu_22883_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_40_reg_28220.read()) + sc_biguint<2>(zext_ln415_41_fu_22883_p1.read()));
}

void bn_relu_small::thread_add_ln415_42_fu_10086_p2() {
    add_ln415_42_fu_10086_p2 = (!zext_ln415_42_fu_10082_p1.read().is_01() || !trunc_ln708_41_fu_10052_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_42_fu_10082_p1.read()) + sc_biguint<16>(trunc_ln708_41_fu_10052_p4.read()));
}

void bn_relu_small::thread_add_ln415_43_fu_23026_p2() {
    add_ln415_43_fu_23026_p2 = (!trunc_ln708_42_reg_28253.read().is_01() || !zext_ln415_43_fu_23023_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_42_reg_28253.read()) + sc_biguint<2>(zext_ln415_43_fu_23023_p1.read()));
}

void bn_relu_small::thread_add_ln415_44_fu_10268_p2() {
    add_ln415_44_fu_10268_p2 = (!zext_ln415_44_fu_10264_p1.read().is_01() || !trunc_ln708_43_fu_10234_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_44_fu_10264_p1.read()) + sc_biguint<16>(trunc_ln708_43_fu_10234_p4.read()));
}

void bn_relu_small::thread_add_ln415_45_fu_23166_p2() {
    add_ln415_45_fu_23166_p2 = (!trunc_ln708_44_reg_28286.read().is_01() || !zext_ln415_45_fu_23163_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_44_reg_28286.read()) + sc_biguint<2>(zext_ln415_45_fu_23163_p1.read()));
}

void bn_relu_small::thread_add_ln415_46_fu_10450_p2() {
    add_ln415_46_fu_10450_p2 = (!zext_ln415_46_fu_10446_p1.read().is_01() || !trunc_ln708_45_fu_10416_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_46_fu_10446_p1.read()) + sc_biguint<16>(trunc_ln708_45_fu_10416_p4.read()));
}

void bn_relu_small::thread_add_ln415_47_fu_23306_p2() {
    add_ln415_47_fu_23306_p2 = (!trunc_ln708_46_reg_28319.read().is_01() || !zext_ln415_47_fu_23303_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_46_reg_28319.read()) + sc_biguint<2>(zext_ln415_47_fu_23303_p1.read()));
}

void bn_relu_small::thread_add_ln415_48_fu_10632_p2() {
    add_ln415_48_fu_10632_p2 = (!zext_ln415_48_fu_10628_p1.read().is_01() || !trunc_ln708_47_fu_10598_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_48_fu_10628_p1.read()) + sc_biguint<16>(trunc_ln708_47_fu_10598_p4.read()));
}

void bn_relu_small::thread_add_ln415_49_fu_23446_p2() {
    add_ln415_49_fu_23446_p2 = (!trunc_ln708_48_reg_28352.read().is_01() || !zext_ln415_49_fu_23443_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_48_reg_28352.read()) + sc_biguint<2>(zext_ln415_49_fu_23443_p1.read()));
}

void bn_relu_small::thread_add_ln415_4_fu_6628_p2() {
    add_ln415_4_fu_6628_p2 = (!zext_ln415_4_fu_6624_p1.read().is_01() || !trunc_ln708_4_fu_6594_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_4_fu_6624_p1.read()) + sc_biguint<16>(trunc_ln708_4_fu_6594_p4.read()));
}

void bn_relu_small::thread_add_ln415_50_fu_10814_p2() {
    add_ln415_50_fu_10814_p2 = (!zext_ln415_50_fu_10810_p1.read().is_01() || !trunc_ln708_49_fu_10780_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_50_fu_10810_p1.read()) + sc_biguint<16>(trunc_ln708_49_fu_10780_p4.read()));
}

void bn_relu_small::thread_add_ln415_51_fu_23586_p2() {
    add_ln415_51_fu_23586_p2 = (!trunc_ln708_50_reg_28385.read().is_01() || !zext_ln415_51_fu_23583_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_50_reg_28385.read()) + sc_biguint<2>(zext_ln415_51_fu_23583_p1.read()));
}

void bn_relu_small::thread_add_ln415_52_fu_10996_p2() {
    add_ln415_52_fu_10996_p2 = (!zext_ln415_52_fu_10992_p1.read().is_01() || !trunc_ln708_51_fu_10962_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_52_fu_10992_p1.read()) + sc_biguint<16>(trunc_ln708_51_fu_10962_p4.read()));
}

void bn_relu_small::thread_add_ln415_53_fu_23726_p2() {
    add_ln415_53_fu_23726_p2 = (!trunc_ln708_52_reg_28418.read().is_01() || !zext_ln415_53_fu_23723_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_52_reg_28418.read()) + sc_biguint<2>(zext_ln415_53_fu_23723_p1.read()));
}

void bn_relu_small::thread_add_ln415_54_fu_11178_p2() {
    add_ln415_54_fu_11178_p2 = (!zext_ln415_54_fu_11174_p1.read().is_01() || !trunc_ln708_53_fu_11144_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_54_fu_11174_p1.read()) + sc_biguint<16>(trunc_ln708_53_fu_11144_p4.read()));
}

void bn_relu_small::thread_add_ln415_55_fu_23866_p2() {
    add_ln415_55_fu_23866_p2 = (!trunc_ln708_54_reg_28451.read().is_01() || !zext_ln415_55_fu_23863_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_54_reg_28451.read()) + sc_biguint<2>(zext_ln415_55_fu_23863_p1.read()));
}

void bn_relu_small::thread_add_ln415_56_fu_11360_p2() {
    add_ln415_56_fu_11360_p2 = (!zext_ln415_56_fu_11356_p1.read().is_01() || !trunc_ln708_55_fu_11326_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_56_fu_11356_p1.read()) + sc_biguint<16>(trunc_ln708_55_fu_11326_p4.read()));
}

void bn_relu_small::thread_add_ln415_57_fu_24006_p2() {
    add_ln415_57_fu_24006_p2 = (!trunc_ln708_56_reg_28484.read().is_01() || !zext_ln415_57_fu_24003_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_56_reg_28484.read()) + sc_biguint<2>(zext_ln415_57_fu_24003_p1.read()));
}

void bn_relu_small::thread_add_ln415_58_fu_11542_p2() {
    add_ln415_58_fu_11542_p2 = (!zext_ln415_58_fu_11538_p1.read().is_01() || !trunc_ln708_57_fu_11508_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_58_fu_11538_p1.read()) + sc_biguint<16>(trunc_ln708_57_fu_11508_p4.read()));
}

void bn_relu_small::thread_add_ln415_59_fu_24146_p2() {
    add_ln415_59_fu_24146_p2 = (!trunc_ln708_58_reg_28517.read().is_01() || !zext_ln415_59_fu_24143_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_58_reg_28517.read()) + sc_biguint<2>(zext_ln415_59_fu_24143_p1.read()));
}

void bn_relu_small::thread_add_ln415_5_fu_20366_p2() {
    add_ln415_5_fu_20366_p2 = (!trunc_ln708_5_reg_27626.read().is_01() || !zext_ln415_5_fu_20363_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_5_reg_27626.read()) + sc_biguint<2>(zext_ln415_5_fu_20363_p1.read()));
}

void bn_relu_small::thread_add_ln415_60_fu_11724_p2() {
    add_ln415_60_fu_11724_p2 = (!zext_ln415_60_fu_11720_p1.read().is_01() || !trunc_ln708_59_fu_11690_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_60_fu_11720_p1.read()) + sc_biguint<16>(trunc_ln708_59_fu_11690_p4.read()));
}

void bn_relu_small::thread_add_ln415_61_fu_24286_p2() {
    add_ln415_61_fu_24286_p2 = (!trunc_ln708_60_reg_28550.read().is_01() || !zext_ln415_61_fu_24283_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_60_reg_28550.read()) + sc_biguint<2>(zext_ln415_61_fu_24283_p1.read()));
}

void bn_relu_small::thread_add_ln415_62_fu_11906_p2() {
    add_ln415_62_fu_11906_p2 = (!zext_ln415_62_fu_11902_p1.read().is_01() || !trunc_ln708_61_fu_11872_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_62_fu_11902_p1.read()) + sc_biguint<16>(trunc_ln708_61_fu_11872_p4.read()));
}

void bn_relu_small::thread_add_ln415_63_fu_24463_p2() {
    add_ln415_63_fu_24463_p2 = (!zext_ln415_63_fu_24460_p1.read().is_01() || !trunc_ln708_62_reg_28583.read().is_01())? sc_lv<2>(): (sc_biguint<2>(zext_ln415_63_fu_24460_p1.read()) + sc_biguint<2>(trunc_ln708_62_reg_28583.read()));
}

void bn_relu_small::thread_add_ln415_6_fu_6810_p2() {
    add_ln415_6_fu_6810_p2 = (!zext_ln415_6_fu_6806_p1.read().is_01() || !trunc_ln708_6_fu_6776_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_6_fu_6806_p1.read()) + sc_biguint<16>(trunc_ln708_6_fu_6776_p4.read()));
}

void bn_relu_small::thread_add_ln415_7_fu_20506_p2() {
    add_ln415_7_fu_20506_p2 = (!trunc_ln708_7_reg_27659.read().is_01() || !zext_ln415_7_fu_20503_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_7_reg_27659.read()) + sc_biguint<2>(zext_ln415_7_fu_20503_p1.read()));
}

void bn_relu_small::thread_add_ln415_8_fu_6992_p2() {
    add_ln415_8_fu_6992_p2 = (!zext_ln415_8_fu_6988_p1.read().is_01() || !trunc_ln708_8_fu_6958_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_8_fu_6988_p1.read()) + sc_biguint<16>(trunc_ln708_8_fu_6958_p4.read()));
}

void bn_relu_small::thread_add_ln415_9_fu_20646_p2() {
    add_ln415_9_fu_20646_p2 = (!trunc_ln708_9_reg_27692.read().is_01() || !zext_ln415_9_fu_20643_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_9_reg_27692.read()) + sc_biguint<2>(zext_ln415_9_fu_20643_p1.read()));
}

void bn_relu_small::thread_add_ln415_fu_6264_p2() {
    add_ln415_fu_6264_p2 = (!zext_ln415_fu_6260_p1.read().is_01() || !trunc_ln6_fu_6230_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_fu_6260_p1.read()) + sc_biguint<16>(trunc_ln6_fu_6230_p4.read()));
}

void bn_relu_small::thread_add_ln713_10_fu_8060_p2() {
    add_ln713_10_fu_8060_p2 = (!mul_ln1118_10_reg_25859.read().is_01() || !zext_ln1192_10_reg_25096.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_10_reg_25859.read()) + sc_biguint<32>(zext_ln1192_10_reg_25096.read()));
}

void bn_relu_small::thread_add_ln713_11_fu_8242_p2() {
    add_ln713_11_fu_8242_p2 = (!mul_ln1118_11_reg_25865.read().is_01() || !zext_ln1192_11_reg_25111.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_11_reg_25865.read()) + sc_biguint<32>(zext_ln1192_11_reg_25111.read()));
}

void bn_relu_small::thread_add_ln713_12_fu_8424_p2() {
    add_ln713_12_fu_8424_p2 = (!mul_ln1118_12_reg_25871.read().is_01() || !zext_ln1192_12_reg_25126.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_12_reg_25871.read()) + sc_biguint<32>(zext_ln1192_12_reg_25126.read()));
}

void bn_relu_small::thread_add_ln713_13_fu_8606_p2() {
    add_ln713_13_fu_8606_p2 = (!mul_ln1118_13_reg_25877.read().is_01() || !zext_ln1192_13_reg_25141.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_13_reg_25877.read()) + sc_biguint<32>(zext_ln1192_13_reg_25141.read()));
}

void bn_relu_small::thread_add_ln713_14_fu_8788_p2() {
    add_ln713_14_fu_8788_p2 = (!mul_ln1118_14_reg_25883.read().is_01() || !zext_ln1192_14_reg_25156.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_14_reg_25883.read()) + sc_biguint<32>(zext_ln1192_14_reg_25156.read()));
}

void bn_relu_small::thread_add_ln713_15_fu_8970_p2() {
    add_ln713_15_fu_8970_p2 = (!mul_ln1118_15_reg_25889.read().is_01() || !zext_ln1192_15_reg_25171.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_15_reg_25889.read()) + sc_biguint<32>(zext_ln1192_15_reg_25171.read()));
}

void bn_relu_small::thread_add_ln713_16_fu_9152_p2() {
    add_ln713_16_fu_9152_p2 = (!mul_ln1118_16_reg_25895.read().is_01() || !zext_ln1192_16_reg_25186.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_16_reg_25895.read()) + sc_biguint<32>(zext_ln1192_16_reg_25186.read()));
}

void bn_relu_small::thread_add_ln713_17_fu_9334_p2() {
    add_ln713_17_fu_9334_p2 = (!mul_ln1118_17_reg_25901.read().is_01() || !zext_ln1192_17_reg_25201.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_17_reg_25901.read()) + sc_biguint<32>(zext_ln1192_17_reg_25201.read()));
}

void bn_relu_small::thread_add_ln713_18_fu_9516_p2() {
    add_ln713_18_fu_9516_p2 = (!mul_ln1118_18_reg_25907.read().is_01() || !zext_ln1192_18_reg_25216.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_18_reg_25907.read()) + sc_biguint<32>(zext_ln1192_18_reg_25216.read()));
}

void bn_relu_small::thread_add_ln713_19_fu_9698_p2() {
    add_ln713_19_fu_9698_p2 = (!mul_ln1118_19_reg_25913.read().is_01() || !zext_ln1192_19_reg_25231.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_19_reg_25913.read()) + sc_biguint<32>(zext_ln1192_19_reg_25231.read()));
}

void bn_relu_small::thread_add_ln713_1_fu_6422_p2() {
    add_ln713_1_fu_6422_p2 = (!mul_ln1118_1_reg_25805.read().is_01() || !zext_ln1192_1_reg_24961.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_1_reg_25805.read()) + sc_biguint<32>(zext_ln1192_1_reg_24961.read()));
}

void bn_relu_small::thread_add_ln713_20_fu_9880_p2() {
    add_ln713_20_fu_9880_p2 = (!mul_ln1118_20_reg_25919.read().is_01() || !zext_ln1192_20_reg_25246.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_20_reg_25919.read()) + sc_biguint<32>(zext_ln1192_20_reg_25246.read()));
}

void bn_relu_small::thread_add_ln713_21_fu_10062_p2() {
    add_ln713_21_fu_10062_p2 = (!mul_ln1118_21_reg_25925.read().is_01() || !zext_ln1192_21_reg_25261.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_21_reg_25925.read()) + sc_biguint<32>(zext_ln1192_21_reg_25261.read()));
}

void bn_relu_small::thread_add_ln713_22_fu_10244_p2() {
    add_ln713_22_fu_10244_p2 = (!mul_ln1118_22_reg_25931.read().is_01() || !zext_ln1192_22_reg_25276.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_22_reg_25931.read()) + sc_biguint<32>(zext_ln1192_22_reg_25276.read()));
}

void bn_relu_small::thread_add_ln713_23_fu_10426_p2() {
    add_ln713_23_fu_10426_p2 = (!mul_ln1118_23_reg_25937.read().is_01() || !zext_ln1192_23_reg_25291.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_23_reg_25937.read()) + sc_biguint<32>(zext_ln1192_23_reg_25291.read()));
}

void bn_relu_small::thread_add_ln713_24_fu_10608_p2() {
    add_ln713_24_fu_10608_p2 = (!mul_ln1118_24_reg_25943.read().is_01() || !zext_ln1192_24_reg_25306.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_24_reg_25943.read()) + sc_biguint<32>(zext_ln1192_24_reg_25306.read()));
}

void bn_relu_small::thread_add_ln713_25_fu_10790_p2() {
    add_ln713_25_fu_10790_p2 = (!mul_ln1118_25_reg_25949.read().is_01() || !zext_ln1192_25_reg_25321.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_25_reg_25949.read()) + sc_biguint<32>(zext_ln1192_25_reg_25321.read()));
}

void bn_relu_small::thread_add_ln713_26_fu_10972_p2() {
    add_ln713_26_fu_10972_p2 = (!mul_ln1118_26_reg_25955.read().is_01() || !zext_ln1192_26_reg_25336.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_26_reg_25955.read()) + sc_biguint<32>(zext_ln1192_26_reg_25336.read()));
}

void bn_relu_small::thread_add_ln713_27_fu_11154_p2() {
    add_ln713_27_fu_11154_p2 = (!mul_ln1118_27_reg_25961.read().is_01() || !zext_ln1192_27_reg_25351.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_27_reg_25961.read()) + sc_biguint<32>(zext_ln1192_27_reg_25351.read()));
}

void bn_relu_small::thread_add_ln713_28_fu_11336_p2() {
    add_ln713_28_fu_11336_p2 = (!mul_ln1118_28_reg_25967.read().is_01() || !zext_ln1192_28_reg_25366.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_28_reg_25967.read()) + sc_biguint<32>(zext_ln1192_28_reg_25366.read()));
}

void bn_relu_small::thread_add_ln713_29_fu_11518_p2() {
    add_ln713_29_fu_11518_p2 = (!mul_ln1118_29_reg_25973.read().is_01() || !zext_ln1192_29_reg_25381.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_29_reg_25973.read()) + sc_biguint<32>(zext_ln1192_29_reg_25381.read()));
}

void bn_relu_small::thread_add_ln713_2_fu_6604_p2() {
    add_ln713_2_fu_6604_p2 = (!mul_ln1118_2_reg_25811.read().is_01() || !zext_ln1192_2_reg_24976.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_2_reg_25811.read()) + sc_biguint<32>(zext_ln1192_2_reg_24976.read()));
}

void bn_relu_small::thread_add_ln713_30_fu_11700_p2() {
    add_ln713_30_fu_11700_p2 = (!mul_ln1118_30_reg_25979.read().is_01() || !zext_ln1192_30_reg_25396.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_30_reg_25979.read()) + sc_biguint<32>(zext_ln1192_30_reg_25396.read()));
}

void bn_relu_small::thread_add_ln713_31_fu_11882_p2() {
    add_ln713_31_fu_11882_p2 = (!mul_ln1118_31_reg_25985.read().is_01() || !zext_ln1192_31_reg_25411.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_31_reg_25985.read()) + sc_biguint<32>(zext_ln1192_31_reg_25411.read()));
}

void bn_relu_small::thread_add_ln713_3_fu_6786_p2() {
    add_ln713_3_fu_6786_p2 = (!mul_ln1118_3_reg_25817.read().is_01() || !zext_ln1192_3_reg_24991.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_3_reg_25817.read()) + sc_biguint<32>(zext_ln1192_3_reg_24991.read()));
}

void bn_relu_small::thread_add_ln713_4_fu_6968_p2() {
    add_ln713_4_fu_6968_p2 = (!mul_ln1118_4_reg_25823.read().is_01() || !zext_ln1192_4_reg_25006.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_4_reg_25823.read()) + sc_biguint<32>(zext_ln1192_4_reg_25006.read()));
}

void bn_relu_small::thread_add_ln713_5_fu_7150_p2() {
    add_ln713_5_fu_7150_p2 = (!mul_ln1118_5_reg_25829.read().is_01() || !zext_ln1192_5_reg_25021.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_5_reg_25829.read()) + sc_biguint<32>(zext_ln1192_5_reg_25021.read()));
}

void bn_relu_small::thread_add_ln713_6_fu_7332_p2() {
    add_ln713_6_fu_7332_p2 = (!mul_ln1118_6_reg_25835.read().is_01() || !zext_ln1192_6_reg_25036.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_6_reg_25835.read()) + sc_biguint<32>(zext_ln1192_6_reg_25036.read()));
}

void bn_relu_small::thread_add_ln713_7_fu_7514_p2() {
    add_ln713_7_fu_7514_p2 = (!mul_ln1118_7_reg_25841.read().is_01() || !zext_ln1192_7_reg_25051.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_7_reg_25841.read()) + sc_biguint<32>(zext_ln1192_7_reg_25051.read()));
}

void bn_relu_small::thread_add_ln713_8_fu_7696_p2() {
    add_ln713_8_fu_7696_p2 = (!mul_ln1118_8_reg_25847.read().is_01() || !zext_ln1192_8_reg_25066.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_8_reg_25847.read()) + sc_biguint<32>(zext_ln1192_8_reg_25066.read()));
}

void bn_relu_small::thread_add_ln713_9_fu_7878_p2() {
    add_ln713_9_fu_7878_p2 = (!mul_ln1118_9_reg_25853.read().is_01() || !zext_ln1192_9_reg_25081.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_9_reg_25853.read()) + sc_biguint<32>(zext_ln1192_9_reg_25081.read()));
}

void bn_relu_small::thread_add_ln713_fu_6240_p2() {
    add_ln713_fu_6240_p2 = (!mul_ln1118_reg_25799.read().is_01() || !zext_ln1192_reg_24946.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_reg_25799.read()) + sc_biguint<32>(zext_ln1192_reg_24946.read()));
}

void bn_relu_small::thread_and_ln340_10_fu_21568_p2() {
    and_ln340_10_fu_21568_p2 = (or_ln785_64_fu_21546_p2.read() & or_ln340_182_fu_21562_p2.read());
}

void bn_relu_small::thread_and_ln340_11_fu_21708_p2() {
    and_ln340_11_fu_21708_p2 = (or_ln785_67_fu_21686_p2.read() & or_ln340_196_fu_21702_p2.read());
}

void bn_relu_small::thread_and_ln340_12_fu_21848_p2() {
    and_ln340_12_fu_21848_p2 = (or_ln785_70_fu_21826_p2.read() & or_ln340_210_fu_21842_p2.read());
}

void bn_relu_small::thread_and_ln340_13_fu_21988_p2() {
    and_ln340_13_fu_21988_p2 = (or_ln785_73_fu_21966_p2.read() & or_ln340_224_fu_21982_p2.read());
}

void bn_relu_small::thread_and_ln340_14_fu_22128_p2() {
    and_ln340_14_fu_22128_p2 = (or_ln785_76_fu_22106_p2.read() & or_ln340_238_fu_22122_p2.read());
}

void bn_relu_small::thread_and_ln340_15_fu_22268_p2() {
    and_ln340_15_fu_22268_p2 = (or_ln785_79_fu_22246_p2.read() & or_ln340_252_fu_22262_p2.read());
}

void bn_relu_small::thread_and_ln340_16_fu_22408_p2() {
    and_ln340_16_fu_22408_p2 = (or_ln785_82_fu_22386_p2.read() & or_ln340_257_fu_22402_p2.read());
}

void bn_relu_small::thread_and_ln340_17_fu_22548_p2() {
    and_ln340_17_fu_22548_p2 = (or_ln785_85_fu_22526_p2.read() & or_ln340_259_fu_22542_p2.read());
}

void bn_relu_small::thread_and_ln340_18_fu_22688_p2() {
    and_ln340_18_fu_22688_p2 = (or_ln785_88_fu_22666_p2.read() & or_ln340_261_fu_22682_p2.read());
}

void bn_relu_small::thread_and_ln340_19_fu_22828_p2() {
    and_ln340_19_fu_22828_p2 = (or_ln785_91_fu_22806_p2.read() & or_ln340_263_fu_22822_p2.read());
}

void bn_relu_small::thread_and_ln340_1_fu_20308_p2() {
    and_ln340_1_fu_20308_p2 = (or_ln785_35_fu_20286_p2.read() & or_ln340_52_fu_20302_p2.read());
}

void bn_relu_small::thread_and_ln340_20_fu_22968_p2() {
    and_ln340_20_fu_22968_p2 = (or_ln785_94_fu_22946_p2.read() & or_ln340_265_fu_22962_p2.read());
}

void bn_relu_small::thread_and_ln340_21_fu_23108_p2() {
    and_ln340_21_fu_23108_p2 = (or_ln785_97_fu_23086_p2.read() & or_ln340_267_fu_23102_p2.read());
}

void bn_relu_small::thread_and_ln340_22_fu_23248_p2() {
    and_ln340_22_fu_23248_p2 = (or_ln785_100_fu_23226_p2.read() & or_ln340_269_fu_23242_p2.read());
}

void bn_relu_small::thread_and_ln340_23_fu_23388_p2() {
    and_ln340_23_fu_23388_p2 = (or_ln785_103_fu_23366_p2.read() & or_ln340_271_fu_23382_p2.read());
}

void bn_relu_small::thread_and_ln340_24_fu_23528_p2() {
    and_ln340_24_fu_23528_p2 = (or_ln785_106_fu_23506_p2.read() & or_ln340_273_fu_23522_p2.read());
}

void bn_relu_small::thread_and_ln340_25_fu_23668_p2() {
    and_ln340_25_fu_23668_p2 = (or_ln785_109_fu_23646_p2.read() & or_ln340_275_fu_23662_p2.read());
}

void bn_relu_small::thread_and_ln340_26_fu_23808_p2() {
    and_ln340_26_fu_23808_p2 = (or_ln785_112_fu_23786_p2.read() & or_ln340_277_fu_23802_p2.read());
}

void bn_relu_small::thread_and_ln340_27_fu_23948_p2() {
    and_ln340_27_fu_23948_p2 = (or_ln785_115_fu_23926_p2.read() & or_ln340_279_fu_23942_p2.read());
}

void bn_relu_small::thread_and_ln340_28_fu_24088_p2() {
    and_ln340_28_fu_24088_p2 = (or_ln785_118_fu_24066_p2.read() & or_ln340_281_fu_24082_p2.read());
}

void bn_relu_small::thread_and_ln340_29_fu_24228_p2() {
    and_ln340_29_fu_24228_p2 = (or_ln785_121_fu_24206_p2.read() & or_ln340_283_fu_24222_p2.read());
}

void bn_relu_small::thread_and_ln340_2_fu_20448_p2() {
    and_ln340_2_fu_20448_p2 = (or_ln785_39_fu_20426_p2.read() & or_ln340_68_fu_20442_p2.read());
}

void bn_relu_small::thread_and_ln340_30_fu_24368_p2() {
    and_ln340_30_fu_24368_p2 = (or_ln785_124_fu_24346_p2.read() & or_ln340_285_fu_24362_p2.read());
}

void bn_relu_small::thread_and_ln340_31_fu_24545_p2() {
    and_ln340_31_fu_24545_p2 = (or_ln785_127_fu_24523_p2.read() & or_ln340_287_fu_24539_p2.read());
}

void bn_relu_small::thread_and_ln340_3_fu_20588_p2() {
    and_ln340_3_fu_20588_p2 = (or_ln785_43_fu_20566_p2.read() & or_ln340_84_fu_20582_p2.read());
}

void bn_relu_small::thread_and_ln340_4_fu_20728_p2() {
    and_ln340_4_fu_20728_p2 = (or_ln785_46_fu_20706_p2.read() & or_ln340_98_fu_20722_p2.read());
}

void bn_relu_small::thread_and_ln340_5_fu_20868_p2() {
    and_ln340_5_fu_20868_p2 = (or_ln785_49_fu_20846_p2.read() & or_ln340_112_fu_20862_p2.read());
}

void bn_relu_small::thread_and_ln340_6_fu_21008_p2() {
    and_ln340_6_fu_21008_p2 = (or_ln785_52_fu_20986_p2.read() & or_ln340_126_fu_21002_p2.read());
}

void bn_relu_small::thread_and_ln340_7_fu_21148_p2() {
    and_ln340_7_fu_21148_p2 = (or_ln785_55_fu_21126_p2.read() & or_ln340_140_fu_21142_p2.read());
}

void bn_relu_small::thread_and_ln340_8_fu_21288_p2() {
    and_ln340_8_fu_21288_p2 = (or_ln785_58_fu_21266_p2.read() & or_ln340_154_fu_21282_p2.read());
}

void bn_relu_small::thread_and_ln340_9_fu_21428_p2() {
    and_ln340_9_fu_21428_p2 = (or_ln785_61_fu_21406_p2.read() & or_ln340_168_fu_21422_p2.read());
}

void bn_relu_small::thread_and_ln340_fu_20168_p2() {
    and_ln340_fu_20168_p2 = (or_ln785_3_fu_20146_p2.read() & or_ln340_36_fu_20162_p2.read());
}

void bn_relu_small::thread_and_ln416_10_fu_7194_p2() {
    and_ln416_10_fu_7194_p2 = (tmp_179_fu_7154_p3.read() & xor_ln416_10_fu_7188_p2.read());
}

void bn_relu_small::thread_and_ln416_11_fu_20805_p2() {
    and_ln416_11_fu_20805_p2 = (tmp_187_fu_20776_p3.read() & xor_ln416_11_fu_20799_p2.read());
}

void bn_relu_small::thread_and_ln416_12_fu_7376_p2() {
    and_ln416_12_fu_7376_p2 = (tmp_194_fu_7336_p3.read() & xor_ln416_12_fu_7370_p2.read());
}

void bn_relu_small::thread_and_ln416_13_fu_20945_p2() {
    and_ln416_13_fu_20945_p2 = (tmp_202_fu_20916_p3.read() & xor_ln416_13_fu_20939_p2.read());
}

void bn_relu_small::thread_and_ln416_14_fu_7558_p2() {
    and_ln416_14_fu_7558_p2 = (tmp_209_fu_7518_p3.read() & xor_ln416_14_fu_7552_p2.read());
}

void bn_relu_small::thread_and_ln416_15_fu_21085_p2() {
    and_ln416_15_fu_21085_p2 = (tmp_217_fu_21056_p3.read() & xor_ln416_15_fu_21079_p2.read());
}

void bn_relu_small::thread_and_ln416_16_fu_7740_p2() {
    and_ln416_16_fu_7740_p2 = (tmp_224_fu_7700_p3.read() & xor_ln416_16_fu_7734_p2.read());
}

void bn_relu_small::thread_and_ln416_17_fu_21225_p2() {
    and_ln416_17_fu_21225_p2 = (tmp_232_fu_21196_p3.read() & xor_ln416_17_fu_21219_p2.read());
}

void bn_relu_small::thread_and_ln416_18_fu_7922_p2() {
    and_ln416_18_fu_7922_p2 = (tmp_239_fu_7882_p3.read() & xor_ln416_18_fu_7916_p2.read());
}

void bn_relu_small::thread_and_ln416_19_fu_21365_p2() {
    and_ln416_19_fu_21365_p2 = (tmp_247_fu_21336_p3.read() & xor_ln416_19_fu_21359_p2.read());
}

void bn_relu_small::thread_and_ln416_1_fu_20105_p2() {
    and_ln416_1_fu_20105_p2 = (tmp_112_fu_20076_p3.read() & xor_ln416_1_fu_20099_p2.read());
}

void bn_relu_small::thread_and_ln416_20_fu_8104_p2() {
    and_ln416_20_fu_8104_p2 = (tmp_254_fu_8064_p3.read() & xor_ln416_20_fu_8098_p2.read());
}

void bn_relu_small::thread_and_ln416_21_fu_21505_p2() {
    and_ln416_21_fu_21505_p2 = (tmp_262_fu_21476_p3.read() & xor_ln416_21_fu_21499_p2.read());
}

void bn_relu_small::thread_and_ln416_22_fu_8286_p2() {
    and_ln416_22_fu_8286_p2 = (tmp_269_fu_8246_p3.read() & xor_ln416_22_fu_8280_p2.read());
}

void bn_relu_small::thread_and_ln416_23_fu_21645_p2() {
    and_ln416_23_fu_21645_p2 = (tmp_277_fu_21616_p3.read() & xor_ln416_23_fu_21639_p2.read());
}

void bn_relu_small::thread_and_ln416_24_fu_8468_p2() {
    and_ln416_24_fu_8468_p2 = (tmp_284_fu_8428_p3.read() & xor_ln416_24_fu_8462_p2.read());
}

void bn_relu_small::thread_and_ln416_25_fu_21785_p2() {
    and_ln416_25_fu_21785_p2 = (tmp_292_fu_21756_p3.read() & xor_ln416_25_fu_21779_p2.read());
}

void bn_relu_small::thread_and_ln416_26_fu_8650_p2() {
    and_ln416_26_fu_8650_p2 = (tmp_299_fu_8610_p3.read() & xor_ln416_26_fu_8644_p2.read());
}

void bn_relu_small::thread_and_ln416_27_fu_21925_p2() {
    and_ln416_27_fu_21925_p2 = (tmp_307_fu_21896_p3.read() & xor_ln416_27_fu_21919_p2.read());
}

void bn_relu_small::thread_and_ln416_28_fu_8832_p2() {
    and_ln416_28_fu_8832_p2 = (tmp_314_fu_8792_p3.read() & xor_ln416_28_fu_8826_p2.read());
}

void bn_relu_small::thread_and_ln416_29_fu_22065_p2() {
    and_ln416_29_fu_22065_p2 = (tmp_322_fu_22036_p3.read() & xor_ln416_29_fu_22059_p2.read());
}

void bn_relu_small::thread_and_ln416_2_fu_6466_p2() {
    and_ln416_2_fu_6466_p2 = (tmp_119_fu_6426_p3.read() & xor_ln416_2_fu_6460_p2.read());
}

void bn_relu_small::thread_and_ln416_30_fu_9014_p2() {
    and_ln416_30_fu_9014_p2 = (tmp_329_fu_8974_p3.read() & xor_ln416_30_fu_9008_p2.read());
}

void bn_relu_small::thread_and_ln416_31_fu_22205_p2() {
    and_ln416_31_fu_22205_p2 = (tmp_337_fu_22176_p3.read() & xor_ln416_31_fu_22199_p2.read());
}

void bn_relu_small::thread_and_ln416_32_fu_9196_p2() {
    and_ln416_32_fu_9196_p2 = (tmp_344_fu_9156_p3.read() & xor_ln416_32_fu_9190_p2.read());
}

void bn_relu_small::thread_and_ln416_33_fu_22345_p2() {
    and_ln416_33_fu_22345_p2 = (tmp_352_fu_22316_p3.read() & xor_ln416_33_fu_22339_p2.read());
}

void bn_relu_small::thread_and_ln416_34_fu_9378_p2() {
    and_ln416_34_fu_9378_p2 = (tmp_359_fu_9338_p3.read() & xor_ln416_34_fu_9372_p2.read());
}

void bn_relu_small::thread_and_ln416_35_fu_22485_p2() {
    and_ln416_35_fu_22485_p2 = (tmp_367_fu_22456_p3.read() & xor_ln416_35_fu_22479_p2.read());
}

void bn_relu_small::thread_and_ln416_36_fu_9560_p2() {
    and_ln416_36_fu_9560_p2 = (tmp_374_fu_9520_p3.read() & xor_ln416_36_fu_9554_p2.read());
}

void bn_relu_small::thread_and_ln416_37_fu_22625_p2() {
    and_ln416_37_fu_22625_p2 = (tmp_382_fu_22596_p3.read() & xor_ln416_37_fu_22619_p2.read());
}

void bn_relu_small::thread_and_ln416_38_fu_9742_p2() {
    and_ln416_38_fu_9742_p2 = (tmp_389_fu_9702_p3.read() & xor_ln416_38_fu_9736_p2.read());
}

void bn_relu_small::thread_and_ln416_39_fu_22765_p2() {
    and_ln416_39_fu_22765_p2 = (tmp_397_fu_22736_p3.read() & xor_ln416_39_fu_22759_p2.read());
}

void bn_relu_small::thread_and_ln416_3_fu_20245_p2() {
    and_ln416_3_fu_20245_p2 = (tmp_127_fu_20216_p3.read() & xor_ln416_3_fu_20239_p2.read());
}

void bn_relu_small::thread_and_ln416_40_fu_9924_p2() {
    and_ln416_40_fu_9924_p2 = (tmp_404_fu_9884_p3.read() & xor_ln416_40_fu_9918_p2.read());
}

void bn_relu_small::thread_and_ln416_41_fu_22905_p2() {
    and_ln416_41_fu_22905_p2 = (tmp_412_fu_22876_p3.read() & xor_ln416_41_fu_22899_p2.read());
}

void bn_relu_small::thread_and_ln416_42_fu_10106_p2() {
    and_ln416_42_fu_10106_p2 = (tmp_419_fu_10066_p3.read() & xor_ln416_42_fu_10100_p2.read());
}

void bn_relu_small::thread_and_ln416_43_fu_23045_p2() {
    and_ln416_43_fu_23045_p2 = (tmp_427_fu_23016_p3.read() & xor_ln416_43_fu_23039_p2.read());
}

void bn_relu_small::thread_and_ln416_44_fu_10288_p2() {
    and_ln416_44_fu_10288_p2 = (tmp_434_fu_10248_p3.read() & xor_ln416_44_fu_10282_p2.read());
}

void bn_relu_small::thread_and_ln416_45_fu_23185_p2() {
    and_ln416_45_fu_23185_p2 = (tmp_442_fu_23156_p3.read() & xor_ln416_45_fu_23179_p2.read());
}

void bn_relu_small::thread_and_ln416_46_fu_10470_p2() {
    and_ln416_46_fu_10470_p2 = (tmp_449_fu_10430_p3.read() & xor_ln416_46_fu_10464_p2.read());
}

void bn_relu_small::thread_and_ln416_47_fu_23325_p2() {
    and_ln416_47_fu_23325_p2 = (tmp_457_fu_23296_p3.read() & xor_ln416_47_fu_23319_p2.read());
}

void bn_relu_small::thread_and_ln416_48_fu_10652_p2() {
    and_ln416_48_fu_10652_p2 = (tmp_464_fu_10612_p3.read() & xor_ln416_48_fu_10646_p2.read());
}

void bn_relu_small::thread_and_ln416_49_fu_23465_p2() {
    and_ln416_49_fu_23465_p2 = (tmp_472_fu_23436_p3.read() & xor_ln416_49_fu_23459_p2.read());
}

void bn_relu_small::thread_and_ln416_4_fu_6648_p2() {
    and_ln416_4_fu_6648_p2 = (tmp_134_fu_6608_p3.read() & xor_ln416_4_fu_6642_p2.read());
}

void bn_relu_small::thread_and_ln416_50_fu_10834_p2() {
    and_ln416_50_fu_10834_p2 = (tmp_479_fu_10794_p3.read() & xor_ln416_50_fu_10828_p2.read());
}

void bn_relu_small::thread_and_ln416_51_fu_23605_p2() {
    and_ln416_51_fu_23605_p2 = (tmp_487_fu_23576_p3.read() & xor_ln416_51_fu_23599_p2.read());
}

void bn_relu_small::thread_and_ln416_52_fu_11016_p2() {
    and_ln416_52_fu_11016_p2 = (tmp_494_fu_10976_p3.read() & xor_ln416_52_fu_11010_p2.read());
}

void bn_relu_small::thread_and_ln416_53_fu_23745_p2() {
    and_ln416_53_fu_23745_p2 = (tmp_502_fu_23716_p3.read() & xor_ln416_53_fu_23739_p2.read());
}

void bn_relu_small::thread_and_ln416_54_fu_11198_p2() {
    and_ln416_54_fu_11198_p2 = (tmp_509_fu_11158_p3.read() & xor_ln416_54_fu_11192_p2.read());
}

void bn_relu_small::thread_and_ln416_55_fu_23885_p2() {
    and_ln416_55_fu_23885_p2 = (tmp_517_fu_23856_p3.read() & xor_ln416_55_fu_23879_p2.read());
}

void bn_relu_small::thread_and_ln416_56_fu_11380_p2() {
    and_ln416_56_fu_11380_p2 = (tmp_524_fu_11340_p3.read() & xor_ln416_56_fu_11374_p2.read());
}

void bn_relu_small::thread_and_ln416_57_fu_24025_p2() {
    and_ln416_57_fu_24025_p2 = (tmp_532_fu_23996_p3.read() & xor_ln416_57_fu_24019_p2.read());
}

void bn_relu_small::thread_and_ln416_58_fu_11562_p2() {
    and_ln416_58_fu_11562_p2 = (tmp_539_fu_11522_p3.read() & xor_ln416_58_fu_11556_p2.read());
}

void bn_relu_small::thread_and_ln416_59_fu_24165_p2() {
    and_ln416_59_fu_24165_p2 = (tmp_547_fu_24136_p3.read() & xor_ln416_59_fu_24159_p2.read());
}

void bn_relu_small::thread_and_ln416_5_fu_20385_p2() {
    and_ln416_5_fu_20385_p2 = (tmp_142_fu_20356_p3.read() & xor_ln416_5_fu_20379_p2.read());
}

void bn_relu_small::thread_and_ln416_60_fu_11744_p2() {
    and_ln416_60_fu_11744_p2 = (tmp_554_fu_11704_p3.read() & xor_ln416_60_fu_11738_p2.read());
}

void bn_relu_small::thread_and_ln416_61_fu_24305_p2() {
    and_ln416_61_fu_24305_p2 = (tmp_562_fu_24276_p3.read() & xor_ln416_61_fu_24299_p2.read());
}

void bn_relu_small::thread_and_ln416_62_fu_11926_p2() {
    and_ln416_62_fu_11926_p2 = (tmp_569_fu_11886_p3.read() & xor_ln416_62_fu_11920_p2.read());
}

void bn_relu_small::thread_and_ln416_63_fu_24482_p2() {
    and_ln416_63_fu_24482_p2 = (tmp_577_fu_24453_p3.read() & xor_ln416_63_fu_24476_p2.read());
}

void bn_relu_small::thread_and_ln416_6_fu_6830_p2() {
    and_ln416_6_fu_6830_p2 = (tmp_149_fu_6790_p3.read() & xor_ln416_6_fu_6824_p2.read());
}

void bn_relu_small::thread_and_ln416_7_fu_20525_p2() {
    and_ln416_7_fu_20525_p2 = (tmp_157_fu_20496_p3.read() & xor_ln416_7_fu_20519_p2.read());
}

void bn_relu_small::thread_and_ln416_8_fu_7012_p2() {
    and_ln416_8_fu_7012_p2 = (tmp_164_fu_6972_p3.read() & xor_ln416_8_fu_7006_p2.read());
}

void bn_relu_small::thread_and_ln416_9_fu_20665_p2() {
    and_ln416_9_fu_20665_p2 = (tmp_172_fu_20636_p3.read() & xor_ln416_9_fu_20659_p2.read());
}

void bn_relu_small::thread_and_ln416_fu_6284_p2() {
    and_ln416_fu_6284_p2 = (tmp_104_fu_6244_p3.read() & xor_ln416_fu_6278_p2.read());
}

void bn_relu_small::thread_and_ln700_10_fu_21541_p2() {
    and_ln700_10_fu_21541_p2 = (tmp_261_reg_27883.read() & xor_ln781_10_fu_21535_p2.read());
}

void bn_relu_small::thread_and_ln700_11_fu_21681_p2() {
    and_ln700_11_fu_21681_p2 = (tmp_276_reg_27916.read() & xor_ln781_11_fu_21675_p2.read());
}

void bn_relu_small::thread_and_ln700_12_fu_21821_p2() {
    and_ln700_12_fu_21821_p2 = (tmp_291_reg_27949.read() & xor_ln781_12_fu_21815_p2.read());
}

void bn_relu_small::thread_and_ln700_13_fu_21961_p2() {
    and_ln700_13_fu_21961_p2 = (tmp_306_reg_27982.read() & xor_ln781_13_fu_21955_p2.read());
}

void bn_relu_small::thread_and_ln700_14_fu_22101_p2() {
    and_ln700_14_fu_22101_p2 = (tmp_321_reg_28015.read() & xor_ln781_14_fu_22095_p2.read());
}

void bn_relu_small::thread_and_ln700_15_fu_22241_p2() {
    and_ln700_15_fu_22241_p2 = (tmp_336_reg_28048.read() & xor_ln781_15_fu_22235_p2.read());
}

void bn_relu_small::thread_and_ln700_16_fu_22381_p2() {
    and_ln700_16_fu_22381_p2 = (tmp_351_reg_28081.read() & xor_ln781_16_fu_22375_p2.read());
}

void bn_relu_small::thread_and_ln700_17_fu_22521_p2() {
    and_ln700_17_fu_22521_p2 = (tmp_366_reg_28114.read() & xor_ln781_17_fu_22515_p2.read());
}

void bn_relu_small::thread_and_ln700_18_fu_22661_p2() {
    and_ln700_18_fu_22661_p2 = (tmp_381_reg_28147.read() & xor_ln781_18_fu_22655_p2.read());
}

void bn_relu_small::thread_and_ln700_19_fu_22801_p2() {
    and_ln700_19_fu_22801_p2 = (tmp_396_reg_28180.read() & xor_ln781_19_fu_22795_p2.read());
}

void bn_relu_small::thread_and_ln700_1_fu_20281_p2() {
    and_ln700_1_fu_20281_p2 = (tmp_126_reg_27586.read() & xor_ln781_1_fu_20275_p2.read());
}

void bn_relu_small::thread_and_ln700_20_fu_22941_p2() {
    and_ln700_20_fu_22941_p2 = (tmp_411_reg_28213.read() & xor_ln781_20_fu_22935_p2.read());
}

void bn_relu_small::thread_and_ln700_21_fu_23081_p2() {
    and_ln700_21_fu_23081_p2 = (tmp_426_reg_28246.read() & xor_ln781_21_fu_23075_p2.read());
}

void bn_relu_small::thread_and_ln700_22_fu_23221_p2() {
    and_ln700_22_fu_23221_p2 = (tmp_441_reg_28279.read() & xor_ln781_22_fu_23215_p2.read());
}

void bn_relu_small::thread_and_ln700_23_fu_23361_p2() {
    and_ln700_23_fu_23361_p2 = (tmp_456_reg_28312.read() & xor_ln781_23_fu_23355_p2.read());
}

void bn_relu_small::thread_and_ln700_24_fu_23501_p2() {
    and_ln700_24_fu_23501_p2 = (tmp_471_reg_28345.read() & xor_ln781_24_fu_23495_p2.read());
}

void bn_relu_small::thread_and_ln700_25_fu_23641_p2() {
    and_ln700_25_fu_23641_p2 = (tmp_486_reg_28378.read() & xor_ln781_25_fu_23635_p2.read());
}

void bn_relu_small::thread_and_ln700_26_fu_23781_p2() {
    and_ln700_26_fu_23781_p2 = (tmp_501_reg_28411.read() & xor_ln781_26_fu_23775_p2.read());
}

void bn_relu_small::thread_and_ln700_27_fu_23921_p2() {
    and_ln700_27_fu_23921_p2 = (tmp_516_reg_28444.read() & xor_ln781_27_fu_23915_p2.read());
}

void bn_relu_small::thread_and_ln700_28_fu_24061_p2() {
    and_ln700_28_fu_24061_p2 = (tmp_531_reg_28477.read() & xor_ln781_28_fu_24055_p2.read());
}

void bn_relu_small::thread_and_ln700_29_fu_24201_p2() {
    and_ln700_29_fu_24201_p2 = (tmp_546_reg_28510.read() & xor_ln781_29_fu_24195_p2.read());
}

void bn_relu_small::thread_and_ln700_2_fu_20421_p2() {
    and_ln700_2_fu_20421_p2 = (tmp_141_reg_27619.read() & xor_ln781_2_fu_20415_p2.read());
}

void bn_relu_small::thread_and_ln700_30_fu_24341_p2() {
    and_ln700_30_fu_24341_p2 = (tmp_561_reg_28543.read() & xor_ln781_30_fu_24335_p2.read());
}

void bn_relu_small::thread_and_ln700_31_fu_24518_p2() {
    and_ln700_31_fu_24518_p2 = (tmp_576_reg_28576.read() & xor_ln781_31_fu_24512_p2.read());
}

void bn_relu_small::thread_and_ln700_3_fu_20561_p2() {
    and_ln700_3_fu_20561_p2 = (tmp_156_reg_27652.read() & xor_ln781_3_fu_20555_p2.read());
}

void bn_relu_small::thread_and_ln700_4_fu_20701_p2() {
    and_ln700_4_fu_20701_p2 = (tmp_171_reg_27685.read() & xor_ln781_4_fu_20695_p2.read());
}

void bn_relu_small::thread_and_ln700_5_fu_20841_p2() {
    and_ln700_5_fu_20841_p2 = (tmp_186_reg_27718.read() & xor_ln781_5_fu_20835_p2.read());
}

void bn_relu_small::thread_and_ln700_6_fu_20981_p2() {
    and_ln700_6_fu_20981_p2 = (tmp_201_reg_27751.read() & xor_ln781_6_fu_20975_p2.read());
}

void bn_relu_small::thread_and_ln700_7_fu_21121_p2() {
    and_ln700_7_fu_21121_p2 = (tmp_216_reg_27784.read() & xor_ln781_7_fu_21115_p2.read());
}

void bn_relu_small::thread_and_ln700_8_fu_21261_p2() {
    and_ln700_8_fu_21261_p2 = (tmp_231_reg_27817.read() & xor_ln781_8_fu_21255_p2.read());
}

void bn_relu_small::thread_and_ln700_9_fu_21401_p2() {
    and_ln700_9_fu_21401_p2 = (tmp_246_reg_27850.read() & xor_ln781_9_fu_21395_p2.read());
}

void bn_relu_small::thread_and_ln700_fu_20141_p2() {
    and_ln700_fu_20141_p2 = (tmp_111_reg_27553.read() & xor_ln781_fu_20135_p2.read());
}

void bn_relu_small::thread_and_ln779_10_fu_8170_p2() {
    and_ln779_10_fu_8170_p2 = (icmp_ln879_30_fu_8128_p2.read() & xor_ln779_10_fu_8164_p2.read());
}

void bn_relu_small::thread_and_ln779_11_fu_8352_p2() {
    and_ln779_11_fu_8352_p2 = (icmp_ln879_33_fu_8310_p2.read() & xor_ln779_11_fu_8346_p2.read());
}

void bn_relu_small::thread_and_ln779_12_fu_8534_p2() {
    and_ln779_12_fu_8534_p2 = (icmp_ln879_36_fu_8492_p2.read() & xor_ln779_12_fu_8528_p2.read());
}

void bn_relu_small::thread_and_ln779_13_fu_8716_p2() {
    and_ln779_13_fu_8716_p2 = (icmp_ln879_39_fu_8674_p2.read() & xor_ln779_13_fu_8710_p2.read());
}

void bn_relu_small::thread_and_ln779_14_fu_8898_p2() {
    and_ln779_14_fu_8898_p2 = (icmp_ln879_42_fu_8856_p2.read() & xor_ln779_14_fu_8892_p2.read());
}

void bn_relu_small::thread_and_ln779_15_fu_9080_p2() {
    and_ln779_15_fu_9080_p2 = (icmp_ln879_45_fu_9038_p2.read() & xor_ln779_15_fu_9074_p2.read());
}

void bn_relu_small::thread_and_ln779_16_fu_9262_p2() {
    and_ln779_16_fu_9262_p2 = (icmp_ln879_48_fu_9220_p2.read() & xor_ln779_16_fu_9256_p2.read());
}

void bn_relu_small::thread_and_ln779_17_fu_9444_p2() {
    and_ln779_17_fu_9444_p2 = (icmp_ln879_51_fu_9402_p2.read() & xor_ln779_17_fu_9438_p2.read());
}

void bn_relu_small::thread_and_ln779_18_fu_9626_p2() {
    and_ln779_18_fu_9626_p2 = (icmp_ln879_54_fu_9584_p2.read() & xor_ln779_18_fu_9620_p2.read());
}

void bn_relu_small::thread_and_ln779_19_fu_9808_p2() {
    and_ln779_19_fu_9808_p2 = (icmp_ln879_57_fu_9766_p2.read() & xor_ln779_19_fu_9802_p2.read());
}

void bn_relu_small::thread_and_ln779_1_fu_6532_p2() {
    and_ln779_1_fu_6532_p2 = (icmp_ln879_3_fu_6490_p2.read() & xor_ln779_1_fu_6526_p2.read());
}

void bn_relu_small::thread_and_ln779_20_fu_9990_p2() {
    and_ln779_20_fu_9990_p2 = (icmp_ln879_60_fu_9948_p2.read() & xor_ln779_20_fu_9984_p2.read());
}

void bn_relu_small::thread_and_ln779_21_fu_10172_p2() {
    and_ln779_21_fu_10172_p2 = (icmp_ln879_63_fu_10130_p2.read() & xor_ln779_21_fu_10166_p2.read());
}

void bn_relu_small::thread_and_ln779_22_fu_10354_p2() {
    and_ln779_22_fu_10354_p2 = (icmp_ln879_66_fu_10312_p2.read() & xor_ln779_22_fu_10348_p2.read());
}

void bn_relu_small::thread_and_ln779_23_fu_10536_p2() {
    and_ln779_23_fu_10536_p2 = (icmp_ln879_69_fu_10494_p2.read() & xor_ln779_23_fu_10530_p2.read());
}

void bn_relu_small::thread_and_ln779_24_fu_10718_p2() {
    and_ln779_24_fu_10718_p2 = (icmp_ln879_72_fu_10676_p2.read() & xor_ln779_24_fu_10712_p2.read());
}

void bn_relu_small::thread_and_ln779_25_fu_10900_p2() {
    and_ln779_25_fu_10900_p2 = (icmp_ln879_75_fu_10858_p2.read() & xor_ln779_25_fu_10894_p2.read());
}

void bn_relu_small::thread_and_ln779_26_fu_11082_p2() {
    and_ln779_26_fu_11082_p2 = (icmp_ln879_78_fu_11040_p2.read() & xor_ln779_26_fu_11076_p2.read());
}

void bn_relu_small::thread_and_ln779_27_fu_11264_p2() {
    and_ln779_27_fu_11264_p2 = (icmp_ln879_81_fu_11222_p2.read() & xor_ln779_27_fu_11258_p2.read());
}

void bn_relu_small::thread_and_ln779_28_fu_11446_p2() {
    and_ln779_28_fu_11446_p2 = (icmp_ln879_84_fu_11404_p2.read() & xor_ln779_28_fu_11440_p2.read());
}

void bn_relu_small::thread_and_ln779_29_fu_11628_p2() {
    and_ln779_29_fu_11628_p2 = (icmp_ln879_87_fu_11586_p2.read() & xor_ln779_29_fu_11622_p2.read());
}

void bn_relu_small::thread_and_ln779_2_fu_6714_p2() {
    and_ln779_2_fu_6714_p2 = (icmp_ln879_6_fu_6672_p2.read() & xor_ln779_2_fu_6708_p2.read());
}

void bn_relu_small::thread_and_ln779_30_fu_11810_p2() {
    and_ln779_30_fu_11810_p2 = (icmp_ln879_90_fu_11768_p2.read() & xor_ln779_30_fu_11804_p2.read());
}

void bn_relu_small::thread_and_ln779_31_fu_11992_p2() {
    and_ln779_31_fu_11992_p2 = (icmp_ln879_93_fu_11950_p2.read() & xor_ln779_31_fu_11986_p2.read());
}

void bn_relu_small::thread_and_ln779_3_fu_6896_p2() {
    and_ln779_3_fu_6896_p2 = (icmp_ln879_9_fu_6854_p2.read() & xor_ln779_3_fu_6890_p2.read());
}

void bn_relu_small::thread_and_ln779_4_fu_7078_p2() {
    and_ln779_4_fu_7078_p2 = (icmp_ln879_12_fu_7036_p2.read() & xor_ln779_4_fu_7072_p2.read());
}

void bn_relu_small::thread_and_ln779_5_fu_7260_p2() {
    and_ln779_5_fu_7260_p2 = (icmp_ln879_15_fu_7218_p2.read() & xor_ln779_5_fu_7254_p2.read());
}

void bn_relu_small::thread_and_ln779_6_fu_7442_p2() {
    and_ln779_6_fu_7442_p2 = (icmp_ln879_18_fu_7400_p2.read() & xor_ln779_6_fu_7436_p2.read());
}

void bn_relu_small::thread_and_ln779_7_fu_7624_p2() {
    and_ln779_7_fu_7624_p2 = (icmp_ln879_21_fu_7582_p2.read() & xor_ln779_7_fu_7618_p2.read());
}

void bn_relu_small::thread_and_ln779_8_fu_7806_p2() {
    and_ln779_8_fu_7806_p2 = (icmp_ln879_24_fu_7764_p2.read() & xor_ln779_8_fu_7800_p2.read());
}

void bn_relu_small::thread_and_ln779_9_fu_7988_p2() {
    and_ln779_9_fu_7988_p2 = (icmp_ln879_27_fu_7946_p2.read() & xor_ln779_9_fu_7982_p2.read());
}

void bn_relu_small::thread_and_ln779_fu_6350_p2() {
    and_ln779_fu_6350_p2 = (icmp_ln879_fu_6308_p2.read() & xor_ln779_fu_6344_p2.read());
}

void bn_relu_small::thread_and_ln781_10_fu_8184_p2() {
    and_ln781_10_fu_8184_p2 = (and_ln416_20_fu_8104_p2.read() & icmp_ln879_31_fu_8144_p2.read());
}

void bn_relu_small::thread_and_ln781_11_fu_8366_p2() {
    and_ln781_11_fu_8366_p2 = (and_ln416_22_fu_8286_p2.read() & icmp_ln879_34_fu_8326_p2.read());
}

void bn_relu_small::thread_and_ln781_12_fu_8548_p2() {
    and_ln781_12_fu_8548_p2 = (and_ln416_24_fu_8468_p2.read() & icmp_ln879_37_fu_8508_p2.read());
}

void bn_relu_small::thread_and_ln781_13_fu_8730_p2() {
    and_ln781_13_fu_8730_p2 = (and_ln416_26_fu_8650_p2.read() & icmp_ln879_40_fu_8690_p2.read());
}

void bn_relu_small::thread_and_ln781_14_fu_8912_p2() {
    and_ln781_14_fu_8912_p2 = (and_ln416_28_fu_8832_p2.read() & icmp_ln879_43_fu_8872_p2.read());
}

void bn_relu_small::thread_and_ln781_15_fu_9094_p2() {
    and_ln781_15_fu_9094_p2 = (and_ln416_30_fu_9014_p2.read() & icmp_ln879_46_fu_9054_p2.read());
}

void bn_relu_small::thread_and_ln781_16_fu_9276_p2() {
    and_ln781_16_fu_9276_p2 = (and_ln416_32_fu_9196_p2.read() & icmp_ln879_49_fu_9236_p2.read());
}

void bn_relu_small::thread_and_ln781_17_fu_9458_p2() {
    and_ln781_17_fu_9458_p2 = (and_ln416_34_fu_9378_p2.read() & icmp_ln879_52_fu_9418_p2.read());
}

void bn_relu_small::thread_and_ln781_18_fu_9640_p2() {
    and_ln781_18_fu_9640_p2 = (and_ln416_36_fu_9560_p2.read() & icmp_ln879_55_fu_9600_p2.read());
}

void bn_relu_small::thread_and_ln781_19_fu_9822_p2() {
    and_ln781_19_fu_9822_p2 = (and_ln416_38_fu_9742_p2.read() & icmp_ln879_58_fu_9782_p2.read());
}

void bn_relu_small::thread_and_ln781_1_fu_20129_p2() {
    and_ln781_1_fu_20129_p2 = (and_ln416_1_fu_20105_p2.read() & icmp_ln879_2_fu_20111_p2.read());
}

void bn_relu_small::thread_and_ln781_20_fu_10004_p2() {
    and_ln781_20_fu_10004_p2 = (and_ln416_40_fu_9924_p2.read() & icmp_ln879_61_fu_9964_p2.read());
}

void bn_relu_small::thread_and_ln781_21_fu_10186_p2() {
    and_ln781_21_fu_10186_p2 = (and_ln416_42_fu_10106_p2.read() & icmp_ln879_64_fu_10146_p2.read());
}

void bn_relu_small::thread_and_ln781_22_fu_10368_p2() {
    and_ln781_22_fu_10368_p2 = (and_ln416_44_fu_10288_p2.read() & icmp_ln879_67_fu_10328_p2.read());
}

void bn_relu_small::thread_and_ln781_23_fu_10550_p2() {
    and_ln781_23_fu_10550_p2 = (and_ln416_46_fu_10470_p2.read() & icmp_ln879_70_fu_10510_p2.read());
}

void bn_relu_small::thread_and_ln781_24_fu_10732_p2() {
    and_ln781_24_fu_10732_p2 = (and_ln416_48_fu_10652_p2.read() & icmp_ln879_73_fu_10692_p2.read());
}

void bn_relu_small::thread_and_ln781_25_fu_10914_p2() {
    and_ln781_25_fu_10914_p2 = (and_ln416_50_fu_10834_p2.read() & icmp_ln879_76_fu_10874_p2.read());
}

void bn_relu_small::thread_and_ln781_26_fu_11096_p2() {
    and_ln781_26_fu_11096_p2 = (and_ln416_52_fu_11016_p2.read() & icmp_ln879_79_fu_11056_p2.read());
}

void bn_relu_small::thread_and_ln781_27_fu_11278_p2() {
    and_ln781_27_fu_11278_p2 = (and_ln416_54_fu_11198_p2.read() & icmp_ln879_82_fu_11238_p2.read());
}

void bn_relu_small::thread_and_ln781_28_fu_11460_p2() {
    and_ln781_28_fu_11460_p2 = (and_ln416_56_fu_11380_p2.read() & icmp_ln879_85_fu_11420_p2.read());
}

void bn_relu_small::thread_and_ln781_29_fu_11642_p2() {
    and_ln781_29_fu_11642_p2 = (and_ln416_58_fu_11562_p2.read() & icmp_ln879_88_fu_11602_p2.read());
}

void bn_relu_small::thread_and_ln781_2_fu_6728_p2() {
    and_ln781_2_fu_6728_p2 = (and_ln416_4_fu_6648_p2.read() & icmp_ln879_7_fu_6688_p2.read());
}

void bn_relu_small::thread_and_ln781_30_fu_11824_p2() {
    and_ln781_30_fu_11824_p2 = (and_ln416_60_fu_11744_p2.read() & icmp_ln879_91_fu_11784_p2.read());
}

void bn_relu_small::thread_and_ln781_31_fu_12006_p2() {
    and_ln781_31_fu_12006_p2 = (and_ln416_62_fu_11926_p2.read() & icmp_ln879_94_fu_11966_p2.read());
}

void bn_relu_small::thread_and_ln781_32_fu_6546_p2() {
    and_ln781_32_fu_6546_p2 = (and_ln416_2_fu_6466_p2.read() & icmp_ln879_4_fu_6506_p2.read());
}

void bn_relu_small::thread_and_ln781_33_fu_20269_p2() {
    and_ln781_33_fu_20269_p2 = (and_ln416_3_fu_20245_p2.read() & icmp_ln879_5_fu_20251_p2.read());
}

void bn_relu_small::thread_and_ln781_34_fu_20409_p2() {
    and_ln781_34_fu_20409_p2 = (and_ln416_5_fu_20385_p2.read() & icmp_ln879_8_fu_20391_p2.read());
}

void bn_relu_small::thread_and_ln781_35_fu_20549_p2() {
    and_ln781_35_fu_20549_p2 = (and_ln416_7_fu_20525_p2.read() & icmp_ln879_11_fu_20531_p2.read());
}

void bn_relu_small::thread_and_ln781_36_fu_20689_p2() {
    and_ln781_36_fu_20689_p2 = (and_ln416_9_fu_20665_p2.read() & icmp_ln879_14_fu_20671_p2.read());
}

void bn_relu_small::thread_and_ln781_37_fu_20829_p2() {
    and_ln781_37_fu_20829_p2 = (and_ln416_11_fu_20805_p2.read() & icmp_ln879_17_fu_20811_p2.read());
}

void bn_relu_small::thread_and_ln781_38_fu_20969_p2() {
    and_ln781_38_fu_20969_p2 = (and_ln416_13_fu_20945_p2.read() & icmp_ln879_20_fu_20951_p2.read());
}

void bn_relu_small::thread_and_ln781_39_fu_21109_p2() {
    and_ln781_39_fu_21109_p2 = (and_ln416_15_fu_21085_p2.read() & icmp_ln879_23_fu_21091_p2.read());
}

void bn_relu_small::thread_and_ln781_3_fu_6910_p2() {
    and_ln781_3_fu_6910_p2 = (and_ln416_6_fu_6830_p2.read() & icmp_ln879_10_fu_6870_p2.read());
}

void bn_relu_small::thread_and_ln781_40_fu_21249_p2() {
    and_ln781_40_fu_21249_p2 = (and_ln416_17_fu_21225_p2.read() & icmp_ln879_26_fu_21231_p2.read());
}

void bn_relu_small::thread_and_ln781_41_fu_21389_p2() {
    and_ln781_41_fu_21389_p2 = (and_ln416_19_fu_21365_p2.read() & icmp_ln879_29_fu_21371_p2.read());
}

void bn_relu_small::thread_and_ln781_42_fu_21529_p2() {
    and_ln781_42_fu_21529_p2 = (and_ln416_21_fu_21505_p2.read() & icmp_ln879_32_fu_21511_p2.read());
}

void bn_relu_small::thread_and_ln781_43_fu_21669_p2() {
    and_ln781_43_fu_21669_p2 = (and_ln416_23_fu_21645_p2.read() & icmp_ln879_35_fu_21651_p2.read());
}

void bn_relu_small::thread_and_ln781_44_fu_21809_p2() {
    and_ln781_44_fu_21809_p2 = (and_ln416_25_fu_21785_p2.read() & icmp_ln879_38_fu_21791_p2.read());
}

void bn_relu_small::thread_and_ln781_45_fu_21949_p2() {
    and_ln781_45_fu_21949_p2 = (and_ln416_27_fu_21925_p2.read() & icmp_ln879_41_fu_21931_p2.read());
}

void bn_relu_small::thread_and_ln781_46_fu_22089_p2() {
    and_ln781_46_fu_22089_p2 = (and_ln416_29_fu_22065_p2.read() & icmp_ln879_44_fu_22071_p2.read());
}

void bn_relu_small::thread_and_ln781_47_fu_22229_p2() {
    and_ln781_47_fu_22229_p2 = (and_ln416_31_fu_22205_p2.read() & icmp_ln879_47_fu_22211_p2.read());
}

void bn_relu_small::thread_and_ln781_48_fu_22369_p2() {
    and_ln781_48_fu_22369_p2 = (and_ln416_33_fu_22345_p2.read() & icmp_ln879_50_fu_22351_p2.read());
}

void bn_relu_small::thread_and_ln781_49_fu_22509_p2() {
    and_ln781_49_fu_22509_p2 = (and_ln416_35_fu_22485_p2.read() & icmp_ln879_53_fu_22491_p2.read());
}

void bn_relu_small::thread_and_ln781_4_fu_7092_p2() {
    and_ln781_4_fu_7092_p2 = (and_ln416_8_fu_7012_p2.read() & icmp_ln879_13_fu_7052_p2.read());
}

void bn_relu_small::thread_and_ln781_50_fu_22649_p2() {
    and_ln781_50_fu_22649_p2 = (and_ln416_37_fu_22625_p2.read() & icmp_ln879_56_fu_22631_p2.read());
}

void bn_relu_small::thread_and_ln781_51_fu_22789_p2() {
    and_ln781_51_fu_22789_p2 = (and_ln416_39_fu_22765_p2.read() & icmp_ln879_59_fu_22771_p2.read());
}

void bn_relu_small::thread_and_ln781_52_fu_22929_p2() {
    and_ln781_52_fu_22929_p2 = (and_ln416_41_fu_22905_p2.read() & icmp_ln879_62_fu_22911_p2.read());
}

void bn_relu_small::thread_and_ln781_53_fu_23069_p2() {
    and_ln781_53_fu_23069_p2 = (and_ln416_43_fu_23045_p2.read() & icmp_ln879_65_fu_23051_p2.read());
}

void bn_relu_small::thread_and_ln781_54_fu_23209_p2() {
    and_ln781_54_fu_23209_p2 = (and_ln416_45_fu_23185_p2.read() & icmp_ln879_68_fu_23191_p2.read());
}

void bn_relu_small::thread_and_ln781_55_fu_23349_p2() {
    and_ln781_55_fu_23349_p2 = (and_ln416_47_fu_23325_p2.read() & icmp_ln879_71_fu_23331_p2.read());
}

void bn_relu_small::thread_and_ln781_56_fu_23489_p2() {
    and_ln781_56_fu_23489_p2 = (and_ln416_49_fu_23465_p2.read() & icmp_ln879_74_fu_23471_p2.read());
}

void bn_relu_small::thread_and_ln781_57_fu_23629_p2() {
    and_ln781_57_fu_23629_p2 = (and_ln416_51_fu_23605_p2.read() & icmp_ln879_77_fu_23611_p2.read());
}

void bn_relu_small::thread_and_ln781_58_fu_23769_p2() {
    and_ln781_58_fu_23769_p2 = (and_ln416_53_fu_23745_p2.read() & icmp_ln879_80_fu_23751_p2.read());
}

void bn_relu_small::thread_and_ln781_59_fu_23909_p2() {
    and_ln781_59_fu_23909_p2 = (and_ln416_55_fu_23885_p2.read() & icmp_ln879_83_fu_23891_p2.read());
}

void bn_relu_small::thread_and_ln781_5_fu_7274_p2() {
    and_ln781_5_fu_7274_p2 = (and_ln416_10_fu_7194_p2.read() & icmp_ln879_16_fu_7234_p2.read());
}

void bn_relu_small::thread_and_ln781_60_fu_24049_p2() {
    and_ln781_60_fu_24049_p2 = (and_ln416_57_fu_24025_p2.read() & icmp_ln879_86_fu_24031_p2.read());
}

void bn_relu_small::thread_and_ln781_61_fu_24189_p2() {
    and_ln781_61_fu_24189_p2 = (and_ln416_59_fu_24165_p2.read() & icmp_ln879_89_fu_24171_p2.read());
}

void bn_relu_small::thread_and_ln781_62_fu_24329_p2() {
    and_ln781_62_fu_24329_p2 = (and_ln416_61_fu_24305_p2.read() & icmp_ln879_92_fu_24311_p2.read());
}

void bn_relu_small::thread_and_ln781_63_fu_24506_p2() {
    and_ln781_63_fu_24506_p2 = (and_ln416_63_fu_24482_p2.read() & icmp_ln879_95_fu_24488_p2.read());
}

void bn_relu_small::thread_and_ln781_6_fu_7456_p2() {
    and_ln781_6_fu_7456_p2 = (and_ln416_12_fu_7376_p2.read() & icmp_ln879_19_fu_7416_p2.read());
}

void bn_relu_small::thread_and_ln781_7_fu_7638_p2() {
    and_ln781_7_fu_7638_p2 = (and_ln416_14_fu_7558_p2.read() & icmp_ln879_22_fu_7598_p2.read());
}

void bn_relu_small::thread_and_ln781_8_fu_7820_p2() {
    and_ln781_8_fu_7820_p2 = (and_ln416_16_fu_7740_p2.read() & icmp_ln879_25_fu_7780_p2.read());
}

void bn_relu_small::thread_and_ln781_9_fu_8002_p2() {
    and_ln781_9_fu_8002_p2 = (and_ln416_18_fu_7922_p2.read() & icmp_ln879_28_fu_7962_p2.read());
}

void bn_relu_small::thread_and_ln781_fu_6364_p2() {
    and_ln781_fu_6364_p2 = (and_ln416_fu_6284_p2.read() & icmp_ln879_1_fu_6324_p2.read());
}

void bn_relu_small::thread_and_ln785_10_fu_14568_p2() {
    and_ln785_10_fu_14568_p2 = (or_ln785_62_fu_14563_p2.read() & xor_ln785_73_reg_26507.read());
}

void bn_relu_small::thread_and_ln785_11_fu_14818_p2() {
    and_ln785_11_fu_14818_p2 = (or_ln785_65_fu_14813_p2.read() & xor_ln785_77_reg_26555.read());
}

void bn_relu_small::thread_and_ln785_12_fu_15068_p2() {
    and_ln785_12_fu_15068_p2 = (or_ln785_68_fu_15063_p2.read() & xor_ln785_81_reg_26603.read());
}

void bn_relu_small::thread_and_ln785_13_fu_15318_p2() {
    and_ln785_13_fu_15318_p2 = (or_ln785_71_fu_15313_p2.read() & xor_ln785_85_reg_26651.read());
}

void bn_relu_small::thread_and_ln785_14_fu_15568_p2() {
    and_ln785_14_fu_15568_p2 = (or_ln785_74_fu_15563_p2.read() & xor_ln785_89_reg_26699.read());
}

void bn_relu_small::thread_and_ln785_15_fu_15818_p2() {
    and_ln785_15_fu_15818_p2 = (or_ln785_77_fu_15813_p2.read() & xor_ln785_93_reg_26747.read());
}

void bn_relu_small::thread_and_ln785_16_fu_16068_p2() {
    and_ln785_16_fu_16068_p2 = (or_ln785_80_fu_16063_p2.read() & xor_ln785_97_reg_26795.read());
}

void bn_relu_small::thread_and_ln785_17_fu_16318_p2() {
    and_ln785_17_fu_16318_p2 = (or_ln785_83_fu_16313_p2.read() & xor_ln785_101_reg_26843.read());
}

void bn_relu_small::thread_and_ln785_18_fu_16568_p2() {
    and_ln785_18_fu_16568_p2 = (or_ln785_86_fu_16563_p2.read() & xor_ln785_105_reg_26891.read());
}

void bn_relu_small::thread_and_ln785_19_fu_16818_p2() {
    and_ln785_19_fu_16818_p2 = (or_ln785_89_fu_16813_p2.read() & xor_ln785_109_reg_26939.read());
}

void bn_relu_small::thread_and_ln785_1_fu_12318_p2() {
    and_ln785_1_fu_12318_p2 = (or_ln785_33_fu_12313_p2.read() & xor_ln785_35_reg_26075.read());
}

void bn_relu_small::thread_and_ln785_20_fu_17068_p2() {
    and_ln785_20_fu_17068_p2 = (or_ln785_92_fu_17063_p2.read() & xor_ln785_113_reg_26987.read());
}

void bn_relu_small::thread_and_ln785_21_fu_17318_p2() {
    and_ln785_21_fu_17318_p2 = (or_ln785_95_fu_17313_p2.read() & xor_ln785_117_reg_27035.read());
}

void bn_relu_small::thread_and_ln785_22_fu_17568_p2() {
    and_ln785_22_fu_17568_p2 = (or_ln785_98_fu_17563_p2.read() & xor_ln785_121_reg_27083.read());
}

void bn_relu_small::thread_and_ln785_23_fu_17818_p2() {
    and_ln785_23_fu_17818_p2 = (or_ln785_101_fu_17813_p2.read() & xor_ln785_125_reg_27131.read());
}

void bn_relu_small::thread_and_ln785_24_fu_18068_p2() {
    and_ln785_24_fu_18068_p2 = (or_ln785_104_fu_18063_p2.read() & xor_ln785_129_reg_27179.read());
}

void bn_relu_small::thread_and_ln785_25_fu_18318_p2() {
    and_ln785_25_fu_18318_p2 = (or_ln785_107_fu_18313_p2.read() & xor_ln785_133_reg_27227.read());
}

void bn_relu_small::thread_and_ln785_26_fu_18568_p2() {
    and_ln785_26_fu_18568_p2 = (or_ln785_110_fu_18563_p2.read() & xor_ln785_137_reg_27275.read());
}

void bn_relu_small::thread_and_ln785_27_fu_18818_p2() {
    and_ln785_27_fu_18818_p2 = (or_ln785_113_fu_18813_p2.read() & xor_ln785_141_reg_27323.read());
}

void bn_relu_small::thread_and_ln785_28_fu_19068_p2() {
    and_ln785_28_fu_19068_p2 = (or_ln785_116_fu_19063_p2.read() & xor_ln785_145_reg_27371.read());
}

void bn_relu_small::thread_and_ln785_29_fu_19318_p2() {
    and_ln785_29_fu_19318_p2 = (or_ln785_119_fu_19313_p2.read() & xor_ln785_149_reg_27419.read());
}

void bn_relu_small::thread_and_ln785_2_fu_12568_p2() {
    and_ln785_2_fu_12568_p2 = (or_ln785_37_fu_12563_p2.read() & xor_ln785_40_reg_26123.read());
}

void bn_relu_small::thread_and_ln785_30_fu_19568_p2() {
    and_ln785_30_fu_19568_p2 = (or_ln785_122_fu_19563_p2.read() & xor_ln785_153_reg_27467.read());
}

void bn_relu_small::thread_and_ln785_31_fu_19818_p2() {
    and_ln785_31_fu_19818_p2 = (or_ln785_125_fu_19813_p2.read() & xor_ln785_157_reg_27515.read());
}

void bn_relu_small::thread_and_ln785_32_fu_2250_p2() {
    and_ln785_32_fu_2250_p2 = (or_ln785_fu_2238_p2.read() & xor_ln785_fu_2244_p2.read());
}

void bn_relu_small::thread_and_ln785_33_fu_12158_p2() {
    and_ln785_33_fu_12158_p2 = (or_ln785_2_fu_12146_p2.read() & xor_ln785_3_fu_12152_p2.read());
}

void bn_relu_small::thread_and_ln785_34_fu_2372_p2() {
    and_ln785_34_fu_2372_p2 = (or_ln785_32_fu_2360_p2.read() & xor_ln785_33_fu_2366_p2.read());
}

void bn_relu_small::thread_and_ln785_35_fu_12408_p2() {
    and_ln785_35_fu_12408_p2 = (or_ln785_34_fu_12396_p2.read() & xor_ln785_36_fu_12402_p2.read());
}

void bn_relu_small::thread_and_ln785_36_fu_2494_p2() {
    and_ln785_36_fu_2494_p2 = (or_ln785_36_fu_2482_p2.read() & xor_ln785_38_fu_2488_p2.read());
}

void bn_relu_small::thread_and_ln785_37_fu_12658_p2() {
    and_ln785_37_fu_12658_p2 = (or_ln785_38_fu_12646_p2.read() & xor_ln785_41_fu_12652_p2.read());
}

void bn_relu_small::thread_and_ln785_38_fu_2616_p2() {
    and_ln785_38_fu_2616_p2 = (or_ln785_40_fu_2604_p2.read() & xor_ln785_43_fu_2610_p2.read());
}

void bn_relu_small::thread_and_ln785_39_fu_12908_p2() {
    and_ln785_39_fu_12908_p2 = (or_ln785_42_fu_12896_p2.read() & xor_ln785_46_fu_12902_p2.read());
}

void bn_relu_small::thread_and_ln785_3_fu_12818_p2() {
    and_ln785_3_fu_12818_p2 = (or_ln785_41_fu_12813_p2.read() & xor_ln785_45_reg_26171.read());
}

void bn_relu_small::thread_and_ln785_40_fu_2738_p2() {
    and_ln785_40_fu_2738_p2 = (or_ln785_4_fu_2726_p2.read() & xor_ln785_4_fu_2732_p2.read());
}

void bn_relu_small::thread_and_ln785_41_fu_13158_p2() {
    and_ln785_41_fu_13158_p2 = (or_ln785_45_fu_13146_p2.read() & xor_ln785_50_fu_13152_p2.read());
}

void bn_relu_small::thread_and_ln785_42_fu_2860_p2() {
    and_ln785_42_fu_2860_p2 = (or_ln785_5_fu_2848_p2.read() & xor_ln785_5_fu_2854_p2.read());
}

void bn_relu_small::thread_and_ln785_43_fu_13408_p2() {
    and_ln785_43_fu_13408_p2 = (or_ln785_48_fu_13396_p2.read() & xor_ln785_54_fu_13402_p2.read());
}

void bn_relu_small::thread_and_ln785_44_fu_2982_p2() {
    and_ln785_44_fu_2982_p2 = (or_ln785_6_fu_2970_p2.read() & xor_ln785_6_fu_2976_p2.read());
}

void bn_relu_small::thread_and_ln785_45_fu_13658_p2() {
    and_ln785_45_fu_13658_p2 = (or_ln785_51_fu_13646_p2.read() & xor_ln785_58_fu_13652_p2.read());
}

void bn_relu_small::thread_and_ln785_46_fu_3104_p2() {
    and_ln785_46_fu_3104_p2 = (or_ln785_7_fu_3092_p2.read() & xor_ln785_7_fu_3098_p2.read());
}

void bn_relu_small::thread_and_ln785_47_fu_13908_p2() {
    and_ln785_47_fu_13908_p2 = (or_ln785_54_fu_13896_p2.read() & xor_ln785_62_fu_13902_p2.read());
}

void bn_relu_small::thread_and_ln785_48_fu_3226_p2() {
    and_ln785_48_fu_3226_p2 = (or_ln785_8_fu_3214_p2.read() & xor_ln785_8_fu_3220_p2.read());
}

void bn_relu_small::thread_and_ln785_49_fu_14158_p2() {
    and_ln785_49_fu_14158_p2 = (or_ln785_57_fu_14146_p2.read() & xor_ln785_66_fu_14152_p2.read());
}

void bn_relu_small::thread_and_ln785_4_fu_13068_p2() {
    and_ln785_4_fu_13068_p2 = (or_ln785_44_fu_13063_p2.read() & xor_ln785_49_reg_26219.read());
}

void bn_relu_small::thread_and_ln785_50_fu_3348_p2() {
    and_ln785_50_fu_3348_p2 = (or_ln785_9_fu_3336_p2.read() & xor_ln785_9_fu_3342_p2.read());
}

void bn_relu_small::thread_and_ln785_51_fu_14408_p2() {
    and_ln785_51_fu_14408_p2 = (or_ln785_60_fu_14396_p2.read() & xor_ln785_70_fu_14402_p2.read());
}

void bn_relu_small::thread_and_ln785_52_fu_3470_p2() {
    and_ln785_52_fu_3470_p2 = (or_ln785_10_fu_3458_p2.read() & xor_ln785_10_fu_3464_p2.read());
}

void bn_relu_small::thread_and_ln785_53_fu_14658_p2() {
    and_ln785_53_fu_14658_p2 = (or_ln785_63_fu_14646_p2.read() & xor_ln785_74_fu_14652_p2.read());
}

void bn_relu_small::thread_and_ln785_54_fu_3592_p2() {
    and_ln785_54_fu_3592_p2 = (or_ln785_11_fu_3580_p2.read() & xor_ln785_11_fu_3586_p2.read());
}

void bn_relu_small::thread_and_ln785_55_fu_14908_p2() {
    and_ln785_55_fu_14908_p2 = (or_ln785_66_fu_14896_p2.read() & xor_ln785_78_fu_14902_p2.read());
}

void bn_relu_small::thread_and_ln785_56_fu_3714_p2() {
    and_ln785_56_fu_3714_p2 = (or_ln785_12_fu_3702_p2.read() & xor_ln785_12_fu_3708_p2.read());
}

void bn_relu_small::thread_and_ln785_57_fu_15158_p2() {
    and_ln785_57_fu_15158_p2 = (or_ln785_69_fu_15146_p2.read() & xor_ln785_82_fu_15152_p2.read());
}

void bn_relu_small::thread_and_ln785_58_fu_3836_p2() {
    and_ln785_58_fu_3836_p2 = (or_ln785_13_fu_3824_p2.read() & xor_ln785_13_fu_3830_p2.read());
}

void bn_relu_small::thread_and_ln785_59_fu_15408_p2() {
    and_ln785_59_fu_15408_p2 = (or_ln785_72_fu_15396_p2.read() & xor_ln785_86_fu_15402_p2.read());
}

void bn_relu_small::thread_and_ln785_5_fu_13318_p2() {
    and_ln785_5_fu_13318_p2 = (or_ln785_47_fu_13313_p2.read() & xor_ln785_53_reg_26267.read());
}

void bn_relu_small::thread_and_ln785_60_fu_3958_p2() {
    and_ln785_60_fu_3958_p2 = (or_ln785_14_fu_3946_p2.read() & xor_ln785_14_fu_3952_p2.read());
}

void bn_relu_small::thread_and_ln785_61_fu_15658_p2() {
    and_ln785_61_fu_15658_p2 = (or_ln785_75_fu_15646_p2.read() & xor_ln785_90_fu_15652_p2.read());
}

void bn_relu_small::thread_and_ln785_62_fu_4080_p2() {
    and_ln785_62_fu_4080_p2 = (or_ln785_15_fu_4068_p2.read() & xor_ln785_15_fu_4074_p2.read());
}

void bn_relu_small::thread_and_ln785_63_fu_15908_p2() {
    and_ln785_63_fu_15908_p2 = (or_ln785_78_fu_15896_p2.read() & xor_ln785_94_fu_15902_p2.read());
}

void bn_relu_small::thread_and_ln785_64_fu_4202_p2() {
    and_ln785_64_fu_4202_p2 = (or_ln785_16_fu_4190_p2.read() & xor_ln785_16_fu_4196_p2.read());
}

void bn_relu_small::thread_and_ln785_65_fu_16158_p2() {
    and_ln785_65_fu_16158_p2 = (or_ln785_81_fu_16146_p2.read() & xor_ln785_98_fu_16152_p2.read());
}

void bn_relu_small::thread_and_ln785_66_fu_4324_p2() {
    and_ln785_66_fu_4324_p2 = (or_ln785_17_fu_4312_p2.read() & xor_ln785_17_fu_4318_p2.read());
}

void bn_relu_small::thread_and_ln785_67_fu_16408_p2() {
    and_ln785_67_fu_16408_p2 = (or_ln785_84_fu_16396_p2.read() & xor_ln785_102_fu_16402_p2.read());
}

void bn_relu_small::thread_and_ln785_68_fu_4446_p2() {
    and_ln785_68_fu_4446_p2 = (or_ln785_18_fu_4434_p2.read() & xor_ln785_18_fu_4440_p2.read());
}

void bn_relu_small::thread_and_ln785_69_fu_16658_p2() {
    and_ln785_69_fu_16658_p2 = (or_ln785_87_fu_16646_p2.read() & xor_ln785_106_fu_16652_p2.read());
}

void bn_relu_small::thread_and_ln785_6_fu_13568_p2() {
    and_ln785_6_fu_13568_p2 = (or_ln785_50_fu_13563_p2.read() & xor_ln785_57_reg_26315.read());
}

void bn_relu_small::thread_and_ln785_70_fu_4568_p2() {
    and_ln785_70_fu_4568_p2 = (or_ln785_19_fu_4556_p2.read() & xor_ln785_19_fu_4562_p2.read());
}

void bn_relu_small::thread_and_ln785_71_fu_16908_p2() {
    and_ln785_71_fu_16908_p2 = (or_ln785_90_fu_16896_p2.read() & xor_ln785_110_fu_16902_p2.read());
}

void bn_relu_small::thread_and_ln785_72_fu_4690_p2() {
    and_ln785_72_fu_4690_p2 = (or_ln785_20_fu_4678_p2.read() & xor_ln785_20_fu_4684_p2.read());
}

void bn_relu_small::thread_and_ln785_73_fu_17158_p2() {
    and_ln785_73_fu_17158_p2 = (or_ln785_93_fu_17146_p2.read() & xor_ln785_114_fu_17152_p2.read());
}

void bn_relu_small::thread_and_ln785_74_fu_4812_p2() {
    and_ln785_74_fu_4812_p2 = (or_ln785_21_fu_4800_p2.read() & xor_ln785_21_fu_4806_p2.read());
}

void bn_relu_small::thread_and_ln785_75_fu_17408_p2() {
    and_ln785_75_fu_17408_p2 = (or_ln785_96_fu_17396_p2.read() & xor_ln785_118_fu_17402_p2.read());
}

void bn_relu_small::thread_and_ln785_76_fu_4934_p2() {
    and_ln785_76_fu_4934_p2 = (or_ln785_22_fu_4922_p2.read() & xor_ln785_22_fu_4928_p2.read());
}

void bn_relu_small::thread_and_ln785_77_fu_17658_p2() {
    and_ln785_77_fu_17658_p2 = (or_ln785_99_fu_17646_p2.read() & xor_ln785_122_fu_17652_p2.read());
}

void bn_relu_small::thread_and_ln785_78_fu_5056_p2() {
    and_ln785_78_fu_5056_p2 = (or_ln785_23_fu_5044_p2.read() & xor_ln785_23_fu_5050_p2.read());
}

void bn_relu_small::thread_and_ln785_79_fu_17908_p2() {
    and_ln785_79_fu_17908_p2 = (or_ln785_102_fu_17896_p2.read() & xor_ln785_126_fu_17902_p2.read());
}

void bn_relu_small::thread_and_ln785_7_fu_13818_p2() {
    and_ln785_7_fu_13818_p2 = (or_ln785_53_fu_13813_p2.read() & xor_ln785_61_reg_26363.read());
}

void bn_relu_small::thread_and_ln785_80_fu_5178_p2() {
    and_ln785_80_fu_5178_p2 = (or_ln785_24_fu_5166_p2.read() & xor_ln785_24_fu_5172_p2.read());
}

void bn_relu_small::thread_and_ln785_81_fu_18158_p2() {
    and_ln785_81_fu_18158_p2 = (or_ln785_105_fu_18146_p2.read() & xor_ln785_130_fu_18152_p2.read());
}

void bn_relu_small::thread_and_ln785_82_fu_5300_p2() {
    and_ln785_82_fu_5300_p2 = (or_ln785_25_fu_5288_p2.read() & xor_ln785_25_fu_5294_p2.read());
}

void bn_relu_small::thread_and_ln785_83_fu_18408_p2() {
    and_ln785_83_fu_18408_p2 = (or_ln785_108_fu_18396_p2.read() & xor_ln785_134_fu_18402_p2.read());
}

void bn_relu_small::thread_and_ln785_84_fu_5422_p2() {
    and_ln785_84_fu_5422_p2 = (or_ln785_26_fu_5410_p2.read() & xor_ln785_26_fu_5416_p2.read());
}

void bn_relu_small::thread_and_ln785_85_fu_18658_p2() {
    and_ln785_85_fu_18658_p2 = (or_ln785_111_fu_18646_p2.read() & xor_ln785_138_fu_18652_p2.read());
}

void bn_relu_small::thread_and_ln785_86_fu_5544_p2() {
    and_ln785_86_fu_5544_p2 = (or_ln785_27_fu_5532_p2.read() & xor_ln785_27_fu_5538_p2.read());
}

void bn_relu_small::thread_and_ln785_87_fu_18908_p2() {
    and_ln785_87_fu_18908_p2 = (or_ln785_114_fu_18896_p2.read() & xor_ln785_142_fu_18902_p2.read());
}

void bn_relu_small::thread_and_ln785_88_fu_5666_p2() {
    and_ln785_88_fu_5666_p2 = (or_ln785_28_fu_5654_p2.read() & xor_ln785_28_fu_5660_p2.read());
}

void bn_relu_small::thread_and_ln785_89_fu_19158_p2() {
    and_ln785_89_fu_19158_p2 = (or_ln785_117_fu_19146_p2.read() & xor_ln785_146_fu_19152_p2.read());
}

void bn_relu_small::thread_and_ln785_8_fu_14068_p2() {
    and_ln785_8_fu_14068_p2 = (or_ln785_56_fu_14063_p2.read() & xor_ln785_65_reg_26411.read());
}

void bn_relu_small::thread_and_ln785_90_fu_5788_p2() {
    and_ln785_90_fu_5788_p2 = (or_ln785_29_fu_5776_p2.read() & xor_ln785_29_fu_5782_p2.read());
}

void bn_relu_small::thread_and_ln785_91_fu_19408_p2() {
    and_ln785_91_fu_19408_p2 = (or_ln785_120_fu_19396_p2.read() & xor_ln785_150_fu_19402_p2.read());
}

void bn_relu_small::thread_and_ln785_92_fu_5910_p2() {
    and_ln785_92_fu_5910_p2 = (or_ln785_30_fu_5898_p2.read() & xor_ln785_30_fu_5904_p2.read());
}

void bn_relu_small::thread_and_ln785_93_fu_19658_p2() {
    and_ln785_93_fu_19658_p2 = (or_ln785_123_fu_19646_p2.read() & xor_ln785_154_fu_19652_p2.read());
}

void bn_relu_small::thread_and_ln785_94_fu_6032_p2() {
    and_ln785_94_fu_6032_p2 = (or_ln785_31_fu_6020_p2.read() & xor_ln785_31_fu_6026_p2.read());
}

void bn_relu_small::thread_and_ln785_95_fu_19908_p2() {
    and_ln785_95_fu_19908_p2 = (or_ln785_126_fu_19896_p2.read() & xor_ln785_158_fu_19902_p2.read());
}

void bn_relu_small::thread_and_ln785_9_fu_14318_p2() {
    and_ln785_9_fu_14318_p2 = (or_ln785_59_fu_14313_p2.read() & xor_ln785_69_reg_26459.read());
}

void bn_relu_small::thread_and_ln785_fu_12068_p2() {
    and_ln785_fu_12068_p2 = (or_ln785_1_fu_12063_p2.read() & xor_ln785_2_reg_26027.read());
}

void bn_relu_small::thread_and_ln786_100_fu_17682_p2() {
    and_ln786_100_fu_17682_p2 = (or_ln786_54_fu_17676_p2.read() & tmp_439_fu_17608_p3.read());
}

void bn_relu_small::thread_and_ln786_101_fu_5080_p2() {
    and_ln786_101_fu_5080_p2 = (or_ln786_23_fu_5074_p2.read() & tmp_446_fu_5006_p3.read());
}

void bn_relu_small::thread_and_ln786_102_fu_10580_p2() {
    and_ln786_102_fu_10580_p2 = (tmp_448_fu_10408_p3.read() & xor_ln786_78_fu_10574_p2.read());
}

void bn_relu_small::thread_and_ln786_103_fu_17932_p2() {
    and_ln786_103_fu_17932_p2 = (or_ln786_55_fu_17926_p2.read() & tmp_454_fu_17858_p3.read());
}

void bn_relu_small::thread_and_ln786_104_fu_5202_p2() {
    and_ln786_104_fu_5202_p2 = (or_ln786_24_fu_5196_p2.read() & tmp_461_fu_5128_p3.read());
}

void bn_relu_small::thread_and_ln786_105_fu_10762_p2() {
    and_ln786_105_fu_10762_p2 = (tmp_463_fu_10590_p3.read() & xor_ln786_80_fu_10756_p2.read());
}

void bn_relu_small::thread_and_ln786_106_fu_18182_p2() {
    and_ln786_106_fu_18182_p2 = (or_ln786_56_fu_18176_p2.read() & tmp_469_fu_18108_p3.read());
}

void bn_relu_small::thread_and_ln786_107_fu_5324_p2() {
    and_ln786_107_fu_5324_p2 = (or_ln786_25_fu_5318_p2.read() & tmp_476_fu_5250_p3.read());
}

void bn_relu_small::thread_and_ln786_108_fu_10944_p2() {
    and_ln786_108_fu_10944_p2 = (tmp_478_fu_10772_p3.read() & xor_ln786_82_fu_10938_p2.read());
}

void bn_relu_small::thread_and_ln786_109_fu_18432_p2() {
    and_ln786_109_fu_18432_p2 = (or_ln786_57_fu_18426_p2.read() & tmp_484_fu_18358_p3.read());
}

void bn_relu_small::thread_and_ln786_10_fu_8196_p2() {
    and_ln786_10_fu_8196_p2 = (tmp_257_fu_8110_p3.read() & select_ln416_10_fu_8176_p3.read());
}

void bn_relu_small::thread_and_ln786_110_fu_5446_p2() {
    and_ln786_110_fu_5446_p2 = (or_ln786_26_fu_5440_p2.read() & tmp_491_fu_5372_p3.read());
}

void bn_relu_small::thread_and_ln786_111_fu_11126_p2() {
    and_ln786_111_fu_11126_p2 = (tmp_493_fu_10954_p3.read() & xor_ln786_84_fu_11120_p2.read());
}

void bn_relu_small::thread_and_ln786_112_fu_18682_p2() {
    and_ln786_112_fu_18682_p2 = (or_ln786_58_fu_18676_p2.read() & tmp_499_fu_18608_p3.read());
}

void bn_relu_small::thread_and_ln786_113_fu_5568_p2() {
    and_ln786_113_fu_5568_p2 = (or_ln786_27_fu_5562_p2.read() & tmp_506_fu_5494_p3.read());
}

void bn_relu_small::thread_and_ln786_114_fu_11308_p2() {
    and_ln786_114_fu_11308_p2 = (tmp_508_fu_11136_p3.read() & xor_ln786_86_fu_11302_p2.read());
}

void bn_relu_small::thread_and_ln786_115_fu_18932_p2() {
    and_ln786_115_fu_18932_p2 = (or_ln786_59_fu_18926_p2.read() & tmp_514_fu_18858_p3.read());
}

void bn_relu_small::thread_and_ln786_116_fu_5690_p2() {
    and_ln786_116_fu_5690_p2 = (or_ln786_28_fu_5684_p2.read() & tmp_521_fu_5616_p3.read());
}

void bn_relu_small::thread_and_ln786_117_fu_11490_p2() {
    and_ln786_117_fu_11490_p2 = (tmp_523_fu_11318_p3.read() & xor_ln786_88_fu_11484_p2.read());
}

void bn_relu_small::thread_and_ln786_118_fu_19182_p2() {
    and_ln786_118_fu_19182_p2 = (or_ln786_60_fu_19176_p2.read() & tmp_529_fu_19108_p3.read());
}

void bn_relu_small::thread_and_ln786_119_fu_5812_p2() {
    and_ln786_119_fu_5812_p2 = (or_ln786_29_fu_5806_p2.read() & tmp_536_fu_5738_p3.read());
}

void bn_relu_small::thread_and_ln786_11_fu_8378_p2() {
    and_ln786_11_fu_8378_p2 = (tmp_272_fu_8292_p3.read() & select_ln416_11_fu_8358_p3.read());
}

void bn_relu_small::thread_and_ln786_120_fu_11672_p2() {
    and_ln786_120_fu_11672_p2 = (tmp_538_fu_11500_p3.read() & xor_ln786_90_fu_11666_p2.read());
}

void bn_relu_small::thread_and_ln786_121_fu_19432_p2() {
    and_ln786_121_fu_19432_p2 = (or_ln786_61_fu_19426_p2.read() & tmp_544_fu_19358_p3.read());
}

void bn_relu_small::thread_and_ln786_122_fu_5934_p2() {
    and_ln786_122_fu_5934_p2 = (or_ln786_30_fu_5928_p2.read() & tmp_551_fu_5860_p3.read());
}

void bn_relu_small::thread_and_ln786_123_fu_11854_p2() {
    and_ln786_123_fu_11854_p2 = (tmp_553_fu_11682_p3.read() & xor_ln786_92_fu_11848_p2.read());
}

void bn_relu_small::thread_and_ln786_124_fu_19682_p2() {
    and_ln786_124_fu_19682_p2 = (or_ln786_62_fu_19676_p2.read() & tmp_559_fu_19608_p3.read());
}

void bn_relu_small::thread_and_ln786_125_fu_6056_p2() {
    and_ln786_125_fu_6056_p2 = (or_ln786_31_fu_6050_p2.read() & tmp_566_fu_5982_p3.read());
}

void bn_relu_small::thread_and_ln786_126_fu_12036_p2() {
    and_ln786_126_fu_12036_p2 = (tmp_568_fu_11864_p3.read() & xor_ln786_94_fu_12030_p2.read());
}

void bn_relu_small::thread_and_ln786_127_fu_19932_p2() {
    and_ln786_127_fu_19932_p2 = (or_ln786_63_fu_19926_p2.read() & tmp_574_fu_19858_p3.read());
}

void bn_relu_small::thread_and_ln786_12_fu_8560_p2() {
    and_ln786_12_fu_8560_p2 = (tmp_287_fu_8474_p3.read() & select_ln416_12_fu_8540_p3.read());
}

void bn_relu_small::thread_and_ln786_13_fu_8742_p2() {
    and_ln786_13_fu_8742_p2 = (tmp_302_fu_8656_p3.read() & select_ln416_13_fu_8722_p3.read());
}

void bn_relu_small::thread_and_ln786_14_fu_8924_p2() {
    and_ln786_14_fu_8924_p2 = (tmp_317_fu_8838_p3.read() & select_ln416_14_fu_8904_p3.read());
}

void bn_relu_small::thread_and_ln786_15_fu_9106_p2() {
    and_ln786_15_fu_9106_p2 = (tmp_332_fu_9020_p3.read() & select_ln416_15_fu_9086_p3.read());
}

void bn_relu_small::thread_and_ln786_16_fu_9288_p2() {
    and_ln786_16_fu_9288_p2 = (tmp_347_fu_9202_p3.read() & select_ln416_16_fu_9268_p3.read());
}

void bn_relu_small::thread_and_ln786_17_fu_9470_p2() {
    and_ln786_17_fu_9470_p2 = (tmp_362_fu_9384_p3.read() & select_ln416_17_fu_9450_p3.read());
}

void bn_relu_small::thread_and_ln786_18_fu_9652_p2() {
    and_ln786_18_fu_9652_p2 = (tmp_377_fu_9566_p3.read() & select_ln416_18_fu_9632_p3.read());
}

void bn_relu_small::thread_and_ln786_19_fu_9834_p2() {
    and_ln786_19_fu_9834_p2 = (tmp_392_fu_9748_p3.read() & select_ln416_19_fu_9814_p3.read());
}

void bn_relu_small::thread_and_ln786_1_fu_6558_p2() {
    and_ln786_1_fu_6558_p2 = (tmp_122_fu_6472_p3.read() & select_ln416_1_fu_6538_p3.read());
}

void bn_relu_small::thread_and_ln786_20_fu_10016_p2() {
    and_ln786_20_fu_10016_p2 = (tmp_407_fu_9930_p3.read() & select_ln416_20_fu_9996_p3.read());
}

void bn_relu_small::thread_and_ln786_21_fu_10198_p2() {
    and_ln786_21_fu_10198_p2 = (tmp_422_fu_10112_p3.read() & select_ln416_21_fu_10178_p3.read());
}

void bn_relu_small::thread_and_ln786_22_fu_10380_p2() {
    and_ln786_22_fu_10380_p2 = (tmp_437_fu_10294_p3.read() & select_ln416_22_fu_10360_p3.read());
}

void bn_relu_small::thread_and_ln786_23_fu_10562_p2() {
    and_ln786_23_fu_10562_p2 = (tmp_452_fu_10476_p3.read() & select_ln416_23_fu_10542_p3.read());
}

void bn_relu_small::thread_and_ln786_24_fu_10744_p2() {
    and_ln786_24_fu_10744_p2 = (tmp_467_fu_10658_p3.read() & select_ln416_24_fu_10724_p3.read());
}

void bn_relu_small::thread_and_ln786_25_fu_10926_p2() {
    and_ln786_25_fu_10926_p2 = (tmp_482_fu_10840_p3.read() & select_ln416_25_fu_10906_p3.read());
}

void bn_relu_small::thread_and_ln786_26_fu_11108_p2() {
    and_ln786_26_fu_11108_p2 = (tmp_497_fu_11022_p3.read() & select_ln416_26_fu_11088_p3.read());
}

void bn_relu_small::thread_and_ln786_27_fu_11290_p2() {
    and_ln786_27_fu_11290_p2 = (tmp_512_fu_11204_p3.read() & select_ln416_27_fu_11270_p3.read());
}

void bn_relu_small::thread_and_ln786_28_fu_11472_p2() {
    and_ln786_28_fu_11472_p2 = (tmp_527_fu_11386_p3.read() & select_ln416_28_fu_11452_p3.read());
}

void bn_relu_small::thread_and_ln786_29_fu_11654_p2() {
    and_ln786_29_fu_11654_p2 = (tmp_542_fu_11568_p3.read() & select_ln416_29_fu_11634_p3.read());
}

void bn_relu_small::thread_and_ln786_2_fu_6740_p2() {
    and_ln786_2_fu_6740_p2 = (tmp_137_fu_6654_p3.read() & select_ln416_2_fu_6720_p3.read());
}

void bn_relu_small::thread_and_ln786_30_fu_11836_p2() {
    and_ln786_30_fu_11836_p2 = (tmp_557_fu_11750_p3.read() & select_ln416_30_fu_11816_p3.read());
}

void bn_relu_small::thread_and_ln786_31_fu_12018_p2() {
    and_ln786_31_fu_12018_p2 = (tmp_572_fu_11932_p3.read() & select_ln416_31_fu_11998_p3.read());
}

void bn_relu_small::thread_and_ln786_32_fu_6376_p2() {
    and_ln786_32_fu_6376_p2 = (tmp_107_fu_6290_p3.read() & select_ln416_fu_6356_p3.read());
}

void bn_relu_small::thread_and_ln786_33_fu_6394_p2() {
    and_ln786_33_fu_6394_p2 = (tmp_103_fu_6222_p3.read() & xor_ln786_1_fu_6388_p2.read());
}

void bn_relu_small::thread_and_ln786_34_fu_12182_p2() {
    and_ln786_34_fu_12182_p2 = (or_ln786_1_fu_12176_p2.read() & tmp_109_fu_12108_p3.read());
}

void bn_relu_small::thread_and_ln786_35_fu_2396_p2() {
    and_ln786_35_fu_2396_p2 = (or_ln786_32_fu_2390_p2.read() & tmp_116_fu_2322_p3.read());
}

void bn_relu_small::thread_and_ln786_36_fu_6576_p2() {
    and_ln786_36_fu_6576_p2 = (tmp_118_fu_6404_p3.read() & xor_ln786_33_fu_6570_p2.read());
}

void bn_relu_small::thread_and_ln786_37_fu_12432_p2() {
    and_ln786_37_fu_12432_p2 = (or_ln786_33_fu_12426_p2.read() & tmp_124_fu_12358_p3.read());
}

void bn_relu_small::thread_and_ln786_38_fu_2518_p2() {
    and_ln786_38_fu_2518_p2 = (or_ln786_2_fu_2512_p2.read() & tmp_131_fu_2444_p3.read());
}

void bn_relu_small::thread_and_ln786_39_fu_6758_p2() {
    and_ln786_39_fu_6758_p2 = (tmp_133_fu_6586_p3.read() & xor_ln786_36_fu_6752_p2.read());
}

void bn_relu_small::thread_and_ln786_3_fu_6922_p2() {
    and_ln786_3_fu_6922_p2 = (tmp_152_fu_6836_p3.read() & select_ln416_3_fu_6902_p3.read());
}

void bn_relu_small::thread_and_ln786_40_fu_12682_p2() {
    and_ln786_40_fu_12682_p2 = (or_ln786_34_fu_12676_p2.read() & tmp_139_fu_12608_p3.read());
}

void bn_relu_small::thread_and_ln786_41_fu_2640_p2() {
    and_ln786_41_fu_2640_p2 = (or_ln786_3_fu_2634_p2.read() & tmp_146_fu_2566_p3.read());
}

void bn_relu_small::thread_and_ln786_42_fu_6940_p2() {
    and_ln786_42_fu_6940_p2 = (tmp_148_fu_6768_p3.read() & xor_ln786_38_fu_6934_p2.read());
}

void bn_relu_small::thread_and_ln786_43_fu_12932_p2() {
    and_ln786_43_fu_12932_p2 = (or_ln786_35_fu_12926_p2.read() & tmp_154_fu_12858_p3.read());
}

void bn_relu_small::thread_and_ln786_44_fu_2762_p2() {
    and_ln786_44_fu_2762_p2 = (or_ln786_4_fu_2756_p2.read() & tmp_161_fu_2688_p3.read());
}

void bn_relu_small::thread_and_ln786_45_fu_7122_p2() {
    and_ln786_45_fu_7122_p2 = (tmp_163_fu_6950_p3.read() & xor_ln786_40_fu_7116_p2.read());
}

void bn_relu_small::thread_and_ln786_46_fu_13182_p2() {
    and_ln786_46_fu_13182_p2 = (or_ln786_36_fu_13176_p2.read() & tmp_169_fu_13108_p3.read());
}

void bn_relu_small::thread_and_ln786_47_fu_2884_p2() {
    and_ln786_47_fu_2884_p2 = (or_ln786_5_fu_2878_p2.read() & tmp_176_fu_2810_p3.read());
}

void bn_relu_small::thread_and_ln786_48_fu_7304_p2() {
    and_ln786_48_fu_7304_p2 = (tmp_178_fu_7132_p3.read() & xor_ln786_42_fu_7298_p2.read());
}

void bn_relu_small::thread_and_ln786_49_fu_13432_p2() {
    and_ln786_49_fu_13432_p2 = (or_ln786_37_fu_13426_p2.read() & tmp_184_fu_13358_p3.read());
}

void bn_relu_small::thread_and_ln786_4_fu_7104_p2() {
    and_ln786_4_fu_7104_p2 = (tmp_167_fu_7018_p3.read() & select_ln416_4_fu_7084_p3.read());
}

void bn_relu_small::thread_and_ln786_50_fu_3006_p2() {
    and_ln786_50_fu_3006_p2 = (or_ln786_6_fu_3000_p2.read() & tmp_191_fu_2932_p3.read());
}

void bn_relu_small::thread_and_ln786_51_fu_7486_p2() {
    and_ln786_51_fu_7486_p2 = (tmp_193_fu_7314_p3.read() & xor_ln786_44_fu_7480_p2.read());
}

void bn_relu_small::thread_and_ln786_52_fu_13682_p2() {
    and_ln786_52_fu_13682_p2 = (or_ln786_38_fu_13676_p2.read() & tmp_199_fu_13608_p3.read());
}

void bn_relu_small::thread_and_ln786_53_fu_3128_p2() {
    and_ln786_53_fu_3128_p2 = (or_ln786_7_fu_3122_p2.read() & tmp_206_fu_3054_p3.read());
}

void bn_relu_small::thread_and_ln786_54_fu_7668_p2() {
    and_ln786_54_fu_7668_p2 = (tmp_208_fu_7496_p3.read() & xor_ln786_46_fu_7662_p2.read());
}

void bn_relu_small::thread_and_ln786_55_fu_13932_p2() {
    and_ln786_55_fu_13932_p2 = (or_ln786_39_fu_13926_p2.read() & tmp_214_fu_13858_p3.read());
}

void bn_relu_small::thread_and_ln786_56_fu_3250_p2() {
    and_ln786_56_fu_3250_p2 = (or_ln786_8_fu_3244_p2.read() & tmp_221_fu_3176_p3.read());
}

void bn_relu_small::thread_and_ln786_57_fu_7850_p2() {
    and_ln786_57_fu_7850_p2 = (tmp_223_fu_7678_p3.read() & xor_ln786_48_fu_7844_p2.read());
}

void bn_relu_small::thread_and_ln786_58_fu_14182_p2() {
    and_ln786_58_fu_14182_p2 = (or_ln786_40_fu_14176_p2.read() & tmp_229_fu_14108_p3.read());
}

void bn_relu_small::thread_and_ln786_59_fu_3372_p2() {
    and_ln786_59_fu_3372_p2 = (or_ln786_9_fu_3366_p2.read() & tmp_236_fu_3298_p3.read());
}

void bn_relu_small::thread_and_ln786_5_fu_7286_p2() {
    and_ln786_5_fu_7286_p2 = (tmp_182_fu_7200_p3.read() & select_ln416_5_fu_7266_p3.read());
}

void bn_relu_small::thread_and_ln786_60_fu_8032_p2() {
    and_ln786_60_fu_8032_p2 = (tmp_238_fu_7860_p3.read() & xor_ln786_50_fu_8026_p2.read());
}

void bn_relu_small::thread_and_ln786_61_fu_14432_p2() {
    and_ln786_61_fu_14432_p2 = (or_ln786_41_fu_14426_p2.read() & tmp_244_fu_14358_p3.read());
}

void bn_relu_small::thread_and_ln786_62_fu_3494_p2() {
    and_ln786_62_fu_3494_p2 = (or_ln786_10_fu_3488_p2.read() & tmp_251_fu_3420_p3.read());
}

void bn_relu_small::thread_and_ln786_63_fu_8214_p2() {
    and_ln786_63_fu_8214_p2 = (tmp_253_fu_8042_p3.read() & xor_ln786_52_fu_8208_p2.read());
}

void bn_relu_small::thread_and_ln786_64_fu_14682_p2() {
    and_ln786_64_fu_14682_p2 = (or_ln786_42_fu_14676_p2.read() & tmp_259_fu_14608_p3.read());
}

void bn_relu_small::thread_and_ln786_65_fu_3616_p2() {
    and_ln786_65_fu_3616_p2 = (or_ln786_11_fu_3610_p2.read() & tmp_266_fu_3542_p3.read());
}

void bn_relu_small::thread_and_ln786_66_fu_8396_p2() {
    and_ln786_66_fu_8396_p2 = (tmp_268_fu_8224_p3.read() & xor_ln786_54_fu_8390_p2.read());
}

void bn_relu_small::thread_and_ln786_67_fu_14932_p2() {
    and_ln786_67_fu_14932_p2 = (or_ln786_43_fu_14926_p2.read() & tmp_274_fu_14858_p3.read());
}

void bn_relu_small::thread_and_ln786_68_fu_3738_p2() {
    and_ln786_68_fu_3738_p2 = (or_ln786_12_fu_3732_p2.read() & tmp_281_fu_3664_p3.read());
}

void bn_relu_small::thread_and_ln786_69_fu_8578_p2() {
    and_ln786_69_fu_8578_p2 = (tmp_283_fu_8406_p3.read() & xor_ln786_56_fu_8572_p2.read());
}

void bn_relu_small::thread_and_ln786_6_fu_7468_p2() {
    and_ln786_6_fu_7468_p2 = (tmp_197_fu_7382_p3.read() & select_ln416_6_fu_7448_p3.read());
}

void bn_relu_small::thread_and_ln786_70_fu_15182_p2() {
    and_ln786_70_fu_15182_p2 = (or_ln786_44_fu_15176_p2.read() & tmp_289_fu_15108_p3.read());
}

void bn_relu_small::thread_and_ln786_71_fu_3860_p2() {
    and_ln786_71_fu_3860_p2 = (or_ln786_13_fu_3854_p2.read() & tmp_296_fu_3786_p3.read());
}

void bn_relu_small::thread_and_ln786_72_fu_8760_p2() {
    and_ln786_72_fu_8760_p2 = (tmp_298_fu_8588_p3.read() & xor_ln786_58_fu_8754_p2.read());
}

void bn_relu_small::thread_and_ln786_73_fu_15432_p2() {
    and_ln786_73_fu_15432_p2 = (or_ln786_45_fu_15426_p2.read() & tmp_304_fu_15358_p3.read());
}

void bn_relu_small::thread_and_ln786_74_fu_3982_p2() {
    and_ln786_74_fu_3982_p2 = (or_ln786_14_fu_3976_p2.read() & tmp_311_fu_3908_p3.read());
}

void bn_relu_small::thread_and_ln786_75_fu_8942_p2() {
    and_ln786_75_fu_8942_p2 = (tmp_313_fu_8770_p3.read() & xor_ln786_60_fu_8936_p2.read());
}

void bn_relu_small::thread_and_ln786_76_fu_15682_p2() {
    and_ln786_76_fu_15682_p2 = (or_ln786_46_fu_15676_p2.read() & tmp_319_fu_15608_p3.read());
}

void bn_relu_small::thread_and_ln786_77_fu_4104_p2() {
    and_ln786_77_fu_4104_p2 = (or_ln786_15_fu_4098_p2.read() & tmp_326_fu_4030_p3.read());
}

void bn_relu_small::thread_and_ln786_78_fu_9124_p2() {
    and_ln786_78_fu_9124_p2 = (tmp_328_fu_8952_p3.read() & xor_ln786_62_fu_9118_p2.read());
}

void bn_relu_small::thread_and_ln786_79_fu_15932_p2() {
    and_ln786_79_fu_15932_p2 = (or_ln786_47_fu_15926_p2.read() & tmp_334_fu_15858_p3.read());
}

void bn_relu_small::thread_and_ln786_7_fu_7650_p2() {
    and_ln786_7_fu_7650_p2 = (tmp_212_fu_7564_p3.read() & select_ln416_7_fu_7630_p3.read());
}

void bn_relu_small::thread_and_ln786_80_fu_4226_p2() {
    and_ln786_80_fu_4226_p2 = (or_ln786_16_fu_4220_p2.read() & tmp_341_fu_4152_p3.read());
}

void bn_relu_small::thread_and_ln786_81_fu_9306_p2() {
    and_ln786_81_fu_9306_p2 = (tmp_343_fu_9134_p3.read() & xor_ln786_64_fu_9300_p2.read());
}

void bn_relu_small::thread_and_ln786_82_fu_16182_p2() {
    and_ln786_82_fu_16182_p2 = (or_ln786_48_fu_16176_p2.read() & tmp_349_fu_16108_p3.read());
}

void bn_relu_small::thread_and_ln786_83_fu_4348_p2() {
    and_ln786_83_fu_4348_p2 = (or_ln786_17_fu_4342_p2.read() & tmp_356_fu_4274_p3.read());
}

void bn_relu_small::thread_and_ln786_84_fu_9488_p2() {
    and_ln786_84_fu_9488_p2 = (tmp_358_fu_9316_p3.read() & xor_ln786_66_fu_9482_p2.read());
}

void bn_relu_small::thread_and_ln786_85_fu_16432_p2() {
    and_ln786_85_fu_16432_p2 = (or_ln786_49_fu_16426_p2.read() & tmp_364_fu_16358_p3.read());
}

void bn_relu_small::thread_and_ln786_86_fu_4470_p2() {
    and_ln786_86_fu_4470_p2 = (or_ln786_18_fu_4464_p2.read() & tmp_371_fu_4396_p3.read());
}

void bn_relu_small::thread_and_ln786_87_fu_9670_p2() {
    and_ln786_87_fu_9670_p2 = (tmp_373_fu_9498_p3.read() & xor_ln786_68_fu_9664_p2.read());
}

void bn_relu_small::thread_and_ln786_88_fu_16682_p2() {
    and_ln786_88_fu_16682_p2 = (or_ln786_50_fu_16676_p2.read() & tmp_379_fu_16608_p3.read());
}

void bn_relu_small::thread_and_ln786_89_fu_4592_p2() {
    and_ln786_89_fu_4592_p2 = (or_ln786_19_fu_4586_p2.read() & tmp_386_fu_4518_p3.read());
}

void bn_relu_small::thread_and_ln786_8_fu_7832_p2() {
    and_ln786_8_fu_7832_p2 = (tmp_227_fu_7746_p3.read() & select_ln416_8_fu_7812_p3.read());
}

void bn_relu_small::thread_and_ln786_90_fu_9852_p2() {
    and_ln786_90_fu_9852_p2 = (tmp_388_fu_9680_p3.read() & xor_ln786_70_fu_9846_p2.read());
}

void bn_relu_small::thread_and_ln786_91_fu_16932_p2() {
    and_ln786_91_fu_16932_p2 = (or_ln786_51_fu_16926_p2.read() & tmp_394_fu_16858_p3.read());
}

void bn_relu_small::thread_and_ln786_92_fu_4714_p2() {
    and_ln786_92_fu_4714_p2 = (or_ln786_20_fu_4708_p2.read() & tmp_401_fu_4640_p3.read());
}

void bn_relu_small::thread_and_ln786_93_fu_10034_p2() {
    and_ln786_93_fu_10034_p2 = (tmp_403_fu_9862_p3.read() & xor_ln786_72_fu_10028_p2.read());
}

void bn_relu_small::thread_and_ln786_94_fu_17182_p2() {
    and_ln786_94_fu_17182_p2 = (or_ln786_52_fu_17176_p2.read() & tmp_409_fu_17108_p3.read());
}

void bn_relu_small::thread_and_ln786_95_fu_4836_p2() {
    and_ln786_95_fu_4836_p2 = (or_ln786_21_fu_4830_p2.read() & tmp_416_fu_4762_p3.read());
}

void bn_relu_small::thread_and_ln786_96_fu_10216_p2() {
    and_ln786_96_fu_10216_p2 = (tmp_418_fu_10044_p3.read() & xor_ln786_74_fu_10210_p2.read());
}

void bn_relu_small::thread_and_ln786_97_fu_17432_p2() {
    and_ln786_97_fu_17432_p2 = (or_ln786_53_fu_17426_p2.read() & tmp_424_fu_17358_p3.read());
}

void bn_relu_small::thread_and_ln786_98_fu_4958_p2() {
    and_ln786_98_fu_4958_p2 = (or_ln786_22_fu_4952_p2.read() & tmp_431_fu_4884_p3.read());
}

void bn_relu_small::thread_and_ln786_99_fu_10398_p2() {
    and_ln786_99_fu_10398_p2 = (tmp_433_fu_10226_p3.read() & xor_ln786_76_fu_10392_p2.read());
}

void bn_relu_small::thread_and_ln786_9_fu_8014_p2() {
    and_ln786_9_fu_8014_p2 = (tmp_242_fu_7928_p3.read() & select_ln416_9_fu_7994_p3.read());
}

void bn_relu_small::thread_and_ln786_fu_2274_p2() {
    and_ln786_fu_2274_p2 = (or_ln786_fu_2268_p2.read() & tmp_101_fu_2200_p3.read());
}

void bn_relu_small::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[2];
}

void bn_relu_small::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void bn_relu_small::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[3];
}

void bn_relu_small::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void bn_relu_small::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bn_relu_small::thread_ap_block_pp0_stage0_01001() {
    ap_block_pp0_stage0_01001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln291_reg_25426_pp0_iter11_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_0, m_axi_DDR_buf_V_BVALID.read()));
}

void bn_relu_small::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state9_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state10_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln291_reg_25426_pp0_iter11_reg.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, m_axi_DDR_buf_V_BVALID.read())));
}

void bn_relu_small::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state9_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state10_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln291_reg_25426_pp0_iter11_reg.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, m_axi_DDR_buf_V_BVALID.read())));
}

void bn_relu_small::thread_ap_block_state10_io() {
    ap_block_state10_io = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln291_reg_25426_pp0_iter6_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_0, m_axi_DDR_buf_V_WREADY.read()));
}

void bn_relu_small::thread_ap_block_state10_pp0_stage0_iter7() {
    ap_block_state10_pp0_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bn_relu_small::thread_ap_block_state11_pp0_stage0_iter8() {
    ap_block_state11_pp0_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bn_relu_small::thread_ap_block_state12_pp0_stage0_iter9() {
    ap_block_state12_pp0_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bn_relu_small::thread_ap_block_state13_pp0_stage0_iter10() {
    ap_block_state13_pp0_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bn_relu_small::thread_ap_block_state14_pp0_stage0_iter11() {
    ap_block_state14_pp0_stage0_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bn_relu_small::thread_ap_block_state15_pp0_stage0_iter12() {
    ap_block_state15_pp0_stage0_iter12 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln291_reg_25426_pp0_iter11_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_0, m_axi_DDR_buf_V_BVALID.read()));
}

void bn_relu_small::thread_ap_block_state3_pp0_stage0_iter0() {
    ap_block_state3_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bn_relu_small::thread_ap_block_state4_pp0_stage0_iter1() {
    ap_block_state4_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bn_relu_small::thread_ap_block_state5_pp0_stage0_iter2() {
    ap_block_state5_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bn_relu_small::thread_ap_block_state6_pp0_stage0_iter3() {
    ap_block_state6_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bn_relu_small::thread_ap_block_state7_pp0_stage0_iter4() {
    ap_block_state7_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bn_relu_small::thread_ap_block_state8_pp0_stage0_iter5() {
    ap_block_state8_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bn_relu_small::thread_ap_block_state9_io() {
    ap_block_state9_io = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln291_reg_25426_pp0_iter5_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_0, m_axi_DDR_buf_V_AWREADY.read()));
}

void bn_relu_small::thread_ap_block_state9_pp0_stage0_iter6() {
    ap_block_state9_pp0_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bn_relu_small::thread_ap_condition_pp0_exit_iter0_state3() {
    if (esl_seteq<1,1,1>(icmp_ln291_fu_2055_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state3 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state3 = ap_const_logic_0;
    }
}

void bn_relu_small::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void bn_relu_small::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void bn_relu_small::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void bn_relu_small::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter12.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void bn_relu_small::thread_ap_phi_mux_row_0_phi_fu_1255_p4() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln291_reg_25426.read()))) {
        ap_phi_mux_row_0_phi_fu_1255_p4 = mul_ln295_mid2_v_v_v_1_reg_25442.read();
    } else {
        ap_phi_mux_row_0_phi_fu_1255_p4 = row_0_reg_1251.read();
    }
}

void bn_relu_small::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void bn_relu_small::thread_bound_fu_2045_p2() {
    bound_fu_2045_p2 = (!p_shl_fu_2025_p3.read().is_01() || !p_shl1_fu_2041_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl_fu_2025_p3.read()) - sc_biguint<10>(p_shl1_fu_2041_p1.read()));
}

void bn_relu_small::thread_col_0_mid2_fu_2078_p3() {
    col_0_mid2_fu_2078_p3 = (!icmp_ln292_fu_2072_p2.read()[0].is_01())? sc_lv<7>(): ((icmp_ln292_fu_2072_p2.read()[0].to_bool())? ap_const_lv7_0: col_0_reg_1262.read());
}

void bn_relu_small::thread_col_fu_2109_p2() {
    col_fu_2109_p2 = (!ap_const_lv7_1.is_01() || !col_0_mid2_fu_2078_p3.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_1) + sc_biguint<7>(col_0_mid2_fu_2078_p3.read()));
}

void bn_relu_small::thread_empty_36_fu_2094_p2() {
    empty_36_fu_2094_p2 = (!ap_const_lv3_1.is_01())? sc_lv<3>(): mul_ln295_mid2_v_v_v_1_fu_2086_p3.read() << (unsigned short)ap_const_lv3_1.to_uint();
}

void bn_relu_small::thread_feat_buf_all_0_V_2_address0() {
    feat_buf_all_0_V_2_address0 =  (sc_lv<16>) (sext_ln302_fu_20070_p1.read());
}

void bn_relu_small::thread_feat_buf_all_0_V_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        feat_buf_all_0_V_2_ce0 = ap_const_logic_1;
    } else {
        feat_buf_all_0_V_2_ce0 = ap_const_logic_0;
    }
}

void bn_relu_small::thread_feat_buf_all_0_V_2_d0() {
    feat_buf_all_0_V_2_d0 = esl_concat<31,1>(esl_concat<30,1>(esl_concat<29,1>(esl_concat<28,1>(esl_concat<27,1>(esl_concat<26,1>(esl_concat<25,1>(esl_concat<24,1>(esl_concat<23,1>(esl_concat<22,1>(esl_concat<21,1>(esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(trunc_ln821_31_fu_24658_p1.read(), trunc_ln821_30_fu_24412_p1.read()), trunc_ln821_29_fu_24272_p1.read()), trunc_ln821_28_fu_24132_p1.read()), trunc_ln821_27_fu_23992_p1.read()), trunc_ln821_26_fu_23852_p1.read()), trunc_ln821_25_fu_23712_p1.read()), trunc_ln821_24_fu_23572_p1.read()), trunc_ln821_23_fu_23432_p1.read()), trunc_ln821_22_fu_23292_p1.read()), trunc_ln821_21_fu_23152_p1.read()), trunc_ln821_20_fu_23012_p1.read()), trunc_ln821_19_fu_22872_p1.read()), trunc_ln821_18_fu_22732_p1.read()), trunc_ln821_17_fu_22592_p1.read()), trunc_ln821_16_fu_22452_p1.read()), trunc_ln821_15_fu_22312_p1.read()), trunc_ln821_14_fu_22172_p1.read()), trunc_ln821_13_fu_22032_p1.read()), trunc_ln821_12_fu_21892_p1.read()), trunc_ln821_11_fu_21752_p1.read()), trunc_ln821_10_fu_21612_p1.read()), trunc_ln821_9_fu_21472_p1.read()), trunc_ln821_8_fu_21332_p1.read()), trunc_ln821_7_fu_21192_p1.read()), trunc_ln821_6_fu_21052_p1.read()), trunc_ln821_5_fu_20912_p1.read()), trunc_ln821_4_fu_20772_p1.read()), trunc_ln821_3_fu_20632_p1.read()), trunc_ln821_2_fu_20492_p1.read()), trunc_ln821_1_fu_20352_p1.read()), trunc_ln821_fu_20212_p1.read());
}

void bn_relu_small::thread_feat_buf_all_0_V_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln291_reg_25426_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        feat_buf_all_0_V_2_we0 = ap_const_logic_1;
    } else {
        feat_buf_all_0_V_2_we0 = ap_const_logic_0;
    }
}

void bn_relu_small::thread_feat_buf_all_1_V_2_address0() {
    feat_buf_all_1_V_2_address0 =  (sc_lv<16>) (sext_ln302_fu_20070_p1.read());
}

void bn_relu_small::thread_feat_buf_all_1_V_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        feat_buf_all_1_V_2_ce0 = ap_const_logic_1;
    } else {
        feat_buf_all_1_V_2_ce0 = ap_const_logic_0;
    }
}

void bn_relu_small::thread_feat_buf_all_1_V_2_d0() {
    feat_buf_all_1_V_2_d0 = esl_concat<31,1>(esl_concat<30,1>(esl_concat<29,1>(esl_concat<28,1>(esl_concat<27,1>(esl_concat<26,1>(esl_concat<25,1>(esl_concat<24,1>(esl_concat<23,1>(esl_concat<22,1>(esl_concat<21,1>(esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_580_fu_24581_p3.read(), tmp_565_fu_24404_p3.read()), tmp_550_fu_24264_p3.read()), tmp_535_fu_24124_p3.read()), tmp_520_fu_23984_p3.read()), tmp_505_fu_23844_p3.read()), tmp_490_fu_23704_p3.read()), tmp_475_fu_23564_p3.read()), tmp_460_fu_23424_p3.read()), tmp_445_fu_23284_p3.read()), tmp_430_fu_23144_p3.read()), tmp_415_fu_23004_p3.read()), tmp_400_fu_22864_p3.read()), tmp_385_fu_22724_p3.read()), tmp_370_fu_22584_p3.read()), tmp_355_fu_22444_p3.read()), tmp_340_fu_22304_p3.read()), tmp_325_fu_22164_p3.read()), tmp_310_fu_22024_p3.read()), tmp_295_fu_21884_p3.read()), tmp_280_fu_21744_p3.read()), tmp_265_fu_21604_p3.read()), tmp_250_fu_21464_p3.read()), tmp_235_fu_21324_p3.read()), tmp_220_fu_21184_p3.read()), tmp_205_fu_21044_p3.read()), tmp_190_fu_20904_p3.read()), tmp_175_fu_20764_p3.read()), tmp_160_fu_20624_p3.read()), tmp_145_fu_20484_p3.read()), tmp_130_fu_20344_p3.read()), tmp_115_fu_20204_p3.read());
}

void bn_relu_small::thread_feat_buf_all_1_V_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln291_reg_25426_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        feat_buf_all_1_V_2_we0 = ap_const_logic_1;
    } else {
        feat_buf_all_1_V_2_we0 = ap_const_logic_0;
    }
}

void bn_relu_small::thread_grp_fu_2194_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        grp_fu_2194_ce = ap_const_logic_1;
    } else {
        grp_fu_2194_ce = ap_const_logic_0;
    }
}

void bn_relu_small::thread_grp_fu_2194_p0() {
    grp_fu_2194_p0 =  (sc_lv<9>) (ap_const_lv40_E1);
}

void bn_relu_small::thread_grp_fu_24731_p0() {
    grp_fu_24731_p0 =  (sc_lv<9>) (ap_const_lv12_E1);
}

void bn_relu_small::thread_grp_fu_24731_p2() {
    grp_fu_24731_p2 =  (sc_lv<10>) (grp_fu_24731_p20.read());
}

void bn_relu_small::thread_grp_fu_24731_p20() {
    grp_fu_24731_p20 = esl_zext<12,10>(add_ln295_fu_2129_p2.read());
}

void bn_relu_small::thread_grp_fu_6200_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        grp_fu_6200_ce = ap_const_logic_1;
    } else {
        grp_fu_6200_ce = ap_const_logic_0;
    }
}

void bn_relu_small::thread_grp_fu_6200_p0() {
    grp_fu_6200_p0 =  (sc_lv<8>) (ap_const_lv32_71);
}

void bn_relu_small::thread_icmp_ln291_fu_2055_p2() {
    icmp_ln291_fu_2055_p2 = (!indvar_flatten_reg_1240.read().is_01() || !bound_reg_25416.read().is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_1240.read() == bound_reg_25416.read());
}

void bn_relu_small::thread_icmp_ln292_fu_2072_p2() {
    icmp_ln292_fu_2072_p2 = (!col_0_reg_1262.read().is_01() || !ap_const_lv7_70.is_01())? sc_lv<1>(): sc_lv<1>(col_0_reg_1262.read() == ap_const_lv7_70);
}

void bn_relu_small::thread_icmp_ln768_10_fu_7240_p2() {
    icmp_ln768_10_fu_7240_p2 = (!tmp_16_fu_7224_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_16_fu_7224_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_11_fu_20816_p2() {
    icmp_ln768_11_fu_20816_p2 = (!tmp_17_reg_27735.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_17_reg_27735.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_12_fu_7422_p2() {
    icmp_ln768_12_fu_7422_p2 = (!tmp_19_fu_7406_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_19_fu_7406_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_13_fu_20956_p2() {
    icmp_ln768_13_fu_20956_p2 = (!tmp_20_reg_27768.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_20_reg_27768.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_14_fu_7604_p2() {
    icmp_ln768_14_fu_7604_p2 = (!tmp_22_fu_7588_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_22_fu_7588_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_15_fu_21096_p2() {
    icmp_ln768_15_fu_21096_p2 = (!tmp_23_reg_27801.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_23_reg_27801.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_16_fu_7786_p2() {
    icmp_ln768_16_fu_7786_p2 = (!tmp_25_fu_7770_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_25_fu_7770_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_17_fu_21236_p2() {
    icmp_ln768_17_fu_21236_p2 = (!tmp_26_reg_27834.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_26_reg_27834.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_18_fu_7968_p2() {
    icmp_ln768_18_fu_7968_p2 = (!tmp_28_fu_7952_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_28_fu_7952_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_19_fu_21376_p2() {
    icmp_ln768_19_fu_21376_p2 = (!tmp_29_reg_27867.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_29_reg_27867.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_1_fu_20116_p2() {
    icmp_ln768_1_fu_20116_p2 = (!tmp_3_reg_27570.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3_reg_27570.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_20_fu_8150_p2() {
    icmp_ln768_20_fu_8150_p2 = (!tmp_31_fu_8134_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_31_fu_8134_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_21_fu_21516_p2() {
    icmp_ln768_21_fu_21516_p2 = (!tmp_32_reg_27900.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_32_reg_27900.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_22_fu_8332_p2() {
    icmp_ln768_22_fu_8332_p2 = (!tmp_34_fu_8316_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_34_fu_8316_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_23_fu_21656_p2() {
    icmp_ln768_23_fu_21656_p2 = (!tmp_35_reg_27933.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_35_reg_27933.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_24_fu_8514_p2() {
    icmp_ln768_24_fu_8514_p2 = (!tmp_37_fu_8498_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_37_fu_8498_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_25_fu_21796_p2() {
    icmp_ln768_25_fu_21796_p2 = (!tmp_38_reg_27966.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_38_reg_27966.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_26_fu_8696_p2() {
    icmp_ln768_26_fu_8696_p2 = (!tmp_40_fu_8680_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_40_fu_8680_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_27_fu_21936_p2() {
    icmp_ln768_27_fu_21936_p2 = (!tmp_41_reg_27999.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_41_reg_27999.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_28_fu_8878_p2() {
    icmp_ln768_28_fu_8878_p2 = (!tmp_43_fu_8862_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_43_fu_8862_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_29_fu_22076_p2() {
    icmp_ln768_29_fu_22076_p2 = (!tmp_44_reg_28032.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_44_reg_28032.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_2_fu_6512_p2() {
    icmp_ln768_2_fu_6512_p2 = (!tmp_5_fu_6496_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5_fu_6496_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_30_fu_9060_p2() {
    icmp_ln768_30_fu_9060_p2 = (!tmp_46_fu_9044_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_46_fu_9044_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_31_fu_22216_p2() {
    icmp_ln768_31_fu_22216_p2 = (!tmp_47_reg_28065.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_47_reg_28065.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_32_fu_9242_p2() {
    icmp_ln768_32_fu_9242_p2 = (!tmp_49_fu_9226_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_49_fu_9226_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_33_fu_22356_p2() {
    icmp_ln768_33_fu_22356_p2 = (!tmp_50_reg_28098.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_50_reg_28098.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_34_fu_9424_p2() {
    icmp_ln768_34_fu_9424_p2 = (!tmp_52_fu_9408_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_52_fu_9408_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_35_fu_22496_p2() {
    icmp_ln768_35_fu_22496_p2 = (!tmp_53_reg_28131.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_53_reg_28131.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_36_fu_9606_p2() {
    icmp_ln768_36_fu_9606_p2 = (!tmp_55_fu_9590_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_55_fu_9590_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_37_fu_22636_p2() {
    icmp_ln768_37_fu_22636_p2 = (!tmp_56_reg_28164.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_56_reg_28164.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_38_fu_9788_p2() {
    icmp_ln768_38_fu_9788_p2 = (!tmp_58_fu_9772_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_58_fu_9772_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_39_fu_22776_p2() {
    icmp_ln768_39_fu_22776_p2 = (!tmp_59_reg_28197.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_59_reg_28197.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_3_fu_20256_p2() {
    icmp_ln768_3_fu_20256_p2 = (!tmp_6_reg_27603.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6_reg_27603.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_40_fu_9970_p2() {
    icmp_ln768_40_fu_9970_p2 = (!tmp_61_fu_9954_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_61_fu_9954_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_41_fu_22916_p2() {
    icmp_ln768_41_fu_22916_p2 = (!tmp_62_reg_28230.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_62_reg_28230.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_42_fu_10152_p2() {
    icmp_ln768_42_fu_10152_p2 = (!tmp_64_fu_10136_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_64_fu_10136_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_43_fu_23056_p2() {
    icmp_ln768_43_fu_23056_p2 = (!tmp_65_reg_28263.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_65_reg_28263.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_44_fu_10334_p2() {
    icmp_ln768_44_fu_10334_p2 = (!tmp_67_fu_10318_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_67_fu_10318_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_45_fu_23196_p2() {
    icmp_ln768_45_fu_23196_p2 = (!tmp_68_reg_28296.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_68_reg_28296.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_46_fu_10516_p2() {
    icmp_ln768_46_fu_10516_p2 = (!tmp_70_fu_10500_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_70_fu_10500_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_47_fu_23336_p2() {
    icmp_ln768_47_fu_23336_p2 = (!tmp_71_reg_28329.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_71_reg_28329.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_48_fu_10698_p2() {
    icmp_ln768_48_fu_10698_p2 = (!tmp_73_fu_10682_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_73_fu_10682_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_49_fu_23476_p2() {
    icmp_ln768_49_fu_23476_p2 = (!tmp_74_reg_28362.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_74_reg_28362.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_4_fu_6694_p2() {
    icmp_ln768_4_fu_6694_p2 = (!tmp_8_fu_6678_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_8_fu_6678_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_50_fu_10880_p2() {
    icmp_ln768_50_fu_10880_p2 = (!tmp_76_fu_10864_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_76_fu_10864_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_51_fu_23616_p2() {
    icmp_ln768_51_fu_23616_p2 = (!tmp_77_reg_28395.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_77_reg_28395.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_52_fu_11062_p2() {
    icmp_ln768_52_fu_11062_p2 = (!tmp_79_fu_11046_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_79_fu_11046_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_53_fu_23756_p2() {
    icmp_ln768_53_fu_23756_p2 = (!tmp_80_reg_28428.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_80_reg_28428.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_54_fu_11244_p2() {
    icmp_ln768_54_fu_11244_p2 = (!tmp_82_fu_11228_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_82_fu_11228_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_55_fu_23896_p2() {
    icmp_ln768_55_fu_23896_p2 = (!tmp_83_reg_28461.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_83_reg_28461.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_56_fu_11426_p2() {
    icmp_ln768_56_fu_11426_p2 = (!tmp_85_fu_11410_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_85_fu_11410_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_57_fu_24036_p2() {
    icmp_ln768_57_fu_24036_p2 = (!tmp_86_reg_28494.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_86_reg_28494.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_58_fu_11608_p2() {
    icmp_ln768_58_fu_11608_p2 = (!tmp_88_fu_11592_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_88_fu_11592_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_59_fu_24176_p2() {
    icmp_ln768_59_fu_24176_p2 = (!tmp_89_reg_28527.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_89_reg_28527.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_5_fu_20396_p2() {
    icmp_ln768_5_fu_20396_p2 = (!tmp_9_reg_27636.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_9_reg_27636.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_60_fu_11790_p2() {
    icmp_ln768_60_fu_11790_p2 = (!tmp_91_fu_11774_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_91_fu_11774_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_61_fu_24316_p2() {
    icmp_ln768_61_fu_24316_p2 = (!tmp_92_reg_28560.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_92_reg_28560.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_62_fu_11972_p2() {
    icmp_ln768_62_fu_11972_p2 = (!tmp_94_fu_11956_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_94_fu_11956_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_63_fu_24493_p2() {
    icmp_ln768_63_fu_24493_p2 = (!tmp_95_reg_28593.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_95_reg_28593.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_6_fu_6876_p2() {
    icmp_ln768_6_fu_6876_p2 = (!tmp_10_fu_6860_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_10_fu_6860_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_7_fu_20536_p2() {
    icmp_ln768_7_fu_20536_p2 = (!tmp_11_reg_27669.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_11_reg_27669.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_8_fu_7058_p2() {
    icmp_ln768_8_fu_7058_p2 = (!tmp_13_fu_7042_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_13_fu_7042_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln768_9_fu_20676_p2() {
    icmp_ln768_9_fu_20676_p2 = (!tmp_14_reg_27702.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_14_reg_27702.read() == ap_const_lv9_0);
}

void bn_relu_small::thread_icmp_ln768_fu_6330_p2() {
    icmp_ln768_fu_6330_p2 = (!tmp_2_fu_6314_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_2_fu_6314_p4.read() == ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_10_fu_3452_p2() {
    icmp_ln785_10_fu_3452_p2 = (!p_Result_90_s_fu_3442_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_s_fu_3442_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_11_fu_3574_p2() {
    icmp_ln785_11_fu_3574_p2 = (!p_Result_90_10_fu_3564_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_10_fu_3564_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_12_fu_3696_p2() {
    icmp_ln785_12_fu_3696_p2 = (!p_Result_90_11_fu_3686_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_11_fu_3686_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_13_fu_3818_p2() {
    icmp_ln785_13_fu_3818_p2 = (!p_Result_90_12_fu_3808_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_12_fu_3808_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_14_fu_3940_p2() {
    icmp_ln785_14_fu_3940_p2 = (!p_Result_90_13_fu_3930_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_13_fu_3930_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_15_fu_4062_p2() {
    icmp_ln785_15_fu_4062_p2 = (!p_Result_90_14_fu_4052_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_14_fu_4052_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_16_fu_4184_p2() {
    icmp_ln785_16_fu_4184_p2 = (!p_Result_90_15_fu_4174_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_15_fu_4174_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_17_fu_4306_p2() {
    icmp_ln785_17_fu_4306_p2 = (!p_Result_90_16_fu_4296_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_16_fu_4296_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_18_fu_4428_p2() {
    icmp_ln785_18_fu_4428_p2 = (!p_Result_90_17_fu_4418_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_17_fu_4418_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_19_fu_4550_p2() {
    icmp_ln785_19_fu_4550_p2 = (!p_Result_90_18_fu_4540_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_18_fu_4540_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_1_fu_12140_p2() {
    icmp_ln785_1_fu_12140_p2 = (!p_Result_3_fu_12130_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_3_fu_12130_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_20_fu_4672_p2() {
    icmp_ln785_20_fu_4672_p2 = (!p_Result_90_19_fu_4662_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_19_fu_4662_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_21_fu_4794_p2() {
    icmp_ln785_21_fu_4794_p2 = (!p_Result_90_20_fu_4784_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_20_fu_4784_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_22_fu_4916_p2() {
    icmp_ln785_22_fu_4916_p2 = (!p_Result_90_21_fu_4906_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_21_fu_4906_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_23_fu_5038_p2() {
    icmp_ln785_23_fu_5038_p2 = (!p_Result_90_22_fu_5028_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_22_fu_5028_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_24_fu_5160_p2() {
    icmp_ln785_24_fu_5160_p2 = (!p_Result_90_23_fu_5150_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_23_fu_5150_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_25_fu_5282_p2() {
    icmp_ln785_25_fu_5282_p2 = (!p_Result_90_24_fu_5272_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_24_fu_5272_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_26_fu_5404_p2() {
    icmp_ln785_26_fu_5404_p2 = (!p_Result_90_25_fu_5394_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_25_fu_5394_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_27_fu_5526_p2() {
    icmp_ln785_27_fu_5526_p2 = (!p_Result_90_26_fu_5516_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_26_fu_5516_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_28_fu_5648_p2() {
    icmp_ln785_28_fu_5648_p2 = (!p_Result_90_27_fu_5638_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_27_fu_5638_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_29_fu_5770_p2() {
    icmp_ln785_29_fu_5770_p2 = (!p_Result_90_28_fu_5760_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_28_fu_5760_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_2_fu_2476_p2() {
    icmp_ln785_2_fu_2476_p2 = (!p_Result_90_2_fu_2466_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_2_fu_2466_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_30_fu_5892_p2() {
    icmp_ln785_30_fu_5892_p2 = (!p_Result_90_29_fu_5882_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_29_fu_5882_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_31_fu_6014_p2() {
    icmp_ln785_31_fu_6014_p2 = (!p_Result_90_30_fu_6004_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_30_fu_6004_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_32_fu_2354_p2() {
    icmp_ln785_32_fu_2354_p2 = (!p_Result_90_1_fu_2344_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_1_fu_2344_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_33_fu_12390_p2() {
    icmp_ln785_33_fu_12390_p2 = (!p_Result_98_1_fu_12380_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_1_fu_12380_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_34_fu_12640_p2() {
    icmp_ln785_34_fu_12640_p2 = (!p_Result_98_2_fu_12630_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_2_fu_12630_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_35_fu_12890_p2() {
    icmp_ln785_35_fu_12890_p2 = (!p_Result_98_3_fu_12880_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_3_fu_12880_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_36_fu_13140_p2() {
    icmp_ln785_36_fu_13140_p2 = (!p_Result_98_4_fu_13130_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_4_fu_13130_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_37_fu_13390_p2() {
    icmp_ln785_37_fu_13390_p2 = (!p_Result_98_5_fu_13380_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_5_fu_13380_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_38_fu_13640_p2() {
    icmp_ln785_38_fu_13640_p2 = (!p_Result_98_6_fu_13630_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_6_fu_13630_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_39_fu_13890_p2() {
    icmp_ln785_39_fu_13890_p2 = (!p_Result_98_7_fu_13880_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_7_fu_13880_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_3_fu_2598_p2() {
    icmp_ln785_3_fu_2598_p2 = (!p_Result_90_3_fu_2588_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_3_fu_2588_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_40_fu_14140_p2() {
    icmp_ln785_40_fu_14140_p2 = (!p_Result_98_8_fu_14130_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_8_fu_14130_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_41_fu_14390_p2() {
    icmp_ln785_41_fu_14390_p2 = (!p_Result_98_9_fu_14380_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_9_fu_14380_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_42_fu_14640_p2() {
    icmp_ln785_42_fu_14640_p2 = (!p_Result_98_s_fu_14630_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_s_fu_14630_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_43_fu_14890_p2() {
    icmp_ln785_43_fu_14890_p2 = (!p_Result_98_10_fu_14880_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_10_fu_14880_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_44_fu_15140_p2() {
    icmp_ln785_44_fu_15140_p2 = (!p_Result_98_11_fu_15130_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_11_fu_15130_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_45_fu_15390_p2() {
    icmp_ln785_45_fu_15390_p2 = (!p_Result_98_12_fu_15380_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_12_fu_15380_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_46_fu_15640_p2() {
    icmp_ln785_46_fu_15640_p2 = (!p_Result_98_13_fu_15630_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_13_fu_15630_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_47_fu_15890_p2() {
    icmp_ln785_47_fu_15890_p2 = (!p_Result_98_14_fu_15880_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_14_fu_15880_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_48_fu_16140_p2() {
    icmp_ln785_48_fu_16140_p2 = (!p_Result_98_15_fu_16130_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_15_fu_16130_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_49_fu_16390_p2() {
    icmp_ln785_49_fu_16390_p2 = (!p_Result_98_16_fu_16380_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_16_fu_16380_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_4_fu_2720_p2() {
    icmp_ln785_4_fu_2720_p2 = (!p_Result_90_4_fu_2710_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_4_fu_2710_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_50_fu_16640_p2() {
    icmp_ln785_50_fu_16640_p2 = (!p_Result_98_17_fu_16630_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_17_fu_16630_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_51_fu_16890_p2() {
    icmp_ln785_51_fu_16890_p2 = (!p_Result_98_18_fu_16880_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_18_fu_16880_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_52_fu_17140_p2() {
    icmp_ln785_52_fu_17140_p2 = (!p_Result_98_19_fu_17130_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_19_fu_17130_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_53_fu_17390_p2() {
    icmp_ln785_53_fu_17390_p2 = (!p_Result_98_20_fu_17380_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_20_fu_17380_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_54_fu_17640_p2() {
    icmp_ln785_54_fu_17640_p2 = (!p_Result_98_21_fu_17630_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_21_fu_17630_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_55_fu_17890_p2() {
    icmp_ln785_55_fu_17890_p2 = (!p_Result_98_22_fu_17880_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_22_fu_17880_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_56_fu_18140_p2() {
    icmp_ln785_56_fu_18140_p2 = (!p_Result_98_23_fu_18130_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_23_fu_18130_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_57_fu_18390_p2() {
    icmp_ln785_57_fu_18390_p2 = (!p_Result_98_24_fu_18380_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_24_fu_18380_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_58_fu_18640_p2() {
    icmp_ln785_58_fu_18640_p2 = (!p_Result_98_25_fu_18630_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_25_fu_18630_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_59_fu_18890_p2() {
    icmp_ln785_59_fu_18890_p2 = (!p_Result_98_26_fu_18880_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_26_fu_18880_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_5_fu_2842_p2() {
    icmp_ln785_5_fu_2842_p2 = (!p_Result_90_5_fu_2832_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_5_fu_2832_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_60_fu_19140_p2() {
    icmp_ln785_60_fu_19140_p2 = (!p_Result_98_27_fu_19130_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_27_fu_19130_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_61_fu_19390_p2() {
    icmp_ln785_61_fu_19390_p2 = (!p_Result_98_28_fu_19380_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_28_fu_19380_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_62_fu_19640_p2() {
    icmp_ln785_62_fu_19640_p2 = (!p_Result_98_29_fu_19630_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_29_fu_19630_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_63_fu_19890_p2() {
    icmp_ln785_63_fu_19890_p2 = (!p_Result_98_30_fu_19880_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_30_fu_19880_p4.read() != ap_const_lv5_0);
}

void bn_relu_small::thread_icmp_ln785_6_fu_2964_p2() {
    icmp_ln785_6_fu_2964_p2 = (!p_Result_90_6_fu_2954_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_6_fu_2954_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_7_fu_3086_p2() {
    icmp_ln785_7_fu_3086_p2 = (!p_Result_90_7_fu_3076_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_7_fu_3076_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_8_fu_3208_p2() {
    icmp_ln785_8_fu_3208_p2 = (!p_Result_90_8_fu_3198_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_8_fu_3198_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_9_fu_3330_p2() {
    icmp_ln785_9_fu_3330_p2 = (!p_Result_90_9_fu_3320_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_9_fu_3320_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln785_fu_2232_p2() {
    icmp_ln785_fu_2232_p2 = (!p_Result_s_fu_2222_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_s_fu_2222_p4.read() != ap_const_lv7_0);
}

void bn_relu_small::thread_icmp_ln786_10_fu_3482_p2() {
    icmp_ln786_10_fu_3482_p2 = (!p_Result_90_s_fu_3442_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_s_fu_3442_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_11_fu_3604_p2() {
    icmp_ln786_11_fu_3604_p2 = (!p_Result_90_10_fu_3564_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_10_fu_3564_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_12_fu_3726_p2() {
    icmp_ln786_12_fu_3726_p2 = (!p_Result_90_11_fu_3686_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_11_fu_3686_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_13_fu_3848_p2() {
    icmp_ln786_13_fu_3848_p2 = (!p_Result_90_12_fu_3808_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_12_fu_3808_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_14_fu_3970_p2() {
    icmp_ln786_14_fu_3970_p2 = (!p_Result_90_13_fu_3930_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_13_fu_3930_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_15_fu_4092_p2() {
    icmp_ln786_15_fu_4092_p2 = (!p_Result_90_14_fu_4052_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_14_fu_4052_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_16_fu_4214_p2() {
    icmp_ln786_16_fu_4214_p2 = (!p_Result_90_15_fu_4174_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_15_fu_4174_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_17_fu_4336_p2() {
    icmp_ln786_17_fu_4336_p2 = (!p_Result_90_16_fu_4296_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_16_fu_4296_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_18_fu_4458_p2() {
    icmp_ln786_18_fu_4458_p2 = (!p_Result_90_17_fu_4418_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_17_fu_4418_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_19_fu_4580_p2() {
    icmp_ln786_19_fu_4580_p2 = (!p_Result_90_18_fu_4540_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_18_fu_4540_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_1_fu_12170_p2() {
    icmp_ln786_1_fu_12170_p2 = (!p_Result_3_fu_12130_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_3_fu_12130_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_20_fu_4702_p2() {
    icmp_ln786_20_fu_4702_p2 = (!p_Result_90_19_fu_4662_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_19_fu_4662_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_21_fu_4824_p2() {
    icmp_ln786_21_fu_4824_p2 = (!p_Result_90_20_fu_4784_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_20_fu_4784_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_22_fu_4946_p2() {
    icmp_ln786_22_fu_4946_p2 = (!p_Result_90_21_fu_4906_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_21_fu_4906_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_23_fu_5068_p2() {
    icmp_ln786_23_fu_5068_p2 = (!p_Result_90_22_fu_5028_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_22_fu_5028_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_24_fu_5190_p2() {
    icmp_ln786_24_fu_5190_p2 = (!p_Result_90_23_fu_5150_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_23_fu_5150_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_25_fu_5312_p2() {
    icmp_ln786_25_fu_5312_p2 = (!p_Result_90_24_fu_5272_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_24_fu_5272_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_26_fu_5434_p2() {
    icmp_ln786_26_fu_5434_p2 = (!p_Result_90_25_fu_5394_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_25_fu_5394_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_27_fu_5556_p2() {
    icmp_ln786_27_fu_5556_p2 = (!p_Result_90_26_fu_5516_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_26_fu_5516_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_28_fu_5678_p2() {
    icmp_ln786_28_fu_5678_p2 = (!p_Result_90_27_fu_5638_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_27_fu_5638_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_29_fu_5800_p2() {
    icmp_ln786_29_fu_5800_p2 = (!p_Result_90_28_fu_5760_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_28_fu_5760_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_2_fu_2506_p2() {
    icmp_ln786_2_fu_2506_p2 = (!p_Result_90_2_fu_2466_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_2_fu_2466_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_30_fu_5922_p2() {
    icmp_ln786_30_fu_5922_p2 = (!p_Result_90_29_fu_5882_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_29_fu_5882_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_31_fu_6044_p2() {
    icmp_ln786_31_fu_6044_p2 = (!p_Result_90_30_fu_6004_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_30_fu_6004_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_32_fu_2384_p2() {
    icmp_ln786_32_fu_2384_p2 = (!p_Result_90_1_fu_2344_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_1_fu_2344_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_33_fu_12420_p2() {
    icmp_ln786_33_fu_12420_p2 = (!p_Result_98_1_fu_12380_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_1_fu_12380_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_34_fu_12670_p2() {
    icmp_ln786_34_fu_12670_p2 = (!p_Result_98_2_fu_12630_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_2_fu_12630_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_35_fu_12920_p2() {
    icmp_ln786_35_fu_12920_p2 = (!p_Result_98_3_fu_12880_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_3_fu_12880_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_36_fu_13170_p2() {
    icmp_ln786_36_fu_13170_p2 = (!p_Result_98_4_fu_13130_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_4_fu_13130_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_37_fu_13420_p2() {
    icmp_ln786_37_fu_13420_p2 = (!p_Result_98_5_fu_13380_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_5_fu_13380_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_38_fu_13670_p2() {
    icmp_ln786_38_fu_13670_p2 = (!p_Result_98_6_fu_13630_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_6_fu_13630_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_39_fu_13920_p2() {
    icmp_ln786_39_fu_13920_p2 = (!p_Result_98_7_fu_13880_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_7_fu_13880_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_3_fu_2628_p2() {
    icmp_ln786_3_fu_2628_p2 = (!p_Result_90_3_fu_2588_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_3_fu_2588_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_40_fu_14170_p2() {
    icmp_ln786_40_fu_14170_p2 = (!p_Result_98_8_fu_14130_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_8_fu_14130_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_41_fu_14420_p2() {
    icmp_ln786_41_fu_14420_p2 = (!p_Result_98_9_fu_14380_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_9_fu_14380_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_42_fu_14670_p2() {
    icmp_ln786_42_fu_14670_p2 = (!p_Result_98_s_fu_14630_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_s_fu_14630_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_43_fu_14920_p2() {
    icmp_ln786_43_fu_14920_p2 = (!p_Result_98_10_fu_14880_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_10_fu_14880_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_44_fu_15170_p2() {
    icmp_ln786_44_fu_15170_p2 = (!p_Result_98_11_fu_15130_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_11_fu_15130_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_45_fu_15420_p2() {
    icmp_ln786_45_fu_15420_p2 = (!p_Result_98_12_fu_15380_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_12_fu_15380_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_46_fu_15670_p2() {
    icmp_ln786_46_fu_15670_p2 = (!p_Result_98_13_fu_15630_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_13_fu_15630_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_47_fu_15920_p2() {
    icmp_ln786_47_fu_15920_p2 = (!p_Result_98_14_fu_15880_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_14_fu_15880_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_48_fu_16170_p2() {
    icmp_ln786_48_fu_16170_p2 = (!p_Result_98_15_fu_16130_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_15_fu_16130_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_49_fu_16420_p2() {
    icmp_ln786_49_fu_16420_p2 = (!p_Result_98_16_fu_16380_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_16_fu_16380_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_4_fu_2750_p2() {
    icmp_ln786_4_fu_2750_p2 = (!p_Result_90_4_fu_2710_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_4_fu_2710_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_50_fu_16670_p2() {
    icmp_ln786_50_fu_16670_p2 = (!p_Result_98_17_fu_16630_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_17_fu_16630_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_51_fu_16920_p2() {
    icmp_ln786_51_fu_16920_p2 = (!p_Result_98_18_fu_16880_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_18_fu_16880_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_52_fu_17170_p2() {
    icmp_ln786_52_fu_17170_p2 = (!p_Result_98_19_fu_17130_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_19_fu_17130_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_53_fu_17420_p2() {
    icmp_ln786_53_fu_17420_p2 = (!p_Result_98_20_fu_17380_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_20_fu_17380_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_54_fu_17670_p2() {
    icmp_ln786_54_fu_17670_p2 = (!p_Result_98_21_fu_17630_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_21_fu_17630_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_55_fu_17920_p2() {
    icmp_ln786_55_fu_17920_p2 = (!p_Result_98_22_fu_17880_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_22_fu_17880_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_56_fu_18170_p2() {
    icmp_ln786_56_fu_18170_p2 = (!p_Result_98_23_fu_18130_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_23_fu_18130_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_57_fu_18420_p2() {
    icmp_ln786_57_fu_18420_p2 = (!p_Result_98_24_fu_18380_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_24_fu_18380_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_58_fu_18670_p2() {
    icmp_ln786_58_fu_18670_p2 = (!p_Result_98_25_fu_18630_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_25_fu_18630_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_59_fu_18920_p2() {
    icmp_ln786_59_fu_18920_p2 = (!p_Result_98_26_fu_18880_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_26_fu_18880_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_5_fu_2872_p2() {
    icmp_ln786_5_fu_2872_p2 = (!p_Result_90_5_fu_2832_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_5_fu_2832_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_60_fu_19170_p2() {
    icmp_ln786_60_fu_19170_p2 = (!p_Result_98_27_fu_19130_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_27_fu_19130_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_61_fu_19420_p2() {
    icmp_ln786_61_fu_19420_p2 = (!p_Result_98_28_fu_19380_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_28_fu_19380_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_62_fu_19670_p2() {
    icmp_ln786_62_fu_19670_p2 = (!p_Result_98_29_fu_19630_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_29_fu_19630_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_63_fu_19920_p2() {
    icmp_ln786_63_fu_19920_p2 = (!p_Result_98_30_fu_19880_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_98_30_fu_19880_p4.read() != ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln786_6_fu_2994_p2() {
    icmp_ln786_6_fu_2994_p2 = (!p_Result_90_6_fu_2954_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_6_fu_2954_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_7_fu_3116_p2() {
    icmp_ln786_7_fu_3116_p2 = (!p_Result_90_7_fu_3076_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_7_fu_3076_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_8_fu_3238_p2() {
    icmp_ln786_8_fu_3238_p2 = (!p_Result_90_8_fu_3198_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_8_fu_3198_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_9_fu_3360_p2() {
    icmp_ln786_9_fu_3360_p2 = (!p_Result_90_9_fu_3320_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_90_9_fu_3320_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln786_fu_2262_p2() {
    icmp_ln786_fu_2262_p2 = (!p_Result_s_fu_2222_p4.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_s_fu_2222_p4.read() != ap_const_lv7_7F);
}

void bn_relu_small::thread_icmp_ln879_10_fu_6870_p2() {
    icmp_ln879_10_fu_6870_p2 = (!tmp_10_fu_6860_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_10_fu_6860_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_11_fu_20531_p2() {
    icmp_ln879_11_fu_20531_p2 = (!tmp_11_reg_27669.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_11_reg_27669.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_12_fu_7036_p2() {
    icmp_ln879_12_fu_7036_p2 = (!tmp_12_fu_7026_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_12_fu_7026_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_13_fu_7052_p2() {
    icmp_ln879_13_fu_7052_p2 = (!tmp_13_fu_7042_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_13_fu_7042_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_14_fu_20671_p2() {
    icmp_ln879_14_fu_20671_p2 = (!tmp_14_reg_27702.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_14_reg_27702.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_15_fu_7218_p2() {
    icmp_ln879_15_fu_7218_p2 = (!tmp_15_fu_7208_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_15_fu_7208_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_16_fu_7234_p2() {
    icmp_ln879_16_fu_7234_p2 = (!tmp_16_fu_7224_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_16_fu_7224_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_17_fu_20811_p2() {
    icmp_ln879_17_fu_20811_p2 = (!tmp_17_reg_27735.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_17_reg_27735.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_18_fu_7400_p2() {
    icmp_ln879_18_fu_7400_p2 = (!tmp_18_fu_7390_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_18_fu_7390_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_19_fu_7416_p2() {
    icmp_ln879_19_fu_7416_p2 = (!tmp_19_fu_7406_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_19_fu_7406_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_1_fu_6324_p2() {
    icmp_ln879_1_fu_6324_p2 = (!tmp_2_fu_6314_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_2_fu_6314_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_20_fu_20951_p2() {
    icmp_ln879_20_fu_20951_p2 = (!tmp_20_reg_27768.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_20_reg_27768.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_21_fu_7582_p2() {
    icmp_ln879_21_fu_7582_p2 = (!tmp_21_fu_7572_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_21_fu_7572_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_22_fu_7598_p2() {
    icmp_ln879_22_fu_7598_p2 = (!tmp_22_fu_7588_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_22_fu_7588_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_23_fu_21091_p2() {
    icmp_ln879_23_fu_21091_p2 = (!tmp_23_reg_27801.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_23_reg_27801.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_24_fu_7764_p2() {
    icmp_ln879_24_fu_7764_p2 = (!tmp_24_fu_7754_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_24_fu_7754_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_25_fu_7780_p2() {
    icmp_ln879_25_fu_7780_p2 = (!tmp_25_fu_7770_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_25_fu_7770_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_26_fu_21231_p2() {
    icmp_ln879_26_fu_21231_p2 = (!tmp_26_reg_27834.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_26_reg_27834.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_27_fu_7946_p2() {
    icmp_ln879_27_fu_7946_p2 = (!tmp_27_fu_7936_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_27_fu_7936_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_28_fu_7962_p2() {
    icmp_ln879_28_fu_7962_p2 = (!tmp_28_fu_7952_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_28_fu_7952_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_29_fu_21371_p2() {
    icmp_ln879_29_fu_21371_p2 = (!tmp_29_reg_27867.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_29_reg_27867.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_2_fu_20111_p2() {
    icmp_ln879_2_fu_20111_p2 = (!tmp_3_reg_27570.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3_reg_27570.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_30_fu_8128_p2() {
    icmp_ln879_30_fu_8128_p2 = (!tmp_30_fu_8118_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_30_fu_8118_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_31_fu_8144_p2() {
    icmp_ln879_31_fu_8144_p2 = (!tmp_31_fu_8134_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_31_fu_8134_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_32_fu_21511_p2() {
    icmp_ln879_32_fu_21511_p2 = (!tmp_32_reg_27900.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_32_reg_27900.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_33_fu_8310_p2() {
    icmp_ln879_33_fu_8310_p2 = (!tmp_33_fu_8300_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_33_fu_8300_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_34_fu_8326_p2() {
    icmp_ln879_34_fu_8326_p2 = (!tmp_34_fu_8316_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_34_fu_8316_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_35_fu_21651_p2() {
    icmp_ln879_35_fu_21651_p2 = (!tmp_35_reg_27933.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_35_reg_27933.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_36_fu_8492_p2() {
    icmp_ln879_36_fu_8492_p2 = (!tmp_36_fu_8482_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_36_fu_8482_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_37_fu_8508_p2() {
    icmp_ln879_37_fu_8508_p2 = (!tmp_37_fu_8498_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_37_fu_8498_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_38_fu_21791_p2() {
    icmp_ln879_38_fu_21791_p2 = (!tmp_38_reg_27966.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_38_reg_27966.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_39_fu_8674_p2() {
    icmp_ln879_39_fu_8674_p2 = (!tmp_39_fu_8664_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_39_fu_8664_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_3_fu_6490_p2() {
    icmp_ln879_3_fu_6490_p2 = (!tmp_4_fu_6480_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4_fu_6480_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_40_fu_8690_p2() {
    icmp_ln879_40_fu_8690_p2 = (!tmp_40_fu_8680_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_40_fu_8680_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_41_fu_21931_p2() {
    icmp_ln879_41_fu_21931_p2 = (!tmp_41_reg_27999.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_41_reg_27999.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_42_fu_8856_p2() {
    icmp_ln879_42_fu_8856_p2 = (!tmp_42_fu_8846_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_42_fu_8846_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_43_fu_8872_p2() {
    icmp_ln879_43_fu_8872_p2 = (!tmp_43_fu_8862_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_43_fu_8862_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_44_fu_22071_p2() {
    icmp_ln879_44_fu_22071_p2 = (!tmp_44_reg_28032.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_44_reg_28032.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_45_fu_9038_p2() {
    icmp_ln879_45_fu_9038_p2 = (!tmp_45_fu_9028_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_45_fu_9028_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_46_fu_9054_p2() {
    icmp_ln879_46_fu_9054_p2 = (!tmp_46_fu_9044_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_46_fu_9044_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_47_fu_22211_p2() {
    icmp_ln879_47_fu_22211_p2 = (!tmp_47_reg_28065.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_47_reg_28065.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_48_fu_9220_p2() {
    icmp_ln879_48_fu_9220_p2 = (!tmp_48_fu_9210_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_48_fu_9210_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_49_fu_9236_p2() {
    icmp_ln879_49_fu_9236_p2 = (!tmp_49_fu_9226_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_49_fu_9226_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_4_fu_6506_p2() {
    icmp_ln879_4_fu_6506_p2 = (!tmp_5_fu_6496_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5_fu_6496_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_50_fu_22351_p2() {
    icmp_ln879_50_fu_22351_p2 = (!tmp_50_reg_28098.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_50_reg_28098.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_51_fu_9402_p2() {
    icmp_ln879_51_fu_9402_p2 = (!tmp_51_fu_9392_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_51_fu_9392_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_52_fu_9418_p2() {
    icmp_ln879_52_fu_9418_p2 = (!tmp_52_fu_9408_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_52_fu_9408_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_53_fu_22491_p2() {
    icmp_ln879_53_fu_22491_p2 = (!tmp_53_reg_28131.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_53_reg_28131.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_54_fu_9584_p2() {
    icmp_ln879_54_fu_9584_p2 = (!tmp_54_fu_9574_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_54_fu_9574_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_55_fu_9600_p2() {
    icmp_ln879_55_fu_9600_p2 = (!tmp_55_fu_9590_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_55_fu_9590_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_56_fu_22631_p2() {
    icmp_ln879_56_fu_22631_p2 = (!tmp_56_reg_28164.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_56_reg_28164.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_57_fu_9766_p2() {
    icmp_ln879_57_fu_9766_p2 = (!tmp_57_fu_9756_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_57_fu_9756_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_58_fu_9782_p2() {
    icmp_ln879_58_fu_9782_p2 = (!tmp_58_fu_9772_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_58_fu_9772_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_59_fu_22771_p2() {
    icmp_ln879_59_fu_22771_p2 = (!tmp_59_reg_28197.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_59_reg_28197.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_5_fu_20251_p2() {
    icmp_ln879_5_fu_20251_p2 = (!tmp_6_reg_27603.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6_reg_27603.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_60_fu_9948_p2() {
    icmp_ln879_60_fu_9948_p2 = (!tmp_60_fu_9938_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_60_fu_9938_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_61_fu_9964_p2() {
    icmp_ln879_61_fu_9964_p2 = (!tmp_61_fu_9954_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_61_fu_9954_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_62_fu_22911_p2() {
    icmp_ln879_62_fu_22911_p2 = (!tmp_62_reg_28230.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_62_reg_28230.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_63_fu_10130_p2() {
    icmp_ln879_63_fu_10130_p2 = (!tmp_63_fu_10120_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_63_fu_10120_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_64_fu_10146_p2() {
    icmp_ln879_64_fu_10146_p2 = (!tmp_64_fu_10136_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_64_fu_10136_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_65_fu_23051_p2() {
    icmp_ln879_65_fu_23051_p2 = (!tmp_65_reg_28263.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_65_reg_28263.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_66_fu_10312_p2() {
    icmp_ln879_66_fu_10312_p2 = (!tmp_66_fu_10302_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_66_fu_10302_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_67_fu_10328_p2() {
    icmp_ln879_67_fu_10328_p2 = (!tmp_67_fu_10318_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_67_fu_10318_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_68_fu_23191_p2() {
    icmp_ln879_68_fu_23191_p2 = (!tmp_68_reg_28296.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_68_reg_28296.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_69_fu_10494_p2() {
    icmp_ln879_69_fu_10494_p2 = (!tmp_69_fu_10484_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_69_fu_10484_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_6_fu_6672_p2() {
    icmp_ln879_6_fu_6672_p2 = (!tmp_7_fu_6662_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7_fu_6662_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_70_fu_10510_p2() {
    icmp_ln879_70_fu_10510_p2 = (!tmp_70_fu_10500_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_70_fu_10500_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_71_fu_23331_p2() {
    icmp_ln879_71_fu_23331_p2 = (!tmp_71_reg_28329.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_71_reg_28329.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_72_fu_10676_p2() {
    icmp_ln879_72_fu_10676_p2 = (!tmp_72_fu_10666_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_72_fu_10666_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_73_fu_10692_p2() {
    icmp_ln879_73_fu_10692_p2 = (!tmp_73_fu_10682_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_73_fu_10682_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_74_fu_23471_p2() {
    icmp_ln879_74_fu_23471_p2 = (!tmp_74_reg_28362.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_74_reg_28362.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_75_fu_10858_p2() {
    icmp_ln879_75_fu_10858_p2 = (!tmp_75_fu_10848_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_75_fu_10848_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_76_fu_10874_p2() {
    icmp_ln879_76_fu_10874_p2 = (!tmp_76_fu_10864_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_76_fu_10864_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_77_fu_23611_p2() {
    icmp_ln879_77_fu_23611_p2 = (!tmp_77_reg_28395.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_77_reg_28395.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_78_fu_11040_p2() {
    icmp_ln879_78_fu_11040_p2 = (!tmp_78_fu_11030_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_78_fu_11030_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_79_fu_11056_p2() {
    icmp_ln879_79_fu_11056_p2 = (!tmp_79_fu_11046_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_79_fu_11046_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_7_fu_6688_p2() {
    icmp_ln879_7_fu_6688_p2 = (!tmp_8_fu_6678_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_8_fu_6678_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_80_fu_23751_p2() {
    icmp_ln879_80_fu_23751_p2 = (!tmp_80_reg_28428.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_80_reg_28428.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_81_fu_11222_p2() {
    icmp_ln879_81_fu_11222_p2 = (!tmp_81_fu_11212_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_81_fu_11212_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_82_fu_11238_p2() {
    icmp_ln879_82_fu_11238_p2 = (!tmp_82_fu_11228_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_82_fu_11228_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_83_fu_23891_p2() {
    icmp_ln879_83_fu_23891_p2 = (!tmp_83_reg_28461.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_83_reg_28461.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_84_fu_11404_p2() {
    icmp_ln879_84_fu_11404_p2 = (!tmp_84_fu_11394_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_84_fu_11394_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_85_fu_11420_p2() {
    icmp_ln879_85_fu_11420_p2 = (!tmp_85_fu_11410_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_85_fu_11410_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_86_fu_24031_p2() {
    icmp_ln879_86_fu_24031_p2 = (!tmp_86_reg_28494.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_86_reg_28494.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_87_fu_11586_p2() {
    icmp_ln879_87_fu_11586_p2 = (!tmp_87_fu_11576_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_87_fu_11576_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_88_fu_11602_p2() {
    icmp_ln879_88_fu_11602_p2 = (!tmp_88_fu_11592_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_88_fu_11592_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_89_fu_24171_p2() {
    icmp_ln879_89_fu_24171_p2 = (!tmp_89_reg_28527.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_89_reg_28527.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_8_fu_20391_p2() {
    icmp_ln879_8_fu_20391_p2 = (!tmp_9_reg_27636.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_9_reg_27636.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_90_fu_11768_p2() {
    icmp_ln879_90_fu_11768_p2 = (!tmp_90_fu_11758_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_90_fu_11758_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_91_fu_11784_p2() {
    icmp_ln879_91_fu_11784_p2 = (!tmp_91_fu_11774_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_91_fu_11774_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_92_fu_24311_p2() {
    icmp_ln879_92_fu_24311_p2 = (!tmp_92_reg_28560.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_92_reg_28560.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_93_fu_11950_p2() {
    icmp_ln879_93_fu_11950_p2 = (!tmp_93_fu_11940_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_93_fu_11940_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_94_fu_11966_p2() {
    icmp_ln879_94_fu_11966_p2 = (!tmp_94_fu_11956_p4.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_94_fu_11956_p4.read() == ap_const_lv5_1F);
}

void bn_relu_small::thread_icmp_ln879_95_fu_24488_p2() {
    icmp_ln879_95_fu_24488_p2 = (!tmp_95_reg_28593.read().is_01() || !ap_const_lv9_1FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_95_reg_28593.read() == ap_const_lv9_1FF);
}

void bn_relu_small::thread_icmp_ln879_9_fu_6854_p2() {
    icmp_ln879_9_fu_6854_p2 = (!tmp_s_fu_6844_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_s_fu_6844_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_icmp_ln879_fu_6308_p2() {
    icmp_ln879_fu_6308_p2 = (!tmp_1_fu_6298_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1_fu_6298_p4.read() == ap_const_lv4_F);
}

void bn_relu_small::thread_m_axi_DDR_buf_V_ARADDR() {
    m_axi_DDR_buf_V_ARADDR = ap_const_lv32_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_ARBURST() {
    m_axi_DDR_buf_V_ARBURST = ap_const_lv2_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_ARCACHE() {
    m_axi_DDR_buf_V_ARCACHE = ap_const_lv4_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_ARID() {
    m_axi_DDR_buf_V_ARID = ap_const_lv1_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_ARLEN() {
    m_axi_DDR_buf_V_ARLEN = ap_const_lv32_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_ARLOCK() {
    m_axi_DDR_buf_V_ARLOCK = ap_const_lv2_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_ARPROT() {
    m_axi_DDR_buf_V_ARPROT = ap_const_lv3_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_ARQOS() {
    m_axi_DDR_buf_V_ARQOS = ap_const_lv4_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_ARREGION() {
    m_axi_DDR_buf_V_ARREGION = ap_const_lv4_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_ARSIZE() {
    m_axi_DDR_buf_V_ARSIZE = ap_const_lv3_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_ARUSER() {
    m_axi_DDR_buf_V_ARUSER = ap_const_lv1_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_ARVALID() {
    m_axi_DDR_buf_V_ARVALID = ap_const_logic_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_AWADDR() {
    m_axi_DDR_buf_V_AWADDR =  (sc_lv<32>) (sext_ln414_1_fu_12042_p1.read());
}

void bn_relu_small::thread_m_axi_DDR_buf_V_AWBURST() {
    m_axi_DDR_buf_V_AWBURST = ap_const_lv2_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_AWCACHE() {
    m_axi_DDR_buf_V_AWCACHE = ap_const_lv4_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_AWID() {
    m_axi_DDR_buf_V_AWID = ap_const_lv1_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_AWLEN() {
    m_axi_DDR_buf_V_AWLEN = ap_const_lv32_1;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_AWLOCK() {
    m_axi_DDR_buf_V_AWLOCK = ap_const_lv2_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_AWPROT() {
    m_axi_DDR_buf_V_AWPROT = ap_const_lv3_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_AWQOS() {
    m_axi_DDR_buf_V_AWQOS = ap_const_lv4_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_AWREGION() {
    m_axi_DDR_buf_V_AWREGION = ap_const_lv4_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_AWSIZE() {
    m_axi_DDR_buf_V_AWSIZE = ap_const_lv3_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_AWUSER() {
    m_axi_DDR_buf_V_AWUSER = ap_const_lv1_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_AWVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln291_reg_25426_pp0_iter5_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        m_axi_DDR_buf_V_AWVALID = ap_const_logic_1;
    } else {
        m_axi_DDR_buf_V_AWVALID = ap_const_logic_0;
    }
}

void bn_relu_small::thread_m_axi_DDR_buf_V_BREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln291_reg_25426_pp0_iter11_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        m_axi_DDR_buf_V_BREADY = ap_const_logic_1;
    } else {
        m_axi_DDR_buf_V_BREADY = ap_const_logic_0;
    }
}

void bn_relu_small::thread_m_axi_DDR_buf_V_RREADY() {
    m_axi_DDR_buf_V_RREADY = ap_const_logic_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_WDATA() {
    m_axi_DDR_buf_V_WDATA = esl_concat<496,16>(esl_concat<480,16>(esl_concat<464,16>(esl_concat<448,16>(esl_concat<432,16>(esl_concat<416,16>(esl_concat<400,16>(esl_concat<384,16>(esl_concat<368,16>(esl_concat<352,16>(esl_concat<336,16>(esl_concat<320,16>(esl_concat<304,16>(esl_concat<288,16>(esl_concat<272,16>(esl_concat<256,16>(esl_concat<240,16>(esl_concat<224,16>(esl_concat<208,16>(esl_concat<192,16>(esl_concat<176,16>(esl_concat<160,16>(esl_concat<144,16>(esl_concat<128,16>(esl_concat<112,16>(esl_concat<96,16>(esl_concat<80,16>(esl_concat<64,16>(esl_concat<48,16>(esl_concat<32,16>(esl_concat<16,16>(select_ln340_254_reg_28566.read(), select_ln340_250_reg_28533.read()), select_ln340_246_reg_28500.read()), select_ln340_242_reg_28467.read()), select_ln340_238_reg_28434.read()), select_ln340_234_reg_28401.read()), select_ln340_230_reg_28368.read()), select_ln340_226_reg_28335.read()), select_ln340_222_reg_28302.read()), select_ln340_218_reg_28269.read()), select_ln340_214_reg_28236.read()), select_ln340_210_reg_28203.read()), select_ln340_206_reg_28170.read()), select_ln340_202_reg_28137.read()), select_ln340_198_reg_28104.read()), select_ln340_194_reg_28071.read()), select_ln340_190_reg_28038.read()), select_ln340_186_reg_28005.read()), select_ln340_182_reg_27972.read()), select_ln340_178_reg_27939.read()), select_ln340_174_reg_27906.read()), select_ln340_170_reg_27873.read()), select_ln340_166_reg_27840.read()), select_ln340_162_reg_27807.read()), select_ln340_158_reg_27774.read()), select_ln340_154_reg_27741.read()), select_ln340_150_reg_27708.read()), select_ln340_146_reg_27675.read()), select_ln340_142_reg_27642.read()), select_ln340_138_reg_27609.read()), select_ln340_134_reg_27576.read()), select_ln340_130_reg_27543.read());
}

void bn_relu_small::thread_m_axi_DDR_buf_V_WID() {
    m_axi_DDR_buf_V_WID = ap_const_lv1_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_WLAST() {
    m_axi_DDR_buf_V_WLAST = ap_const_logic_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_WSTRB() {
    m_axi_DDR_buf_V_WSTRB = ap_const_lv64_FFFFFFFFFFFFFFFF;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_WUSER() {
    m_axi_DDR_buf_V_WUSER = ap_const_lv1_0;
}

void bn_relu_small::thread_m_axi_DDR_buf_V_WVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln291_reg_25426_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        m_axi_DDR_buf_V_WVALID = ap_const_logic_1;
    } else {
        m_axi_DDR_buf_V_WVALID = ap_const_logic_0;
    }
}

void bn_relu_small::thread_mul_ln1118_10_fu_24789_p0() {
    mul_ln1118_10_fu_24789_p0 =  (sc_lv<16>) (sext_ln1116_10_reg_25086.read());
}

void bn_relu_small::thread_mul_ln1118_11_fu_24794_p0() {
    mul_ln1118_11_fu_24794_p0 =  (sc_lv<16>) (sext_ln1116_11_reg_25101.read());
}

void bn_relu_small::thread_mul_ln1118_12_fu_24799_p0() {
    mul_ln1118_12_fu_24799_p0 =  (sc_lv<16>) (sext_ln1116_12_reg_25116.read());
}

void bn_relu_small::thread_mul_ln1118_13_fu_24804_p0() {
    mul_ln1118_13_fu_24804_p0 =  (sc_lv<16>) (sext_ln1116_13_reg_25131.read());
}

void bn_relu_small::thread_mul_ln1118_14_fu_24809_p0() {
    mul_ln1118_14_fu_24809_p0 =  (sc_lv<16>) (sext_ln1116_14_reg_25146.read());
}

void bn_relu_small::thread_mul_ln1118_15_fu_24814_p0() {
    mul_ln1118_15_fu_24814_p0 =  (sc_lv<16>) (sext_ln1116_15_reg_25161.read());
}

void bn_relu_small::thread_mul_ln1118_16_fu_24819_p0() {
    mul_ln1118_16_fu_24819_p0 =  (sc_lv<16>) (sext_ln1116_16_reg_25176.read());
}

void bn_relu_small::thread_mul_ln1118_17_fu_24824_p0() {
    mul_ln1118_17_fu_24824_p0 =  (sc_lv<16>) (sext_ln1116_17_reg_25191.read());
}

void bn_relu_small::thread_mul_ln1118_18_fu_24829_p0() {
    mul_ln1118_18_fu_24829_p0 =  (sc_lv<16>) (sext_ln1116_18_reg_25206.read());
}

void bn_relu_small::thread_mul_ln1118_19_fu_24834_p0() {
    mul_ln1118_19_fu_24834_p0 =  (sc_lv<16>) (sext_ln1116_19_reg_25221.read());
}

void bn_relu_small::thread_mul_ln1118_1_fu_24744_p0() {
    mul_ln1118_1_fu_24744_p0 =  (sc_lv<16>) (sext_ln1116_1_reg_24951.read());
}

void bn_relu_small::thread_mul_ln1118_20_fu_24839_p0() {
    mul_ln1118_20_fu_24839_p0 =  (sc_lv<16>) (sext_ln1116_20_reg_25236.read());
}

}

