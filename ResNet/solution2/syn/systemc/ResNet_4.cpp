#include "ResNet.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ResNet::thread_BUS32_AWVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read()))) {
        BUS32_AWVALID = grp_matmul_fu_4301_m_axi_top_AWVALID.read();
    } else {
        BUS32_AWVALID = ap_const_logic_0;
    }
}

void ResNet::thread_BUS32_BREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read()))) {
        BUS32_BREADY = grp_matmul_fu_4301_m_axi_top_BREADY.read();
    } else {
        BUS32_BREADY = ap_const_logic_0;
    }
}

void ResNet::thread_BUS32_WVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read()))) {
        BUS32_WVALID = grp_matmul_fu_4301_m_axi_top_WVALID.read();
    } else {
        BUS32_WVALID = ap_const_logic_0;
    }
}

void ResNet::thread_IMG_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln89_reg_21645_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        IMG_ARVALID = ap_const_logic_1;
    } else {
        IMG_ARVALID = ap_const_logic_0;
    }
}

void ResNet::thread_IMG_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln89_reg_21645_pp0_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        IMG_RREADY = ap_const_logic_1;
    } else {
        IMG_RREADY = ap_const_logic_0;
    }
}

void ResNet::thread_IMG_blk_n_AR() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln89_reg_21645_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        IMG_blk_n_AR = m_axi_IMG_ARREADY.read();
    } else {
        IMG_blk_n_AR = ap_const_logic_1;
    }
}

void ResNet::thread_IMG_blk_n_R() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln89_reg_21645_pp0_iter8_reg.read()))) {
        IMG_blk_n_R = m_axi_IMG_RVALID.read();
    } else {
        IMG_blk_n_R = ap_const_logic_1;
    }
}

void ResNet::thread_add_ln109_fu_5387_p2() {
    add_ln109_fu_5387_p2 = (!indvar_flatten26_reg_2361.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(indvar_flatten26_reg_2361.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ResNet::thread_add_ln1116_fu_6608_p2() {
    add_ln1116_fu_6608_p2 = (!zext_ln124_3_fu_6601_p1.read().is_01() || !zext_ln1116_fu_6605_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln124_3_fu_6601_p1.read()) + sc_biguint<12>(zext_ln1116_fu_6605_p1.read()));
}

void ResNet::thread_add_ln1192_148_fu_6838_p2() {
    add_ln1192_148_fu_6838_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_1_fu_6828_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_1_fu_6828_p2.read()));
}

void ResNet::thread_add_ln1192_149_fu_7018_p2() {
    add_ln1192_149_fu_7018_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_2_fu_7008_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_2_fu_7008_p2.read()));
}

void ResNet::thread_add_ln1192_150_fu_7198_p2() {
    add_ln1192_150_fu_7198_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_3_fu_7188_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_3_fu_7188_p2.read()));
}

void ResNet::thread_add_ln1192_151_fu_11723_p2() {
    add_ln1192_151_fu_11723_p2 = (!sext_ln703_fu_11715_p1.read().is_01() || !sext_ln703_157_fu_11719_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_fu_11715_p1.read()) + sc_bigint<13>(sext_ln703_157_fu_11719_p1.read()));
}

void ResNet::thread_add_ln1192_152_fu_7378_p2() {
    add_ln1192_152_fu_7378_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_4_fu_7368_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_4_fu_7368_p2.read()));
}

void ResNet::thread_add_ln1192_153_fu_11813_p2() {
    add_ln1192_153_fu_11813_p2 = (!sext_ln703_158_fu_11805_p1.read().is_01() || !sext_ln703_159_fu_11809_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_158_fu_11805_p1.read()) + sc_bigint<13>(sext_ln703_159_fu_11809_p1.read()));
}

void ResNet::thread_add_ln1192_154_fu_7558_p2() {
    add_ln1192_154_fu_7558_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_5_fu_7548_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_5_fu_7548_p2.read()));
}

void ResNet::thread_add_ln1192_155_fu_11903_p2() {
    add_ln1192_155_fu_11903_p2 = (!sext_ln703_160_fu_11895_p1.read().is_01() || !sext_ln703_161_fu_11899_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_160_fu_11895_p1.read()) + sc_bigint<13>(sext_ln703_161_fu_11899_p1.read()));
}

void ResNet::thread_add_ln1192_156_fu_11993_p2() {
    add_ln1192_156_fu_11993_p2 = (!sext_ln703_162_fu_11985_p1.read().is_01() || !sext_ln703_163_fu_11989_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_162_fu_11985_p1.read()) + sc_bigint<13>(sext_ln703_163_fu_11989_p1.read()));
}

void ResNet::thread_add_ln1192_157_fu_7738_p2() {
    add_ln1192_157_fu_7738_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_6_fu_7728_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_6_fu_7728_p2.read()));
}

void ResNet::thread_add_ln1192_158_fu_12083_p2() {
    add_ln1192_158_fu_12083_p2 = (!sext_ln703_164_fu_12075_p1.read().is_01() || !sext_ln703_165_fu_12079_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_164_fu_12075_p1.read()) + sc_bigint<13>(sext_ln703_165_fu_12079_p1.read()));
}

void ResNet::thread_add_ln1192_159_fu_7918_p2() {
    add_ln1192_159_fu_7918_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_7_fu_7908_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_7_fu_7908_p2.read()));
}

void ResNet::thread_add_ln1192_160_fu_12173_p2() {
    add_ln1192_160_fu_12173_p2 = (!sext_ln703_166_fu_12165_p1.read().is_01() || !sext_ln703_167_fu_12169_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_166_fu_12165_p1.read()) + sc_bigint<13>(sext_ln703_167_fu_12169_p1.read()));
}

void ResNet::thread_add_ln1192_161_fu_8098_p2() {
    add_ln1192_161_fu_8098_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_8_fu_8088_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_8_fu_8088_p2.read()));
}

void ResNet::thread_add_ln1192_162_fu_12263_p2() {
    add_ln1192_162_fu_12263_p2 = (!sext_ln703_168_fu_12255_p1.read().is_01() || !sext_ln703_169_fu_12259_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_168_fu_12255_p1.read()) + sc_bigint<13>(sext_ln703_169_fu_12259_p1.read()));
}

void ResNet::thread_add_ln1192_163_fu_12353_p2() {
    add_ln1192_163_fu_12353_p2 = (!sext_ln703_170_fu_12345_p1.read().is_01() || !sext_ln703_171_fu_12349_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_170_fu_12345_p1.read()) + sc_bigint<13>(sext_ln703_171_fu_12349_p1.read()));
}

void ResNet::thread_add_ln1192_164_fu_8278_p2() {
    add_ln1192_164_fu_8278_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_9_fu_8268_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_9_fu_8268_p2.read()));
}

void ResNet::thread_add_ln1192_165_fu_12443_p2() {
    add_ln1192_165_fu_12443_p2 = (!sext_ln703_172_fu_12435_p1.read().is_01() || !sext_ln703_173_fu_12439_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_172_fu_12435_p1.read()) + sc_bigint<13>(sext_ln703_173_fu_12439_p1.read()));
}

void ResNet::thread_add_ln1192_166_fu_8458_p2() {
    add_ln1192_166_fu_8458_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_10_fu_8448_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_10_fu_8448_p2.read()));
}

void ResNet::thread_add_ln1192_167_fu_12533_p2() {
    add_ln1192_167_fu_12533_p2 = (!sext_ln703_174_fu_12525_p1.read().is_01() || !sext_ln703_175_fu_12529_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_174_fu_12525_p1.read()) + sc_bigint<13>(sext_ln703_175_fu_12529_p1.read()));
}

void ResNet::thread_add_ln1192_168_fu_8638_p2() {
    add_ln1192_168_fu_8638_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_11_fu_8628_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_11_fu_8628_p2.read()));
}

void ResNet::thread_add_ln1192_169_fu_12623_p2() {
    add_ln1192_169_fu_12623_p2 = (!sext_ln703_176_fu_12615_p1.read().is_01() || !sext_ln703_177_fu_12619_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_176_fu_12615_p1.read()) + sc_bigint<13>(sext_ln703_177_fu_12619_p1.read()));
}

void ResNet::thread_add_ln1192_170_fu_12713_p2() {
    add_ln1192_170_fu_12713_p2 = (!sext_ln703_178_fu_12705_p1.read().is_01() || !sext_ln703_179_fu_12709_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_178_fu_12705_p1.read()) + sc_bigint<13>(sext_ln703_179_fu_12709_p1.read()));
}

void ResNet::thread_add_ln1192_171_fu_8818_p2() {
    add_ln1192_171_fu_8818_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_12_fu_8808_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_12_fu_8808_p2.read()));
}

void ResNet::thread_add_ln1192_172_fu_12803_p2() {
    add_ln1192_172_fu_12803_p2 = (!sext_ln703_180_fu_12795_p1.read().is_01() || !sext_ln703_181_fu_12799_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_180_fu_12795_p1.read()) + sc_bigint<13>(sext_ln703_181_fu_12799_p1.read()));
}

void ResNet::thread_add_ln1192_173_fu_8998_p2() {
    add_ln1192_173_fu_8998_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_13_fu_8988_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_13_fu_8988_p2.read()));
}

void ResNet::thread_add_ln1192_174_fu_12893_p2() {
    add_ln1192_174_fu_12893_p2 = (!sext_ln703_182_fu_12885_p1.read().is_01() || !sext_ln703_183_fu_12889_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_182_fu_12885_p1.read()) + sc_bigint<13>(sext_ln703_183_fu_12889_p1.read()));
}

void ResNet::thread_add_ln1192_175_fu_9178_p2() {
    add_ln1192_175_fu_9178_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_14_fu_9168_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_14_fu_9168_p2.read()));
}

void ResNet::thread_add_ln1192_176_fu_12983_p2() {
    add_ln1192_176_fu_12983_p2 = (!sext_ln703_184_fu_12975_p1.read().is_01() || !sext_ln703_185_fu_12979_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_184_fu_12975_p1.read()) + sc_bigint<13>(sext_ln703_185_fu_12979_p1.read()));
}

void ResNet::thread_add_ln1192_177_fu_13073_p2() {
    add_ln1192_177_fu_13073_p2 = (!sext_ln703_186_fu_13065_p1.read().is_01() || !sext_ln703_187_fu_13069_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_186_fu_13065_p1.read()) + sc_bigint<13>(sext_ln703_187_fu_13069_p1.read()));
}

void ResNet::thread_add_ln1192_178_fu_9358_p2() {
    add_ln1192_178_fu_9358_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_15_fu_9348_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_15_fu_9348_p2.read()));
}

void ResNet::thread_add_ln1192_179_fu_13163_p2() {
    add_ln1192_179_fu_13163_p2 = (!sext_ln703_188_fu_13155_p1.read().is_01() || !sext_ln703_189_fu_13159_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_188_fu_13155_p1.read()) + sc_bigint<13>(sext_ln703_189_fu_13159_p1.read()));
}

void ResNet::thread_add_ln1192_180_fu_13253_p2() {
    add_ln1192_180_fu_13253_p2 = (!sext_ln703_190_fu_13245_p1.read().is_01() || !sext_ln703_191_fu_13249_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_190_fu_13245_p1.read()) + sc_bigint<13>(sext_ln703_191_fu_13249_p1.read()));
}

void ResNet::thread_add_ln1192_181_fu_13343_p2() {
    add_ln1192_181_fu_13343_p2 = (!sext_ln703_192_fu_13335_p1.read().is_01() || !sext_ln703_193_fu_13339_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_192_fu_13335_p1.read()) + sc_bigint<13>(sext_ln703_193_fu_13339_p1.read()));
}

void ResNet::thread_add_ln1192_182_fu_13433_p2() {
    add_ln1192_182_fu_13433_p2 = (!sext_ln703_194_fu_13425_p1.read().is_01() || !sext_ln703_195_fu_13429_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_194_fu_13425_p1.read()) + sc_bigint<13>(sext_ln703_195_fu_13429_p1.read()));
}

void ResNet::thread_add_ln1192_183_fu_13523_p2() {
    add_ln1192_183_fu_13523_p2 = (!sext_ln703_196_fu_13515_p1.read().is_01() || !sext_ln703_197_fu_13519_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_196_fu_13515_p1.read()) + sc_bigint<13>(sext_ln703_197_fu_13519_p1.read()));
}

void ResNet::thread_add_ln1192_184_fu_13613_p2() {
    add_ln1192_184_fu_13613_p2 = (!sext_ln703_198_fu_13605_p1.read().is_01() || !sext_ln703_199_fu_13609_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_198_fu_13605_p1.read()) + sc_bigint<13>(sext_ln703_199_fu_13609_p1.read()));
}

void ResNet::thread_add_ln1192_185_fu_13703_p2() {
    add_ln1192_185_fu_13703_p2 = (!sext_ln703_200_fu_13695_p1.read().is_01() || !sext_ln703_201_fu_13699_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_200_fu_13695_p1.read()) + sc_bigint<13>(sext_ln703_201_fu_13699_p1.read()));
}

void ResNet::thread_add_ln1192_186_fu_13793_p2() {
    add_ln1192_186_fu_13793_p2 = (!sext_ln703_202_fu_13785_p1.read().is_01() || !sext_ln703_203_fu_13789_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_202_fu_13785_p1.read()) + sc_bigint<13>(sext_ln703_203_fu_13789_p1.read()));
}

void ResNet::thread_add_ln1192_187_fu_13883_p2() {
    add_ln1192_187_fu_13883_p2 = (!sext_ln703_204_fu_13875_p1.read().is_01() || !sext_ln703_205_fu_13879_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_204_fu_13875_p1.read()) + sc_bigint<13>(sext_ln703_205_fu_13879_p1.read()));
}

void ResNet::thread_add_ln1192_188_fu_13973_p2() {
    add_ln1192_188_fu_13973_p2 = (!sext_ln703_206_fu_13965_p1.read().is_01() || !sext_ln703_207_fu_13969_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_206_fu_13965_p1.read()) + sc_bigint<13>(sext_ln703_207_fu_13969_p1.read()));
}

void ResNet::thread_add_ln1192_189_fu_14063_p2() {
    add_ln1192_189_fu_14063_p2 = (!sext_ln703_208_fu_14055_p1.read().is_01() || !sext_ln703_209_fu_14059_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_208_fu_14055_p1.read()) + sc_bigint<13>(sext_ln703_209_fu_14059_p1.read()));
}

void ResNet::thread_add_ln1192_190_fu_14153_p2() {
    add_ln1192_190_fu_14153_p2 = (!sext_ln703_210_fu_14145_p1.read().is_01() || !sext_ln703_211_fu_14149_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_210_fu_14145_p1.read()) + sc_bigint<13>(sext_ln703_211_fu_14149_p1.read()));
}

void ResNet::thread_add_ln1192_191_fu_14243_p2() {
    add_ln1192_191_fu_14243_p2 = (!sext_ln703_212_fu_14235_p1.read().is_01() || !sext_ln703_213_fu_14239_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_212_fu_14235_p1.read()) + sc_bigint<13>(sext_ln703_213_fu_14239_p1.read()));
}

void ResNet::thread_add_ln1192_192_fu_14333_p2() {
    add_ln1192_192_fu_14333_p2 = (!sext_ln703_214_fu_14325_p1.read().is_01() || !sext_ln703_215_fu_14329_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_214_fu_14325_p1.read()) + sc_bigint<13>(sext_ln703_215_fu_14329_p1.read()));
}

void ResNet::thread_add_ln1192_193_fu_14423_p2() {
    add_ln1192_193_fu_14423_p2 = (!sext_ln703_216_fu_14415_p1.read().is_01() || !sext_ln703_217_fu_14419_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_216_fu_14415_p1.read()) + sc_bigint<13>(sext_ln703_217_fu_14419_p1.read()));
}

void ResNet::thread_add_ln1192_194_fu_14513_p2() {
    add_ln1192_194_fu_14513_p2 = (!sext_ln703_218_fu_14505_p1.read().is_01() || !sext_ln703_219_fu_14509_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_218_fu_14505_p1.read()) + sc_bigint<13>(sext_ln703_219_fu_14509_p1.read()));
}

void ResNet::thread_add_ln1192_195_fu_14603_p2() {
    add_ln1192_195_fu_14603_p2 = (!sext_ln703_220_fu_14595_p1.read().is_01() || !sext_ln703_221_fu_14599_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_220_fu_14595_p1.read()) + sc_bigint<13>(sext_ln703_221_fu_14599_p1.read()));
}

void ResNet::thread_add_ln1192_196_fu_14693_p2() {
    add_ln1192_196_fu_14693_p2 = (!sext_ln703_222_fu_14685_p1.read().is_01() || !sext_ln703_223_fu_14689_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_222_fu_14685_p1.read()) + sc_bigint<13>(sext_ln703_223_fu_14689_p1.read()));
}

void ResNet::thread_add_ln1192_197_fu_14783_p2() {
    add_ln1192_197_fu_14783_p2 = (!sext_ln703_224_fu_14775_p1.read().is_01() || !sext_ln703_225_fu_14779_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_224_fu_14775_p1.read()) + sc_bigint<13>(sext_ln703_225_fu_14779_p1.read()));
}

void ResNet::thread_add_ln1192_198_fu_14873_p2() {
    add_ln1192_198_fu_14873_p2 = (!sext_ln703_226_fu_14865_p1.read().is_01() || !sext_ln703_227_fu_14869_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_226_fu_14865_p1.read()) + sc_bigint<13>(sext_ln703_227_fu_14869_p1.read()));
}

void ResNet::thread_add_ln1192_199_fu_14963_p2() {
    add_ln1192_199_fu_14963_p2 = (!sext_ln703_228_fu_14955_p1.read().is_01() || !sext_ln703_229_fu_14959_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_228_fu_14955_p1.read()) + sc_bigint<13>(sext_ln703_229_fu_14959_p1.read()));
}

void ResNet::thread_add_ln1192_200_fu_15053_p2() {
    add_ln1192_200_fu_15053_p2 = (!sext_ln703_230_fu_15045_p1.read().is_01() || !sext_ln703_231_fu_15049_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_230_fu_15045_p1.read()) + sc_bigint<13>(sext_ln703_231_fu_15049_p1.read()));
}

void ResNet::thread_add_ln1192_201_fu_15143_p2() {
    add_ln1192_201_fu_15143_p2 = (!sext_ln703_232_fu_15135_p1.read().is_01() || !sext_ln703_233_fu_15139_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_232_fu_15135_p1.read()) + sc_bigint<13>(sext_ln703_233_fu_15139_p1.read()));
}

void ResNet::thread_add_ln1192_202_fu_15233_p2() {
    add_ln1192_202_fu_15233_p2 = (!sext_ln703_234_fu_15225_p1.read().is_01() || !sext_ln703_235_fu_15229_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_234_fu_15225_p1.read()) + sc_bigint<13>(sext_ln703_235_fu_15229_p1.read()));
}

void ResNet::thread_add_ln1192_203_fu_15323_p2() {
    add_ln1192_203_fu_15323_p2 = (!sext_ln703_236_fu_15315_p1.read().is_01() || !sext_ln703_237_fu_15319_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_236_fu_15315_p1.read()) + sc_bigint<13>(sext_ln703_237_fu_15319_p1.read()));
}

void ResNet::thread_add_ln1192_204_fu_15413_p2() {
    add_ln1192_204_fu_15413_p2 = (!sext_ln703_238_fu_15405_p1.read().is_01() || !sext_ln703_239_fu_15409_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_238_fu_15405_p1.read()) + sc_bigint<13>(sext_ln703_239_fu_15409_p1.read()));
}

void ResNet::thread_add_ln1192_205_fu_15503_p2() {
    add_ln1192_205_fu_15503_p2 = (!sext_ln703_240_fu_15495_p1.read().is_01() || !sext_ln703_241_fu_15499_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_240_fu_15495_p1.read()) + sc_bigint<13>(sext_ln703_241_fu_15499_p1.read()));
}

void ResNet::thread_add_ln1192_206_fu_15593_p2() {
    add_ln1192_206_fu_15593_p2 = (!sext_ln703_242_fu_15585_p1.read().is_01() || !sext_ln703_243_fu_15589_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_242_fu_15585_p1.read()) + sc_bigint<13>(sext_ln703_243_fu_15589_p1.read()));
}

void ResNet::thread_add_ln1192_207_fu_15683_p2() {
    add_ln1192_207_fu_15683_p2 = (!sext_ln703_244_fu_15675_p1.read().is_01() || !sext_ln703_245_fu_15679_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_244_fu_15675_p1.read()) + sc_bigint<13>(sext_ln703_245_fu_15679_p1.read()));
}

void ResNet::thread_add_ln1192_208_fu_15773_p2() {
    add_ln1192_208_fu_15773_p2 = (!sext_ln703_246_fu_15765_p1.read().is_01() || !sext_ln703_247_fu_15769_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_246_fu_15765_p1.read()) + sc_bigint<13>(sext_ln703_247_fu_15769_p1.read()));
}

void ResNet::thread_add_ln1192_209_fu_15863_p2() {
    add_ln1192_209_fu_15863_p2 = (!sext_ln703_248_fu_15855_p1.read().is_01() || !sext_ln703_249_fu_15859_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_248_fu_15855_p1.read()) + sc_bigint<13>(sext_ln703_249_fu_15859_p1.read()));
}

void ResNet::thread_add_ln1192_210_fu_15953_p2() {
    add_ln1192_210_fu_15953_p2 = (!sext_ln703_250_fu_15945_p1.read().is_01() || !sext_ln703_251_fu_15949_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_250_fu_15945_p1.read()) + sc_bigint<13>(sext_ln703_251_fu_15949_p1.read()));
}

void ResNet::thread_add_ln1192_211_fu_16043_p2() {
    add_ln1192_211_fu_16043_p2 = (!sext_ln703_252_fu_16035_p1.read().is_01() || !sext_ln703_253_fu_16039_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_252_fu_16035_p1.read()) + sc_bigint<13>(sext_ln703_253_fu_16039_p1.read()));
}

void ResNet::thread_add_ln1192_212_fu_16133_p2() {
    add_ln1192_212_fu_16133_p2 = (!sext_ln703_254_fu_16125_p1.read().is_01() || !sext_ln703_255_fu_16129_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_254_fu_16125_p1.read()) + sc_bigint<13>(sext_ln703_255_fu_16129_p1.read()));
}

void ResNet::thread_add_ln1192_213_fu_16223_p2() {
    add_ln1192_213_fu_16223_p2 = (!sext_ln703_256_fu_16215_p1.read().is_01() || !sext_ln703_257_fu_16219_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_256_fu_16215_p1.read()) + sc_bigint<13>(sext_ln703_257_fu_16219_p1.read()));
}

void ResNet::thread_add_ln1192_214_fu_16313_p2() {
    add_ln1192_214_fu_16313_p2 = (!sext_ln703_258_fu_16305_p1.read().is_01() || !sext_ln703_259_fu_16309_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_258_fu_16305_p1.read()) + sc_bigint<13>(sext_ln703_259_fu_16309_p1.read()));
}

void ResNet::thread_add_ln1192_215_fu_16403_p2() {
    add_ln1192_215_fu_16403_p2 = (!sext_ln703_260_fu_16395_p1.read().is_01() || !sext_ln703_261_fu_16399_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_260_fu_16395_p1.read()) + sc_bigint<13>(sext_ln703_261_fu_16399_p1.read()));
}

void ResNet::thread_add_ln1192_216_fu_16493_p2() {
    add_ln1192_216_fu_16493_p2 = (!sext_ln703_262_fu_16485_p1.read().is_01() || !sext_ln703_263_fu_16489_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_262_fu_16485_p1.read()) + sc_bigint<13>(sext_ln703_263_fu_16489_p1.read()));
}

void ResNet::thread_add_ln1192_217_fu_16583_p2() {
    add_ln1192_217_fu_16583_p2 = (!sext_ln703_264_fu_16575_p1.read().is_01() || !sext_ln703_265_fu_16579_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_264_fu_16575_p1.read()) + sc_bigint<13>(sext_ln703_265_fu_16579_p1.read()));
}

void ResNet::thread_add_ln1192_218_fu_16673_p2() {
    add_ln1192_218_fu_16673_p2 = (!sext_ln703_266_fu_16665_p1.read().is_01() || !sext_ln703_267_fu_16669_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_266_fu_16665_p1.read()) + sc_bigint<13>(sext_ln703_267_fu_16669_p1.read()));
}

