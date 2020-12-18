#include "bn_relu_sc_relu.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void bn_relu_sc_relu::thread_DDR_buf_V_blk_n_AW() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter21.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln362_reg_80073_pp0_iter20_reg.read()))) {
        DDR_buf_V_blk_n_AW = m_axi_DDR_buf_V_AWREADY.read();
    } else {
        DDR_buf_V_blk_n_AW = ap_const_logic_1;
    }
}

void bn_relu_sc_relu::thread_DDR_buf_V_blk_n_B() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter27.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln362_reg_80073_pp0_iter26_reg.read()))) {
        DDR_buf_V_blk_n_B = m_axi_DDR_buf_V_BVALID.read();
    } else {
        DDR_buf_V_blk_n_B = ap_const_logic_1;
    }
}

void bn_relu_sc_relu::thread_DDR_buf_V_blk_n_W() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter22.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln362_reg_80073_pp0_iter21_reg.read()))) {
        DDR_buf_V_blk_n_W = m_axi_DDR_buf_V_WREADY.read();
    } else {
        DDR_buf_V_blk_n_W = ap_const_logic_1;
    }
}

void bn_relu_sc_relu::thread_H_fmap_out_cast2_fu_3892_p1() {
    H_fmap_out_cast2_fu_3892_p1 = esl_zext<32,8>(H_fmap_out.read());
}