void ResNet::thread_add_ln1192_219_fu_16763_p2() {
    add_ln1192_219_fu_16763_p2 = (!sext_ln703_268_fu_16755_p1.read().is_01() || !sext_ln703_269_fu_16759_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_268_fu_16755_p1.read()) + sc_bigint<13>(sext_ln703_269_fu_16759_p1.read()));
}

void ResNet::thread_add_ln1192_220_fu_16853_p2() {
    add_ln1192_220_fu_16853_p2 = (!sext_ln703_270_fu_16845_p1.read().is_01() || !sext_ln703_271_fu_16849_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_270_fu_16845_p1.read()) + sc_bigint<13>(sext_ln703_271_fu_16849_p1.read()));
}

void ResNet::thread_add_ln1192_221_fu_16943_p2() {
    add_ln1192_221_fu_16943_p2 = (!sext_ln703_272_fu_16935_p1.read().is_01() || !sext_ln703_273_fu_16939_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_272_fu_16935_p1.read()) + sc_bigint<13>(sext_ln703_273_fu_16939_p1.read()));
}

void ResNet::thread_add_ln1192_222_fu_17033_p2() {
    add_ln1192_222_fu_17033_p2 = (!sext_ln703_274_fu_17025_p1.read().is_01() || !sext_ln703_275_fu_17029_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_274_fu_17025_p1.read()) + sc_bigint<13>(sext_ln703_275_fu_17029_p1.read()));
}

void ResNet::thread_add_ln1192_223_fu_17123_p2() {
    add_ln1192_223_fu_17123_p2 = (!sext_ln703_276_fu_17115_p1.read().is_01() || !sext_ln703_277_fu_17119_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_276_fu_17115_p1.read()) + sc_bigint<13>(sext_ln703_277_fu_17119_p1.read()));
}

void ResNet::thread_add_ln1192_224_fu_17213_p2() {
    add_ln1192_224_fu_17213_p2 = (!sext_ln703_278_fu_17205_p1.read().is_01() || !sext_ln703_279_fu_17209_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_278_fu_17205_p1.read()) + sc_bigint<13>(sext_ln703_279_fu_17209_p1.read()));
}

void ResNet::thread_add_ln1192_225_fu_17303_p2() {
    add_ln1192_225_fu_17303_p2 = (!sext_ln703_280_fu_17295_p1.read().is_01() || !sext_ln703_281_fu_17299_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_280_fu_17295_p1.read()) + sc_bigint<13>(sext_ln703_281_fu_17299_p1.read()));
}

void ResNet::thread_add_ln1192_226_fu_17393_p2() {
    add_ln1192_226_fu_17393_p2 = (!sext_ln703_282_fu_17385_p1.read().is_01() || !sext_ln703_283_fu_17389_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_282_fu_17385_p1.read()) + sc_bigint<13>(sext_ln703_283_fu_17389_p1.read()));
}

void ResNet::thread_add_ln1192_227_fu_6664_p2() {
    add_ln1192_227_fu_6664_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_fu_6654_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_fu_6654_p1.read()));
}

void ResNet::thread_add_ln1192_228_fu_6844_p2() {
    add_ln1192_228_fu_6844_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_55_fu_6834_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_55_fu_6834_p1.read()));
}

void ResNet::thread_add_ln1192_229_fu_7024_p2() {
    add_ln1192_229_fu_7024_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_56_fu_7014_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_56_fu_7014_p1.read()));
}

void ResNet::thread_add_ln1192_230_fu_7204_p2() {
    add_ln1192_230_fu_7204_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_57_fu_7194_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_57_fu_7194_p1.read()));
}

void ResNet::thread_add_ln1192_231_fu_7384_p2() {
    add_ln1192_231_fu_7384_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_58_fu_7374_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_58_fu_7374_p1.read()));
}

void ResNet::thread_add_ln1192_232_fu_7564_p2() {
    add_ln1192_232_fu_7564_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_59_fu_7554_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_59_fu_7554_p1.read()));
}

void ResNet::thread_add_ln1192_233_fu_7744_p2() {
    add_ln1192_233_fu_7744_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_60_fu_7734_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_60_fu_7734_p1.read()));
}

void ResNet::thread_add_ln1192_234_fu_7924_p2() {
    add_ln1192_234_fu_7924_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_61_fu_7914_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_61_fu_7914_p1.read()));
}

void ResNet::thread_add_ln1192_235_fu_8104_p2() {
    add_ln1192_235_fu_8104_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_62_fu_8094_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_62_fu_8094_p1.read()));
}

void ResNet::thread_add_ln1192_236_fu_8284_p2() {
    add_ln1192_236_fu_8284_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_63_fu_8274_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_63_fu_8274_p1.read()));
}

void ResNet::thread_add_ln1192_237_fu_8464_p2() {
    add_ln1192_237_fu_8464_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_64_fu_8454_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_64_fu_8454_p1.read()));
}

void ResNet::thread_add_ln1192_238_fu_8644_p2() {
    add_ln1192_238_fu_8644_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_65_fu_8634_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_65_fu_8634_p1.read()));
}

void ResNet::thread_add_ln1192_239_fu_8824_p2() {
    add_ln1192_239_fu_8824_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_66_fu_8814_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_66_fu_8814_p1.read()));
}

void ResNet::thread_add_ln1192_240_fu_9004_p2() {
    add_ln1192_240_fu_9004_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_67_fu_8994_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_67_fu_8994_p1.read()));
}

void ResNet::thread_add_ln1192_241_fu_9184_p2() {
    add_ln1192_241_fu_9184_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_68_fu_9174_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_68_fu_9174_p1.read()));
}

void ResNet::thread_add_ln1192_242_fu_9364_p2() {
    add_ln1192_242_fu_9364_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_69_fu_9354_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_69_fu_9354_p1.read()));
}

void ResNet::thread_add_ln1192_fu_6658_p2() {
    add_ln1192_fu_6658_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_fu_6648_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_fu_6648_p2.read()));
}

void ResNet::thread_add_ln122_fu_6272_p2() {
    add_ln122_fu_6272_p2 = (!ap_const_lv11_1.is_01() || !indvar_flatten89_reg_2394.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_1) + sc_biguint<11>(indvar_flatten89_reg_2394.read()));
}

void ResNet::thread_add_ln123_1_fu_6574_p2() {
    add_ln123_1_fu_6574_p2 = (!ap_const_lv10_1.is_01() || !indvar_flatten53_reg_2416.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1) + sc_biguint<10>(indvar_flatten53_reg_2416.read()));
}

void ResNet::thread_add_ln124_1_fu_6560_p2() {
    add_ln124_1_fu_6560_p2 = (!ap_const_lv8_1.is_01() || !indvar_flatten33_reg_2438.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(indvar_flatten33_reg_2438.read()));
}

void ResNet::thread_add_ln1265_13_fu_11635_p2() {
    add_ln1265_13_fu_11635_p2 = (!add_ln1265_fu_11625_p2.read().is_01() || !zext_ln1265_24_fu_11631_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln1265_fu_11625_p2.read()) + sc_biguint<8>(zext_ln1265_24_fu_11631_p1.read()));
}

void ResNet::thread_add_ln1265_fu_11625_p2() {
    add_ln1265_fu_11625_p2 = (!zext_ln1265_23_fu_11621_p1.read().is_01() || !zext_ln1265_fu_11609_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln1265_23_fu_11621_p1.read()) + sc_biguint<8>(zext_ln1265_fu_11609_p1.read()));
}

void ResNet::thread_add_ln129_1_fu_6548_p2() {
    add_ln129_1_fu_6548_p2 = (!zext_ln125_fu_6544_p1.read().is_01() || !zext_ln123_1_fu_6452_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln125_fu_6544_p1.read()) + sc_biguint<6>(zext_ln123_1_fu_6452_p1.read()));
}

void ResNet::thread_add_ln129_2_fu_6522_p2() {
    add_ln129_2_fu_6522_p2 = (!zext_ln124_1_fu_6510_p1.read().is_01() || !zext_ln122_fu_6338_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln124_1_fu_6510_p1.read()) + sc_biguint<6>(zext_ln122_fu_6338_p1.read()));
}

void ResNet::thread_add_ln129_fu_6260_p2() {
    add_ln129_fu_6260_p2 = (!zext_ln129_fu_6240_p1.read().is_01() || !zext_ln124_fu_6256_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln129_fu_6240_p1.read()) + sc_biguint<6>(zext_ln124_fu_6256_p1.read()));
}

void ResNet::thread_add_ln129_mid_fu_6356_p3() {
    add_ln129_mid_fu_6356_p3 = esl_concat<1,5>(ap_const_lv1_0, or_ln129_fu_6350_p2.read());
}

void ResNet::thread_add_ln203_1_fu_9536_p2() {
    add_ln203_1_fu_9536_p2 = (!zext_ln203_1_fu_9532_p1.read().is_01() || !zext_ln203_fu_9521_p1.read().is_01())? sc_lv<64>(): (sc_biguint<64>(zext_ln203_1_fu_9532_p1.read()) + sc_biguint<64>(zext_ln203_fu_9521_p1.read()));
}

void ResNet::thread_add_ln203_2_fu_9545_p2() {
    add_ln203_2_fu_9545_p2 = (!add_ln203_1_fu_9536_p2.read().is_01() || !zext_ln124_2_fu_9542_p1.read().is_01())? sc_lv<64>(): (sc_biguint<64>(add_ln203_1_fu_9536_p2.read()) + sc_biguint<64>(zext_ln124_2_fu_9542_p1.read()));
}

void ResNet::thread_add_ln203_3_fu_9575_p2() {
    add_ln203_3_fu_9575_p2 = (!p_shl38_cast_fu_9567_p3.read().is_01() || !p_shl37_cast_fu_9555_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl38_cast_fu_9567_p3.read()) + sc_biguint<12>(p_shl37_cast_fu_9555_p3.read()));
}

void ResNet::thread_add_ln203_4_fu_9584_p2() {
    add_ln203_4_fu_9584_p2 = (!add_ln203_3_fu_9575_p2.read().is_01() || !zext_ln203_2_fu_9581_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln203_3_fu_9575_p2.read()) + sc_biguint<12>(zext_ln203_2_fu_9581_p1.read()));
}

void ResNet::thread_add_ln203_fu_6426_p2() {
    add_ln203_fu_6426_p2 = (!zext_ln129_1_fu_6314_p1.read().is_01() || !zext_ln123_fu_6422_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln129_1_fu_6314_p1.read()) + sc_biguint<6>(zext_ln123_fu_6422_p1.read()));
}

void ResNet::thread_add_ln275_fu_11128_p2() {
    add_ln275_fu_11128_p2 = (!row0_0_0_reg_2578.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(row0_0_0_reg_2578.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_add_ln276_fu_11149_p2() {
    add_ln276_fu_11149_p2 = (!col0_0_0_reg_2590.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(col0_0_0_reg_2590.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_add_ln277_1_fu_11155_p2() {
    add_ln277_1_fu_11155_p2 = (!col0_0_0_reg_2590.read().is_01() || !shl_ln277_1_reg_22876.read().is_01())? sc_lv<2>(): (sc_biguint<2>(col0_0_0_reg_2590.read()) + sc_biguint<2>(shl_ln277_1_reg_22876.read()));
}

void ResNet::thread_add_ln277_fu_11134_p2() {
    add_ln277_fu_11134_p2 = (!row0_0_0_reg_2578.read().is_01() || !shl_ln277_reg_22863.read().is_01())? sc_lv<2>(): (sc_biguint<2>(row0_0_0_reg_2578.read()) + sc_biguint<2>(shl_ln277_reg_22863.read()));
}

void ResNet::thread_add_ln321_10_fu_5709_p2() {
    add_ln321_10_fu_5709_p2 = (!zext_ln321_37_fu_5421_p1.read().is_01() || !sext_ln321_7_reg_21774.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_37_fu_5421_p1.read()) + sc_bigint<11>(sext_ln321_7_reg_21774.read()));
}

void ResNet::thread_add_ln321_11_fu_5726_p2() {
    add_ln321_11_fu_5726_p2 = (!zext_ln321_37_fu_5421_p1.read().is_01() || !sext_ln321_8_reg_21779.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_37_fu_5421_p1.read()) + sc_bigint<11>(sext_ln321_8_reg_21779.read()));
}

void ResNet::thread_add_ln321_12_fu_5798_p2() {
    add_ln321_12_fu_5798_p2 = (!zext_ln321_37_fu_5421_p1.read().is_01() || !sext_ln321_9_reg_21791.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_37_fu_5421_p1.read()) + sc_bigint<11>(sext_ln321_9_reg_21791.read()));
}

void ResNet::thread_add_ln321_13_fu_5815_p2() {
    add_ln321_13_fu_5815_p2 = (!zext_ln321_37_fu_5421_p1.read().is_01() || !sext_ln321_10_reg_21796.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_37_fu_5421_p1.read()) + sc_bigint<11>(sext_ln321_10_reg_21796.read()));
}

void ResNet::thread_add_ln321_14_fu_5832_p2() {
    add_ln321_14_fu_5832_p2 = (!zext_ln321_37_fu_5421_p1.read().is_01() || !sext_ln321_11_reg_21801.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_37_fu_5421_p1.read()) + sc_bigint<11>(sext_ln321_11_reg_21801.read()));
}

void ResNet::thread_add_ln321_15_fu_5853_p2() {
    add_ln321_15_fu_5853_p2 = (!zext_ln321_41_fu_5849_p1.read().is_01() || !sub_ln321_16_fu_5474_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_41_fu_5849_p1.read()) + sc_biguint<11>(sub_ln321_16_fu_5474_p2.read()));
}

void ResNet::thread_add_ln321_16_fu_5864_p2() {
    add_ln321_16_fu_5864_p2 = (!zext_ln321_41_fu_5849_p1.read().is_01() || !sub_ln321_17_fu_5491_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_41_fu_5849_p1.read()) + sc_biguint<11>(sub_ln321_17_fu_5491_p2.read()));
}

void ResNet::thread_add_ln321_17_fu_5875_p2() {
    add_ln321_17_fu_5875_p2 = (!zext_ln321_41_fu_5849_p1.read().is_01() || !sub_ln321_18_fu_5508_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_41_fu_5849_p1.read()) + sc_biguint<11>(sub_ln321_18_fu_5508_p2.read()));
}

void ResNet::thread_add_ln321_18_fu_5886_p2() {
    add_ln321_18_fu_5886_p2 = (!zext_ln321_41_fu_5849_p1.read().is_01() || !sub_ln321_19_fu_5525_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_41_fu_5849_p1.read()) + sc_biguint<11>(sub_ln321_19_fu_5525_p2.read()));
}

void ResNet::thread_add_ln321_19_fu_5897_p2() {
    add_ln321_19_fu_5897_p2 = (!zext_ln321_41_fu_5849_p1.read().is_01() || !sub_ln321_20_fu_5580_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_41_fu_5849_p1.read()) + sc_biguint<11>(sub_ln321_20_fu_5580_p2.read()));
}

void ResNet::thread_add_ln321_20_fu_5908_p2() {
    add_ln321_20_fu_5908_p2 = (!zext_ln321_41_fu_5849_p1.read().is_01() || !sub_ln321_21_fu_5597_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_41_fu_5849_p1.read()) + sc_biguint<11>(sub_ln321_21_fu_5597_p2.read()));
}

void ResNet::thread_add_ln321_21_fu_5919_p2() {
    add_ln321_21_fu_5919_p2 = (!zext_ln321_41_fu_5849_p1.read().is_01() || !sub_ln321_22_fu_5614_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_41_fu_5849_p1.read()) + sc_biguint<11>(sub_ln321_22_fu_5614_p2.read()));
}

void ResNet::thread_add_ln321_22_fu_5930_p2() {
    add_ln321_22_fu_5930_p2 = (!zext_ln321_41_fu_5849_p1.read().is_01() || !sub_ln321_23_fu_5631_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_41_fu_5849_p1.read()) + sc_biguint<11>(sub_ln321_23_fu_5631_p2.read()));
}

void ResNet::thread_add_ln321_23_fu_5941_p2() {
    add_ln321_23_fu_5941_p2 = (!zext_ln321_41_fu_5849_p1.read().is_01() || !sub_ln321_24_fu_5686_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_41_fu_5849_p1.read()) + sc_biguint<11>(sub_ln321_24_fu_5686_p2.read()));
}

void ResNet::thread_add_ln321_24_fu_5952_p2() {
    add_ln321_24_fu_5952_p2 = (!zext_ln321_41_fu_5849_p1.read().is_01() || !sub_ln321_25_fu_5703_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_41_fu_5849_p1.read()) + sc_biguint<11>(sub_ln321_25_fu_5703_p2.read()));
}

void ResNet::thread_add_ln321_25_fu_5963_p2() {
    add_ln321_25_fu_5963_p2 = (!zext_ln321_41_fu_5849_p1.read().is_01() || !sub_ln321_26_fu_5720_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_41_fu_5849_p1.read()) + sc_biguint<11>(sub_ln321_26_fu_5720_p2.read()));
}

void ResNet::thread_add_ln321_26_fu_5974_p2() {
    add_ln321_26_fu_5974_p2 = (!zext_ln321_41_fu_5849_p1.read().is_01() || !sub_ln321_27_fu_5737_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_41_fu_5849_p1.read()) + sc_biguint<11>(sub_ln321_27_fu_5737_p2.read()));
}

void ResNet::thread_add_ln321_27_fu_5985_p2() {
    add_ln321_27_fu_5985_p2 = (!zext_ln321_41_fu_5849_p1.read().is_01() || !sub_ln321_28_fu_5792_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_41_fu_5849_p1.read()) + sc_biguint<11>(sub_ln321_28_fu_5792_p2.read()));
}

void ResNet::thread_add_ln321_28_fu_5996_p2() {
    add_ln321_28_fu_5996_p2 = (!zext_ln321_41_fu_5849_p1.read().is_01() || !sub_ln321_29_fu_5809_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_41_fu_5849_p1.read()) + sc_biguint<11>(sub_ln321_29_fu_5809_p2.read()));
}

void ResNet::thread_add_ln321_29_fu_6007_p2() {
    add_ln321_29_fu_6007_p2 = (!zext_ln321_41_fu_5849_p1.read().is_01() || !sub_ln321_30_fu_5826_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_41_fu_5849_p1.read()) + sc_biguint<11>(sub_ln321_30_fu_5826_p2.read()));
}

void ResNet::thread_add_ln321_2_fu_4821_p2() {
    add_ln321_2_fu_4821_p2 = (!p_cast_reg_21640.read().is_01() || !zext_ln321_3_fu_4817_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(p_cast_reg_21640.read()) + sc_biguint<32>(zext_ln321_3_fu_4817_p1.read()));
}

void ResNet::thread_add_ln321_30_fu_6018_p2() {
    add_ln321_30_fu_6018_p2 = (!zext_ln321_41_fu_5849_p1.read().is_01() || !sub_ln321_31_fu_5843_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_41_fu_5849_p1.read()) + sc_biguint<11>(sub_ln321_31_fu_5843_p2.read()));
}

void ResNet::thread_add_ln321_31_fu_6058_p2() {
    add_ln321_31_fu_6058_p2 = (!zext_ln321_40_fu_6055_p1.read().is_01() || !sub_ln321_32_fu_6049_p2.read().is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln321_40_fu_6055_p1.read()) + sc_biguint<5>(sub_ln321_32_fu_6049_p2.read()));
}

void ResNet::thread_add_ln321_3_fu_5480_p2() {
    add_ln321_3_fu_5480_p2 = (!zext_ln321_37_fu_5421_p1.read().is_01() || !sext_ln321_reg_21725.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_37_fu_5421_p1.read()) + sc_bigint<11>(sext_ln321_reg_21725.read()));
}

void ResNet::thread_add_ln321_4_fu_5497_p2() {
    add_ln321_4_fu_5497_p2 = (!zext_ln321_37_fu_5421_p1.read().is_01() || !sext_ln321_1_reg_21730.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_37_fu_5421_p1.read()) + sc_bigint<11>(sext_ln321_1_reg_21730.read()));
}

void ResNet::thread_add_ln321_5_fu_5514_p2() {
    add_ln321_5_fu_5514_p2 = (!zext_ln321_37_fu_5421_p1.read().is_01() || !sext_ln321_2_reg_21735.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_37_fu_5421_p1.read()) + sc_bigint<11>(sext_ln321_2_reg_21735.read()));
}

void ResNet::thread_add_ln321_6_fu_5586_p2() {
    add_ln321_6_fu_5586_p2 = (!zext_ln321_37_fu_5421_p1.read().is_01() || !sext_ln321_3_reg_21747.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_37_fu_5421_p1.read()) + sc_bigint<11>(sext_ln321_3_reg_21747.read()));
}

void ResNet::thread_add_ln321_7_fu_5603_p2() {
    add_ln321_7_fu_5603_p2 = (!zext_ln321_37_fu_5421_p1.read().is_01() || !sext_ln321_4_reg_21752.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_37_fu_5421_p1.read()) + sc_bigint<11>(sext_ln321_4_reg_21752.read()));
}

void ResNet::thread_add_ln321_8_fu_5620_p2() {
    add_ln321_8_fu_5620_p2 = (!zext_ln321_37_fu_5421_p1.read().is_01() || !sext_ln321_5_reg_21757.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_37_fu_5421_p1.read()) + sc_bigint<11>(sext_ln321_5_reg_21757.read()));
}

void ResNet::thread_add_ln321_9_fu_5692_p2() {
    add_ln321_9_fu_5692_p2 = (!zext_ln321_37_fu_5421_p1.read().is_01() || !sext_ln321_6_reg_21769.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_37_fu_5421_p1.read()) + sc_bigint<11>(sext_ln321_6_reg_21769.read()));
}

void ResNet::thread_add_ln321_fu_4856_p2() {
    add_ln321_fu_4856_p2 = (!zext_ln89_1_fu_4849_p1.read().is_01() || !zext_ln93_fu_4853_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln89_1_fu_4849_p1.read()) + sc_biguint<12>(zext_ln93_fu_4853_p1.read()));
}

void ResNet::thread_add_ln415_55_fu_6888_p2() {
    add_ln415_55_fu_6888_p2 = (!zext_ln415_55_fu_6884_p1.read().is_01() || !trunc_ln708_s_fu_6858_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_55_fu_6884_p1.read()) + sc_biguint<12>(trunc_ln708_s_fu_6858_p4.read()));
}

void ResNet::thread_add_ln415_56_fu_7068_p2() {
    add_ln415_56_fu_7068_p2 = (!zext_ln415_56_fu_7064_p1.read().is_01() || !trunc_ln708_43_fu_7038_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_56_fu_7064_p1.read()) + sc_biguint<12>(trunc_ln708_43_fu_7038_p4.read()));
}

void ResNet::thread_add_ln415_57_fu_7248_p2() {
    add_ln415_57_fu_7248_p2 = (!zext_ln415_57_fu_7244_p1.read().is_01() || !trunc_ln708_44_fu_7218_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_57_fu_7244_p1.read()) + sc_biguint<12>(trunc_ln708_44_fu_7218_p4.read()));
}

void ResNet::thread_add_ln415_58_fu_7428_p2() {
    add_ln415_58_fu_7428_p2 = (!zext_ln415_58_fu_7424_p1.read().is_01() || !trunc_ln708_45_fu_7398_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_58_fu_7424_p1.read()) + sc_biguint<12>(trunc_ln708_45_fu_7398_p4.read()));
}

void ResNet::thread_add_ln415_59_fu_7608_p2() {
    add_ln415_59_fu_7608_p2 = (!zext_ln415_59_fu_7604_p1.read().is_01() || !trunc_ln708_46_fu_7578_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_59_fu_7604_p1.read()) + sc_biguint<12>(trunc_ln708_46_fu_7578_p4.read()));
}

void ResNet::thread_add_ln415_60_fu_7788_p2() {
    add_ln415_60_fu_7788_p2 = (!zext_ln415_60_fu_7784_p1.read().is_01() || !trunc_ln708_47_fu_7758_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_60_fu_7784_p1.read()) + sc_biguint<12>(trunc_ln708_47_fu_7758_p4.read()));
}

void ResNet::thread_add_ln415_61_fu_7968_p2() {
    add_ln415_61_fu_7968_p2 = (!zext_ln415_61_fu_7964_p1.read().is_01() || !trunc_ln708_48_fu_7938_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_61_fu_7964_p1.read()) + sc_biguint<12>(trunc_ln708_48_fu_7938_p4.read()));
}

void ResNet::thread_add_ln415_62_fu_8148_p2() {
    add_ln415_62_fu_8148_p2 = (!zext_ln415_62_fu_8144_p1.read().is_01() || !trunc_ln708_49_fu_8118_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_62_fu_8144_p1.read()) + sc_biguint<12>(trunc_ln708_49_fu_8118_p4.read()));
}

void ResNet::thread_add_ln415_63_fu_8328_p2() {
    add_ln415_63_fu_8328_p2 = (!zext_ln415_63_fu_8324_p1.read().is_01() || !trunc_ln708_50_fu_8298_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_63_fu_8324_p1.read()) + sc_biguint<12>(trunc_ln708_50_fu_8298_p4.read()));
}

void ResNet::thread_add_ln415_64_fu_8508_p2() {
    add_ln415_64_fu_8508_p2 = (!zext_ln415_64_fu_8504_p1.read().is_01() || !trunc_ln708_51_fu_8478_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_64_fu_8504_p1.read()) + sc_biguint<12>(trunc_ln708_51_fu_8478_p4.read()));
}

void ResNet::thread_add_ln415_65_fu_8688_p2() {
    add_ln415_65_fu_8688_p2 = (!zext_ln415_65_fu_8684_p1.read().is_01() || !trunc_ln708_52_fu_8658_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_65_fu_8684_p1.read()) + sc_biguint<12>(trunc_ln708_52_fu_8658_p4.read()));
}

void ResNet::thread_add_ln415_66_fu_8868_p2() {
    add_ln415_66_fu_8868_p2 = (!zext_ln415_66_fu_8864_p1.read().is_01() || !trunc_ln708_53_fu_8838_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_66_fu_8864_p1.read()) + sc_biguint<12>(trunc_ln708_53_fu_8838_p4.read()));
}

void ResNet::thread_add_ln415_67_fu_9048_p2() {
    add_ln415_67_fu_9048_p2 = (!zext_ln415_67_fu_9044_p1.read().is_01() || !trunc_ln708_54_fu_9018_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_67_fu_9044_p1.read()) + sc_biguint<12>(trunc_ln708_54_fu_9018_p4.read()));
}

void ResNet::thread_add_ln415_68_fu_9228_p2() {
    add_ln415_68_fu_9228_p2 = (!zext_ln415_68_fu_9224_p1.read().is_01() || !trunc_ln708_55_fu_9198_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_68_fu_9224_p1.read()) + sc_biguint<12>(trunc_ln708_55_fu_9198_p4.read()));
}

void ResNet::thread_add_ln415_69_fu_9408_p2() {
    add_ln415_69_fu_9408_p2 = (!zext_ln415_69_fu_9404_p1.read().is_01() || !trunc_ln708_56_fu_9378_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_69_fu_9404_p1.read()) + sc_biguint<12>(trunc_ln708_56_fu_9378_p4.read()));
}

void ResNet::thread_add_ln415_fu_6708_p2() {
    add_ln415_fu_6708_p2 = (!zext_ln415_fu_6704_p1.read().is_01() || !trunc_ln_fu_6678_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_fu_6704_p1.read()) + sc_biguint<12>(trunc_ln_fu_6678_p4.read()));
}

void ResNet::thread_add_ln435_fu_11402_p2() {
    add_ln435_fu_11402_p2 = (!cii50_0_0_0_reg_2801.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(cii50_0_0_0_reg_2801.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_add_ln436_fu_11414_p2() {
    add_ln436_fu_11414_p2 = (!row051_0_0_0_reg_2813.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(row051_0_0_0_reg_2813.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_add_ln437_fu_11430_p2() {
    add_ln437_fu_11430_p2 = (!col052_0_0_0_reg_2825.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(col052_0_0_0_reg_2825.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_add_ln469_fu_11447_p2() {
    add_ln469_fu_11447_p2 = (!coo55_0_0_0_reg_2837.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(coo55_0_0_0_reg_2837.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_add_ln470_fu_11459_p2() {
    add_ln470_fu_11459_p2 = (!coi56_0_0_0_reg_2849.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(coi56_0_0_0_reg_2849.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_add_ln500_fu_11471_p2() {
    add_ln500_fu_11471_p2 = (!cio59_0_0_0_reg_2861.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(cio59_0_0_0_reg_2861.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_add_ln501_fu_11483_p2() {
    add_ln501_fu_11483_p2 = (!cii60_0_0_0_reg_2873.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(cii60_0_0_0_reg_2873.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_add_ln519_fu_11495_p2() {
    add_ln519_fu_11495_p2 = (!coo61_0_0_0_reg_2885.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(coo61_0_0_0_reg_2885.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_add_ln520_fu_11507_p2() {
    add_ln520_fu_11507_p2 = (!coi62_0_0_0_reg_2897.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(coi62_0_0_0_reg_2897.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_add_ln550_fu_11519_p2() {
    add_ln550_fu_11519_p2 = (!cio65_0_0_0_reg_2909.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(cio65_0_0_0_reg_2909.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_add_ln551_fu_11531_p2() {
    add_ln551_fu_11531_p2 = (!cii66_0_0_0_reg_2921.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(cii66_0_0_0_reg_2921.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_add_ln569_fu_11543_p2() {
    add_ln569_fu_11543_p2 = (!coo67_0_0_0_reg_2933.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(coo67_0_0_0_reg_2933.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_add_ln570_fu_11555_p2() {
    add_ln570_fu_11555_p2 = (!coi68_0_0_0_reg_2945.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(coi68_0_0_0_reg_2945.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_add_ln592_fu_11567_p2() {
    add_ln592_fu_11567_p2 = (!indvar_flatten96_reg_2957.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(indvar_flatten96_reg_2957.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ResNet::thread_add_ln703_100_fu_12637_p1() {
    add_ln703_100_fu_12637_p1 = fm_buf_V_10_q0.read();
}

void ResNet::thread_add_ln703_100_fu_12637_p2() {
    add_ln703_100_fu_12637_p2 = (!linear_buf_10_V_175_reg_3615.read().is_01() || !add_ln703_100_fu_12637_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_10_V_175_reg_3615.read()) + sc_bigint<12>(add_ln703_100_fu_12637_p1.read()));
}

void ResNet::thread_add_ln703_101_fu_12727_p1() {
    add_ln703_101_fu_12727_p1 = fm_buf_V_11_q0.read();
}

void ResNet::thread_add_ln703_101_fu_12727_p2() {
    add_ln703_101_fu_12727_p2 = (!linear_buf_11_V_176_reg_3603.read().is_01() || !add_ln703_101_fu_12727_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_11_V_176_reg_3603.read()) + sc_bigint<12>(add_ln703_101_fu_12727_p1.read()));
}

void ResNet::thread_add_ln703_102_fu_12817_p1() {
    add_ln703_102_fu_12817_p1 = fm_buf_V_12_q0.read();
}

void ResNet::thread_add_ln703_102_fu_12817_p2() {
    add_ln703_102_fu_12817_p2 = (!linear_buf_12_V_177_reg_3591.read().is_01() || !add_ln703_102_fu_12817_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_12_V_177_reg_3591.read()) + sc_bigint<12>(add_ln703_102_fu_12817_p1.read()));
}

void ResNet::thread_add_ln703_103_fu_12907_p1() {
    add_ln703_103_fu_12907_p1 = fm_buf_V_13_q0.read();
}

void ResNet::thread_add_ln703_103_fu_12907_p2() {
    add_ln703_103_fu_12907_p2 = (!linear_buf_13_V_178_reg_3579.read().is_01() || !add_ln703_103_fu_12907_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_13_V_178_reg_3579.read()) + sc_bigint<12>(add_ln703_103_fu_12907_p1.read()));
}

void ResNet::thread_add_ln703_104_fu_12997_p1() {
    add_ln703_104_fu_12997_p1 = fm_buf_V_14_q0.read();
}

void ResNet::thread_add_ln703_104_fu_12997_p2() {
    add_ln703_104_fu_12997_p2 = (!linear_buf_14_V_179_reg_3567.read().is_01() || !add_ln703_104_fu_12997_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_14_V_179_reg_3567.read()) + sc_bigint<12>(add_ln703_104_fu_12997_p1.read()));
}

void ResNet::thread_add_ln703_105_fu_13087_p1() {
    add_ln703_105_fu_13087_p1 = fm_buf_V_15_q0.read();
}

void ResNet::thread_add_ln703_105_fu_13087_p2() {
    add_ln703_105_fu_13087_p2 = (!linear_buf_15_V_180_reg_3555.read().is_01() || !add_ln703_105_fu_13087_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_15_V_180_reg_3555.read()) + sc_bigint<12>(add_ln703_105_fu_13087_p1.read()));
}

void ResNet::thread_add_ln703_106_fu_13177_p1() {
    add_ln703_106_fu_13177_p1 = fm_buf_V_16_q0.read();
}

void ResNet::thread_add_ln703_106_fu_13177_p2() {
    add_ln703_106_fu_13177_p2 = (!linear_buf_16_V_181_reg_3543.read().is_01() || !add_ln703_106_fu_13177_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_16_V_181_reg_3543.read()) + sc_bigint<12>(add_ln703_106_fu_13177_p1.read()));
}

void ResNet::thread_add_ln703_107_fu_13267_p1() {
    add_ln703_107_fu_13267_p1 = fm_buf_V_17_q0.read();
}

void ResNet::thread_add_ln703_107_fu_13267_p2() {
    add_ln703_107_fu_13267_p2 = (!linear_buf_17_V_182_reg_3531.read().is_01() || !add_ln703_107_fu_13267_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_17_V_182_reg_3531.read()) + sc_bigint<12>(add_ln703_107_fu_13267_p1.read()));
}

void ResNet::thread_add_ln703_108_fu_13357_p1() {
    add_ln703_108_fu_13357_p1 = fm_buf_V_18_q0.read();
}

void ResNet::thread_add_ln703_108_fu_13357_p2() {
    add_ln703_108_fu_13357_p2 = (!linear_buf_18_V_183_reg_3519.read().is_01() || !add_ln703_108_fu_13357_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_18_V_183_reg_3519.read()) + sc_bigint<12>(add_ln703_108_fu_13357_p1.read()));
}

void ResNet::thread_add_ln703_109_fu_13447_p1() {
    add_ln703_109_fu_13447_p1 = fm_buf_V_19_q0.read();
}

void ResNet::thread_add_ln703_109_fu_13447_p2() {
    add_ln703_109_fu_13447_p2 = (!linear_buf_19_V_184_reg_3507.read().is_01() || !add_ln703_109_fu_13447_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_19_V_184_reg_3507.read()) + sc_bigint<12>(add_ln703_109_fu_13447_p1.read()));
}

void ResNet::thread_add_ln703_110_fu_13537_p1() {
    add_ln703_110_fu_13537_p1 = fm_buf_V_20_q0.read();
}

void ResNet::thread_add_ln703_110_fu_13537_p2() {
    add_ln703_110_fu_13537_p2 = (!linear_buf_20_V_185_reg_3495.read().is_01() || !add_ln703_110_fu_13537_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_20_V_185_reg_3495.read()) + sc_bigint<12>(add_ln703_110_fu_13537_p1.read()));
}

void ResNet::thread_add_ln703_111_fu_13627_p1() {
    add_ln703_111_fu_13627_p1 = fm_buf_V_21_q0.read();
}

void ResNet::thread_add_ln703_111_fu_13627_p2() {
    add_ln703_111_fu_13627_p2 = (!linear_buf_21_V_186_reg_3483.read().is_01() || !add_ln703_111_fu_13627_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_21_V_186_reg_3483.read()) + sc_bigint<12>(add_ln703_111_fu_13627_p1.read()));
}

void ResNet::thread_add_ln703_112_fu_13717_p1() {
    add_ln703_112_fu_13717_p1 = fm_buf_V_22_q0.read();
}

void ResNet::thread_add_ln703_112_fu_13717_p2() {
    add_ln703_112_fu_13717_p2 = (!linear_buf_22_V_187_reg_3471.read().is_01() || !add_ln703_112_fu_13717_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_22_V_187_reg_3471.read()) + sc_bigint<12>(add_ln703_112_fu_13717_p1.read()));
}

void ResNet::thread_add_ln703_113_fu_13807_p1() {
    add_ln703_113_fu_13807_p1 = fm_buf_V_23_q0.read();
}

void ResNet::thread_add_ln703_113_fu_13807_p2() {
    add_ln703_113_fu_13807_p2 = (!linear_buf_23_V_188_reg_3459.read().is_01() || !add_ln703_113_fu_13807_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_23_V_188_reg_3459.read()) + sc_bigint<12>(add_ln703_113_fu_13807_p1.read()));
}

void ResNet::thread_add_ln703_114_fu_13897_p1() {
    add_ln703_114_fu_13897_p1 = fm_buf_V_24_q0.read();
}

void ResNet::thread_add_ln703_114_fu_13897_p2() {
    add_ln703_114_fu_13897_p2 = (!linear_buf_24_V_189_reg_3447.read().is_01() || !add_ln703_114_fu_13897_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_24_V_189_reg_3447.read()) + sc_bigint<12>(add_ln703_114_fu_13897_p1.read()));
}

void ResNet::thread_add_ln703_115_fu_13987_p1() {
    add_ln703_115_fu_13987_p1 = fm_buf_V_25_q0.read();
}

void ResNet::thread_add_ln703_115_fu_13987_p2() {
    add_ln703_115_fu_13987_p2 = (!linear_buf_25_V_190_reg_3435.read().is_01() || !add_ln703_115_fu_13987_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_25_V_190_reg_3435.read()) + sc_bigint<12>(add_ln703_115_fu_13987_p1.read()));
}

void ResNet::thread_add_ln703_116_fu_14077_p1() {
    add_ln703_116_fu_14077_p1 = fm_buf_V_26_q0.read();
}

void ResNet::thread_add_ln703_116_fu_14077_p2() {
    add_ln703_116_fu_14077_p2 = (!linear_buf_26_V_191_reg_3423.read().is_01() || !add_ln703_116_fu_14077_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_26_V_191_reg_3423.read()) + sc_bigint<12>(add_ln703_116_fu_14077_p1.read()));
}

void ResNet::thread_add_ln703_117_fu_14167_p1() {
    add_ln703_117_fu_14167_p1 = fm_buf_V_27_q0.read();
}

void ResNet::thread_add_ln703_117_fu_14167_p2() {
    add_ln703_117_fu_14167_p2 = (!linear_buf_27_V_192_reg_3411.read().is_01() || !add_ln703_117_fu_14167_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_27_V_192_reg_3411.read()) + sc_bigint<12>(add_ln703_117_fu_14167_p1.read()));
}

void ResNet::thread_add_ln703_118_fu_14257_p1() {
    add_ln703_118_fu_14257_p1 = fm_buf_V_28_q0.read();
}

void ResNet::thread_add_ln703_118_fu_14257_p2() {
    add_ln703_118_fu_14257_p2 = (!linear_buf_28_V_193_reg_3399.read().is_01() || !add_ln703_118_fu_14257_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_28_V_193_reg_3399.read()) + sc_bigint<12>(add_ln703_118_fu_14257_p1.read()));
}

void ResNet::thread_add_ln703_119_fu_14347_p1() {
    add_ln703_119_fu_14347_p1 = fm_buf_V_29_q0.read();
}

void ResNet::thread_add_ln703_119_fu_14347_p2() {
    add_ln703_119_fu_14347_p2 = (!linear_buf_29_V_194_reg_3387.read().is_01() || !add_ln703_119_fu_14347_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_29_V_194_reg_3387.read()) + sc_bigint<12>(add_ln703_119_fu_14347_p1.read()));
}

void ResNet::thread_add_ln703_120_fu_14437_p1() {
    add_ln703_120_fu_14437_p1 = fm_buf_V_30_q0.read();
}

void ResNet::thread_add_ln703_120_fu_14437_p2() {
    add_ln703_120_fu_14437_p2 = (!linear_buf_30_V_195_reg_3375.read().is_01() || !add_ln703_120_fu_14437_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_30_V_195_reg_3375.read()) + sc_bigint<12>(add_ln703_120_fu_14437_p1.read()));
}

void ResNet::thread_add_ln703_121_fu_14527_p1() {
    add_ln703_121_fu_14527_p1 = fm_buf_V_31_q0.read();
}

void ResNet::thread_add_ln703_121_fu_14527_p2() {
    add_ln703_121_fu_14527_p2 = (!linear_buf_31_V_196_reg_3363.read().is_01() || !add_ln703_121_fu_14527_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_31_V_196_reg_3363.read()) + sc_bigint<12>(add_ln703_121_fu_14527_p1.read()));
}

void ResNet::thread_add_ln703_122_fu_14617_p1() {
    add_ln703_122_fu_14617_p1 = fm_buf_V_32_q0.read();
}

void ResNet::thread_add_ln703_122_fu_14617_p2() {
    add_ln703_122_fu_14617_p2 = (!linear_buf_32_V_197_reg_3351.read().is_01() || !add_ln703_122_fu_14617_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_32_V_197_reg_3351.read()) + sc_bigint<12>(add_ln703_122_fu_14617_p1.read()));
}

void ResNet::thread_add_ln703_123_fu_14707_p1() {
    add_ln703_123_fu_14707_p1 = fm_buf_V_33_q0.read();
}

void ResNet::thread_add_ln703_123_fu_14707_p2() {
    add_ln703_123_fu_14707_p2 = (!linear_buf_33_V_198_reg_3339.read().is_01() || !add_ln703_123_fu_14707_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_33_V_198_reg_3339.read()) + sc_bigint<12>(add_ln703_123_fu_14707_p1.read()));
}

void ResNet::thread_add_ln703_124_fu_14797_p1() {
    add_ln703_124_fu_14797_p1 = fm_buf_V_34_q0.read();
}

void ResNet::thread_add_ln703_124_fu_14797_p2() {
    add_ln703_124_fu_14797_p2 = (!linear_buf_34_V_199_reg_3327.read().is_01() || !add_ln703_124_fu_14797_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_34_V_199_reg_3327.read()) + sc_bigint<12>(add_ln703_124_fu_14797_p1.read()));
}

void ResNet::thread_add_ln703_125_fu_14887_p1() {
    add_ln703_125_fu_14887_p1 = fm_buf_V_35_q0.read();
}

void ResNet::thread_add_ln703_125_fu_14887_p2() {
    add_ln703_125_fu_14887_p2 = (!linear_buf_35_V_1100_reg_3315.read().is_01() || !add_ln703_125_fu_14887_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_35_V_1100_reg_3315.read()) + sc_bigint<12>(add_ln703_125_fu_14887_p1.read()));
}

void ResNet::thread_add_ln703_126_fu_14977_p1() {
    add_ln703_126_fu_14977_p1 = fm_buf_V_36_q0.read();
}

void ResNet::thread_add_ln703_126_fu_14977_p2() {
    add_ln703_126_fu_14977_p2 = (!linear_buf_36_V_1101_reg_3303.read().is_01() || !add_ln703_126_fu_14977_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_36_V_1101_reg_3303.read()) + sc_bigint<12>(add_ln703_126_fu_14977_p1.read()));
}

void ResNet::thread_add_ln703_127_fu_15067_p1() {
    add_ln703_127_fu_15067_p1 = fm_buf_V_37_q0.read();
}

void ResNet::thread_add_ln703_127_fu_15067_p2() {
    add_ln703_127_fu_15067_p2 = (!linear_buf_37_V_1102_reg_3291.read().is_01() || !add_ln703_127_fu_15067_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_37_V_1102_reg_3291.read()) + sc_bigint<12>(add_ln703_127_fu_15067_p1.read()));
}

void ResNet::thread_add_ln703_128_fu_15157_p1() {
    add_ln703_128_fu_15157_p1 = fm_buf_V_38_q0.read();
}

void ResNet::thread_add_ln703_128_fu_15157_p2() {
    add_ln703_128_fu_15157_p2 = (!linear_buf_38_V_1103_reg_3279.read().is_01() || !add_ln703_128_fu_15157_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_38_V_1103_reg_3279.read()) + sc_bigint<12>(add_ln703_128_fu_15157_p1.read()));
}

void ResNet::thread_add_ln703_129_fu_15247_p1() {
    add_ln703_129_fu_15247_p1 = fm_buf_V_39_q0.read();
}

void ResNet::thread_add_ln703_129_fu_15247_p2() {
    add_ln703_129_fu_15247_p2 = (!linear_buf_39_V_1104_reg_3267.read().is_01() || !add_ln703_129_fu_15247_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_39_V_1104_reg_3267.read()) + sc_bigint<12>(add_ln703_129_fu_15247_p1.read()));
}

void ResNet::thread_add_ln703_130_fu_15337_p1() {
    add_ln703_130_fu_15337_p1 = fm_buf_V_40_q0.read();
}

void ResNet::thread_add_ln703_130_fu_15337_p2() {
    add_ln703_130_fu_15337_p2 = (!linear_buf_40_V_1105_reg_3255.read().is_01() || !add_ln703_130_fu_15337_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_40_V_1105_reg_3255.read()) + sc_bigint<12>(add_ln703_130_fu_15337_p1.read()));
}

void ResNet::thread_add_ln703_131_fu_15427_p1() {
    add_ln703_131_fu_15427_p1 = fm_buf_V_41_q0.read();
}

void ResNet::thread_add_ln703_131_fu_15427_p2() {
    add_ln703_131_fu_15427_p2 = (!linear_buf_41_V_1106_reg_3243.read().is_01() || !add_ln703_131_fu_15427_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_41_V_1106_reg_3243.read()) + sc_bigint<12>(add_ln703_131_fu_15427_p1.read()));
}

void ResNet::thread_add_ln703_132_fu_15517_p1() {
    add_ln703_132_fu_15517_p1 = fm_buf_V_42_q0.read();
}

void ResNet::thread_add_ln703_132_fu_15517_p2() {
    add_ln703_132_fu_15517_p2 = (!linear_buf_42_V_1107_reg_3231.read().is_01() || !add_ln703_132_fu_15517_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_42_V_1107_reg_3231.read()) + sc_bigint<12>(add_ln703_132_fu_15517_p1.read()));
}

void ResNet::thread_add_ln703_133_fu_15607_p1() {
    add_ln703_133_fu_15607_p1 = fm_buf_V_43_q0.read();
}

void ResNet::thread_add_ln703_133_fu_15607_p2() {
    add_ln703_133_fu_15607_p2 = (!linear_buf_43_V_1108_reg_3219.read().is_01() || !add_ln703_133_fu_15607_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_43_V_1108_reg_3219.read()) + sc_bigint<12>(add_ln703_133_fu_15607_p1.read()));
}

void ResNet::thread_add_ln703_134_fu_15697_p1() {
    add_ln703_134_fu_15697_p1 = fm_buf_V_44_q0.read();
}

void ResNet::thread_add_ln703_134_fu_15697_p2() {
    add_ln703_134_fu_15697_p2 = (!linear_buf_44_V_1109_reg_3207.read().is_01() || !add_ln703_134_fu_15697_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_44_V_1109_reg_3207.read()) + sc_bigint<12>(add_ln703_134_fu_15697_p1.read()));
}

void ResNet::thread_add_ln703_135_fu_15787_p1() {
    add_ln703_135_fu_15787_p1 = fm_buf_V_45_q0.read();
}

void ResNet::thread_add_ln703_135_fu_15787_p2() {
    add_ln703_135_fu_15787_p2 = (!linear_buf_45_V_1110_reg_3195.read().is_01() || !add_ln703_135_fu_15787_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_45_V_1110_reg_3195.read()) + sc_bigint<12>(add_ln703_135_fu_15787_p1.read()));
}

void ResNet::thread_add_ln703_136_fu_15877_p1() {
    add_ln703_136_fu_15877_p1 = fm_buf_V_46_q0.read();
}

void ResNet::thread_add_ln703_136_fu_15877_p2() {
    add_ln703_136_fu_15877_p2 = (!linear_buf_46_V_1111_reg_3183.read().is_01() || !add_ln703_136_fu_15877_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_46_V_1111_reg_3183.read()) + sc_bigint<12>(add_ln703_136_fu_15877_p1.read()));
}

void ResNet::thread_add_ln703_137_fu_15967_p1() {
    add_ln703_137_fu_15967_p1 = fm_buf_V_47_q0.read();
}

void ResNet::thread_add_ln703_137_fu_15967_p2() {
    add_ln703_137_fu_15967_p2 = (!linear_buf_47_V_1112_reg_3171.read().is_01() || !add_ln703_137_fu_15967_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_47_V_1112_reg_3171.read()) + sc_bigint<12>(add_ln703_137_fu_15967_p1.read()));
}

void ResNet::thread_add_ln703_138_fu_16057_p1() {
    add_ln703_138_fu_16057_p1 = fm_buf_V_48_q0.read();
}

void ResNet::thread_add_ln703_138_fu_16057_p2() {
    add_ln703_138_fu_16057_p2 = (!linear_buf_48_V_1113_reg_3159.read().is_01() || !add_ln703_138_fu_16057_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_48_V_1113_reg_3159.read()) + sc_bigint<12>(add_ln703_138_fu_16057_p1.read()));
}

void ResNet::thread_add_ln703_139_fu_16147_p1() {
    add_ln703_139_fu_16147_p1 = fm_buf_V_49_q0.read();
}

void ResNet::thread_add_ln703_139_fu_16147_p2() {
    add_ln703_139_fu_16147_p2 = (!linear_buf_49_V_1114_reg_3147.read().is_01() || !add_ln703_139_fu_16147_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_49_V_1114_reg_3147.read()) + sc_bigint<12>(add_ln703_139_fu_16147_p1.read()));
}

void ResNet::thread_add_ln703_140_fu_16237_p1() {
    add_ln703_140_fu_16237_p1 = fm_buf_V_50_q0.read();
}

void ResNet::thread_add_ln703_140_fu_16237_p2() {
    add_ln703_140_fu_16237_p2 = (!linear_buf_50_V_1115_reg_3135.read().is_01() || !add_ln703_140_fu_16237_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_50_V_1115_reg_3135.read()) + sc_bigint<12>(add_ln703_140_fu_16237_p1.read()));
}

void ResNet::thread_add_ln703_141_fu_16327_p1() {
    add_ln703_141_fu_16327_p1 = fm_buf_V_51_q0.read();
}

void ResNet::thread_add_ln703_141_fu_16327_p2() {
    add_ln703_141_fu_16327_p2 = (!linear_buf_51_V_1116_reg_3123.read().is_01() || !add_ln703_141_fu_16327_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_51_V_1116_reg_3123.read()) + sc_bigint<12>(add_ln703_141_fu_16327_p1.read()));
}