void bn_relu_sc_relu::thread_add_ln1192_100_fu_26473_p2() {
    add_ln1192_100_fu_26473_p2 = (!mul_ln1118_100_reg_83916.read().is_01() || !sext_ln728_36_reg_78666.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_100_reg_83916.read()) + sc_bigint<32>(sext_ln728_36_reg_78666.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_101_fu_26625_p2() {
    add_ln1192_101_fu_26625_p2 = (!mul_ln1118_101_reg_83922.read().is_01() || !sext_ln728_37_reg_78681.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_101_reg_83922.read()) + sc_bigint<32>(sext_ln728_37_reg_78681.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_102_fu_26777_p2() {
    add_ln1192_102_fu_26777_p2 = (!mul_ln1118_102_reg_83928.read().is_01() || !sext_ln728_38_reg_78696.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_102_reg_83928.read()) + sc_bigint<32>(sext_ln728_38_reg_78696.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_103_fu_26929_p2() {
    add_ln1192_103_fu_26929_p2 = (!mul_ln1118_103_reg_83934.read().is_01() || !sext_ln728_39_reg_78711.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_103_reg_83934.read()) + sc_bigint<32>(sext_ln728_39_reg_78711.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_104_fu_27081_p2() {
    add_ln1192_104_fu_27081_p2 = (!mul_ln1118_104_reg_83940.read().is_01() || !sext_ln728_40_reg_78726.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_104_reg_83940.read()) + sc_bigint<32>(sext_ln728_40_reg_78726.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_105_fu_27233_p2() {
    add_ln1192_105_fu_27233_p2 = (!mul_ln1118_105_reg_83946.read().is_01() || !sext_ln728_41_reg_78741.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_105_reg_83946.read()) + sc_bigint<32>(sext_ln728_41_reg_78741.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_106_fu_27385_p2() {
    add_ln1192_106_fu_27385_p2 = (!mul_ln1118_106_reg_83952.read().is_01() || !sext_ln728_42_reg_78756.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_106_reg_83952.read()) + sc_bigint<32>(sext_ln728_42_reg_78756.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_107_fu_27537_p2() {
    add_ln1192_107_fu_27537_p2 = (!mul_ln1118_107_reg_83958.read().is_01() || !sext_ln728_43_reg_78771.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_107_reg_83958.read()) + sc_bigint<32>(sext_ln728_43_reg_78771.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_108_fu_27689_p2() {
    add_ln1192_108_fu_27689_p2 = (!mul_ln1118_108_reg_83964.read().is_01() || !sext_ln728_44_reg_78786.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_108_reg_83964.read()) + sc_bigint<32>(sext_ln728_44_reg_78786.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_109_fu_27841_p2() {
    add_ln1192_109_fu_27841_p2 = (!mul_ln1118_109_reg_83970.read().is_01() || !sext_ln728_45_reg_78801.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_109_reg_83970.read()) + sc_bigint<32>(sext_ln728_45_reg_78801.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_110_fu_27993_p2() {
    add_ln1192_110_fu_27993_p2 = (!mul_ln1118_110_reg_83976.read().is_01() || !sext_ln728_46_reg_78816.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_110_reg_83976.read()) + sc_bigint<32>(sext_ln728_46_reg_78816.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_111_fu_28145_p2() {
    add_ln1192_111_fu_28145_p2 = (!mul_ln1118_111_reg_83982.read().is_01() || !sext_ln728_47_reg_78831.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_111_reg_83982.read()) + sc_bigint<32>(sext_ln728_47_reg_78831.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_112_fu_28297_p2() {
    add_ln1192_112_fu_28297_p2 = (!mul_ln1118_112_reg_83988.read().is_01() || !sext_ln728_48_reg_78846.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_112_reg_83988.read()) + sc_bigint<32>(sext_ln728_48_reg_78846.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_113_fu_28449_p2() {
    add_ln1192_113_fu_28449_p2 = (!mul_ln1118_113_reg_83994.read().is_01() || !sext_ln728_49_reg_78861.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_113_reg_83994.read()) + sc_bigint<32>(sext_ln728_49_reg_78861.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_114_fu_28601_p2() {
    add_ln1192_114_fu_28601_p2 = (!mul_ln1118_114_reg_84000.read().is_01() || !sext_ln728_50_reg_78876.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_114_reg_84000.read()) + sc_bigint<32>(sext_ln728_50_reg_78876.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_115_fu_28753_p2() {
    add_ln1192_115_fu_28753_p2 = (!mul_ln1118_115_reg_84006.read().is_01() || !sext_ln728_51_reg_78891.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_115_reg_84006.read()) + sc_bigint<32>(sext_ln728_51_reg_78891.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_116_fu_28905_p2() {
    add_ln1192_116_fu_28905_p2 = (!mul_ln1118_116_reg_84012.read().is_01() || !sext_ln728_52_reg_78906.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_116_reg_84012.read()) + sc_bigint<32>(sext_ln728_52_reg_78906.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_117_fu_29057_p2() {
    add_ln1192_117_fu_29057_p2 = (!mul_ln1118_117_reg_84018.read().is_01() || !sext_ln728_53_reg_78921.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_117_reg_84018.read()) + sc_bigint<32>(sext_ln728_53_reg_78921.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_118_fu_29209_p2() {
    add_ln1192_118_fu_29209_p2 = (!mul_ln1118_118_reg_84024.read().is_01() || !sext_ln728_54_reg_78936.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_118_reg_84024.read()) + sc_bigint<32>(sext_ln728_54_reg_78936.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_119_fu_29361_p2() {
    add_ln1192_119_fu_29361_p2 = (!mul_ln1118_119_reg_84030.read().is_01() || !sext_ln728_55_reg_78951.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_119_reg_84030.read()) + sc_bigint<32>(sext_ln728_55_reg_78951.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_120_fu_29513_p2() {
    add_ln1192_120_fu_29513_p2 = (!mul_ln1118_120_reg_84036.read().is_01() || !sext_ln728_56_reg_78966.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_120_reg_84036.read()) + sc_bigint<32>(sext_ln728_56_reg_78966.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_121_fu_29665_p2() {
    add_ln1192_121_fu_29665_p2 = (!mul_ln1118_121_reg_84042.read().is_01() || !sext_ln728_57_reg_78981.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_121_reg_84042.read()) + sc_bigint<32>(sext_ln728_57_reg_78981.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_122_fu_29817_p2() {
    add_ln1192_122_fu_29817_p2 = (!mul_ln1118_122_reg_84048.read().is_01() || !sext_ln728_58_reg_78996.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_122_reg_84048.read()) + sc_bigint<32>(sext_ln728_58_reg_78996.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_123_fu_29969_p2() {
    add_ln1192_123_fu_29969_p2 = (!mul_ln1118_123_reg_84054.read().is_01() || !sext_ln728_59_reg_79011.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_123_reg_84054.read()) + sc_bigint<32>(sext_ln728_59_reg_79011.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_124_fu_30121_p2() {
    add_ln1192_124_fu_30121_p2 = (!mul_ln1118_124_reg_84060.read().is_01() || !sext_ln728_60_reg_79026.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_124_reg_84060.read()) + sc_bigint<32>(sext_ln728_60_reg_79026.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_125_fu_30273_p2() {
    add_ln1192_125_fu_30273_p2 = (!mul_ln1118_125_reg_84066.read().is_01() || !sext_ln728_61_reg_79041.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_125_reg_84066.read()) + sc_bigint<32>(sext_ln728_61_reg_79041.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_126_fu_30425_p2() {
    add_ln1192_126_fu_30425_p2 = (!mul_ln1118_126_reg_84072.read().is_01() || !sext_ln728_62_reg_79056.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_126_reg_84072.read()) + sc_bigint<32>(sext_ln728_62_reg_79056.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_127_fu_33588_p2() {
    add_ln1192_127_fu_33588_p2 = (!sext_ln703_reg_79066.read().is_01() || !sext_ln728_127_fu_33585_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_reg_79066.read()) + sc_bigint<21>(sext_ln728_127_fu_33585_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_128_fu_46633_p2() {
    add_ln1192_128_fu_46633_p2 = (!sext_ln703_1_reg_79076.read().is_01() || !sext_ln728_128_fu_46629_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_1_reg_79076.read()) + sc_bigint<21>(sext_ln728_128_fu_46629_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_129_fu_33738_p2() {
    add_ln1192_129_fu_33738_p2 = (!sext_ln703_2_reg_79081.read().is_01() || !sext_ln728_129_fu_33735_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_2_reg_79081.read()) + sc_bigint<21>(sext_ln728_129_fu_33735_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_130_fu_46772_p2() {
    add_ln1192_130_fu_46772_p2 = (!sext_ln703_3_reg_79091.read().is_01() || !sext_ln728_130_fu_46768_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_3_reg_79091.read()) + sc_bigint<21>(sext_ln728_130_fu_46768_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_131_fu_33888_p2() {
    add_ln1192_131_fu_33888_p2 = (!sext_ln703_4_reg_79096.read().is_01() || !sext_ln728_131_fu_33885_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_4_reg_79096.read()) + sc_bigint<21>(sext_ln728_131_fu_33885_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_132_fu_46911_p2() {
    add_ln1192_132_fu_46911_p2 = (!sext_ln703_5_reg_79106.read().is_01() || !sext_ln728_132_fu_46907_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_5_reg_79106.read()) + sc_bigint<21>(sext_ln728_132_fu_46907_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_133_fu_34038_p2() {
    add_ln1192_133_fu_34038_p2 = (!sext_ln703_6_reg_79111.read().is_01() || !sext_ln728_133_fu_34035_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_6_reg_79111.read()) + sc_bigint<21>(sext_ln728_133_fu_34035_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_134_fu_47050_p2() {
    add_ln1192_134_fu_47050_p2 = (!sext_ln703_7_reg_79121.read().is_01() || !sext_ln728_134_fu_47046_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_7_reg_79121.read()) + sc_bigint<21>(sext_ln728_134_fu_47046_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_135_fu_34188_p2() {
    add_ln1192_135_fu_34188_p2 = (!sext_ln703_8_reg_79126.read().is_01() || !sext_ln728_135_fu_34185_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_8_reg_79126.read()) + sc_bigint<21>(sext_ln728_135_fu_34185_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_136_fu_47189_p2() {
    add_ln1192_136_fu_47189_p2 = (!sext_ln703_9_reg_79136.read().is_01() || !sext_ln728_136_fu_47185_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_9_reg_79136.read()) + sc_bigint<21>(sext_ln728_136_fu_47185_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_137_fu_34338_p2() {
    add_ln1192_137_fu_34338_p2 = (!sext_ln703_10_reg_79141.read().is_01() || !sext_ln728_137_fu_34335_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_10_reg_79141.read()) + sc_bigint<21>(sext_ln728_137_fu_34335_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_138_fu_47328_p2() {
    add_ln1192_138_fu_47328_p2 = (!sext_ln703_11_reg_79151.read().is_01() || !sext_ln728_138_fu_47324_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_11_reg_79151.read()) + sc_bigint<21>(sext_ln728_138_fu_47324_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_139_fu_34488_p2() {
    add_ln1192_139_fu_34488_p2 = (!sext_ln703_12_reg_79156.read().is_01() || !sext_ln728_139_fu_34485_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_12_reg_79156.read()) + sc_bigint<21>(sext_ln728_139_fu_34485_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_140_fu_47467_p2() {
    add_ln1192_140_fu_47467_p2 = (!sext_ln703_13_reg_79166.read().is_01() || !sext_ln728_140_fu_47463_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_13_reg_79166.read()) + sc_bigint<21>(sext_ln728_140_fu_47463_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_141_fu_34638_p2() {
    add_ln1192_141_fu_34638_p2 = (!sext_ln703_14_reg_79171.read().is_01() || !sext_ln728_141_fu_34635_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_14_reg_79171.read()) + sc_bigint<21>(sext_ln728_141_fu_34635_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_142_fu_47606_p2() {
    add_ln1192_142_fu_47606_p2 = (!sext_ln703_15_reg_79181.read().is_01() || !sext_ln728_142_fu_47602_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_15_reg_79181.read()) + sc_bigint<21>(sext_ln728_142_fu_47602_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_143_fu_34788_p2() {
    add_ln1192_143_fu_34788_p2 = (!sext_ln703_16_reg_79186.read().is_01() || !sext_ln728_143_fu_34785_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_16_reg_79186.read()) + sc_bigint<21>(sext_ln728_143_fu_34785_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_144_fu_47745_p2() {
    add_ln1192_144_fu_47745_p2 = (!sext_ln703_17_reg_79196.read().is_01() || !sext_ln728_144_fu_47741_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_17_reg_79196.read()) + sc_bigint<21>(sext_ln728_144_fu_47741_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_145_fu_34938_p2() {
    add_ln1192_145_fu_34938_p2 = (!sext_ln703_18_reg_79201.read().is_01() || !sext_ln728_145_fu_34935_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_18_reg_79201.read()) + sc_bigint<21>(sext_ln728_145_fu_34935_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_146_fu_47884_p2() {
    add_ln1192_146_fu_47884_p2 = (!sext_ln703_19_reg_79211.read().is_01() || !sext_ln728_146_fu_47880_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_19_reg_79211.read()) + sc_bigint<21>(sext_ln728_146_fu_47880_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_147_fu_35088_p2() {
    add_ln1192_147_fu_35088_p2 = (!sext_ln703_20_reg_79216.read().is_01() || !sext_ln728_147_fu_35085_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_20_reg_79216.read()) + sc_bigint<21>(sext_ln728_147_fu_35085_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_148_fu_48023_p2() {
    add_ln1192_148_fu_48023_p2 = (!sext_ln703_21_reg_79226.read().is_01() || !sext_ln728_148_fu_48019_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_21_reg_79226.read()) + sc_bigint<21>(sext_ln728_148_fu_48019_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_149_fu_35238_p2() {
    add_ln1192_149_fu_35238_p2 = (!sext_ln703_22_reg_79231.read().is_01() || !sext_ln728_149_fu_35235_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_22_reg_79231.read()) + sc_bigint<21>(sext_ln728_149_fu_35235_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_150_fu_48162_p2() {
    add_ln1192_150_fu_48162_p2 = (!sext_ln703_23_reg_79241.read().is_01() || !sext_ln728_150_fu_48158_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_23_reg_79241.read()) + sc_bigint<21>(sext_ln728_150_fu_48158_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_151_fu_35388_p2() {
    add_ln1192_151_fu_35388_p2 = (!sext_ln703_24_reg_79246.read().is_01() || !sext_ln728_151_fu_35385_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_24_reg_79246.read()) + sc_bigint<21>(sext_ln728_151_fu_35385_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_152_fu_48301_p2() {
    add_ln1192_152_fu_48301_p2 = (!sext_ln703_25_reg_79256.read().is_01() || !sext_ln728_152_fu_48297_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_25_reg_79256.read()) + sc_bigint<21>(sext_ln728_152_fu_48297_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_153_fu_35538_p2() {
    add_ln1192_153_fu_35538_p2 = (!sext_ln703_26_reg_79261.read().is_01() || !sext_ln728_153_fu_35535_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_26_reg_79261.read()) + sc_bigint<21>(sext_ln728_153_fu_35535_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_154_fu_48440_p2() {
    add_ln1192_154_fu_48440_p2 = (!sext_ln703_27_reg_79271.read().is_01() || !sext_ln728_154_fu_48436_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_27_reg_79271.read()) + sc_bigint<21>(sext_ln728_154_fu_48436_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_155_fu_35688_p2() {
    add_ln1192_155_fu_35688_p2 = (!sext_ln703_28_reg_79276.read().is_01() || !sext_ln728_155_fu_35685_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_28_reg_79276.read()) + sc_bigint<21>(sext_ln728_155_fu_35685_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_156_fu_48579_p2() {
    add_ln1192_156_fu_48579_p2 = (!sext_ln703_29_reg_79286.read().is_01() || !sext_ln728_156_fu_48575_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_29_reg_79286.read()) + sc_bigint<21>(sext_ln728_156_fu_48575_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_157_fu_35838_p2() {
    add_ln1192_157_fu_35838_p2 = (!sext_ln703_30_reg_79291.read().is_01() || !sext_ln728_157_fu_35835_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_30_reg_79291.read()) + sc_bigint<21>(sext_ln728_157_fu_35835_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_158_fu_48718_p2() {
    add_ln1192_158_fu_48718_p2 = (!sext_ln703_31_reg_79301.read().is_01() || !sext_ln728_158_fu_48714_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_31_reg_79301.read()) + sc_bigint<21>(sext_ln728_158_fu_48714_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_159_fu_35988_p2() {
    add_ln1192_159_fu_35988_p2 = (!sext_ln703_32_reg_79306.read().is_01() || !sext_ln728_159_fu_35985_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_32_reg_79306.read()) + sc_bigint<21>(sext_ln728_159_fu_35985_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_160_fu_48857_p2() {
    add_ln1192_160_fu_48857_p2 = (!sext_ln703_33_reg_79316.read().is_01() || !sext_ln728_160_fu_48853_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_33_reg_79316.read()) + sc_bigint<21>(sext_ln728_160_fu_48853_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_161_fu_36138_p2() {
    add_ln1192_161_fu_36138_p2 = (!sext_ln703_34_reg_79321.read().is_01() || !sext_ln728_161_fu_36135_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_34_reg_79321.read()) + sc_bigint<21>(sext_ln728_161_fu_36135_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_162_fu_48996_p2() {
    add_ln1192_162_fu_48996_p2 = (!sext_ln703_35_reg_79331.read().is_01() || !sext_ln728_162_fu_48992_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_35_reg_79331.read()) + sc_bigint<21>(sext_ln728_162_fu_48992_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_163_fu_36288_p2() {
    add_ln1192_163_fu_36288_p2 = (!sext_ln703_36_reg_79336.read().is_01() || !sext_ln728_163_fu_36285_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_36_reg_79336.read()) + sc_bigint<21>(sext_ln728_163_fu_36285_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_164_fu_49135_p2() {
    add_ln1192_164_fu_49135_p2 = (!sext_ln703_37_reg_79346.read().is_01() || !sext_ln728_164_fu_49131_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_37_reg_79346.read()) + sc_bigint<21>(sext_ln728_164_fu_49131_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_165_fu_36438_p2() {
    add_ln1192_165_fu_36438_p2 = (!sext_ln703_38_reg_79351.read().is_01() || !sext_ln728_165_fu_36435_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_38_reg_79351.read()) + sc_bigint<21>(sext_ln728_165_fu_36435_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_166_fu_49274_p2() {
    add_ln1192_166_fu_49274_p2 = (!sext_ln703_39_reg_79361.read().is_01() || !sext_ln728_166_fu_49270_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_39_reg_79361.read()) + sc_bigint<21>(sext_ln728_166_fu_49270_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_167_fu_36588_p2() {
    add_ln1192_167_fu_36588_p2 = (!sext_ln703_40_reg_79366.read().is_01() || !sext_ln728_167_fu_36585_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_40_reg_79366.read()) + sc_bigint<21>(sext_ln728_167_fu_36585_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_168_fu_49413_p2() {
    add_ln1192_168_fu_49413_p2 = (!sext_ln703_41_reg_79376.read().is_01() || !sext_ln728_168_fu_49409_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_41_reg_79376.read()) + sc_bigint<21>(sext_ln728_168_fu_49409_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_169_fu_36738_p2() {
    add_ln1192_169_fu_36738_p2 = (!sext_ln703_42_reg_79381.read().is_01() || !sext_ln728_169_fu_36735_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_42_reg_79381.read()) + sc_bigint<21>(sext_ln728_169_fu_36735_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_170_fu_49552_p2() {
    add_ln1192_170_fu_49552_p2 = (!sext_ln703_43_reg_79391.read().is_01() || !sext_ln728_170_fu_49548_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_43_reg_79391.read()) + sc_bigint<21>(sext_ln728_170_fu_49548_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_171_fu_36888_p2() {
    add_ln1192_171_fu_36888_p2 = (!sext_ln703_44_reg_79396.read().is_01() || !sext_ln728_171_fu_36885_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_44_reg_79396.read()) + sc_bigint<21>(sext_ln728_171_fu_36885_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_172_fu_49691_p2() {
    add_ln1192_172_fu_49691_p2 = (!sext_ln703_45_reg_79406.read().is_01() || !sext_ln728_172_fu_49687_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_45_reg_79406.read()) + sc_bigint<21>(sext_ln728_172_fu_49687_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_173_fu_37038_p2() {
    add_ln1192_173_fu_37038_p2 = (!sext_ln703_46_reg_79411.read().is_01() || !sext_ln728_173_fu_37035_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_46_reg_79411.read()) + sc_bigint<21>(sext_ln728_173_fu_37035_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_174_fu_49830_p2() {
    add_ln1192_174_fu_49830_p2 = (!sext_ln703_47_reg_79421.read().is_01() || !sext_ln728_174_fu_49826_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_47_reg_79421.read()) + sc_bigint<21>(sext_ln728_174_fu_49826_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_175_fu_37188_p2() {
    add_ln1192_175_fu_37188_p2 = (!sext_ln703_48_reg_79426.read().is_01() || !sext_ln728_175_fu_37185_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_48_reg_79426.read()) + sc_bigint<21>(sext_ln728_175_fu_37185_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_176_fu_49969_p2() {
    add_ln1192_176_fu_49969_p2 = (!sext_ln703_49_reg_79436.read().is_01() || !sext_ln728_176_fu_49965_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_49_reg_79436.read()) + sc_bigint<21>(sext_ln728_176_fu_49965_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_177_fu_37338_p2() {
    add_ln1192_177_fu_37338_p2 = (!sext_ln703_50_reg_79441.read().is_01() || !sext_ln728_177_fu_37335_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_50_reg_79441.read()) + sc_bigint<21>(sext_ln728_177_fu_37335_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_178_fu_50108_p2() {
    add_ln1192_178_fu_50108_p2 = (!sext_ln703_51_reg_79451.read().is_01() || !sext_ln728_178_fu_50104_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_51_reg_79451.read()) + sc_bigint<21>(sext_ln728_178_fu_50104_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_179_fu_37488_p2() {
    add_ln1192_179_fu_37488_p2 = (!sext_ln703_52_reg_79456.read().is_01() || !sext_ln728_179_fu_37485_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_52_reg_79456.read()) + sc_bigint<21>(sext_ln728_179_fu_37485_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_180_fu_50247_p2() {
    add_ln1192_180_fu_50247_p2 = (!sext_ln703_53_reg_79466.read().is_01() || !sext_ln728_180_fu_50243_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_53_reg_79466.read()) + sc_bigint<21>(sext_ln728_180_fu_50243_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_181_fu_37638_p2() {
    add_ln1192_181_fu_37638_p2 = (!sext_ln703_54_reg_79471.read().is_01() || !sext_ln728_181_fu_37635_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_54_reg_79471.read()) + sc_bigint<21>(sext_ln728_181_fu_37635_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_182_fu_50386_p2() {
    add_ln1192_182_fu_50386_p2 = (!sext_ln703_55_reg_79481.read().is_01() || !sext_ln728_182_fu_50382_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_55_reg_79481.read()) + sc_bigint<21>(sext_ln728_182_fu_50382_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_183_fu_37788_p2() {
    add_ln1192_183_fu_37788_p2 = (!sext_ln703_56_reg_79486.read().is_01() || !sext_ln728_183_fu_37785_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_56_reg_79486.read()) + sc_bigint<21>(sext_ln728_183_fu_37785_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_184_fu_50525_p2() {
    add_ln1192_184_fu_50525_p2 = (!sext_ln703_57_reg_79496.read().is_01() || !sext_ln728_184_fu_50521_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_57_reg_79496.read()) + sc_bigint<21>(sext_ln728_184_fu_50521_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_185_fu_37938_p2() {
    add_ln1192_185_fu_37938_p2 = (!sext_ln703_58_reg_79501.read().is_01() || !sext_ln728_185_fu_37935_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_58_reg_79501.read()) + sc_bigint<21>(sext_ln728_185_fu_37935_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_186_fu_50664_p2() {
    add_ln1192_186_fu_50664_p2 = (!sext_ln703_59_reg_79511.read().is_01() || !sext_ln728_186_fu_50660_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_59_reg_79511.read()) + sc_bigint<21>(sext_ln728_186_fu_50660_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_187_fu_38088_p2() {
    add_ln1192_187_fu_38088_p2 = (!sext_ln703_60_reg_79516.read().is_01() || !sext_ln728_187_fu_38085_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_60_reg_79516.read()) + sc_bigint<21>(sext_ln728_187_fu_38085_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_188_fu_50803_p2() {
    add_ln1192_188_fu_50803_p2 = (!sext_ln703_61_reg_79526.read().is_01() || !sext_ln728_188_fu_50799_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_61_reg_79526.read()) + sc_bigint<21>(sext_ln728_188_fu_50799_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_189_fu_38238_p2() {
    add_ln1192_189_fu_38238_p2 = (!sext_ln703_62_reg_79531.read().is_01() || !sext_ln728_189_fu_38235_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_62_reg_79531.read()) + sc_bigint<21>(sext_ln728_189_fu_38235_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_190_fu_50942_p2() {
    add_ln1192_190_fu_50942_p2 = (!sext_ln703_63_reg_79541.read().is_01() || !sext_ln728_190_fu_50938_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln703_63_reg_79541.read()) + sc_bigint<21>(sext_ln728_190_fu_50938_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_191_fu_52006_p2() {
    add_ln1192_191_fu_52006_p2 = (!sext_ln703_64_fu_52003_p1.read().is_01() || !sext_ln728_191_fu_51999_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_64_fu_52003_p1.read()) + sc_bigint<22>(sext_ln728_191_fu_51999_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_192_fu_52120_p2() {
    add_ln1192_192_fu_52120_p2 = (!sext_ln703_65_fu_52117_p1.read().is_01() || !sext_ln728_192_fu_52113_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_65_fu_52117_p1.read()) + sc_bigint<22>(sext_ln728_192_fu_52113_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_193_fu_52234_p2() {
    add_ln1192_193_fu_52234_p2 = (!sext_ln703_66_fu_52231_p1.read().is_01() || !sext_ln728_193_fu_52227_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_66_fu_52231_p1.read()) + sc_bigint<22>(sext_ln728_193_fu_52227_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_194_fu_52348_p2() {
    add_ln1192_194_fu_52348_p2 = (!sext_ln703_67_fu_52345_p1.read().is_01() || !sext_ln728_194_fu_52341_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_67_fu_52345_p1.read()) + sc_bigint<22>(sext_ln728_194_fu_52341_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_195_fu_52462_p2() {
    add_ln1192_195_fu_52462_p2 = (!sext_ln703_68_fu_52459_p1.read().is_01() || !sext_ln728_195_fu_52455_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_68_fu_52459_p1.read()) + sc_bigint<22>(sext_ln728_195_fu_52455_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_196_fu_52576_p2() {
    add_ln1192_196_fu_52576_p2 = (!sext_ln703_69_fu_52573_p1.read().is_01() || !sext_ln728_196_fu_52569_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_69_fu_52573_p1.read()) + sc_bigint<22>(sext_ln728_196_fu_52569_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_197_fu_52690_p2() {
    add_ln1192_197_fu_52690_p2 = (!sext_ln703_70_fu_52687_p1.read().is_01() || !sext_ln728_197_fu_52683_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_70_fu_52687_p1.read()) + sc_bigint<22>(sext_ln728_197_fu_52683_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_198_fu_52804_p2() {
    add_ln1192_198_fu_52804_p2 = (!sext_ln703_71_fu_52801_p1.read().is_01() || !sext_ln728_198_fu_52797_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_71_fu_52801_p1.read()) + sc_bigint<22>(sext_ln728_198_fu_52797_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_199_fu_52918_p2() {
    add_ln1192_199_fu_52918_p2 = (!sext_ln703_72_fu_52915_p1.read().is_01() || !sext_ln728_199_fu_52911_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_72_fu_52915_p1.read()) + sc_bigint<22>(sext_ln728_199_fu_52911_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_200_fu_53032_p2() {
    add_ln1192_200_fu_53032_p2 = (!sext_ln703_73_fu_53029_p1.read().is_01() || !sext_ln728_200_fu_53025_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_73_fu_53029_p1.read()) + sc_bigint<22>(sext_ln728_200_fu_53025_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_201_fu_53146_p2() {
    add_ln1192_201_fu_53146_p2 = (!sext_ln703_74_fu_53143_p1.read().is_01() || !sext_ln728_201_fu_53139_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_74_fu_53143_p1.read()) + sc_bigint<22>(sext_ln728_201_fu_53139_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_202_fu_53260_p2() {
    add_ln1192_202_fu_53260_p2 = (!sext_ln703_75_fu_53257_p1.read().is_01() || !sext_ln728_202_fu_53253_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_75_fu_53257_p1.read()) + sc_bigint<22>(sext_ln728_202_fu_53253_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_203_fu_53374_p2() {
    add_ln1192_203_fu_53374_p2 = (!sext_ln703_76_fu_53371_p1.read().is_01() || !sext_ln728_203_fu_53367_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_76_fu_53371_p1.read()) + sc_bigint<22>(sext_ln728_203_fu_53367_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_204_fu_53488_p2() {
    add_ln1192_204_fu_53488_p2 = (!sext_ln703_77_fu_53485_p1.read().is_01() || !sext_ln728_204_fu_53481_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_77_fu_53485_p1.read()) + sc_bigint<22>(sext_ln728_204_fu_53481_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_205_fu_53602_p2() {
    add_ln1192_205_fu_53602_p2 = (!sext_ln703_78_fu_53599_p1.read().is_01() || !sext_ln728_205_fu_53595_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_78_fu_53599_p1.read()) + sc_bigint<22>(sext_ln728_205_fu_53595_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_206_fu_53716_p2() {
    add_ln1192_206_fu_53716_p2 = (!sext_ln703_79_fu_53713_p1.read().is_01() || !sext_ln728_206_fu_53709_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_79_fu_53713_p1.read()) + sc_bigint<22>(sext_ln728_206_fu_53709_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_207_fu_53830_p2() {
    add_ln1192_207_fu_53830_p2 = (!sext_ln703_80_fu_53827_p1.read().is_01() || !sext_ln728_207_fu_53823_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_80_fu_53827_p1.read()) + sc_bigint<22>(sext_ln728_207_fu_53823_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_208_fu_53944_p2() {
    add_ln1192_208_fu_53944_p2 = (!sext_ln703_81_fu_53941_p1.read().is_01() || !sext_ln728_208_fu_53937_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_81_fu_53941_p1.read()) + sc_bigint<22>(sext_ln728_208_fu_53937_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_209_fu_54058_p2() {
    add_ln1192_209_fu_54058_p2 = (!sext_ln703_82_fu_54055_p1.read().is_01() || !sext_ln728_209_fu_54051_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_82_fu_54055_p1.read()) + sc_bigint<22>(sext_ln728_209_fu_54051_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_210_fu_54172_p2() {
    add_ln1192_210_fu_54172_p2 = (!sext_ln703_83_fu_54169_p1.read().is_01() || !sext_ln728_210_fu_54165_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_83_fu_54169_p1.read()) + sc_bigint<22>(sext_ln728_210_fu_54165_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_211_fu_54286_p2() {
    add_ln1192_211_fu_54286_p2 = (!sext_ln703_84_fu_54283_p1.read().is_01() || !sext_ln728_211_fu_54279_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_84_fu_54283_p1.read()) + sc_bigint<22>(sext_ln728_211_fu_54279_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_212_fu_54400_p2() {
    add_ln1192_212_fu_54400_p2 = (!sext_ln703_85_fu_54397_p1.read().is_01() || !sext_ln728_212_fu_54393_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_85_fu_54397_p1.read()) + sc_bigint<22>(sext_ln728_212_fu_54393_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_213_fu_54514_p2() {
    add_ln1192_213_fu_54514_p2 = (!sext_ln703_86_fu_54511_p1.read().is_01() || !sext_ln728_213_fu_54507_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_86_fu_54511_p1.read()) + sc_bigint<22>(sext_ln728_213_fu_54507_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_214_fu_54628_p2() {
    add_ln1192_214_fu_54628_p2 = (!sext_ln703_87_fu_54625_p1.read().is_01() || !sext_ln728_214_fu_54621_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_87_fu_54625_p1.read()) + sc_bigint<22>(sext_ln728_214_fu_54621_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_215_fu_54742_p2() {
    add_ln1192_215_fu_54742_p2 = (!sext_ln703_88_fu_54739_p1.read().is_01() || !sext_ln728_215_fu_54735_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_88_fu_54739_p1.read()) + sc_bigint<22>(sext_ln728_215_fu_54735_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_216_fu_54856_p2() {
    add_ln1192_216_fu_54856_p2 = (!sext_ln703_89_fu_54853_p1.read().is_01() || !sext_ln728_216_fu_54849_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_89_fu_54853_p1.read()) + sc_bigint<22>(sext_ln728_216_fu_54849_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_217_fu_54970_p2() {
    add_ln1192_217_fu_54970_p2 = (!sext_ln703_90_fu_54967_p1.read().is_01() || !sext_ln728_217_fu_54963_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_90_fu_54967_p1.read()) + sc_bigint<22>(sext_ln728_217_fu_54963_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_218_fu_55084_p2() {
    add_ln1192_218_fu_55084_p2 = (!sext_ln703_91_fu_55081_p1.read().is_01() || !sext_ln728_218_fu_55077_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_91_fu_55081_p1.read()) + sc_bigint<22>(sext_ln728_218_fu_55077_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_219_fu_55198_p2() {
    add_ln1192_219_fu_55198_p2 = (!sext_ln703_92_fu_55195_p1.read().is_01() || !sext_ln728_219_fu_55191_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_92_fu_55195_p1.read()) + sc_bigint<22>(sext_ln728_219_fu_55191_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_220_fu_55312_p2() {
    add_ln1192_220_fu_55312_p2 = (!sext_ln703_93_fu_55309_p1.read().is_01() || !sext_ln728_220_fu_55305_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_93_fu_55309_p1.read()) + sc_bigint<22>(sext_ln728_220_fu_55305_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_221_fu_55426_p2() {
    add_ln1192_221_fu_55426_p2 = (!sext_ln703_94_fu_55423_p1.read().is_01() || !sext_ln728_221_fu_55419_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_94_fu_55423_p1.read()) + sc_bigint<22>(sext_ln728_221_fu_55419_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_222_fu_55540_p2() {
    add_ln1192_222_fu_55540_p2 = (!sext_ln703_95_fu_55537_p1.read().is_01() || !sext_ln728_222_fu_55533_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln703_95_fu_55537_p1.read()) + sc_bigint<22>(sext_ln728_222_fu_55533_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_223_fu_58488_p2() {
    add_ln1192_223_fu_58488_p2 = (!mul_ln1118_159_reg_90845.read().is_01() || !sext_ln728_63_reg_79551.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_159_reg_90845.read()) + sc_bigint<32>(sext_ln728_63_reg_79551.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_224_fu_58670_p2() {
    add_ln1192_224_fu_58670_p2 = (!mul_ln1118_160_reg_90851.read().is_01() || !sext_ln728_64_reg_79566.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_160_reg_90851.read()) + sc_bigint<32>(sext_ln728_64_reg_79566.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_225_fu_58852_p2() {
    add_ln1192_225_fu_58852_p2 = (!mul_ln1118_161_reg_90857.read().is_01() || !sext_ln728_65_reg_79581.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_161_reg_90857.read()) + sc_bigint<32>(sext_ln728_65_reg_79581.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_226_fu_59034_p2() {
    add_ln1192_226_fu_59034_p2 = (!mul_ln1118_162_reg_90863.read().is_01() || !sext_ln728_66_reg_79596.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_162_reg_90863.read()) + sc_bigint<32>(sext_ln728_66_reg_79596.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_227_fu_59216_p2() {
    add_ln1192_227_fu_59216_p2 = (!mul_ln1118_163_reg_90869.read().is_01() || !sext_ln728_67_reg_79611.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_163_reg_90869.read()) + sc_bigint<32>(sext_ln728_67_reg_79611.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_228_fu_59398_p2() {
    add_ln1192_228_fu_59398_p2 = (!mul_ln1118_164_reg_90875.read().is_01() || !sext_ln728_68_reg_79626.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_164_reg_90875.read()) + sc_bigint<32>(sext_ln728_68_reg_79626.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_229_fu_59580_p2() {
    add_ln1192_229_fu_59580_p2 = (!mul_ln1118_165_reg_90881.read().is_01() || !sext_ln728_69_reg_79641.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_165_reg_90881.read()) + sc_bigint<32>(sext_ln728_69_reg_79641.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_230_fu_59762_p2() {
    add_ln1192_230_fu_59762_p2 = (!mul_ln1118_166_reg_90887.read().is_01() || !sext_ln728_70_reg_79656.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_166_reg_90887.read()) + sc_bigint<32>(sext_ln728_70_reg_79656.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_231_fu_59944_p2() {
    add_ln1192_231_fu_59944_p2 = (!mul_ln1118_167_reg_90893.read().is_01() || !sext_ln728_71_reg_79671.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_167_reg_90893.read()) + sc_bigint<32>(sext_ln728_71_reg_79671.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_232_fu_60126_p2() {
    add_ln1192_232_fu_60126_p2 = (!mul_ln1118_168_reg_90899.read().is_01() || !sext_ln728_72_reg_79686.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_168_reg_90899.read()) + sc_bigint<32>(sext_ln728_72_reg_79686.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_233_fu_60308_p2() {
    add_ln1192_233_fu_60308_p2 = (!mul_ln1118_169_reg_90905.read().is_01() || !sext_ln728_73_reg_79701.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_169_reg_90905.read()) + sc_bigint<32>(sext_ln728_73_reg_79701.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_234_fu_60490_p2() {
    add_ln1192_234_fu_60490_p2 = (!mul_ln1118_170_reg_90911.read().is_01() || !sext_ln728_74_reg_79716.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_170_reg_90911.read()) + sc_bigint<32>(sext_ln728_74_reg_79716.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_235_fu_60672_p2() {
    add_ln1192_235_fu_60672_p2 = (!mul_ln1118_171_reg_90917.read().is_01() || !sext_ln728_75_reg_79731.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_171_reg_90917.read()) + sc_bigint<32>(sext_ln728_75_reg_79731.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_236_fu_60854_p2() {
    add_ln1192_236_fu_60854_p2 = (!mul_ln1118_172_reg_90923.read().is_01() || !sext_ln728_76_reg_79746.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_172_reg_90923.read()) + sc_bigint<32>(sext_ln728_76_reg_79746.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_237_fu_61036_p2() {
    add_ln1192_237_fu_61036_p2 = (!mul_ln1118_173_reg_90929.read().is_01() || !sext_ln728_77_reg_79761.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_173_reg_90929.read()) + sc_bigint<32>(sext_ln728_77_reg_79761.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_238_fu_61218_p2() {
    add_ln1192_238_fu_61218_p2 = (!mul_ln1118_174_reg_90935.read().is_01() || !sext_ln728_78_reg_79776.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_174_reg_90935.read()) + sc_bigint<32>(sext_ln728_78_reg_79776.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_239_fu_61400_p2() {
    add_ln1192_239_fu_61400_p2 = (!mul_ln1118_175_reg_90941.read().is_01() || !sext_ln728_79_reg_79791.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_175_reg_90941.read()) + sc_bigint<32>(sext_ln728_79_reg_79791.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_240_fu_61582_p2() {
    add_ln1192_240_fu_61582_p2 = (!mul_ln1118_176_reg_90947.read().is_01() || !sext_ln728_80_reg_79806.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_176_reg_90947.read()) + sc_bigint<32>(sext_ln728_80_reg_79806.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_241_fu_61764_p2() {
    add_ln1192_241_fu_61764_p2 = (!mul_ln1118_177_reg_90953.read().is_01() || !sext_ln728_81_reg_79821.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_177_reg_90953.read()) + sc_bigint<32>(sext_ln728_81_reg_79821.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_242_fu_61946_p2() {
    add_ln1192_242_fu_61946_p2 = (!mul_ln1118_178_reg_90959.read().is_01() || !sext_ln728_82_reg_79836.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_178_reg_90959.read()) + sc_bigint<32>(sext_ln728_82_reg_79836.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_243_fu_62128_p2() {
    add_ln1192_243_fu_62128_p2 = (!mul_ln1118_179_reg_90965.read().is_01() || !sext_ln728_83_reg_79851.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_179_reg_90965.read()) + sc_bigint<32>(sext_ln728_83_reg_79851.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_244_fu_62310_p2() {
    add_ln1192_244_fu_62310_p2 = (!mul_ln1118_180_reg_90971.read().is_01() || !sext_ln728_84_reg_79866.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_180_reg_90971.read()) + sc_bigint<32>(sext_ln728_84_reg_79866.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_245_fu_62492_p2() {
    add_ln1192_245_fu_62492_p2 = (!mul_ln1118_181_reg_90977.read().is_01() || !sext_ln728_85_reg_79881.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_181_reg_90977.read()) + sc_bigint<32>(sext_ln728_85_reg_79881.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_246_fu_62674_p2() {
    add_ln1192_246_fu_62674_p2 = (!mul_ln1118_182_reg_90983.read().is_01() || !sext_ln728_86_reg_79896.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_182_reg_90983.read()) + sc_bigint<32>(sext_ln728_86_reg_79896.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_247_fu_62856_p2() {
    add_ln1192_247_fu_62856_p2 = (!mul_ln1118_183_reg_90989.read().is_01() || !sext_ln728_87_reg_79911.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_183_reg_90989.read()) + sc_bigint<32>(sext_ln728_87_reg_79911.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_248_fu_63038_p2() {
    add_ln1192_248_fu_63038_p2 = (!mul_ln1118_184_reg_90995.read().is_01() || !sext_ln728_88_reg_79926.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_184_reg_90995.read()) + sc_bigint<32>(sext_ln728_88_reg_79926.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_249_fu_63220_p2() {
    add_ln1192_249_fu_63220_p2 = (!mul_ln1118_185_reg_91001.read().is_01() || !sext_ln728_89_reg_79941.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_185_reg_91001.read()) + sc_bigint<32>(sext_ln728_89_reg_79941.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_250_fu_63402_p2() {
    add_ln1192_250_fu_63402_p2 = (!mul_ln1118_186_reg_91007.read().is_01() || !sext_ln728_90_reg_79956.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_186_reg_91007.read()) + sc_bigint<32>(sext_ln728_90_reg_79956.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_251_fu_63584_p2() {
    add_ln1192_251_fu_63584_p2 = (!mul_ln1118_187_reg_91013.read().is_01() || !sext_ln728_91_reg_79971.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_187_reg_91013.read()) + sc_bigint<32>(sext_ln728_91_reg_79971.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_252_fu_63766_p2() {
    add_ln1192_252_fu_63766_p2 = (!mul_ln1118_188_reg_91019.read().is_01() || !sext_ln728_92_reg_79986.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_188_reg_91019.read()) + sc_bigint<32>(sext_ln728_92_reg_79986.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_253_fu_63948_p2() {
    add_ln1192_253_fu_63948_p2 = (!mul_ln1118_189_reg_91025.read().is_01() || !sext_ln728_93_reg_80001.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_189_reg_91025.read()) + sc_bigint<32>(sext_ln728_93_reg_80001.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_254_fu_64130_p2() {
    add_ln1192_254_fu_64130_p2 = (!mul_ln1118_190_reg_91031.read().is_01() || !sext_ln728_94_reg_80016.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_190_reg_91031.read()) + sc_bigint<32>(sext_ln728_94_reg_80016.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_255_fu_70022_p2() {
    add_ln1192_255_fu_70022_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_63_fu_70018_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_63_fu_70018_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_256_fu_70094_p2() {
    add_ln1192_256_fu_70094_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_64_fu_70090_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_64_fu_70090_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_257_fu_70166_p2() {
    add_ln1192_257_fu_70166_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_65_fu_70162_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_65_fu_70162_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_258_fu_70238_p2() {
    add_ln1192_258_fu_70238_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_66_fu_70234_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_66_fu_70234_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_259_fu_70310_p2() {
    add_ln1192_259_fu_70310_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_67_fu_70306_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_67_fu_70306_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_260_fu_70382_p2() {
    add_ln1192_260_fu_70382_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_68_fu_70378_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_68_fu_70378_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_261_fu_70454_p2() {
    add_ln1192_261_fu_70454_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_69_fu_70450_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_69_fu_70450_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_262_fu_70526_p2() {
    add_ln1192_262_fu_70526_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_70_fu_70522_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_70_fu_70522_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_263_fu_70598_p2() {
    add_ln1192_263_fu_70598_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_71_fu_70594_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_71_fu_70594_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_264_fu_70670_p2() {
    add_ln1192_264_fu_70670_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_72_fu_70666_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_72_fu_70666_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_265_fu_70742_p2() {
    add_ln1192_265_fu_70742_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_73_fu_70738_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_73_fu_70738_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_266_fu_70814_p2() {
    add_ln1192_266_fu_70814_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_74_fu_70810_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_74_fu_70810_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_267_fu_70886_p2() {
    add_ln1192_267_fu_70886_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_75_fu_70882_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_75_fu_70882_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_268_fu_70958_p2() {
    add_ln1192_268_fu_70958_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_76_fu_70954_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_76_fu_70954_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_269_fu_71030_p2() {
    add_ln1192_269_fu_71030_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_77_fu_71026_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_77_fu_71026_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_270_fu_71102_p2() {
    add_ln1192_270_fu_71102_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_78_fu_71098_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_78_fu_71098_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_271_fu_71174_p2() {
    add_ln1192_271_fu_71174_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_79_fu_71170_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_79_fu_71170_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_272_fu_71246_p2() {
    add_ln1192_272_fu_71246_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_80_fu_71242_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_80_fu_71242_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_273_fu_71318_p2() {
    add_ln1192_273_fu_71318_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_81_fu_71314_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_81_fu_71314_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_274_fu_71390_p2() {
    add_ln1192_274_fu_71390_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_82_fu_71386_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_82_fu_71386_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_275_fu_71462_p2() {
    add_ln1192_275_fu_71462_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_83_fu_71458_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_83_fu_71458_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_276_fu_71534_p2() {
    add_ln1192_276_fu_71534_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_84_fu_71530_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_84_fu_71530_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_277_fu_71606_p2() {
    add_ln1192_277_fu_71606_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_85_fu_71602_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_85_fu_71602_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_278_fu_71678_p2() {
    add_ln1192_278_fu_71678_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_86_fu_71674_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_86_fu_71674_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_279_fu_71750_p2() {
    add_ln1192_279_fu_71750_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_87_fu_71746_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_87_fu_71746_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_280_fu_71822_p2() {
    add_ln1192_280_fu_71822_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_88_fu_71818_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_88_fu_71818_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_281_fu_71894_p2() {
    add_ln1192_281_fu_71894_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_89_fu_71890_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_89_fu_71890_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_282_fu_71966_p2() {
    add_ln1192_282_fu_71966_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_90_fu_71962_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_90_fu_71962_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_283_fu_72038_p2() {
    add_ln1192_283_fu_72038_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_91_fu_72034_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_91_fu_72034_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_284_fu_72110_p2() {
    add_ln1192_284_fu_72110_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_92_fu_72106_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_92_fu_72106_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_285_fu_72182_p2() {
    add_ln1192_285_fu_72182_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_93_fu_72178_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_93_fu_72178_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_286_fu_72254_p2() {
    add_ln1192_286_fu_72254_p2 = (!ap_const_lv17_80.is_01() || !sext_ln1192_94_fu_72250_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_80) + sc_bigint<17>(sext_ln1192_94_fu_72250_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_287_fu_17002_p2() {
    add_ln1192_287_fu_17002_p2 = (!sext_ln1192_fu_16993_p1.read().is_01() || !trunc_ln1192_1_reg_82233.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_fu_16993_p1.read()) + sc_biguint<21>(trunc_ln1192_1_reg_82233.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_288_fu_17247_p2() {
    add_ln1192_288_fu_17247_p2 = (!sext_ln1192_32_fu_17238_p1.read().is_01() || !trunc_ln1192_3_reg_82254.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_32_fu_17238_p1.read()) + sc_biguint<21>(trunc_ln1192_3_reg_82254.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_289_fu_17492_p2() {
    add_ln1192_289_fu_17492_p2 = (!sext_ln1192_33_fu_17483_p1.read().is_01() || !trunc_ln1192_5_reg_82275.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_33_fu_17483_p1.read()) + sc_biguint<21>(trunc_ln1192_5_reg_82275.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_290_fu_17737_p2() {
    add_ln1192_290_fu_17737_p2 = (!sext_ln1192_34_fu_17728_p1.read().is_01() || !trunc_ln1192_7_reg_82296.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_34_fu_17728_p1.read()) + sc_biguint<21>(trunc_ln1192_7_reg_82296.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_291_fu_17982_p2() {
    add_ln1192_291_fu_17982_p2 = (!sext_ln1192_35_fu_17973_p1.read().is_01() || !trunc_ln1192_9_reg_82317.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_35_fu_17973_p1.read()) + sc_biguint<21>(trunc_ln1192_9_reg_82317.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_292_fu_18227_p2() {
    add_ln1192_292_fu_18227_p2 = (!sext_ln1192_36_fu_18218_p1.read().is_01() || !trunc_ln1192_11_reg_82338.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_36_fu_18218_p1.read()) + sc_biguint<21>(trunc_ln1192_11_reg_82338.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_293_fu_18472_p2() {
    add_ln1192_293_fu_18472_p2 = (!sext_ln1192_37_fu_18463_p1.read().is_01() || !trunc_ln1192_13_reg_82359.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_37_fu_18463_p1.read()) + sc_biguint<21>(trunc_ln1192_13_reg_82359.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_294_fu_18717_p2() {
    add_ln1192_294_fu_18717_p2 = (!sext_ln1192_38_fu_18708_p1.read().is_01() || !trunc_ln1192_15_reg_82380.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_38_fu_18708_p1.read()) + sc_biguint<21>(trunc_ln1192_15_reg_82380.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_295_fu_18962_p2() {
    add_ln1192_295_fu_18962_p2 = (!sext_ln1192_39_fu_18953_p1.read().is_01() || !trunc_ln1192_17_reg_82401.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_39_fu_18953_p1.read()) + sc_biguint<21>(trunc_ln1192_17_reg_82401.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_296_fu_19207_p2() {
    add_ln1192_296_fu_19207_p2 = (!sext_ln1192_40_fu_19198_p1.read().is_01() || !trunc_ln1192_19_reg_82422.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_40_fu_19198_p1.read()) + sc_biguint<21>(trunc_ln1192_19_reg_82422.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_297_fu_19452_p2() {
    add_ln1192_297_fu_19452_p2 = (!sext_ln1192_41_fu_19443_p1.read().is_01() || !trunc_ln1192_21_reg_82443.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_41_fu_19443_p1.read()) + sc_biguint<21>(trunc_ln1192_21_reg_82443.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_298_fu_19697_p2() {
    add_ln1192_298_fu_19697_p2 = (!sext_ln1192_42_fu_19688_p1.read().is_01() || !trunc_ln1192_23_reg_82464.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_42_fu_19688_p1.read()) + sc_biguint<21>(trunc_ln1192_23_reg_82464.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_299_fu_19942_p2() {
    add_ln1192_299_fu_19942_p2 = (!sext_ln1192_43_fu_19933_p1.read().is_01() || !trunc_ln1192_25_reg_82485.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_43_fu_19933_p1.read()) + sc_biguint<21>(trunc_ln1192_25_reg_82485.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_300_fu_20187_p2() {
    add_ln1192_300_fu_20187_p2 = (!sext_ln1192_44_fu_20178_p1.read().is_01() || !trunc_ln1192_27_reg_82506.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_44_fu_20178_p1.read()) + sc_biguint<21>(trunc_ln1192_27_reg_82506.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_301_fu_20432_p2() {
    add_ln1192_301_fu_20432_p2 = (!sext_ln1192_45_fu_20423_p1.read().is_01() || !trunc_ln1192_29_reg_82527.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_45_fu_20423_p1.read()) + sc_biguint<21>(trunc_ln1192_29_reg_82527.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_302_fu_20677_p2() {
    add_ln1192_302_fu_20677_p2 = (!sext_ln1192_46_fu_20668_p1.read().is_01() || !trunc_ln1192_31_reg_82548.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_46_fu_20668_p1.read()) + sc_biguint<21>(trunc_ln1192_31_reg_82548.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_303_fu_20922_p2() {
    add_ln1192_303_fu_20922_p2 = (!sext_ln1192_47_fu_20913_p1.read().is_01() || !trunc_ln1192_33_reg_82569.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_47_fu_20913_p1.read()) + sc_biguint<21>(trunc_ln1192_33_reg_82569.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_304_fu_21167_p2() {
    add_ln1192_304_fu_21167_p2 = (!sext_ln1192_48_fu_21158_p1.read().is_01() || !trunc_ln1192_35_reg_82590.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_48_fu_21158_p1.read()) + sc_biguint<21>(trunc_ln1192_35_reg_82590.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_305_fu_21412_p2() {
    add_ln1192_305_fu_21412_p2 = (!sext_ln1192_49_fu_21403_p1.read().is_01() || !trunc_ln1192_37_reg_82611.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_49_fu_21403_p1.read()) + sc_biguint<21>(trunc_ln1192_37_reg_82611.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_306_fu_21657_p2() {
    add_ln1192_306_fu_21657_p2 = (!sext_ln1192_50_fu_21648_p1.read().is_01() || !trunc_ln1192_39_reg_82632.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_50_fu_21648_p1.read()) + sc_biguint<21>(trunc_ln1192_39_reg_82632.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_307_fu_21902_p2() {
    add_ln1192_307_fu_21902_p2 = (!sext_ln1192_51_fu_21893_p1.read().is_01() || !trunc_ln1192_41_reg_82653.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_51_fu_21893_p1.read()) + sc_biguint<21>(trunc_ln1192_41_reg_82653.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_308_fu_22147_p2() {
    add_ln1192_308_fu_22147_p2 = (!sext_ln1192_52_fu_22138_p1.read().is_01() || !trunc_ln1192_43_reg_82674.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_52_fu_22138_p1.read()) + sc_biguint<21>(trunc_ln1192_43_reg_82674.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_309_fu_22392_p2() {
    add_ln1192_309_fu_22392_p2 = (!sext_ln1192_53_fu_22383_p1.read().is_01() || !trunc_ln1192_45_reg_82695.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_53_fu_22383_p1.read()) + sc_biguint<21>(trunc_ln1192_45_reg_82695.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_310_fu_22637_p2() {
    add_ln1192_310_fu_22637_p2 = (!sext_ln1192_54_fu_22628_p1.read().is_01() || !trunc_ln1192_47_reg_82716.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_54_fu_22628_p1.read()) + sc_biguint<21>(trunc_ln1192_47_reg_82716.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_311_fu_22882_p2() {
    add_ln1192_311_fu_22882_p2 = (!sext_ln1192_55_fu_22873_p1.read().is_01() || !trunc_ln1192_49_reg_82737.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_55_fu_22873_p1.read()) + sc_biguint<21>(trunc_ln1192_49_reg_82737.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_312_fu_23127_p2() {
    add_ln1192_312_fu_23127_p2 = (!sext_ln1192_56_fu_23118_p1.read().is_01() || !trunc_ln1192_51_reg_82758.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_56_fu_23118_p1.read()) + sc_biguint<21>(trunc_ln1192_51_reg_82758.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_313_fu_23372_p2() {
    add_ln1192_313_fu_23372_p2 = (!sext_ln1192_57_fu_23363_p1.read().is_01() || !trunc_ln1192_53_reg_82779.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_57_fu_23363_p1.read()) + sc_biguint<21>(trunc_ln1192_53_reg_82779.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_314_fu_23617_p2() {
    add_ln1192_314_fu_23617_p2 = (!sext_ln1192_58_fu_23608_p1.read().is_01() || !trunc_ln1192_55_reg_82800.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_58_fu_23608_p1.read()) + sc_biguint<21>(trunc_ln1192_55_reg_82800.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_315_fu_23862_p2() {
    add_ln1192_315_fu_23862_p2 = (!sext_ln1192_59_fu_23853_p1.read().is_01() || !trunc_ln1192_57_reg_82821.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_59_fu_23853_p1.read()) + sc_biguint<21>(trunc_ln1192_57_reg_82821.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_316_fu_24107_p2() {
    add_ln1192_316_fu_24107_p2 = (!sext_ln1192_60_fu_24098_p1.read().is_01() || !trunc_ln1192_59_reg_82842.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_60_fu_24098_p1.read()) + sc_biguint<21>(trunc_ln1192_59_reg_82842.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_317_fu_24352_p2() {
    add_ln1192_317_fu_24352_p2 = (!sext_ln1192_61_fu_24343_p1.read().is_01() || !trunc_ln1192_61_reg_82863.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_61_fu_24343_p1.read()) + sc_biguint<21>(trunc_ln1192_61_reg_82863.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_318_fu_24597_p2() {
    add_ln1192_318_fu_24597_p2 = (!sext_ln1192_62_fu_24588_p1.read().is_01() || !trunc_ln1192_63_reg_82884.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1192_62_fu_24588_p1.read()) + sc_biguint<21>(trunc_ln1192_63_reg_82884.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_64_fu_17242_p2() {
    add_ln1192_64_fu_17242_p2 = (!trunc_ln1192_2_reg_82249.read().is_01() || !sext_ln728_96_fu_17234_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_2_reg_82249.read()) + sc_bigint<26>(sext_ln728_96_fu_17234_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_65_fu_17487_p2() {
    add_ln1192_65_fu_17487_p2 = (!trunc_ln1192_4_reg_82270.read().is_01() || !sext_ln728_97_fu_17479_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_4_reg_82270.read()) + sc_bigint<26>(sext_ln728_97_fu_17479_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_66_fu_17732_p2() {
    add_ln1192_66_fu_17732_p2 = (!trunc_ln1192_6_reg_82291.read().is_01() || !sext_ln728_98_fu_17724_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_6_reg_82291.read()) + sc_bigint<26>(sext_ln728_98_fu_17724_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_67_fu_17977_p2() {
    add_ln1192_67_fu_17977_p2 = (!trunc_ln1192_8_reg_82312.read().is_01() || !sext_ln728_99_fu_17969_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_8_reg_82312.read()) + sc_bigint<26>(sext_ln728_99_fu_17969_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_68_fu_18222_p2() {
    add_ln1192_68_fu_18222_p2 = (!trunc_ln1192_10_reg_82333.read().is_01() || !sext_ln728_100_fu_18214_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_10_reg_82333.read()) + sc_bigint<26>(sext_ln728_100_fu_18214_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_69_fu_18467_p2() {
    add_ln1192_69_fu_18467_p2 = (!trunc_ln1192_12_reg_82354.read().is_01() || !sext_ln728_101_fu_18459_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_12_reg_82354.read()) + sc_bigint<26>(sext_ln728_101_fu_18459_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_70_fu_18712_p2() {
    add_ln1192_70_fu_18712_p2 = (!trunc_ln1192_14_reg_82375.read().is_01() || !sext_ln728_102_fu_18704_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_14_reg_82375.read()) + sc_bigint<26>(sext_ln728_102_fu_18704_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_71_fu_18957_p2() {
    add_ln1192_71_fu_18957_p2 = (!trunc_ln1192_16_reg_82396.read().is_01() || !sext_ln728_103_fu_18949_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_16_reg_82396.read()) + sc_bigint<26>(sext_ln728_103_fu_18949_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_72_fu_19202_p2() {
    add_ln1192_72_fu_19202_p2 = (!trunc_ln1192_18_reg_82417.read().is_01() || !sext_ln728_104_fu_19194_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_18_reg_82417.read()) + sc_bigint<26>(sext_ln728_104_fu_19194_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_73_fu_19447_p2() {
    add_ln1192_73_fu_19447_p2 = (!trunc_ln1192_20_reg_82438.read().is_01() || !sext_ln728_105_fu_19439_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_20_reg_82438.read()) + sc_bigint<26>(sext_ln728_105_fu_19439_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_74_fu_19692_p2() {
    add_ln1192_74_fu_19692_p2 = (!trunc_ln1192_22_reg_82459.read().is_01() || !sext_ln728_106_fu_19684_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_22_reg_82459.read()) + sc_bigint<26>(sext_ln728_106_fu_19684_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_75_fu_19937_p2() {
    add_ln1192_75_fu_19937_p2 = (!trunc_ln1192_24_reg_82480.read().is_01() || !sext_ln728_107_fu_19929_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_24_reg_82480.read()) + sc_bigint<26>(sext_ln728_107_fu_19929_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_76_fu_20182_p2() {
    add_ln1192_76_fu_20182_p2 = (!trunc_ln1192_26_reg_82501.read().is_01() || !sext_ln728_108_fu_20174_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_26_reg_82501.read()) + sc_bigint<26>(sext_ln728_108_fu_20174_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_77_fu_20427_p2() {
    add_ln1192_77_fu_20427_p2 = (!trunc_ln1192_28_reg_82522.read().is_01() || !sext_ln728_109_fu_20419_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_28_reg_82522.read()) + sc_bigint<26>(sext_ln728_109_fu_20419_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_78_fu_20672_p2() {
    add_ln1192_78_fu_20672_p2 = (!trunc_ln1192_30_reg_82543.read().is_01() || !sext_ln728_110_fu_20664_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_30_reg_82543.read()) + sc_bigint<26>(sext_ln728_110_fu_20664_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_79_fu_20917_p2() {
    add_ln1192_79_fu_20917_p2 = (!trunc_ln1192_32_reg_82564.read().is_01() || !sext_ln728_111_fu_20909_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_32_reg_82564.read()) + sc_bigint<26>(sext_ln728_111_fu_20909_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_80_fu_21162_p2() {
    add_ln1192_80_fu_21162_p2 = (!trunc_ln1192_34_reg_82585.read().is_01() || !sext_ln728_112_fu_21154_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_34_reg_82585.read()) + sc_bigint<26>(sext_ln728_112_fu_21154_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_81_fu_21407_p2() {
    add_ln1192_81_fu_21407_p2 = (!trunc_ln1192_36_reg_82606.read().is_01() || !sext_ln728_113_fu_21399_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_36_reg_82606.read()) + sc_bigint<26>(sext_ln728_113_fu_21399_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_82_fu_21652_p2() {
    add_ln1192_82_fu_21652_p2 = (!trunc_ln1192_38_reg_82627.read().is_01() || !sext_ln728_114_fu_21644_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_38_reg_82627.read()) + sc_bigint<26>(sext_ln728_114_fu_21644_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_83_fu_21897_p2() {
    add_ln1192_83_fu_21897_p2 = (!trunc_ln1192_40_reg_82648.read().is_01() || !sext_ln728_115_fu_21889_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_40_reg_82648.read()) + sc_bigint<26>(sext_ln728_115_fu_21889_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_84_fu_22142_p2() {
    add_ln1192_84_fu_22142_p2 = (!trunc_ln1192_42_reg_82669.read().is_01() || !sext_ln728_116_fu_22134_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_42_reg_82669.read()) + sc_bigint<26>(sext_ln728_116_fu_22134_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_85_fu_22387_p2() {
    add_ln1192_85_fu_22387_p2 = (!trunc_ln1192_44_reg_82690.read().is_01() || !sext_ln728_117_fu_22379_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_44_reg_82690.read()) + sc_bigint<26>(sext_ln728_117_fu_22379_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_86_fu_22632_p2() {
    add_ln1192_86_fu_22632_p2 = (!trunc_ln1192_46_reg_82711.read().is_01() || !sext_ln728_118_fu_22624_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_46_reg_82711.read()) + sc_bigint<26>(sext_ln728_118_fu_22624_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_87_fu_22877_p2() {
    add_ln1192_87_fu_22877_p2 = (!trunc_ln1192_48_reg_82732.read().is_01() || !sext_ln728_119_fu_22869_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_48_reg_82732.read()) + sc_bigint<26>(sext_ln728_119_fu_22869_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_88_fu_23122_p2() {
    add_ln1192_88_fu_23122_p2 = (!trunc_ln1192_50_reg_82753.read().is_01() || !sext_ln728_120_fu_23114_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_50_reg_82753.read()) + sc_bigint<26>(sext_ln728_120_fu_23114_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_89_fu_23367_p2() {
    add_ln1192_89_fu_23367_p2 = (!trunc_ln1192_52_reg_82774.read().is_01() || !sext_ln728_121_fu_23359_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_52_reg_82774.read()) + sc_bigint<26>(sext_ln728_121_fu_23359_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_90_fu_23612_p2() {
    add_ln1192_90_fu_23612_p2 = (!trunc_ln1192_54_reg_82795.read().is_01() || !sext_ln728_122_fu_23604_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_54_reg_82795.read()) + sc_bigint<26>(sext_ln728_122_fu_23604_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_91_fu_23857_p2() {
    add_ln1192_91_fu_23857_p2 = (!trunc_ln1192_56_reg_82816.read().is_01() || !sext_ln728_123_fu_23849_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_56_reg_82816.read()) + sc_bigint<26>(sext_ln728_123_fu_23849_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_92_fu_24102_p2() {
    add_ln1192_92_fu_24102_p2 = (!trunc_ln1192_58_reg_82837.read().is_01() || !sext_ln728_124_fu_24094_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_58_reg_82837.read()) + sc_bigint<26>(sext_ln728_124_fu_24094_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_93_fu_24347_p2() {
    add_ln1192_93_fu_24347_p2 = (!trunc_ln1192_60_reg_82858.read().is_01() || !sext_ln728_125_fu_24339_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_60_reg_82858.read()) + sc_bigint<26>(sext_ln728_125_fu_24339_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_94_fu_24592_p2() {
    add_ln1192_94_fu_24592_p2 = (!trunc_ln1192_62_reg_82879.read().is_01() || !sext_ln728_126_fu_24584_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_62_reg_82879.read()) + sc_bigint<26>(sext_ln728_126_fu_24584_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_95_fu_25713_p2() {
    add_ln1192_95_fu_25713_p2 = (!mul_ln1118_95_reg_83886.read().is_01() || !sext_ln728_reg_78591.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_95_reg_83886.read()) + sc_bigint<32>(sext_ln728_reg_78591.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_96_fu_25865_p2() {
    add_ln1192_96_fu_25865_p2 = (!mul_ln1118_96_reg_83892.read().is_01() || !sext_ln728_32_reg_78606.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_96_reg_83892.read()) + sc_bigint<32>(sext_ln728_32_reg_78606.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_97_fu_26017_p2() {
    add_ln1192_97_fu_26017_p2 = (!mul_ln1118_97_reg_83898.read().is_01() || !sext_ln728_33_reg_78621.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_97_reg_83898.read()) + sc_bigint<32>(sext_ln728_33_reg_78621.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_98_fu_26169_p2() {
    add_ln1192_98_fu_26169_p2 = (!mul_ln1118_98_reg_83904.read().is_01() || !sext_ln728_34_reg_78636.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_98_reg_83904.read()) + sc_bigint<32>(sext_ln728_34_reg_78636.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_99_fu_26321_p2() {
    add_ln1192_99_fu_26321_p2 = (!mul_ln1118_99_reg_83910.read().is_01() || !sext_ln728_35_reg_78651.read().is_01())? sc_lv<32>(): (sc_bigint<32>(mul_ln1118_99_reg_83910.read()) + sc_bigint<32>(sext_ln728_35_reg_78651.read()));
}

void bn_relu_sc_relu::thread_add_ln1192_fu_16997_p2() {
    add_ln1192_fu_16997_p2 = (!trunc_ln1192_reg_82228.read().is_01() || !sext_ln728_95_fu_16989_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(trunc_ln1192_reg_82228.read()) + sc_bigint<26>(sext_ln728_95_fu_16989_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln355_fu_3877_p2() {
    add_ln355_fu_3877_p2 = (!ap_const_lv7_1.is_01() || !trunc_ln355_fu_3873_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_1) + sc_biguint<7>(trunc_ln355_fu_3873_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln358_fu_3822_p2() {
    add_ln358_fu_3822_p2 = (!ap_const_lv2_3.is_01() || !trunc_ln358_2_reg_78330.read().is_01())? sc_lv<2>(): (sc_bigint<2>(ap_const_lv2_3) + sc_biguint<2>(trunc_ln358_2_reg_78330.read()));
}

void bn_relu_sc_relu::thread_add_ln362_1_fu_5838_p2() {
    add_ln362_1_fu_5838_p2 = (!indvar_flatten_reg_3732.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(indvar_flatten_reg_3732.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void bn_relu_sc_relu::thread_add_ln365_1_fu_5813_p2() {
    add_ln365_1_fu_5813_p2 = (!zext_ln365_fu_5809_p1.read().is_01() || !row_tile_offset_reg_78379.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln365_fu_5809_p1.read()) + sc_biguint<32>(row_tile_offset_reg_78379.read()));
}

void bn_relu_sc_relu::thread_add_ln365_2_fu_5972_p2() {
    add_ln365_2_fu_5972_p2 = (!mul_ln365_reg_80133.read().is_01() || !ap_const_lv32_6432.is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln365_reg_80133.read()) + sc_biguint<32>(ap_const_lv32_6432));
}

void bn_relu_sc_relu::thread_add_ln365_3_fu_5887_p2() {
    add_ln365_3_fu_5887_p2 = (!mul_ln354_reg_78404.read().is_01() || !zext_ln362_3_fu_5884_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(mul_ln354_reg_78404.read()) + sc_biguint<12>(zext_ln362_3_fu_5884_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln365_4_fu_5896_p2() {
    add_ln365_4_fu_5896_p2 = (!zext_ln365_1_fu_5892_p1.read().is_01() || !row_tile_offset_reg_78379.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln365_1_fu_5892_p1.read()) + sc_biguint<32>(row_tile_offset_reg_78379.read()));
}

void bn_relu_sc_relu::thread_add_ln365_5_fu_5990_p2() {
    add_ln365_5_fu_5990_p2 = (!ap_const_lv32_6432.is_01() || !mul_ln365_1_reg_80313.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_6432) + sc_biguint<32>(mul_ln365_1_reg_80313.read()));
}

void bn_relu_sc_relu::thread_add_ln365_fu_5804_p2() {
    add_ln365_fu_5804_p2 = (!mul_ln354_reg_78404.read().is_01() || !zext_ln362_1_fu_5800_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(mul_ln354_reg_78404.read()) + sc_biguint<12>(zext_ln362_1_fu_5800_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln366_fu_6010_p2() {
    add_ln366_fu_6010_p2 = (!zext_ln363_fu_6007_p1.read().is_01() || !select_ln371_2_fu_6001_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln363_fu_6007_p1.read()) + sc_biguint<32>(select_ln371_2_fu_6001_p3.read()));
}

void bn_relu_sc_relu::thread_add_ln369_2_fu_5879_p2() {
    add_ln369_2_fu_5879_p2 = (!zext_ln369_fu_5876_p1.read().is_01() || !add_ln369_reg_80026.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln369_fu_5876_p1.read()) + sc_biguint<32>(add_ln369_reg_80026.read()));
}

void bn_relu_sc_relu::thread_add_ln369_3_fu_5852_p2() {
    add_ln369_3_fu_5852_p2 = (!ap_const_lv4_2.is_01() || !ap_phi_mux_row_0_phi_fu_3747_p4.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_2) + sc_biguint<4>(ap_phi_mux_row_0_phi_fu_3747_p4.read()));
}

void bn_relu_sc_relu::thread_add_ln369_4_fu_5904_p2() {
    add_ln369_4_fu_5904_p2 = (!zext_ln369_1_fu_5901_p1.read().is_01() || !add_ln369_reg_80026.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln369_1_fu_5901_p1.read()) + sc_biguint<32>(add_ln369_reg_80026.read()));
}

void bn_relu_sc_relu::thread_add_ln371_2_fu_5930_p2() {
    add_ln371_2_fu_5930_p2 = (!add_ln371_1_reg_80123.read().is_01() || !trunc_ln358_3_reg_78350.read().is_01())? sc_lv<5>(): (sc_biguint<5>(add_ln371_1_reg_80123.read()) + sc_biguint<5>(trunc_ln358_3_reg_78350.read()));
}

void bn_relu_sc_relu::thread_add_ln371_4_fu_51060_p2() {
    add_ln371_4_fu_51060_p2 = (!row_tile_offset_reg_78379.read().is_01() || !zext_ln371_6_fu_51057_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(row_tile_offset_reg_78379.read()) + sc_biguint<32>(zext_ln371_6_fu_51057_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln371_fu_3944_p2() {
    add_ln371_fu_3944_p2 = (!ap_const_lv7_1.is_01() || !trunc_ln353_fu_3899_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_1) + sc_biguint<7>(trunc_ln353_fu_3899_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln382_1_fu_5774_p2() {
    add_ln382_1_fu_5774_p2 = (!shl_ln_fu_3903_p3.read().is_01() || !zext_ln353_fu_3895_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(shl_ln_fu_3903_p3.read()) + sc_biguint<10>(zext_ln353_fu_3895_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln382_2_fu_6051_p2() {
    add_ln382_2_fu_6051_p2 = (!ap_const_lv12_9.is_01() || !out_buf_index_reg_80323.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_9) + sc_biguint<12>(out_buf_index_reg_80323.read()));
}

void bn_relu_sc_relu::thread_add_ln382_fu_6056_p2() {
    add_ln382_fu_6056_p2 = (!zext_ln382_reg_80042.read().is_01() || !add_ln382_2_fu_6051_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln382_reg_80042.read()) + sc_biguint<12>(add_ln382_2_fu_6051_p2.read()));
}

void bn_relu_sc_relu::thread_add_ln414_2_fu_58478_p2() {
    add_ln414_2_fu_58478_p2 = (!mul_ln414_1_reg_90840.read().is_01() || !zext_ln414_3_fu_58475_p1.read().is_01())? sc_lv<40>(): (sc_biguint<40>(mul_ln414_1_reg_90840.read()) + sc_biguint<40>(zext_ln414_3_fu_58475_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln414_3_fu_58483_p2() {
    add_ln414_3_fu_58483_p2 = (!zext_ln362_2_reg_80052.read().is_01() || !add_ln414_2_fu_58478_p2.read().is_01())? sc_lv<40>(): (sc_biguint<40>(zext_ln362_2_reg_80052.read()) + sc_biguint<40>(add_ln414_2_fu_58478_p2.read()));
}

void bn_relu_sc_relu::thread_add_ln414_fu_51069_p2() {
    add_ln414_fu_51069_p2 = (!zext_ln414_1_reg_78421.read().is_01() || !sext_ln414_fu_51065_p1.read().is_01())? sc_lv<33>(): (sc_biguint<33>(zext_ln414_1_reg_78421.read()) + sc_bigint<33>(sext_ln414_fu_51065_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_223_fu_58534_p2() {
    add_ln415_223_fu_58534_p2 = (!trunc_ln708_285_fu_58500_p4.read().is_01() || !zext_ln415_287_fu_58530_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_285_fu_58500_p4.read()) + sc_biguint<16>(zext_ln415_287_fu_58530_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_224_fu_58716_p2() {
    add_ln415_224_fu_58716_p2 = (!trunc_ln708_286_fu_58682_p4.read().is_01() || !zext_ln415_288_fu_58712_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_286_fu_58682_p4.read()) + sc_biguint<16>(zext_ln415_288_fu_58712_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_225_fu_58898_p2() {
    add_ln415_225_fu_58898_p2 = (!trunc_ln708_287_fu_58864_p4.read().is_01() || !zext_ln415_289_fu_58894_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_287_fu_58864_p4.read()) + sc_biguint<16>(zext_ln415_289_fu_58894_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_226_fu_59080_p2() {
    add_ln415_226_fu_59080_p2 = (!trunc_ln708_288_fu_59046_p4.read().is_01() || !zext_ln415_290_fu_59076_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_288_fu_59046_p4.read()) + sc_biguint<16>(zext_ln415_290_fu_59076_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_227_fu_59262_p2() {
    add_ln415_227_fu_59262_p2 = (!trunc_ln708_289_fu_59228_p4.read().is_01() || !zext_ln415_291_fu_59258_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_289_fu_59228_p4.read()) + sc_biguint<16>(zext_ln415_291_fu_59258_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_228_fu_59444_p2() {
    add_ln415_228_fu_59444_p2 = (!trunc_ln708_290_fu_59410_p4.read().is_01() || !zext_ln415_292_fu_59440_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_290_fu_59410_p4.read()) + sc_biguint<16>(zext_ln415_292_fu_59440_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_229_fu_59626_p2() {
    add_ln415_229_fu_59626_p2 = (!trunc_ln708_291_fu_59592_p4.read().is_01() || !zext_ln415_293_fu_59622_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_291_fu_59592_p4.read()) + sc_biguint<16>(zext_ln415_293_fu_59622_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_230_fu_59808_p2() {
    add_ln415_230_fu_59808_p2 = (!trunc_ln708_292_fu_59774_p4.read().is_01() || !zext_ln415_294_fu_59804_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_292_fu_59774_p4.read()) + sc_biguint<16>(zext_ln415_294_fu_59804_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_231_fu_59990_p2() {
    add_ln415_231_fu_59990_p2 = (!trunc_ln708_293_fu_59956_p4.read().is_01() || !zext_ln415_295_fu_59986_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_293_fu_59956_p4.read()) + sc_biguint<16>(zext_ln415_295_fu_59986_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_232_fu_60172_p2() {
    add_ln415_232_fu_60172_p2 = (!trunc_ln708_294_fu_60138_p4.read().is_01() || !zext_ln415_296_fu_60168_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_294_fu_60138_p4.read()) + sc_biguint<16>(zext_ln415_296_fu_60168_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_233_fu_60354_p2() {
    add_ln415_233_fu_60354_p2 = (!trunc_ln708_295_fu_60320_p4.read().is_01() || !zext_ln415_297_fu_60350_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_295_fu_60320_p4.read()) + sc_biguint<16>(zext_ln415_297_fu_60350_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_234_fu_60536_p2() {
    add_ln415_234_fu_60536_p2 = (!trunc_ln708_296_fu_60502_p4.read().is_01() || !zext_ln415_298_fu_60532_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_296_fu_60502_p4.read()) + sc_biguint<16>(zext_ln415_298_fu_60532_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_235_fu_60718_p2() {
    add_ln415_235_fu_60718_p2 = (!trunc_ln708_297_fu_60684_p4.read().is_01() || !zext_ln415_299_fu_60714_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_297_fu_60684_p4.read()) + sc_biguint<16>(zext_ln415_299_fu_60714_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_236_fu_60900_p2() {
    add_ln415_236_fu_60900_p2 = (!trunc_ln708_298_fu_60866_p4.read().is_01() || !zext_ln415_300_fu_60896_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_298_fu_60866_p4.read()) + sc_biguint<16>(zext_ln415_300_fu_60896_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_237_fu_61082_p2() {
    add_ln415_237_fu_61082_p2 = (!trunc_ln708_299_fu_61048_p4.read().is_01() || !zext_ln415_301_fu_61078_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_299_fu_61048_p4.read()) + sc_biguint<16>(zext_ln415_301_fu_61078_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_238_fu_61264_p2() {
    add_ln415_238_fu_61264_p2 = (!trunc_ln708_300_fu_61230_p4.read().is_01() || !zext_ln415_302_fu_61260_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_300_fu_61230_p4.read()) + sc_biguint<16>(zext_ln415_302_fu_61260_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_239_fu_61446_p2() {
    add_ln415_239_fu_61446_p2 = (!trunc_ln708_301_fu_61412_p4.read().is_01() || !zext_ln415_303_fu_61442_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_301_fu_61412_p4.read()) + sc_biguint<16>(zext_ln415_303_fu_61442_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_240_fu_61628_p2() {
    add_ln415_240_fu_61628_p2 = (!trunc_ln708_302_fu_61594_p4.read().is_01() || !zext_ln415_304_fu_61624_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_302_fu_61594_p4.read()) + sc_biguint<16>(zext_ln415_304_fu_61624_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_241_fu_61810_p2() {
    add_ln415_241_fu_61810_p2 = (!trunc_ln708_303_fu_61776_p4.read().is_01() || !zext_ln415_305_fu_61806_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_303_fu_61776_p4.read()) + sc_biguint<16>(zext_ln415_305_fu_61806_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_242_fu_61992_p2() {
    add_ln415_242_fu_61992_p2 = (!trunc_ln708_304_fu_61958_p4.read().is_01() || !zext_ln415_306_fu_61988_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_304_fu_61958_p4.read()) + sc_biguint<16>(zext_ln415_306_fu_61988_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_243_fu_62174_p2() {
    add_ln415_243_fu_62174_p2 = (!trunc_ln708_305_fu_62140_p4.read().is_01() || !zext_ln415_307_fu_62170_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_305_fu_62140_p4.read()) + sc_biguint<16>(zext_ln415_307_fu_62170_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_244_fu_62356_p2() {
    add_ln415_244_fu_62356_p2 = (!trunc_ln708_306_fu_62322_p4.read().is_01() || !zext_ln415_308_fu_62352_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_306_fu_62322_p4.read()) + sc_biguint<16>(zext_ln415_308_fu_62352_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_245_fu_62538_p2() {
    add_ln415_245_fu_62538_p2 = (!trunc_ln708_307_fu_62504_p4.read().is_01() || !zext_ln415_309_fu_62534_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_307_fu_62504_p4.read()) + sc_biguint<16>(zext_ln415_309_fu_62534_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_246_fu_62720_p2() {
    add_ln415_246_fu_62720_p2 = (!trunc_ln708_308_fu_62686_p4.read().is_01() || !zext_ln415_310_fu_62716_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_308_fu_62686_p4.read()) + sc_biguint<16>(zext_ln415_310_fu_62716_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_247_fu_62902_p2() {
    add_ln415_247_fu_62902_p2 = (!trunc_ln708_309_fu_62868_p4.read().is_01() || !zext_ln415_311_fu_62898_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_309_fu_62868_p4.read()) + sc_biguint<16>(zext_ln415_311_fu_62898_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_248_fu_63084_p2() {
    add_ln415_248_fu_63084_p2 = (!trunc_ln708_310_fu_63050_p4.read().is_01() || !zext_ln415_312_fu_63080_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_310_fu_63050_p4.read()) + sc_biguint<16>(zext_ln415_312_fu_63080_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_249_fu_63266_p2() {
    add_ln415_249_fu_63266_p2 = (!trunc_ln708_311_fu_63232_p4.read().is_01() || !zext_ln415_313_fu_63262_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_311_fu_63232_p4.read()) + sc_biguint<16>(zext_ln415_313_fu_63262_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_250_fu_63448_p2() {
    add_ln415_250_fu_63448_p2 = (!trunc_ln708_312_fu_63414_p4.read().is_01() || !zext_ln415_314_fu_63444_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_312_fu_63414_p4.read()) + sc_biguint<16>(zext_ln415_314_fu_63444_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_251_fu_63630_p2() {
    add_ln415_251_fu_63630_p2 = (!trunc_ln708_313_fu_63596_p4.read().is_01() || !zext_ln415_315_fu_63626_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_313_fu_63596_p4.read()) + sc_biguint<16>(zext_ln415_315_fu_63626_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_252_fu_63812_p2() {
    add_ln415_252_fu_63812_p2 = (!trunc_ln708_314_fu_63778_p4.read().is_01() || !zext_ln415_316_fu_63808_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_314_fu_63778_p4.read()) + sc_biguint<16>(zext_ln415_316_fu_63808_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_253_fu_63994_p2() {
    add_ln415_253_fu_63994_p2 = (!trunc_ln708_315_fu_63960_p4.read().is_01() || !zext_ln415_317_fu_63990_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_315_fu_63960_p4.read()) + sc_biguint<16>(zext_ln415_317_fu_63990_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_254_fu_64176_p2() {
    add_ln415_254_fu_64176_p2 = (!trunc_ln708_316_fu_64142_p4.read().is_01() || !zext_ln415_318_fu_64172_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_316_fu_64142_p4.read()) + sc_biguint<16>(zext_ln415_318_fu_64172_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_255_fu_72374_p2() {
    add_ln415_255_fu_72374_p2 = (!zext_ln415_319_fu_72371_p1.read().is_01() || !trunc_ln708_317_reg_92756.read().is_01())? sc_lv<2>(): (sc_biguint<2>(zext_ln415_319_fu_72371_p1.read()) + sc_biguint<2>(trunc_ln708_317_reg_92756.read()));
}

void bn_relu_sc_relu::thread_add_ln415_256_fu_72514_p2() {
    add_ln415_256_fu_72514_p2 = (!trunc_ln708_318_reg_92784.read().is_01() || !zext_ln415_320_fu_72511_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_318_reg_92784.read()) + sc_biguint<2>(zext_ln415_320_fu_72511_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_257_fu_72654_p2() {
    add_ln415_257_fu_72654_p2 = (!trunc_ln708_319_reg_92812.read().is_01() || !zext_ln415_321_fu_72651_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_319_reg_92812.read()) + sc_biguint<2>(zext_ln415_321_fu_72651_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_258_fu_72794_p2() {
    add_ln415_258_fu_72794_p2 = (!trunc_ln708_320_reg_92840.read().is_01() || !zext_ln415_322_fu_72791_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_320_reg_92840.read()) + sc_biguint<2>(zext_ln415_322_fu_72791_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_259_fu_72934_p2() {
    add_ln415_259_fu_72934_p2 = (!trunc_ln708_321_reg_92868.read().is_01() || !zext_ln415_323_fu_72931_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_321_reg_92868.read()) + sc_biguint<2>(zext_ln415_323_fu_72931_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_260_fu_73074_p2() {
    add_ln415_260_fu_73074_p2 = (!trunc_ln708_322_reg_92896.read().is_01() || !zext_ln415_324_fu_73071_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_322_reg_92896.read()) + sc_biguint<2>(zext_ln415_324_fu_73071_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_261_fu_73214_p2() {
    add_ln415_261_fu_73214_p2 = (!trunc_ln708_323_reg_92924.read().is_01() || !zext_ln415_325_fu_73211_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_323_reg_92924.read()) + sc_biguint<2>(zext_ln415_325_fu_73211_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_262_fu_73354_p2() {
    add_ln415_262_fu_73354_p2 = (!trunc_ln708_324_reg_92952.read().is_01() || !zext_ln415_326_fu_73351_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_324_reg_92952.read()) + sc_biguint<2>(zext_ln415_326_fu_73351_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_263_fu_73494_p2() {
    add_ln415_263_fu_73494_p2 = (!trunc_ln708_325_reg_92980.read().is_01() || !zext_ln415_327_fu_73491_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_325_reg_92980.read()) + sc_biguint<2>(zext_ln415_327_fu_73491_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_264_fu_73634_p2() {
    add_ln415_264_fu_73634_p2 = (!trunc_ln708_326_reg_93008.read().is_01() || !zext_ln415_328_fu_73631_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_326_reg_93008.read()) + sc_biguint<2>(zext_ln415_328_fu_73631_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_265_fu_73774_p2() {
    add_ln415_265_fu_73774_p2 = (!trunc_ln708_327_reg_93036.read().is_01() || !zext_ln415_329_fu_73771_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_327_reg_93036.read()) + sc_biguint<2>(zext_ln415_329_fu_73771_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_266_fu_73914_p2() {
    add_ln415_266_fu_73914_p2 = (!trunc_ln708_328_reg_93064.read().is_01() || !zext_ln415_330_fu_73911_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_328_reg_93064.read()) + sc_biguint<2>(zext_ln415_330_fu_73911_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_267_fu_74054_p2() {
    add_ln415_267_fu_74054_p2 = (!trunc_ln708_329_reg_93092.read().is_01() || !zext_ln415_331_fu_74051_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_329_reg_93092.read()) + sc_biguint<2>(zext_ln415_331_fu_74051_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_268_fu_74194_p2() {
    add_ln415_268_fu_74194_p2 = (!trunc_ln708_330_reg_93120.read().is_01() || !zext_ln415_332_fu_74191_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_330_reg_93120.read()) + sc_biguint<2>(zext_ln415_332_fu_74191_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_269_fu_74334_p2() {
    add_ln415_269_fu_74334_p2 = (!trunc_ln708_331_reg_93148.read().is_01() || !zext_ln415_333_fu_74331_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_331_reg_93148.read()) + sc_biguint<2>(zext_ln415_333_fu_74331_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_270_fu_74474_p2() {
    add_ln415_270_fu_74474_p2 = (!trunc_ln708_332_reg_93176.read().is_01() || !zext_ln415_334_fu_74471_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_332_reg_93176.read()) + sc_biguint<2>(zext_ln415_334_fu_74471_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_271_fu_74614_p2() {
    add_ln415_271_fu_74614_p2 = (!trunc_ln708_333_reg_93204.read().is_01() || !zext_ln415_335_fu_74611_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_333_reg_93204.read()) + sc_biguint<2>(zext_ln415_335_fu_74611_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_272_fu_74754_p2() {
    add_ln415_272_fu_74754_p2 = (!trunc_ln708_334_reg_93232.read().is_01() || !zext_ln415_336_fu_74751_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_334_reg_93232.read()) + sc_biguint<2>(zext_ln415_336_fu_74751_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_273_fu_74894_p2() {
    add_ln415_273_fu_74894_p2 = (!trunc_ln708_335_reg_93260.read().is_01() || !zext_ln415_337_fu_74891_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_335_reg_93260.read()) + sc_biguint<2>(zext_ln415_337_fu_74891_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_274_fu_75034_p2() {
    add_ln415_274_fu_75034_p2 = (!trunc_ln708_336_reg_93288.read().is_01() || !zext_ln415_338_fu_75031_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_336_reg_93288.read()) + sc_biguint<2>(zext_ln415_338_fu_75031_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_275_fu_75174_p2() {
    add_ln415_275_fu_75174_p2 = (!trunc_ln708_337_reg_93316.read().is_01() || !zext_ln415_339_fu_75171_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_337_reg_93316.read()) + sc_biguint<2>(zext_ln415_339_fu_75171_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_276_fu_75314_p2() {
    add_ln415_276_fu_75314_p2 = (!trunc_ln708_338_reg_93344.read().is_01() || !zext_ln415_340_fu_75311_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_338_reg_93344.read()) + sc_biguint<2>(zext_ln415_340_fu_75311_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_277_fu_75454_p2() {
    add_ln415_277_fu_75454_p2 = (!trunc_ln708_339_reg_93372.read().is_01() || !zext_ln415_341_fu_75451_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_339_reg_93372.read()) + sc_biguint<2>(zext_ln415_341_fu_75451_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_278_fu_75594_p2() {
    add_ln415_278_fu_75594_p2 = (!trunc_ln708_340_reg_93400.read().is_01() || !zext_ln415_342_fu_75591_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_340_reg_93400.read()) + sc_biguint<2>(zext_ln415_342_fu_75591_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_279_fu_75734_p2() {
    add_ln415_279_fu_75734_p2 = (!trunc_ln708_341_reg_93428.read().is_01() || !zext_ln415_343_fu_75731_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_341_reg_93428.read()) + sc_biguint<2>(zext_ln415_343_fu_75731_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_280_fu_75874_p2() {
    add_ln415_280_fu_75874_p2 = (!trunc_ln708_342_reg_93456.read().is_01() || !zext_ln415_344_fu_75871_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_342_reg_93456.read()) + sc_biguint<2>(zext_ln415_344_fu_75871_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_281_fu_76014_p2() {
    add_ln415_281_fu_76014_p2 = (!trunc_ln708_343_reg_93484.read().is_01() || !zext_ln415_345_fu_76011_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_343_reg_93484.read()) + sc_biguint<2>(zext_ln415_345_fu_76011_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_282_fu_76154_p2() {
    add_ln415_282_fu_76154_p2 = (!trunc_ln708_344_reg_93512.read().is_01() || !zext_ln415_346_fu_76151_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_344_reg_93512.read()) + sc_biguint<2>(zext_ln415_346_fu_76151_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_283_fu_76294_p2() {
    add_ln415_283_fu_76294_p2 = (!trunc_ln708_345_reg_93540.read().is_01() || !zext_ln415_347_fu_76291_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_345_reg_93540.read()) + sc_biguint<2>(zext_ln415_347_fu_76291_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_284_fu_76434_p2() {
    add_ln415_284_fu_76434_p2 = (!trunc_ln708_346_reg_93568.read().is_01() || !zext_ln415_348_fu_76431_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_346_reg_93568.read()) + sc_biguint<2>(zext_ln415_348_fu_76431_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_285_fu_76574_p2() {
    add_ln415_285_fu_76574_p2 = (!trunc_ln708_347_reg_93596.read().is_01() || !zext_ln415_349_fu_76571_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_347_reg_93596.read()) + sc_biguint<2>(zext_ln415_349_fu_76571_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_286_fu_76714_p2() {
    add_ln415_286_fu_76714_p2 = (!trunc_ln708_348_reg_93624.read().is_01() || !zext_ln415_350_fu_76711_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(trunc_ln708_348_reg_93624.read()) + sc_biguint<2>(zext_ln415_350_fu_76711_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_64_fu_25911_p2() {
    add_ln415_64_fu_25911_p2 = (!trunc_ln708_126_fu_25877_p4.read().is_01() || !zext_ln415_128_fu_25907_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_126_fu_25877_p4.read()) + sc_biguint<16>(zext_ln415_128_fu_25907_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_65_fu_26063_p2() {
    add_ln415_65_fu_26063_p2 = (!trunc_ln708_127_fu_26029_p4.read().is_01() || !zext_ln415_129_fu_26059_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_127_fu_26029_p4.read()) + sc_biguint<16>(zext_ln415_129_fu_26059_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_66_fu_26215_p2() {
    add_ln415_66_fu_26215_p2 = (!trunc_ln708_128_fu_26181_p4.read().is_01() || !zext_ln415_130_fu_26211_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_128_fu_26181_p4.read()) + sc_biguint<16>(zext_ln415_130_fu_26211_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_67_fu_26367_p2() {
    add_ln415_67_fu_26367_p2 = (!trunc_ln708_129_fu_26333_p4.read().is_01() || !zext_ln415_131_fu_26363_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_129_fu_26333_p4.read()) + sc_biguint<16>(zext_ln415_131_fu_26363_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_68_fu_26519_p2() {
    add_ln415_68_fu_26519_p2 = (!trunc_ln708_130_fu_26485_p4.read().is_01() || !zext_ln415_132_fu_26515_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_130_fu_26485_p4.read()) + sc_biguint<16>(zext_ln415_132_fu_26515_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_69_fu_26671_p2() {
    add_ln415_69_fu_26671_p2 = (!trunc_ln708_131_fu_26637_p4.read().is_01() || !zext_ln415_133_fu_26667_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_131_fu_26637_p4.read()) + sc_biguint<16>(zext_ln415_133_fu_26667_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_70_fu_26823_p2() {
    add_ln415_70_fu_26823_p2 = (!trunc_ln708_132_fu_26789_p4.read().is_01() || !zext_ln415_134_fu_26819_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_132_fu_26789_p4.read()) + sc_biguint<16>(zext_ln415_134_fu_26819_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_71_fu_26975_p2() {
    add_ln415_71_fu_26975_p2 = (!trunc_ln708_133_fu_26941_p4.read().is_01() || !zext_ln415_135_fu_26971_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_133_fu_26941_p4.read()) + sc_biguint<16>(zext_ln415_135_fu_26971_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_72_fu_27127_p2() {
    add_ln415_72_fu_27127_p2 = (!trunc_ln708_134_fu_27093_p4.read().is_01() || !zext_ln415_136_fu_27123_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_134_fu_27093_p4.read()) + sc_biguint<16>(zext_ln415_136_fu_27123_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_73_fu_27279_p2() {
    add_ln415_73_fu_27279_p2 = (!trunc_ln708_135_fu_27245_p4.read().is_01() || !zext_ln415_137_fu_27275_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_135_fu_27245_p4.read()) + sc_biguint<16>(zext_ln415_137_fu_27275_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_74_fu_27431_p2() {
    add_ln415_74_fu_27431_p2 = (!trunc_ln708_136_fu_27397_p4.read().is_01() || !zext_ln415_138_fu_27427_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_136_fu_27397_p4.read()) + sc_biguint<16>(zext_ln415_138_fu_27427_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_75_fu_27583_p2() {
    add_ln415_75_fu_27583_p2 = (!trunc_ln708_137_fu_27549_p4.read().is_01() || !zext_ln415_139_fu_27579_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_137_fu_27549_p4.read()) + sc_biguint<16>(zext_ln415_139_fu_27579_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_76_fu_27735_p2() {
    add_ln415_76_fu_27735_p2 = (!trunc_ln708_138_fu_27701_p4.read().is_01() || !zext_ln415_140_fu_27731_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_138_fu_27701_p4.read()) + sc_biguint<16>(zext_ln415_140_fu_27731_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_77_fu_27887_p2() {
    add_ln415_77_fu_27887_p2 = (!trunc_ln708_139_fu_27853_p4.read().is_01() || !zext_ln415_141_fu_27883_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_139_fu_27853_p4.read()) + sc_biguint<16>(zext_ln415_141_fu_27883_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_78_fu_28039_p2() {
    add_ln415_78_fu_28039_p2 = (!trunc_ln708_140_fu_28005_p4.read().is_01() || !zext_ln415_142_fu_28035_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_140_fu_28005_p4.read()) + sc_biguint<16>(zext_ln415_142_fu_28035_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_79_fu_28191_p2() {
    add_ln415_79_fu_28191_p2 = (!trunc_ln708_141_fu_28157_p4.read().is_01() || !zext_ln415_143_fu_28187_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_141_fu_28157_p4.read()) + sc_biguint<16>(zext_ln415_143_fu_28187_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_80_fu_28343_p2() {
    add_ln415_80_fu_28343_p2 = (!trunc_ln708_142_fu_28309_p4.read().is_01() || !zext_ln415_144_fu_28339_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_142_fu_28309_p4.read()) + sc_biguint<16>(zext_ln415_144_fu_28339_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_81_fu_28495_p2() {
    add_ln415_81_fu_28495_p2 = (!trunc_ln708_143_fu_28461_p4.read().is_01() || !zext_ln415_145_fu_28491_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_143_fu_28461_p4.read()) + sc_biguint<16>(zext_ln415_145_fu_28491_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_82_fu_28647_p2() {
    add_ln415_82_fu_28647_p2 = (!trunc_ln708_144_fu_28613_p4.read().is_01() || !zext_ln415_146_fu_28643_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_144_fu_28613_p4.read()) + sc_biguint<16>(zext_ln415_146_fu_28643_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_83_fu_28799_p2() {
    add_ln415_83_fu_28799_p2 = (!trunc_ln708_145_fu_28765_p4.read().is_01() || !zext_ln415_147_fu_28795_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_145_fu_28765_p4.read()) + sc_biguint<16>(zext_ln415_147_fu_28795_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_84_fu_28951_p2() {
    add_ln415_84_fu_28951_p2 = (!trunc_ln708_146_fu_28917_p4.read().is_01() || !zext_ln415_148_fu_28947_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_146_fu_28917_p4.read()) + sc_biguint<16>(zext_ln415_148_fu_28947_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_85_fu_29103_p2() {
    add_ln415_85_fu_29103_p2 = (!trunc_ln708_147_fu_29069_p4.read().is_01() || !zext_ln415_149_fu_29099_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_147_fu_29069_p4.read()) + sc_biguint<16>(zext_ln415_149_fu_29099_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_86_fu_29255_p2() {
    add_ln415_86_fu_29255_p2 = (!trunc_ln708_148_fu_29221_p4.read().is_01() || !zext_ln415_150_fu_29251_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_148_fu_29221_p4.read()) + sc_biguint<16>(zext_ln415_150_fu_29251_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_87_fu_29407_p2() {
    add_ln415_87_fu_29407_p2 = (!trunc_ln708_149_fu_29373_p4.read().is_01() || !zext_ln415_151_fu_29403_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_149_fu_29373_p4.read()) + sc_biguint<16>(zext_ln415_151_fu_29403_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_88_fu_29559_p2() {
    add_ln415_88_fu_29559_p2 = (!trunc_ln708_150_fu_29525_p4.read().is_01() || !zext_ln415_152_fu_29555_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_150_fu_29525_p4.read()) + sc_biguint<16>(zext_ln415_152_fu_29555_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_89_fu_29711_p2() {
    add_ln415_89_fu_29711_p2 = (!trunc_ln708_151_fu_29677_p4.read().is_01() || !zext_ln415_153_fu_29707_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_151_fu_29677_p4.read()) + sc_biguint<16>(zext_ln415_153_fu_29707_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_90_fu_29863_p2() {
    add_ln415_90_fu_29863_p2 = (!trunc_ln708_152_fu_29829_p4.read().is_01() || !zext_ln415_154_fu_29859_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_152_fu_29829_p4.read()) + sc_biguint<16>(zext_ln415_154_fu_29859_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_91_fu_30015_p2() {
    add_ln415_91_fu_30015_p2 = (!trunc_ln708_153_fu_29981_p4.read().is_01() || !zext_ln415_155_fu_30011_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_153_fu_29981_p4.read()) + sc_biguint<16>(zext_ln415_155_fu_30011_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_92_fu_30167_p2() {
    add_ln415_92_fu_30167_p2 = (!trunc_ln708_154_fu_30133_p4.read().is_01() || !zext_ln415_156_fu_30163_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_154_fu_30133_p4.read()) + sc_biguint<16>(zext_ln415_156_fu_30163_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_93_fu_30319_p2() {
    add_ln415_93_fu_30319_p2 = (!trunc_ln708_155_fu_30285_p4.read().is_01() || !zext_ln415_157_fu_30315_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_155_fu_30285_p4.read()) + sc_biguint<16>(zext_ln415_157_fu_30315_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_94_fu_30471_p2() {
    add_ln415_94_fu_30471_p2 = (!trunc_ln708_156_fu_30437_p4.read().is_01() || !zext_ln415_158_fu_30467_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_156_fu_30437_p4.read()) + sc_biguint<16>(zext_ln415_158_fu_30467_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln415_fu_25759_p2() {
    add_ln415_fu_25759_p2 = (!trunc_ln708_125_fu_25725_p4.read().is_01() || !zext_ln415_127_fu_25755_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_125_fu_25725_p4.read()) + sc_biguint<16>(zext_ln415_127_fu_25755_p1.read()));
}

void bn_relu_sc_relu::thread_add_ln713_32_fu_25887_p2() {
    add_ln713_32_fu_25887_p2 = (!zext_ln1192_32_reg_78611.read().is_01() || !mul_ln1118_96_reg_83892.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_32_reg_78611.read()) + sc_bigint<32>(mul_ln1118_96_reg_83892.read()));
}

void bn_relu_sc_relu::thread_add_ln713_33_fu_26039_p2() {
    add_ln713_33_fu_26039_p2 = (!zext_ln1192_33_reg_78626.read().is_01() || !mul_ln1118_97_reg_83898.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_33_reg_78626.read()) + sc_bigint<32>(mul_ln1118_97_reg_83898.read()));
}

void bn_relu_sc_relu::thread_add_ln713_34_fu_26191_p2() {
    add_ln713_34_fu_26191_p2 = (!zext_ln1192_34_reg_78641.read().is_01() || !mul_ln1118_98_reg_83904.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_34_reg_78641.read()) + sc_bigint<32>(mul_ln1118_98_reg_83904.read()));
}

void bn_relu_sc_relu::thread_add_ln713_35_fu_26343_p2() {
    add_ln713_35_fu_26343_p2 = (!zext_ln1192_35_reg_78656.read().is_01() || !mul_ln1118_99_reg_83910.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_35_reg_78656.read()) + sc_bigint<32>(mul_ln1118_99_reg_83910.read()));
}

void bn_relu_sc_relu::thread_add_ln713_36_fu_26495_p2() {
    add_ln713_36_fu_26495_p2 = (!zext_ln1192_36_reg_78671.read().is_01() || !mul_ln1118_100_reg_83916.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_36_reg_78671.read()) + sc_bigint<32>(mul_ln1118_100_reg_83916.read()));
}

void bn_relu_sc_relu::thread_add_ln713_37_fu_26647_p2() {
    add_ln713_37_fu_26647_p2 = (!zext_ln1192_37_reg_78686.read().is_01() || !mul_ln1118_101_reg_83922.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_37_reg_78686.read()) + sc_bigint<32>(mul_ln1118_101_reg_83922.read()));
}

void bn_relu_sc_relu::thread_add_ln713_38_fu_26799_p2() {
    add_ln713_38_fu_26799_p2 = (!zext_ln1192_38_reg_78701.read().is_01() || !mul_ln1118_102_reg_83928.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_38_reg_78701.read()) + sc_bigint<32>(mul_ln1118_102_reg_83928.read()));
}

void bn_relu_sc_relu::thread_add_ln713_39_fu_26951_p2() {
    add_ln713_39_fu_26951_p2 = (!zext_ln1192_39_reg_78716.read().is_01() || !mul_ln1118_103_reg_83934.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_39_reg_78716.read()) + sc_bigint<32>(mul_ln1118_103_reg_83934.read()));
}

void bn_relu_sc_relu::thread_add_ln713_40_fu_27103_p2() {
    add_ln713_40_fu_27103_p2 = (!zext_ln1192_40_reg_78731.read().is_01() || !mul_ln1118_104_reg_83940.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_40_reg_78731.read()) + sc_bigint<32>(mul_ln1118_104_reg_83940.read()));
}

void bn_relu_sc_relu::thread_add_ln713_41_fu_27255_p2() {
    add_ln713_41_fu_27255_p2 = (!zext_ln1192_41_reg_78746.read().is_01() || !mul_ln1118_105_reg_83946.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_41_reg_78746.read()) + sc_bigint<32>(mul_ln1118_105_reg_83946.read()));
}

void bn_relu_sc_relu::thread_add_ln713_42_fu_27407_p2() {
    add_ln713_42_fu_27407_p2 = (!zext_ln1192_42_reg_78761.read().is_01() || !mul_ln1118_106_reg_83952.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_42_reg_78761.read()) + sc_bigint<32>(mul_ln1118_106_reg_83952.read()));
}

void bn_relu_sc_relu::thread_add_ln713_43_fu_27559_p2() {
    add_ln713_43_fu_27559_p2 = (!zext_ln1192_43_reg_78776.read().is_01() || !mul_ln1118_107_reg_83958.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_43_reg_78776.read()) + sc_bigint<32>(mul_ln1118_107_reg_83958.read()));
}

void bn_relu_sc_relu::thread_add_ln713_44_fu_27711_p2() {
    add_ln713_44_fu_27711_p2 = (!zext_ln1192_44_reg_78791.read().is_01() || !mul_ln1118_108_reg_83964.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_44_reg_78791.read()) + sc_bigint<32>(mul_ln1118_108_reg_83964.read()));
}

void bn_relu_sc_relu::thread_add_ln713_45_fu_27863_p2() {
    add_ln713_45_fu_27863_p2 = (!zext_ln1192_45_reg_78806.read().is_01() || !mul_ln1118_109_reg_83970.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_45_reg_78806.read()) + sc_bigint<32>(mul_ln1118_109_reg_83970.read()));
}

void bn_relu_sc_relu::thread_add_ln713_46_fu_28015_p2() {
    add_ln713_46_fu_28015_p2 = (!zext_ln1192_46_reg_78821.read().is_01() || !mul_ln1118_110_reg_83976.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_46_reg_78821.read()) + sc_bigint<32>(mul_ln1118_110_reg_83976.read()));
}

void bn_relu_sc_relu::thread_add_ln713_47_fu_28167_p2() {
    add_ln713_47_fu_28167_p2 = (!zext_ln1192_47_reg_78836.read().is_01() || !mul_ln1118_111_reg_83982.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_47_reg_78836.read()) + sc_bigint<32>(mul_ln1118_111_reg_83982.read()));
}

void bn_relu_sc_relu::thread_add_ln713_48_fu_28319_p2() {
    add_ln713_48_fu_28319_p2 = (!zext_ln1192_48_reg_78851.read().is_01() || !mul_ln1118_112_reg_83988.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_48_reg_78851.read()) + sc_bigint<32>(mul_ln1118_112_reg_83988.read()));
}

void bn_relu_sc_relu::thread_add_ln713_49_fu_28471_p2() {
    add_ln713_49_fu_28471_p2 = (!zext_ln1192_49_reg_78866.read().is_01() || !mul_ln1118_113_reg_83994.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_49_reg_78866.read()) + sc_bigint<32>(mul_ln1118_113_reg_83994.read()));
}

void bn_relu_sc_relu::thread_add_ln713_50_fu_28623_p2() {
    add_ln713_50_fu_28623_p2 = (!zext_ln1192_50_reg_78881.read().is_01() || !mul_ln1118_114_reg_84000.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_50_reg_78881.read()) + sc_bigint<32>(mul_ln1118_114_reg_84000.read()));
}

void bn_relu_sc_relu::thread_add_ln713_51_fu_28775_p2() {
    add_ln713_51_fu_28775_p2 = (!zext_ln1192_51_reg_78896.read().is_01() || !mul_ln1118_115_reg_84006.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_51_reg_78896.read()) + sc_bigint<32>(mul_ln1118_115_reg_84006.read()));
}

void bn_relu_sc_relu::thread_add_ln713_52_fu_28927_p2() {
    add_ln713_52_fu_28927_p2 = (!zext_ln1192_52_reg_78911.read().is_01() || !mul_ln1118_116_reg_84012.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_52_reg_78911.read()) + sc_bigint<32>(mul_ln1118_116_reg_84012.read()));
}

void bn_relu_sc_relu::thread_add_ln713_53_fu_29079_p2() {
    add_ln713_53_fu_29079_p2 = (!zext_ln1192_53_reg_78926.read().is_01() || !mul_ln1118_117_reg_84018.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_53_reg_78926.read()) + sc_bigint<32>(mul_ln1118_117_reg_84018.read()));
}

void bn_relu_sc_relu::thread_add_ln713_54_fu_29231_p2() {
    add_ln713_54_fu_29231_p2 = (!zext_ln1192_54_reg_78941.read().is_01() || !mul_ln1118_118_reg_84024.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_54_reg_78941.read()) + sc_bigint<32>(mul_ln1118_118_reg_84024.read()));
}

void bn_relu_sc_relu::thread_add_ln713_55_fu_29383_p2() {
    add_ln713_55_fu_29383_p2 = (!zext_ln1192_55_reg_78956.read().is_01() || !mul_ln1118_119_reg_84030.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_55_reg_78956.read()) + sc_bigint<32>(mul_ln1118_119_reg_84030.read()));
}

void bn_relu_sc_relu::thread_add_ln713_56_fu_29535_p2() {
    add_ln713_56_fu_29535_p2 = (!zext_ln1192_56_reg_78971.read().is_01() || !mul_ln1118_120_reg_84036.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_56_reg_78971.read()) + sc_bigint<32>(mul_ln1118_120_reg_84036.read()));
}

void bn_relu_sc_relu::thread_add_ln713_57_fu_29687_p2() {
    add_ln713_57_fu_29687_p2 = (!zext_ln1192_57_reg_78986.read().is_01() || !mul_ln1118_121_reg_84042.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_57_reg_78986.read()) + sc_bigint<32>(mul_ln1118_121_reg_84042.read()));
}

void bn_relu_sc_relu::thread_add_ln713_58_fu_29839_p2() {
    add_ln713_58_fu_29839_p2 = (!zext_ln1192_58_reg_79001.read().is_01() || !mul_ln1118_122_reg_84048.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_58_reg_79001.read()) + sc_bigint<32>(mul_ln1118_122_reg_84048.read()));
}

void bn_relu_sc_relu::thread_add_ln713_59_fu_29991_p2() {
    add_ln713_59_fu_29991_p2 = (!zext_ln1192_59_reg_79016.read().is_01() || !mul_ln1118_123_reg_84054.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_59_reg_79016.read()) + sc_bigint<32>(mul_ln1118_123_reg_84054.read()));
}

void bn_relu_sc_relu::thread_add_ln713_60_fu_30143_p2() {
    add_ln713_60_fu_30143_p2 = (!zext_ln1192_60_reg_79031.read().is_01() || !mul_ln1118_124_reg_84060.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_60_reg_79031.read()) + sc_bigint<32>(mul_ln1118_124_reg_84060.read()));
}

void bn_relu_sc_relu::thread_add_ln713_61_fu_30295_p2() {
    add_ln713_61_fu_30295_p2 = (!zext_ln1192_61_reg_79046.read().is_01() || !mul_ln1118_125_reg_84066.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_61_reg_79046.read()) + sc_bigint<32>(mul_ln1118_125_reg_84066.read()));
}

void bn_relu_sc_relu::thread_add_ln713_62_fu_30447_p2() {
    add_ln713_62_fu_30447_p2 = (!zext_ln1192_62_reg_79061.read().is_01() || !mul_ln1118_126_reg_84072.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_62_reg_79061.read()) + sc_bigint<32>(mul_ln1118_126_reg_84072.read()));
}

void bn_relu_sc_relu::thread_add_ln713_63_fu_58510_p2() {
    add_ln713_63_fu_58510_p2 = (!zext_ln1192_63_reg_79556.read().is_01() || !mul_ln1118_159_reg_90845.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_63_reg_79556.read()) + sc_bigint<32>(mul_ln1118_159_reg_90845.read()));
}

void bn_relu_sc_relu::thread_add_ln713_64_fu_58692_p2() {
    add_ln713_64_fu_58692_p2 = (!zext_ln1192_64_reg_79571.read().is_01() || !mul_ln1118_160_reg_90851.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_64_reg_79571.read()) + sc_bigint<32>(mul_ln1118_160_reg_90851.read()));
}

void bn_relu_sc_relu::thread_add_ln713_65_fu_58874_p2() {
    add_ln713_65_fu_58874_p2 = (!zext_ln1192_65_reg_79586.read().is_01() || !mul_ln1118_161_reg_90857.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_65_reg_79586.read()) + sc_bigint<32>(mul_ln1118_161_reg_90857.read()));
}

void bn_relu_sc_relu::thread_add_ln713_66_fu_59056_p2() {
    add_ln713_66_fu_59056_p2 = (!zext_ln1192_66_reg_79601.read().is_01() || !mul_ln1118_162_reg_90863.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_66_reg_79601.read()) + sc_bigint<32>(mul_ln1118_162_reg_90863.read()));
}

void bn_relu_sc_relu::thread_add_ln713_67_fu_59238_p2() {
    add_ln713_67_fu_59238_p2 = (!zext_ln1192_67_reg_79616.read().is_01() || !mul_ln1118_163_reg_90869.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_67_reg_79616.read()) + sc_bigint<32>(mul_ln1118_163_reg_90869.read()));
}

void bn_relu_sc_relu::thread_add_ln713_68_fu_59420_p2() {
    add_ln713_68_fu_59420_p2 = (!zext_ln1192_68_reg_79631.read().is_01() || !mul_ln1118_164_reg_90875.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_68_reg_79631.read()) + sc_bigint<32>(mul_ln1118_164_reg_90875.read()));
}

void bn_relu_sc_relu::thread_add_ln713_69_fu_59602_p2() {
    add_ln713_69_fu_59602_p2 = (!zext_ln1192_69_reg_79646.read().is_01() || !mul_ln1118_165_reg_90881.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_69_reg_79646.read()) + sc_bigint<32>(mul_ln1118_165_reg_90881.read()));
}

void bn_relu_sc_relu::thread_add_ln713_70_fu_59784_p2() {
    add_ln713_70_fu_59784_p2 = (!zext_ln1192_70_reg_79661.read().is_01() || !mul_ln1118_166_reg_90887.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_70_reg_79661.read()) + sc_bigint<32>(mul_ln1118_166_reg_90887.read()));
}

void bn_relu_sc_relu::thread_add_ln713_71_fu_59966_p2() {
    add_ln713_71_fu_59966_p2 = (!zext_ln1192_71_reg_79676.read().is_01() || !mul_ln1118_167_reg_90893.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_71_reg_79676.read()) + sc_bigint<32>(mul_ln1118_167_reg_90893.read()));
}

void bn_relu_sc_relu::thread_add_ln713_72_fu_60148_p2() {
    add_ln713_72_fu_60148_p2 = (!zext_ln1192_72_reg_79691.read().is_01() || !mul_ln1118_168_reg_90899.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_72_reg_79691.read()) + sc_bigint<32>(mul_ln1118_168_reg_90899.read()));
}

void bn_relu_sc_relu::thread_add_ln713_73_fu_60330_p2() {
    add_ln713_73_fu_60330_p2 = (!zext_ln1192_73_reg_79706.read().is_01() || !mul_ln1118_169_reg_90905.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_73_reg_79706.read()) + sc_bigint<32>(mul_ln1118_169_reg_90905.read()));
}

void bn_relu_sc_relu::thread_add_ln713_74_fu_60512_p2() {
    add_ln713_74_fu_60512_p2 = (!zext_ln1192_74_reg_79721.read().is_01() || !mul_ln1118_170_reg_90911.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_74_reg_79721.read()) + sc_bigint<32>(mul_ln1118_170_reg_90911.read()));
}

void bn_relu_sc_relu::thread_add_ln713_75_fu_60694_p2() {
    add_ln713_75_fu_60694_p2 = (!zext_ln1192_75_reg_79736.read().is_01() || !mul_ln1118_171_reg_90917.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_75_reg_79736.read()) + sc_bigint<32>(mul_ln1118_171_reg_90917.read()));
}

void bn_relu_sc_relu::thread_add_ln713_76_fu_60876_p2() {
    add_ln713_76_fu_60876_p2 = (!zext_ln1192_76_reg_79751.read().is_01() || !mul_ln1118_172_reg_90923.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_76_reg_79751.read()) + sc_bigint<32>(mul_ln1118_172_reg_90923.read()));
}

void bn_relu_sc_relu::thread_add_ln713_77_fu_61058_p2() {
    add_ln713_77_fu_61058_p2 = (!zext_ln1192_77_reg_79766.read().is_01() || !mul_ln1118_173_reg_90929.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_77_reg_79766.read()) + sc_bigint<32>(mul_ln1118_173_reg_90929.read()));
}

void bn_relu_sc_relu::thread_add_ln713_78_fu_61240_p2() {
    add_ln713_78_fu_61240_p2 = (!zext_ln1192_78_reg_79781.read().is_01() || !mul_ln1118_174_reg_90935.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_78_reg_79781.read()) + sc_bigint<32>(mul_ln1118_174_reg_90935.read()));
}

void bn_relu_sc_relu::thread_add_ln713_79_fu_61422_p2() {
    add_ln713_79_fu_61422_p2 = (!zext_ln1192_79_reg_79796.read().is_01() || !mul_ln1118_175_reg_90941.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_79_reg_79796.read()) + sc_bigint<32>(mul_ln1118_175_reg_90941.read()));
}

void bn_relu_sc_relu::thread_add_ln713_80_fu_61604_p2() {
    add_ln713_80_fu_61604_p2 = (!zext_ln1192_80_reg_79811.read().is_01() || !mul_ln1118_176_reg_90947.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_80_reg_79811.read()) + sc_bigint<32>(mul_ln1118_176_reg_90947.read()));
}

void bn_relu_sc_relu::thread_add_ln713_81_fu_61786_p2() {
    add_ln713_81_fu_61786_p2 = (!zext_ln1192_81_reg_79826.read().is_01() || !mul_ln1118_177_reg_90953.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_81_reg_79826.read()) + sc_bigint<32>(mul_ln1118_177_reg_90953.read()));
}

void bn_relu_sc_relu::thread_add_ln713_82_fu_61968_p2() {
    add_ln713_82_fu_61968_p2 = (!zext_ln1192_82_reg_79841.read().is_01() || !mul_ln1118_178_reg_90959.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_82_reg_79841.read()) + sc_bigint<32>(mul_ln1118_178_reg_90959.read()));
}

void bn_relu_sc_relu::thread_add_ln713_83_fu_62150_p2() {
    add_ln713_83_fu_62150_p2 = (!zext_ln1192_83_reg_79856.read().is_01() || !mul_ln1118_179_reg_90965.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_83_reg_79856.read()) + sc_bigint<32>(mul_ln1118_179_reg_90965.read()));
}

void bn_relu_sc_relu::thread_add_ln713_84_fu_62332_p2() {
    add_ln713_84_fu_62332_p2 = (!zext_ln1192_84_reg_79871.read().is_01() || !mul_ln1118_180_reg_90971.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_84_reg_79871.read()) + sc_bigint<32>(mul_ln1118_180_reg_90971.read()));
}

void bn_relu_sc_relu::thread_add_ln713_85_fu_62514_p2() {
    add_ln713_85_fu_62514_p2 = (!zext_ln1192_85_reg_79886.read().is_01() || !mul_ln1118_181_reg_90977.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_85_reg_79886.read()) + sc_bigint<32>(mul_ln1118_181_reg_90977.read()));
}

void bn_relu_sc_relu::thread_add_ln713_86_fu_62696_p2() {
    add_ln713_86_fu_62696_p2 = (!zext_ln1192_86_reg_79901.read().is_01() || !mul_ln1118_182_reg_90983.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_86_reg_79901.read()) + sc_bigint<32>(mul_ln1118_182_reg_90983.read()));
}

void bn_relu_sc_relu::thread_add_ln713_87_fu_62878_p2() {
    add_ln713_87_fu_62878_p2 = (!zext_ln1192_87_reg_79916.read().is_01() || !mul_ln1118_183_reg_90989.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_87_reg_79916.read()) + sc_bigint<32>(mul_ln1118_183_reg_90989.read()));
}

void bn_relu_sc_relu::thread_add_ln713_88_fu_63060_p2() {
    add_ln713_88_fu_63060_p2 = (!zext_ln1192_88_reg_79931.read().is_01() || !mul_ln1118_184_reg_90995.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_88_reg_79931.read()) + sc_bigint<32>(mul_ln1118_184_reg_90995.read()));
}

void bn_relu_sc_relu::thread_add_ln713_89_fu_63242_p2() {
    add_ln713_89_fu_63242_p2 = (!zext_ln1192_89_reg_79946.read().is_01() || !mul_ln1118_185_reg_91001.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_89_reg_79946.read()) + sc_bigint<32>(mul_ln1118_185_reg_91001.read()));
}

void bn_relu_sc_relu::thread_add_ln713_90_fu_63424_p2() {
    add_ln713_90_fu_63424_p2 = (!zext_ln1192_90_reg_79961.read().is_01() || !mul_ln1118_186_reg_91007.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_90_reg_79961.read()) + sc_bigint<32>(mul_ln1118_186_reg_91007.read()));
}

void bn_relu_sc_relu::thread_add_ln713_91_fu_63606_p2() {
    add_ln713_91_fu_63606_p2 = (!zext_ln1192_91_reg_79976.read().is_01() || !mul_ln1118_187_reg_91013.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_91_reg_79976.read()) + sc_bigint<32>(mul_ln1118_187_reg_91013.read()));
}

void bn_relu_sc_relu::thread_add_ln713_92_fu_63788_p2() {
    add_ln713_92_fu_63788_p2 = (!zext_ln1192_92_reg_79991.read().is_01() || !mul_ln1118_188_reg_91019.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_92_reg_79991.read()) + sc_bigint<32>(mul_ln1118_188_reg_91019.read()));
}

void bn_relu_sc_relu::thread_add_ln713_93_fu_63970_p2() {
    add_ln713_93_fu_63970_p2 = (!zext_ln1192_93_reg_80006.read().is_01() || !mul_ln1118_189_reg_91025.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_93_reg_80006.read()) + sc_bigint<32>(mul_ln1118_189_reg_91025.read()));
}

void bn_relu_sc_relu::thread_add_ln713_94_fu_64152_p2() {
    add_ln713_94_fu_64152_p2 = (!zext_ln1192_94_reg_80021.read().is_01() || !mul_ln1118_190_reg_91031.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_94_reg_80021.read()) + sc_bigint<32>(mul_ln1118_190_reg_91031.read()));
}

void bn_relu_sc_relu::thread_add_ln713_fu_25735_p2() {
    add_ln713_fu_25735_p2 = (!zext_ln1192_reg_78596.read().is_01() || !mul_ln1118_95_reg_83886.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln1192_reg_78596.read()) + sc_bigint<32>(mul_ln1118_95_reg_83886.read()));
}

void bn_relu_sc_relu::thread_and_ln340_10_fu_73856_p2() {
    and_ln340_10_fu_73856_p2 = (or_ln785_436_fu_73834_p2.read() & or_ln340_1178_fu_73850_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_11_fu_73996_p2() {
    and_ln340_11_fu_73996_p2 = (or_ln785_437_fu_73974_p2.read() & or_ln340_1179_fu_73990_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_12_fu_74136_p2() {
    and_ln340_12_fu_74136_p2 = (or_ln785_438_fu_74114_p2.read() & or_ln340_1180_fu_74130_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_13_fu_74276_p2() {
    and_ln340_13_fu_74276_p2 = (or_ln785_439_fu_74254_p2.read() & or_ln340_1181_fu_74270_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_14_fu_74416_p2() {
    and_ln340_14_fu_74416_p2 = (or_ln785_440_fu_74394_p2.read() & or_ln340_1182_fu_74410_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_15_fu_74556_p2() {
    and_ln340_15_fu_74556_p2 = (or_ln785_441_fu_74534_p2.read() & or_ln340_1183_fu_74550_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_16_fu_74696_p2() {
    and_ln340_16_fu_74696_p2 = (or_ln785_442_fu_74674_p2.read() & or_ln340_1184_fu_74690_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_17_fu_74836_p2() {
    and_ln340_17_fu_74836_p2 = (or_ln785_443_fu_74814_p2.read() & or_ln340_1185_fu_74830_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_18_fu_74976_p2() {
    and_ln340_18_fu_74976_p2 = (or_ln785_444_fu_74954_p2.read() & or_ln340_1186_fu_74970_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_19_fu_75116_p2() {
    and_ln340_19_fu_75116_p2 = (or_ln785_445_fu_75094_p2.read() & or_ln340_1187_fu_75110_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_1_fu_72596_p2() {
    and_ln340_1_fu_72596_p2 = (or_ln785_427_fu_72574_p2.read() & or_ln340_1169_fu_72590_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_20_fu_75256_p2() {
    and_ln340_20_fu_75256_p2 = (or_ln785_446_fu_75234_p2.read() & or_ln340_1188_fu_75250_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_21_fu_75396_p2() {
    and_ln340_21_fu_75396_p2 = (or_ln785_447_fu_75374_p2.read() & or_ln340_1189_fu_75390_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_22_fu_75536_p2() {
    and_ln340_22_fu_75536_p2 = (or_ln785_448_fu_75514_p2.read() & or_ln340_1190_fu_75530_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_23_fu_75676_p2() {
    and_ln340_23_fu_75676_p2 = (or_ln785_449_fu_75654_p2.read() & or_ln340_1191_fu_75670_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_24_fu_75816_p2() {
    and_ln340_24_fu_75816_p2 = (or_ln785_450_fu_75794_p2.read() & or_ln340_1192_fu_75810_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_25_fu_75956_p2() {
    and_ln340_25_fu_75956_p2 = (or_ln785_451_fu_75934_p2.read() & or_ln340_1193_fu_75950_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_26_fu_76096_p2() {
    and_ln340_26_fu_76096_p2 = (or_ln785_452_fu_76074_p2.read() & or_ln340_1194_fu_76090_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_27_fu_76236_p2() {
    and_ln340_27_fu_76236_p2 = (or_ln785_453_fu_76214_p2.read() & or_ln340_1195_fu_76230_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_28_fu_76376_p2() {
    and_ln340_28_fu_76376_p2 = (or_ln785_454_fu_76354_p2.read() & or_ln340_1196_fu_76370_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_29_fu_76516_p2() {
    and_ln340_29_fu_76516_p2 = (or_ln785_455_fu_76494_p2.read() & or_ln340_1197_fu_76510_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_2_fu_72736_p2() {
    and_ln340_2_fu_72736_p2 = (or_ln785_428_fu_72714_p2.read() & or_ln340_1170_fu_72730_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_30_fu_76656_p2() {
    and_ln340_30_fu_76656_p2 = (or_ln785_456_fu_76634_p2.read() & or_ln340_1198_fu_76650_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_31_fu_76796_p2() {
    and_ln340_31_fu_76796_p2 = (or_ln785_457_fu_76774_p2.read() & or_ln340_1199_fu_76790_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_32_fu_17216_p2() {
    and_ln340_32_fu_17216_p2 = (icmp_ln1494_fu_16984_p2.read() & or_ln340_311_fu_17210_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_33_fu_17461_p2() {
    and_ln340_33_fu_17461_p2 = (icmp_ln1494_1_fu_17229_p2.read() & or_ln340_319_fu_17455_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_34_fu_17706_p2() {
    and_ln340_34_fu_17706_p2 = (icmp_ln1494_2_fu_17474_p2.read() & or_ln340_327_fu_17700_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_35_fu_17951_p2() {
    and_ln340_35_fu_17951_p2 = (icmp_ln1494_3_fu_17719_p2.read() & or_ln340_335_fu_17945_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_36_fu_18196_p2() {
    and_ln340_36_fu_18196_p2 = (icmp_ln1494_4_fu_17964_p2.read() & or_ln340_343_fu_18190_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_37_fu_18441_p2() {
    and_ln340_37_fu_18441_p2 = (icmp_ln1494_5_fu_18209_p2.read() & or_ln340_351_fu_18435_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_38_fu_18686_p2() {
    and_ln340_38_fu_18686_p2 = (icmp_ln1494_6_fu_18454_p2.read() & or_ln340_359_fu_18680_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_39_fu_18931_p2() {
    and_ln340_39_fu_18931_p2 = (icmp_ln1494_7_fu_18699_p2.read() & or_ln340_367_fu_18925_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_3_fu_72876_p2() {
    and_ln340_3_fu_72876_p2 = (or_ln785_429_fu_72854_p2.read() & or_ln340_1171_fu_72870_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_40_fu_19176_p2() {
    and_ln340_40_fu_19176_p2 = (icmp_ln1494_8_fu_18944_p2.read() & or_ln340_375_fu_19170_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_41_fu_19421_p2() {
    and_ln340_41_fu_19421_p2 = (icmp_ln1494_9_fu_19189_p2.read() & or_ln340_383_fu_19415_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_42_fu_19666_p2() {
    and_ln340_42_fu_19666_p2 = (icmp_ln1494_10_fu_19434_p2.read() & or_ln340_391_fu_19660_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_43_fu_19911_p2() {
    and_ln340_43_fu_19911_p2 = (icmp_ln1494_11_fu_19679_p2.read() & or_ln340_399_fu_19905_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_44_fu_20156_p2() {
    and_ln340_44_fu_20156_p2 = (icmp_ln1494_12_fu_19924_p2.read() & or_ln340_407_fu_20150_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_45_fu_20401_p2() {
    and_ln340_45_fu_20401_p2 = (icmp_ln1494_13_fu_20169_p2.read() & or_ln340_415_fu_20395_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_46_fu_20646_p2() {
    and_ln340_46_fu_20646_p2 = (icmp_ln1494_14_fu_20414_p2.read() & or_ln340_423_fu_20640_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_47_fu_20891_p2() {
    and_ln340_47_fu_20891_p2 = (icmp_ln1494_15_fu_20659_p2.read() & or_ln340_431_fu_20885_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_48_fu_21136_p2() {
    and_ln340_48_fu_21136_p2 = (icmp_ln1494_16_fu_20904_p2.read() & or_ln340_443_fu_21130_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_49_fu_21381_p2() {
    and_ln340_49_fu_21381_p2 = (icmp_ln1494_17_fu_21149_p2.read() & or_ln340_455_fu_21375_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_4_fu_73016_p2() {
    and_ln340_4_fu_73016_p2 = (or_ln785_430_fu_72994_p2.read() & or_ln340_1172_fu_73010_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_50_fu_21626_p2() {
    and_ln340_50_fu_21626_p2 = (icmp_ln1494_18_fu_21394_p2.read() & or_ln340_467_fu_21620_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_51_fu_21871_p2() {
    and_ln340_51_fu_21871_p2 = (icmp_ln1494_19_fu_21639_p2.read() & or_ln340_479_fu_21865_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_52_fu_22116_p2() {
    and_ln340_52_fu_22116_p2 = (icmp_ln1494_20_fu_21884_p2.read() & or_ln340_491_fu_22110_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_53_fu_22361_p2() {
    and_ln340_53_fu_22361_p2 = (icmp_ln1494_21_fu_22129_p2.read() & or_ln340_503_fu_22355_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_54_fu_22606_p2() {
    and_ln340_54_fu_22606_p2 = (icmp_ln1494_22_fu_22374_p2.read() & or_ln340_515_fu_22600_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_55_fu_22851_p2() {
    and_ln340_55_fu_22851_p2 = (icmp_ln1494_23_fu_22619_p2.read() & or_ln340_527_fu_22845_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_56_fu_23096_p2() {
    and_ln340_56_fu_23096_p2 = (icmp_ln1494_24_fu_22864_p2.read() & or_ln340_535_fu_23090_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_57_fu_23341_p2() {
    and_ln340_57_fu_23341_p2 = (icmp_ln1494_25_fu_23109_p2.read() & or_ln340_543_fu_23335_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_58_fu_23586_p2() {
    and_ln340_58_fu_23586_p2 = (icmp_ln1494_26_fu_23354_p2.read() & or_ln340_551_fu_23580_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_59_fu_23831_p2() {
    and_ln340_59_fu_23831_p2 = (icmp_ln1494_27_fu_23599_p2.read() & or_ln340_559_fu_23825_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_5_fu_73156_p2() {
    and_ln340_5_fu_73156_p2 = (or_ln785_431_fu_73134_p2.read() & or_ln340_1173_fu_73150_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_60_fu_24076_p2() {
    and_ln340_60_fu_24076_p2 = (icmp_ln1494_28_fu_23844_p2.read() & or_ln340_567_fu_24070_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_61_fu_24321_p2() {
    and_ln340_61_fu_24321_p2 = (icmp_ln1494_29_fu_24089_p2.read() & or_ln340_575_fu_24315_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_62_fu_24566_p2() {
    and_ln340_62_fu_24566_p2 = (icmp_ln1494_30_fu_24334_p2.read() & or_ln340_583_fu_24560_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_63_fu_24811_p2() {
    and_ln340_63_fu_24811_p2 = (icmp_ln1494_31_fu_24579_p2.read() & or_ln340_591_fu_24805_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_64_fu_40948_p2() {
    and_ln340_64_fu_40948_p2 = (tmp_1260_reg_86483.read() & or_ln340_663_fu_40942_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_65_fu_41130_p2() {
    and_ln340_65_fu_41130_p2 = (tmp_1277_reg_86527.read() & or_ln340_675_fu_41124_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_66_fu_41312_p2() {
    and_ln340_66_fu_41312_p2 = (tmp_1294_reg_86571.read() & or_ln340_687_fu_41306_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_67_fu_41494_p2() {
    and_ln340_67_fu_41494_p2 = (tmp_1311_reg_86615.read() & or_ln340_699_fu_41488_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_68_fu_41676_p2() {
    and_ln340_68_fu_41676_p2 = (tmp_1328_reg_86659.read() & or_ln340_711_fu_41670_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_69_fu_41858_p2() {
    and_ln340_69_fu_41858_p2 = (tmp_1345_reg_86703.read() & or_ln340_723_fu_41852_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_6_fu_73296_p2() {
    and_ln340_6_fu_73296_p2 = (or_ln785_432_fu_73274_p2.read() & or_ln340_1174_fu_73290_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_70_fu_42040_p2() {
    and_ln340_70_fu_42040_p2 = (tmp_1362_reg_86747.read() & or_ln340_735_fu_42034_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_71_fu_42222_p2() {
    and_ln340_71_fu_42222_p2 = (tmp_1379_reg_86791.read() & or_ln340_747_fu_42216_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_72_fu_42404_p2() {
    and_ln340_72_fu_42404_p2 = (tmp_1396_reg_86835.read() & or_ln340_759_fu_42398_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_73_fu_42586_p2() {
    and_ln340_73_fu_42586_p2 = (tmp_1413_reg_86879.read() & or_ln340_771_fu_42580_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_74_fu_42768_p2() {
    and_ln340_74_fu_42768_p2 = (tmp_1430_reg_86923.read() & or_ln340_783_fu_42762_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_75_fu_42950_p2() {
    and_ln340_75_fu_42950_p2 = (tmp_1447_reg_86967.read() & or_ln340_801_fu_42944_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_76_fu_43132_p2() {
    and_ln340_76_fu_43132_p2 = (tmp_1464_reg_87011.read() & or_ln340_819_fu_43126_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_77_fu_43314_p2() {
    and_ln340_77_fu_43314_p2 = (tmp_1481_reg_87055.read() & or_ln340_837_fu_43308_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_78_fu_43496_p2() {
    and_ln340_78_fu_43496_p2 = (tmp_1498_reg_87099.read() & or_ln340_855_fu_43490_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_79_fu_43678_p2() {
    and_ln340_79_fu_43678_p2 = (tmp_1515_reg_87143.read() & or_ln340_873_fu_43672_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_7_fu_73436_p2() {
    and_ln340_7_fu_73436_p2 = (or_ln785_433_fu_73414_p2.read() & or_ln340_1175_fu_73430_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_80_fu_43860_p2() {
    and_ln340_80_fu_43860_p2 = (tmp_1532_reg_87187.read() & or_ln340_979_fu_43854_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_81_fu_44042_p2() {
    and_ln340_81_fu_44042_p2 = (tmp_1549_reg_87231.read() & or_ln340_985_fu_44036_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_82_fu_44224_p2() {
    and_ln340_82_fu_44224_p2 = (tmp_1566_reg_87275.read() & or_ln340_991_fu_44218_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_83_fu_44406_p2() {
    and_ln340_83_fu_44406_p2 = (tmp_1583_reg_87319.read() & or_ln340_997_fu_44400_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_84_fu_44588_p2() {
    and_ln340_84_fu_44588_p2 = (tmp_1600_reg_87363.read() & or_ln340_1003_fu_44582_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_85_fu_44770_p2() {
    and_ln340_85_fu_44770_p2 = (tmp_1617_reg_87407.read() & or_ln340_1009_fu_44764_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_86_fu_44952_p2() {
    and_ln340_86_fu_44952_p2 = (tmp_1634_reg_87451.read() & or_ln340_1015_fu_44946_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_87_fu_45134_p2() {
    and_ln340_87_fu_45134_p2 = (tmp_1651_reg_87495.read() & or_ln340_1021_fu_45128_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_88_fu_45316_p2() {
    and_ln340_88_fu_45316_p2 = (tmp_1668_reg_87539.read() & or_ln340_1027_fu_45310_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_89_fu_45498_p2() {
    and_ln340_89_fu_45498_p2 = (tmp_1685_reg_87583.read() & or_ln340_1033_fu_45492_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_8_fu_73576_p2() {
    and_ln340_8_fu_73576_p2 = (or_ln785_434_fu_73554_p2.read() & or_ln340_1176_fu_73570_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_90_fu_45680_p2() {
    and_ln340_90_fu_45680_p2 = (tmp_1702_reg_87627.read() & or_ln340_1039_fu_45674_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_91_fu_45862_p2() {
    and_ln340_91_fu_45862_p2 = (tmp_1719_reg_87671.read() & or_ln340_1045_fu_45856_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_92_fu_46044_p2() {
    and_ln340_92_fu_46044_p2 = (tmp_1736_reg_87715.read() & or_ln340_1051_fu_46038_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_93_fu_46226_p2() {
    and_ln340_93_fu_46226_p2 = (tmp_1753_reg_87759.read() & or_ln340_1057_fu_46220_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_94_fu_46408_p2() {
    and_ln340_94_fu_46408_p2 = (tmp_1770_reg_87803.read() & or_ln340_1063_fu_46402_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_95_fu_46590_p2() {
    and_ln340_95_fu_46590_p2 = (tmp_1787_reg_87847.read() & or_ln340_1069_fu_46584_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_9_fu_73716_p2() {
    and_ln340_9_fu_73716_p2 = (or_ln785_435_fu_73694_p2.read() & or_ln340_1177_fu_73710_p2.read());
}

void bn_relu_sc_relu::thread_and_ln340_fu_72456_p2() {
    and_ln340_fu_72456_p2 = (or_ln785_426_fu_72434_p2.read() & or_ln340_1168_fu_72450_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_100_fu_21466_p2() {
    and_ln416_100_fu_21466_p2 = (tmp_889_fu_21435_p3.read() & xor_ln416_119_fu_21460_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_101_fu_14685_p2() {
    and_ln416_101_fu_14685_p2 = (tmp_895_reg_81796.read() & xor_ln416_120_fu_14679_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_102_fu_21711_p2() {
    and_ln416_102_fu_21711_p2 = (tmp_902_fu_21680_p3.read() & xor_ln416_122_fu_21705_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_103_fu_14863_p2() {
    and_ln416_103_fu_14863_p2 = (tmp_908_reg_81830.read() & xor_ln416_123_fu_14857_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_104_fu_21956_p2() {
    and_ln416_104_fu_21956_p2 = (tmp_915_fu_21925_p3.read() & xor_ln416_125_fu_21950_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_105_fu_15041_p2() {
    and_ln416_105_fu_15041_p2 = (tmp_921_reg_81864.read() & xor_ln416_126_fu_15035_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_106_fu_22201_p2() {
    and_ln416_106_fu_22201_p2 = (tmp_928_fu_22170_p3.read() & xor_ln416_128_fu_22195_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_107_fu_15219_p2() {
    and_ln416_107_fu_15219_p2 = (tmp_934_reg_81898.read() & xor_ln416_129_fu_15213_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_108_fu_22446_p2() {
    and_ln416_108_fu_22446_p2 = (tmp_941_fu_22415_p3.read() & xor_ln416_131_fu_22440_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_109_fu_15397_p2() {
    and_ln416_109_fu_15397_p2 = (tmp_947_reg_81932.read() & xor_ln416_132_fu_15391_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_110_fu_22691_p2() {
    and_ln416_110_fu_22691_p2 = (tmp_954_fu_22660_p3.read() & xor_ln416_134_fu_22685_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_111_fu_15575_p2() {
    and_ln416_111_fu_15575_p2 = (tmp_960_reg_81966.read() & xor_ln416_135_fu_15569_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_112_fu_22936_p2() {
    and_ln416_112_fu_22936_p2 = (tmp_967_fu_22905_p3.read() & xor_ln416_137_fu_22930_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_113_fu_15753_p2() {
    and_ln416_113_fu_15753_p2 = (tmp_973_reg_82000.read() & xor_ln416_138_fu_15747_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_114_fu_23181_p2() {
    and_ln416_114_fu_23181_p2 = (tmp_980_fu_23150_p3.read() & xor_ln416_140_fu_23175_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_115_fu_15931_p2() {
    and_ln416_115_fu_15931_p2 = (tmp_986_reg_82034.read() & xor_ln416_141_fu_15925_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_116_fu_23426_p2() {
    and_ln416_116_fu_23426_p2 = (tmp_993_fu_23395_p3.read() & xor_ln416_143_fu_23420_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_117_fu_16109_p2() {
    and_ln416_117_fu_16109_p2 = (tmp_999_reg_82068.read() & xor_ln416_144_fu_16103_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_118_fu_23671_p2() {
    and_ln416_118_fu_23671_p2 = (tmp_1006_fu_23640_p3.read() & xor_ln416_146_fu_23665_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_119_fu_16287_p2() {
    and_ln416_119_fu_16287_p2 = (tmp_1012_reg_82102.read() & xor_ln416_147_fu_16281_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_120_fu_23916_p2() {
    and_ln416_120_fu_23916_p2 = (tmp_1019_fu_23885_p3.read() & xor_ln416_149_fu_23910_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_121_fu_16465_p2() {
    and_ln416_121_fu_16465_p2 = (tmp_1025_reg_82136.read() & xor_ln416_150_fu_16459_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_122_fu_24161_p2() {
    and_ln416_122_fu_24161_p2 = (tmp_1032_fu_24130_p3.read() & xor_ln416_152_fu_24155_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_123_fu_16643_p2() {
    and_ln416_123_fu_16643_p2 = (tmp_1038_reg_82170.read() & xor_ln416_153_fu_16637_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_124_fu_24406_p2() {
    and_ln416_124_fu_24406_p2 = (tmp_1045_fu_24375_p3.read() & xor_ln416_155_fu_24400_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_125_fu_16821_p2() {
    and_ln416_125_fu_16821_p2 = (tmp_1051_reg_82204.read() & xor_ln416_156_fu_16815_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_126_fu_24651_p2() {
    and_ln416_126_fu_24651_p2 = (tmp_1058_fu_24620_p3.read() & xor_ln416_158_fu_24645_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_127_fu_25779_p2() {
    and_ln416_127_fu_25779_p2 = (tmp_1064_fu_25739_p3.read() & xor_ln416_159_fu_25773_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_128_fu_25931_p2() {
    and_ln416_128_fu_25931_p2 = (tmp_1070_fu_25891_p3.read() & xor_ln416_160_fu_25925_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_129_fu_26083_p2() {
    and_ln416_129_fu_26083_p2 = (tmp_1076_fu_26043_p3.read() & xor_ln416_161_fu_26077_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_130_fu_26235_p2() {
    and_ln416_130_fu_26235_p2 = (tmp_1082_fu_26195_p3.read() & xor_ln416_162_fu_26229_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_131_fu_26387_p2() {
    and_ln416_131_fu_26387_p2 = (tmp_1088_fu_26347_p3.read() & xor_ln416_163_fu_26381_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_132_fu_26539_p2() {
    and_ln416_132_fu_26539_p2 = (tmp_1094_fu_26499_p3.read() & xor_ln416_164_fu_26533_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_133_fu_26691_p2() {
    and_ln416_133_fu_26691_p2 = (tmp_1100_fu_26651_p3.read() & xor_ln416_165_fu_26685_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_134_fu_26843_p2() {
    and_ln416_134_fu_26843_p2 = (tmp_1106_fu_26803_p3.read() & xor_ln416_166_fu_26837_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_135_fu_26995_p2() {
    and_ln416_135_fu_26995_p2 = (tmp_1112_fu_26955_p3.read() & xor_ln416_167_fu_26989_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_136_fu_27147_p2() {
    and_ln416_136_fu_27147_p2 = (tmp_1118_fu_27107_p3.read() & xor_ln416_168_fu_27141_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_137_fu_27299_p2() {
    and_ln416_137_fu_27299_p2 = (tmp_1124_fu_27259_p3.read() & xor_ln416_169_fu_27293_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_138_fu_27451_p2() {
    and_ln416_138_fu_27451_p2 = (tmp_1130_fu_27411_p3.read() & xor_ln416_170_fu_27445_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_139_fu_27603_p2() {
    and_ln416_139_fu_27603_p2 = (tmp_1136_fu_27563_p3.read() & xor_ln416_171_fu_27597_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_140_fu_27755_p2() {
    and_ln416_140_fu_27755_p2 = (tmp_1142_fu_27715_p3.read() & xor_ln416_172_fu_27749_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_141_fu_27907_p2() {
    and_ln416_141_fu_27907_p2 = (tmp_1148_fu_27867_p3.read() & xor_ln416_173_fu_27901_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_142_fu_28059_p2() {
    and_ln416_142_fu_28059_p2 = (tmp_1154_fu_28019_p3.read() & xor_ln416_174_fu_28053_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_143_fu_28211_p2() {
    and_ln416_143_fu_28211_p2 = (tmp_1160_fu_28171_p3.read() & xor_ln416_175_fu_28205_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_144_fu_28363_p2() {
    and_ln416_144_fu_28363_p2 = (tmp_1166_fu_28323_p3.read() & xor_ln416_176_fu_28357_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_145_fu_28515_p2() {
    and_ln416_145_fu_28515_p2 = (tmp_1172_fu_28475_p3.read() & xor_ln416_177_fu_28509_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_146_fu_28667_p2() {
    and_ln416_146_fu_28667_p2 = (tmp_1178_fu_28627_p3.read() & xor_ln416_178_fu_28661_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_147_fu_28819_p2() {
    and_ln416_147_fu_28819_p2 = (tmp_1184_fu_28779_p3.read() & xor_ln416_179_fu_28813_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_148_fu_28971_p2() {
    and_ln416_148_fu_28971_p2 = (tmp_1190_fu_28931_p3.read() & xor_ln416_180_fu_28965_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_149_fu_29123_p2() {
    and_ln416_149_fu_29123_p2 = (tmp_1196_fu_29083_p3.read() & xor_ln416_181_fu_29117_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_150_fu_29275_p2() {
    and_ln416_150_fu_29275_p2 = (tmp_1202_fu_29235_p3.read() & xor_ln416_182_fu_29269_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_151_fu_29427_p2() {
    and_ln416_151_fu_29427_p2 = (tmp_1208_fu_29387_p3.read() & xor_ln416_183_fu_29421_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_152_fu_29579_p2() {
    and_ln416_152_fu_29579_p2 = (tmp_1214_fu_29539_p3.read() & xor_ln416_184_fu_29573_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_153_fu_29731_p2() {
    and_ln416_153_fu_29731_p2 = (tmp_1220_fu_29691_p3.read() & xor_ln416_185_fu_29725_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_154_fu_29883_p2() {
    and_ln416_154_fu_29883_p2 = (tmp_1226_fu_29843_p3.read() & xor_ln416_186_fu_29877_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_155_fu_30035_p2() {
    and_ln416_155_fu_30035_p2 = (tmp_1232_fu_29995_p3.read() & xor_ln416_187_fu_30029_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_156_fu_30187_p2() {
    and_ln416_156_fu_30187_p2 = (tmp_1238_fu_30147_p3.read() & xor_ln416_188_fu_30181_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_157_fu_30339_p2() {
    and_ln416_157_fu_30339_p2 = (tmp_1244_fu_30299_p3.read() & xor_ln416_189_fu_30333_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_158_fu_30491_p2() {
    and_ln416_158_fu_30491_p2 = (tmp_1250_fu_30451_p3.read() & xor_ln416_190_fu_30485_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_159_fu_33651_p2() {
    and_ln416_159_fu_33651_p2 = (tmp_1256_fu_33611_p3.read() & xor_ln416_191_fu_33645_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_160_fu_40814_p2() {
    and_ln416_160_fu_40814_p2 = (tmp_1262_fu_40785_p3.read() & xor_ln416_192_fu_40808_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_161_fu_46696_p2() {
    and_ln416_161_fu_46696_p2 = (tmp_1268_fu_46656_p3.read() & xor_ln416_193_fu_46690_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_162_fu_33801_p2() {
    and_ln416_162_fu_33801_p2 = (tmp_1273_fu_33761_p3.read() & xor_ln416_194_fu_33795_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_163_fu_40996_p2() {
    and_ln416_163_fu_40996_p2 = (tmp_1279_fu_40967_p3.read() & xor_ln416_195_fu_40990_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_164_fu_46835_p2() {
    and_ln416_164_fu_46835_p2 = (tmp_1285_fu_46795_p3.read() & xor_ln416_196_fu_46829_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_165_fu_33951_p2() {
    and_ln416_165_fu_33951_p2 = (tmp_1290_fu_33911_p3.read() & xor_ln416_197_fu_33945_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_166_fu_41178_p2() {
    and_ln416_166_fu_41178_p2 = (tmp_1296_fu_41149_p3.read() & xor_ln416_198_fu_41172_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_167_fu_46974_p2() {
    and_ln416_167_fu_46974_p2 = (tmp_1302_fu_46934_p3.read() & xor_ln416_199_fu_46968_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_168_fu_34101_p2() {
    and_ln416_168_fu_34101_p2 = (tmp_1307_fu_34061_p3.read() & xor_ln416_200_fu_34095_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_169_fu_41360_p2() {
    and_ln416_169_fu_41360_p2 = (tmp_1313_fu_41331_p3.read() & xor_ln416_201_fu_41354_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_170_fu_47113_p2() {
    and_ln416_170_fu_47113_p2 = (tmp_1319_fu_47073_p3.read() & xor_ln416_202_fu_47107_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_171_fu_34251_p2() {
    and_ln416_171_fu_34251_p2 = (tmp_1324_fu_34211_p3.read() & xor_ln416_203_fu_34245_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_172_fu_41542_p2() {
    and_ln416_172_fu_41542_p2 = (tmp_1330_fu_41513_p3.read() & xor_ln416_204_fu_41536_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_173_fu_47252_p2() {
    and_ln416_173_fu_47252_p2 = (tmp_1336_fu_47212_p3.read() & xor_ln416_205_fu_47246_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_174_fu_34401_p2() {
    and_ln416_174_fu_34401_p2 = (tmp_1341_fu_34361_p3.read() & xor_ln416_206_fu_34395_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_175_fu_41724_p2() {
    and_ln416_175_fu_41724_p2 = (tmp_1347_fu_41695_p3.read() & xor_ln416_207_fu_41718_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_176_fu_47391_p2() {
    and_ln416_176_fu_47391_p2 = (tmp_1353_fu_47351_p3.read() & xor_ln416_208_fu_47385_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_177_fu_34551_p2() {
    and_ln416_177_fu_34551_p2 = (tmp_1358_fu_34511_p3.read() & xor_ln416_209_fu_34545_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_178_fu_41906_p2() {
    and_ln416_178_fu_41906_p2 = (tmp_1364_fu_41877_p3.read() & xor_ln416_210_fu_41900_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_179_fu_47530_p2() {
    and_ln416_179_fu_47530_p2 = (tmp_1370_fu_47490_p3.read() & xor_ln416_211_fu_47524_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_180_fu_34701_p2() {
    and_ln416_180_fu_34701_p2 = (tmp_1375_fu_34661_p3.read() & xor_ln416_212_fu_34695_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_181_fu_42088_p2() {
    and_ln416_181_fu_42088_p2 = (tmp_1381_fu_42059_p3.read() & xor_ln416_213_fu_42082_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_182_fu_47669_p2() {
    and_ln416_182_fu_47669_p2 = (tmp_1387_fu_47629_p3.read() & xor_ln416_214_fu_47663_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_183_fu_34851_p2() {
    and_ln416_183_fu_34851_p2 = (tmp_1392_fu_34811_p3.read() & xor_ln416_215_fu_34845_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_184_fu_42270_p2() {
    and_ln416_184_fu_42270_p2 = (tmp_1398_fu_42241_p3.read() & xor_ln416_216_fu_42264_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_185_fu_47808_p2() {
    and_ln416_185_fu_47808_p2 = (tmp_1404_fu_47768_p3.read() & xor_ln416_217_fu_47802_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_186_fu_35001_p2() {
    and_ln416_186_fu_35001_p2 = (tmp_1409_fu_34961_p3.read() & xor_ln416_218_fu_34995_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_187_fu_42452_p2() {
    and_ln416_187_fu_42452_p2 = (tmp_1415_fu_42423_p3.read() & xor_ln416_219_fu_42446_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_188_fu_47947_p2() {
    and_ln416_188_fu_47947_p2 = (tmp_1421_fu_47907_p3.read() & xor_ln416_220_fu_47941_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_189_fu_35151_p2() {
    and_ln416_189_fu_35151_p2 = (tmp_1426_fu_35111_p3.read() & xor_ln416_221_fu_35145_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_190_fu_42634_p2() {
    and_ln416_190_fu_42634_p2 = (tmp_1432_fu_42605_p3.read() & xor_ln416_222_fu_42628_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_191_fu_48086_p2() {
    and_ln416_191_fu_48086_p2 = (tmp_1438_fu_48046_p3.read() & xor_ln416_223_fu_48080_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_192_fu_35301_p2() {
    and_ln416_192_fu_35301_p2 = (tmp_1443_fu_35261_p3.read() & xor_ln416_224_fu_35295_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_193_fu_42816_p2() {
    and_ln416_193_fu_42816_p2 = (tmp_1449_fu_42787_p3.read() & xor_ln416_225_fu_42810_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_194_fu_48225_p2() {
    and_ln416_194_fu_48225_p2 = (tmp_1455_fu_48185_p3.read() & xor_ln416_226_fu_48219_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_195_fu_35451_p2() {
    and_ln416_195_fu_35451_p2 = (tmp_1460_fu_35411_p3.read() & xor_ln416_227_fu_35445_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_196_fu_42998_p2() {
    and_ln416_196_fu_42998_p2 = (tmp_1466_fu_42969_p3.read() & xor_ln416_228_fu_42992_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_197_fu_48364_p2() {
    and_ln416_197_fu_48364_p2 = (tmp_1472_fu_48324_p3.read() & xor_ln416_229_fu_48358_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_198_fu_35601_p2() {
    and_ln416_198_fu_35601_p2 = (tmp_1477_fu_35561_p3.read() & xor_ln416_230_fu_35595_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_199_fu_43180_p2() {
    and_ln416_199_fu_43180_p2 = (tmp_1483_fu_43151_p3.read() & xor_ln416_231_fu_43174_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_200_fu_48503_p2() {
    and_ln416_200_fu_48503_p2 = (tmp_1489_fu_48463_p3.read() & xor_ln416_232_fu_48497_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_201_fu_35751_p2() {
    and_ln416_201_fu_35751_p2 = (tmp_1494_fu_35711_p3.read() & xor_ln416_233_fu_35745_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_202_fu_43362_p2() {
    and_ln416_202_fu_43362_p2 = (tmp_1500_fu_43333_p3.read() & xor_ln416_234_fu_43356_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_203_fu_48642_p2() {
    and_ln416_203_fu_48642_p2 = (tmp_1506_fu_48602_p3.read() & xor_ln416_235_fu_48636_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_204_fu_35901_p2() {
    and_ln416_204_fu_35901_p2 = (tmp_1511_fu_35861_p3.read() & xor_ln416_236_fu_35895_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_205_fu_43544_p2() {
    and_ln416_205_fu_43544_p2 = (tmp_1517_fu_43515_p3.read() & xor_ln416_237_fu_43538_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_206_fu_48781_p2() {
    and_ln416_206_fu_48781_p2 = (tmp_1523_fu_48741_p3.read() & xor_ln416_238_fu_48775_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_207_fu_36051_p2() {
    and_ln416_207_fu_36051_p2 = (tmp_1528_fu_36011_p3.read() & xor_ln416_239_fu_36045_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_208_fu_43726_p2() {
    and_ln416_208_fu_43726_p2 = (tmp_1534_fu_43697_p3.read() & xor_ln416_240_fu_43720_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_209_fu_48920_p2() {
    and_ln416_209_fu_48920_p2 = (tmp_1540_fu_48880_p3.read() & xor_ln416_241_fu_48914_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_210_fu_36201_p2() {
    and_ln416_210_fu_36201_p2 = (tmp_1545_fu_36161_p3.read() & xor_ln416_242_fu_36195_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_211_fu_43908_p2() {
    and_ln416_211_fu_43908_p2 = (tmp_1551_fu_43879_p3.read() & xor_ln416_243_fu_43902_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_212_fu_49059_p2() {
    and_ln416_212_fu_49059_p2 = (tmp_1557_fu_49019_p3.read() & xor_ln416_244_fu_49053_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_213_fu_36351_p2() {
    and_ln416_213_fu_36351_p2 = (tmp_1562_fu_36311_p3.read() & xor_ln416_245_fu_36345_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_214_fu_44090_p2() {
    and_ln416_214_fu_44090_p2 = (tmp_1568_fu_44061_p3.read() & xor_ln416_246_fu_44084_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_215_fu_49198_p2() {
    and_ln416_215_fu_49198_p2 = (tmp_1574_fu_49158_p3.read() & xor_ln416_247_fu_49192_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_216_fu_36501_p2() {
    and_ln416_216_fu_36501_p2 = (tmp_1579_fu_36461_p3.read() & xor_ln416_248_fu_36495_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_217_fu_44272_p2() {
    and_ln416_217_fu_44272_p2 = (tmp_1585_fu_44243_p3.read() & xor_ln416_249_fu_44266_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_218_fu_49337_p2() {
    and_ln416_218_fu_49337_p2 = (tmp_1591_fu_49297_p3.read() & xor_ln416_250_fu_49331_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_219_fu_36651_p2() {
    and_ln416_219_fu_36651_p2 = (tmp_1596_fu_36611_p3.read() & xor_ln416_251_fu_36645_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_220_fu_44454_p2() {
    and_ln416_220_fu_44454_p2 = (tmp_1602_fu_44425_p3.read() & xor_ln416_252_fu_44448_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_221_fu_49476_p2() {
    and_ln416_221_fu_49476_p2 = (tmp_1608_fu_49436_p3.read() & xor_ln416_253_fu_49470_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_222_fu_36801_p2() {
    and_ln416_222_fu_36801_p2 = (tmp_1613_fu_36761_p3.read() & xor_ln416_254_fu_36795_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_223_fu_44636_p2() {
    and_ln416_223_fu_44636_p2 = (tmp_1619_fu_44607_p3.read() & xor_ln416_255_fu_44630_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_224_fu_49615_p2() {
    and_ln416_224_fu_49615_p2 = (tmp_1625_fu_49575_p3.read() & xor_ln416_256_fu_49609_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_225_fu_36951_p2() {
    and_ln416_225_fu_36951_p2 = (tmp_1630_fu_36911_p3.read() & xor_ln416_257_fu_36945_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_226_fu_44818_p2() {
    and_ln416_226_fu_44818_p2 = (tmp_1636_fu_44789_p3.read() & xor_ln416_258_fu_44812_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_227_fu_49754_p2() {
    and_ln416_227_fu_49754_p2 = (tmp_1642_fu_49714_p3.read() & xor_ln416_259_fu_49748_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_228_fu_37101_p2() {
    and_ln416_228_fu_37101_p2 = (tmp_1647_fu_37061_p3.read() & xor_ln416_260_fu_37095_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_229_fu_45000_p2() {
    and_ln416_229_fu_45000_p2 = (tmp_1653_fu_44971_p3.read() & xor_ln416_261_fu_44994_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_230_fu_49893_p2() {
    and_ln416_230_fu_49893_p2 = (tmp_1659_fu_49853_p3.read() & xor_ln416_262_fu_49887_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_231_fu_37251_p2() {
    and_ln416_231_fu_37251_p2 = (tmp_1664_fu_37211_p3.read() & xor_ln416_263_fu_37245_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_232_fu_45182_p2() {
    and_ln416_232_fu_45182_p2 = (tmp_1670_fu_45153_p3.read() & xor_ln416_264_fu_45176_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_233_fu_50032_p2() {
    and_ln416_233_fu_50032_p2 = (tmp_1676_fu_49992_p3.read() & xor_ln416_265_fu_50026_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_234_fu_37401_p2() {
    and_ln416_234_fu_37401_p2 = (tmp_1681_fu_37361_p3.read() & xor_ln416_266_fu_37395_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_235_fu_45364_p2() {
    and_ln416_235_fu_45364_p2 = (tmp_1687_fu_45335_p3.read() & xor_ln416_267_fu_45358_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_236_fu_50171_p2() {
    and_ln416_236_fu_50171_p2 = (tmp_1693_fu_50131_p3.read() & xor_ln416_268_fu_50165_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_237_fu_37551_p2() {
    and_ln416_237_fu_37551_p2 = (tmp_1698_fu_37511_p3.read() & xor_ln416_269_fu_37545_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_238_fu_45546_p2() {
    and_ln416_238_fu_45546_p2 = (tmp_1704_fu_45517_p3.read() & xor_ln416_270_fu_45540_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_239_fu_50310_p2() {
    and_ln416_239_fu_50310_p2 = (tmp_1710_fu_50270_p3.read() & xor_ln416_271_fu_50304_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_240_fu_37701_p2() {
    and_ln416_240_fu_37701_p2 = (tmp_1715_fu_37661_p3.read() & xor_ln416_272_fu_37695_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_241_fu_45728_p2() {
    and_ln416_241_fu_45728_p2 = (tmp_1721_fu_45699_p3.read() & xor_ln416_273_fu_45722_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_242_fu_50449_p2() {
    and_ln416_242_fu_50449_p2 = (tmp_1727_fu_50409_p3.read() & xor_ln416_274_fu_50443_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_243_fu_37851_p2() {
    and_ln416_243_fu_37851_p2 = (tmp_1732_fu_37811_p3.read() & xor_ln416_275_fu_37845_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_244_fu_45910_p2() {
    and_ln416_244_fu_45910_p2 = (tmp_1738_fu_45881_p3.read() & xor_ln416_276_fu_45904_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_245_fu_50588_p2() {
    and_ln416_245_fu_50588_p2 = (tmp_1744_fu_50548_p3.read() & xor_ln416_277_fu_50582_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_246_fu_38001_p2() {
    and_ln416_246_fu_38001_p2 = (tmp_1749_fu_37961_p3.read() & xor_ln416_278_fu_37995_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_247_fu_46092_p2() {
    and_ln416_247_fu_46092_p2 = (tmp_1755_fu_46063_p3.read() & xor_ln416_279_fu_46086_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_248_fu_50727_p2() {
    and_ln416_248_fu_50727_p2 = (tmp_1761_fu_50687_p3.read() & xor_ln416_280_fu_50721_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_249_fu_38151_p2() {
    and_ln416_249_fu_38151_p2 = (tmp_1766_fu_38111_p3.read() & xor_ln416_281_fu_38145_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_250_fu_46274_p2() {
    and_ln416_250_fu_46274_p2 = (tmp_1772_fu_46245_p3.read() & xor_ln416_282_fu_46268_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_251_fu_50866_p2() {
    and_ln416_251_fu_50866_p2 = (tmp_1778_fu_50826_p3.read() & xor_ln416_283_fu_50860_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_252_fu_38301_p2() {
    and_ln416_252_fu_38301_p2 = (tmp_1783_fu_38261_p3.read() & xor_ln416_284_fu_38295_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_253_fu_46456_p2() {
    and_ln416_253_fu_46456_p2 = (tmp_1789_fu_46427_p3.read() & xor_ln416_285_fu_46450_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_254_fu_51005_p2() {
    and_ln416_254_fu_51005_p2 = (tmp_1795_fu_50965_p3.read() & xor_ln416_286_fu_50999_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_255_fu_52070_p2() {
    and_ln416_255_fu_52070_p2 = (tmp_1800_fu_52030_p3.read() & xor_ln416_287_fu_52064_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_256_fu_52184_p2() {
    and_ln416_256_fu_52184_p2 = (tmp_1805_fu_52144_p3.read() & xor_ln416_288_fu_52178_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_257_fu_52298_p2() {
    and_ln416_257_fu_52298_p2 = (tmp_1810_fu_52258_p3.read() & xor_ln416_289_fu_52292_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_258_fu_52412_p2() {
    and_ln416_258_fu_52412_p2 = (tmp_1815_fu_52372_p3.read() & xor_ln416_290_fu_52406_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_259_fu_52526_p2() {
    and_ln416_259_fu_52526_p2 = (tmp_1820_fu_52486_p3.read() & xor_ln416_291_fu_52520_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_260_fu_52640_p2() {
    and_ln416_260_fu_52640_p2 = (tmp_1825_fu_52600_p3.read() & xor_ln416_292_fu_52634_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_261_fu_52754_p2() {
    and_ln416_261_fu_52754_p2 = (tmp_1830_fu_52714_p3.read() & xor_ln416_293_fu_52748_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_262_fu_52868_p2() {
    and_ln416_262_fu_52868_p2 = (tmp_1835_fu_52828_p3.read() & xor_ln416_294_fu_52862_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_263_fu_52982_p2() {
    and_ln416_263_fu_52982_p2 = (tmp_1840_fu_52942_p3.read() & xor_ln416_295_fu_52976_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_264_fu_53096_p2() {
    and_ln416_264_fu_53096_p2 = (tmp_1845_fu_53056_p3.read() & xor_ln416_296_fu_53090_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_265_fu_53210_p2() {
    and_ln416_265_fu_53210_p2 = (tmp_1850_fu_53170_p3.read() & xor_ln416_297_fu_53204_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_266_fu_53324_p2() {
    and_ln416_266_fu_53324_p2 = (tmp_1855_fu_53284_p3.read() & xor_ln416_298_fu_53318_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_267_fu_53438_p2() {
    and_ln416_267_fu_53438_p2 = (tmp_1860_fu_53398_p3.read() & xor_ln416_299_fu_53432_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_268_fu_53552_p2() {
    and_ln416_268_fu_53552_p2 = (tmp_1865_fu_53512_p3.read() & xor_ln416_300_fu_53546_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_269_fu_53666_p2() {
    and_ln416_269_fu_53666_p2 = (tmp_1870_fu_53626_p3.read() & xor_ln416_301_fu_53660_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_270_fu_53780_p2() {
    and_ln416_270_fu_53780_p2 = (tmp_1875_fu_53740_p3.read() & xor_ln416_302_fu_53774_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_271_fu_53894_p2() {
    and_ln416_271_fu_53894_p2 = (tmp_1880_fu_53854_p3.read() & xor_ln416_303_fu_53888_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_272_fu_54008_p2() {
    and_ln416_272_fu_54008_p2 = (tmp_1885_fu_53968_p3.read() & xor_ln416_304_fu_54002_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_273_fu_54122_p2() {
    and_ln416_273_fu_54122_p2 = (tmp_1890_fu_54082_p3.read() & xor_ln416_305_fu_54116_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_274_fu_54236_p2() {
    and_ln416_274_fu_54236_p2 = (tmp_1895_fu_54196_p3.read() & xor_ln416_306_fu_54230_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_275_fu_54350_p2() {
    and_ln416_275_fu_54350_p2 = (tmp_1900_fu_54310_p3.read() & xor_ln416_307_fu_54344_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_276_fu_54464_p2() {
    and_ln416_276_fu_54464_p2 = (tmp_1905_fu_54424_p3.read() & xor_ln416_308_fu_54458_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_277_fu_54578_p2() {
    and_ln416_277_fu_54578_p2 = (tmp_1910_fu_54538_p3.read() & xor_ln416_309_fu_54572_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_278_fu_54692_p2() {
    and_ln416_278_fu_54692_p2 = (tmp_1915_fu_54652_p3.read() & xor_ln416_310_fu_54686_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_279_fu_54806_p2() {
    and_ln416_279_fu_54806_p2 = (tmp_1920_fu_54766_p3.read() & xor_ln416_311_fu_54800_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_280_fu_54920_p2() {
    and_ln416_280_fu_54920_p2 = (tmp_1925_fu_54880_p3.read() & xor_ln416_312_fu_54914_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_281_fu_55034_p2() {
    and_ln416_281_fu_55034_p2 = (tmp_1930_fu_54994_p3.read() & xor_ln416_313_fu_55028_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_282_fu_55148_p2() {
    and_ln416_282_fu_55148_p2 = (tmp_1935_fu_55108_p3.read() & xor_ln416_314_fu_55142_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_283_fu_55262_p2() {
    and_ln416_283_fu_55262_p2 = (tmp_1940_fu_55222_p3.read() & xor_ln416_315_fu_55256_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_284_fu_55376_p2() {
    and_ln416_284_fu_55376_p2 = (tmp_1945_fu_55336_p3.read() & xor_ln416_316_fu_55370_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_285_fu_55490_p2() {
    and_ln416_285_fu_55490_p2 = (tmp_1950_fu_55450_p3.read() & xor_ln416_317_fu_55484_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_286_fu_55604_p2() {
    and_ln416_286_fu_55604_p2 = (tmp_1955_fu_55564_p3.read() & xor_ln416_318_fu_55598_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_287_fu_58554_p2() {
    and_ln416_287_fu_58554_p2 = (tmp_1960_fu_58514_p3.read() & xor_ln416_319_fu_58548_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_288_fu_58736_p2() {
    and_ln416_288_fu_58736_p2 = (tmp_1966_fu_58696_p3.read() & xor_ln416_320_fu_58730_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_289_fu_58918_p2() {
    and_ln416_289_fu_58918_p2 = (tmp_1972_fu_58878_p3.read() & xor_ln416_321_fu_58912_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_290_fu_59100_p2() {
    and_ln416_290_fu_59100_p2 = (tmp_1978_fu_59060_p3.read() & xor_ln416_322_fu_59094_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_291_fu_59282_p2() {
    and_ln416_291_fu_59282_p2 = (tmp_1984_fu_59242_p3.read() & xor_ln416_323_fu_59276_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_292_fu_59464_p2() {
    and_ln416_292_fu_59464_p2 = (tmp_1990_fu_59424_p3.read() & xor_ln416_324_fu_59458_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_293_fu_59646_p2() {
    and_ln416_293_fu_59646_p2 = (tmp_1996_fu_59606_p3.read() & xor_ln416_325_fu_59640_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_294_fu_59828_p2() {
    and_ln416_294_fu_59828_p2 = (tmp_2002_fu_59788_p3.read() & xor_ln416_326_fu_59822_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_295_fu_60010_p2() {
    and_ln416_295_fu_60010_p2 = (tmp_2008_fu_59970_p3.read() & xor_ln416_327_fu_60004_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_296_fu_60192_p2() {
    and_ln416_296_fu_60192_p2 = (tmp_2014_fu_60152_p3.read() & xor_ln416_328_fu_60186_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_297_fu_60374_p2() {
    and_ln416_297_fu_60374_p2 = (tmp_2020_fu_60334_p3.read() & xor_ln416_329_fu_60368_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_298_fu_60556_p2() {
    and_ln416_298_fu_60556_p2 = (tmp_2026_fu_60516_p3.read() & xor_ln416_330_fu_60550_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_299_fu_60738_p2() {
    and_ln416_299_fu_60738_p2 = (tmp_2032_fu_60698_p3.read() & xor_ln416_331_fu_60732_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_300_fu_60920_p2() {
    and_ln416_300_fu_60920_p2 = (tmp_2038_fu_60880_p3.read() & xor_ln416_332_fu_60914_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_301_fu_61102_p2() {
    and_ln416_301_fu_61102_p2 = (tmp_2044_fu_61062_p3.read() & xor_ln416_333_fu_61096_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_302_fu_61284_p2() {
    and_ln416_302_fu_61284_p2 = (tmp_2050_fu_61244_p3.read() & xor_ln416_334_fu_61278_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_303_fu_61466_p2() {
    and_ln416_303_fu_61466_p2 = (tmp_2056_fu_61426_p3.read() & xor_ln416_335_fu_61460_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_304_fu_61648_p2() {
    and_ln416_304_fu_61648_p2 = (tmp_2062_fu_61608_p3.read() & xor_ln416_336_fu_61642_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_305_fu_61830_p2() {
    and_ln416_305_fu_61830_p2 = (tmp_2068_fu_61790_p3.read() & xor_ln416_337_fu_61824_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_306_fu_62012_p2() {
    and_ln416_306_fu_62012_p2 = (tmp_2074_fu_61972_p3.read() & xor_ln416_338_fu_62006_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_307_fu_62194_p2() {
    and_ln416_307_fu_62194_p2 = (tmp_2080_fu_62154_p3.read() & xor_ln416_339_fu_62188_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_308_fu_62376_p2() {
    and_ln416_308_fu_62376_p2 = (tmp_2086_fu_62336_p3.read() & xor_ln416_340_fu_62370_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_309_fu_62558_p2() {
    and_ln416_309_fu_62558_p2 = (tmp_2092_fu_62518_p3.read() & xor_ln416_341_fu_62552_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_310_fu_62740_p2() {
    and_ln416_310_fu_62740_p2 = (tmp_2098_fu_62700_p3.read() & xor_ln416_342_fu_62734_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_311_fu_62922_p2() {
    and_ln416_311_fu_62922_p2 = (tmp_2104_fu_62882_p3.read() & xor_ln416_343_fu_62916_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_312_fu_63104_p2() {
    and_ln416_312_fu_63104_p2 = (tmp_2110_fu_63064_p3.read() & xor_ln416_344_fu_63098_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_313_fu_63286_p2() {
    and_ln416_313_fu_63286_p2 = (tmp_2116_fu_63246_p3.read() & xor_ln416_345_fu_63280_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_314_fu_63468_p2() {
    and_ln416_314_fu_63468_p2 = (tmp_2122_fu_63428_p3.read() & xor_ln416_346_fu_63462_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_315_fu_63650_p2() {
    and_ln416_315_fu_63650_p2 = (tmp_2128_fu_63610_p3.read() & xor_ln416_347_fu_63644_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_316_fu_63832_p2() {
    and_ln416_316_fu_63832_p2 = (tmp_2134_fu_63792_p3.read() & xor_ln416_348_fu_63826_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_317_fu_64014_p2() {
    and_ln416_317_fu_64014_p2 = (tmp_2140_fu_63974_p3.read() & xor_ln416_349_fu_64008_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_318_fu_64196_p2() {
    and_ln416_318_fu_64196_p2 = (tmp_2146_fu_64156_p3.read() & xor_ln416_350_fu_64190_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_319_fu_72393_p2() {
    and_ln416_319_fu_72393_p2 = (tmp_2216_fu_72364_p3.read() & xor_ln416_351_fu_72387_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_320_fu_72533_p2() {
    and_ln416_320_fu_72533_p2 = (tmp_2221_fu_72504_p3.read() & xor_ln416_352_fu_72527_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_321_fu_72673_p2() {
    and_ln416_321_fu_72673_p2 = (tmp_2226_fu_72644_p3.read() & xor_ln416_353_fu_72667_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_322_fu_72813_p2() {
    and_ln416_322_fu_72813_p2 = (tmp_2231_fu_72784_p3.read() & xor_ln416_354_fu_72807_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_323_fu_72953_p2() {
    and_ln416_323_fu_72953_p2 = (tmp_2236_fu_72924_p3.read() & xor_ln416_355_fu_72947_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_324_fu_73093_p2() {
    and_ln416_324_fu_73093_p2 = (tmp_2241_fu_73064_p3.read() & xor_ln416_356_fu_73087_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_325_fu_73233_p2() {
    and_ln416_325_fu_73233_p2 = (tmp_2246_fu_73204_p3.read() & xor_ln416_357_fu_73227_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_326_fu_73373_p2() {
    and_ln416_326_fu_73373_p2 = (tmp_2251_fu_73344_p3.read() & xor_ln416_358_fu_73367_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_327_fu_73513_p2() {
    and_ln416_327_fu_73513_p2 = (tmp_2256_fu_73484_p3.read() & xor_ln416_359_fu_73507_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_328_fu_73653_p2() {
    and_ln416_328_fu_73653_p2 = (tmp_2261_fu_73624_p3.read() & xor_ln416_360_fu_73647_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_329_fu_73793_p2() {
    and_ln416_329_fu_73793_p2 = (tmp_2266_fu_73764_p3.read() & xor_ln416_361_fu_73787_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_330_fu_73933_p2() {
    and_ln416_330_fu_73933_p2 = (tmp_2271_fu_73904_p3.read() & xor_ln416_362_fu_73927_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_331_fu_74073_p2() {
    and_ln416_331_fu_74073_p2 = (tmp_2276_fu_74044_p3.read() & xor_ln416_363_fu_74067_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_332_fu_74213_p2() {
    and_ln416_332_fu_74213_p2 = (tmp_2281_fu_74184_p3.read() & xor_ln416_364_fu_74207_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_333_fu_74353_p2() {
    and_ln416_333_fu_74353_p2 = (tmp_2286_fu_74324_p3.read() & xor_ln416_365_fu_74347_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_334_fu_74493_p2() {
    and_ln416_334_fu_74493_p2 = (tmp_2291_fu_74464_p3.read() & xor_ln416_366_fu_74487_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_335_fu_74633_p2() {
    and_ln416_335_fu_74633_p2 = (tmp_2296_fu_74604_p3.read() & xor_ln416_367_fu_74627_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_336_fu_74773_p2() {
    and_ln416_336_fu_74773_p2 = (tmp_2301_fu_74744_p3.read() & xor_ln416_368_fu_74767_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_337_fu_74913_p2() {
    and_ln416_337_fu_74913_p2 = (tmp_2306_fu_74884_p3.read() & xor_ln416_369_fu_74907_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_338_fu_75053_p2() {
    and_ln416_338_fu_75053_p2 = (tmp_2311_fu_75024_p3.read() & xor_ln416_370_fu_75047_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_339_fu_75193_p2() {
    and_ln416_339_fu_75193_p2 = (tmp_2316_fu_75164_p3.read() & xor_ln416_371_fu_75187_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_340_fu_75333_p2() {
    and_ln416_340_fu_75333_p2 = (tmp_2321_fu_75304_p3.read() & xor_ln416_372_fu_75327_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_341_fu_75473_p2() {
    and_ln416_341_fu_75473_p2 = (tmp_2326_fu_75444_p3.read() & xor_ln416_373_fu_75467_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_342_fu_75613_p2() {
    and_ln416_342_fu_75613_p2 = (tmp_2331_fu_75584_p3.read() & xor_ln416_374_fu_75607_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_343_fu_75753_p2() {
    and_ln416_343_fu_75753_p2 = (tmp_2336_fu_75724_p3.read() & xor_ln416_375_fu_75747_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_344_fu_75893_p2() {
    and_ln416_344_fu_75893_p2 = (tmp_2341_fu_75864_p3.read() & xor_ln416_376_fu_75887_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_345_fu_76033_p2() {
    and_ln416_345_fu_76033_p2 = (tmp_2346_fu_76004_p3.read() & xor_ln416_377_fu_76027_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_346_fu_76173_p2() {
    and_ln416_346_fu_76173_p2 = (tmp_2351_fu_76144_p3.read() & xor_ln416_378_fu_76167_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_347_fu_76313_p2() {
    and_ln416_347_fu_76313_p2 = (tmp_2356_fu_76284_p3.read() & xor_ln416_379_fu_76307_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_348_fu_76453_p2() {
    and_ln416_348_fu_76453_p2 = (tmp_2361_fu_76424_p3.read() & xor_ln416_380_fu_76447_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_349_fu_76593_p2() {
    and_ln416_349_fu_76593_p2 = (tmp_2366_fu_76564_p3.read() & xor_ln416_381_fu_76587_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_350_fu_76733_p2() {
    and_ln416_350_fu_76733_p2 = (tmp_2371_fu_76704_p3.read() & xor_ln416_382_fu_76727_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_351_fu_11346_p2() {
    and_ln416_351_fu_11346_p2 = (tmp_652_reg_81161.read() & or_ln416_fu_11340_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_352_fu_11524_p2() {
    and_ln416_352_fu_11524_p2 = (tmp_665_reg_81195.read() & or_ln416_1_fu_11518_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_353_fu_11702_p2() {
    and_ln416_353_fu_11702_p2 = (tmp_678_reg_81229.read() & or_ln416_2_fu_11696_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_354_fu_11880_p2() {
    and_ln416_354_fu_11880_p2 = (tmp_691_reg_81263.read() & or_ln416_3_fu_11874_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_355_fu_12058_p2() {
    and_ln416_355_fu_12058_p2 = (tmp_704_reg_81297.read() & or_ln416_4_fu_12052_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_356_fu_12236_p2() {
    and_ln416_356_fu_12236_p2 = (tmp_717_reg_81331.read() & or_ln416_5_fu_12230_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_357_fu_12414_p2() {
    and_ln416_357_fu_12414_p2 = (tmp_730_reg_81365.read() & or_ln416_6_fu_12408_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_358_fu_12592_p2() {
    and_ln416_358_fu_12592_p2 = (tmp_743_reg_81399.read() & or_ln416_7_fu_12586_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_359_fu_12770_p2() {
    and_ln416_359_fu_12770_p2 = (tmp_756_reg_81433.read() & or_ln416_8_fu_12764_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_360_fu_12948_p2() {
    and_ln416_360_fu_12948_p2 = (tmp_769_reg_81467.read() & or_ln416_9_fu_12942_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_361_fu_13126_p2() {
    and_ln416_361_fu_13126_p2 = (tmp_782_reg_81501.read() & or_ln416_10_fu_13120_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_362_fu_13304_p2() {
    and_ln416_362_fu_13304_p2 = (tmp_795_reg_81535.read() & or_ln416_11_fu_13298_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_363_fu_13482_p2() {
    and_ln416_363_fu_13482_p2 = (tmp_808_reg_81569.read() & or_ln416_12_fu_13476_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_364_fu_13660_p2() {
    and_ln416_364_fu_13660_p2 = (tmp_821_reg_81603.read() & or_ln416_13_fu_13654_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_365_fu_13838_p2() {
    and_ln416_365_fu_13838_p2 = (tmp_834_reg_81637.read() & or_ln416_14_fu_13832_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_366_fu_14016_p2() {
    and_ln416_366_fu_14016_p2 = (tmp_847_reg_81671.read() & or_ln416_15_fu_14010_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_367_fu_14194_p2() {
    and_ln416_367_fu_14194_p2 = (tmp_860_reg_81705.read() & or_ln416_16_fu_14188_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_368_fu_14372_p2() {
    and_ln416_368_fu_14372_p2 = (tmp_873_reg_81739.read() & or_ln416_17_fu_14366_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_369_fu_14550_p2() {
    and_ln416_369_fu_14550_p2 = (tmp_886_reg_81773.read() & or_ln416_18_fu_14544_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_370_fu_14728_p2() {
    and_ln416_370_fu_14728_p2 = (tmp_899_reg_81807.read() & or_ln416_19_fu_14722_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_371_fu_14906_p2() {
    and_ln416_371_fu_14906_p2 = (tmp_912_reg_81841.read() & or_ln416_20_fu_14900_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_372_fu_15084_p2() {
    and_ln416_372_fu_15084_p2 = (tmp_925_reg_81875.read() & or_ln416_21_fu_15078_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_373_fu_15262_p2() {
    and_ln416_373_fu_15262_p2 = (tmp_938_reg_81909.read() & or_ln416_22_fu_15256_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_374_fu_15440_p2() {
    and_ln416_374_fu_15440_p2 = (tmp_951_reg_81943.read() & or_ln416_23_fu_15434_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_375_fu_15618_p2() {
    and_ln416_375_fu_15618_p2 = (tmp_964_reg_81977.read() & or_ln416_24_fu_15612_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_376_fu_15796_p2() {
    and_ln416_376_fu_15796_p2 = (tmp_977_reg_82011.read() & or_ln416_25_fu_15790_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_377_fu_15974_p2() {
    and_ln416_377_fu_15974_p2 = (tmp_990_reg_82045.read() & or_ln416_26_fu_15968_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_378_fu_16152_p2() {
    and_ln416_378_fu_16152_p2 = (tmp_1003_reg_82079.read() & or_ln416_27_fu_16146_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_379_fu_16330_p2() {
    and_ln416_379_fu_16330_p2 = (tmp_1016_reg_82113.read() & or_ln416_28_fu_16324_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_380_fu_16508_p2() {
    and_ln416_380_fu_16508_p2 = (tmp_1029_reg_82147.read() & or_ln416_29_fu_16502_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_381_fu_16686_p2() {
    and_ln416_381_fu_16686_p2 = (tmp_1042_reg_82181.read() & or_ln416_30_fu_16680_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_382_fu_16864_p2() {
    and_ln416_382_fu_16864_p2 = (tmp_1055_reg_82215.read() & or_ln416_31_fu_16858_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_64_fu_17056_p2() {
    and_ln416_64_fu_17056_p2 = (tmp_655_fu_17025_p3.read() & xor_ln416_fu_17050_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_65_fu_11481_p2() {
    and_ln416_65_fu_11481_p2 = (tmp_661_reg_81184.read() & xor_ln416_66_fu_11475_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_66_fu_17301_p2() {
    and_ln416_66_fu_17301_p2 = (tmp_668_fu_17270_p3.read() & xor_ln416_68_fu_17295_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_67_fu_11659_p2() {
    and_ln416_67_fu_11659_p2 = (tmp_674_reg_81218.read() & xor_ln416_69_fu_11653_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_68_fu_17546_p2() {
    and_ln416_68_fu_17546_p2 = (tmp_681_fu_17515_p3.read() & xor_ln416_71_fu_17540_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_69_fu_11837_p2() {
    and_ln416_69_fu_11837_p2 = (tmp_687_reg_81252.read() & xor_ln416_72_fu_11831_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_70_fu_17791_p2() {
    and_ln416_70_fu_17791_p2 = (tmp_694_fu_17760_p3.read() & xor_ln416_74_fu_17785_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_71_fu_12015_p2() {
    and_ln416_71_fu_12015_p2 = (tmp_700_reg_81286.read() & xor_ln416_75_fu_12009_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_72_fu_18036_p2() {
    and_ln416_72_fu_18036_p2 = (tmp_707_fu_18005_p3.read() & xor_ln416_77_fu_18030_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_73_fu_12193_p2() {
    and_ln416_73_fu_12193_p2 = (tmp_713_reg_81320.read() & xor_ln416_78_fu_12187_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_74_fu_18281_p2() {
    and_ln416_74_fu_18281_p2 = (tmp_720_fu_18250_p3.read() & xor_ln416_80_fu_18275_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_75_fu_12371_p2() {
    and_ln416_75_fu_12371_p2 = (tmp_726_reg_81354.read() & xor_ln416_81_fu_12365_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_76_fu_18526_p2() {
    and_ln416_76_fu_18526_p2 = (tmp_733_fu_18495_p3.read() & xor_ln416_83_fu_18520_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_77_fu_12549_p2() {
    and_ln416_77_fu_12549_p2 = (tmp_739_reg_81388.read() & xor_ln416_84_fu_12543_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_78_fu_18771_p2() {
    and_ln416_78_fu_18771_p2 = (tmp_746_fu_18740_p3.read() & xor_ln416_86_fu_18765_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_79_fu_12727_p2() {
    and_ln416_79_fu_12727_p2 = (tmp_752_reg_81422.read() & xor_ln416_87_fu_12721_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_80_fu_19016_p2() {
    and_ln416_80_fu_19016_p2 = (tmp_759_fu_18985_p3.read() & xor_ln416_89_fu_19010_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_81_fu_12905_p2() {
    and_ln416_81_fu_12905_p2 = (tmp_765_reg_81456.read() & xor_ln416_90_fu_12899_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_82_fu_19261_p2() {
    and_ln416_82_fu_19261_p2 = (tmp_772_fu_19230_p3.read() & xor_ln416_92_fu_19255_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_83_fu_13083_p2() {
    and_ln416_83_fu_13083_p2 = (tmp_778_reg_81490.read() & xor_ln416_93_fu_13077_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_84_fu_19506_p2() {
    and_ln416_84_fu_19506_p2 = (tmp_785_fu_19475_p3.read() & xor_ln416_95_fu_19500_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_85_fu_13261_p2() {
    and_ln416_85_fu_13261_p2 = (tmp_791_reg_81524.read() & xor_ln416_96_fu_13255_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_86_fu_19751_p2() {
    and_ln416_86_fu_19751_p2 = (tmp_798_fu_19720_p3.read() & xor_ln416_98_fu_19745_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_87_fu_13439_p2() {
    and_ln416_87_fu_13439_p2 = (tmp_804_reg_81558.read() & xor_ln416_99_fu_13433_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_88_fu_19996_p2() {
    and_ln416_88_fu_19996_p2 = (tmp_811_fu_19965_p3.read() & xor_ln416_101_fu_19990_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_89_fu_13617_p2() {
    and_ln416_89_fu_13617_p2 = (tmp_817_reg_81592.read() & xor_ln416_102_fu_13611_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_90_fu_20241_p2() {
    and_ln416_90_fu_20241_p2 = (tmp_824_fu_20210_p3.read() & xor_ln416_104_fu_20235_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_91_fu_13795_p2() {
    and_ln416_91_fu_13795_p2 = (tmp_830_reg_81626.read() & xor_ln416_105_fu_13789_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_92_fu_20486_p2() {
    and_ln416_92_fu_20486_p2 = (tmp_837_fu_20455_p3.read() & xor_ln416_107_fu_20480_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_93_fu_13973_p2() {
    and_ln416_93_fu_13973_p2 = (tmp_843_reg_81660.read() & xor_ln416_108_fu_13967_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_94_fu_20731_p2() {
    and_ln416_94_fu_20731_p2 = (tmp_850_fu_20700_p3.read() & xor_ln416_110_fu_20725_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_95_fu_14151_p2() {
    and_ln416_95_fu_14151_p2 = (tmp_856_reg_81694.read() & xor_ln416_111_fu_14145_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_96_fu_20976_p2() {
    and_ln416_96_fu_20976_p2 = (tmp_863_fu_20945_p3.read() & xor_ln416_113_fu_20970_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_97_fu_14329_p2() {
    and_ln416_97_fu_14329_p2 = (tmp_869_reg_81728.read() & xor_ln416_114_fu_14323_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_98_fu_21221_p2() {
    and_ln416_98_fu_21221_p2 = (tmp_876_fu_21190_p3.read() & xor_ln416_116_fu_21215_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_99_fu_14507_p2() {
    and_ln416_99_fu_14507_p2 = (tmp_882_reg_81762.read() & xor_ln416_117_fu_14501_p2.read());
}

void bn_relu_sc_relu::thread_and_ln416_fu_11303_p2() {
    and_ln416_fu_11303_p2 = (tmp_648_reg_81150.read() & xor_ln416_64_fu_11297_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_32_fu_72569_p2() {
    and_ln700_32_fu_72569_p2 = (tmp_2220_reg_92777.read() & xor_ln781_32_fu_72563_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_33_fu_72709_p2() {
    and_ln700_33_fu_72709_p2 = (tmp_2225_reg_92805.read() & xor_ln781_33_fu_72703_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_34_fu_72849_p2() {
    and_ln700_34_fu_72849_p2 = (tmp_2230_reg_92833.read() & xor_ln781_34_fu_72843_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_35_fu_72989_p2() {
    and_ln700_35_fu_72989_p2 = (tmp_2235_reg_92861.read() & xor_ln781_35_fu_72983_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_36_fu_73129_p2() {
    and_ln700_36_fu_73129_p2 = (tmp_2240_reg_92889.read() & xor_ln781_36_fu_73123_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_37_fu_73269_p2() {
    and_ln700_37_fu_73269_p2 = (tmp_2245_reg_92917.read() & xor_ln781_37_fu_73263_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_38_fu_73409_p2() {
    and_ln700_38_fu_73409_p2 = (tmp_2250_reg_92945.read() & xor_ln781_38_fu_73403_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_39_fu_73549_p2() {
    and_ln700_39_fu_73549_p2 = (tmp_2255_reg_92973.read() & xor_ln781_39_fu_73543_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_40_fu_73689_p2() {
    and_ln700_40_fu_73689_p2 = (tmp_2260_reg_93001.read() & xor_ln781_40_fu_73683_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_41_fu_73829_p2() {
    and_ln700_41_fu_73829_p2 = (tmp_2265_reg_93029.read() & xor_ln781_41_fu_73823_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_42_fu_73969_p2() {
    and_ln700_42_fu_73969_p2 = (tmp_2270_reg_93057.read() & xor_ln781_42_fu_73963_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_43_fu_74109_p2() {
    and_ln700_43_fu_74109_p2 = (tmp_2275_reg_93085.read() & xor_ln781_43_fu_74103_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_44_fu_74249_p2() {
    and_ln700_44_fu_74249_p2 = (tmp_2280_reg_93113.read() & xor_ln781_44_fu_74243_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_45_fu_74389_p2() {
    and_ln700_45_fu_74389_p2 = (tmp_2285_reg_93141.read() & xor_ln781_45_fu_74383_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_46_fu_74529_p2() {
    and_ln700_46_fu_74529_p2 = (tmp_2290_reg_93169.read() & xor_ln781_46_fu_74523_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_47_fu_74669_p2() {
    and_ln700_47_fu_74669_p2 = (tmp_2295_reg_93197.read() & xor_ln781_47_fu_74663_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_48_fu_74809_p2() {
    and_ln700_48_fu_74809_p2 = (tmp_2300_reg_93225.read() & xor_ln781_48_fu_74803_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_49_fu_74949_p2() {
    and_ln700_49_fu_74949_p2 = (tmp_2305_reg_93253.read() & xor_ln781_49_fu_74943_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_50_fu_75089_p2() {
    and_ln700_50_fu_75089_p2 = (tmp_2310_reg_93281.read() & xor_ln781_50_fu_75083_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_51_fu_75229_p2() {
    and_ln700_51_fu_75229_p2 = (tmp_2315_reg_93309.read() & xor_ln781_51_fu_75223_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_52_fu_75369_p2() {
    and_ln700_52_fu_75369_p2 = (tmp_2320_reg_93337.read() & xor_ln781_52_fu_75363_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_53_fu_75509_p2() {
    and_ln700_53_fu_75509_p2 = (tmp_2325_reg_93365.read() & xor_ln781_53_fu_75503_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_54_fu_75649_p2() {
    and_ln700_54_fu_75649_p2 = (tmp_2330_reg_93393.read() & xor_ln781_54_fu_75643_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_55_fu_75789_p2() {
    and_ln700_55_fu_75789_p2 = (tmp_2335_reg_93421.read() & xor_ln781_55_fu_75783_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_56_fu_75929_p2() {
    and_ln700_56_fu_75929_p2 = (tmp_2340_reg_93449.read() & xor_ln781_56_fu_75923_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_57_fu_76069_p2() {
    and_ln700_57_fu_76069_p2 = (tmp_2345_reg_93477.read() & xor_ln781_57_fu_76063_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_58_fu_76209_p2() {
    and_ln700_58_fu_76209_p2 = (tmp_2350_reg_93505.read() & xor_ln781_58_fu_76203_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_59_fu_76349_p2() {
    and_ln700_59_fu_76349_p2 = (tmp_2355_reg_93533.read() & xor_ln781_59_fu_76343_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_60_fu_76489_p2() {
    and_ln700_60_fu_76489_p2 = (tmp_2360_reg_93561.read() & xor_ln781_60_fu_76483_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_61_fu_76629_p2() {
    and_ln700_61_fu_76629_p2 = (tmp_2365_reg_93589.read() & xor_ln781_61_fu_76623_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_62_fu_76769_p2() {
    and_ln700_62_fu_76769_p2 = (tmp_2370_reg_93617.read() & xor_ln781_62_fu_76763_p2.read());
}

void bn_relu_sc_relu::thread_and_ln700_fu_72429_p2() {
    and_ln700_fu_72429_p2 = (tmp_2215_reg_92749.read() & xor_ln781_fu_72423_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_100_fu_41774_p2() {
    and_ln779_100_fu_41774_p2 = (icmp_ln879_233_fu_41738_p2.read() & xor_ln779_197_fu_41768_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_101_fu_41956_p2() {
    and_ln779_101_fu_41956_p2 = (icmp_ln879_235_fu_41920_p2.read() & xor_ln779_198_fu_41950_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_102_fu_42138_p2() {
    and_ln779_102_fu_42138_p2 = (icmp_ln879_237_fu_42102_p2.read() & xor_ln779_199_fu_42132_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_103_fu_42320_p2() {
    and_ln779_103_fu_42320_p2 = (icmp_ln879_239_fu_42284_p2.read() & xor_ln779_200_fu_42314_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_104_fu_42502_p2() {
    and_ln779_104_fu_42502_p2 = (icmp_ln879_241_fu_42466_p2.read() & xor_ln779_201_fu_42496_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_105_fu_42684_p2() {
    and_ln779_105_fu_42684_p2 = (icmp_ln879_243_fu_42648_p2.read() & xor_ln779_202_fu_42678_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_106_fu_42866_p2() {
    and_ln779_106_fu_42866_p2 = (icmp_ln879_245_fu_42830_p2.read() & xor_ln779_203_fu_42860_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_107_fu_43048_p2() {
    and_ln779_107_fu_43048_p2 = (icmp_ln879_247_fu_43012_p2.read() & xor_ln779_204_fu_43042_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_108_fu_43230_p2() {
    and_ln779_108_fu_43230_p2 = (icmp_ln879_249_fu_43194_p2.read() & xor_ln779_205_fu_43224_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_109_fu_43412_p2() {
    and_ln779_109_fu_43412_p2 = (icmp_ln879_251_fu_43376_p2.read() & xor_ln779_206_fu_43406_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_110_fu_43594_p2() {
    and_ln779_110_fu_43594_p2 = (icmp_ln879_253_fu_43558_p2.read() & xor_ln779_207_fu_43588_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_111_fu_43776_p2() {
    and_ln779_111_fu_43776_p2 = (icmp_ln879_255_fu_43740_p2.read() & xor_ln779_208_fu_43770_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_112_fu_43958_p2() {
    and_ln779_112_fu_43958_p2 = (icmp_ln879_257_fu_43922_p2.read() & xor_ln779_209_fu_43952_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_113_fu_44140_p2() {
    and_ln779_113_fu_44140_p2 = (icmp_ln879_259_fu_44104_p2.read() & xor_ln779_210_fu_44134_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_114_fu_44322_p2() {
    and_ln779_114_fu_44322_p2 = (icmp_ln879_261_fu_44286_p2.read() & xor_ln779_211_fu_44316_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_115_fu_44504_p2() {
    and_ln779_115_fu_44504_p2 = (icmp_ln879_263_fu_44468_p2.read() & xor_ln779_212_fu_44498_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_116_fu_44686_p2() {
    and_ln779_116_fu_44686_p2 = (icmp_ln879_265_fu_44650_p2.read() & xor_ln779_213_fu_44680_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_117_fu_44868_p2() {
    and_ln779_117_fu_44868_p2 = (icmp_ln879_267_fu_44832_p2.read() & xor_ln779_214_fu_44862_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_118_fu_45050_p2() {
    and_ln779_118_fu_45050_p2 = (icmp_ln879_269_fu_45014_p2.read() & xor_ln779_215_fu_45044_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_119_fu_45232_p2() {
    and_ln779_119_fu_45232_p2 = (icmp_ln879_271_fu_45196_p2.read() & xor_ln779_216_fu_45226_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_120_fu_45414_p2() {
    and_ln779_120_fu_45414_p2 = (icmp_ln879_273_fu_45378_p2.read() & xor_ln779_217_fu_45408_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_121_fu_45596_p2() {
    and_ln779_121_fu_45596_p2 = (icmp_ln879_275_fu_45560_p2.read() & xor_ln779_218_fu_45590_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_122_fu_45778_p2() {
    and_ln779_122_fu_45778_p2 = (icmp_ln879_277_fu_45742_p2.read() & xor_ln779_219_fu_45772_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_123_fu_45960_p2() {
    and_ln779_123_fu_45960_p2 = (icmp_ln879_279_fu_45924_p2.read() & xor_ln779_220_fu_45954_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_124_fu_46142_p2() {
    and_ln779_124_fu_46142_p2 = (icmp_ln879_281_fu_46106_p2.read() & xor_ln779_221_fu_46136_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_125_fu_46324_p2() {
    and_ln779_125_fu_46324_p2 = (icmp_ln879_283_fu_46288_p2.read() & xor_ln779_222_fu_46318_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_126_fu_46506_p2() {
    and_ln779_126_fu_46506_p2 = (icmp_ln879_285_fu_46470_p2.read() & xor_ln779_223_fu_46500_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_127_fu_58620_p2() {
    and_ln779_127_fu_58620_p2 = (icmp_ln879_287_fu_58578_p2.read() & xor_ln779_224_fu_58614_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_128_fu_58802_p2() {
    and_ln779_128_fu_58802_p2 = (icmp_ln879_289_fu_58760_p2.read() & xor_ln779_225_fu_58796_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_129_fu_58984_p2() {
    and_ln779_129_fu_58984_p2 = (icmp_ln879_291_fu_58942_p2.read() & xor_ln779_226_fu_58978_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_130_fu_59166_p2() {
    and_ln779_130_fu_59166_p2 = (icmp_ln879_293_fu_59124_p2.read() & xor_ln779_227_fu_59160_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_131_fu_59348_p2() {
    and_ln779_131_fu_59348_p2 = (icmp_ln879_295_fu_59306_p2.read() & xor_ln779_228_fu_59342_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_132_fu_59530_p2() {
    and_ln779_132_fu_59530_p2 = (icmp_ln879_297_fu_59488_p2.read() & xor_ln779_229_fu_59524_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_133_fu_59712_p2() {
    and_ln779_133_fu_59712_p2 = (icmp_ln879_299_fu_59670_p2.read() & xor_ln779_230_fu_59706_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_134_fu_59894_p2() {
    and_ln779_134_fu_59894_p2 = (icmp_ln879_301_fu_59852_p2.read() & xor_ln779_231_fu_59888_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_135_fu_60076_p2() {
    and_ln779_135_fu_60076_p2 = (icmp_ln879_303_fu_60034_p2.read() & xor_ln779_232_fu_60070_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_136_fu_60258_p2() {
    and_ln779_136_fu_60258_p2 = (icmp_ln879_305_fu_60216_p2.read() & xor_ln779_233_fu_60252_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_137_fu_60440_p2() {
    and_ln779_137_fu_60440_p2 = (icmp_ln879_307_fu_60398_p2.read() & xor_ln779_234_fu_60434_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_138_fu_60622_p2() {
    and_ln779_138_fu_60622_p2 = (icmp_ln879_309_fu_60580_p2.read() & xor_ln779_235_fu_60616_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_139_fu_60804_p2() {
    and_ln779_139_fu_60804_p2 = (icmp_ln879_311_fu_60762_p2.read() & xor_ln779_236_fu_60798_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_140_fu_60986_p2() {
    and_ln779_140_fu_60986_p2 = (icmp_ln879_313_fu_60944_p2.read() & xor_ln779_237_fu_60980_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_141_fu_61168_p2() {
    and_ln779_141_fu_61168_p2 = (icmp_ln879_315_fu_61126_p2.read() & xor_ln779_238_fu_61162_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_142_fu_61350_p2() {
    and_ln779_142_fu_61350_p2 = (icmp_ln879_317_fu_61308_p2.read() & xor_ln779_239_fu_61344_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_143_fu_61532_p2() {
    and_ln779_143_fu_61532_p2 = (icmp_ln879_319_fu_61490_p2.read() & xor_ln779_240_fu_61526_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_144_fu_61714_p2() {
    and_ln779_144_fu_61714_p2 = (icmp_ln879_321_fu_61672_p2.read() & xor_ln779_241_fu_61708_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_145_fu_61896_p2() {
    and_ln779_145_fu_61896_p2 = (icmp_ln879_323_fu_61854_p2.read() & xor_ln779_242_fu_61890_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_146_fu_62078_p2() {
    and_ln779_146_fu_62078_p2 = (icmp_ln879_325_fu_62036_p2.read() & xor_ln779_243_fu_62072_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_147_fu_62260_p2() {
    and_ln779_147_fu_62260_p2 = (icmp_ln879_327_fu_62218_p2.read() & xor_ln779_244_fu_62254_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_148_fu_62442_p2() {
    and_ln779_148_fu_62442_p2 = (icmp_ln879_329_fu_62400_p2.read() & xor_ln779_245_fu_62436_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_149_fu_62624_p2() {
    and_ln779_149_fu_62624_p2 = (icmp_ln879_331_fu_62582_p2.read() & xor_ln779_246_fu_62618_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_150_fu_62806_p2() {
    and_ln779_150_fu_62806_p2 = (icmp_ln879_333_fu_62764_p2.read() & xor_ln779_247_fu_62800_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_151_fu_62988_p2() {
    and_ln779_151_fu_62988_p2 = (icmp_ln879_335_fu_62946_p2.read() & xor_ln779_248_fu_62982_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_152_fu_63170_p2() {
    and_ln779_152_fu_63170_p2 = (icmp_ln879_337_fu_63128_p2.read() & xor_ln779_249_fu_63164_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_153_fu_63352_p2() {
    and_ln779_153_fu_63352_p2 = (icmp_ln879_339_fu_63310_p2.read() & xor_ln779_250_fu_63346_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_154_fu_63534_p2() {
    and_ln779_154_fu_63534_p2 = (icmp_ln879_341_fu_63492_p2.read() & xor_ln779_251_fu_63528_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_155_fu_63716_p2() {
    and_ln779_155_fu_63716_p2 = (icmp_ln879_343_fu_63674_p2.read() & xor_ln779_252_fu_63710_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_156_fu_63898_p2() {
    and_ln779_156_fu_63898_p2 = (icmp_ln879_345_fu_63856_p2.read() & xor_ln779_253_fu_63892_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_157_fu_64080_p2() {
    and_ln779_157_fu_64080_p2 = (icmp_ln879_347_fu_64038_p2.read() & xor_ln779_254_fu_64074_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_158_fu_64262_p2() {
    and_ln779_158_fu_64262_p2 = (icmp_ln879_349_fu_64220_p2.read() & xor_ln779_255_fu_64256_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_32_fu_17375_p2() {
    and_ln779_32_fu_17375_p2 = (icmp_ln879_97_fu_17325_p2.read() & xor_ln779_99_fu_17369_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_33_fu_17620_p2() {
    and_ln779_33_fu_17620_p2 = (icmp_ln879_99_fu_17570_p2.read() & xor_ln779_101_fu_17614_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_34_fu_17865_p2() {
    and_ln779_34_fu_17865_p2 = (icmp_ln879_101_fu_17815_p2.read() & xor_ln779_103_fu_17859_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_35_fu_18110_p2() {
    and_ln779_35_fu_18110_p2 = (icmp_ln879_103_fu_18060_p2.read() & xor_ln779_105_fu_18104_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_36_fu_18355_p2() {
    and_ln779_36_fu_18355_p2 = (icmp_ln879_105_fu_18305_p2.read() & xor_ln779_107_fu_18349_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_37_fu_18600_p2() {
    and_ln779_37_fu_18600_p2 = (icmp_ln879_107_fu_18550_p2.read() & xor_ln779_109_fu_18594_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_38_fu_18845_p2() {
    and_ln779_38_fu_18845_p2 = (icmp_ln879_109_fu_18795_p2.read() & xor_ln779_111_fu_18839_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_39_fu_19090_p2() {
    and_ln779_39_fu_19090_p2 = (icmp_ln879_111_fu_19040_p2.read() & xor_ln779_113_fu_19084_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_40_fu_19335_p2() {
    and_ln779_40_fu_19335_p2 = (icmp_ln879_113_fu_19285_p2.read() & xor_ln779_115_fu_19329_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_41_fu_19580_p2() {
    and_ln779_41_fu_19580_p2 = (icmp_ln879_115_fu_19530_p2.read() & xor_ln779_117_fu_19574_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_42_fu_19825_p2() {
    and_ln779_42_fu_19825_p2 = (icmp_ln879_117_fu_19775_p2.read() & xor_ln779_119_fu_19819_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_43_fu_20070_p2() {
    and_ln779_43_fu_20070_p2 = (icmp_ln879_119_fu_20020_p2.read() & xor_ln779_121_fu_20064_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_44_fu_20315_p2() {
    and_ln779_44_fu_20315_p2 = (icmp_ln879_121_fu_20265_p2.read() & xor_ln779_123_fu_20309_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_45_fu_20560_p2() {
    and_ln779_45_fu_20560_p2 = (icmp_ln879_123_fu_20510_p2.read() & xor_ln779_125_fu_20554_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_46_fu_20805_p2() {
    and_ln779_46_fu_20805_p2 = (icmp_ln879_125_fu_20755_p2.read() & xor_ln779_127_fu_20799_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_47_fu_21050_p2() {
    and_ln779_47_fu_21050_p2 = (icmp_ln879_127_fu_21000_p2.read() & xor_ln779_129_fu_21044_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_48_fu_21295_p2() {
    and_ln779_48_fu_21295_p2 = (icmp_ln879_129_fu_21245_p2.read() & xor_ln779_131_fu_21289_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_49_fu_21540_p2() {
    and_ln779_49_fu_21540_p2 = (icmp_ln879_131_fu_21490_p2.read() & xor_ln779_133_fu_21534_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_50_fu_21785_p2() {
    and_ln779_50_fu_21785_p2 = (icmp_ln879_133_fu_21735_p2.read() & xor_ln779_135_fu_21779_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_51_fu_22030_p2() {
    and_ln779_51_fu_22030_p2 = (icmp_ln879_135_fu_21980_p2.read() & xor_ln779_137_fu_22024_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_52_fu_22275_p2() {
    and_ln779_52_fu_22275_p2 = (icmp_ln879_137_fu_22225_p2.read() & xor_ln779_139_fu_22269_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_53_fu_22520_p2() {
    and_ln779_53_fu_22520_p2 = (icmp_ln879_139_fu_22470_p2.read() & xor_ln779_141_fu_22514_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_54_fu_22765_p2() {
    and_ln779_54_fu_22765_p2 = (icmp_ln879_141_fu_22715_p2.read() & xor_ln779_143_fu_22759_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_55_fu_23010_p2() {
    and_ln779_55_fu_23010_p2 = (icmp_ln879_143_fu_22960_p2.read() & xor_ln779_145_fu_23004_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_56_fu_23255_p2() {
    and_ln779_56_fu_23255_p2 = (icmp_ln879_145_fu_23205_p2.read() & xor_ln779_147_fu_23249_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_57_fu_23500_p2() {
    and_ln779_57_fu_23500_p2 = (icmp_ln879_147_fu_23450_p2.read() & xor_ln779_149_fu_23494_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_58_fu_23745_p2() {
    and_ln779_58_fu_23745_p2 = (icmp_ln879_149_fu_23695_p2.read() & xor_ln779_151_fu_23739_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_59_fu_23990_p2() {
    and_ln779_59_fu_23990_p2 = (icmp_ln879_151_fu_23940_p2.read() & xor_ln779_153_fu_23984_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_60_fu_24235_p2() {
    and_ln779_60_fu_24235_p2 = (icmp_ln879_153_fu_24185_p2.read() & xor_ln779_155_fu_24229_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_61_fu_24480_p2() {
    and_ln779_61_fu_24480_p2 = (icmp_ln879_155_fu_24430_p2.read() & xor_ln779_157_fu_24474_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_62_fu_24725_p2() {
    and_ln779_62_fu_24725_p2 = (icmp_ln879_157_fu_24675_p2.read() & xor_ln779_159_fu_24719_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_63_fu_25845_p2() {
    and_ln779_63_fu_25845_p2 = (icmp_ln879_159_fu_25803_p2.read() & xor_ln779_160_fu_25839_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_64_fu_25997_p2() {
    and_ln779_64_fu_25997_p2 = (icmp_ln879_161_fu_25955_p2.read() & xor_ln779_161_fu_25991_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_65_fu_26149_p2() {
    and_ln779_65_fu_26149_p2 = (icmp_ln879_163_fu_26107_p2.read() & xor_ln779_162_fu_26143_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_66_fu_26301_p2() {
    and_ln779_66_fu_26301_p2 = (icmp_ln879_165_fu_26259_p2.read() & xor_ln779_163_fu_26295_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_67_fu_26453_p2() {
    and_ln779_67_fu_26453_p2 = (icmp_ln879_167_fu_26411_p2.read() & xor_ln779_164_fu_26447_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_68_fu_26605_p2() {
    and_ln779_68_fu_26605_p2 = (icmp_ln879_169_fu_26563_p2.read() & xor_ln779_165_fu_26599_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_69_fu_26757_p2() {
    and_ln779_69_fu_26757_p2 = (icmp_ln879_171_fu_26715_p2.read() & xor_ln779_166_fu_26751_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_70_fu_26909_p2() {
    and_ln779_70_fu_26909_p2 = (icmp_ln879_173_fu_26867_p2.read() & xor_ln779_167_fu_26903_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_71_fu_27061_p2() {
    and_ln779_71_fu_27061_p2 = (icmp_ln879_175_fu_27019_p2.read() & xor_ln779_168_fu_27055_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_72_fu_27213_p2() {
    and_ln779_72_fu_27213_p2 = (icmp_ln879_177_fu_27171_p2.read() & xor_ln779_169_fu_27207_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_73_fu_27365_p2() {
    and_ln779_73_fu_27365_p2 = (icmp_ln879_179_fu_27323_p2.read() & xor_ln779_170_fu_27359_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_74_fu_27517_p2() {
    and_ln779_74_fu_27517_p2 = (icmp_ln879_181_fu_27475_p2.read() & xor_ln779_171_fu_27511_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_75_fu_27669_p2() {
    and_ln779_75_fu_27669_p2 = (icmp_ln879_183_fu_27627_p2.read() & xor_ln779_172_fu_27663_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_76_fu_27821_p2() {
    and_ln779_76_fu_27821_p2 = (icmp_ln879_185_fu_27779_p2.read() & xor_ln779_173_fu_27815_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_77_fu_27973_p2() {
    and_ln779_77_fu_27973_p2 = (icmp_ln879_187_fu_27931_p2.read() & xor_ln779_174_fu_27967_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_78_fu_28125_p2() {
    and_ln779_78_fu_28125_p2 = (icmp_ln879_189_fu_28083_p2.read() & xor_ln779_175_fu_28119_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_79_fu_28277_p2() {
    and_ln779_79_fu_28277_p2 = (icmp_ln879_191_fu_28235_p2.read() & xor_ln779_176_fu_28271_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_80_fu_28429_p2() {
    and_ln779_80_fu_28429_p2 = (icmp_ln879_193_fu_28387_p2.read() & xor_ln779_177_fu_28423_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_81_fu_28581_p2() {
    and_ln779_81_fu_28581_p2 = (icmp_ln879_195_fu_28539_p2.read() & xor_ln779_178_fu_28575_p2.read());
}

void bn_relu_sc_relu::thread_and_ln779_82_fu_28733_p2() {
    and_ln779_82_fu_28733_p2 = (icmp_ln879_197_fu_28691_p2.read() & xor_ln779_179_fu_28727_p2.read());
}

}