void ResNet::thread_add_ln703_142_fu_16417_p1() {
    add_ln703_142_fu_16417_p1 = fm_buf_V_52_q0.read();
}

void ResNet::thread_add_ln703_142_fu_16417_p2() {
    add_ln703_142_fu_16417_p2 = (!linear_buf_52_V_1117_reg_3111.read().is_01() || !add_ln703_142_fu_16417_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_52_V_1117_reg_3111.read()) + sc_bigint<12>(add_ln703_142_fu_16417_p1.read()));
}

void ResNet::thread_add_ln703_143_fu_16507_p1() {
    add_ln703_143_fu_16507_p1 = fm_buf_V_53_q0.read();
}

void ResNet::thread_add_ln703_143_fu_16507_p2() {
    add_ln703_143_fu_16507_p2 = (!linear_buf_53_V_1118_reg_3099.read().is_01() || !add_ln703_143_fu_16507_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_53_V_1118_reg_3099.read()) + sc_bigint<12>(add_ln703_143_fu_16507_p1.read()));
}

void ResNet::thread_add_ln703_144_fu_16597_p1() {
    add_ln703_144_fu_16597_p1 = fm_buf_V_54_q0.read();
}

void ResNet::thread_add_ln703_144_fu_16597_p2() {
    add_ln703_144_fu_16597_p2 = (!linear_buf_54_V_1119_reg_3087.read().is_01() || !add_ln703_144_fu_16597_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_54_V_1119_reg_3087.read()) + sc_bigint<12>(add_ln703_144_fu_16597_p1.read()));
}

void ResNet::thread_add_ln703_145_fu_16687_p1() {
    add_ln703_145_fu_16687_p1 = fm_buf_V_55_q0.read();
}

void ResNet::thread_add_ln703_145_fu_16687_p2() {
    add_ln703_145_fu_16687_p2 = (!linear_buf_55_V_1120_reg_3075.read().is_01() || !add_ln703_145_fu_16687_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_55_V_1120_reg_3075.read()) + sc_bigint<12>(add_ln703_145_fu_16687_p1.read()));
}

void ResNet::thread_add_ln703_146_fu_16777_p1() {
    add_ln703_146_fu_16777_p1 = fm_buf_V_56_q0.read();
}

void ResNet::thread_add_ln703_146_fu_16777_p2() {
    add_ln703_146_fu_16777_p2 = (!linear_buf_56_V_1121_reg_3063.read().is_01() || !add_ln703_146_fu_16777_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_56_V_1121_reg_3063.read()) + sc_bigint<12>(add_ln703_146_fu_16777_p1.read()));
}

void ResNet::thread_add_ln703_147_fu_16867_p1() {
    add_ln703_147_fu_16867_p1 = fm_buf_V_57_q0.read();
}

void ResNet::thread_add_ln703_147_fu_16867_p2() {
    add_ln703_147_fu_16867_p2 = (!linear_buf_57_V_1122_reg_3051.read().is_01() || !add_ln703_147_fu_16867_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_57_V_1122_reg_3051.read()) + sc_bigint<12>(add_ln703_147_fu_16867_p1.read()));
}

void ResNet::thread_add_ln703_148_fu_16957_p1() {
    add_ln703_148_fu_16957_p1 = fm_buf_V_58_q0.read();
}

void ResNet::thread_add_ln703_148_fu_16957_p2() {
    add_ln703_148_fu_16957_p2 = (!linear_buf_58_V_1123_reg_3039.read().is_01() || !add_ln703_148_fu_16957_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_58_V_1123_reg_3039.read()) + sc_bigint<12>(add_ln703_148_fu_16957_p1.read()));
}

void ResNet::thread_add_ln703_149_fu_17047_p1() {
    add_ln703_149_fu_17047_p1 = fm_buf_V_59_q0.read();
}

void ResNet::thread_add_ln703_149_fu_17047_p2() {
    add_ln703_149_fu_17047_p2 = (!linear_buf_59_V_1124_reg_3027.read().is_01() || !add_ln703_149_fu_17047_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_59_V_1124_reg_3027.read()) + sc_bigint<12>(add_ln703_149_fu_17047_p1.read()));
}

void ResNet::thread_add_ln703_150_fu_17137_p1() {
    add_ln703_150_fu_17137_p1 = fm_buf_V_60_q0.read();
}

void ResNet::thread_add_ln703_150_fu_17137_p2() {
    add_ln703_150_fu_17137_p2 = (!linear_buf_60_V_1125_reg_3015.read().is_01() || !add_ln703_150_fu_17137_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_60_V_1125_reg_3015.read()) + sc_bigint<12>(add_ln703_150_fu_17137_p1.read()));
}

void ResNet::thread_add_ln703_151_fu_17227_p1() {
    add_ln703_151_fu_17227_p1 = fm_buf_V_61_q0.read();
}

void ResNet::thread_add_ln703_151_fu_17227_p2() {
    add_ln703_151_fu_17227_p2 = (!linear_buf_61_V_1126_reg_3003.read().is_01() || !add_ln703_151_fu_17227_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_61_V_1126_reg_3003.read()) + sc_bigint<12>(add_ln703_151_fu_17227_p1.read()));
}

void ResNet::thread_add_ln703_152_fu_17317_p1() {
    add_ln703_152_fu_17317_p1 = fm_buf_V_62_q0.read();
}

void ResNet::thread_add_ln703_152_fu_17317_p2() {
    add_ln703_152_fu_17317_p2 = (!linear_buf_62_V_1127_reg_2991.read().is_01() || !add_ln703_152_fu_17317_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_62_V_1127_reg_2991.read()) + sc_bigint<12>(add_ln703_152_fu_17317_p1.read()));
}

void ResNet::thread_add_ln703_153_fu_17407_p1() {
    add_ln703_153_fu_17407_p1 = fm_buf_V_63_q0.read();
}

void ResNet::thread_add_ln703_153_fu_17407_p2() {
    add_ln703_153_fu_17407_p2 = (!linear_buf_63_V_1128_reg_2979.read().is_01() || !add_ln703_153_fu_17407_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_63_V_1128_reg_2979.read()) + sc_bigint<12>(add_ln703_153_fu_17407_p1.read()));
}

void ResNet::thread_add_ln703_91_fu_11827_p1() {
    add_ln703_91_fu_11827_p1 = fm_buf_V_1_q0.read();
}

void ResNet::thread_add_ln703_91_fu_11827_p2() {
    add_ln703_91_fu_11827_p2 = (!linear_buf_1_V_166_reg_3723.read().is_01() || !add_ln703_91_fu_11827_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_1_V_166_reg_3723.read()) + sc_bigint<12>(add_ln703_91_fu_11827_p1.read()));
}

void ResNet::thread_add_ln703_92_fu_11917_p1() {
    add_ln703_92_fu_11917_p1 = fm_buf_V_2_q0.read();
}

void ResNet::thread_add_ln703_92_fu_11917_p2() {
    add_ln703_92_fu_11917_p2 = (!linear_buf_2_V_167_reg_3711.read().is_01() || !add_ln703_92_fu_11917_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_2_V_167_reg_3711.read()) + sc_bigint<12>(add_ln703_92_fu_11917_p1.read()));
}

void ResNet::thread_add_ln703_93_fu_12007_p1() {
    add_ln703_93_fu_12007_p1 = fm_buf_V_3_q0.read();
}

void ResNet::thread_add_ln703_93_fu_12007_p2() {
    add_ln703_93_fu_12007_p2 = (!linear_buf_3_V_168_reg_3699.read().is_01() || !add_ln703_93_fu_12007_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_3_V_168_reg_3699.read()) + sc_bigint<12>(add_ln703_93_fu_12007_p1.read()));
}

void ResNet::thread_add_ln703_94_fu_12097_p1() {
    add_ln703_94_fu_12097_p1 = fm_buf_V_4_q0.read();
}

void ResNet::thread_add_ln703_94_fu_12097_p2() {
    add_ln703_94_fu_12097_p2 = (!linear_buf_4_V_169_reg_3687.read().is_01() || !add_ln703_94_fu_12097_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_4_V_169_reg_3687.read()) + sc_bigint<12>(add_ln703_94_fu_12097_p1.read()));
}

void ResNet::thread_add_ln703_95_fu_12187_p1() {
    add_ln703_95_fu_12187_p1 = fm_buf_V_5_q0.read();
}

void ResNet::thread_add_ln703_95_fu_12187_p2() {
    add_ln703_95_fu_12187_p2 = (!linear_buf_5_V_170_reg_3675.read().is_01() || !add_ln703_95_fu_12187_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_5_V_170_reg_3675.read()) + sc_bigint<12>(add_ln703_95_fu_12187_p1.read()));
}

void ResNet::thread_add_ln703_96_fu_12277_p1() {
    add_ln703_96_fu_12277_p1 = fm_buf_V_6_q0.read();
}

void ResNet::thread_add_ln703_96_fu_12277_p2() {
    add_ln703_96_fu_12277_p2 = (!linear_buf_6_V_171_reg_3663.read().is_01() || !add_ln703_96_fu_12277_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_6_V_171_reg_3663.read()) + sc_bigint<12>(add_ln703_96_fu_12277_p1.read()));
}

void ResNet::thread_add_ln703_97_fu_12367_p1() {
    add_ln703_97_fu_12367_p1 = fm_buf_V_7_q0.read();
}

void ResNet::thread_add_ln703_97_fu_12367_p2() {
    add_ln703_97_fu_12367_p2 = (!linear_buf_7_V_172_reg_3651.read().is_01() || !add_ln703_97_fu_12367_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_7_V_172_reg_3651.read()) + sc_bigint<12>(add_ln703_97_fu_12367_p1.read()));
}

void ResNet::thread_add_ln703_98_fu_12457_p1() {
    add_ln703_98_fu_12457_p1 = fm_buf_V_8_q0.read();
}

void ResNet::thread_add_ln703_98_fu_12457_p2() {
    add_ln703_98_fu_12457_p2 = (!linear_buf_8_V_173_reg_3639.read().is_01() || !add_ln703_98_fu_12457_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_8_V_173_reg_3639.read()) + sc_bigint<12>(add_ln703_98_fu_12457_p1.read()));
}

void ResNet::thread_add_ln703_99_fu_12547_p1() {
    add_ln703_99_fu_12547_p1 = fm_buf_V_9_q0.read();
}

void ResNet::thread_add_ln703_99_fu_12547_p2() {
    add_ln703_99_fu_12547_p2 = (!linear_buf_9_V_174_reg_3627.read().is_01() || !add_ln703_99_fu_12547_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_9_V_174_reg_3627.read()) + sc_bigint<12>(add_ln703_99_fu_12547_p1.read()));
}

void ResNet::thread_add_ln703_fu_11737_p1() {
    add_ln703_fu_11737_p1 = fm_buf_V_0_q0.read();
}

void ResNet::thread_add_ln703_fu_11737_p2() {
    add_ln703_fu_11737_p2 = (!linear_buf_0_V_165_reg_3735.read().is_01() || !add_ln703_fu_11737_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_0_V_165_reg_3735.read()) + sc_bigint<12>(add_ln703_fu_11737_p1.read()));
}

void ResNet::thread_add_ln89_fu_4695_p2() {
    add_ln89_fu_4695_p2 = (!indvar_flatten19_reg_2291.read().is_01() || !ap_const_lv13_1.is_01())? sc_lv<13>(): (sc_biguint<13>(indvar_flatten19_reg_2291.read()) + sc_biguint<13>(ap_const_lv13_1));
}

void ResNet::thread_add_ln90_1_fu_4707_p2() {
    add_ln90_1_fu_4707_p2 = (!indvar_flatten_reg_2314.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(indvar_flatten_reg_2314.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void ResNet::thread_add_ln93_fu_4811_p2() {
    add_ln93_fu_4811_p2 = (!zext_ln89_fu_4753_p1.read().is_01() || !tmp129_fu_4801_p4.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln89_fu_4753_p1.read()) + sc_biguint<13>(tmp129_fu_4801_p4.read()));
}

void ResNet::thread_and_ln122_1_fu_6388_p2() {
    and_ln122_1_fu_6388_p2 = (icmp_ln124_fu_6382_p2.read() & xor_ln122_fu_6364_p2.read());
}

void ResNet::thread_and_ln122_fu_6376_p2() {
    and_ln122_fu_6376_p2 = (icmp_ln125_fu_6370_p2.read() & xor_ln122_fu_6364_p2.read());
}

void ResNet::thread_and_ln123_fu_6478_p2() {
    and_ln123_fu_6478_p2 = (and_ln122_fu_6376_p2.read() & or_ln123_1_fu_6472_p2.read());
}

void ResNet::thread_and_ln416_55_fu_6908_p2() {
    and_ln416_55_fu_6908_p2 = (tmp_754_fu_6868_p3.read() & xor_ln416_55_fu_6902_p2.read());
}

void ResNet::thread_and_ln416_56_fu_7088_p2() {
    and_ln416_56_fu_7088_p2 = (tmp_760_fu_7048_p3.read() & xor_ln416_56_fu_7082_p2.read());
}

void ResNet::thread_and_ln416_57_fu_7268_p2() {
    and_ln416_57_fu_7268_p2 = (tmp_766_fu_7228_p3.read() & xor_ln416_57_fu_7262_p2.read());
}

void ResNet::thread_and_ln416_58_fu_7448_p2() {
    and_ln416_58_fu_7448_p2 = (tmp_772_fu_7408_p3.read() & xor_ln416_58_fu_7442_p2.read());
}

void ResNet::thread_and_ln416_59_fu_7628_p2() {
    and_ln416_59_fu_7628_p2 = (tmp_778_fu_7588_p3.read() & xor_ln416_59_fu_7622_p2.read());
}

void ResNet::thread_and_ln416_60_fu_7808_p2() {
    and_ln416_60_fu_7808_p2 = (tmp_784_fu_7768_p3.read() & xor_ln416_60_fu_7802_p2.read());
}

void ResNet::thread_and_ln416_61_fu_7988_p2() {
    and_ln416_61_fu_7988_p2 = (tmp_790_fu_7948_p3.read() & xor_ln416_61_fu_7982_p2.read());
}

void ResNet::thread_and_ln416_62_fu_8168_p2() {
    and_ln416_62_fu_8168_p2 = (tmp_796_fu_8128_p3.read() & xor_ln416_62_fu_8162_p2.read());
}

void ResNet::thread_and_ln416_63_fu_8348_p2() {
    and_ln416_63_fu_8348_p2 = (tmp_802_fu_8308_p3.read() & xor_ln416_63_fu_8342_p2.read());
}

void ResNet::thread_and_ln416_64_fu_8528_p2() {
    and_ln416_64_fu_8528_p2 = (tmp_808_fu_8488_p3.read() & xor_ln416_64_fu_8522_p2.read());
}

void ResNet::thread_and_ln416_65_fu_8708_p2() {
    and_ln416_65_fu_8708_p2 = (tmp_814_fu_8668_p3.read() & xor_ln416_65_fu_8702_p2.read());
}

void ResNet::thread_and_ln416_66_fu_8888_p2() {
    and_ln416_66_fu_8888_p2 = (tmp_820_fu_8848_p3.read() & xor_ln416_66_fu_8882_p2.read());
}

void ResNet::thread_and_ln416_67_fu_9068_p2() {
    and_ln416_67_fu_9068_p2 = (tmp_826_fu_9028_p3.read() & xor_ln416_67_fu_9062_p2.read());
}

void ResNet::thread_and_ln416_68_fu_9248_p2() {
    and_ln416_68_fu_9248_p2 = (tmp_832_fu_9208_p3.read() & xor_ln416_68_fu_9242_p2.read());
}

void ResNet::thread_and_ln416_69_fu_9428_p2() {
    and_ln416_69_fu_9428_p2 = (tmp_838_fu_9388_p3.read() & xor_ln416_69_fu_9422_p2.read());
}

void ResNet::thread_and_ln416_fu_6728_p2() {
    and_ln416_fu_6728_p2 = (tmp_748_fu_6688_p3.read() & xor_ln416_fu_6722_p2.read());
}

void ResNet::thread_and_ln779_10_fu_8594_p2() {
    and_ln779_10_fu_8594_p2 = (icmp_ln879_132_fu_8552_p2.read() & xor_ln779_64_fu_8588_p2.read());
}

void ResNet::thread_and_ln779_11_fu_8774_p2() {
    and_ln779_11_fu_8774_p2 = (icmp_ln879_134_fu_8732_p2.read() & xor_ln779_65_fu_8768_p2.read());
}

void ResNet::thread_and_ln779_12_fu_8954_p2() {
    and_ln779_12_fu_8954_p2 = (icmp_ln879_136_fu_8912_p2.read() & xor_ln779_66_fu_8948_p2.read());
}

void ResNet::thread_and_ln779_13_fu_9134_p2() {
    and_ln779_13_fu_9134_p2 = (icmp_ln879_138_fu_9092_p2.read() & xor_ln779_67_fu_9128_p2.read());
}

void ResNet::thread_and_ln779_14_fu_9314_p2() {
    and_ln779_14_fu_9314_p2 = (icmp_ln879_140_fu_9272_p2.read() & xor_ln779_68_fu_9308_p2.read());
}

void ResNet::thread_and_ln779_15_fu_9494_p2() {
    and_ln779_15_fu_9494_p2 = (icmp_ln879_142_fu_9452_p2.read() & xor_ln779_69_fu_9488_p2.read());
}

void ResNet::thread_and_ln779_1_fu_6974_p2() {
    and_ln779_1_fu_6974_p2 = (icmp_ln879_114_fu_6932_p2.read() & xor_ln779_55_fu_6968_p2.read());
}

void ResNet::thread_and_ln779_2_fu_7154_p2() {
    and_ln779_2_fu_7154_p2 = (icmp_ln879_116_fu_7112_p2.read() & xor_ln779_56_fu_7148_p2.read());
}

void ResNet::thread_and_ln779_3_fu_7334_p2() {
    and_ln779_3_fu_7334_p2 = (icmp_ln879_118_fu_7292_p2.read() & xor_ln779_57_fu_7328_p2.read());
}

void ResNet::thread_and_ln779_4_fu_7514_p2() {
    and_ln779_4_fu_7514_p2 = (icmp_ln879_120_fu_7472_p2.read() & xor_ln779_58_fu_7508_p2.read());
}

void ResNet::thread_and_ln779_5_fu_7694_p2() {
    and_ln779_5_fu_7694_p2 = (icmp_ln879_122_fu_7652_p2.read() & xor_ln779_59_fu_7688_p2.read());
}

void ResNet::thread_and_ln779_6_fu_7874_p2() {
    and_ln779_6_fu_7874_p2 = (icmp_ln879_124_fu_7832_p2.read() & xor_ln779_60_fu_7868_p2.read());
}

void ResNet::thread_and_ln779_7_fu_8054_p2() {
    and_ln779_7_fu_8054_p2 = (icmp_ln879_126_fu_8012_p2.read() & xor_ln779_61_fu_8048_p2.read());
}

void ResNet::thread_and_ln779_8_fu_8234_p2() {
    and_ln779_8_fu_8234_p2 = (icmp_ln879_128_fu_8192_p2.read() & xor_ln779_62_fu_8228_p2.read());
}

void ResNet::thread_and_ln779_9_fu_8414_p2() {
    and_ln779_9_fu_8414_p2 = (icmp_ln879_130_fu_8372_p2.read() & xor_ln779_63_fu_8408_p2.read());
}

void ResNet::thread_and_ln779_fu_6794_p2() {
    and_ln779_fu_6794_p2 = (icmp_ln879_fu_6752_p2.read() & xor_ln779_fu_6788_p2.read());
}

void ResNet::thread_and_ln781_10_fu_10485_p2() {
    and_ln781_10_fu_10485_p2 = (and_ln416_64_reg_22571.read() & icmp_ln879_133_reg_22582.read());
}

void ResNet::thread_and_ln781_11_fu_10572_p2() {
    and_ln781_11_fu_10572_p2 = (and_ln416_65_reg_22611.read() & icmp_ln879_135_reg_22622.read());
}

void ResNet::thread_and_ln781_12_fu_10659_p2() {
    and_ln781_12_fu_10659_p2 = (and_ln416_66_reg_22651.read() & icmp_ln879_137_reg_22662.read());
}

void ResNet::thread_and_ln781_13_fu_10746_p2() {
    and_ln781_13_fu_10746_p2 = (and_ln416_67_reg_22691.read() & icmp_ln879_139_reg_22702.read());
}

void ResNet::thread_and_ln781_14_fu_10833_p2() {
    and_ln781_14_fu_10833_p2 = (and_ln416_68_reg_22731.read() & icmp_ln879_141_reg_22742.read());
}

void ResNet::thread_and_ln781_15_fu_10920_p2() {
    and_ln781_15_fu_10920_p2 = (and_ln416_69_reg_22771.read() & icmp_ln879_143_reg_22782.read());
}

void ResNet::thread_and_ln781_1_fu_9702_p2() {
    and_ln781_1_fu_9702_p2 = (and_ln416_55_reg_22211.read() & icmp_ln879_115_reg_22222.read());
}

void ResNet::thread_and_ln781_2_fu_9789_p2() {
    and_ln781_2_fu_9789_p2 = (and_ln416_56_reg_22251.read() & icmp_ln879_117_reg_22262.read());
}

void ResNet::thread_and_ln781_3_fu_9876_p2() {
    and_ln781_3_fu_9876_p2 = (and_ln416_57_reg_22291.read() & icmp_ln879_119_reg_22302.read());
}

void ResNet::thread_and_ln781_4_fu_9963_p2() {
    and_ln781_4_fu_9963_p2 = (and_ln416_58_reg_22331.read() & icmp_ln879_121_reg_22342.read());
}

void ResNet::thread_and_ln781_5_fu_10050_p2() {
    and_ln781_5_fu_10050_p2 = (and_ln416_59_reg_22371.read() & icmp_ln879_123_reg_22382.read());
}

void ResNet::thread_and_ln781_6_fu_10137_p2() {
    and_ln781_6_fu_10137_p2 = (and_ln416_60_reg_22411.read() & icmp_ln879_125_reg_22422.read());
}

void ResNet::thread_and_ln781_7_fu_10224_p2() {
    and_ln781_7_fu_10224_p2 = (and_ln416_61_reg_22451.read() & icmp_ln879_127_reg_22462.read());
}

void ResNet::thread_and_ln781_8_fu_10311_p2() {
    and_ln781_8_fu_10311_p2 = (and_ln416_62_reg_22491.read() & icmp_ln879_129_reg_22502.read());
}

void ResNet::thread_and_ln781_9_fu_10398_p2() {
    and_ln781_9_fu_10398_p2 = (and_ln416_63_reg_22531.read() & icmp_ln879_131_reg_22542.read());
}

void ResNet::thread_and_ln781_fu_9615_p2() {
    and_ln781_fu_9615_p2 = (and_ln416_reg_22171.read() & icmp_ln879_113_reg_22182.read());
}

void ResNet::thread_and_ln785_55_fu_9722_p2() {
    and_ln785_55_fu_9722_p2 = (or_ln785_1_fu_9712_p2.read() & xor_ln785_114_fu_9717_p2.read());
}

void ResNet::thread_and_ln785_56_fu_9809_p2() {
    and_ln785_56_fu_9809_p2 = (or_ln785_2_fu_9799_p2.read() & xor_ln785_115_fu_9804_p2.read());
}

void ResNet::thread_and_ln785_57_fu_9896_p2() {
    and_ln785_57_fu_9896_p2 = (or_ln785_3_fu_9886_p2.read() & xor_ln785_116_fu_9891_p2.read());
}

void ResNet::thread_and_ln785_58_fu_9983_p2() {
    and_ln785_58_fu_9983_p2 = (or_ln785_4_fu_9973_p2.read() & xor_ln785_117_fu_9978_p2.read());
}

void ResNet::thread_and_ln785_59_fu_10070_p2() {
    and_ln785_59_fu_10070_p2 = (or_ln785_5_fu_10060_p2.read() & xor_ln785_118_fu_10065_p2.read());
}

void ResNet::thread_and_ln785_60_fu_10157_p2() {
    and_ln785_60_fu_10157_p2 = (or_ln785_55_fu_10147_p2.read() & xor_ln785_119_fu_10152_p2.read());
}

void ResNet::thread_and_ln785_61_fu_10244_p2() {
    and_ln785_61_fu_10244_p2 = (or_ln785_56_fu_10234_p2.read() & xor_ln785_120_fu_10239_p2.read());
}

void ResNet::thread_and_ln785_62_fu_10331_p2() {
    and_ln785_62_fu_10331_p2 = (or_ln785_8_fu_10321_p2.read() & xor_ln785_121_fu_10326_p2.read());
}

void ResNet::thread_and_ln785_63_fu_10418_p2() {
    and_ln785_63_fu_10418_p2 = (or_ln785_9_fu_10408_p2.read() & xor_ln785_122_fu_10413_p2.read());
}

void ResNet::thread_and_ln785_64_fu_10505_p2() {
    and_ln785_64_fu_10505_p2 = (or_ln785_10_fu_10495_p2.read() & xor_ln785_123_fu_10500_p2.read());
}

void ResNet::thread_and_ln785_65_fu_10592_p2() {
    and_ln785_65_fu_10592_p2 = (or_ln785_11_fu_10582_p2.read() & xor_ln785_125_fu_10587_p2.read());
}

void ResNet::thread_and_ln785_66_fu_10679_p2() {
    and_ln785_66_fu_10679_p2 = (or_ln785_12_fu_10669_p2.read() & xor_ln785_127_fu_10674_p2.read());
}

void ResNet::thread_and_ln785_67_fu_10766_p2() {
    and_ln785_67_fu_10766_p2 = (or_ln785_13_fu_10756_p2.read() & xor_ln785_129_fu_10761_p2.read());
}

void ResNet::thread_and_ln785_68_fu_10853_p2() {
    and_ln785_68_fu_10853_p2 = (or_ln785_14_fu_10843_p2.read() & xor_ln785_130_fu_10848_p2.read());
}

void ResNet::thread_and_ln785_69_fu_10940_p2() {
    and_ln785_69_fu_10940_p2 = (or_ln785_15_fu_10930_p2.read() & xor_ln785_131_fu_10935_p2.read());
}

void ResNet::thread_and_ln785_fu_9635_p2() {
    and_ln785_fu_9635_p2 = (or_ln785_fu_9625_p2.read() & xor_ln785_113_fu_9630_p2.read());
}

void ResNet::thread_and_ln786_10_fu_8608_p2() {
    and_ln786_10_fu_8608_p2 = (tmp_811_fu_8534_p3.read() & select_ln416_64_fu_8600_p3.read());
}

void ResNet::thread_and_ln786_11_fu_8788_p2() {
    and_ln786_11_fu_8788_p2 = (tmp_817_fu_8714_p3.read() & select_ln416_65_fu_8780_p3.read());
}

void ResNet::thread_and_ln786_12_fu_8968_p2() {
    and_ln786_12_fu_8968_p2 = (tmp_823_fu_8894_p3.read() & select_ln416_66_fu_8960_p3.read());
}

void ResNet::thread_and_ln786_13_fu_9148_p2() {
    and_ln786_13_fu_9148_p2 = (tmp_829_fu_9074_p3.read() & select_ln416_67_fu_9140_p3.read());
}

void ResNet::thread_and_ln786_14_fu_9328_p2() {
    and_ln786_14_fu_9328_p2 = (tmp_835_fu_9254_p3.read() & select_ln416_68_fu_9320_p3.read());
}

void ResNet::thread_and_ln786_155_fu_9652_p2() {
    and_ln786_155_fu_9652_p2 = (tmp_747_reg_22159.read() & xor_ln786_fu_9646_p2.read());
}

void ResNet::thread_and_ln786_156_fu_9739_p2() {
    and_ln786_156_fu_9739_p2 = (tmp_753_reg_22199.read() & xor_ln786_75_fu_9733_p2.read());
}

void ResNet::thread_and_ln786_157_fu_9826_p2() {
    and_ln786_157_fu_9826_p2 = (tmp_759_reg_22239.read() & xor_ln786_76_fu_9820_p2.read());
}

void ResNet::thread_and_ln786_158_fu_9913_p2() {
    and_ln786_158_fu_9913_p2 = (tmp_765_reg_22279.read() & xor_ln786_78_fu_9907_p2.read());
}

void ResNet::thread_and_ln786_159_fu_10000_p2() {
    and_ln786_159_fu_10000_p2 = (tmp_771_reg_22319.read() & xor_ln786_79_fu_9994_p2.read());
}

void ResNet::thread_and_ln786_15_fu_9508_p2() {
    and_ln786_15_fu_9508_p2 = (tmp_841_fu_9434_p3.read() & select_ln416_69_fu_9500_p3.read());
}

void ResNet::thread_and_ln786_160_fu_11757_p2() {
    and_ln786_160_fu_11757_p2 = (tmp_919_fu_11729_p3.read() & xor_ln786_68_fu_11751_p2.read());
}

void ResNet::thread_and_ln786_161_fu_10087_p2() {
    and_ln786_161_fu_10087_p2 = (tmp_777_reg_22359.read() & xor_ln786_81_fu_10081_p2.read());
}

void ResNet::thread_and_ln786_162_fu_10174_p2() {
    and_ln786_162_fu_10174_p2 = (tmp_783_reg_22399.read() & xor_ln786_83_fu_10168_p2.read());
}

void ResNet::thread_and_ln786_163_fu_11847_p2() {
    and_ln786_163_fu_11847_p2 = (tmp_921_fu_11819_p3.read() & xor_ln786_70_fu_11841_p2.read());
}

void ResNet::thread_and_ln786_164_fu_10261_p2() {
    and_ln786_164_fu_10261_p2 = (tmp_789_reg_22439.read() & xor_ln786_85_fu_10255_p2.read());
}

void ResNet::thread_and_ln786_165_fu_11937_p2() {
    and_ln786_165_fu_11937_p2 = (tmp_923_fu_11909_p3.read() & xor_ln786_72_fu_11931_p2.read());
}

void ResNet::thread_and_ln786_166_fu_10348_p2() {
    and_ln786_166_fu_10348_p2 = (tmp_795_reg_22479.read() & xor_ln786_87_fu_10342_p2.read());
}

void ResNet::thread_and_ln786_167_fu_10435_p2() {
    and_ln786_167_fu_10435_p2 = (tmp_801_reg_22519.read() & xor_ln786_89_fu_10429_p2.read());
}

void ResNet::thread_and_ln786_168_fu_12027_p2() {
    and_ln786_168_fu_12027_p2 = (tmp_925_fu_11999_p3.read() & xor_ln786_74_fu_12021_p2.read());
}

void ResNet::thread_and_ln786_169_fu_10522_p2() {
    and_ln786_169_fu_10522_p2 = (tmp_807_reg_22559.read() & xor_ln786_91_fu_10516_p2.read());
}

void ResNet::thread_and_ln786_170_fu_10609_p2() {
    and_ln786_170_fu_10609_p2 = (tmp_813_reg_22599.read() & xor_ln786_93_fu_10603_p2.read());
}

void ResNet::thread_and_ln786_171_fu_12117_p2() {
    and_ln786_171_fu_12117_p2 = (tmp_927_fu_12089_p3.read() & xor_ln786_77_fu_12111_p2.read());
}

void ResNet::thread_and_ln786_172_fu_10696_p2() {
    and_ln786_172_fu_10696_p2 = (tmp_819_reg_22639.read() & xor_ln786_95_fu_10690_p2.read());
}

void ResNet::thread_and_ln786_173_fu_10783_p2() {
    and_ln786_173_fu_10783_p2 = (tmp_825_reg_22679.read() & xor_ln786_97_fu_10777_p2.read());
}

void ResNet::thread_and_ln786_174_fu_12207_p2() {
    and_ln786_174_fu_12207_p2 = (tmp_929_fu_12179_p3.read() & xor_ln786_80_fu_12201_p2.read());
}

void ResNet::thread_and_ln786_175_fu_10870_p2() {
    and_ln786_175_fu_10870_p2 = (tmp_831_reg_22719.read() & xor_ln786_99_fu_10864_p2.read());
}

void ResNet::thread_and_ln786_176_fu_12297_p2() {
    and_ln786_176_fu_12297_p2 = (tmp_931_fu_12269_p3.read() & xor_ln786_82_fu_12291_p2.read());
}

void ResNet::thread_and_ln786_177_fu_10957_p2() {
    and_ln786_177_fu_10957_p2 = (tmp_837_reg_22759.read() & xor_ln786_101_fu_10951_p2.read());
}

void ResNet::thread_and_ln786_178_fu_12387_p2() {
    and_ln786_178_fu_12387_p2 = (tmp_933_fu_12359_p3.read() & xor_ln786_84_fu_12381_p2.read());
}

void ResNet::thread_and_ln786_179_fu_12477_p2() {
    and_ln786_179_fu_12477_p2 = (tmp_935_fu_12449_p3.read() & xor_ln786_86_fu_12471_p2.read());
}

void ResNet::thread_and_ln786_180_fu_12567_p2() {
    and_ln786_180_fu_12567_p2 = (tmp_937_fu_12539_p3.read() & xor_ln786_88_fu_12561_p2.read());
}

void ResNet::thread_and_ln786_181_fu_12657_p2() {
    and_ln786_181_fu_12657_p2 = (tmp_939_fu_12629_p3.read() & xor_ln786_90_fu_12651_p2.read());
}

void ResNet::thread_and_ln786_182_fu_12747_p2() {
    and_ln786_182_fu_12747_p2 = (tmp_941_fu_12719_p3.read() & xor_ln786_92_fu_12741_p2.read());
}

void ResNet::thread_and_ln786_183_fu_12837_p2() {
    and_ln786_183_fu_12837_p2 = (tmp_943_fu_12809_p3.read() & xor_ln786_94_fu_12831_p2.read());
}

void ResNet::thread_and_ln786_184_fu_12927_p2() {
    and_ln786_184_fu_12927_p2 = (tmp_945_fu_12899_p3.read() & xor_ln786_96_fu_12921_p2.read());
}

void ResNet::thread_and_ln786_185_fu_13017_p2() {
    and_ln786_185_fu_13017_p2 = (tmp_947_fu_12989_p3.read() & xor_ln786_98_fu_13011_p2.read());
}

void ResNet::thread_and_ln786_186_fu_13107_p2() {
    and_ln786_186_fu_13107_p2 = (tmp_949_fu_13079_p3.read() & xor_ln786_100_fu_13101_p2.read());
}

void ResNet::thread_and_ln786_187_fu_13197_p2() {
    and_ln786_187_fu_13197_p2 = (tmp_951_fu_13169_p3.read() & xor_ln786_102_fu_13191_p2.read());
}

void ResNet::thread_and_ln786_188_fu_13287_p2() {
    and_ln786_188_fu_13287_p2 = (tmp_953_fu_13259_p3.read() & xor_ln786_103_fu_13281_p2.read());
}

void ResNet::thread_and_ln786_189_fu_13377_p2() {
    and_ln786_189_fu_13377_p2 = (tmp_955_fu_13349_p3.read() & xor_ln786_104_fu_13371_p2.read());
}

void ResNet::thread_and_ln786_190_fu_13467_p2() {
    and_ln786_190_fu_13467_p2 = (tmp_957_fu_13439_p3.read() & xor_ln786_105_fu_13461_p2.read());
}

void ResNet::thread_and_ln786_191_fu_13557_p2() {
    and_ln786_191_fu_13557_p2 = (tmp_959_fu_13529_p3.read() & xor_ln786_106_fu_13551_p2.read());
}

void ResNet::thread_and_ln786_192_fu_13647_p2() {
    and_ln786_192_fu_13647_p2 = (tmp_961_fu_13619_p3.read() & xor_ln786_107_fu_13641_p2.read());
}

void ResNet::thread_and_ln786_193_fu_13737_p2() {
    and_ln786_193_fu_13737_p2 = (tmp_963_fu_13709_p3.read() & xor_ln786_108_fu_13731_p2.read());
}

void ResNet::thread_and_ln786_194_fu_13827_p2() {
    and_ln786_194_fu_13827_p2 = (tmp_965_fu_13799_p3.read() & xor_ln786_109_fu_13821_p2.read());
}

void ResNet::thread_and_ln786_195_fu_13917_p2() {
    and_ln786_195_fu_13917_p2 = (tmp_967_fu_13889_p3.read() & xor_ln786_110_fu_13911_p2.read());
}

void ResNet::thread_and_ln786_196_fu_14007_p2() {
    and_ln786_196_fu_14007_p2 = (tmp_969_fu_13979_p3.read() & xor_ln786_111_fu_14001_p2.read());
}

void ResNet::thread_and_ln786_197_fu_14097_p2() {
    and_ln786_197_fu_14097_p2 = (tmp_971_fu_14069_p3.read() & xor_ln786_112_fu_14091_p2.read());
}

void ResNet::thread_and_ln786_198_fu_14187_p2() {
    and_ln786_198_fu_14187_p2 = (tmp_973_fu_14159_p3.read() & xor_ln786_113_fu_14181_p2.read());
}

void ResNet::thread_and_ln786_199_fu_14277_p2() {
    and_ln786_199_fu_14277_p2 = (tmp_975_fu_14249_p3.read() & xor_ln786_114_fu_14271_p2.read());
}

void ResNet::thread_and_ln786_1_fu_6988_p2() {
    and_ln786_1_fu_6988_p2 = (tmp_757_fu_6914_p3.read() & select_ln416_55_fu_6980_p3.read());
}

void ResNet::thread_and_ln786_200_fu_14367_p2() {
    and_ln786_200_fu_14367_p2 = (tmp_977_fu_14339_p3.read() & xor_ln786_115_fu_14361_p2.read());
}

void ResNet::thread_and_ln786_201_fu_14457_p2() {
    and_ln786_201_fu_14457_p2 = (tmp_979_fu_14429_p3.read() & xor_ln786_116_fu_14451_p2.read());
}

void ResNet::thread_and_ln786_202_fu_14547_p2() {
    and_ln786_202_fu_14547_p2 = (tmp_981_fu_14519_p3.read() & xor_ln786_117_fu_14541_p2.read());
}

void ResNet::thread_and_ln786_203_fu_14637_p2() {
    and_ln786_203_fu_14637_p2 = (tmp_983_fu_14609_p3.read() & xor_ln786_118_fu_14631_p2.read());
}

void ResNet::thread_and_ln786_204_fu_14727_p2() {
    and_ln786_204_fu_14727_p2 = (tmp_985_fu_14699_p3.read() & xor_ln786_119_fu_14721_p2.read());
}

void ResNet::thread_and_ln786_205_fu_14817_p2() {
    and_ln786_205_fu_14817_p2 = (tmp_987_fu_14789_p3.read() & xor_ln786_120_fu_14811_p2.read());
}

void ResNet::thread_and_ln786_206_fu_14907_p2() {
    and_ln786_206_fu_14907_p2 = (tmp_989_fu_14879_p3.read() & xor_ln786_121_fu_14901_p2.read());
}

void ResNet::thread_and_ln786_207_fu_14997_p2() {
    and_ln786_207_fu_14997_p2 = (tmp_991_fu_14969_p3.read() & xor_ln786_122_fu_14991_p2.read());
}

void ResNet::thread_and_ln786_208_fu_15087_p2() {
    and_ln786_208_fu_15087_p2 = (tmp_993_fu_15059_p3.read() & xor_ln786_123_fu_15081_p2.read());
}

void ResNet::thread_and_ln786_209_fu_15177_p2() {
    and_ln786_209_fu_15177_p2 = (tmp_995_fu_15149_p3.read() & xor_ln786_124_fu_15171_p2.read());
}

void ResNet::thread_and_ln786_210_fu_15267_p2() {
    and_ln786_210_fu_15267_p2 = (tmp_997_fu_15239_p3.read() & xor_ln786_125_fu_15261_p2.read());
}

void ResNet::thread_and_ln786_211_fu_15357_p2() {
    and_ln786_211_fu_15357_p2 = (tmp_999_fu_15329_p3.read() & xor_ln786_126_fu_15351_p2.read());
}

void ResNet::thread_and_ln786_212_fu_15447_p2() {
    and_ln786_212_fu_15447_p2 = (tmp_1001_fu_15419_p3.read() & xor_ln786_127_fu_15441_p2.read());
}

void ResNet::thread_and_ln786_213_fu_15537_p2() {
    and_ln786_213_fu_15537_p2 = (tmp_1003_fu_15509_p3.read() & xor_ln786_128_fu_15531_p2.read());
}

void ResNet::thread_and_ln786_214_fu_15627_p2() {
    and_ln786_214_fu_15627_p2 = (tmp_1005_fu_15599_p3.read() & xor_ln786_129_fu_15621_p2.read());
}

void ResNet::thread_and_ln786_215_fu_15717_p2() {
    and_ln786_215_fu_15717_p2 = (tmp_1007_fu_15689_p3.read() & xor_ln786_130_fu_15711_p2.read());
}

void ResNet::thread_and_ln786_216_fu_15807_p2() {
    and_ln786_216_fu_15807_p2 = (tmp_1009_fu_15779_p3.read() & xor_ln786_131_fu_15801_p2.read());
}

void ResNet::thread_and_ln786_217_fu_15897_p2() {
    and_ln786_217_fu_15897_p2 = (tmp_1011_fu_15869_p3.read() & xor_ln786_132_fu_15891_p2.read());
}

void ResNet::thread_and_ln786_218_fu_15987_p2() {
    and_ln786_218_fu_15987_p2 = (tmp_1013_fu_15959_p3.read() & xor_ln786_133_fu_15981_p2.read());
}

void ResNet::thread_and_ln786_219_fu_16077_p2() {
    and_ln786_219_fu_16077_p2 = (tmp_1015_fu_16049_p3.read() & xor_ln786_134_fu_16071_p2.read());
}

void ResNet::thread_and_ln786_220_fu_16167_p2() {
    and_ln786_220_fu_16167_p2 = (tmp_1017_fu_16139_p3.read() & xor_ln786_135_fu_16161_p2.read());
}

void ResNet::thread_and_ln786_221_fu_16257_p2() {
    and_ln786_221_fu_16257_p2 = (tmp_1019_fu_16229_p3.read() & xor_ln786_136_fu_16251_p2.read());
}

void ResNet::thread_and_ln786_222_fu_16347_p2() {
    and_ln786_222_fu_16347_p2 = (tmp_1021_fu_16319_p3.read() & xor_ln786_137_fu_16341_p2.read());
}

void ResNet::thread_and_ln786_223_fu_16437_p2() {
    and_ln786_223_fu_16437_p2 = (tmp_1023_fu_16409_p3.read() & xor_ln786_138_fu_16431_p2.read());
}

void ResNet::thread_and_ln786_224_fu_16527_p2() {
    and_ln786_224_fu_16527_p2 = (tmp_1025_fu_16499_p3.read() & xor_ln786_139_fu_16521_p2.read());
}

void ResNet::thread_and_ln786_225_fu_16617_p2() {
    and_ln786_225_fu_16617_p2 = (tmp_1027_fu_16589_p3.read() & xor_ln786_140_fu_16611_p2.read());
}

void ResNet::thread_and_ln786_226_fu_16707_p2() {
    and_ln786_226_fu_16707_p2 = (tmp_1029_fu_16679_p3.read() & xor_ln786_141_fu_16701_p2.read());
}

void ResNet::thread_and_ln786_227_fu_16797_p2() {
    and_ln786_227_fu_16797_p2 = (tmp_1031_fu_16769_p3.read() & xor_ln786_142_fu_16791_p2.read());
}

void ResNet::thread_and_ln786_228_fu_16887_p2() {
    and_ln786_228_fu_16887_p2 = (tmp_1033_fu_16859_p3.read() & xor_ln786_143_fu_16881_p2.read());
}

void ResNet::thread_and_ln786_229_fu_16977_p2() {
    and_ln786_229_fu_16977_p2 = (tmp_1035_fu_16949_p3.read() & xor_ln786_144_fu_16971_p2.read());
}

void ResNet::thread_and_ln786_230_fu_17067_p2() {
    and_ln786_230_fu_17067_p2 = (tmp_1037_fu_17039_p3.read() & xor_ln786_145_fu_17061_p2.read());
}

void ResNet::thread_and_ln786_231_fu_17157_p2() {
    and_ln786_231_fu_17157_p2 = (tmp_1039_fu_17129_p3.read() & xor_ln786_146_fu_17151_p2.read());
}

void ResNet::thread_and_ln786_232_fu_17247_p2() {
    and_ln786_232_fu_17247_p2 = (tmp_1041_fu_17219_p3.read() & xor_ln786_147_fu_17241_p2.read());
}

void ResNet::thread_and_ln786_233_fu_17337_p2() {
    and_ln786_233_fu_17337_p2 = (tmp_1043_fu_17309_p3.read() & xor_ln786_148_fu_17331_p2.read());
}

void ResNet::thread_and_ln786_234_fu_17427_p2() {
    and_ln786_234_fu_17427_p2 = (tmp_1045_fu_17399_p3.read() & xor_ln786_149_fu_17421_p2.read());
}

void ResNet::thread_and_ln786_2_fu_7168_p2() {
    and_ln786_2_fu_7168_p2 = (tmp_763_fu_7094_p3.read() & select_ln416_56_fu_7160_p3.read());
}

void ResNet::thread_and_ln786_3_fu_7348_p2() {
    and_ln786_3_fu_7348_p2 = (tmp_769_fu_7274_p3.read() & select_ln416_57_fu_7340_p3.read());
}

void ResNet::thread_and_ln786_4_fu_7528_p2() {
    and_ln786_4_fu_7528_p2 = (tmp_775_fu_7454_p3.read() & select_ln416_58_fu_7520_p3.read());
}

void ResNet::thread_and_ln786_5_fu_7708_p2() {
    and_ln786_5_fu_7708_p2 = (tmp_781_fu_7634_p3.read() & select_ln416_59_fu_7700_p3.read());
}

void ResNet::thread_and_ln786_6_fu_7888_p2() {
    and_ln786_6_fu_7888_p2 = (tmp_787_fu_7814_p3.read() & select_ln416_60_fu_7880_p3.read());
}

void ResNet::thread_and_ln786_7_fu_8068_p2() {
    and_ln786_7_fu_8068_p2 = (tmp_793_fu_7994_p3.read() & select_ln416_61_fu_8060_p3.read());
}

void ResNet::thread_and_ln786_8_fu_8248_p2() {
    and_ln786_8_fu_8248_p2 = (tmp_799_fu_8174_p3.read() & select_ln416_62_fu_8240_p3.read());
}

void ResNet::thread_and_ln786_9_fu_8428_p2() {
    and_ln786_9_fu_8428_p2 = (tmp_805_fu_8354_p3.read() & select_ln416_63_fu_8420_p3.read());
}

void ResNet::thread_and_ln786_fu_6808_p2() {
    and_ln786_fu_6808_p2 = (tmp_751_fu_6734_p3.read() & select_ln416_fu_6800_p3.read());
}

void ResNet::thread_and_ln89_fu_4768_p2() {
    and_ln89_fu_4768_p2 = (icmp_ln91_fu_4762_p2.read() & xor_ln89_fu_4757_p2.read());
}

void ResNet::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void ResNet::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[4];
}

void ResNet::thread_ap_CS_fsm_pp2_stage0() {
    ap_CS_fsm_pp2_stage0 = ap_CS_fsm.read()[7];
}

void ResNet::thread_ap_CS_fsm_pp3_stage0() {
    ap_CS_fsm_pp3_stage0 = ap_CS_fsm.read()[121];
}

void ResNet::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void ResNet::thread_ap_CS_fsm_state100() {
    ap_CS_fsm_state100 = ap_CS_fsm.read()[84];
}

void ResNet::thread_ap_CS_fsm_state101() {
    ap_CS_fsm_state101 = ap_CS_fsm.read()[85];
}

void ResNet::thread_ap_CS_fsm_state102() {
    ap_CS_fsm_state102 = ap_CS_fsm.read()[86];
}

void ResNet::thread_ap_CS_fsm_state103() {
    ap_CS_fsm_state103 = ap_CS_fsm.read()[87];
}

void ResNet::thread_ap_CS_fsm_state104() {
    ap_CS_fsm_state104 = ap_CS_fsm.read()[88];
}

void ResNet::thread_ap_CS_fsm_state105() {
    ap_CS_fsm_state105 = ap_CS_fsm.read()[89];
}

void ResNet::thread_ap_CS_fsm_state106() {
    ap_CS_fsm_state106 = ap_CS_fsm.read()[90];
}

void ResNet::thread_ap_CS_fsm_state107() {
    ap_CS_fsm_state107 = ap_CS_fsm.read()[91];
}

void ResNet::thread_ap_CS_fsm_state108() {
    ap_CS_fsm_state108 = ap_CS_fsm.read()[92];
}

void ResNet::thread_ap_CS_fsm_state109() {
    ap_CS_fsm_state109 = ap_CS_fsm.read()[93];
}

void ResNet::thread_ap_CS_fsm_state110() {
    ap_CS_fsm_state110 = ap_CS_fsm.read()[94];
}

void ResNet::thread_ap_CS_fsm_state111() {
    ap_CS_fsm_state111 = ap_CS_fsm.read()[95];
}

void ResNet::thread_ap_CS_fsm_state112() {
    ap_CS_fsm_state112 = ap_CS_fsm.read()[96];
}

void ResNet::thread_ap_CS_fsm_state113() {
    ap_CS_fsm_state113 = ap_CS_fsm.read()[97];
}

void ResNet::thread_ap_CS_fsm_state114() {
    ap_CS_fsm_state114 = ap_CS_fsm.read()[98];
}

void ResNet::thread_ap_CS_fsm_state115() {
    ap_CS_fsm_state115 = ap_CS_fsm.read()[99];
}

void ResNet::thread_ap_CS_fsm_state116() {
    ap_CS_fsm_state116 = ap_CS_fsm.read()[100];
}

void ResNet::thread_ap_CS_fsm_state117() {
    ap_CS_fsm_state117 = ap_CS_fsm.read()[101];
}

void ResNet::thread_ap_CS_fsm_state118() {
    ap_CS_fsm_state118 = ap_CS_fsm.read()[102];
}

void ResNet::thread_ap_CS_fsm_state119() {
    ap_CS_fsm_state119 = ap_CS_fsm.read()[103];
}

void ResNet::thread_ap_CS_fsm_state120() {
    ap_CS_fsm_state120 = ap_CS_fsm.read()[104];
}

void ResNet::thread_ap_CS_fsm_state121() {
    ap_CS_fsm_state121 = ap_CS_fsm.read()[105];
}

void ResNet::thread_ap_CS_fsm_state122() {
    ap_CS_fsm_state122 = ap_CS_fsm.read()[106];
}

void ResNet::thread_ap_CS_fsm_state123() {
    ap_CS_fsm_state123 = ap_CS_fsm.read()[107];
}

void ResNet::thread_ap_CS_fsm_state124() {
    ap_CS_fsm_state124 = ap_CS_fsm.read()[108];
}

void ResNet::thread_ap_CS_fsm_state125() {
    ap_CS_fsm_state125 = ap_CS_fsm.read()[109];
}

void ResNet::thread_ap_CS_fsm_state126() {
    ap_CS_fsm_state126 = ap_CS_fsm.read()[110];
}

void ResNet::thread_ap_CS_fsm_state127() {
    ap_CS_fsm_state127 = ap_CS_fsm.read()[111];
}

void ResNet::thread_ap_CS_fsm_state128() {
    ap_CS_fsm_state128 = ap_CS_fsm.read()[112];
}

void ResNet::thread_ap_CS_fsm_state129() {
    ap_CS_fsm_state129 = ap_CS_fsm.read()[113];
}

void ResNet::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[2];
}

void ResNet::thread_ap_CS_fsm_state130() {
    ap_CS_fsm_state130 = ap_CS_fsm.read()[114];
}

void ResNet::thread_ap_CS_fsm_state131() {
    ap_CS_fsm_state131 = ap_CS_fsm.read()[115];
}

void ResNet::thread_ap_CS_fsm_state132() {
    ap_CS_fsm_state132 = ap_CS_fsm.read()[116];
}

void ResNet::thread_ap_CS_fsm_state133() {
    ap_CS_fsm_state133 = ap_CS_fsm.read()[117];
}

void ResNet::thread_ap_CS_fsm_state134() {
    ap_CS_fsm_state134 = ap_CS_fsm.read()[118];
}

void ResNet::thread_ap_CS_fsm_state135() {
    ap_CS_fsm_state135 = ap_CS_fsm.read()[119];
}

void ResNet::thread_ap_CS_fsm_state136() {
    ap_CS_fsm_state136 = ap_CS_fsm.read()[120];
}

void ResNet::thread_ap_CS_fsm_state139() {
    ap_CS_fsm_state139 = ap_CS_fsm.read()[122];
}

void ResNet::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[3];
}

void ResNet::thread_ap_CS_fsm_state140() {
    ap_CS_fsm_state140 = ap_CS_fsm.read()[123];
}

void ResNet::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[5];
}

void ResNet::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[6];
}

void ResNet::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[8];
}

void ResNet::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[9];
}

void ResNet::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[10];
}

void ResNet::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[11];
}

void ResNet::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[12];
}

void ResNet::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[13];
}

void ResNet::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[14];
}

void ResNet::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[15];
}

void ResNet::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[16];
}

void ResNet::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[17];
}

void ResNet::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[18];
}

void ResNet::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[19];
}

void ResNet::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[20];
}

void ResNet::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[21];
}

void ResNet::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[22];
}

void ResNet::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read()[23];
}

void ResNet::thread_ap_CS_fsm_state40() {
    ap_CS_fsm_state40 = ap_CS_fsm.read()[24];
}

void ResNet::thread_ap_CS_fsm_state41() {
    ap_CS_fsm_state41 = ap_CS_fsm.read()[25];
}

void ResNet::thread_ap_CS_fsm_state42() {
    ap_CS_fsm_state42 = ap_CS_fsm.read()[26];
}

void ResNet::thread_ap_CS_fsm_state43() {
    ap_CS_fsm_state43 = ap_CS_fsm.read()[27];
}

void ResNet::thread_ap_CS_fsm_state44() {
    ap_CS_fsm_state44 = ap_CS_fsm.read()[28];
}

void ResNet::thread_ap_CS_fsm_state45() {
    ap_CS_fsm_state45 = ap_CS_fsm.read()[29];
}

void ResNet::thread_ap_CS_fsm_state46() {
    ap_CS_fsm_state46 = ap_CS_fsm.read()[30];
}

void ResNet::thread_ap_CS_fsm_state47() {
    ap_CS_fsm_state47 = ap_CS_fsm.read()[31];
}

void ResNet::thread_ap_CS_fsm_state48() {
    ap_CS_fsm_state48 = ap_CS_fsm.read()[32];
}

void ResNet::thread_ap_CS_fsm_state49() {
    ap_CS_fsm_state49 = ap_CS_fsm.read()[33];
}

void ResNet::thread_ap_CS_fsm_state50() {
    ap_CS_fsm_state50 = ap_CS_fsm.read()[34];
}

void ResNet::thread_ap_CS_fsm_state51() {
    ap_CS_fsm_state51 = ap_CS_fsm.read()[35];
}

void ResNet::thread_ap_CS_fsm_state52() {
    ap_CS_fsm_state52 = ap_CS_fsm.read()[36];
}

void ResNet::thread_ap_CS_fsm_state53() {
    ap_CS_fsm_state53 = ap_CS_fsm.read()[37];
}

void ResNet::thread_ap_CS_fsm_state54() {
    ap_CS_fsm_state54 = ap_CS_fsm.read()[38];
}

void ResNet::thread_ap_CS_fsm_state55() {
    ap_CS_fsm_state55 = ap_CS_fsm.read()[39];
}

void ResNet::thread_ap_CS_fsm_state56() {
    ap_CS_fsm_state56 = ap_CS_fsm.read()[40];
}

void ResNet::thread_ap_CS_fsm_state57() {
    ap_CS_fsm_state57 = ap_CS_fsm.read()[41];
}

void ResNet::thread_ap_CS_fsm_state58() {
    ap_CS_fsm_state58 = ap_CS_fsm.read()[42];
}

void ResNet::thread_ap_CS_fsm_state59() {
    ap_CS_fsm_state59 = ap_CS_fsm.read()[43];
}

void ResNet::thread_ap_CS_fsm_state60() {
    ap_CS_fsm_state60 = ap_CS_fsm.read()[44];
}

void ResNet::thread_ap_CS_fsm_state61() {
    ap_CS_fsm_state61 = ap_CS_fsm.read()[45];
}

void ResNet::thread_ap_CS_fsm_state62() {
    ap_CS_fsm_state62 = ap_CS_fsm.read()[46];
}

void ResNet::thread_ap_CS_fsm_state63() {
    ap_CS_fsm_state63 = ap_CS_fsm.read()[47];
}

void ResNet::thread_ap_CS_fsm_state64() {
    ap_CS_fsm_state64 = ap_CS_fsm.read()[48];
}

void ResNet::thread_ap_CS_fsm_state65() {
    ap_CS_fsm_state65 = ap_CS_fsm.read()[49];
}

void ResNet::thread_ap_CS_fsm_state66() {
    ap_CS_fsm_state66 = ap_CS_fsm.read()[50];
}

void ResNet::thread_ap_CS_fsm_state67() {
    ap_CS_fsm_state67 = ap_CS_fsm.read()[51];
}

void ResNet::thread_ap_CS_fsm_state68() {
    ap_CS_fsm_state68 = ap_CS_fsm.read()[52];
}

void ResNet::thread_ap_CS_fsm_state69() {
    ap_CS_fsm_state69 = ap_CS_fsm.read()[53];
}

void ResNet::thread_ap_CS_fsm_state70() {
    ap_CS_fsm_state70 = ap_CS_fsm.read()[54];
}

void ResNet::thread_ap_CS_fsm_state71() {
    ap_CS_fsm_state71 = ap_CS_fsm.read()[55];
}

void ResNet::thread_ap_CS_fsm_state72() {
    ap_CS_fsm_state72 = ap_CS_fsm.read()[56];
}

void ResNet::thread_ap_CS_fsm_state73() {
    ap_CS_fsm_state73 = ap_CS_fsm.read()[57];
}

void ResNet::thread_ap_CS_fsm_state74() {
    ap_CS_fsm_state74 = ap_CS_fsm.read()[58];
}

void ResNet::thread_ap_CS_fsm_state75() {
    ap_CS_fsm_state75 = ap_CS_fsm.read()[59];
}

void ResNet::thread_ap_CS_fsm_state76() {
    ap_CS_fsm_state76 = ap_CS_fsm.read()[60];
}

void ResNet::thread_ap_CS_fsm_state77() {
    ap_CS_fsm_state77 = ap_CS_fsm.read()[61];
}

void ResNet::thread_ap_CS_fsm_state78() {
    ap_CS_fsm_state78 = ap_CS_fsm.read()[62];
}

void ResNet::thread_ap_CS_fsm_state79() {
    ap_CS_fsm_state79 = ap_CS_fsm.read()[63];
}

void ResNet::thread_ap_CS_fsm_state80() {
    ap_CS_fsm_state80 = ap_CS_fsm.read()[64];
}

void ResNet::thread_ap_CS_fsm_state81() {
    ap_CS_fsm_state81 = ap_CS_fsm.read()[65];
}

void ResNet::thread_ap_CS_fsm_state82() {
    ap_CS_fsm_state82 = ap_CS_fsm.read()[66];
}

void ResNet::thread_ap_CS_fsm_state83() {
    ap_CS_fsm_state83 = ap_CS_fsm.read()[67];
}

void ResNet::thread_ap_CS_fsm_state84() {
    ap_CS_fsm_state84 = ap_CS_fsm.read()[68];
}

void ResNet::thread_ap_CS_fsm_state85() {
    ap_CS_fsm_state85 = ap_CS_fsm.read()[69];
}

void ResNet::thread_ap_CS_fsm_state86() {
    ap_CS_fsm_state86 = ap_CS_fsm.read()[70];
}

void ResNet::thread_ap_CS_fsm_state87() {
    ap_CS_fsm_state87 = ap_CS_fsm.read()[71];
}

void ResNet::thread_ap_CS_fsm_state88() {
    ap_CS_fsm_state88 = ap_CS_fsm.read()[72];
}

void ResNet::thread_ap_CS_fsm_state89() {
    ap_CS_fsm_state89 = ap_CS_fsm.read()[73];
}

void ResNet::thread_ap_CS_fsm_state90() {
    ap_CS_fsm_state90 = ap_CS_fsm.read()[74];
}

void ResNet::thread_ap_CS_fsm_state91() {
    ap_CS_fsm_state91 = ap_CS_fsm.read()[75];
}

void ResNet::thread_ap_CS_fsm_state92() {
    ap_CS_fsm_state92 = ap_CS_fsm.read()[76];
}

void ResNet::thread_ap_CS_fsm_state93() {
    ap_CS_fsm_state93 = ap_CS_fsm.read()[77];
}

void ResNet::thread_ap_CS_fsm_state94() {
    ap_CS_fsm_state94 = ap_CS_fsm.read()[78];
}

void ResNet::thread_ap_CS_fsm_state95() {
    ap_CS_fsm_state95 = ap_CS_fsm.read()[79];
}

void ResNet::thread_ap_CS_fsm_state96() {
    ap_CS_fsm_state96 = ap_CS_fsm.read()[80];
}

void ResNet::thread_ap_CS_fsm_state97() {
    ap_CS_fsm_state97 = ap_CS_fsm.read()[81];
}

void ResNet::thread_ap_CS_fsm_state98() {
    ap_CS_fsm_state98 = ap_CS_fsm.read()[82];
}

void ResNet::thread_ap_CS_fsm_state99() {
    ap_CS_fsm_state99 = ap_CS_fsm.read()[83];
}

void ResNet::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state4_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln89_reg_21645_pp0_iter8_reg.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, IMG_RVALID.read())));
}

void ResNet::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state4_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln89_reg_21645_pp0_iter8_reg.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, IMG_RVALID.read())));
}

void ResNet::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_pp2_stage0() {
    ap_block_pp2_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_pp2_stage0_11001() {
    ap_block_pp2_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_pp2_stage0_subdone() {
    ap_block_pp2_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_pp3_stage0() {
    ap_block_pp3_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_pp3_stage0_11001() {
    ap_block_pp3_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_pp3_stage0_subdone() {
    ap_block_pp3_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state10_pp0_stage0_iter8() {
    ap_block_state10_pp0_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state11_pp0_stage0_iter9() {
    ap_block_state11_pp0_stage0_iter9 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln89_reg_21645_pp0_iter8_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_0, IMG_RVALID.read()));
}

void ResNet::thread_ap_block_state12_pp0_stage0_iter10() {
    ap_block_state12_pp0_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state137_pp3_stage0_iter0() {
    ap_block_state137_pp3_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state138_pp3_stage0_iter1() {
    ap_block_state138_pp3_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state15_pp1_stage0_iter0() {
    ap_block_state15_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state16_pp1_stage0_iter1() {
    ap_block_state16_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state19_pp2_stage0_iter0() {
    ap_block_state19_pp2_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state20_pp2_stage0_iter1() {
    ap_block_state20_pp2_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state21_pp2_stage0_iter2() {
    ap_block_state21_pp2_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state22_pp2_stage0_iter3() {
    ap_block_state22_pp2_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state23_pp2_stage0_iter4() {
    ap_block_state23_pp2_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state4_io() {
    ap_block_state4_io = (esl_seteq<1,1,1>(icmp_ln89_reg_21645_pp0_iter1_reg.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, IMG_ARREADY.read()));
}

void ResNet::thread_ap_block_state4_pp0_stage0_iter2() {
    ap_block_state4_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state5_pp0_stage0_iter3() {
    ap_block_state5_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state6_pp0_stage0_iter4() {
    ap_block_state6_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state7_pp0_stage0_iter5() {
    ap_block_state7_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state8_pp0_stage0_iter6() {
    ap_block_state8_pp0_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state9_pp0_stage0_iter7() {
    ap_block_state9_pp0_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(icmp_ln89_fu_4689_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void ResNet::thread_ap_condition_pp1_exit_iter0_state15() {
    if (esl_seteq<1,1,1>(icmp_ln109_fu_5381_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp1_exit_iter0_state15 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state15 = ap_const_logic_0;
    }
}

void ResNet::thread_ap_condition_pp2_exit_iter0_state19() {
    if (esl_seteq<1,1,1>(icmp_ln122_fu_6266_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp2_exit_iter0_state19 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter0_state19 = ap_const_logic_0;
    }
}

void ResNet::thread_ap_condition_pp3_exit_iter0_state137() {
    if (esl_seteq<1,1,1>(icmp_ln592_fu_11561_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp3_exit_iter0_state137 = ap_const_logic_1;
    } else {
        ap_condition_pp3_exit_iter0_state137 = ap_const_logic_0;
    }
}

void ResNet::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read()) && 
         esl_seteq<1,1,1>(grp_matmul_fu_4301_ap_done.read(), ap_const_logic_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void ResNet::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void ResNet::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void ResNet::thread_ap_enable_pp2() {
    ap_enable_pp2 = (ap_idle_pp2.read() ^ ap_const_logic_1);
}

void ResNet::thread_ap_enable_pp3() {
    ap_enable_pp3 = (ap_idle_pp3.read() ^ ap_const_logic_1);
}

void ResNet::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void ResNet::thread_ap_idle_pp0() {
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter10.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void ResNet::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void ResNet::thread_ap_idle_pp2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter4.read()))) {
        ap_idle_pp2 = ap_const_logic_1;
    } else {
        ap_idle_pp2 = ap_const_logic_0;
    }
}

void ResNet::thread_ap_idle_pp3() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter1.read()))) {
        ap_idle_pp3 = ap_const_logic_1;
    } else {
        ap_idle_pp3 = ap_const_logic_0;
    }
}

void ResNet::thread_ap_phi_mux_brow_0_phi_fu_2453_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln122_reg_21912.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_brow_0_phi_fu_2453_p4 = select_ln124_1_reg_21947.read();
    } else {
        ap_phi_mux_brow_0_phi_fu_2453_p4 = brow_0_reg_2449.read();
    }
}

void ResNet::thread_ap_phi_mux_cbb_0_phi_fu_2341_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln89_reg_21645_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        ap_phi_mux_cbb_0_phi_fu_2341_p4 = cbb_reg_21689.read();
    } else {
        ap_phi_mux_cbb_0_phi_fu_2341_p4 = cbb_0_reg_2337.read();
    }
}

void ResNet::thread_ap_phi_mux_col_0_phi_fu_2329_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln89_reg_21645_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        ap_phi_mux_col_0_phi_fu_2329_p4 = select_ln93_1_reg_21677.read();
    } else {
        ap_phi_mux_col_0_phi_fu_2329_p4 = col_0_reg_2325.read();
    }
}

void ResNet::thread_ap_phi_mux_col_b_0_phi_fu_2431_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln122_reg_21912.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_col_b_0_phi_fu_2431_p4 = select_ln123_1_reg_21926.read();
    } else {
        ap_phi_mux_col_b_0_phi_fu_2431_p4 = col_b_0_reg_2427.read();
    }
}

void ResNet::thread_ap_phi_mux_i_0_phi_fu_2972_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln592_reg_23188.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i_0_phi_fu_2972_p4 = select_ln598_1_reg_23197.read();
    } else {
        ap_phi_mux_i_0_phi_fu_2972_p4 = i_0_reg_2968.read();
    }
}

void ResNet::thread_ap_phi_mux_row21_0_phi_fu_2376_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln109_reg_21806.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_row21_0_phi_fu_2376_p4 = select_ln114_1_reg_21820.read();
    } else {
        ap_phi_mux_row21_0_phi_fu_2376_p4 = row21_0_reg_2372.read();
    }
}

void ResNet::thread_ap_phi_mux_row_0_phi_fu_2306_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln89_reg_21645_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        ap_phi_mux_row_0_phi_fu_2306_p4 = select_ln89_1_reg_21667.read();
    } else {
        ap_phi_mux_row_0_phi_fu_2306_p4 = row_0_reg_2302.read();
    }
}

void ResNet::thread_ap_phi_mux_row_b_0_phi_fu_2409_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln122_reg_21912.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_row_b_0_phi_fu_2409_p4 = select_ln122_1_reg_21921.read();
    } else {
        ap_phi_mux_row_b_0_phi_fu_2409_p4 = row_b_0_reg_2405.read();
    }
}

void ResNet::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read()) && 
         esl_seteq<1,1,1>(grp_matmul_fu_4301_ap_done.read(), ap_const_logic_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void ResNet::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void ResNet::thread_bcol_fu_6554_p2() {
    bcol_fu_6554_p2 = (!ap_const_lv4_1.is_01() || !select_ln124_fu_6502_p3.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_1) + sc_biguint<4>(select_ln124_fu_6502_p3.read()));
}

void ResNet::thread_brow_fu_6484_p2() {
    brow_fu_6484_p2 = (!ap_const_lv4_1.is_01() || !select_ln123_fu_6406_p3.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_1) + sc_biguint<4>(select_ln123_fu_6406_p3.read()));
}

void ResNet::thread_cbb_fu_4836_p2() {
    cbb_fu_4836_p2 = (!select_ln93_fu_4785_p3.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(select_ln93_fu_4785_p3.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_cii_1_fu_11273_p2() {
    cii_1_fu_11273_p2 = (!cii38_0_reg_2685.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(cii38_0_reg_2685.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_cii_2_fu_11354_p2() {
    cii_2_fu_11354_p2 = (!cii44_0_reg_2755.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(cii44_0_reg_2755.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_cii_fu_4877_p2() {
    cii_fu_4877_p2 = (!cii_0_reg_2349.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(cii_0_reg_2349.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_cio_1_fu_11390_p2() {
    cio_1_fu_11390_p2 = (!cc_reg_2789.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(cc_reg_2789.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_cio_2_fu_11261_p2() {
    cio_2_fu_11261_p2 = (!cio37_0_reg_2673.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(cio37_0_reg_2673.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_cio_3_fu_11342_p2() {
    cio_3_fu_11342_p2 = (!cio43_0_reg_2743.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(cio43_0_reg_2743.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_cio_fu_11080_p2() {
    cio_fu_11080_p2 = (!cio_0_reg_2543.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(cio_0_reg_2543.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_coi_1_fu_11297_p2() {
    coi_1_fu_11297_p2 = (!coi40_0_reg_2708.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(coi40_0_reg_2708.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_coi_2_fu_11378_p2() {
    coi_2_fu_11378_p2 = (!coi46_0_reg_2778.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(coi46_0_reg_2778.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_coi_fu_11216_p2() {
    coi_fu_11216_p2 = (!coi_0_reg_2638.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(coi_0_reg_2638.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_col_10_fu_11044_p2() {
    col_10_fu_11044_p2 = (!col27_0_reg_2507.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(col27_0_reg_2507.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_col_11_fu_11068_p2() {
    col_11_fu_11068_p2 = (!col29_0_reg_2531.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(col29_0_reg_2531.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_col_12_fu_11187_p2() {
    col_12_fu_11187_p2 = (!col34_0_reg_2614.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(col34_0_reg_2614.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_col_13_fu_11244_p2() {
    col_13_fu_11244_p2 = (!col36_0_reg_2661.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(col36_0_reg_2661.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_col_14_fu_11110_p2() {
    col_14_fu_11110_p2 = (!col31_0_reg_2566.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(col31_0_reg_2566.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_col_15_fu_11325_p2() {
    col_15_fu_11325_p2 = (!col42_0_reg_2731.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(col42_0_reg_2731.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_col_16_fu_4774_p2() {
    col_16_fu_4774_p2 = (!ap_const_lv6_1.is_01() || !select_ln89_fu_4727_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(select_ln89_fu_4727_p3.read()));
}

void ResNet::thread_col_9_fu_11020_p2() {
    col_9_fu_11020_p2 = (!col25_0_reg_2483.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(col25_0_reg_2483.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_col_b_fu_6394_p2() {
    col_b_fu_6394_p2 = (!ap_const_lv3_1.is_01() || !select_ln122_fu_6290_p3.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_1) + sc_biguint<3>(select_ln122_fu_6290_p3.read()));
}

void ResNet::thread_col_fu_6029_p2() {
    col_fu_6029_p2 = (!ap_const_lv2_1.is_01() || !select_ln114_fu_5405_p3.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(select_ln114_fu_5405_p3.read()));
}

void ResNet::thread_conv1_out_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_0_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6614_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_0_address0 = grp_biconv16_fu_3804_top_0_V_address0.read();
    } else {
        conv1_out_0_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        conv1_out_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_0_ce0 = grp_biconv16_fu_3804_top_0_V_ce0.read();
    } else {
        conv1_out_0_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_0_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_0_we0 = grp_biconv16_fu_3804_top_0_V_we0.read();
    } else {
        conv1_out_0_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_10_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6614_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_10_address0 = grp_biconv16_fu_3804_top_10_V_address0.read();
    } else {
        conv1_out_10_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        conv1_out_10_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_10_ce0 = grp_biconv16_fu_3804_top_10_V_ce0.read();
    } else {
        conv1_out_10_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_10_we0 = grp_biconv16_fu_3804_top_10_V_we0.read();
    } else {
        conv1_out_10_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_11_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6614_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_11_address0 = grp_biconv16_fu_3804_top_11_V_address0.read();
    } else {
        conv1_out_11_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        conv1_out_11_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_11_ce0 = grp_biconv16_fu_3804_top_11_V_ce0.read();
    } else {
        conv1_out_11_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_11_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_11_we0 = grp_biconv16_fu_3804_top_11_V_we0.read();
    } else {
        conv1_out_11_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_12_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_12_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6614_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_12_address0 = grp_biconv16_fu_3804_top_12_V_address0.read();
    } else {
        conv1_out_12_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        conv1_out_12_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_12_ce0 = grp_biconv16_fu_3804_top_12_V_ce0.read();
    } else {
        conv1_out_12_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_12_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_12_we0 = grp_biconv16_fu_3804_top_12_V_we0.read();
    } else {
        conv1_out_12_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_13_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_13_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6614_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_13_address0 = grp_biconv16_fu_3804_top_13_V_address0.read();
    } else {
        conv1_out_13_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        conv1_out_13_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_13_ce0 = grp_biconv16_fu_3804_top_13_V_ce0.read();
    } else {
        conv1_out_13_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_13_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_13_we0 = grp_biconv16_fu_3804_top_13_V_we0.read();
    } else {
        conv1_out_13_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_14_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_14_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6614_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_14_address0 = grp_biconv16_fu_3804_top_14_V_address0.read();
    } else {
        conv1_out_14_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        conv1_out_14_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_14_ce0 = grp_biconv16_fu_3804_top_14_V_ce0.read();
    } else {
        conv1_out_14_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_14_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_14_we0 = grp_biconv16_fu_3804_top_14_V_we0.read();
    } else {
        conv1_out_14_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_15_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_15_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6614_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_15_address0 = grp_biconv16_fu_3804_top_15_V_address0.read();
    } else {
        conv1_out_15_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        conv1_out_15_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_15_ce0 = grp_biconv16_fu_3804_top_15_V_ce0.read();
    } else {
        conv1_out_15_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_15_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_15_we0 = grp_biconv16_fu_3804_top_15_V_we0.read();
    } else {
        conv1_out_15_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_1_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6614_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_1_address0 = grp_biconv16_fu_3804_top_1_V_address0.read();
    } else {
        conv1_out_1_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        conv1_out_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_1_ce0 = grp_biconv16_fu_3804_top_1_V_ce0.read();
    } else {
        conv1_out_1_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_1_we0 = grp_biconv16_fu_3804_top_1_V_we0.read();
    } else {
        conv1_out_1_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_2_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6614_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_2_address0 = grp_biconv16_fu_3804_top_2_V_address0.read();
    } else {
        conv1_out_2_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        conv1_out_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_2_ce0 = grp_biconv16_fu_3804_top_2_V_ce0.read();
    } else {
        conv1_out_2_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_2_we0 = grp_biconv16_fu_3804_top_2_V_we0.read();
    } else {
        conv1_out_2_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_3_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6614_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_3_address0 = grp_biconv16_fu_3804_top_3_V_address0.read();
    } else {
        conv1_out_3_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        conv1_out_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_3_ce0 = grp_biconv16_fu_3804_top_3_V_ce0.read();
    } else {
        conv1_out_3_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_3_we0 = grp_biconv16_fu_3804_top_3_V_we0.read();
    } else {
        conv1_out_3_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_4_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6614_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_4_address0 = grp_biconv16_fu_3804_top_4_V_address0.read();
    } else {
        conv1_out_4_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        conv1_out_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_4_ce0 = grp_biconv16_fu_3804_top_4_V_ce0.read();
    } else {
        conv1_out_4_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_4_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_4_ce1 = grp_biconv16_fu_3804_top_4_V_ce1.read();
    } else {
        conv1_out_4_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_4_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_4_we1 = grp_biconv16_fu_3804_top_4_V_we1.read();
    } else {
        conv1_out_4_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_5_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6614_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_5_address0 = grp_biconv16_fu_3804_top_5_V_address0.read();
    } else {
        conv1_out_5_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        conv1_out_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_5_ce0 = grp_biconv16_fu_3804_top_5_V_ce0.read();
    } else {
        conv1_out_5_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_5_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_5_ce1 = grp_biconv16_fu_3804_top_5_V_ce1.read();
    } else {
        conv1_out_5_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_5_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_5_we1 = grp_biconv16_fu_3804_top_5_V_we1.read();
    } else {
        conv1_out_5_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_6_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6614_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_6_address0 = grp_biconv16_fu_3804_top_6_V_address0.read();
    } else {
        conv1_out_6_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        conv1_out_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_6_ce0 = grp_biconv16_fu_3804_top_6_V_ce0.read();
    } else {
        conv1_out_6_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_6_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_6_ce1 = grp_biconv16_fu_3804_top_6_V_ce1.read();
    } else {
        conv1_out_6_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_6_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_6_we1 = grp_biconv16_fu_3804_top_6_V_we1.read();
    } else {
        conv1_out_6_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_7_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6614_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_7_address0 = grp_biconv16_fu_3804_top_7_V_address0.read();
    } else {
        conv1_out_7_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        conv1_out_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_7_ce0 = grp_biconv16_fu_3804_top_7_V_ce0.read();
    } else {
        conv1_out_7_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_7_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_7_ce1 = grp_biconv16_fu_3804_top_7_V_ce1.read();
    } else {
        conv1_out_7_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_7_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_7_we1 = grp_biconv16_fu_3804_top_7_V_we1.read();
    } else {
        conv1_out_7_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_8_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6614_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_8_address0 = grp_biconv16_fu_3804_top_8_V_address0.read();
    } else {
        conv1_out_8_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        conv1_out_8_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_8_ce0 = grp_biconv16_fu_3804_top_8_V_ce0.read();
    } else {
        conv1_out_8_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_8_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_8_we0 = grp_biconv16_fu_3804_top_8_V_we0.read();
    } else {
        conv1_out_8_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_9_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6614_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_9_address0 = grp_biconv16_fu_3804_top_9_V_address0.read();
    } else {
        conv1_out_9_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        conv1_out_9_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_9_ce0 = grp_biconv16_fu_3804_top_9_V_ce0.read();
    } else {
        conv1_out_9_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_out_9_we0 = grp_biconv16_fu_3804_top_9_V_we0.read();
    } else {
        conv1_out_9_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_V_address0() {
    conv1_weight_V_address0 =  (sc_lv<10>) (zext_ln321_42_fu_5859_p1.read());
}

void ResNet::thread_conv1_weight_V_address1() {
    conv1_weight_V_address1 =  (sc_lv<10>) (zext_ln321_43_fu_5870_p1.read());
}

void ResNet::thread_conv1_weight_V_address10() {
    conv1_weight_V_address10 =  (sc_lv<10>) (zext_ln321_52_fu_5969_p1.read());
}

void ResNet::thread_conv1_weight_V_address11() {
    conv1_weight_V_address11 =  (sc_lv<10>) (zext_ln321_53_fu_5980_p1.read());
}

void ResNet::thread_conv1_weight_V_address12() {
    conv1_weight_V_address12 =  (sc_lv<10>) (zext_ln321_54_fu_5991_p1.read());
}

void ResNet::thread_conv1_weight_V_address13() {
    conv1_weight_V_address13 =  (sc_lv<10>) (zext_ln321_55_fu_6002_p1.read());
}

void ResNet::thread_conv1_weight_V_address14() {
    conv1_weight_V_address14 =  (sc_lv<10>) (zext_ln321_56_fu_6013_p1.read());
}

void ResNet::thread_conv1_weight_V_address15() {
    conv1_weight_V_address15 =  (sc_lv<10>) (zext_ln321_57_fu_6024_p1.read());
}

void ResNet::thread_conv1_weight_V_address2() {
    conv1_weight_V_address2 =  (sc_lv<10>) (zext_ln321_44_fu_5881_p1.read());
}

void ResNet::thread_conv1_weight_V_address3() {
    conv1_weight_V_address3 =  (sc_lv<10>) (zext_ln321_45_fu_5892_p1.read());
}

void ResNet::thread_conv1_weight_V_address4() {
    conv1_weight_V_address4 =  (sc_lv<10>) (zext_ln321_46_fu_5903_p1.read());
}

void ResNet::thread_conv1_weight_V_address5() {
    conv1_weight_V_address5 =  (sc_lv<10>) (zext_ln321_47_fu_5914_p1.read());
}

void ResNet::thread_conv1_weight_V_address6() {
    conv1_weight_V_address6 =  (sc_lv<10>) (zext_ln321_48_fu_5925_p1.read());
}

void ResNet::thread_conv1_weight_V_address7() {
    conv1_weight_V_address7 =  (sc_lv<10>) (zext_ln321_49_fu_5936_p1.read());
}

void ResNet::thread_conv1_weight_V_address8() {
    conv1_weight_V_address8 =  (sc_lv<10>) (zext_ln321_50_fu_5947_p1.read());
}

void ResNet::thread_conv1_weight_V_address9() {
    conv1_weight_V_address9 =  (sc_lv<10>) (zext_ln321_51_fu_5958_p1.read());
}

void ResNet::thread_conv1_weight_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv1_weight_V_ce0 = ap_const_logic_1;
    } else {
        conv1_weight_V_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv1_weight_V_ce1 = ap_const_logic_1;
    } else {
        conv1_weight_V_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_V_ce10() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv1_weight_V_ce10 = ap_const_logic_1;
    } else {
        conv1_weight_V_ce10 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_V_ce11() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv1_weight_V_ce11 = ap_const_logic_1;
    } else {
        conv1_weight_V_ce11 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_V_ce12() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv1_weight_V_ce12 = ap_const_logic_1;
    } else {
        conv1_weight_V_ce12 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_V_ce13() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv1_weight_V_ce13 = ap_const_logic_1;
    } else {
        conv1_weight_V_ce13 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_V_ce14() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv1_weight_V_ce14 = ap_const_logic_1;
    } else {
        conv1_weight_V_ce14 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_V_ce15() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv1_weight_V_ce15 = ap_const_logic_1;
    } else {
        conv1_weight_V_ce15 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_V_ce2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv1_weight_V_ce2 = ap_const_logic_1;
    } else {
        conv1_weight_V_ce2 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_V_ce3() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv1_weight_V_ce3 = ap_const_logic_1;
    } else {
        conv1_weight_V_ce3 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_V_ce4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv1_weight_V_ce4 = ap_const_logic_1;
    } else {
        conv1_weight_V_ce4 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_V_ce5() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv1_weight_V_ce5 = ap_const_logic_1;
    } else {
        conv1_weight_V_ce5 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_V_ce6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv1_weight_V_ce6 = ap_const_logic_1;
    } else {
        conv1_weight_V_ce6 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_V_ce7() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv1_weight_V_ce7 = ap_const_logic_1;
    } else {
        conv1_weight_V_ce7 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_V_ce8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv1_weight_V_ce8 = ap_const_logic_1;
    } else {
        conv1_weight_V_ce8 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_V_ce9() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv1_weight_V_ce9 = ap_const_logic_1;
    } else {
        conv1_weight_V_ce9 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_0_s_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_0_s_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6064_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_0_s_address0 = grp_biconv16_fu_3804_weights_0_V_address0.read();
    } else {
        conv1_weight_buf_0_s_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_0_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_0_s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_0_s_ce0 = grp_biconv16_fu_3804_weights_0_V_ce0.read();
    } else {
        conv1_weight_buf_0_s_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_0_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_0_s_ce1 = grp_biconv16_fu_3804_weights_0_V_ce1.read();
    } else {
        conv1_weight_buf_0_s_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_0_s_d0() {
    conv1_weight_buf_0_s_d0 = (!conv1_weight_V_q0.read()[0].is_01())? sc_lv<2>(): ((conv1_weight_V_q0.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_0);
}

void ResNet::thread_conv1_weight_buf_0_s_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln109_reg_21806.read()))) {
        conv1_weight_buf_0_s_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_0_s_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_10_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6064_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_10_address0 = grp_biconv16_fu_3804_weights_10_V_address0.read();
    } else {
        conv1_weight_buf_10_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_10_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_10_ce0 = grp_biconv16_fu_3804_weights_10_V_ce0.read();
    } else {
        conv1_weight_buf_10_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_10_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_10_ce1 = grp_biconv16_fu_3804_weights_10_V_ce1.read();
    } else {
        conv1_weight_buf_10_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_10_d0() {
    conv1_weight_buf_10_d0 = (!conv1_weight_V_q10.read()[0].is_01())? sc_lv<2>(): ((conv1_weight_V_q10.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_0);
}

void ResNet::thread_conv1_weight_buf_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln109_reg_21806.read()))) {
        conv1_weight_buf_10_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_10_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_11_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6064_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_11_address0 = grp_biconv16_fu_3804_weights_11_V_address0.read();
    } else {
        conv1_weight_buf_11_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_11_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_11_ce0 = grp_biconv16_fu_3804_weights_11_V_ce0.read();
    } else {
        conv1_weight_buf_11_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_11_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_11_ce1 = grp_biconv16_fu_3804_weights_11_V_ce1.read();
    } else {
        conv1_weight_buf_11_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_11_d0() {
    conv1_weight_buf_11_d0 = (!conv1_weight_V_q11.read()[0].is_01())? sc_lv<2>(): ((conv1_weight_V_q11.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_0);
}

void ResNet::thread_conv1_weight_buf_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln109_reg_21806.read()))) {
        conv1_weight_buf_11_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_11_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_12_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_12_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6064_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_12_address0 = grp_biconv16_fu_3804_weights_12_V_address0.read();
    } else {
        conv1_weight_buf_12_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_12_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_12_ce0 = grp_biconv16_fu_3804_weights_12_V_ce0.read();
    } else {
        conv1_weight_buf_12_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_12_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_12_ce1 = grp_biconv16_fu_3804_weights_12_V_ce1.read();
    } else {
        conv1_weight_buf_12_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_12_d0() {
    conv1_weight_buf_12_d0 = (!conv1_weight_V_q12.read()[0].is_01())? sc_lv<2>(): ((conv1_weight_V_q12.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_0);
}

void ResNet::thread_conv1_weight_buf_12_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln109_reg_21806.read()))) {
        conv1_weight_buf_12_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_12_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_13_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_13_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6064_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_13_address0 = grp_biconv16_fu_3804_weights_13_V_address0.read();
    } else {
        conv1_weight_buf_13_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_13_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_13_ce0 = grp_biconv16_fu_3804_weights_13_V_ce0.read();
    } else {
        conv1_weight_buf_13_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_13_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_13_ce1 = grp_biconv16_fu_3804_weights_13_V_ce1.read();
    } else {
        conv1_weight_buf_13_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_13_d0() {
    conv1_weight_buf_13_d0 = (!conv1_weight_V_q13.read()[0].is_01())? sc_lv<2>(): ((conv1_weight_V_q13.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_0);
}

void ResNet::thread_conv1_weight_buf_13_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln109_reg_21806.read()))) {
        conv1_weight_buf_13_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_13_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_14_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_14_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6064_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_14_address0 = grp_biconv16_fu_3804_weights_14_V_address0.read();
    } else {
        conv1_weight_buf_14_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_14_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_14_ce0 = grp_biconv16_fu_3804_weights_14_V_ce0.read();
    } else {
        conv1_weight_buf_14_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_14_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_14_ce1 = grp_biconv16_fu_3804_weights_14_V_ce1.read();
    } else {
        conv1_weight_buf_14_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_14_d0() {
    conv1_weight_buf_14_d0 = (!conv1_weight_V_q14.read()[0].is_01())? sc_lv<2>(): ((conv1_weight_V_q14.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_0);
}

void ResNet::thread_conv1_weight_buf_14_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln109_reg_21806.read()))) {
        conv1_weight_buf_14_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_14_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_15_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_15_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6064_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_15_address0 = grp_biconv16_fu_3804_weights_15_V_address0.read();
    } else {
        conv1_weight_buf_15_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_15_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_15_ce0 = grp_biconv16_fu_3804_weights_15_V_ce0.read();
    } else {
        conv1_weight_buf_15_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_15_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_15_ce1 = grp_biconv16_fu_3804_weights_15_V_ce1.read();
    } else {
        conv1_weight_buf_15_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_15_d0() {
    conv1_weight_buf_15_d0 = (!conv1_weight_V_q15.read()[0].is_01())? sc_lv<2>(): ((conv1_weight_V_q15.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_0);
}

void ResNet::thread_conv1_weight_buf_15_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln109_reg_21806.read()))) {
        conv1_weight_buf_15_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_15_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_1_s_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_1_s_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6064_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_1_s_address0 = grp_biconv16_fu_3804_weights_1_V_address0.read();
    } else {
        conv1_weight_buf_1_s_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_1_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_1_s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_1_s_ce0 = grp_biconv16_fu_3804_weights_1_V_ce0.read();
    } else {
        conv1_weight_buf_1_s_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_1_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_1_s_ce1 = grp_biconv16_fu_3804_weights_1_V_ce1.read();
    } else {
        conv1_weight_buf_1_s_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_1_s_d0() {
    conv1_weight_buf_1_s_d0 = (!conv1_weight_V_q1.read()[0].is_01())? sc_lv<2>(): ((conv1_weight_V_q1.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_0);
}

void ResNet::thread_conv1_weight_buf_1_s_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln109_reg_21806.read()))) {
        conv1_weight_buf_1_s_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_1_s_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_2_s_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_2_s_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6064_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_2_s_address0 = grp_biconv16_fu_3804_weights_2_V_address0.read();
    } else {
        conv1_weight_buf_2_s_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_2_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_2_s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_2_s_ce0 = grp_biconv16_fu_3804_weights_2_V_ce0.read();
    } else {
        conv1_weight_buf_2_s_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_2_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_2_s_ce1 = grp_biconv16_fu_3804_weights_2_V_ce1.read();
    } else {
        conv1_weight_buf_2_s_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_2_s_d0() {
    conv1_weight_buf_2_s_d0 = (!conv1_weight_V_q2.read()[0].is_01())? sc_lv<2>(): ((conv1_weight_V_q2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_0);
}

void ResNet::thread_conv1_weight_buf_2_s_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln109_reg_21806.read()))) {
        conv1_weight_buf_2_s_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_2_s_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_3_s_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_3_s_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6064_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_3_s_address0 = grp_biconv16_fu_3804_weights_3_V_address0.read();
    } else {
        conv1_weight_buf_3_s_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_3_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_3_s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_3_s_ce0 = grp_biconv16_fu_3804_weights_3_V_ce0.read();
    } else {
        conv1_weight_buf_3_s_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_3_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_3_s_ce1 = grp_biconv16_fu_3804_weights_3_V_ce1.read();
    } else {
        conv1_weight_buf_3_s_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_3_s_d0() {
    conv1_weight_buf_3_s_d0 = (!conv1_weight_V_q3.read()[0].is_01())? sc_lv<2>(): ((conv1_weight_V_q3.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_0);
}

void ResNet::thread_conv1_weight_buf_3_s_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln109_reg_21806.read()))) {
        conv1_weight_buf_3_s_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_3_s_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_4_s_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_4_s_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6064_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_4_s_address0 = grp_biconv16_fu_3804_weights_4_V_address0.read();
    } else {
        conv1_weight_buf_4_s_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_4_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_4_s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_4_s_ce0 = grp_biconv16_fu_3804_weights_4_V_ce0.read();
    } else {
        conv1_weight_buf_4_s_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_4_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_4_s_ce1 = grp_biconv16_fu_3804_weights_4_V_ce1.read();
    } else {
        conv1_weight_buf_4_s_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_4_s_d0() {
    conv1_weight_buf_4_s_d0 = (!conv1_weight_V_q4.read()[0].is_01())? sc_lv<2>(): ((conv1_weight_V_q4.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_0);
}

void ResNet::thread_conv1_weight_buf_4_s_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln109_reg_21806.read()))) {
        conv1_weight_buf_4_s_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_4_s_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_5_s_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_5_s_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6064_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_5_s_address0 = grp_biconv16_fu_3804_weights_5_V_address0.read();
    } else {
        conv1_weight_buf_5_s_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_5_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_5_s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_5_s_ce0 = grp_biconv16_fu_3804_weights_5_V_ce0.read();
    } else {
        conv1_weight_buf_5_s_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_5_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_5_s_ce1 = grp_biconv16_fu_3804_weights_5_V_ce1.read();
    } else {
        conv1_weight_buf_5_s_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_5_s_d0() {
    conv1_weight_buf_5_s_d0 = (!conv1_weight_V_q5.read()[0].is_01())? sc_lv<2>(): ((conv1_weight_V_q5.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_0);
}

void ResNet::thread_conv1_weight_buf_5_s_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln109_reg_21806.read()))) {
        conv1_weight_buf_5_s_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_5_s_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_6_s_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_6_s_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6064_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_6_s_address0 = grp_biconv16_fu_3804_weights_6_V_address0.read();
    } else {
        conv1_weight_buf_6_s_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_6_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_6_s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_6_s_ce0 = grp_biconv16_fu_3804_weights_6_V_ce0.read();
    } else {
        conv1_weight_buf_6_s_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_6_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_6_s_ce1 = grp_biconv16_fu_3804_weights_6_V_ce1.read();
    } else {
        conv1_weight_buf_6_s_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_6_s_d0() {
    conv1_weight_buf_6_s_d0 = (!conv1_weight_V_q6.read()[0].is_01())? sc_lv<2>(): ((conv1_weight_V_q6.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_0);
}

void ResNet::thread_conv1_weight_buf_6_s_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln109_reg_21806.read()))) {
        conv1_weight_buf_6_s_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_6_s_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_7_s_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_7_s_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6064_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_7_s_address0 = grp_biconv16_fu_3804_weights_7_V_address0.read();
    } else {
        conv1_weight_buf_7_s_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_7_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_7_s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_7_s_ce0 = grp_biconv16_fu_3804_weights_7_V_ce0.read();
    } else {
        conv1_weight_buf_7_s_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_7_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_7_s_ce1 = grp_biconv16_fu_3804_weights_7_V_ce1.read();
    } else {
        conv1_weight_buf_7_s_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_7_s_d0() {
    conv1_weight_buf_7_s_d0 = (!conv1_weight_V_q7.read()[0].is_01())? sc_lv<2>(): ((conv1_weight_V_q7.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_0);
}

void ResNet::thread_conv1_weight_buf_7_s_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln109_reg_21806.read()))) {
        conv1_weight_buf_7_s_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_7_s_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_8_s_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_8_s_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6064_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_8_s_address0 = grp_biconv16_fu_3804_weights_8_V_address0.read();
    } else {
        conv1_weight_buf_8_s_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_8_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_8_s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_8_s_ce0 = grp_biconv16_fu_3804_weights_8_V_ce0.read();
    } else {
        conv1_weight_buf_8_s_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_8_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_8_s_ce1 = grp_biconv16_fu_3804_weights_8_V_ce1.read();
    } else {
        conv1_weight_buf_8_s_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_8_s_d0() {
    conv1_weight_buf_8_s_d0 = (!conv1_weight_V_q8.read()[0].is_01())? sc_lv<2>(): ((conv1_weight_V_q8.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_0);
}

void ResNet::thread_conv1_weight_buf_8_s_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln109_reg_21806.read()))) {
        conv1_weight_buf_8_s_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_8_s_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_9_s_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_9_s_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6064_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_9_s_address0 = grp_biconv16_fu_3804_weights_9_V_address0.read();
    } else {
        conv1_weight_buf_9_s_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_9_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_9_s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_9_s_ce0 = grp_biconv16_fu_3804_weights_9_V_ce0.read();
    } else {
        conv1_weight_buf_9_s_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_9_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_weight_buf_9_s_ce1 = grp_biconv16_fu_3804_weights_9_V_ce1.read();
    } else {
        conv1_weight_buf_9_s_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_9_s_d0() {
    conv1_weight_buf_9_s_d0 = (!conv1_weight_V_q9.read()[0].is_01())? sc_lv<2>(): ((conv1_weight_V_q9.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_0);
}

void ResNet::thread_conv1_weight_buf_9_s_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln109_reg_21806.read()))) {
        conv1_weight_buf_9_s_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_9_s_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_coo_1_fu_11285_p2() {
    coo_1_fu_11285_p2 = (!coo39_0_reg_2696.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(coo39_0_reg_2696.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_coo_2_fu_11366_p2() {
    coo_2_fu_11366_p2 = (!coo45_0_reg_2766.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(coo45_0_reg_2766.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_coo_fu_11204_p2() {
    coo_fu_11204_p2 = (!coo_0_reg_2626.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(coo_0_reg_2626.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_fm_buf_V_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_0_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()))) {
        fm_buf_V_0_address0 =  (sc_lv<11>) (zext_ln203_3_fu_9590_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_0_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_0_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_0_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_0_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_0_address0.read();
    } else {
        fm_buf_V_0_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_0_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_0_address1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_0_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_0_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_0_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_0_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_0_address1.read();
    } else {
        fm_buf_V_0_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read())))) {
        fm_buf_V_0_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_0_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_0_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_0_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_0_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_0_ce0.read();
    } else {
        fm_buf_V_0_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_0_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_0_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_0_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_0_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_0_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_0_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_0_ce1.read();
    } else {
        fm_buf_V_0_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_0_d0() {
    fm_buf_V_0_d0 = (!or_ln340_265_fu_9668_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_265_fu_9668_p2.read()[0].to_bool())? select_ln340_fu_9674_p3.read(): select_ln388_fu_9681_p3.read());
}

void ResNet::thread_fm_buf_V_0_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_0_d1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_0_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_0_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_0_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_0_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_0_d1.read();
    } else {
        fm_buf_V_0_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_0_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln122_reg_21912_pp2_iter3_reg.read()))) {
        fm_buf_V_0_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_0_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_0_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_0_we1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_0_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_0_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_0_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_0_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_0_we1.read();
    } else {
        fm_buf_V_0_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_10_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()))) {
        fm_buf_V_10_address0 =  (sc_lv<11>) (zext_ln203_3_fu_9590_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_10_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_10_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_10_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_10_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_10_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_10_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_10_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_10_address0.read();
    } else {
        fm_buf_V_10_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_10_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_10_address1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_10_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_10_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_10_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_10_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_10_address1.read();
    } else {
        fm_buf_V_10_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read())))) {
        fm_buf_V_10_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_10_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_10_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_10_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_10_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_10_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_10_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_10_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_10_ce0.read();
    } else {
        fm_buf_V_10_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_10_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_10_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_10_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_10_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_10_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_10_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_10_ce1.read();
    } else {
        fm_buf_V_10_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_10_d0() {
    fm_buf_V_10_d0 = (!or_ln340_285_fu_10538_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_285_fu_10538_p2.read()[0].to_bool())? select_ln340_10_fu_10544_p3.read(): select_ln388_10_fu_10551_p3.read());
}

void ResNet::thread_fm_buf_V_10_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_10_d1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_10_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_10_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_10_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_10_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_10_d1.read();
    } else {
        fm_buf_V_10_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_10_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln122_reg_21912_pp2_iter3_reg.read()))) {
        fm_buf_V_10_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_10_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_10_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_10_we1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_10_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_10_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_10_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_10_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_10_we1.read();
    } else {
        fm_buf_V_10_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_11_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()))) {
        fm_buf_V_11_address0 =  (sc_lv<11>) (zext_ln203_3_fu_9590_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_11_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_11_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_11_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_11_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_11_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_11_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_11_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_11_address0.read();
    } else {
        fm_buf_V_11_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_11_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_11_address1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_11_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_11_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_11_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_11_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_11_address1.read();
    } else {
        fm_buf_V_11_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read())))) {
        fm_buf_V_11_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_11_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_11_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_11_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_11_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_11_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_11_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_11_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_11_ce0.read();
    } else {
        fm_buf_V_11_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_11_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_11_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_11_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_11_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_11_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_11_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_11_ce1.read();
    } else {
        fm_buf_V_11_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_11_d0() {
    fm_buf_V_11_d0 = (!or_ln340_287_fu_10625_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_287_fu_10625_p2.read()[0].to_bool())? select_ln340_11_fu_10631_p3.read(): select_ln388_11_fu_10638_p3.read());
}

void ResNet::thread_fm_buf_V_11_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_11_d1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_11_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_11_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_11_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_11_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_11_d1.read();
    } else {
        fm_buf_V_11_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_11_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln122_reg_21912_pp2_iter3_reg.read()))) {
        fm_buf_V_11_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_11_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_11_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_11_we1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_11_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_11_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_11_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_11_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_11_we1.read();
    } else {
        fm_buf_V_11_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_12_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_12_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()))) {
        fm_buf_V_12_address0 =  (sc_lv<11>) (zext_ln203_3_fu_9590_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_12_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_12_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_12_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_12_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_12_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_12_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_12_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_12_address0.read();
    } else {
        fm_buf_V_12_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_12_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_12_address1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_12_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_12_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_12_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_12_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_12_address1.read();
    } else {
        fm_buf_V_12_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_12_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read())))) {
        fm_buf_V_12_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_12_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_12_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_12_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_12_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_12_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_12_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_12_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_12_ce0.read();
    } else {
        fm_buf_V_12_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_12_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_12_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_12_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_12_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_12_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_12_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_12_ce1.read();
    } else {
        fm_buf_V_12_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_12_d0() {
    fm_buf_V_12_d0 = (!or_ln340_289_fu_10712_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_289_fu_10712_p2.read()[0].to_bool())? select_ln340_12_fu_10718_p3.read(): select_ln388_12_fu_10725_p3.read());
}

void ResNet::thread_fm_buf_V_12_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_12_d1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_12_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_12_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_12_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_12_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_12_d1.read();
    } else {
        fm_buf_V_12_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_12_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln122_reg_21912_pp2_iter3_reg.read()))) {
        fm_buf_V_12_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_12_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_12_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_12_we1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_12_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_12_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_12_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_12_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_12_we1.read();
    } else {
        fm_buf_V_12_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_13_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_13_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()))) {
        fm_buf_V_13_address0 =  (sc_lv<11>) (zext_ln203_3_fu_9590_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_13_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_13_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_13_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_13_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_13_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_13_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_13_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_13_address0.read();
    } else {
        fm_buf_V_13_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_13_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_13_address1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_13_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_13_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_13_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_13_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_13_address1.read();
    } else {
        fm_buf_V_13_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_13_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read())))) {
        fm_buf_V_13_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_13_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_13_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_13_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_13_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_13_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_13_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_13_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_13_ce0.read();
    } else {
        fm_buf_V_13_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_13_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_13_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_13_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_13_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_13_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_13_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_13_ce1.read();
    } else {
        fm_buf_V_13_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_13_d0() {
    fm_buf_V_13_d0 = (!or_ln340_291_fu_10799_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_291_fu_10799_p2.read()[0].to_bool())? select_ln340_13_fu_10805_p3.read(): select_ln388_13_fu_10812_p3.read());
}

void ResNet::thread_fm_buf_V_13_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_13_d1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_13_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_13_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_13_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_13_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_13_d1.read();
    } else {
        fm_buf_V_13_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_13_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln122_reg_21912_pp2_iter3_reg.read()))) {
        fm_buf_V_13_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_13_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_13_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_13_we1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_13_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_13_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_13_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_13_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_13_we1.read();
    } else {
        fm_buf_V_13_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_14_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_14_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()))) {
        fm_buf_V_14_address0 =  (sc_lv<11>) (zext_ln203_3_fu_9590_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_14_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_14_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_14_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_14_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_14_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_14_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_14_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_14_address0.read();
    } else {
        fm_buf_V_14_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_14_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_14_address1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_14_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_14_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_14_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_14_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_14_address1.read();
    } else {
        fm_buf_V_14_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_14_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read())))) {
        fm_buf_V_14_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_14_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_14_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_14_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_14_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_14_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_14_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_14_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_14_ce0.read();
    } else {
        fm_buf_V_14_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_14_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_14_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_14_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_14_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_14_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_14_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_14_ce1.read();
    } else {
        fm_buf_V_14_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_14_d0() {
    fm_buf_V_14_d0 = (!or_ln340_293_fu_10886_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_293_fu_10886_p2.read()[0].to_bool())? select_ln340_14_fu_10892_p3.read(): select_ln388_14_fu_10899_p3.read());
}

void ResNet::thread_fm_buf_V_14_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_14_d1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_14_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_14_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_14_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_14_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_14_d1.read();
    } else {
        fm_buf_V_14_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_14_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln122_reg_21912_pp2_iter3_reg.read()))) {
        fm_buf_V_14_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_14_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_14_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_14_we1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_14_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_14_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_14_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_14_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_14_we1.read();
    } else {
        fm_buf_V_14_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_15_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_15_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()))) {
        fm_buf_V_15_address0 =  (sc_lv<11>) (zext_ln203_3_fu_9590_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_15_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_15_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_15_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_15_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_15_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_15_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_15_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_15_address0.read();
    } else {
        fm_buf_V_15_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_15_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_15_address1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_15_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_15_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_15_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_15_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_15_address1.read();
    } else {
        fm_buf_V_15_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read())))) {
        fm_buf_V_15_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_15_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_15_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_15_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_15_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_15_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_15_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_15_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_15_ce0.read();
    } else {
        fm_buf_V_15_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_15_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_15_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_15_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_15_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_15_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_15_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_15_ce1.read();
    } else {
        fm_buf_V_15_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_15_d0() {
    fm_buf_V_15_d0 = (!or_ln340_295_fu_10973_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_295_fu_10973_p2.read()[0].to_bool())? select_ln340_15_fu_10979_p3.read(): select_ln388_15_fu_10986_p3.read());
}

void ResNet::thread_fm_buf_V_15_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_15_d1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_15_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_15_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_15_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_15_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_15_d1.read();
    } else {
        fm_buf_V_15_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_15_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln122_reg_21912_pp2_iter3_reg.read()))) {
        fm_buf_V_15_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_15_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_15_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_15_we1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_15_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_15_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_15_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_15_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_15_we1.read();
    } else {
        fm_buf_V_15_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_16_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_16_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_16_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_16_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_16_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_16_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_16_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_16_address0.read();
    } else {
        fm_buf_V_16_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_16_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_16_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_16_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_16_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_16_address1.read();
    } else {
        fm_buf_V_16_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_16_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_16_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_16_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_16_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_16_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_16_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_16_ce0.read();
    } else {
        fm_buf_V_16_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_16_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_16_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_16_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_16_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_16_ce1.read();
    } else {
        fm_buf_V_16_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_16_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_16_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_16_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_16_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_16_d1.read();
    } else {
        fm_buf_V_16_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_16_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_16_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_16_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_16_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_16_we1.read();
    } else {
        fm_buf_V_16_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_17_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_17_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_17_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_17_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_17_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_17_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_17_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_17_address0.read();
    } else {
        fm_buf_V_17_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_17_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_17_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_17_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_17_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_17_address1.read();
    } else {
        fm_buf_V_17_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_17_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_17_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_17_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_17_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_17_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_17_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_17_ce0.read();
    } else {
        fm_buf_V_17_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_17_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_17_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_17_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_17_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_17_ce1.read();
    } else {
        fm_buf_V_17_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_17_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_17_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_17_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_17_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_17_d1.read();
    } else {
        fm_buf_V_17_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_17_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_17_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_17_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_17_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_17_we1.read();
    } else {
        fm_buf_V_17_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_18_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_18_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_18_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_18_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_18_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_18_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_18_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_18_address0.read();
    } else {
        fm_buf_V_18_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_18_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_18_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_18_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_18_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_18_address1.read();
    } else {
        fm_buf_V_18_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_18_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_18_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_18_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_18_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_18_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_18_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_18_ce0.read();
    } else {
        fm_buf_V_18_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_18_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_18_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_18_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_18_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_18_ce1.read();
    } else {
        fm_buf_V_18_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_18_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_18_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_18_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_18_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_18_d1.read();
    } else {
        fm_buf_V_18_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_18_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_18_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_18_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_18_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_18_we1.read();
    } else {
        fm_buf_V_18_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_19_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_19_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_19_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_19_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_19_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_19_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_19_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_19_address0.read();
    } else {
        fm_buf_V_19_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_19_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_19_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_19_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_19_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_19_address1.read();
    } else {
        fm_buf_V_19_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_19_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_19_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_19_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_19_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_19_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_19_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_19_ce0.read();
    } else {
        fm_buf_V_19_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_19_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_19_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_19_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_19_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_19_ce1.read();
    } else {
        fm_buf_V_19_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_19_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_19_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_19_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_19_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_19_d1.read();
    } else {
        fm_buf_V_19_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_19_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_19_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_19_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_19_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_19_we1.read();
    } else {
        fm_buf_V_19_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_1_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()))) {
        fm_buf_V_1_address0 =  (sc_lv<11>) (zext_ln203_3_fu_9590_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_1_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_1_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_1_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_1_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_1_address0.read();
    } else {
        fm_buf_V_1_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_1_address1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_1_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_1_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_1_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_1_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_1_address1.read();
    } else {
        fm_buf_V_1_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read())))) {
        fm_buf_V_1_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_1_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_1_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_1_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_1_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_1_ce0.read();
    } else {
        fm_buf_V_1_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_1_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_1_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_1_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_1_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_1_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_1_ce1.read();
    } else {
        fm_buf_V_1_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_1_d0() {
    fm_buf_V_1_d0 = (!or_ln340_267_fu_9755_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_267_fu_9755_p2.read()[0].to_bool())? select_ln340_1_fu_9761_p3.read(): select_ln388_1_fu_9768_p3.read());
}

void ResNet::thread_fm_buf_V_1_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_1_d1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_1_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_1_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_1_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_1_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_1_d1.read();
    } else {
        fm_buf_V_1_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_1_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln122_reg_21912_pp2_iter3_reg.read()))) {
        fm_buf_V_1_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_1_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_1_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_1_we1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_1_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_1_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_1_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_1_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_1_we1.read();
    } else {
        fm_buf_V_1_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_20_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_20_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_20_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_20_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_20_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_20_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_20_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_20_address0.read();
    } else {
        fm_buf_V_20_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_20_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_20_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_20_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_20_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_20_address1.read();
    } else {
        fm_buf_V_20_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_20_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_20_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_20_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_20_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_20_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_20_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_20_ce0.read();
    } else {
        fm_buf_V_20_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_20_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_20_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_20_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_20_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_20_ce1.read();
    } else {
        fm_buf_V_20_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_20_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_20_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_20_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_20_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_20_d1.read();
    } else {
        fm_buf_V_20_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_20_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_20_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_20_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_20_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_20_we1.read();
    } else {
        fm_buf_V_20_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_21_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_21_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_21_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_21_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_21_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_21_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_21_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_21_address0.read();
    } else {
        fm_buf_V_21_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_21_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_21_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_21_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_21_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_21_address1.read();
    } else {
        fm_buf_V_21_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_21_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_21_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_21_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_21_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_21_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_21_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_21_ce0.read();
    } else {
        fm_buf_V_21_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_21_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_21_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_21_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_21_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_21_ce1.read();
    } else {
        fm_buf_V_21_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_21_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_21_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_21_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_21_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_21_d1.read();
    } else {
        fm_buf_V_21_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_21_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_21_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_21_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_21_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_21_we1.read();
    } else {
        fm_buf_V_21_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_22_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_22_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_22_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_22_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_22_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_22_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_22_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_22_address0.read();
    } else {
        fm_buf_V_22_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_22_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_22_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_22_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_22_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_22_address1.read();
    } else {
        fm_buf_V_22_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_22_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_22_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_22_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_22_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_22_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_22_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_22_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_22_ce0.read();
    } else {
        fm_buf_V_22_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_22_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_22_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_22_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_22_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_22_ce1.read();
    } else {
        fm_buf_V_22_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_22_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_22_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_22_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_22_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_22_d1.read();
    } else {
        fm_buf_V_22_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_22_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_22_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_22_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_22_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_22_we1.read();
    } else {
        fm_buf_V_22_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_23_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_23_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_23_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_23_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_23_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_23_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_23_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_23_address0.read();
    } else {
        fm_buf_V_23_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_23_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_23_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_23_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_23_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_23_address1.read();
    } else {
        fm_buf_V_23_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_23_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_23_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_23_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_23_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_23_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_23_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_23_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_23_ce0.read();
    } else {
        fm_buf_V_23_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_23_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_23_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_23_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_23_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_23_ce1.read();
    } else {
        fm_buf_V_23_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_23_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_23_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_23_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_23_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_23_d1.read();
    } else {
        fm_buf_V_23_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_23_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_23_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_23_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_23_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_23_we1.read();
    } else {
        fm_buf_V_23_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_24_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_24_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_24_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_24_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_24_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_24_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_24_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_24_address0.read();
    } else {
        fm_buf_V_24_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_24_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_24_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_24_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_24_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_24_address1.read();
    } else {
        fm_buf_V_24_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_24_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_24_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_24_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_24_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_24_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_24_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_24_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_24_ce0.read();
    } else {
        fm_buf_V_24_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_24_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_24_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_24_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_24_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_24_ce1.read();
    } else {
        fm_buf_V_24_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_24_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_24_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_24_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_24_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_24_d1.read();
    } else {
        fm_buf_V_24_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_24_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_24_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_24_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_24_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_24_we1.read();
    } else {
        fm_buf_V_24_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_25_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_25_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_25_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_25_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_25_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_25_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_25_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_25_address0.read();
    } else {
        fm_buf_V_25_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_25_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_25_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_25_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_25_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_25_address1.read();
    } else {
        fm_buf_V_25_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_25_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_25_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_25_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_25_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_25_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_25_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_25_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_25_ce0.read();
    } else {
        fm_buf_V_25_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_25_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_25_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_25_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_25_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_25_ce1.read();
    } else {
        fm_buf_V_25_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_25_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_25_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_25_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_25_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_25_d1.read();
    } else {
        fm_buf_V_25_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_25_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_25_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_25_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_25_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_25_we1.read();
    } else {
        fm_buf_V_25_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_26_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_26_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_26_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_26_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_26_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_26_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_26_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_26_address0.read();
    } else {
        fm_buf_V_26_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_26_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_26_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_26_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_26_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_26_address1.read();
    } else {
        fm_buf_V_26_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_26_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_26_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_26_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_26_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_26_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_26_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_26_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_26_ce0.read();
    } else {
        fm_buf_V_26_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_26_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_26_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_26_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_26_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_26_ce1.read();
    } else {
        fm_buf_V_26_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_26_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_26_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_26_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_26_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_26_d1.read();
    } else {
        fm_buf_V_26_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_26_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_26_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_26_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_26_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_26_we1.read();
    } else {
        fm_buf_V_26_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_27_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_27_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_27_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_27_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_27_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_27_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_27_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_27_address0.read();
    } else {
        fm_buf_V_27_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_27_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_27_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_27_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_27_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_27_address1.read();
    } else {
        fm_buf_V_27_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_27_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_27_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_27_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_27_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_27_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_27_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_27_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_27_ce0.read();
    } else {
        fm_buf_V_27_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_27_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_27_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_27_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_27_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_27_ce1.read();
    } else {
        fm_buf_V_27_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_27_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_27_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_27_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_27_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_27_d1.read();
    } else {
        fm_buf_V_27_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_27_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_27_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_27_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_27_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_27_we1.read();
    } else {
        fm_buf_V_27_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_28_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_28_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_28_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_28_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_28_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_28_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_28_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_28_address0.read();
    } else {
        fm_buf_V_28_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_28_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_28_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_28_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_28_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_28_address1.read();
    } else {
        fm_buf_V_28_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_28_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_28_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_28_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_28_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_28_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_28_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_28_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_28_ce0.read();
    } else {
        fm_buf_V_28_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_28_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_28_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_28_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_28_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_28_ce1.read();
    } else {
        fm_buf_V_28_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_28_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_28_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_28_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_28_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_28_d1.read();
    } else {
        fm_buf_V_28_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_28_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_28_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_28_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_28_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_28_we1.read();
    } else {
        fm_buf_V_28_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_29_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_29_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_29_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_29_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_29_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_29_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_29_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_29_address0.read();
    } else {
        fm_buf_V_29_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_29_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_29_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_29_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_29_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_29_address1.read();
    } else {
        fm_buf_V_29_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_29_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_29_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_29_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_29_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_29_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_29_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_29_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_29_ce0.read();
    } else {
        fm_buf_V_29_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_29_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_29_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_29_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_29_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_29_ce1.read();
    } else {
        fm_buf_V_29_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_29_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_29_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_29_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_29_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_29_d1.read();
    } else {
        fm_buf_V_29_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_29_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_29_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_29_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_29_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_29_we1.read();
    } else {
        fm_buf_V_29_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_2_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()))) {
        fm_buf_V_2_address0 =  (sc_lv<11>) (zext_ln203_3_fu_9590_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_2_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_2_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_2_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_2_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_2_address0.read();
    } else {
        fm_buf_V_2_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_2_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_2_address1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_2_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_2_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_2_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_2_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_2_address1.read();
    } else {
        fm_buf_V_2_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

}

