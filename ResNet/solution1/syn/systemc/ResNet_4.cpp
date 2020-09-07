#include "ResNet.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ResNet::thread_BUS32_AWVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        BUS32_AWVALID = grp_matmul_fu_4298_m_axi_top_AWVALID.read();
    } else {
        BUS32_AWVALID = ap_const_logic_0;
    }
}

void ResNet::thread_BUS32_BREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        BUS32_BREADY = grp_matmul_fu_4298_m_axi_top_BREADY.read();
    } else {
        BUS32_BREADY = ap_const_logic_0;
    }
}

void ResNet::thread_BUS32_WVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        BUS32_WVALID = grp_matmul_fu_4298_m_axi_top_WVALID.read();
    } else {
        BUS32_WVALID = ap_const_logic_0;
    }
}

void ResNet::thread_IMG_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln86_reg_21875.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        IMG_ARVALID = ap_const_logic_1;
    } else {
        IMG_ARVALID = ap_const_logic_0;
    }
}

void ResNet::thread_IMG_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln86_reg_21875_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        IMG_RREADY = ap_const_logic_1;
    } else {
        IMG_RREADY = ap_const_logic_0;
    }
}

void ResNet::thread_IMG_blk_n_AR() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln86_reg_21875.read(), ap_const_lv1_0))) {
        IMG_blk_n_AR = m_axi_IMG_ARREADY.read();
    } else {
        IMG_blk_n_AR = ap_const_logic_1;
    }
}

void ResNet::thread_IMG_blk_n_R() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln86_reg_21875_pp0_iter7_reg.read()))) {
        IMG_blk_n_R = m_axi_IMG_RVALID.read();
    } else {
        IMG_blk_n_R = ap_const_logic_1;
    }
}

void ResNet::thread_add_ln106_fu_5389_p2() {
    add_ln106_fu_5389_p2 = (!indvar_flatten26_reg_2358.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(indvar_flatten26_reg_2358.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ResNet::thread_add_ln1116_fu_6558_p2() {
    add_ln1116_fu_6558_p2 = (!zext_ln121_3_fu_6540_p1.read().is_01() || !zext_ln1116_fu_6554_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln121_3_fu_6540_p1.read()) + sc_biguint<12>(zext_ln1116_fu_6554_p1.read()));
}

void ResNet::thread_add_ln1192_148_fu_7043_p2() {
    add_ln1192_148_fu_7043_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_1_fu_7033_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_1_fu_7033_p2.read()));
}

void ResNet::thread_add_ln1192_149_fu_7324_p2() {
    add_ln1192_149_fu_7324_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_2_fu_7314_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_2_fu_7314_p2.read()));
}

void ResNet::thread_add_ln1192_150_fu_7605_p2() {
    add_ln1192_150_fu_7605_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_3_fu_7595_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_3_fu_7595_p2.read()));
}

void ResNet::thread_add_ln1192_151_fu_11953_p2() {
    add_ln1192_151_fu_11953_p2 = (!sext_ln703_fu_11945_p1.read().is_01() || !sext_ln703_157_fu_11949_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_fu_11945_p1.read()) + sc_bigint<13>(sext_ln703_157_fu_11949_p1.read()));
}

void ResNet::thread_add_ln1192_152_fu_7886_p2() {
    add_ln1192_152_fu_7886_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_4_fu_7876_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_4_fu_7876_p2.read()));
}

void ResNet::thread_add_ln1192_153_fu_12043_p2() {
    add_ln1192_153_fu_12043_p2 = (!sext_ln703_158_fu_12035_p1.read().is_01() || !sext_ln703_159_fu_12039_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_158_fu_12035_p1.read()) + sc_bigint<13>(sext_ln703_159_fu_12039_p1.read()));
}

void ResNet::thread_add_ln1192_154_fu_8167_p2() {
    add_ln1192_154_fu_8167_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_5_fu_8157_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_5_fu_8157_p2.read()));
}

void ResNet::thread_add_ln1192_155_fu_12133_p2() {
    add_ln1192_155_fu_12133_p2 = (!sext_ln703_160_fu_12125_p1.read().is_01() || !sext_ln703_161_fu_12129_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_160_fu_12125_p1.read()) + sc_bigint<13>(sext_ln703_161_fu_12129_p1.read()));
}

void ResNet::thread_add_ln1192_156_fu_12223_p2() {
    add_ln1192_156_fu_12223_p2 = (!sext_ln703_162_fu_12215_p1.read().is_01() || !sext_ln703_163_fu_12219_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_162_fu_12215_p1.read()) + sc_bigint<13>(sext_ln703_163_fu_12219_p1.read()));
}

void ResNet::thread_add_ln1192_157_fu_8448_p2() {
    add_ln1192_157_fu_8448_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_6_fu_8438_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_6_fu_8438_p2.read()));
}

void ResNet::thread_add_ln1192_158_fu_12313_p2() {
    add_ln1192_158_fu_12313_p2 = (!sext_ln703_164_fu_12305_p1.read().is_01() || !sext_ln703_165_fu_12309_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_164_fu_12305_p1.read()) + sc_bigint<13>(sext_ln703_165_fu_12309_p1.read()));
}

void ResNet::thread_add_ln1192_159_fu_8729_p2() {
    add_ln1192_159_fu_8729_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_7_fu_8719_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_7_fu_8719_p2.read()));
}

void ResNet::thread_add_ln1192_160_fu_12403_p2() {
    add_ln1192_160_fu_12403_p2 = (!sext_ln703_166_fu_12395_p1.read().is_01() || !sext_ln703_167_fu_12399_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_166_fu_12395_p1.read()) + sc_bigint<13>(sext_ln703_167_fu_12399_p1.read()));
}

void ResNet::thread_add_ln1192_161_fu_9010_p2() {
    add_ln1192_161_fu_9010_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_8_fu_9000_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_8_fu_9000_p2.read()));
}

void ResNet::thread_add_ln1192_162_fu_12493_p2() {
    add_ln1192_162_fu_12493_p2 = (!sext_ln703_168_fu_12485_p1.read().is_01() || !sext_ln703_169_fu_12489_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_168_fu_12485_p1.read()) + sc_bigint<13>(sext_ln703_169_fu_12489_p1.read()));
}

void ResNet::thread_add_ln1192_163_fu_12583_p2() {
    add_ln1192_163_fu_12583_p2 = (!sext_ln703_170_fu_12575_p1.read().is_01() || !sext_ln703_171_fu_12579_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_170_fu_12575_p1.read()) + sc_bigint<13>(sext_ln703_171_fu_12579_p1.read()));
}

void ResNet::thread_add_ln1192_164_fu_9291_p2() {
    add_ln1192_164_fu_9291_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_9_fu_9281_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_9_fu_9281_p2.read()));
}

void ResNet::thread_add_ln1192_165_fu_12673_p2() {
    add_ln1192_165_fu_12673_p2 = (!sext_ln703_172_fu_12665_p1.read().is_01() || !sext_ln703_173_fu_12669_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_172_fu_12665_p1.read()) + sc_bigint<13>(sext_ln703_173_fu_12669_p1.read()));
}

void ResNet::thread_add_ln1192_166_fu_9572_p2() {
    add_ln1192_166_fu_9572_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_10_fu_9562_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_10_fu_9562_p2.read()));
}

void ResNet::thread_add_ln1192_167_fu_12763_p2() {
    add_ln1192_167_fu_12763_p2 = (!sext_ln703_174_fu_12755_p1.read().is_01() || !sext_ln703_175_fu_12759_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_174_fu_12755_p1.read()) + sc_bigint<13>(sext_ln703_175_fu_12759_p1.read()));
}

void ResNet::thread_add_ln1192_168_fu_9853_p2() {
    add_ln1192_168_fu_9853_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_11_fu_9843_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_11_fu_9843_p2.read()));
}

void ResNet::thread_add_ln1192_169_fu_12853_p2() {
    add_ln1192_169_fu_12853_p2 = (!sext_ln703_176_fu_12845_p1.read().is_01() || !sext_ln703_177_fu_12849_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_176_fu_12845_p1.read()) + sc_bigint<13>(sext_ln703_177_fu_12849_p1.read()));
}

void ResNet::thread_add_ln1192_170_fu_12943_p2() {
    add_ln1192_170_fu_12943_p2 = (!sext_ln703_178_fu_12935_p1.read().is_01() || !sext_ln703_179_fu_12939_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_178_fu_12935_p1.read()) + sc_bigint<13>(sext_ln703_179_fu_12939_p1.read()));
}

void ResNet::thread_add_ln1192_171_fu_10134_p2() {
    add_ln1192_171_fu_10134_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_12_fu_10124_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_12_fu_10124_p2.read()));
}

void ResNet::thread_add_ln1192_172_fu_13033_p2() {
    add_ln1192_172_fu_13033_p2 = (!sext_ln703_180_fu_13025_p1.read().is_01() || !sext_ln703_181_fu_13029_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_180_fu_13025_p1.read()) + sc_bigint<13>(sext_ln703_181_fu_13029_p1.read()));
}

void ResNet::thread_add_ln1192_173_fu_10415_p2() {
    add_ln1192_173_fu_10415_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_13_fu_10405_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_13_fu_10405_p2.read()));
}

void ResNet::thread_add_ln1192_174_fu_13123_p2() {
    add_ln1192_174_fu_13123_p2 = (!sext_ln703_182_fu_13115_p1.read().is_01() || !sext_ln703_183_fu_13119_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_182_fu_13115_p1.read()) + sc_bigint<13>(sext_ln703_183_fu_13119_p1.read()));
}

void ResNet::thread_add_ln1192_175_fu_10696_p2() {
    add_ln1192_175_fu_10696_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_14_fu_10686_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_14_fu_10686_p2.read()));
}

void ResNet::thread_add_ln1192_176_fu_13213_p2() {
    add_ln1192_176_fu_13213_p2 = (!sext_ln703_184_fu_13205_p1.read().is_01() || !sext_ln703_185_fu_13209_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_184_fu_13205_p1.read()) + sc_bigint<13>(sext_ln703_185_fu_13209_p1.read()));
}

void ResNet::thread_add_ln1192_177_fu_13303_p2() {
    add_ln1192_177_fu_13303_p2 = (!sext_ln703_186_fu_13295_p1.read().is_01() || !sext_ln703_187_fu_13299_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_186_fu_13295_p1.read()) + sc_bigint<13>(sext_ln703_187_fu_13299_p1.read()));
}

void ResNet::thread_add_ln1192_178_fu_10977_p2() {
    add_ln1192_178_fu_10977_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_15_fu_10967_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_15_fu_10967_p2.read()));
}

void ResNet::thread_add_ln1192_179_fu_13393_p2() {
    add_ln1192_179_fu_13393_p2 = (!sext_ln703_188_fu_13385_p1.read().is_01() || !sext_ln703_189_fu_13389_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_188_fu_13385_p1.read()) + sc_bigint<13>(sext_ln703_189_fu_13389_p1.read()));
}

void ResNet::thread_add_ln1192_180_fu_13483_p2() {
    add_ln1192_180_fu_13483_p2 = (!sext_ln703_190_fu_13475_p1.read().is_01() || !sext_ln703_191_fu_13479_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_190_fu_13475_p1.read()) + sc_bigint<13>(sext_ln703_191_fu_13479_p1.read()));
}

void ResNet::thread_add_ln1192_181_fu_13573_p2() {
    add_ln1192_181_fu_13573_p2 = (!sext_ln703_192_fu_13565_p1.read().is_01() || !sext_ln703_193_fu_13569_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_192_fu_13565_p1.read()) + sc_bigint<13>(sext_ln703_193_fu_13569_p1.read()));
}

void ResNet::thread_add_ln1192_182_fu_13663_p2() {
    add_ln1192_182_fu_13663_p2 = (!sext_ln703_194_fu_13655_p1.read().is_01() || !sext_ln703_195_fu_13659_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_194_fu_13655_p1.read()) + sc_bigint<13>(sext_ln703_195_fu_13659_p1.read()));
}

void ResNet::thread_add_ln1192_183_fu_13753_p2() {
    add_ln1192_183_fu_13753_p2 = (!sext_ln703_196_fu_13745_p1.read().is_01() || !sext_ln703_197_fu_13749_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_196_fu_13745_p1.read()) + sc_bigint<13>(sext_ln703_197_fu_13749_p1.read()));
}

void ResNet::thread_add_ln1192_184_fu_13843_p2() {
    add_ln1192_184_fu_13843_p2 = (!sext_ln703_198_fu_13835_p1.read().is_01() || !sext_ln703_199_fu_13839_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_198_fu_13835_p1.read()) + sc_bigint<13>(sext_ln703_199_fu_13839_p1.read()));
}

void ResNet::thread_add_ln1192_185_fu_13933_p2() {
    add_ln1192_185_fu_13933_p2 = (!sext_ln703_200_fu_13925_p1.read().is_01() || !sext_ln703_201_fu_13929_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_200_fu_13925_p1.read()) + sc_bigint<13>(sext_ln703_201_fu_13929_p1.read()));
}

void ResNet::thread_add_ln1192_186_fu_14023_p2() {
    add_ln1192_186_fu_14023_p2 = (!sext_ln703_202_fu_14015_p1.read().is_01() || !sext_ln703_203_fu_14019_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_202_fu_14015_p1.read()) + sc_bigint<13>(sext_ln703_203_fu_14019_p1.read()));
}

void ResNet::thread_add_ln1192_187_fu_14113_p2() {
    add_ln1192_187_fu_14113_p2 = (!sext_ln703_204_fu_14105_p1.read().is_01() || !sext_ln703_205_fu_14109_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_204_fu_14105_p1.read()) + sc_bigint<13>(sext_ln703_205_fu_14109_p1.read()));
}

void ResNet::thread_add_ln1192_188_fu_14203_p2() {
    add_ln1192_188_fu_14203_p2 = (!sext_ln703_206_fu_14195_p1.read().is_01() || !sext_ln703_207_fu_14199_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_206_fu_14195_p1.read()) + sc_bigint<13>(sext_ln703_207_fu_14199_p1.read()));
}

void ResNet::thread_add_ln1192_189_fu_14293_p2() {
    add_ln1192_189_fu_14293_p2 = (!sext_ln703_208_fu_14285_p1.read().is_01() || !sext_ln703_209_fu_14289_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_208_fu_14285_p1.read()) + sc_bigint<13>(sext_ln703_209_fu_14289_p1.read()));
}

void ResNet::thread_add_ln1192_190_fu_14383_p2() {
    add_ln1192_190_fu_14383_p2 = (!sext_ln703_210_fu_14375_p1.read().is_01() || !sext_ln703_211_fu_14379_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_210_fu_14375_p1.read()) + sc_bigint<13>(sext_ln703_211_fu_14379_p1.read()));
}

void ResNet::thread_add_ln1192_191_fu_14473_p2() {
    add_ln1192_191_fu_14473_p2 = (!sext_ln703_212_fu_14465_p1.read().is_01() || !sext_ln703_213_fu_14469_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_212_fu_14465_p1.read()) + sc_bigint<13>(sext_ln703_213_fu_14469_p1.read()));
}

void ResNet::thread_add_ln1192_192_fu_14563_p2() {
    add_ln1192_192_fu_14563_p2 = (!sext_ln703_214_fu_14555_p1.read().is_01() || !sext_ln703_215_fu_14559_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_214_fu_14555_p1.read()) + sc_bigint<13>(sext_ln703_215_fu_14559_p1.read()));
}

void ResNet::thread_add_ln1192_193_fu_14653_p2() {
    add_ln1192_193_fu_14653_p2 = (!sext_ln703_216_fu_14645_p1.read().is_01() || !sext_ln703_217_fu_14649_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_216_fu_14645_p1.read()) + sc_bigint<13>(sext_ln703_217_fu_14649_p1.read()));
}

void ResNet::thread_add_ln1192_194_fu_14743_p2() {
    add_ln1192_194_fu_14743_p2 = (!sext_ln703_218_fu_14735_p1.read().is_01() || !sext_ln703_219_fu_14739_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_218_fu_14735_p1.read()) + sc_bigint<13>(sext_ln703_219_fu_14739_p1.read()));
}

void ResNet::thread_add_ln1192_195_fu_14833_p2() {
    add_ln1192_195_fu_14833_p2 = (!sext_ln703_220_fu_14825_p1.read().is_01() || !sext_ln703_221_fu_14829_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_220_fu_14825_p1.read()) + sc_bigint<13>(sext_ln703_221_fu_14829_p1.read()));
}

void ResNet::thread_add_ln1192_196_fu_14923_p2() {
    add_ln1192_196_fu_14923_p2 = (!sext_ln703_222_fu_14915_p1.read().is_01() || !sext_ln703_223_fu_14919_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_222_fu_14915_p1.read()) + sc_bigint<13>(sext_ln703_223_fu_14919_p1.read()));
}

void ResNet::thread_add_ln1192_197_fu_15013_p2() {
    add_ln1192_197_fu_15013_p2 = (!sext_ln703_224_fu_15005_p1.read().is_01() || !sext_ln703_225_fu_15009_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_224_fu_15005_p1.read()) + sc_bigint<13>(sext_ln703_225_fu_15009_p1.read()));
}

void ResNet::thread_add_ln1192_198_fu_15103_p2() {
    add_ln1192_198_fu_15103_p2 = (!sext_ln703_226_fu_15095_p1.read().is_01() || !sext_ln703_227_fu_15099_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_226_fu_15095_p1.read()) + sc_bigint<13>(sext_ln703_227_fu_15099_p1.read()));
}

void ResNet::thread_add_ln1192_199_fu_15193_p2() {
    add_ln1192_199_fu_15193_p2 = (!sext_ln703_228_fu_15185_p1.read().is_01() || !sext_ln703_229_fu_15189_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_228_fu_15185_p1.read()) + sc_bigint<13>(sext_ln703_229_fu_15189_p1.read()));
}

void ResNet::thread_add_ln1192_200_fu_15283_p2() {
    add_ln1192_200_fu_15283_p2 = (!sext_ln703_230_fu_15275_p1.read().is_01() || !sext_ln703_231_fu_15279_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_230_fu_15275_p1.read()) + sc_bigint<13>(sext_ln703_231_fu_15279_p1.read()));
}

void ResNet::thread_add_ln1192_201_fu_15373_p2() {
    add_ln1192_201_fu_15373_p2 = (!sext_ln703_232_fu_15365_p1.read().is_01() || !sext_ln703_233_fu_15369_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_232_fu_15365_p1.read()) + sc_bigint<13>(sext_ln703_233_fu_15369_p1.read()));
}

void ResNet::thread_add_ln1192_202_fu_15463_p2() {
    add_ln1192_202_fu_15463_p2 = (!sext_ln703_234_fu_15455_p1.read().is_01() || !sext_ln703_235_fu_15459_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_234_fu_15455_p1.read()) + sc_bigint<13>(sext_ln703_235_fu_15459_p1.read()));
}

void ResNet::thread_add_ln1192_203_fu_15553_p2() {
    add_ln1192_203_fu_15553_p2 = (!sext_ln703_236_fu_15545_p1.read().is_01() || !sext_ln703_237_fu_15549_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_236_fu_15545_p1.read()) + sc_bigint<13>(sext_ln703_237_fu_15549_p1.read()));
}

void ResNet::thread_add_ln1192_204_fu_15643_p2() {
    add_ln1192_204_fu_15643_p2 = (!sext_ln703_238_fu_15635_p1.read().is_01() || !sext_ln703_239_fu_15639_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_238_fu_15635_p1.read()) + sc_bigint<13>(sext_ln703_239_fu_15639_p1.read()));
}

void ResNet::thread_add_ln1192_205_fu_15733_p2() {
    add_ln1192_205_fu_15733_p2 = (!sext_ln703_240_fu_15725_p1.read().is_01() || !sext_ln703_241_fu_15729_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_240_fu_15725_p1.read()) + sc_bigint<13>(sext_ln703_241_fu_15729_p1.read()));
}

void ResNet::thread_add_ln1192_206_fu_15823_p2() {
    add_ln1192_206_fu_15823_p2 = (!sext_ln703_242_fu_15815_p1.read().is_01() || !sext_ln703_243_fu_15819_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_242_fu_15815_p1.read()) + sc_bigint<13>(sext_ln703_243_fu_15819_p1.read()));
}

void ResNet::thread_add_ln1192_207_fu_15913_p2() {
    add_ln1192_207_fu_15913_p2 = (!sext_ln703_244_fu_15905_p1.read().is_01() || !sext_ln703_245_fu_15909_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_244_fu_15905_p1.read()) + sc_bigint<13>(sext_ln703_245_fu_15909_p1.read()));
}

void ResNet::thread_add_ln1192_208_fu_16003_p2() {
    add_ln1192_208_fu_16003_p2 = (!sext_ln703_246_fu_15995_p1.read().is_01() || !sext_ln703_247_fu_15999_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_246_fu_15995_p1.read()) + sc_bigint<13>(sext_ln703_247_fu_15999_p1.read()));
}

void ResNet::thread_add_ln1192_209_fu_16093_p2() {
    add_ln1192_209_fu_16093_p2 = (!sext_ln703_248_fu_16085_p1.read().is_01() || !sext_ln703_249_fu_16089_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_248_fu_16085_p1.read()) + sc_bigint<13>(sext_ln703_249_fu_16089_p1.read()));
}

void ResNet::thread_add_ln1192_210_fu_16183_p2() {
    add_ln1192_210_fu_16183_p2 = (!sext_ln703_250_fu_16175_p1.read().is_01() || !sext_ln703_251_fu_16179_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_250_fu_16175_p1.read()) + sc_bigint<13>(sext_ln703_251_fu_16179_p1.read()));
}

void ResNet::thread_add_ln1192_211_fu_16273_p2() {
    add_ln1192_211_fu_16273_p2 = (!sext_ln703_252_fu_16265_p1.read().is_01() || !sext_ln703_253_fu_16269_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_252_fu_16265_p1.read()) + sc_bigint<13>(sext_ln703_253_fu_16269_p1.read()));
}

void ResNet::thread_add_ln1192_212_fu_16363_p2() {
    add_ln1192_212_fu_16363_p2 = (!sext_ln703_254_fu_16355_p1.read().is_01() || !sext_ln703_255_fu_16359_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_254_fu_16355_p1.read()) + sc_bigint<13>(sext_ln703_255_fu_16359_p1.read()));
}

void ResNet::thread_add_ln1192_213_fu_16453_p2() {
    add_ln1192_213_fu_16453_p2 = (!sext_ln703_256_fu_16445_p1.read().is_01() || !sext_ln703_257_fu_16449_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_256_fu_16445_p1.read()) + sc_bigint<13>(sext_ln703_257_fu_16449_p1.read()));
}

void ResNet::thread_add_ln1192_214_fu_16543_p2() {
    add_ln1192_214_fu_16543_p2 = (!sext_ln703_258_fu_16535_p1.read().is_01() || !sext_ln703_259_fu_16539_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_258_fu_16535_p1.read()) + sc_bigint<13>(sext_ln703_259_fu_16539_p1.read()));
}

void ResNet::thread_add_ln1192_215_fu_16633_p2() {
    add_ln1192_215_fu_16633_p2 = (!sext_ln703_260_fu_16625_p1.read().is_01() || !sext_ln703_261_fu_16629_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_260_fu_16625_p1.read()) + sc_bigint<13>(sext_ln703_261_fu_16629_p1.read()));
}

void ResNet::thread_add_ln1192_216_fu_16723_p2() {
    add_ln1192_216_fu_16723_p2 = (!sext_ln703_262_fu_16715_p1.read().is_01() || !sext_ln703_263_fu_16719_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_262_fu_16715_p1.read()) + sc_bigint<13>(sext_ln703_263_fu_16719_p1.read()));
}

void ResNet::thread_add_ln1192_217_fu_16813_p2() {
    add_ln1192_217_fu_16813_p2 = (!sext_ln703_264_fu_16805_p1.read().is_01() || !sext_ln703_265_fu_16809_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_264_fu_16805_p1.read()) + sc_bigint<13>(sext_ln703_265_fu_16809_p1.read()));
}

void ResNet::thread_add_ln1192_218_fu_16903_p2() {
    add_ln1192_218_fu_16903_p2 = (!sext_ln703_266_fu_16895_p1.read().is_01() || !sext_ln703_267_fu_16899_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_266_fu_16895_p1.read()) + sc_bigint<13>(sext_ln703_267_fu_16899_p1.read()));
}

void ResNet::thread_add_ln1192_219_fu_16993_p2() {
    add_ln1192_219_fu_16993_p2 = (!sext_ln703_268_fu_16985_p1.read().is_01() || !sext_ln703_269_fu_16989_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_268_fu_16985_p1.read()) + sc_bigint<13>(sext_ln703_269_fu_16989_p1.read()));
}

void ResNet::thread_add_ln1192_220_fu_17083_p2() {
    add_ln1192_220_fu_17083_p2 = (!sext_ln703_270_fu_17075_p1.read().is_01() || !sext_ln703_271_fu_17079_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_270_fu_17075_p1.read()) + sc_bigint<13>(sext_ln703_271_fu_17079_p1.read()));
}

void ResNet::thread_add_ln1192_221_fu_17173_p2() {
    add_ln1192_221_fu_17173_p2 = (!sext_ln703_272_fu_17165_p1.read().is_01() || !sext_ln703_273_fu_17169_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_272_fu_17165_p1.read()) + sc_bigint<13>(sext_ln703_273_fu_17169_p1.read()));
}

void ResNet::thread_add_ln1192_222_fu_17263_p2() {
    add_ln1192_222_fu_17263_p2 = (!sext_ln703_274_fu_17255_p1.read().is_01() || !sext_ln703_275_fu_17259_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_274_fu_17255_p1.read()) + sc_bigint<13>(sext_ln703_275_fu_17259_p1.read()));
}

void ResNet::thread_add_ln1192_223_fu_17353_p2() {
    add_ln1192_223_fu_17353_p2 = (!sext_ln703_276_fu_17345_p1.read().is_01() || !sext_ln703_277_fu_17349_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_276_fu_17345_p1.read()) + sc_bigint<13>(sext_ln703_277_fu_17349_p1.read()));
}

void ResNet::thread_add_ln1192_224_fu_17443_p2() {
    add_ln1192_224_fu_17443_p2 = (!sext_ln703_278_fu_17435_p1.read().is_01() || !sext_ln703_279_fu_17439_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_278_fu_17435_p1.read()) + sc_bigint<13>(sext_ln703_279_fu_17439_p1.read()));
}

void ResNet::thread_add_ln1192_225_fu_17533_p2() {
    add_ln1192_225_fu_17533_p2 = (!sext_ln703_280_fu_17525_p1.read().is_01() || !sext_ln703_281_fu_17529_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_280_fu_17525_p1.read()) + sc_bigint<13>(sext_ln703_281_fu_17529_p1.read()));
}

void ResNet::thread_add_ln1192_226_fu_17623_p2() {
    add_ln1192_226_fu_17623_p2 = (!sext_ln703_282_fu_17615_p1.read().is_01() || !sext_ln703_283_fu_17619_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_282_fu_17615_p1.read()) + sc_bigint<13>(sext_ln703_283_fu_17619_p1.read()));
}

void ResNet::thread_add_ln1192_227_fu_6768_p2() {
    add_ln1192_227_fu_6768_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_fu_6758_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_fu_6758_p1.read()));
}

void ResNet::thread_add_ln1192_228_fu_7049_p2() {
    add_ln1192_228_fu_7049_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_55_fu_7039_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_55_fu_7039_p1.read()));
}

void ResNet::thread_add_ln1192_229_fu_7330_p2() {
    add_ln1192_229_fu_7330_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_56_fu_7320_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_56_fu_7320_p1.read()));
}

void ResNet::thread_add_ln1192_230_fu_7611_p2() {
    add_ln1192_230_fu_7611_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_57_fu_7601_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_57_fu_7601_p1.read()));
}

void ResNet::thread_add_ln1192_231_fu_7892_p2() {
    add_ln1192_231_fu_7892_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_58_fu_7882_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_58_fu_7882_p1.read()));
}

void ResNet::thread_add_ln1192_232_fu_8173_p2() {
    add_ln1192_232_fu_8173_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_59_fu_8163_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_59_fu_8163_p1.read()));
}

void ResNet::thread_add_ln1192_233_fu_8454_p2() {
    add_ln1192_233_fu_8454_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_60_fu_8444_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_60_fu_8444_p1.read()));
}

void ResNet::thread_add_ln1192_234_fu_8735_p2() {
    add_ln1192_234_fu_8735_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_61_fu_8725_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_61_fu_8725_p1.read()));
}

void ResNet::thread_add_ln1192_235_fu_9016_p2() {
    add_ln1192_235_fu_9016_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_62_fu_9006_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_62_fu_9006_p1.read()));
}

void ResNet::thread_add_ln1192_236_fu_9297_p2() {
    add_ln1192_236_fu_9297_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_63_fu_9287_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_63_fu_9287_p1.read()));
}

void ResNet::thread_add_ln1192_237_fu_9578_p2() {
    add_ln1192_237_fu_9578_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_64_fu_9568_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_64_fu_9568_p1.read()));
}

void ResNet::thread_add_ln1192_238_fu_9859_p2() {
    add_ln1192_238_fu_9859_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_65_fu_9849_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_65_fu_9849_p1.read()));
}

void ResNet::thread_add_ln1192_239_fu_10140_p2() {
    add_ln1192_239_fu_10140_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_66_fu_10130_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_66_fu_10130_p1.read()));
}

void ResNet::thread_add_ln1192_240_fu_10421_p2() {
    add_ln1192_240_fu_10421_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_67_fu_10411_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_67_fu_10411_p1.read()));
}

void ResNet::thread_add_ln1192_241_fu_10702_p2() {
    add_ln1192_241_fu_10702_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_68_fu_10692_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_68_fu_10692_p1.read()));
}

void ResNet::thread_add_ln1192_242_fu_10983_p2() {
    add_ln1192_242_fu_10983_p2 = (!ap_const_lv20_3FF00.is_01() || !trunc_ln1192_69_fu_10973_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_3FF00) + sc_biguint<20>(trunc_ln1192_69_fu_10973_p1.read()));
}

void ResNet::thread_add_ln1192_fu_6762_p2() {
    add_ln1192_fu_6762_p2 = (!ap_const_lv23_3FF00.is_01() || !sub_ln1118_fu_6752_p2.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_3FF00) + sc_biguint<23>(sub_ln1118_fu_6752_p2.read()));
}

void ResNet::thread_add_ln119_fu_6274_p2() {
    add_ln119_fu_6274_p2 = (!ap_const_lv11_1.is_01() || !indvar_flatten89_reg_2391.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_1) + sc_biguint<11>(indvar_flatten89_reg_2391.read()));
}

void ResNet::thread_add_ln120_1_fu_6604_p2() {
    add_ln120_1_fu_6604_p2 = (!ap_const_lv10_1.is_01() || !indvar_flatten53_reg_2413.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1) + sc_biguint<10>(indvar_flatten53_reg_2413.read()));
}

void ResNet::thread_add_ln121_1_fu_6590_p2() {
    add_ln121_1_fu_6590_p2 = (!ap_const_lv8_1.is_01() || !indvar_flatten33_reg_2435.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(indvar_flatten33_reg_2435.read()));
}

void ResNet::thread_add_ln1265_13_fu_11865_p2() {
    add_ln1265_13_fu_11865_p2 = (!add_ln1265_fu_11855_p2.read().is_01() || !zext_ln1265_24_fu_11861_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln1265_fu_11855_p2.read()) + sc_biguint<8>(zext_ln1265_24_fu_11861_p1.read()));
}

void ResNet::thread_add_ln1265_fu_11855_p2() {
    add_ln1265_fu_11855_p2 = (!zext_ln1265_23_fu_11851_p1.read().is_01() || !zext_ln1265_fu_11839_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln1265_23_fu_11851_p1.read()) + sc_biguint<8>(zext_ln1265_fu_11839_p1.read()));
}

void ResNet::thread_add_ln126_1_fu_6548_p2() {
    add_ln126_1_fu_6548_p2 = (!zext_ln122_fu_6544_p1.read().is_01() || !zext_ln120_1_fu_6432_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln122_fu_6544_p1.read()) + sc_biguint<6>(zext_ln120_1_fu_6432_p1.read()));
}

void ResNet::thread_add_ln126_2_fu_6502_p2() {
    add_ln126_2_fu_6502_p2 = (!zext_ln121_1_fu_6490_p1.read().is_01() || !zext_ln119_fu_6328_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln121_1_fu_6490_p1.read()) + sc_biguint<6>(zext_ln119_fu_6328_p1.read()));
}

void ResNet::thread_add_ln126_fu_6262_p2() {
    add_ln126_fu_6262_p2 = (!zext_ln126_fu_6242_p1.read().is_01() || !zext_ln121_fu_6258_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln126_fu_6242_p1.read()) + sc_biguint<6>(zext_ln121_fu_6258_p1.read()));
}

void ResNet::thread_add_ln126_mid_fu_6346_p3() {
    add_ln126_mid_fu_6346_p3 = esl_concat<1,5>(ap_const_lv1_0, or_ln126_fu_6340_p2.read());
}

void ResNet::thread_add_ln203_1_fu_6662_p2() {
    add_ln203_1_fu_6662_p2 = (!zext_ln203_1_fu_6658_p1.read().is_01() || !zext_ln203_fu_6646_p1.read().is_01())? sc_lv<64>(): (sc_biguint<64>(zext_ln203_1_fu_6658_p1.read()) + sc_biguint<64>(zext_ln203_fu_6646_p1.read()));
}

void ResNet::thread_add_ln203_2_fu_6671_p2() {
    add_ln203_2_fu_6671_p2 = (!add_ln203_1_fu_6662_p2.read().is_01() || !zext_ln121_2_fu_6668_p1.read().is_01())? sc_lv<64>(): (sc_biguint<64>(add_ln203_1_fu_6662_p2.read()) + sc_biguint<64>(zext_ln121_2_fu_6668_p1.read()));
}

void ResNet::thread_add_ln203_3_fu_6701_p2() {
    add_ln203_3_fu_6701_p2 = (!p_shl38_cast_fu_6693_p3.read().is_01() || !p_shl37_cast_fu_6681_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl38_cast_fu_6693_p3.read()) + sc_biguint<12>(p_shl37_cast_fu_6681_p3.read()));
}

void ResNet::thread_add_ln203_4_fu_6710_p2() {
    add_ln203_4_fu_6710_p2 = (!add_ln203_3_fu_6701_p2.read().is_01() || !zext_ln203_2_fu_6707_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln203_3_fu_6701_p2.read()) + sc_biguint<12>(zext_ln203_2_fu_6707_p1.read()));
}

void ResNet::thread_add_ln203_fu_6632_p2() {
    add_ln203_fu_6632_p2 = (!zext_ln126_1_fu_6625_p1.read().is_01() || !zext_ln120_fu_6629_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln126_1_fu_6625_p1.read()) + sc_biguint<6>(zext_ln120_fu_6629_p1.read()));
}

void ResNet::thread_add_ln272_fu_11358_p2() {
    add_ln272_fu_11358_p2 = (!row0_0_0_reg_2575.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(row0_0_0_reg_2575.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_add_ln273_fu_11379_p2() {
    add_ln273_fu_11379_p2 = (!col0_0_0_reg_2587.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(col0_0_0_reg_2587.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_add_ln274_1_fu_11385_p2() {
    add_ln274_1_fu_11385_p2 = (!col0_0_0_reg_2587.read().is_01() || !shl_ln274_1_reg_22333.read().is_01())? sc_lv<2>(): (sc_biguint<2>(col0_0_0_reg_2587.read()) + sc_biguint<2>(shl_ln274_1_reg_22333.read()));
}

void ResNet::thread_add_ln274_fu_11364_p2() {
    add_ln274_fu_11364_p2 = (!row0_0_0_reg_2575.read().is_01() || !shl_ln274_reg_22320.read().is_01())? sc_lv<2>(): (sc_biguint<2>(row0_0_0_reg_2575.read()) + sc_biguint<2>(shl_ln274_reg_22320.read()));
}

void ResNet::thread_add_ln321_10_fu_5728_p2() {
    add_ln321_10_fu_5728_p2 = (!zext_ln321_35_fu_5423_p1.read().is_01() || !sext_ln321_8_reg_21996.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_35_fu_5423_p1.read()) + sc_bigint<11>(sext_ln321_8_reg_21996.read()));
}

void ResNet::thread_add_ln321_11_fu_5800_p2() {
    add_ln321_11_fu_5800_p2 = (!zext_ln321_35_fu_5423_p1.read().is_01() || !sext_ln321_9_reg_22008.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_35_fu_5423_p1.read()) + sc_bigint<11>(sext_ln321_9_reg_22008.read()));
}

void ResNet::thread_add_ln321_12_fu_5817_p2() {
    add_ln321_12_fu_5817_p2 = (!zext_ln321_35_fu_5423_p1.read().is_01() || !sext_ln321_10_reg_22013.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_35_fu_5423_p1.read()) + sc_bigint<11>(sext_ln321_10_reg_22013.read()));
}

void ResNet::thread_add_ln321_13_fu_5834_p2() {
    add_ln321_13_fu_5834_p2 = (!zext_ln321_35_fu_5423_p1.read().is_01() || !sext_ln321_11_reg_22018.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_35_fu_5423_p1.read()) + sc_bigint<11>(sext_ln321_11_reg_22018.read()));
}

void ResNet::thread_add_ln321_14_fu_5855_p2() {
    add_ln321_14_fu_5855_p2 = (!zext_ln321_39_fu_5851_p1.read().is_01() || !sub_ln321_16_fu_5476_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_39_fu_5851_p1.read()) + sc_biguint<11>(sub_ln321_16_fu_5476_p2.read()));
}

void ResNet::thread_add_ln321_15_fu_5866_p2() {
    add_ln321_15_fu_5866_p2 = (!zext_ln321_39_fu_5851_p1.read().is_01() || !sub_ln321_17_fu_5493_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_39_fu_5851_p1.read()) + sc_biguint<11>(sub_ln321_17_fu_5493_p2.read()));
}

void ResNet::thread_add_ln321_16_fu_5877_p2() {
    add_ln321_16_fu_5877_p2 = (!zext_ln321_39_fu_5851_p1.read().is_01() || !sub_ln321_18_fu_5510_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_39_fu_5851_p1.read()) + sc_biguint<11>(sub_ln321_18_fu_5510_p2.read()));
}

void ResNet::thread_add_ln321_17_fu_5888_p2() {
    add_ln321_17_fu_5888_p2 = (!zext_ln321_39_fu_5851_p1.read().is_01() || !sub_ln321_19_fu_5527_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_39_fu_5851_p1.read()) + sc_biguint<11>(sub_ln321_19_fu_5527_p2.read()));
}

void ResNet::thread_add_ln321_18_fu_5899_p2() {
    add_ln321_18_fu_5899_p2 = (!zext_ln321_39_fu_5851_p1.read().is_01() || !sub_ln321_20_fu_5582_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_39_fu_5851_p1.read()) + sc_biguint<11>(sub_ln321_20_fu_5582_p2.read()));
}

void ResNet::thread_add_ln321_19_fu_5910_p2() {
    add_ln321_19_fu_5910_p2 = (!zext_ln321_39_fu_5851_p1.read().is_01() || !sub_ln321_21_fu_5599_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_39_fu_5851_p1.read()) + sc_biguint<11>(sub_ln321_21_fu_5599_p2.read()));
}

void ResNet::thread_add_ln321_1_fu_4808_p2() {
    add_ln321_1_fu_4808_p2 = (!p_cast_reg_21870.read().is_01() || !zext_ln321_1_fu_4804_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(p_cast_reg_21870.read()) + sc_biguint<32>(zext_ln321_1_fu_4804_p1.read()));
}

void ResNet::thread_add_ln321_20_fu_5921_p2() {
    add_ln321_20_fu_5921_p2 = (!zext_ln321_39_fu_5851_p1.read().is_01() || !sub_ln321_22_fu_5616_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_39_fu_5851_p1.read()) + sc_biguint<11>(sub_ln321_22_fu_5616_p2.read()));
}

void ResNet::thread_add_ln321_21_fu_5932_p2() {
    add_ln321_21_fu_5932_p2 = (!zext_ln321_39_fu_5851_p1.read().is_01() || !sub_ln321_23_fu_5633_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_39_fu_5851_p1.read()) + sc_biguint<11>(sub_ln321_23_fu_5633_p2.read()));
}

void ResNet::thread_add_ln321_22_fu_5943_p2() {
    add_ln321_22_fu_5943_p2 = (!zext_ln321_39_fu_5851_p1.read().is_01() || !sub_ln321_24_fu_5688_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_39_fu_5851_p1.read()) + sc_biguint<11>(sub_ln321_24_fu_5688_p2.read()));
}

void ResNet::thread_add_ln321_23_fu_5954_p2() {
    add_ln321_23_fu_5954_p2 = (!zext_ln321_39_fu_5851_p1.read().is_01() || !sub_ln321_25_fu_5705_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_39_fu_5851_p1.read()) + sc_biguint<11>(sub_ln321_25_fu_5705_p2.read()));
}

void ResNet::thread_add_ln321_24_fu_5965_p2() {
    add_ln321_24_fu_5965_p2 = (!zext_ln321_39_fu_5851_p1.read().is_01() || !sub_ln321_26_fu_5722_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_39_fu_5851_p1.read()) + sc_biguint<11>(sub_ln321_26_fu_5722_p2.read()));
}

void ResNet::thread_add_ln321_25_fu_5976_p2() {
    add_ln321_25_fu_5976_p2 = (!zext_ln321_39_fu_5851_p1.read().is_01() || !sub_ln321_27_fu_5739_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_39_fu_5851_p1.read()) + sc_biguint<11>(sub_ln321_27_fu_5739_p2.read()));
}

void ResNet::thread_add_ln321_26_fu_5987_p2() {
    add_ln321_26_fu_5987_p2 = (!zext_ln321_39_fu_5851_p1.read().is_01() || !sub_ln321_28_fu_5794_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_39_fu_5851_p1.read()) + sc_biguint<11>(sub_ln321_28_fu_5794_p2.read()));
}

void ResNet::thread_add_ln321_27_fu_5998_p2() {
    add_ln321_27_fu_5998_p2 = (!zext_ln321_39_fu_5851_p1.read().is_01() || !sub_ln321_29_fu_5811_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_39_fu_5851_p1.read()) + sc_biguint<11>(sub_ln321_29_fu_5811_p2.read()));
}

void ResNet::thread_add_ln321_28_fu_6009_p2() {
    add_ln321_28_fu_6009_p2 = (!zext_ln321_39_fu_5851_p1.read().is_01() || !sub_ln321_30_fu_5828_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_39_fu_5851_p1.read()) + sc_biguint<11>(sub_ln321_30_fu_5828_p2.read()));
}

void ResNet::thread_add_ln321_29_fu_6020_p2() {
    add_ln321_29_fu_6020_p2 = (!zext_ln321_39_fu_5851_p1.read().is_01() || !sub_ln321_31_fu_5845_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_39_fu_5851_p1.read()) + sc_biguint<11>(sub_ln321_31_fu_5845_p2.read()));
}

void ResNet::thread_add_ln321_2_fu_5482_p2() {
    add_ln321_2_fu_5482_p2 = (!zext_ln321_35_fu_5423_p1.read().is_01() || !sext_ln321_reg_21942.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_35_fu_5423_p1.read()) + sc_bigint<11>(sext_ln321_reg_21942.read()));
}

void ResNet::thread_add_ln321_30_fu_6060_p2() {
    add_ln321_30_fu_6060_p2 = (!zext_ln321_38_fu_6057_p1.read().is_01() || !sub_ln321_32_fu_6051_p2.read().is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln321_38_fu_6057_p1.read()) + sc_biguint<5>(sub_ln321_32_fu_6051_p2.read()));
}

void ResNet::thread_add_ln321_3_fu_5499_p2() {
    add_ln321_3_fu_5499_p2 = (!zext_ln321_35_fu_5423_p1.read().is_01() || !sext_ln321_1_reg_21947.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_35_fu_5423_p1.read()) + sc_bigint<11>(sext_ln321_1_reg_21947.read()));
}

void ResNet::thread_add_ln321_4_fu_5516_p2() {
    add_ln321_4_fu_5516_p2 = (!zext_ln321_35_fu_5423_p1.read().is_01() || !sext_ln321_2_reg_21952.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_35_fu_5423_p1.read()) + sc_bigint<11>(sext_ln321_2_reg_21952.read()));
}

void ResNet::thread_add_ln321_5_fu_5588_p2() {
    add_ln321_5_fu_5588_p2 = (!zext_ln321_35_fu_5423_p1.read().is_01() || !sext_ln321_3_reg_21964.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_35_fu_5423_p1.read()) + sc_bigint<11>(sext_ln321_3_reg_21964.read()));
}

void ResNet::thread_add_ln321_6_fu_5605_p2() {
    add_ln321_6_fu_5605_p2 = (!zext_ln321_35_fu_5423_p1.read().is_01() || !sext_ln321_4_reg_21969.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_35_fu_5423_p1.read()) + sc_bigint<11>(sext_ln321_4_reg_21969.read()));
}

void ResNet::thread_add_ln321_7_fu_5622_p2() {
    add_ln321_7_fu_5622_p2 = (!zext_ln321_35_fu_5423_p1.read().is_01() || !sext_ln321_5_reg_21974.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_35_fu_5423_p1.read()) + sc_bigint<11>(sext_ln321_5_reg_21974.read()));
}

void ResNet::thread_add_ln321_8_fu_5694_p2() {
    add_ln321_8_fu_5694_p2 = (!zext_ln321_35_fu_5423_p1.read().is_01() || !sext_ln321_6_reg_21986.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_35_fu_5423_p1.read()) + sc_bigint<11>(sext_ln321_6_reg_21986.read()));
}

void ResNet::thread_add_ln321_9_fu_5711_p2() {
    add_ln321_9_fu_5711_p2 = (!zext_ln321_35_fu_5423_p1.read().is_01() || !sext_ln321_7_reg_21991.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln321_35_fu_5423_p1.read()) + sc_bigint<11>(sext_ln321_7_reg_21991.read()));
}

void ResNet::thread_add_ln321_fu_4857_p2() {
    add_ln321_fu_4857_p2 = (!zext_ln86_1_fu_4850_p1.read().is_01() || !zext_ln90_fu_4854_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln86_1_fu_4850_p1.read()) + sc_biguint<12>(zext_ln90_fu_4854_p1.read()));
}

void ResNet::thread_add_ln415_55_fu_7093_p2() {
    add_ln415_55_fu_7093_p2 = (!zext_ln415_55_fu_7089_p1.read().is_01() || !trunc_ln708_s_fu_7063_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_55_fu_7089_p1.read()) + sc_biguint<12>(trunc_ln708_s_fu_7063_p4.read()));
}

void ResNet::thread_add_ln415_56_fu_7374_p2() {
    add_ln415_56_fu_7374_p2 = (!zext_ln415_56_fu_7370_p1.read().is_01() || !trunc_ln708_43_fu_7344_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_56_fu_7370_p1.read()) + sc_biguint<12>(trunc_ln708_43_fu_7344_p4.read()));
}

void ResNet::thread_add_ln415_57_fu_7655_p2() {
    add_ln415_57_fu_7655_p2 = (!zext_ln415_57_fu_7651_p1.read().is_01() || !trunc_ln708_44_fu_7625_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_57_fu_7651_p1.read()) + sc_biguint<12>(trunc_ln708_44_fu_7625_p4.read()));
}

void ResNet::thread_add_ln415_58_fu_7936_p2() {
    add_ln415_58_fu_7936_p2 = (!zext_ln415_58_fu_7932_p1.read().is_01() || !trunc_ln708_45_fu_7906_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_58_fu_7932_p1.read()) + sc_biguint<12>(trunc_ln708_45_fu_7906_p4.read()));
}

void ResNet::thread_add_ln415_59_fu_8217_p2() {
    add_ln415_59_fu_8217_p2 = (!zext_ln415_59_fu_8213_p1.read().is_01() || !trunc_ln708_46_fu_8187_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_59_fu_8213_p1.read()) + sc_biguint<12>(trunc_ln708_46_fu_8187_p4.read()));
}

void ResNet::thread_add_ln415_60_fu_8498_p2() {
    add_ln415_60_fu_8498_p2 = (!zext_ln415_60_fu_8494_p1.read().is_01() || !trunc_ln708_47_fu_8468_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_60_fu_8494_p1.read()) + sc_biguint<12>(trunc_ln708_47_fu_8468_p4.read()));
}

void ResNet::thread_add_ln415_61_fu_8779_p2() {
    add_ln415_61_fu_8779_p2 = (!zext_ln415_61_fu_8775_p1.read().is_01() || !trunc_ln708_48_fu_8749_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_61_fu_8775_p1.read()) + sc_biguint<12>(trunc_ln708_48_fu_8749_p4.read()));
}

void ResNet::thread_add_ln415_62_fu_9060_p2() {
    add_ln415_62_fu_9060_p2 = (!zext_ln415_62_fu_9056_p1.read().is_01() || !trunc_ln708_49_fu_9030_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_62_fu_9056_p1.read()) + sc_biguint<12>(trunc_ln708_49_fu_9030_p4.read()));
}

void ResNet::thread_add_ln415_63_fu_9341_p2() {
    add_ln415_63_fu_9341_p2 = (!zext_ln415_63_fu_9337_p1.read().is_01() || !trunc_ln708_50_fu_9311_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_63_fu_9337_p1.read()) + sc_biguint<12>(trunc_ln708_50_fu_9311_p4.read()));
}

void ResNet::thread_add_ln415_64_fu_9622_p2() {
    add_ln415_64_fu_9622_p2 = (!zext_ln415_64_fu_9618_p1.read().is_01() || !trunc_ln708_51_fu_9592_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_64_fu_9618_p1.read()) + sc_biguint<12>(trunc_ln708_51_fu_9592_p4.read()));
}

void ResNet::thread_add_ln415_65_fu_9903_p2() {
    add_ln415_65_fu_9903_p2 = (!zext_ln415_65_fu_9899_p1.read().is_01() || !trunc_ln708_52_fu_9873_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_65_fu_9899_p1.read()) + sc_biguint<12>(trunc_ln708_52_fu_9873_p4.read()));
}

void ResNet::thread_add_ln415_66_fu_10184_p2() {
    add_ln415_66_fu_10184_p2 = (!zext_ln415_66_fu_10180_p1.read().is_01() || !trunc_ln708_53_fu_10154_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_66_fu_10180_p1.read()) + sc_biguint<12>(trunc_ln708_53_fu_10154_p4.read()));
}

void ResNet::thread_add_ln415_67_fu_10465_p2() {
    add_ln415_67_fu_10465_p2 = (!zext_ln415_67_fu_10461_p1.read().is_01() || !trunc_ln708_54_fu_10435_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_67_fu_10461_p1.read()) + sc_biguint<12>(trunc_ln708_54_fu_10435_p4.read()));
}

void ResNet::thread_add_ln415_68_fu_10746_p2() {
    add_ln415_68_fu_10746_p2 = (!zext_ln415_68_fu_10742_p1.read().is_01() || !trunc_ln708_55_fu_10716_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_68_fu_10742_p1.read()) + sc_biguint<12>(trunc_ln708_55_fu_10716_p4.read()));
}

void ResNet::thread_add_ln415_69_fu_11027_p2() {
    add_ln415_69_fu_11027_p2 = (!zext_ln415_69_fu_11023_p1.read().is_01() || !trunc_ln708_56_fu_10997_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_69_fu_11023_p1.read()) + sc_biguint<12>(trunc_ln708_56_fu_10997_p4.read()));
}

void ResNet::thread_add_ln415_fu_6812_p2() {
    add_ln415_fu_6812_p2 = (!zext_ln415_fu_6808_p1.read().is_01() || !trunc_ln_fu_6782_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln415_fu_6808_p1.read()) + sc_biguint<12>(trunc_ln_fu_6782_p4.read()));
}

void ResNet::thread_add_ln432_fu_11632_p2() {
    add_ln432_fu_11632_p2 = (!cii50_0_0_0_reg_2798.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(cii50_0_0_0_reg_2798.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_add_ln433_fu_11644_p2() {
    add_ln433_fu_11644_p2 = (!row051_0_0_0_reg_2810.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(row051_0_0_0_reg_2810.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_add_ln434_fu_11660_p2() {
    add_ln434_fu_11660_p2 = (!col052_0_0_0_reg_2822.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(col052_0_0_0_reg_2822.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_add_ln466_fu_11677_p2() {
    add_ln466_fu_11677_p2 = (!coo55_0_0_0_reg_2834.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(coo55_0_0_0_reg_2834.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_add_ln467_fu_11689_p2() {
    add_ln467_fu_11689_p2 = (!coi56_0_0_0_reg_2846.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(coi56_0_0_0_reg_2846.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_add_ln497_fu_11701_p2() {
    add_ln497_fu_11701_p2 = (!cio59_0_0_0_reg_2858.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(cio59_0_0_0_reg_2858.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_add_ln498_fu_11713_p2() {
    add_ln498_fu_11713_p2 = (!cii60_0_0_0_reg_2870.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(cii60_0_0_0_reg_2870.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_add_ln516_fu_11725_p2() {
    add_ln516_fu_11725_p2 = (!coo61_0_0_0_reg_2882.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(coo61_0_0_0_reg_2882.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_add_ln517_fu_11737_p2() {
    add_ln517_fu_11737_p2 = (!coi62_0_0_0_reg_2894.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(coi62_0_0_0_reg_2894.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_add_ln547_fu_11749_p2() {
    add_ln547_fu_11749_p2 = (!cio65_0_0_0_reg_2906.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(cio65_0_0_0_reg_2906.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_add_ln548_fu_11761_p2() {
    add_ln548_fu_11761_p2 = (!cii66_0_0_0_reg_2918.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(cii66_0_0_0_reg_2918.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_add_ln566_fu_11773_p2() {
    add_ln566_fu_11773_p2 = (!coo67_0_0_0_reg_2930.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(coo67_0_0_0_reg_2930.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_add_ln567_fu_11785_p2() {
    add_ln567_fu_11785_p2 = (!coi68_0_0_0_reg_2942.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(coi68_0_0_0_reg_2942.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_add_ln589_fu_11797_p2() {
    add_ln589_fu_11797_p2 = (!indvar_flatten96_reg_2954.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(indvar_flatten96_reg_2954.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ResNet::thread_add_ln703_100_fu_12867_p1() {
    add_ln703_100_fu_12867_p1 = fm_buf_V_10_q0.read();
}

void ResNet::thread_add_ln703_100_fu_12867_p2() {
    add_ln703_100_fu_12867_p2 = (!linear_buf_10_V_175_reg_3612.read().is_01() || !add_ln703_100_fu_12867_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_10_V_175_reg_3612.read()) + sc_bigint<12>(add_ln703_100_fu_12867_p1.read()));
}

void ResNet::thread_add_ln703_101_fu_12957_p1() {
    add_ln703_101_fu_12957_p1 = fm_buf_V_11_q0.read();
}

void ResNet::thread_add_ln703_101_fu_12957_p2() {
    add_ln703_101_fu_12957_p2 = (!linear_buf_11_V_176_reg_3600.read().is_01() || !add_ln703_101_fu_12957_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_11_V_176_reg_3600.read()) + sc_bigint<12>(add_ln703_101_fu_12957_p1.read()));
}

void ResNet::thread_add_ln703_102_fu_13047_p1() {
    add_ln703_102_fu_13047_p1 = fm_buf_V_12_q0.read();
}

void ResNet::thread_add_ln703_102_fu_13047_p2() {
    add_ln703_102_fu_13047_p2 = (!linear_buf_12_V_177_reg_3588.read().is_01() || !add_ln703_102_fu_13047_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_12_V_177_reg_3588.read()) + sc_bigint<12>(add_ln703_102_fu_13047_p1.read()));
}

void ResNet::thread_add_ln703_103_fu_13137_p1() {
    add_ln703_103_fu_13137_p1 = fm_buf_V_13_q0.read();
}

void ResNet::thread_add_ln703_103_fu_13137_p2() {
    add_ln703_103_fu_13137_p2 = (!linear_buf_13_V_178_reg_3576.read().is_01() || !add_ln703_103_fu_13137_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_13_V_178_reg_3576.read()) + sc_bigint<12>(add_ln703_103_fu_13137_p1.read()));
}

void ResNet::thread_add_ln703_104_fu_13227_p1() {
    add_ln703_104_fu_13227_p1 = fm_buf_V_14_q0.read();
}

void ResNet::thread_add_ln703_104_fu_13227_p2() {
    add_ln703_104_fu_13227_p2 = (!linear_buf_14_V_179_reg_3564.read().is_01() || !add_ln703_104_fu_13227_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_14_V_179_reg_3564.read()) + sc_bigint<12>(add_ln703_104_fu_13227_p1.read()));
}

void ResNet::thread_add_ln703_105_fu_13317_p1() {
    add_ln703_105_fu_13317_p1 = fm_buf_V_15_q0.read();
}

void ResNet::thread_add_ln703_105_fu_13317_p2() {
    add_ln703_105_fu_13317_p2 = (!linear_buf_15_V_180_reg_3552.read().is_01() || !add_ln703_105_fu_13317_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_15_V_180_reg_3552.read()) + sc_bigint<12>(add_ln703_105_fu_13317_p1.read()));
}

void ResNet::thread_add_ln703_106_fu_13407_p1() {
    add_ln703_106_fu_13407_p1 = fm_buf_V_16_q0.read();
}

void ResNet::thread_add_ln703_106_fu_13407_p2() {
    add_ln703_106_fu_13407_p2 = (!linear_buf_16_V_181_reg_3540.read().is_01() || !add_ln703_106_fu_13407_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_16_V_181_reg_3540.read()) + sc_bigint<12>(add_ln703_106_fu_13407_p1.read()));
}

void ResNet::thread_add_ln703_107_fu_13497_p1() {
    add_ln703_107_fu_13497_p1 = fm_buf_V_17_q0.read();
}

void ResNet::thread_add_ln703_107_fu_13497_p2() {
    add_ln703_107_fu_13497_p2 = (!linear_buf_17_V_182_reg_3528.read().is_01() || !add_ln703_107_fu_13497_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_17_V_182_reg_3528.read()) + sc_bigint<12>(add_ln703_107_fu_13497_p1.read()));
}

void ResNet::thread_add_ln703_108_fu_13587_p1() {
    add_ln703_108_fu_13587_p1 = fm_buf_V_18_q0.read();
}

void ResNet::thread_add_ln703_108_fu_13587_p2() {
    add_ln703_108_fu_13587_p2 = (!linear_buf_18_V_183_reg_3516.read().is_01() || !add_ln703_108_fu_13587_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_18_V_183_reg_3516.read()) + sc_bigint<12>(add_ln703_108_fu_13587_p1.read()));
}

void ResNet::thread_add_ln703_109_fu_13677_p1() {
    add_ln703_109_fu_13677_p1 = fm_buf_V_19_q0.read();
}

void ResNet::thread_add_ln703_109_fu_13677_p2() {
    add_ln703_109_fu_13677_p2 = (!linear_buf_19_V_184_reg_3504.read().is_01() || !add_ln703_109_fu_13677_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_19_V_184_reg_3504.read()) + sc_bigint<12>(add_ln703_109_fu_13677_p1.read()));
}

void ResNet::thread_add_ln703_110_fu_13767_p1() {
    add_ln703_110_fu_13767_p1 = fm_buf_V_20_q0.read();
}

void ResNet::thread_add_ln703_110_fu_13767_p2() {
    add_ln703_110_fu_13767_p2 = (!linear_buf_20_V_185_reg_3492.read().is_01() || !add_ln703_110_fu_13767_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_20_V_185_reg_3492.read()) + sc_bigint<12>(add_ln703_110_fu_13767_p1.read()));
}

void ResNet::thread_add_ln703_111_fu_13857_p1() {
    add_ln703_111_fu_13857_p1 = fm_buf_V_21_q0.read();
}

void ResNet::thread_add_ln703_111_fu_13857_p2() {
    add_ln703_111_fu_13857_p2 = (!linear_buf_21_V_186_reg_3480.read().is_01() || !add_ln703_111_fu_13857_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_21_V_186_reg_3480.read()) + sc_bigint<12>(add_ln703_111_fu_13857_p1.read()));
}

void ResNet::thread_add_ln703_112_fu_13947_p1() {
    add_ln703_112_fu_13947_p1 = fm_buf_V_22_q0.read();
}

void ResNet::thread_add_ln703_112_fu_13947_p2() {
    add_ln703_112_fu_13947_p2 = (!linear_buf_22_V_187_reg_3468.read().is_01() || !add_ln703_112_fu_13947_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_22_V_187_reg_3468.read()) + sc_bigint<12>(add_ln703_112_fu_13947_p1.read()));
}

void ResNet::thread_add_ln703_113_fu_14037_p1() {
    add_ln703_113_fu_14037_p1 = fm_buf_V_23_q0.read();
}

void ResNet::thread_add_ln703_113_fu_14037_p2() {
    add_ln703_113_fu_14037_p2 = (!linear_buf_23_V_188_reg_3456.read().is_01() || !add_ln703_113_fu_14037_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_23_V_188_reg_3456.read()) + sc_bigint<12>(add_ln703_113_fu_14037_p1.read()));
}

void ResNet::thread_add_ln703_114_fu_14127_p1() {
    add_ln703_114_fu_14127_p1 = fm_buf_V_24_q0.read();
}

void ResNet::thread_add_ln703_114_fu_14127_p2() {
    add_ln703_114_fu_14127_p2 = (!linear_buf_24_V_189_reg_3444.read().is_01() || !add_ln703_114_fu_14127_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_24_V_189_reg_3444.read()) + sc_bigint<12>(add_ln703_114_fu_14127_p1.read()));
}

void ResNet::thread_add_ln703_115_fu_14217_p1() {
    add_ln703_115_fu_14217_p1 = fm_buf_V_25_q0.read();
}

void ResNet::thread_add_ln703_115_fu_14217_p2() {
    add_ln703_115_fu_14217_p2 = (!linear_buf_25_V_190_reg_3432.read().is_01() || !add_ln703_115_fu_14217_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_25_V_190_reg_3432.read()) + sc_bigint<12>(add_ln703_115_fu_14217_p1.read()));
}

void ResNet::thread_add_ln703_116_fu_14307_p1() {
    add_ln703_116_fu_14307_p1 = fm_buf_V_26_q0.read();
}

void ResNet::thread_add_ln703_116_fu_14307_p2() {
    add_ln703_116_fu_14307_p2 = (!linear_buf_26_V_191_reg_3420.read().is_01() || !add_ln703_116_fu_14307_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_26_V_191_reg_3420.read()) + sc_bigint<12>(add_ln703_116_fu_14307_p1.read()));
}

void ResNet::thread_add_ln703_117_fu_14397_p1() {
    add_ln703_117_fu_14397_p1 = fm_buf_V_27_q0.read();
}

void ResNet::thread_add_ln703_117_fu_14397_p2() {
    add_ln703_117_fu_14397_p2 = (!linear_buf_27_V_192_reg_3408.read().is_01() || !add_ln703_117_fu_14397_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_27_V_192_reg_3408.read()) + sc_bigint<12>(add_ln703_117_fu_14397_p1.read()));
}

void ResNet::thread_add_ln703_118_fu_14487_p1() {
    add_ln703_118_fu_14487_p1 = fm_buf_V_28_q0.read();
}

void ResNet::thread_add_ln703_118_fu_14487_p2() {
    add_ln703_118_fu_14487_p2 = (!linear_buf_28_V_193_reg_3396.read().is_01() || !add_ln703_118_fu_14487_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_28_V_193_reg_3396.read()) + sc_bigint<12>(add_ln703_118_fu_14487_p1.read()));
}

void ResNet::thread_add_ln703_119_fu_14577_p1() {
    add_ln703_119_fu_14577_p1 = fm_buf_V_29_q0.read();
}

void ResNet::thread_add_ln703_119_fu_14577_p2() {
    add_ln703_119_fu_14577_p2 = (!linear_buf_29_V_194_reg_3384.read().is_01() || !add_ln703_119_fu_14577_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_29_V_194_reg_3384.read()) + sc_bigint<12>(add_ln703_119_fu_14577_p1.read()));
}

void ResNet::thread_add_ln703_120_fu_14667_p1() {
    add_ln703_120_fu_14667_p1 = fm_buf_V_30_q0.read();
}

void ResNet::thread_add_ln703_120_fu_14667_p2() {
    add_ln703_120_fu_14667_p2 = (!linear_buf_30_V_195_reg_3372.read().is_01() || !add_ln703_120_fu_14667_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_30_V_195_reg_3372.read()) + sc_bigint<12>(add_ln703_120_fu_14667_p1.read()));
}

void ResNet::thread_add_ln703_121_fu_14757_p1() {
    add_ln703_121_fu_14757_p1 = fm_buf_V_31_q0.read();
}

void ResNet::thread_add_ln703_121_fu_14757_p2() {
    add_ln703_121_fu_14757_p2 = (!linear_buf_31_V_196_reg_3360.read().is_01() || !add_ln703_121_fu_14757_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_31_V_196_reg_3360.read()) + sc_bigint<12>(add_ln703_121_fu_14757_p1.read()));
}

void ResNet::thread_add_ln703_122_fu_14847_p1() {
    add_ln703_122_fu_14847_p1 = fm_buf_V_32_q0.read();
}

void ResNet::thread_add_ln703_122_fu_14847_p2() {
    add_ln703_122_fu_14847_p2 = (!linear_buf_32_V_197_reg_3348.read().is_01() || !add_ln703_122_fu_14847_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_32_V_197_reg_3348.read()) + sc_bigint<12>(add_ln703_122_fu_14847_p1.read()));
}

void ResNet::thread_add_ln703_123_fu_14937_p1() {
    add_ln703_123_fu_14937_p1 = fm_buf_V_33_q0.read();
}

void ResNet::thread_add_ln703_123_fu_14937_p2() {
    add_ln703_123_fu_14937_p2 = (!linear_buf_33_V_198_reg_3336.read().is_01() || !add_ln703_123_fu_14937_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_33_V_198_reg_3336.read()) + sc_bigint<12>(add_ln703_123_fu_14937_p1.read()));
}

void ResNet::thread_add_ln703_124_fu_15027_p1() {
    add_ln703_124_fu_15027_p1 = fm_buf_V_34_q0.read();
}

void ResNet::thread_add_ln703_124_fu_15027_p2() {
    add_ln703_124_fu_15027_p2 = (!linear_buf_34_V_199_reg_3324.read().is_01() || !add_ln703_124_fu_15027_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_34_V_199_reg_3324.read()) + sc_bigint<12>(add_ln703_124_fu_15027_p1.read()));
}

void ResNet::thread_add_ln703_125_fu_15117_p1() {
    add_ln703_125_fu_15117_p1 = fm_buf_V_35_q0.read();
}

void ResNet::thread_add_ln703_125_fu_15117_p2() {
    add_ln703_125_fu_15117_p2 = (!linear_buf_35_V_1100_reg_3312.read().is_01() || !add_ln703_125_fu_15117_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_35_V_1100_reg_3312.read()) + sc_bigint<12>(add_ln703_125_fu_15117_p1.read()));
}

void ResNet::thread_add_ln703_126_fu_15207_p1() {
    add_ln703_126_fu_15207_p1 = fm_buf_V_36_q0.read();
}

void ResNet::thread_add_ln703_126_fu_15207_p2() {
    add_ln703_126_fu_15207_p2 = (!linear_buf_36_V_1101_reg_3300.read().is_01() || !add_ln703_126_fu_15207_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_36_V_1101_reg_3300.read()) + sc_bigint<12>(add_ln703_126_fu_15207_p1.read()));
}

void ResNet::thread_add_ln703_127_fu_15297_p1() {
    add_ln703_127_fu_15297_p1 = fm_buf_V_37_q0.read();
}

void ResNet::thread_add_ln703_127_fu_15297_p2() {
    add_ln703_127_fu_15297_p2 = (!linear_buf_37_V_1102_reg_3288.read().is_01() || !add_ln703_127_fu_15297_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_37_V_1102_reg_3288.read()) + sc_bigint<12>(add_ln703_127_fu_15297_p1.read()));
}

void ResNet::thread_add_ln703_128_fu_15387_p1() {
    add_ln703_128_fu_15387_p1 = fm_buf_V_38_q0.read();
}

void ResNet::thread_add_ln703_128_fu_15387_p2() {
    add_ln703_128_fu_15387_p2 = (!linear_buf_38_V_1103_reg_3276.read().is_01() || !add_ln703_128_fu_15387_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_38_V_1103_reg_3276.read()) + sc_bigint<12>(add_ln703_128_fu_15387_p1.read()));
}

void ResNet::thread_add_ln703_129_fu_15477_p1() {
    add_ln703_129_fu_15477_p1 = fm_buf_V_39_q0.read();
}

void ResNet::thread_add_ln703_129_fu_15477_p2() {
    add_ln703_129_fu_15477_p2 = (!linear_buf_39_V_1104_reg_3264.read().is_01() || !add_ln703_129_fu_15477_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_39_V_1104_reg_3264.read()) + sc_bigint<12>(add_ln703_129_fu_15477_p1.read()));
}

void ResNet::thread_add_ln703_130_fu_15567_p1() {
    add_ln703_130_fu_15567_p1 = fm_buf_V_40_q0.read();
}

void ResNet::thread_add_ln703_130_fu_15567_p2() {
    add_ln703_130_fu_15567_p2 = (!linear_buf_40_V_1105_reg_3252.read().is_01() || !add_ln703_130_fu_15567_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_40_V_1105_reg_3252.read()) + sc_bigint<12>(add_ln703_130_fu_15567_p1.read()));
}

void ResNet::thread_add_ln703_131_fu_15657_p1() {
    add_ln703_131_fu_15657_p1 = fm_buf_V_41_q0.read();
}

void ResNet::thread_add_ln703_131_fu_15657_p2() {
    add_ln703_131_fu_15657_p2 = (!linear_buf_41_V_1106_reg_3240.read().is_01() || !add_ln703_131_fu_15657_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_41_V_1106_reg_3240.read()) + sc_bigint<12>(add_ln703_131_fu_15657_p1.read()));
}

void ResNet::thread_add_ln703_132_fu_15747_p1() {
    add_ln703_132_fu_15747_p1 = fm_buf_V_42_q0.read();
}

void ResNet::thread_add_ln703_132_fu_15747_p2() {
    add_ln703_132_fu_15747_p2 = (!linear_buf_42_V_1107_reg_3228.read().is_01() || !add_ln703_132_fu_15747_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_42_V_1107_reg_3228.read()) + sc_bigint<12>(add_ln703_132_fu_15747_p1.read()));
}

void ResNet::thread_add_ln703_133_fu_15837_p1() {
    add_ln703_133_fu_15837_p1 = fm_buf_V_43_q0.read();
}

void ResNet::thread_add_ln703_133_fu_15837_p2() {
    add_ln703_133_fu_15837_p2 = (!linear_buf_43_V_1108_reg_3216.read().is_01() || !add_ln703_133_fu_15837_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_43_V_1108_reg_3216.read()) + sc_bigint<12>(add_ln703_133_fu_15837_p1.read()));
}

void ResNet::thread_add_ln703_134_fu_15927_p1() {
    add_ln703_134_fu_15927_p1 = fm_buf_V_44_q0.read();
}

void ResNet::thread_add_ln703_134_fu_15927_p2() {
    add_ln703_134_fu_15927_p2 = (!linear_buf_44_V_1109_reg_3204.read().is_01() || !add_ln703_134_fu_15927_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_44_V_1109_reg_3204.read()) + sc_bigint<12>(add_ln703_134_fu_15927_p1.read()));
}

void ResNet::thread_add_ln703_135_fu_16017_p1() {
    add_ln703_135_fu_16017_p1 = fm_buf_V_45_q0.read();
}

void ResNet::thread_add_ln703_135_fu_16017_p2() {
    add_ln703_135_fu_16017_p2 = (!linear_buf_45_V_1110_reg_3192.read().is_01() || !add_ln703_135_fu_16017_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_45_V_1110_reg_3192.read()) + sc_bigint<12>(add_ln703_135_fu_16017_p1.read()));
}

void ResNet::thread_add_ln703_136_fu_16107_p1() {
    add_ln703_136_fu_16107_p1 = fm_buf_V_46_q0.read();
}

void ResNet::thread_add_ln703_136_fu_16107_p2() {
    add_ln703_136_fu_16107_p2 = (!linear_buf_46_V_1111_reg_3180.read().is_01() || !add_ln703_136_fu_16107_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_46_V_1111_reg_3180.read()) + sc_bigint<12>(add_ln703_136_fu_16107_p1.read()));
}

void ResNet::thread_add_ln703_137_fu_16197_p1() {
    add_ln703_137_fu_16197_p1 = fm_buf_V_47_q0.read();
}

void ResNet::thread_add_ln703_137_fu_16197_p2() {
    add_ln703_137_fu_16197_p2 = (!linear_buf_47_V_1112_reg_3168.read().is_01() || !add_ln703_137_fu_16197_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_47_V_1112_reg_3168.read()) + sc_bigint<12>(add_ln703_137_fu_16197_p1.read()));
}

void ResNet::thread_add_ln703_138_fu_16287_p1() {
    add_ln703_138_fu_16287_p1 = fm_buf_V_48_q0.read();
}

void ResNet::thread_add_ln703_138_fu_16287_p2() {
    add_ln703_138_fu_16287_p2 = (!linear_buf_48_V_1113_reg_3156.read().is_01() || !add_ln703_138_fu_16287_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_48_V_1113_reg_3156.read()) + sc_bigint<12>(add_ln703_138_fu_16287_p1.read()));
}

void ResNet::thread_add_ln703_139_fu_16377_p1() {
    add_ln703_139_fu_16377_p1 = fm_buf_V_49_q0.read();
}

void ResNet::thread_add_ln703_139_fu_16377_p2() {
    add_ln703_139_fu_16377_p2 = (!linear_buf_49_V_1114_reg_3144.read().is_01() || !add_ln703_139_fu_16377_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_49_V_1114_reg_3144.read()) + sc_bigint<12>(add_ln703_139_fu_16377_p1.read()));
}

void ResNet::thread_add_ln703_140_fu_16467_p1() {
    add_ln703_140_fu_16467_p1 = fm_buf_V_50_q0.read();
}

void ResNet::thread_add_ln703_140_fu_16467_p2() {
    add_ln703_140_fu_16467_p2 = (!linear_buf_50_V_1115_reg_3132.read().is_01() || !add_ln703_140_fu_16467_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_50_V_1115_reg_3132.read()) + sc_bigint<12>(add_ln703_140_fu_16467_p1.read()));
}

void ResNet::thread_add_ln703_141_fu_16557_p1() {
    add_ln703_141_fu_16557_p1 = fm_buf_V_51_q0.read();
}

void ResNet::thread_add_ln703_141_fu_16557_p2() {
    add_ln703_141_fu_16557_p2 = (!linear_buf_51_V_1116_reg_3120.read().is_01() || !add_ln703_141_fu_16557_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_51_V_1116_reg_3120.read()) + sc_bigint<12>(add_ln703_141_fu_16557_p1.read()));
}

void ResNet::thread_add_ln703_142_fu_16647_p1() {
    add_ln703_142_fu_16647_p1 = fm_buf_V_52_q0.read();
}

void ResNet::thread_add_ln703_142_fu_16647_p2() {
    add_ln703_142_fu_16647_p2 = (!linear_buf_52_V_1117_reg_3108.read().is_01() || !add_ln703_142_fu_16647_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_52_V_1117_reg_3108.read()) + sc_bigint<12>(add_ln703_142_fu_16647_p1.read()));
}

void ResNet::thread_add_ln703_143_fu_16737_p1() {
    add_ln703_143_fu_16737_p1 = fm_buf_V_53_q0.read();
}

void ResNet::thread_add_ln703_143_fu_16737_p2() {
    add_ln703_143_fu_16737_p2 = (!linear_buf_53_V_1118_reg_3096.read().is_01() || !add_ln703_143_fu_16737_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_53_V_1118_reg_3096.read()) + sc_bigint<12>(add_ln703_143_fu_16737_p1.read()));
}

void ResNet::thread_add_ln703_144_fu_16827_p1() {
    add_ln703_144_fu_16827_p1 = fm_buf_V_54_q0.read();
}

void ResNet::thread_add_ln703_144_fu_16827_p2() {
    add_ln703_144_fu_16827_p2 = (!linear_buf_54_V_1119_reg_3084.read().is_01() || !add_ln703_144_fu_16827_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_54_V_1119_reg_3084.read()) + sc_bigint<12>(add_ln703_144_fu_16827_p1.read()));
}

void ResNet::thread_add_ln703_145_fu_16917_p1() {
    add_ln703_145_fu_16917_p1 = fm_buf_V_55_q0.read();
}

void ResNet::thread_add_ln703_145_fu_16917_p2() {
    add_ln703_145_fu_16917_p2 = (!linear_buf_55_V_1120_reg_3072.read().is_01() || !add_ln703_145_fu_16917_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_55_V_1120_reg_3072.read()) + sc_bigint<12>(add_ln703_145_fu_16917_p1.read()));
}

void ResNet::thread_add_ln703_146_fu_17007_p1() {
    add_ln703_146_fu_17007_p1 = fm_buf_V_56_q0.read();
}

void ResNet::thread_add_ln703_146_fu_17007_p2() {
    add_ln703_146_fu_17007_p2 = (!linear_buf_56_V_1121_reg_3060.read().is_01() || !add_ln703_146_fu_17007_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_56_V_1121_reg_3060.read()) + sc_bigint<12>(add_ln703_146_fu_17007_p1.read()));
}

void ResNet::thread_add_ln703_147_fu_17097_p1() {
    add_ln703_147_fu_17097_p1 = fm_buf_V_57_q0.read();
}

void ResNet::thread_add_ln703_147_fu_17097_p2() {
    add_ln703_147_fu_17097_p2 = (!linear_buf_57_V_1122_reg_3048.read().is_01() || !add_ln703_147_fu_17097_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_57_V_1122_reg_3048.read()) + sc_bigint<12>(add_ln703_147_fu_17097_p1.read()));
}

void ResNet::thread_add_ln703_148_fu_17187_p1() {
    add_ln703_148_fu_17187_p1 = fm_buf_V_58_q0.read();
}

void ResNet::thread_add_ln703_148_fu_17187_p2() {
    add_ln703_148_fu_17187_p2 = (!linear_buf_58_V_1123_reg_3036.read().is_01() || !add_ln703_148_fu_17187_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_58_V_1123_reg_3036.read()) + sc_bigint<12>(add_ln703_148_fu_17187_p1.read()));
}

void ResNet::thread_add_ln703_149_fu_17277_p1() {
    add_ln703_149_fu_17277_p1 = fm_buf_V_59_q0.read();
}

void ResNet::thread_add_ln703_149_fu_17277_p2() {
    add_ln703_149_fu_17277_p2 = (!linear_buf_59_V_1124_reg_3024.read().is_01() || !add_ln703_149_fu_17277_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_59_V_1124_reg_3024.read()) + sc_bigint<12>(add_ln703_149_fu_17277_p1.read()));
}

void ResNet::thread_add_ln703_150_fu_17367_p1() {
    add_ln703_150_fu_17367_p1 = fm_buf_V_60_q0.read();
}

void ResNet::thread_add_ln703_150_fu_17367_p2() {
    add_ln703_150_fu_17367_p2 = (!linear_buf_60_V_1125_reg_3012.read().is_01() || !add_ln703_150_fu_17367_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_60_V_1125_reg_3012.read()) + sc_bigint<12>(add_ln703_150_fu_17367_p1.read()));
}

void ResNet::thread_add_ln703_151_fu_17457_p1() {
    add_ln703_151_fu_17457_p1 = fm_buf_V_61_q0.read();
}

void ResNet::thread_add_ln703_151_fu_17457_p2() {
    add_ln703_151_fu_17457_p2 = (!linear_buf_61_V_1126_reg_3000.read().is_01() || !add_ln703_151_fu_17457_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_61_V_1126_reg_3000.read()) + sc_bigint<12>(add_ln703_151_fu_17457_p1.read()));
}

void ResNet::thread_add_ln703_152_fu_17547_p1() {
    add_ln703_152_fu_17547_p1 = fm_buf_V_62_q0.read();
}

void ResNet::thread_add_ln703_152_fu_17547_p2() {
    add_ln703_152_fu_17547_p2 = (!linear_buf_62_V_1127_reg_2988.read().is_01() || !add_ln703_152_fu_17547_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_62_V_1127_reg_2988.read()) + sc_bigint<12>(add_ln703_152_fu_17547_p1.read()));
}

void ResNet::thread_add_ln703_153_fu_17637_p1() {
    add_ln703_153_fu_17637_p1 = fm_buf_V_63_q0.read();
}

void ResNet::thread_add_ln703_153_fu_17637_p2() {
    add_ln703_153_fu_17637_p2 = (!linear_buf_63_V_1128_reg_2976.read().is_01() || !add_ln703_153_fu_17637_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_63_V_1128_reg_2976.read()) + sc_bigint<12>(add_ln703_153_fu_17637_p1.read()));
}

void ResNet::thread_add_ln703_91_fu_12057_p1() {
    add_ln703_91_fu_12057_p1 = fm_buf_V_1_q0.read();
}

void ResNet::thread_add_ln703_91_fu_12057_p2() {
    add_ln703_91_fu_12057_p2 = (!linear_buf_1_V_166_reg_3720.read().is_01() || !add_ln703_91_fu_12057_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_1_V_166_reg_3720.read()) + sc_bigint<12>(add_ln703_91_fu_12057_p1.read()));
}

void ResNet::thread_add_ln703_92_fu_12147_p1() {
    add_ln703_92_fu_12147_p1 = fm_buf_V_2_q0.read();
}

void ResNet::thread_add_ln703_92_fu_12147_p2() {
    add_ln703_92_fu_12147_p2 = (!linear_buf_2_V_167_reg_3708.read().is_01() || !add_ln703_92_fu_12147_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_2_V_167_reg_3708.read()) + sc_bigint<12>(add_ln703_92_fu_12147_p1.read()));
}

void ResNet::thread_add_ln703_93_fu_12237_p1() {
    add_ln703_93_fu_12237_p1 = fm_buf_V_3_q0.read();
}

void ResNet::thread_add_ln703_93_fu_12237_p2() {
    add_ln703_93_fu_12237_p2 = (!linear_buf_3_V_168_reg_3696.read().is_01() || !add_ln703_93_fu_12237_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_3_V_168_reg_3696.read()) + sc_bigint<12>(add_ln703_93_fu_12237_p1.read()));
}

void ResNet::thread_add_ln703_94_fu_12327_p1() {
    add_ln703_94_fu_12327_p1 = fm_buf_V_4_q0.read();
}

void ResNet::thread_add_ln703_94_fu_12327_p2() {
    add_ln703_94_fu_12327_p2 = (!linear_buf_4_V_169_reg_3684.read().is_01() || !add_ln703_94_fu_12327_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_4_V_169_reg_3684.read()) + sc_bigint<12>(add_ln703_94_fu_12327_p1.read()));
}

void ResNet::thread_add_ln703_95_fu_12417_p1() {
    add_ln703_95_fu_12417_p1 = fm_buf_V_5_q0.read();
}

void ResNet::thread_add_ln703_95_fu_12417_p2() {
    add_ln703_95_fu_12417_p2 = (!linear_buf_5_V_170_reg_3672.read().is_01() || !add_ln703_95_fu_12417_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_5_V_170_reg_3672.read()) + sc_bigint<12>(add_ln703_95_fu_12417_p1.read()));
}

void ResNet::thread_add_ln703_96_fu_12507_p1() {
    add_ln703_96_fu_12507_p1 = fm_buf_V_6_q0.read();
}

void ResNet::thread_add_ln703_96_fu_12507_p2() {
    add_ln703_96_fu_12507_p2 = (!linear_buf_6_V_171_reg_3660.read().is_01() || !add_ln703_96_fu_12507_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_6_V_171_reg_3660.read()) + sc_bigint<12>(add_ln703_96_fu_12507_p1.read()));
}

void ResNet::thread_add_ln703_97_fu_12597_p1() {
    add_ln703_97_fu_12597_p1 = fm_buf_V_7_q0.read();
}

void ResNet::thread_add_ln703_97_fu_12597_p2() {
    add_ln703_97_fu_12597_p2 = (!linear_buf_7_V_172_reg_3648.read().is_01() || !add_ln703_97_fu_12597_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_7_V_172_reg_3648.read()) + sc_bigint<12>(add_ln703_97_fu_12597_p1.read()));
}

void ResNet::thread_add_ln703_98_fu_12687_p1() {
    add_ln703_98_fu_12687_p1 = fm_buf_V_8_q0.read();
}

void ResNet::thread_add_ln703_98_fu_12687_p2() {
    add_ln703_98_fu_12687_p2 = (!linear_buf_8_V_173_reg_3636.read().is_01() || !add_ln703_98_fu_12687_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_8_V_173_reg_3636.read()) + sc_bigint<12>(add_ln703_98_fu_12687_p1.read()));
}

void ResNet::thread_add_ln703_99_fu_12777_p1() {
    add_ln703_99_fu_12777_p1 = fm_buf_V_9_q0.read();
}

void ResNet::thread_add_ln703_99_fu_12777_p2() {
    add_ln703_99_fu_12777_p2 = (!linear_buf_9_V_174_reg_3624.read().is_01() || !add_ln703_99_fu_12777_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_9_V_174_reg_3624.read()) + sc_bigint<12>(add_ln703_99_fu_12777_p1.read()));
}

void ResNet::thread_add_ln703_fu_11967_p1() {
    add_ln703_fu_11967_p1 = fm_buf_V_0_q0.read();
}

void ResNet::thread_add_ln703_fu_11967_p2() {
    add_ln703_fu_11967_p2 = (!linear_buf_0_V_165_reg_3732.read().is_01() || !add_ln703_fu_11967_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(linear_buf_0_V_165_reg_3732.read()) + sc_bigint<12>(add_ln703_fu_11967_p1.read()));
}

void ResNet::thread_add_ln86_fu_4692_p2() {
    add_ln86_fu_4692_p2 = (!indvar_flatten19_reg_2291.read().is_01() || !ap_const_lv13_1.is_01())? sc_lv<13>(): (sc_biguint<13>(indvar_flatten19_reg_2291.read()) + sc_biguint<13>(ap_const_lv13_1));
}

void ResNet::thread_add_ln87_1_fu_4829_p2() {
    add_ln87_1_fu_4829_p2 = (!indvar_flatten_reg_2313.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(indvar_flatten_reg_2313.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void ResNet::thread_add_ln90_fu_4798_p2() {
    add_ln90_fu_4798_p2 = (!zext_ln86_fu_4738_p1.read().is_01() || !tmp129_fu_4788_p4.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln86_fu_4738_p1.read()) + sc_biguint<13>(tmp129_fu_4788_p4.read()));
}

void ResNet::thread_and_ln119_1_fu_6378_p2() {
    and_ln119_1_fu_6378_p2 = (icmp_ln121_fu_6372_p2.read() & xor_ln119_fu_6354_p2.read());
}

void ResNet::thread_and_ln119_fu_6366_p2() {
    and_ln119_fu_6366_p2 = (icmp_ln122_fu_6360_p2.read() & xor_ln119_fu_6354_p2.read());
}

void ResNet::thread_and_ln120_fu_6458_p2() {
    and_ln120_fu_6458_p2 = (and_ln119_fu_6366_p2.read() & or_ln120_1_fu_6452_p2.read());
}

void ResNet::thread_and_ln416_55_fu_7113_p2() {
    and_ln416_55_fu_7113_p2 = (tmp_754_fu_7073_p3.read() & xor_ln416_55_fu_7107_p2.read());
}

void ResNet::thread_and_ln416_56_fu_7394_p2() {
    and_ln416_56_fu_7394_p2 = (tmp_760_fu_7354_p3.read() & xor_ln416_56_fu_7388_p2.read());
}

void ResNet::thread_and_ln416_57_fu_7675_p2() {
    and_ln416_57_fu_7675_p2 = (tmp_766_fu_7635_p3.read() & xor_ln416_57_fu_7669_p2.read());
}

void ResNet::thread_and_ln416_58_fu_7956_p2() {
    and_ln416_58_fu_7956_p2 = (tmp_772_fu_7916_p3.read() & xor_ln416_58_fu_7950_p2.read());
}

void ResNet::thread_and_ln416_59_fu_8237_p2() {
    and_ln416_59_fu_8237_p2 = (tmp_778_fu_8197_p3.read() & xor_ln416_59_fu_8231_p2.read());
}

void ResNet::thread_and_ln416_60_fu_8518_p2() {
    and_ln416_60_fu_8518_p2 = (tmp_784_fu_8478_p3.read() & xor_ln416_60_fu_8512_p2.read());
}

void ResNet::thread_and_ln416_61_fu_8799_p2() {
    and_ln416_61_fu_8799_p2 = (tmp_790_fu_8759_p3.read() & xor_ln416_61_fu_8793_p2.read());
}

void ResNet::thread_and_ln416_62_fu_9080_p2() {
    and_ln416_62_fu_9080_p2 = (tmp_796_fu_9040_p3.read() & xor_ln416_62_fu_9074_p2.read());
}

void ResNet::thread_and_ln416_63_fu_9361_p2() {
    and_ln416_63_fu_9361_p2 = (tmp_802_fu_9321_p3.read() & xor_ln416_63_fu_9355_p2.read());
}

void ResNet::thread_and_ln416_64_fu_9642_p2() {
    and_ln416_64_fu_9642_p2 = (tmp_808_fu_9602_p3.read() & xor_ln416_64_fu_9636_p2.read());
}

void ResNet::thread_and_ln416_65_fu_9923_p2() {
    and_ln416_65_fu_9923_p2 = (tmp_814_fu_9883_p3.read() & xor_ln416_65_fu_9917_p2.read());
}

void ResNet::thread_and_ln416_66_fu_10204_p2() {
    and_ln416_66_fu_10204_p2 = (tmp_820_fu_10164_p3.read() & xor_ln416_66_fu_10198_p2.read());
}

void ResNet::thread_and_ln416_67_fu_10485_p2() {
    and_ln416_67_fu_10485_p2 = (tmp_826_fu_10445_p3.read() & xor_ln416_67_fu_10479_p2.read());
}

void ResNet::thread_and_ln416_68_fu_10766_p2() {
    and_ln416_68_fu_10766_p2 = (tmp_832_fu_10726_p3.read() & xor_ln416_68_fu_10760_p2.read());
}

void ResNet::thread_and_ln416_69_fu_11047_p2() {
    and_ln416_69_fu_11047_p2 = (tmp_838_fu_11007_p3.read() & xor_ln416_69_fu_11041_p2.read());
}

void ResNet::thread_and_ln416_fu_6832_p2() {
    and_ln416_fu_6832_p2 = (tmp_748_fu_6792_p3.read() & xor_ln416_fu_6826_p2.read());
}

void ResNet::thread_and_ln779_10_fu_9716_p2() {
    and_ln779_10_fu_9716_p2 = (icmp_ln879_132_fu_9666_p2.read() & xor_ln779_64_fu_9710_p2.read());
}

void ResNet::thread_and_ln779_11_fu_9997_p2() {
    and_ln779_11_fu_9997_p2 = (icmp_ln879_134_fu_9947_p2.read() & xor_ln779_65_fu_9991_p2.read());
}

void ResNet::thread_and_ln779_12_fu_10278_p2() {
    and_ln779_12_fu_10278_p2 = (icmp_ln879_136_fu_10228_p2.read() & xor_ln779_66_fu_10272_p2.read());
}

void ResNet::thread_and_ln779_13_fu_10559_p2() {
    and_ln779_13_fu_10559_p2 = (icmp_ln879_138_fu_10509_p2.read() & xor_ln779_67_fu_10553_p2.read());
}

void ResNet::thread_and_ln779_14_fu_10840_p2() {
    and_ln779_14_fu_10840_p2 = (icmp_ln879_140_fu_10790_p2.read() & xor_ln779_68_fu_10834_p2.read());
}

void ResNet::thread_and_ln779_15_fu_11121_p2() {
    and_ln779_15_fu_11121_p2 = (icmp_ln879_142_fu_11071_p2.read() & xor_ln779_69_fu_11115_p2.read());
}

void ResNet::thread_and_ln779_1_fu_7187_p2() {
    and_ln779_1_fu_7187_p2 = (icmp_ln879_114_fu_7137_p2.read() & xor_ln779_55_fu_7181_p2.read());
}

void ResNet::thread_and_ln779_2_fu_7468_p2() {
    and_ln779_2_fu_7468_p2 = (icmp_ln879_116_fu_7418_p2.read() & xor_ln779_56_fu_7462_p2.read());
}

void ResNet::thread_and_ln779_3_fu_7749_p2() {
    and_ln779_3_fu_7749_p2 = (icmp_ln879_118_fu_7699_p2.read() & xor_ln779_57_fu_7743_p2.read());
}

void ResNet::thread_and_ln779_4_fu_8030_p2() {
    and_ln779_4_fu_8030_p2 = (icmp_ln879_120_fu_7980_p2.read() & xor_ln779_58_fu_8024_p2.read());
}

void ResNet::thread_and_ln779_5_fu_8311_p2() {
    and_ln779_5_fu_8311_p2 = (icmp_ln879_122_fu_8261_p2.read() & xor_ln779_59_fu_8305_p2.read());
}

void ResNet::thread_and_ln779_6_fu_8592_p2() {
    and_ln779_6_fu_8592_p2 = (icmp_ln879_124_fu_8542_p2.read() & xor_ln779_60_fu_8586_p2.read());
}

void ResNet::thread_and_ln779_7_fu_8873_p2() {
    and_ln779_7_fu_8873_p2 = (icmp_ln879_126_fu_8823_p2.read() & xor_ln779_61_fu_8867_p2.read());
}

void ResNet::thread_and_ln779_8_fu_9154_p2() {
    and_ln779_8_fu_9154_p2 = (icmp_ln879_128_fu_9104_p2.read() & xor_ln779_62_fu_9148_p2.read());
}

void ResNet::thread_and_ln779_9_fu_9435_p2() {
    and_ln779_9_fu_9435_p2 = (icmp_ln879_130_fu_9385_p2.read() & xor_ln779_63_fu_9429_p2.read());
}

void ResNet::thread_and_ln779_fu_6906_p2() {
    and_ln779_fu_6906_p2 = (icmp_ln879_fu_6856_p2.read() & xor_ln779_fu_6900_p2.read());
}

void ResNet::thread_and_ln781_10_fu_9730_p2() {
    and_ln781_10_fu_9730_p2 = (and_ln416_64_fu_9642_p2.read() & icmp_ln879_133_fu_9682_p2.read());
}

void ResNet::thread_and_ln781_11_fu_10011_p2() {
    and_ln781_11_fu_10011_p2 = (and_ln416_65_fu_9923_p2.read() & icmp_ln879_135_fu_9963_p2.read());
}

void ResNet::thread_and_ln781_12_fu_10292_p2() {
    and_ln781_12_fu_10292_p2 = (and_ln416_66_fu_10204_p2.read() & icmp_ln879_137_fu_10244_p2.read());
}

void ResNet::thread_and_ln781_13_fu_10573_p2() {
    and_ln781_13_fu_10573_p2 = (and_ln416_67_fu_10485_p2.read() & icmp_ln879_139_fu_10525_p2.read());
}

void ResNet::thread_and_ln781_14_fu_10854_p2() {
    and_ln781_14_fu_10854_p2 = (and_ln416_68_fu_10766_p2.read() & icmp_ln879_141_fu_10806_p2.read());
}

void ResNet::thread_and_ln781_15_fu_11135_p2() {
    and_ln781_15_fu_11135_p2 = (and_ln416_69_fu_11047_p2.read() & icmp_ln879_143_fu_11087_p2.read());
}

void ResNet::thread_and_ln781_1_fu_7201_p2() {
    and_ln781_1_fu_7201_p2 = (and_ln416_55_fu_7113_p2.read() & icmp_ln879_115_fu_7153_p2.read());
}

void ResNet::thread_and_ln781_2_fu_7482_p2() {
    and_ln781_2_fu_7482_p2 = (and_ln416_56_fu_7394_p2.read() & icmp_ln879_117_fu_7434_p2.read());
}

void ResNet::thread_and_ln781_3_fu_7763_p2() {
    and_ln781_3_fu_7763_p2 = (and_ln416_57_fu_7675_p2.read() & icmp_ln879_119_fu_7715_p2.read());
}

void ResNet::thread_and_ln781_4_fu_8044_p2() {
    and_ln781_4_fu_8044_p2 = (and_ln416_58_fu_7956_p2.read() & icmp_ln879_121_fu_7996_p2.read());
}

void ResNet::thread_and_ln781_5_fu_8325_p2() {
    and_ln781_5_fu_8325_p2 = (and_ln416_59_fu_8237_p2.read() & icmp_ln879_123_fu_8277_p2.read());
}

void ResNet::thread_and_ln781_6_fu_8606_p2() {
    and_ln781_6_fu_8606_p2 = (and_ln416_60_fu_8518_p2.read() & icmp_ln879_125_fu_8558_p2.read());
}

void ResNet::thread_and_ln781_7_fu_8887_p2() {
    and_ln781_7_fu_8887_p2 = (and_ln416_61_fu_8799_p2.read() & icmp_ln879_127_fu_8839_p2.read());
}

void ResNet::thread_and_ln781_8_fu_9168_p2() {
    and_ln781_8_fu_9168_p2 = (and_ln416_62_fu_9080_p2.read() & icmp_ln879_129_fu_9120_p2.read());
}

void ResNet::thread_and_ln781_9_fu_9449_p2() {
    and_ln781_9_fu_9449_p2 = (and_ln416_63_fu_9361_p2.read() & icmp_ln879_131_fu_9401_p2.read());
}

void ResNet::thread_and_ln781_fu_6920_p2() {
    and_ln781_fu_6920_p2 = (and_ln416_fu_6832_p2.read() & icmp_ln879_113_fu_6872_p2.read());
}

void ResNet::thread_and_ln785_55_fu_7225_p2() {
    and_ln785_55_fu_7225_p2 = (or_ln785_1_fu_7213_p2.read() & xor_ln785_114_fu_7219_p2.read());
}

void ResNet::thread_and_ln785_56_fu_7506_p2() {
    and_ln785_56_fu_7506_p2 = (or_ln785_2_fu_7494_p2.read() & xor_ln785_115_fu_7500_p2.read());
}

void ResNet::thread_and_ln785_57_fu_7787_p2() {
    and_ln785_57_fu_7787_p2 = (or_ln785_3_fu_7775_p2.read() & xor_ln785_116_fu_7781_p2.read());
}

void ResNet::thread_and_ln785_58_fu_8068_p2() {
    and_ln785_58_fu_8068_p2 = (or_ln785_4_fu_8056_p2.read() & xor_ln785_117_fu_8062_p2.read());
}

void ResNet::thread_and_ln785_59_fu_8349_p2() {
    and_ln785_59_fu_8349_p2 = (or_ln785_5_fu_8337_p2.read() & xor_ln785_118_fu_8343_p2.read());
}

void ResNet::thread_and_ln785_60_fu_8630_p2() {
    and_ln785_60_fu_8630_p2 = (or_ln785_55_fu_8618_p2.read() & xor_ln785_119_fu_8624_p2.read());
}

void ResNet::thread_and_ln785_61_fu_8911_p2() {
    and_ln785_61_fu_8911_p2 = (or_ln785_56_fu_8899_p2.read() & xor_ln785_120_fu_8905_p2.read());
}

void ResNet::thread_and_ln785_62_fu_9192_p2() {
    and_ln785_62_fu_9192_p2 = (or_ln785_8_fu_9180_p2.read() & xor_ln785_121_fu_9186_p2.read());
}

void ResNet::thread_and_ln785_63_fu_9473_p2() {
    and_ln785_63_fu_9473_p2 = (or_ln785_9_fu_9461_p2.read() & xor_ln785_122_fu_9467_p2.read());
}

void ResNet::thread_and_ln785_64_fu_9754_p2() {
    and_ln785_64_fu_9754_p2 = (or_ln785_10_fu_9742_p2.read() & xor_ln785_123_fu_9748_p2.read());
}

void ResNet::thread_and_ln785_65_fu_10035_p2() {
    and_ln785_65_fu_10035_p2 = (or_ln785_11_fu_10023_p2.read() & xor_ln785_125_fu_10029_p2.read());
}

void ResNet::thread_and_ln785_66_fu_10316_p2() {
    and_ln785_66_fu_10316_p2 = (or_ln785_12_fu_10304_p2.read() & xor_ln785_127_fu_10310_p2.read());
}

void ResNet::thread_and_ln785_67_fu_10597_p2() {
    and_ln785_67_fu_10597_p2 = (or_ln785_13_fu_10585_p2.read() & xor_ln785_129_fu_10591_p2.read());
}

void ResNet::thread_and_ln785_68_fu_10878_p2() {
    and_ln785_68_fu_10878_p2 = (or_ln785_14_fu_10866_p2.read() & xor_ln785_130_fu_10872_p2.read());
}

void ResNet::thread_and_ln785_69_fu_11159_p2() {
    and_ln785_69_fu_11159_p2 = (or_ln785_15_fu_11147_p2.read() & xor_ln785_131_fu_11153_p2.read());
}

void ResNet::thread_and_ln785_fu_6944_p2() {
    and_ln785_fu_6944_p2 = (or_ln785_fu_6932_p2.read() & xor_ln785_113_fu_6938_p2.read());
}

void ResNet::thread_and_ln786_10_fu_9760_p2() {
    and_ln786_10_fu_9760_p2 = (tmp_811_fu_9648_p3.read() & select_ln416_64_fu_9722_p3.read());
}

void ResNet::thread_and_ln786_11_fu_10041_p2() {
    and_ln786_11_fu_10041_p2 = (tmp_817_fu_9929_p3.read() & select_ln416_65_fu_10003_p3.read());
}

void ResNet::thread_and_ln786_12_fu_10322_p2() {
    and_ln786_12_fu_10322_p2 = (tmp_823_fu_10210_p3.read() & select_ln416_66_fu_10284_p3.read());
}

void ResNet::thread_and_ln786_13_fu_10603_p2() {
    and_ln786_13_fu_10603_p2 = (tmp_829_fu_10491_p3.read() & select_ln416_67_fu_10565_p3.read());
}

void ResNet::thread_and_ln786_14_fu_10884_p2() {
    and_ln786_14_fu_10884_p2 = (tmp_835_fu_10772_p3.read() & select_ln416_68_fu_10846_p3.read());
}

void ResNet::thread_and_ln786_155_fu_6968_p2() {
    and_ln786_155_fu_6968_p2 = (tmp_747_fu_6774_p3.read() & xor_ln786_fu_6962_p2.read());
}

void ResNet::thread_and_ln786_156_fu_7249_p2() {
    and_ln786_156_fu_7249_p2 = (tmp_753_fu_7055_p3.read() & xor_ln786_75_fu_7243_p2.read());
}

void ResNet::thread_and_ln786_157_fu_7530_p2() {
    and_ln786_157_fu_7530_p2 = (tmp_759_fu_7336_p3.read() & xor_ln786_76_fu_7524_p2.read());
}

void ResNet::thread_and_ln786_158_fu_7811_p2() {
    and_ln786_158_fu_7811_p2 = (tmp_765_fu_7617_p3.read() & xor_ln786_78_fu_7805_p2.read());
}

void ResNet::thread_and_ln786_159_fu_8092_p2() {
    and_ln786_159_fu_8092_p2 = (tmp_771_fu_7898_p3.read() & xor_ln786_79_fu_8086_p2.read());
}

void ResNet::thread_and_ln786_15_fu_11165_p2() {
    and_ln786_15_fu_11165_p2 = (tmp_841_fu_11053_p3.read() & select_ln416_69_fu_11127_p3.read());
}

void ResNet::thread_and_ln786_160_fu_11987_p2() {
    and_ln786_160_fu_11987_p2 = (tmp_919_fu_11959_p3.read() & xor_ln786_68_fu_11981_p2.read());
}

void ResNet::thread_and_ln786_161_fu_8373_p2() {
    and_ln786_161_fu_8373_p2 = (tmp_777_fu_8179_p3.read() & xor_ln786_81_fu_8367_p2.read());
}

void ResNet::thread_and_ln786_162_fu_8654_p2() {
    and_ln786_162_fu_8654_p2 = (tmp_783_fu_8460_p3.read() & xor_ln786_83_fu_8648_p2.read());
}

void ResNet::thread_and_ln786_163_fu_12077_p2() {
    and_ln786_163_fu_12077_p2 = (tmp_921_fu_12049_p3.read() & xor_ln786_70_fu_12071_p2.read());
}

void ResNet::thread_and_ln786_164_fu_8935_p2() {
    and_ln786_164_fu_8935_p2 = (tmp_789_fu_8741_p3.read() & xor_ln786_85_fu_8929_p2.read());
}

void ResNet::thread_and_ln786_165_fu_12167_p2() {
    and_ln786_165_fu_12167_p2 = (tmp_923_fu_12139_p3.read() & xor_ln786_72_fu_12161_p2.read());
}

void ResNet::thread_and_ln786_166_fu_9216_p2() {
    and_ln786_166_fu_9216_p2 = (tmp_795_fu_9022_p3.read() & xor_ln786_87_fu_9210_p2.read());
}

void ResNet::thread_and_ln786_167_fu_9497_p2() {
    and_ln786_167_fu_9497_p2 = (tmp_801_fu_9303_p3.read() & xor_ln786_89_fu_9491_p2.read());
}

void ResNet::thread_and_ln786_168_fu_12257_p2() {
    and_ln786_168_fu_12257_p2 = (tmp_925_fu_12229_p3.read() & xor_ln786_74_fu_12251_p2.read());
}

void ResNet::thread_and_ln786_169_fu_9778_p2() {
    and_ln786_169_fu_9778_p2 = (tmp_807_fu_9584_p3.read() & xor_ln786_91_fu_9772_p2.read());
}

void ResNet::thread_and_ln786_170_fu_10059_p2() {
    and_ln786_170_fu_10059_p2 = (tmp_813_fu_9865_p3.read() & xor_ln786_93_fu_10053_p2.read());
}

void ResNet::thread_and_ln786_171_fu_12347_p2() {
    and_ln786_171_fu_12347_p2 = (tmp_927_fu_12319_p3.read() & xor_ln786_77_fu_12341_p2.read());
}

void ResNet::thread_and_ln786_172_fu_10340_p2() {
    and_ln786_172_fu_10340_p2 = (tmp_819_fu_10146_p3.read() & xor_ln786_95_fu_10334_p2.read());
}

void ResNet::thread_and_ln786_173_fu_10621_p2() {
    and_ln786_173_fu_10621_p2 = (tmp_825_fu_10427_p3.read() & xor_ln786_97_fu_10615_p2.read());
}

void ResNet::thread_and_ln786_174_fu_12437_p2() {
    and_ln786_174_fu_12437_p2 = (tmp_929_fu_12409_p3.read() & xor_ln786_80_fu_12431_p2.read());
}

void ResNet::thread_and_ln786_175_fu_10902_p2() {
    and_ln786_175_fu_10902_p2 = (tmp_831_fu_10708_p3.read() & xor_ln786_99_fu_10896_p2.read());
}

void ResNet::thread_and_ln786_176_fu_12527_p2() {
    and_ln786_176_fu_12527_p2 = (tmp_931_fu_12499_p3.read() & xor_ln786_82_fu_12521_p2.read());
}

void ResNet::thread_and_ln786_177_fu_11183_p2() {
    and_ln786_177_fu_11183_p2 = (tmp_837_fu_10989_p3.read() & xor_ln786_101_fu_11177_p2.read());
}

void ResNet::thread_and_ln786_178_fu_12617_p2() {
    and_ln786_178_fu_12617_p2 = (tmp_933_fu_12589_p3.read() & xor_ln786_84_fu_12611_p2.read());
}

void ResNet::thread_and_ln786_179_fu_12707_p2() {
    and_ln786_179_fu_12707_p2 = (tmp_935_fu_12679_p3.read() & xor_ln786_86_fu_12701_p2.read());
}

void ResNet::thread_and_ln786_180_fu_12797_p2() {
    and_ln786_180_fu_12797_p2 = (tmp_937_fu_12769_p3.read() & xor_ln786_88_fu_12791_p2.read());
}

void ResNet::thread_and_ln786_181_fu_12887_p2() {
    and_ln786_181_fu_12887_p2 = (tmp_939_fu_12859_p3.read() & xor_ln786_90_fu_12881_p2.read());
}

void ResNet::thread_and_ln786_182_fu_12977_p2() {
    and_ln786_182_fu_12977_p2 = (tmp_941_fu_12949_p3.read() & xor_ln786_92_fu_12971_p2.read());
}

void ResNet::thread_and_ln786_183_fu_13067_p2() {
    and_ln786_183_fu_13067_p2 = (tmp_943_fu_13039_p3.read() & xor_ln786_94_fu_13061_p2.read());
}

void ResNet::thread_and_ln786_184_fu_13157_p2() {
    and_ln786_184_fu_13157_p2 = (tmp_945_fu_13129_p3.read() & xor_ln786_96_fu_13151_p2.read());
}

void ResNet::thread_and_ln786_185_fu_13247_p2() {
    and_ln786_185_fu_13247_p2 = (tmp_947_fu_13219_p3.read() & xor_ln786_98_fu_13241_p2.read());
}

void ResNet::thread_and_ln786_186_fu_13337_p2() {
    and_ln786_186_fu_13337_p2 = (tmp_949_fu_13309_p3.read() & xor_ln786_100_fu_13331_p2.read());
}

void ResNet::thread_and_ln786_187_fu_13427_p2() {
    and_ln786_187_fu_13427_p2 = (tmp_951_fu_13399_p3.read() & xor_ln786_102_fu_13421_p2.read());
}

void ResNet::thread_and_ln786_188_fu_13517_p2() {
    and_ln786_188_fu_13517_p2 = (tmp_953_fu_13489_p3.read() & xor_ln786_103_fu_13511_p2.read());
}

void ResNet::thread_and_ln786_189_fu_13607_p2() {
    and_ln786_189_fu_13607_p2 = (tmp_955_fu_13579_p3.read() & xor_ln786_104_fu_13601_p2.read());
}

void ResNet::thread_and_ln786_190_fu_13697_p2() {
    and_ln786_190_fu_13697_p2 = (tmp_957_fu_13669_p3.read() & xor_ln786_105_fu_13691_p2.read());
}

void ResNet::thread_and_ln786_191_fu_13787_p2() {
    and_ln786_191_fu_13787_p2 = (tmp_959_fu_13759_p3.read() & xor_ln786_106_fu_13781_p2.read());
}

void ResNet::thread_and_ln786_192_fu_13877_p2() {
    and_ln786_192_fu_13877_p2 = (tmp_961_fu_13849_p3.read() & xor_ln786_107_fu_13871_p2.read());
}

void ResNet::thread_and_ln786_193_fu_13967_p2() {
    and_ln786_193_fu_13967_p2 = (tmp_963_fu_13939_p3.read() & xor_ln786_108_fu_13961_p2.read());
}

void ResNet::thread_and_ln786_194_fu_14057_p2() {
    and_ln786_194_fu_14057_p2 = (tmp_965_fu_14029_p3.read() & xor_ln786_109_fu_14051_p2.read());
}

void ResNet::thread_and_ln786_195_fu_14147_p2() {
    and_ln786_195_fu_14147_p2 = (tmp_967_fu_14119_p3.read() & xor_ln786_110_fu_14141_p2.read());
}

void ResNet::thread_and_ln786_196_fu_14237_p2() {
    and_ln786_196_fu_14237_p2 = (tmp_969_fu_14209_p3.read() & xor_ln786_111_fu_14231_p2.read());
}

void ResNet::thread_and_ln786_197_fu_14327_p2() {
    and_ln786_197_fu_14327_p2 = (tmp_971_fu_14299_p3.read() & xor_ln786_112_fu_14321_p2.read());
}

void ResNet::thread_and_ln786_198_fu_14417_p2() {
    and_ln786_198_fu_14417_p2 = (tmp_973_fu_14389_p3.read() & xor_ln786_113_fu_14411_p2.read());
}

void ResNet::thread_and_ln786_199_fu_14507_p2() {
    and_ln786_199_fu_14507_p2 = (tmp_975_fu_14479_p3.read() & xor_ln786_114_fu_14501_p2.read());
}

void ResNet::thread_and_ln786_1_fu_7231_p2() {
    and_ln786_1_fu_7231_p2 = (tmp_757_fu_7119_p3.read() & select_ln416_55_fu_7193_p3.read());
}

void ResNet::thread_and_ln786_200_fu_14597_p2() {
    and_ln786_200_fu_14597_p2 = (tmp_977_fu_14569_p3.read() & xor_ln786_115_fu_14591_p2.read());
}

void ResNet::thread_and_ln786_201_fu_14687_p2() {
    and_ln786_201_fu_14687_p2 = (tmp_979_fu_14659_p3.read() & xor_ln786_116_fu_14681_p2.read());
}

void ResNet::thread_and_ln786_202_fu_14777_p2() {
    and_ln786_202_fu_14777_p2 = (tmp_981_fu_14749_p3.read() & xor_ln786_117_fu_14771_p2.read());
}

void ResNet::thread_and_ln786_203_fu_14867_p2() {
    and_ln786_203_fu_14867_p2 = (tmp_983_fu_14839_p3.read() & xor_ln786_118_fu_14861_p2.read());
}

void ResNet::thread_and_ln786_204_fu_14957_p2() {
    and_ln786_204_fu_14957_p2 = (tmp_985_fu_14929_p3.read() & xor_ln786_119_fu_14951_p2.read());
}

void ResNet::thread_and_ln786_205_fu_15047_p2() {
    and_ln786_205_fu_15047_p2 = (tmp_987_fu_15019_p3.read() & xor_ln786_120_fu_15041_p2.read());
}

void ResNet::thread_and_ln786_206_fu_15137_p2() {
    and_ln786_206_fu_15137_p2 = (tmp_989_fu_15109_p3.read() & xor_ln786_121_fu_15131_p2.read());
}

void ResNet::thread_and_ln786_207_fu_15227_p2() {
    and_ln786_207_fu_15227_p2 = (tmp_991_fu_15199_p3.read() & xor_ln786_122_fu_15221_p2.read());
}

void ResNet::thread_and_ln786_208_fu_15317_p2() {
    and_ln786_208_fu_15317_p2 = (tmp_993_fu_15289_p3.read() & xor_ln786_123_fu_15311_p2.read());
}

void ResNet::thread_and_ln786_209_fu_15407_p2() {
    and_ln786_209_fu_15407_p2 = (tmp_995_fu_15379_p3.read() & xor_ln786_124_fu_15401_p2.read());
}

void ResNet::thread_and_ln786_210_fu_15497_p2() {
    and_ln786_210_fu_15497_p2 = (tmp_997_fu_15469_p3.read() & xor_ln786_125_fu_15491_p2.read());
}

void ResNet::thread_and_ln786_211_fu_15587_p2() {
    and_ln786_211_fu_15587_p2 = (tmp_999_fu_15559_p3.read() & xor_ln786_126_fu_15581_p2.read());
}

void ResNet::thread_and_ln786_212_fu_15677_p2() {
    and_ln786_212_fu_15677_p2 = (tmp_1001_fu_15649_p3.read() & xor_ln786_127_fu_15671_p2.read());
}

void ResNet::thread_and_ln786_213_fu_15767_p2() {
    and_ln786_213_fu_15767_p2 = (tmp_1003_fu_15739_p3.read() & xor_ln786_128_fu_15761_p2.read());
}

void ResNet::thread_and_ln786_214_fu_15857_p2() {
    and_ln786_214_fu_15857_p2 = (tmp_1005_fu_15829_p3.read() & xor_ln786_129_fu_15851_p2.read());
}

void ResNet::thread_and_ln786_215_fu_15947_p2() {
    and_ln786_215_fu_15947_p2 = (tmp_1007_fu_15919_p3.read() & xor_ln786_130_fu_15941_p2.read());
}

void ResNet::thread_and_ln786_216_fu_16037_p2() {
    and_ln786_216_fu_16037_p2 = (tmp_1009_fu_16009_p3.read() & xor_ln786_131_fu_16031_p2.read());
}

void ResNet::thread_and_ln786_217_fu_16127_p2() {
    and_ln786_217_fu_16127_p2 = (tmp_1011_fu_16099_p3.read() & xor_ln786_132_fu_16121_p2.read());
}

void ResNet::thread_and_ln786_218_fu_16217_p2() {
    and_ln786_218_fu_16217_p2 = (tmp_1013_fu_16189_p3.read() & xor_ln786_133_fu_16211_p2.read());
}

void ResNet::thread_and_ln786_219_fu_16307_p2() {
    and_ln786_219_fu_16307_p2 = (tmp_1015_fu_16279_p3.read() & xor_ln786_134_fu_16301_p2.read());
}

void ResNet::thread_and_ln786_220_fu_16397_p2() {
    and_ln786_220_fu_16397_p2 = (tmp_1017_fu_16369_p3.read() & xor_ln786_135_fu_16391_p2.read());
}

void ResNet::thread_and_ln786_221_fu_16487_p2() {
    and_ln786_221_fu_16487_p2 = (tmp_1019_fu_16459_p3.read() & xor_ln786_136_fu_16481_p2.read());
}

void ResNet::thread_and_ln786_222_fu_16577_p2() {
    and_ln786_222_fu_16577_p2 = (tmp_1021_fu_16549_p3.read() & xor_ln786_137_fu_16571_p2.read());
}

void ResNet::thread_and_ln786_223_fu_16667_p2() {
    and_ln786_223_fu_16667_p2 = (tmp_1023_fu_16639_p3.read() & xor_ln786_138_fu_16661_p2.read());
}

void ResNet::thread_and_ln786_224_fu_16757_p2() {
    and_ln786_224_fu_16757_p2 = (tmp_1025_fu_16729_p3.read() & xor_ln786_139_fu_16751_p2.read());
}

void ResNet::thread_and_ln786_225_fu_16847_p2() {
    and_ln786_225_fu_16847_p2 = (tmp_1027_fu_16819_p3.read() & xor_ln786_140_fu_16841_p2.read());
}

void ResNet::thread_and_ln786_226_fu_16937_p2() {
    and_ln786_226_fu_16937_p2 = (tmp_1029_fu_16909_p3.read() & xor_ln786_141_fu_16931_p2.read());
}

void ResNet::thread_and_ln786_227_fu_17027_p2() {
    and_ln786_227_fu_17027_p2 = (tmp_1031_fu_16999_p3.read() & xor_ln786_142_fu_17021_p2.read());
}

void ResNet::thread_and_ln786_228_fu_17117_p2() {
    and_ln786_228_fu_17117_p2 = (tmp_1033_fu_17089_p3.read() & xor_ln786_143_fu_17111_p2.read());
}

void ResNet::thread_and_ln786_229_fu_17207_p2() {
    and_ln786_229_fu_17207_p2 = (tmp_1035_fu_17179_p3.read() & xor_ln786_144_fu_17201_p2.read());
}

void ResNet::thread_and_ln786_230_fu_17297_p2() {
    and_ln786_230_fu_17297_p2 = (tmp_1037_fu_17269_p3.read() & xor_ln786_145_fu_17291_p2.read());
}

void ResNet::thread_and_ln786_231_fu_17387_p2() {
    and_ln786_231_fu_17387_p2 = (tmp_1039_fu_17359_p3.read() & xor_ln786_146_fu_17381_p2.read());
}

void ResNet::thread_and_ln786_232_fu_17477_p2() {
    and_ln786_232_fu_17477_p2 = (tmp_1041_fu_17449_p3.read() & xor_ln786_147_fu_17471_p2.read());
}

void ResNet::thread_and_ln786_233_fu_17567_p2() {
    and_ln786_233_fu_17567_p2 = (tmp_1043_fu_17539_p3.read() & xor_ln786_148_fu_17561_p2.read());
}

void ResNet::thread_and_ln786_234_fu_17657_p2() {
    and_ln786_234_fu_17657_p2 = (tmp_1045_fu_17629_p3.read() & xor_ln786_149_fu_17651_p2.read());
}

void ResNet::thread_and_ln786_2_fu_7512_p2() {
    and_ln786_2_fu_7512_p2 = (tmp_763_fu_7400_p3.read() & select_ln416_56_fu_7474_p3.read());
}

void ResNet::thread_and_ln786_3_fu_7793_p2() {
    and_ln786_3_fu_7793_p2 = (tmp_769_fu_7681_p3.read() & select_ln416_57_fu_7755_p3.read());
}

void ResNet::thread_and_ln786_4_fu_8074_p2() {
    and_ln786_4_fu_8074_p2 = (tmp_775_fu_7962_p3.read() & select_ln416_58_fu_8036_p3.read());
}

void ResNet::thread_and_ln786_5_fu_8355_p2() {
    and_ln786_5_fu_8355_p2 = (tmp_781_fu_8243_p3.read() & select_ln416_59_fu_8317_p3.read());
}

void ResNet::thread_and_ln786_6_fu_8636_p2() {
    and_ln786_6_fu_8636_p2 = (tmp_787_fu_8524_p3.read() & select_ln416_60_fu_8598_p3.read());
}

void ResNet::thread_and_ln786_7_fu_8917_p2() {
    and_ln786_7_fu_8917_p2 = (tmp_793_fu_8805_p3.read() & select_ln416_61_fu_8879_p3.read());
}

void ResNet::thread_and_ln786_8_fu_9198_p2() {
    and_ln786_8_fu_9198_p2 = (tmp_799_fu_9086_p3.read() & select_ln416_62_fu_9160_p3.read());
}

void ResNet::thread_and_ln786_9_fu_9479_p2() {
    and_ln786_9_fu_9479_p2 = (tmp_805_fu_9367_p3.read() & select_ln416_63_fu_9441_p3.read());
}

void ResNet::thread_and_ln786_fu_6950_p2() {
    and_ln786_fu_6950_p2 = (tmp_751_fu_6838_p3.read() & select_ln416_fu_6912_p3.read());
}

void ResNet::thread_and_ln86_fu_4754_p2() {
    and_ln86_fu_4754_p2 = (icmp_ln88_fu_4748_p2.read() & xor_ln86_fu_4742_p2.read());
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
    ap_CS_fsm_state100 = ap_CS_fsm.read()[88];
}

void ResNet::thread_ap_CS_fsm_state101() {
    ap_CS_fsm_state101 = ap_CS_fsm.read()[89];
}

void ResNet::thread_ap_CS_fsm_state102() {
    ap_CS_fsm_state102 = ap_CS_fsm.read()[90];
}

void ResNet::thread_ap_CS_fsm_state103() {
    ap_CS_fsm_state103 = ap_CS_fsm.read()[91];
}

void ResNet::thread_ap_CS_fsm_state104() {
    ap_CS_fsm_state104 = ap_CS_fsm.read()[92];
}

void ResNet::thread_ap_CS_fsm_state105() {
    ap_CS_fsm_state105 = ap_CS_fsm.read()[93];
}

void ResNet::thread_ap_CS_fsm_state106() {
    ap_CS_fsm_state106 = ap_CS_fsm.read()[94];
}

void ResNet::thread_ap_CS_fsm_state107() {
    ap_CS_fsm_state107 = ap_CS_fsm.read()[95];
}

void ResNet::thread_ap_CS_fsm_state108() {
    ap_CS_fsm_state108 = ap_CS_fsm.read()[96];
}

void ResNet::thread_ap_CS_fsm_state109() {
    ap_CS_fsm_state109 = ap_CS_fsm.read()[97];
}

void ResNet::thread_ap_CS_fsm_state110() {
    ap_CS_fsm_state110 = ap_CS_fsm.read()[98];
}

void ResNet::thread_ap_CS_fsm_state111() {
    ap_CS_fsm_state111 = ap_CS_fsm.read()[99];
}

void ResNet::thread_ap_CS_fsm_state112() {
    ap_CS_fsm_state112 = ap_CS_fsm.read()[100];
}

void ResNet::thread_ap_CS_fsm_state113() {
    ap_CS_fsm_state113 = ap_CS_fsm.read()[101];
}

void ResNet::thread_ap_CS_fsm_state114() {
    ap_CS_fsm_state114 = ap_CS_fsm.read()[102];
}

void ResNet::thread_ap_CS_fsm_state115() {
    ap_CS_fsm_state115 = ap_CS_fsm.read()[103];
}

void ResNet::thread_ap_CS_fsm_state116() {
    ap_CS_fsm_state116 = ap_CS_fsm.read()[104];
}

void ResNet::thread_ap_CS_fsm_state117() {
    ap_CS_fsm_state117 = ap_CS_fsm.read()[105];
}

void ResNet::thread_ap_CS_fsm_state118() {
    ap_CS_fsm_state118 = ap_CS_fsm.read()[106];
}

void ResNet::thread_ap_CS_fsm_state119() {
    ap_CS_fsm_state119 = ap_CS_fsm.read()[107];
}

void ResNet::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[2];
}

void ResNet::thread_ap_CS_fsm_state120() {
    ap_CS_fsm_state120 = ap_CS_fsm.read()[108];
}

void ResNet::thread_ap_CS_fsm_state121() {
    ap_CS_fsm_state121 = ap_CS_fsm.read()[109];
}

void ResNet::thread_ap_CS_fsm_state122() {
    ap_CS_fsm_state122 = ap_CS_fsm.read()[110];
}

void ResNet::thread_ap_CS_fsm_state123() {
    ap_CS_fsm_state123 = ap_CS_fsm.read()[111];
}

void ResNet::thread_ap_CS_fsm_state124() {
    ap_CS_fsm_state124 = ap_CS_fsm.read()[112];
}

void ResNet::thread_ap_CS_fsm_state125() {
    ap_CS_fsm_state125 = ap_CS_fsm.read()[113];
}

void ResNet::thread_ap_CS_fsm_state126() {
    ap_CS_fsm_state126 = ap_CS_fsm.read()[114];
}

void ResNet::thread_ap_CS_fsm_state127() {
    ap_CS_fsm_state127 = ap_CS_fsm.read()[115];
}

void ResNet::thread_ap_CS_fsm_state128() {
    ap_CS_fsm_state128 = ap_CS_fsm.read()[116];
}

void ResNet::thread_ap_CS_fsm_state129() {
    ap_CS_fsm_state129 = ap_CS_fsm.read()[117];
}

void ResNet::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[3];
}

void ResNet::thread_ap_CS_fsm_state130() {
    ap_CS_fsm_state130 = ap_CS_fsm.read()[118];
}

void ResNet::thread_ap_CS_fsm_state131() {
    ap_CS_fsm_state131 = ap_CS_fsm.read()[119];
}

void ResNet::thread_ap_CS_fsm_state132() {
    ap_CS_fsm_state132 = ap_CS_fsm.read()[120];
}

void ResNet::thread_ap_CS_fsm_state135() {
    ap_CS_fsm_state135 = ap_CS_fsm.read()[122];
}

void ResNet::thread_ap_CS_fsm_state136() {
    ap_CS_fsm_state136 = ap_CS_fsm.read()[123];
}

void ResNet::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[5];
}

void ResNet::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[6];
}

void ResNet::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[8];
}

void ResNet::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[9];
}

void ResNet::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[10];
}

void ResNet::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[11];
}

void ResNet::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[12];
}

void ResNet::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[13];
}

void ResNet::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[14];
}

void ResNet::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[15];
}

void ResNet::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[16];
}

void ResNet::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[17];
}

void ResNet::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[18];
}

void ResNet::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[19];
}

void ResNet::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[20];
}

void ResNet::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[21];
}

void ResNet::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[22];
}

void ResNet::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[23];
}

void ResNet::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[24];
}

void ResNet::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[25];
}

void ResNet::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[26];
}

void ResNet::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read()[27];
}

void ResNet::thread_ap_CS_fsm_state40() {
    ap_CS_fsm_state40 = ap_CS_fsm.read()[28];
}

void ResNet::thread_ap_CS_fsm_state41() {
    ap_CS_fsm_state41 = ap_CS_fsm.read()[29];
}

void ResNet::thread_ap_CS_fsm_state42() {
    ap_CS_fsm_state42 = ap_CS_fsm.read()[30];
}

void ResNet::thread_ap_CS_fsm_state43() {
    ap_CS_fsm_state43 = ap_CS_fsm.read()[31];
}

void ResNet::thread_ap_CS_fsm_state44() {
    ap_CS_fsm_state44 = ap_CS_fsm.read()[32];
}

void ResNet::thread_ap_CS_fsm_state45() {
    ap_CS_fsm_state45 = ap_CS_fsm.read()[33];
}

void ResNet::thread_ap_CS_fsm_state46() {
    ap_CS_fsm_state46 = ap_CS_fsm.read()[34];
}

void ResNet::thread_ap_CS_fsm_state47() {
    ap_CS_fsm_state47 = ap_CS_fsm.read()[35];
}

void ResNet::thread_ap_CS_fsm_state48() {
    ap_CS_fsm_state48 = ap_CS_fsm.read()[36];
}

void ResNet::thread_ap_CS_fsm_state49() {
    ap_CS_fsm_state49 = ap_CS_fsm.read()[37];
}

void ResNet::thread_ap_CS_fsm_state50() {
    ap_CS_fsm_state50 = ap_CS_fsm.read()[38];
}

void ResNet::thread_ap_CS_fsm_state51() {
    ap_CS_fsm_state51 = ap_CS_fsm.read()[39];
}

void ResNet::thread_ap_CS_fsm_state52() {
    ap_CS_fsm_state52 = ap_CS_fsm.read()[40];
}

void ResNet::thread_ap_CS_fsm_state53() {
    ap_CS_fsm_state53 = ap_CS_fsm.read()[41];
}

void ResNet::thread_ap_CS_fsm_state54() {
    ap_CS_fsm_state54 = ap_CS_fsm.read()[42];
}

void ResNet::thread_ap_CS_fsm_state55() {
    ap_CS_fsm_state55 = ap_CS_fsm.read()[43];
}

void ResNet::thread_ap_CS_fsm_state56() {
    ap_CS_fsm_state56 = ap_CS_fsm.read()[44];
}

void ResNet::thread_ap_CS_fsm_state57() {
    ap_CS_fsm_state57 = ap_CS_fsm.read()[45];
}

void ResNet::thread_ap_CS_fsm_state58() {
    ap_CS_fsm_state58 = ap_CS_fsm.read()[46];
}

void ResNet::thread_ap_CS_fsm_state59() {
    ap_CS_fsm_state59 = ap_CS_fsm.read()[47];
}

void ResNet::thread_ap_CS_fsm_state60() {
    ap_CS_fsm_state60 = ap_CS_fsm.read()[48];
}

void ResNet::thread_ap_CS_fsm_state61() {
    ap_CS_fsm_state61 = ap_CS_fsm.read()[49];
}

void ResNet::thread_ap_CS_fsm_state62() {
    ap_CS_fsm_state62 = ap_CS_fsm.read()[50];
}

void ResNet::thread_ap_CS_fsm_state63() {
    ap_CS_fsm_state63 = ap_CS_fsm.read()[51];
}

void ResNet::thread_ap_CS_fsm_state64() {
    ap_CS_fsm_state64 = ap_CS_fsm.read()[52];
}

void ResNet::thread_ap_CS_fsm_state65() {
    ap_CS_fsm_state65 = ap_CS_fsm.read()[53];
}

void ResNet::thread_ap_CS_fsm_state66() {
    ap_CS_fsm_state66 = ap_CS_fsm.read()[54];
}

void ResNet::thread_ap_CS_fsm_state67() {
    ap_CS_fsm_state67 = ap_CS_fsm.read()[55];
}

void ResNet::thread_ap_CS_fsm_state68() {
    ap_CS_fsm_state68 = ap_CS_fsm.read()[56];
}

void ResNet::thread_ap_CS_fsm_state69() {
    ap_CS_fsm_state69 = ap_CS_fsm.read()[57];
}

void ResNet::thread_ap_CS_fsm_state70() {
    ap_CS_fsm_state70 = ap_CS_fsm.read()[58];
}

void ResNet::thread_ap_CS_fsm_state71() {
    ap_CS_fsm_state71 = ap_CS_fsm.read()[59];
}

void ResNet::thread_ap_CS_fsm_state72() {
    ap_CS_fsm_state72 = ap_CS_fsm.read()[60];
}

void ResNet::thread_ap_CS_fsm_state73() {
    ap_CS_fsm_state73 = ap_CS_fsm.read()[61];
}

void ResNet::thread_ap_CS_fsm_state74() {
    ap_CS_fsm_state74 = ap_CS_fsm.read()[62];
}

void ResNet::thread_ap_CS_fsm_state75() {
    ap_CS_fsm_state75 = ap_CS_fsm.read()[63];
}

void ResNet::thread_ap_CS_fsm_state76() {
    ap_CS_fsm_state76 = ap_CS_fsm.read()[64];
}

void ResNet::thread_ap_CS_fsm_state77() {
    ap_CS_fsm_state77 = ap_CS_fsm.read()[65];
}

void ResNet::thread_ap_CS_fsm_state78() {
    ap_CS_fsm_state78 = ap_CS_fsm.read()[66];
}

void ResNet::thread_ap_CS_fsm_state79() {
    ap_CS_fsm_state79 = ap_CS_fsm.read()[67];
}

void ResNet::thread_ap_CS_fsm_state80() {
    ap_CS_fsm_state80 = ap_CS_fsm.read()[68];
}

void ResNet::thread_ap_CS_fsm_state81() {
    ap_CS_fsm_state81 = ap_CS_fsm.read()[69];
}

void ResNet::thread_ap_CS_fsm_state82() {
    ap_CS_fsm_state82 = ap_CS_fsm.read()[70];
}

void ResNet::thread_ap_CS_fsm_state83() {
    ap_CS_fsm_state83 = ap_CS_fsm.read()[71];
}

void ResNet::thread_ap_CS_fsm_state84() {
    ap_CS_fsm_state84 = ap_CS_fsm.read()[72];
}

void ResNet::thread_ap_CS_fsm_state85() {
    ap_CS_fsm_state85 = ap_CS_fsm.read()[73];
}

void ResNet::thread_ap_CS_fsm_state86() {
    ap_CS_fsm_state86 = ap_CS_fsm.read()[74];
}

void ResNet::thread_ap_CS_fsm_state87() {
    ap_CS_fsm_state87 = ap_CS_fsm.read()[75];
}

void ResNet::thread_ap_CS_fsm_state88() {
    ap_CS_fsm_state88 = ap_CS_fsm.read()[76];
}

void ResNet::thread_ap_CS_fsm_state89() {
    ap_CS_fsm_state89 = ap_CS_fsm.read()[77];
}

void ResNet::thread_ap_CS_fsm_state90() {
    ap_CS_fsm_state90 = ap_CS_fsm.read()[78];
}

void ResNet::thread_ap_CS_fsm_state91() {
    ap_CS_fsm_state91 = ap_CS_fsm.read()[79];
}

void ResNet::thread_ap_CS_fsm_state92() {
    ap_CS_fsm_state92 = ap_CS_fsm.read()[80];
}

void ResNet::thread_ap_CS_fsm_state93() {
    ap_CS_fsm_state93 = ap_CS_fsm.read()[81];
}

void ResNet::thread_ap_CS_fsm_state94() {
    ap_CS_fsm_state94 = ap_CS_fsm.read()[82];
}

void ResNet::thread_ap_CS_fsm_state95() {
    ap_CS_fsm_state95 = ap_CS_fsm.read()[83];
}

void ResNet::thread_ap_CS_fsm_state96() {
    ap_CS_fsm_state96 = ap_CS_fsm.read()[84];
}

void ResNet::thread_ap_CS_fsm_state97() {
    ap_CS_fsm_state97 = ap_CS_fsm.read()[85];
}

void ResNet::thread_ap_CS_fsm_state98() {
    ap_CS_fsm_state98 = ap_CS_fsm.read()[86];
}

void ResNet::thread_ap_CS_fsm_state99() {
    ap_CS_fsm_state99 = ap_CS_fsm.read()[87];
}

void ResNet::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state3_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln86_reg_21875_pp0_iter7_reg.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, IMG_RVALID.read())));
}

void ResNet::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state3_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln86_reg_21875_pp0_iter7_reg.read()) && 
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
    ap_block_state10_pp0_stage0_iter8 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln86_reg_21875_pp0_iter7_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_0, IMG_RVALID.read()));
}

void ResNet::thread_ap_block_state11_pp0_stage0_iter9() {
    ap_block_state11_pp0_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state133_pp3_stage0_iter0() {
    ap_block_state133_pp3_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state134_pp3_stage0_iter1() {
    ap_block_state134_pp3_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state14_pp1_stage0_iter0() {
    ap_block_state14_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state15_pp1_stage0_iter1() {
    ap_block_state15_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state18_pp2_stage0_iter0() {
    ap_block_state18_pp2_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state19_pp2_stage0_iter1() {
    ap_block_state19_pp2_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ResNet::thread_ap_block_state3_io() {
    ap_block_state3_io = (esl_seteq<1,1,1>(icmp_ln86_reg_21875.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, IMG_ARREADY.read()));
}

void ResNet::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
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
    if (esl_seteq<1,1,1>(icmp_ln86_fu_4686_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void ResNet::thread_ap_condition_pp1_exit_iter0_state14() {
    if (esl_seteq<1,1,1>(icmp_ln106_fu_5383_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp1_exit_iter0_state14 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state14 = ap_const_logic_0;
    }
}

void ResNet::thread_ap_condition_pp2_exit_iter0_state18() {
    if (esl_seteq<1,1,1>(icmp_ln119_fu_6268_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp2_exit_iter0_state18 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter0_state18 = ap_const_logic_0;
    }
}

void ResNet::thread_ap_condition_pp3_exit_iter0_state133() {
    if (esl_seteq<1,1,1>(icmp_ln589_fu_11791_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp3_exit_iter0_state133 = ap_const_logic_1;
    } else {
        ap_condition_pp3_exit_iter0_state133 = ap_const_logic_0;
    }
}

void ResNet::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()) && 
         esl_seteq<1,1,1>(grp_matmul_fu_4298_ap_done.read(), ap_const_logic_1))) {
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter9.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter1.read()))) {
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

void ResNet::thread_ap_phi_mux_brow_0_phi_fu_2450_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln119_reg_22129.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_brow_0_phi_fu_2450_p4 = select_ln121_1_reg_22155.read();
    } else {
        ap_phi_mux_brow_0_phi_fu_2450_p4 = brow_0_reg_2446.read();
    }
}

void ResNet::thread_ap_phi_mux_col_0_phi_fu_2328_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln86_reg_21875.read(), ap_const_lv1_0))) {
        ap_phi_mux_col_0_phi_fu_2328_p4 = select_ln90_1_reg_21894.read();
    } else {
        ap_phi_mux_col_0_phi_fu_2328_p4 = col_0_reg_2324.read();
    }
}

void ResNet::thread_ap_phi_mux_col_b_0_phi_fu_2428_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln119_reg_22129.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_col_b_0_phi_fu_2428_p4 = select_ln120_1_reg_22144.read();
    } else {
        ap_phi_mux_col_b_0_phi_fu_2428_p4 = col_b_0_reg_2424.read();
    }
}

void ResNet::thread_ap_phi_mux_i_0_phi_fu_2969_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln589_reg_22645.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i_0_phi_fu_2969_p4 = select_ln595_1_reg_22654.read();
    } else {
        ap_phi_mux_i_0_phi_fu_2969_p4 = i_0_reg_2965.read();
    }
}

void ResNet::thread_ap_phi_mux_row21_0_phi_fu_2373_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln106_reg_22023.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_row21_0_phi_fu_2373_p4 = select_ln111_1_reg_22037.read();
    } else {
        ap_phi_mux_row21_0_phi_fu_2373_p4 = row21_0_reg_2369.read();
    }
}

void ResNet::thread_ap_phi_mux_row_0_phi_fu_2306_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln86_reg_21875.read(), ap_const_lv1_0))) {
        ap_phi_mux_row_0_phi_fu_2306_p4 = select_ln86_1_reg_21884.read();
    } else {
        ap_phi_mux_row_0_phi_fu_2306_p4 = row_0_reg_2302.read();
    }
}

void ResNet::thread_ap_phi_mux_row_b_0_phi_fu_2406_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln119_reg_22129.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_row_b_0_phi_fu_2406_p4 = select_ln119_1_reg_22138.read();
    } else {
        ap_phi_mux_row_b_0_phi_fu_2406_p4 = row_b_0_reg_2402.read();
    }
}

void ResNet::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()) && 
         esl_seteq<1,1,1>(grp_matmul_fu_4298_ap_done.read(), ap_const_logic_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void ResNet::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void ResNet::thread_bcol_fu_6584_p2() {
    bcol_fu_6584_p2 = (!ap_const_lv4_1.is_01() || !select_ln121_fu_6482_p3.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_1) + sc_biguint<4>(select_ln121_fu_6482_p3.read()));
}

void ResNet::thread_brow_fu_6464_p2() {
    brow_fu_6464_p2 = (!ap_const_lv4_1.is_01() || !select_ln120_fu_6396_p3.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_1) + sc_biguint<4>(select_ln120_fu_6396_p3.read()));
}

void ResNet::thread_cbb_fu_4823_p2() {
    cbb_fu_4823_p2 = (!select_ln90_fu_4772_p3.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(select_ln90_fu_4772_p3.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_cii_1_fu_11503_p2() {
    cii_1_fu_11503_p2 = (!cii38_0_reg_2682.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(cii38_0_reg_2682.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_cii_2_fu_11584_p2() {
    cii_2_fu_11584_p2 = (!cii44_0_reg_2752.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(cii44_0_reg_2752.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_cii_fu_4879_p2() {
    cii_fu_4879_p2 = (!cii_0_reg_2346.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(cii_0_reg_2346.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_cio_1_fu_11620_p2() {
    cio_1_fu_11620_p2 = (!cc_reg_2786.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(cc_reg_2786.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_cio_2_fu_11491_p2() {
    cio_2_fu_11491_p2 = (!cio37_0_reg_2670.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(cio37_0_reg_2670.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_cio_3_fu_11572_p2() {
    cio_3_fu_11572_p2 = (!cio43_0_reg_2740.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(cio43_0_reg_2740.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_cio_fu_11310_p2() {
    cio_fu_11310_p2 = (!cio_0_reg_2540.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(cio_0_reg_2540.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_coi_1_fu_11527_p2() {
    coi_1_fu_11527_p2 = (!coi40_0_reg_2705.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(coi40_0_reg_2705.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_coi_2_fu_11608_p2() {
    coi_2_fu_11608_p2 = (!coi46_0_reg_2775.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(coi46_0_reg_2775.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_coi_fu_11446_p2() {
    coi_fu_11446_p2 = (!coi_0_reg_2635.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(coi_0_reg_2635.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_col_10_fu_11274_p2() {
    col_10_fu_11274_p2 = (!col27_0_reg_2504.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(col27_0_reg_2504.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_col_11_fu_11298_p2() {
    col_11_fu_11298_p2 = (!col29_0_reg_2528.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(col29_0_reg_2528.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_col_12_fu_11417_p2() {
    col_12_fu_11417_p2 = (!col34_0_reg_2611.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(col34_0_reg_2611.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_col_13_fu_11474_p2() {
    col_13_fu_11474_p2 = (!col36_0_reg_2658.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(col36_0_reg_2658.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_col_14_fu_11340_p2() {
    col_14_fu_11340_p2 = (!col31_0_reg_2563.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(col31_0_reg_2563.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_col_15_fu_11555_p2() {
    col_15_fu_11555_p2 = (!col42_0_reg_2728.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(col42_0_reg_2728.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_col_16_fu_4760_p2() {
    col_16_fu_4760_p2 = (!ap_const_lv6_1.is_01() || !select_ln86_fu_4710_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(select_ln86_fu_4710_p3.read()));
}

void ResNet::thread_col_9_fu_11250_p2() {
    col_9_fu_11250_p2 = (!col25_0_reg_2480.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(col25_0_reg_2480.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_col_b_fu_6384_p2() {
    col_b_fu_6384_p2 = (!ap_const_lv3_1.is_01() || !select_ln119_fu_6292_p3.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_1) + sc_biguint<3>(select_ln119_fu_6292_p3.read()));
}

void ResNet::thread_col_fu_6031_p2() {
    col_fu_6031_p2 = (!ap_const_lv2_1.is_01() || !select_ln111_fu_5407_p3.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(select_ln111_fu_5407_p3.read()));
}

void ResNet::thread_conv1_out_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_0_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_0_address0 = grp_biconv16_fu_3801_top_0_V_address0.read();
    } else {
        conv1_out_0_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        conv1_out_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_0_ce0 = grp_biconv16_fu_3801_top_0_V_ce0.read();
    } else {
        conv1_out_0_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_0_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_0_we0 = grp_biconv16_fu_3801_top_0_V_we0.read();
    } else {
        conv1_out_0_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_10_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_10_address0 = grp_biconv16_fu_3801_top_10_V_address0.read();
    } else {
        conv1_out_10_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        conv1_out_10_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_10_ce0 = grp_biconv16_fu_3801_top_10_V_ce0.read();
    } else {
        conv1_out_10_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_10_we0 = grp_biconv16_fu_3801_top_10_V_we0.read();
    } else {
        conv1_out_10_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_11_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_11_address0 = grp_biconv16_fu_3801_top_11_V_address0.read();
    } else {
        conv1_out_11_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        conv1_out_11_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_11_ce0 = grp_biconv16_fu_3801_top_11_V_ce0.read();
    } else {
        conv1_out_11_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_11_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_11_we0 = grp_biconv16_fu_3801_top_11_V_we0.read();
    } else {
        conv1_out_11_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_12_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_12_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_12_address0 = grp_biconv16_fu_3801_top_12_V_address0.read();
    } else {
        conv1_out_12_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        conv1_out_12_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_12_ce0 = grp_biconv16_fu_3801_top_12_V_ce0.read();
    } else {
        conv1_out_12_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_12_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_12_we0 = grp_biconv16_fu_3801_top_12_V_we0.read();
    } else {
        conv1_out_12_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_13_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_13_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_13_address0 = grp_biconv16_fu_3801_top_13_V_address0.read();
    } else {
        conv1_out_13_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        conv1_out_13_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_13_ce0 = grp_biconv16_fu_3801_top_13_V_ce0.read();
    } else {
        conv1_out_13_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_13_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_13_we0 = grp_biconv16_fu_3801_top_13_V_we0.read();
    } else {
        conv1_out_13_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_14_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_14_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_14_address0 = grp_biconv16_fu_3801_top_14_V_address0.read();
    } else {
        conv1_out_14_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        conv1_out_14_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_14_ce0 = grp_biconv16_fu_3801_top_14_V_ce0.read();
    } else {
        conv1_out_14_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_14_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_14_we0 = grp_biconv16_fu_3801_top_14_V_we0.read();
    } else {
        conv1_out_14_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_15_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_15_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_15_address0 = grp_biconv16_fu_3801_top_15_V_address0.read();
    } else {
        conv1_out_15_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        conv1_out_15_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_15_ce0 = grp_biconv16_fu_3801_top_15_V_ce0.read();
    } else {
        conv1_out_15_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_15_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_15_we0 = grp_biconv16_fu_3801_top_15_V_we0.read();
    } else {
        conv1_out_15_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_1_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_1_address0 = grp_biconv16_fu_3801_top_1_V_address0.read();
    } else {
        conv1_out_1_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        conv1_out_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_1_ce0 = grp_biconv16_fu_3801_top_1_V_ce0.read();
    } else {
        conv1_out_1_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_1_we0 = grp_biconv16_fu_3801_top_1_V_we0.read();
    } else {
        conv1_out_1_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_2_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_2_address0 = grp_biconv16_fu_3801_top_2_V_address0.read();
    } else {
        conv1_out_2_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        conv1_out_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_2_ce0 = grp_biconv16_fu_3801_top_2_V_ce0.read();
    } else {
        conv1_out_2_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_2_we0 = grp_biconv16_fu_3801_top_2_V_we0.read();
    } else {
        conv1_out_2_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_3_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_3_address0 = grp_biconv16_fu_3801_top_3_V_address0.read();
    } else {
        conv1_out_3_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        conv1_out_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_3_ce0 = grp_biconv16_fu_3801_top_3_V_ce0.read();
    } else {
        conv1_out_3_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_3_we0 = grp_biconv16_fu_3801_top_3_V_we0.read();
    } else {
        conv1_out_3_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_4_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_4_address0 = grp_biconv16_fu_3801_top_4_V_address0.read();
    } else {
        conv1_out_4_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        conv1_out_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_4_ce0 = grp_biconv16_fu_3801_top_4_V_ce0.read();
    } else {
        conv1_out_4_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_4_we0 = grp_biconv16_fu_3801_top_4_V_we0.read();
    } else {
        conv1_out_4_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_5_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_5_address0 = grp_biconv16_fu_3801_top_5_V_address0.read();
    } else {
        conv1_out_5_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        conv1_out_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_5_ce0 = grp_biconv16_fu_3801_top_5_V_ce0.read();
    } else {
        conv1_out_5_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_5_we0 = grp_biconv16_fu_3801_top_5_V_we0.read();
    } else {
        conv1_out_5_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_6_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_6_address0 = grp_biconv16_fu_3801_top_6_V_address0.read();
    } else {
        conv1_out_6_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        conv1_out_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_6_ce0 = grp_biconv16_fu_3801_top_6_V_ce0.read();
    } else {
        conv1_out_6_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_6_we0 = grp_biconv16_fu_3801_top_6_V_we0.read();
    } else {
        conv1_out_6_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_7_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_7_address0 = grp_biconv16_fu_3801_top_7_V_address0.read();
    } else {
        conv1_out_7_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        conv1_out_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_7_ce0 = grp_biconv16_fu_3801_top_7_V_ce0.read();
    } else {
        conv1_out_7_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_7_we0 = grp_biconv16_fu_3801_top_7_V_we0.read();
    } else {
        conv1_out_7_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_8_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_8_address0 = grp_biconv16_fu_3801_top_8_V_address0.read();
    } else {
        conv1_out_8_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        conv1_out_8_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_8_ce0 = grp_biconv16_fu_3801_top_8_V_ce0.read();
    } else {
        conv1_out_8_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_8_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_8_we0 = grp_biconv16_fu_3801_top_8_V_we0.read();
    } else {
        conv1_out_8_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        conv1_out_9_address0 =  (sc_lv<10>) (zext_ln1116_1_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_9_address0 = grp_biconv16_fu_3801_top_9_V_address0.read();
    } else {
        conv1_out_9_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_conv1_out_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        conv1_out_9_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_9_ce0 = grp_biconv16_fu_3801_top_9_V_ce0.read();
    } else {
        conv1_out_9_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_out_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_out_9_we0 = grp_biconv16_fu_3801_top_9_V_we0.read();
    } else {
        conv1_out_9_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_V_address0() {
    conv1_weight_V_address0 =  (sc_lv<10>) (zext_ln321_40_fu_5861_p1.read());
}

void ResNet::thread_conv1_weight_V_address1() {
    conv1_weight_V_address1 =  (sc_lv<10>) (zext_ln321_41_fu_5872_p1.read());
}

void ResNet::thread_conv1_weight_V_address10() {
    conv1_weight_V_address10 =  (sc_lv<10>) (zext_ln321_50_fu_5971_p1.read());
}

void ResNet::thread_conv1_weight_V_address11() {
    conv1_weight_V_address11 =  (sc_lv<10>) (zext_ln321_51_fu_5982_p1.read());
}

void ResNet::thread_conv1_weight_V_address12() {
    conv1_weight_V_address12 =  (sc_lv<10>) (zext_ln321_52_fu_5993_p1.read());
}

void ResNet::thread_conv1_weight_V_address13() {
    conv1_weight_V_address13 =  (sc_lv<10>) (zext_ln321_53_fu_6004_p1.read());
}

void ResNet::thread_conv1_weight_V_address14() {
    conv1_weight_V_address14 =  (sc_lv<10>) (zext_ln321_54_fu_6015_p1.read());
}

void ResNet::thread_conv1_weight_V_address15() {
    conv1_weight_V_address15 =  (sc_lv<10>) (zext_ln321_55_fu_6026_p1.read());
}

void ResNet::thread_conv1_weight_V_address2() {
    conv1_weight_V_address2 =  (sc_lv<10>) (zext_ln321_42_fu_5883_p1.read());
}

void ResNet::thread_conv1_weight_V_address3() {
    conv1_weight_V_address3 =  (sc_lv<10>) (zext_ln321_43_fu_5894_p1.read());
}

void ResNet::thread_conv1_weight_V_address4() {
    conv1_weight_V_address4 =  (sc_lv<10>) (zext_ln321_44_fu_5905_p1.read());
}

void ResNet::thread_conv1_weight_V_address5() {
    conv1_weight_V_address5 =  (sc_lv<10>) (zext_ln321_45_fu_5916_p1.read());
}

void ResNet::thread_conv1_weight_V_address6() {
    conv1_weight_V_address6 =  (sc_lv<10>) (zext_ln321_46_fu_5927_p1.read());
}

void ResNet::thread_conv1_weight_V_address7() {
    conv1_weight_V_address7 =  (sc_lv<10>) (zext_ln321_47_fu_5938_p1.read());
}

void ResNet::thread_conv1_weight_V_address8() {
    conv1_weight_V_address8 =  (sc_lv<10>) (zext_ln321_48_fu_5949_p1.read());
}

void ResNet::thread_conv1_weight_V_address9() {
    conv1_weight_V_address9 =  (sc_lv<10>) (zext_ln321_49_fu_5960_p1.read());
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
        conv1_weight_buf_0_s_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6066_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_0_s_address0 = grp_biconv16_fu_3801_weights_0_V_address0.read();
    } else {
        conv1_weight_buf_0_s_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_0_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_0_s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_0_s_ce0 = grp_biconv16_fu_3801_weights_0_V_ce0.read();
    } else {
        conv1_weight_buf_0_s_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_0_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_0_s_ce1 = grp_biconv16_fu_3801_weights_0_V_ce1.read();
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln106_reg_22023.read()))) {
        conv1_weight_buf_0_s_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_0_s_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_10_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6066_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_10_address0 = grp_biconv16_fu_3801_weights_10_V_address0.read();
    } else {
        conv1_weight_buf_10_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_10_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_10_ce0 = grp_biconv16_fu_3801_weights_10_V_ce0.read();
    } else {
        conv1_weight_buf_10_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_10_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_10_ce1 = grp_biconv16_fu_3801_weights_10_V_ce1.read();
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln106_reg_22023.read()))) {
        conv1_weight_buf_10_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_10_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_11_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6066_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_11_address0 = grp_biconv16_fu_3801_weights_11_V_address0.read();
    } else {
        conv1_weight_buf_11_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_11_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_11_ce0 = grp_biconv16_fu_3801_weights_11_V_ce0.read();
    } else {
        conv1_weight_buf_11_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_11_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_11_ce1 = grp_biconv16_fu_3801_weights_11_V_ce1.read();
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln106_reg_22023.read()))) {
        conv1_weight_buf_11_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_11_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_12_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_12_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6066_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_12_address0 = grp_biconv16_fu_3801_weights_12_V_address0.read();
    } else {
        conv1_weight_buf_12_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_12_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_12_ce0 = grp_biconv16_fu_3801_weights_12_V_ce0.read();
    } else {
        conv1_weight_buf_12_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_12_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_12_ce1 = grp_biconv16_fu_3801_weights_12_V_ce1.read();
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln106_reg_22023.read()))) {
        conv1_weight_buf_12_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_12_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_13_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_13_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6066_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_13_address0 = grp_biconv16_fu_3801_weights_13_V_address0.read();
    } else {
        conv1_weight_buf_13_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_13_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_13_ce0 = grp_biconv16_fu_3801_weights_13_V_ce0.read();
    } else {
        conv1_weight_buf_13_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_13_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_13_ce1 = grp_biconv16_fu_3801_weights_13_V_ce1.read();
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln106_reg_22023.read()))) {
        conv1_weight_buf_13_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_13_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_14_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_14_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6066_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_14_address0 = grp_biconv16_fu_3801_weights_14_V_address0.read();
    } else {
        conv1_weight_buf_14_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_14_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_14_ce0 = grp_biconv16_fu_3801_weights_14_V_ce0.read();
    } else {
        conv1_weight_buf_14_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_14_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_14_ce1 = grp_biconv16_fu_3801_weights_14_V_ce1.read();
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln106_reg_22023.read()))) {
        conv1_weight_buf_14_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_14_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_15_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_15_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6066_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_15_address0 = grp_biconv16_fu_3801_weights_15_V_address0.read();
    } else {
        conv1_weight_buf_15_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_15_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_15_ce0 = grp_biconv16_fu_3801_weights_15_V_ce0.read();
    } else {
        conv1_weight_buf_15_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_15_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_15_ce1 = grp_biconv16_fu_3801_weights_15_V_ce1.read();
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln106_reg_22023.read()))) {
        conv1_weight_buf_15_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_15_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_1_s_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_1_s_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6066_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_1_s_address0 = grp_biconv16_fu_3801_weights_1_V_address0.read();
    } else {
        conv1_weight_buf_1_s_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_1_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_1_s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_1_s_ce0 = grp_biconv16_fu_3801_weights_1_V_ce0.read();
    } else {
        conv1_weight_buf_1_s_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_1_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_1_s_ce1 = grp_biconv16_fu_3801_weights_1_V_ce1.read();
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln106_reg_22023.read()))) {
        conv1_weight_buf_1_s_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_1_s_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_2_s_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_2_s_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6066_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_2_s_address0 = grp_biconv16_fu_3801_weights_2_V_address0.read();
    } else {
        conv1_weight_buf_2_s_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_2_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_2_s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_2_s_ce0 = grp_biconv16_fu_3801_weights_2_V_ce0.read();
    } else {
        conv1_weight_buf_2_s_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_2_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_2_s_ce1 = grp_biconv16_fu_3801_weights_2_V_ce1.read();
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln106_reg_22023.read()))) {
        conv1_weight_buf_2_s_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_2_s_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_3_s_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_3_s_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6066_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_3_s_address0 = grp_biconv16_fu_3801_weights_3_V_address0.read();
    } else {
        conv1_weight_buf_3_s_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_3_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_3_s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_3_s_ce0 = grp_biconv16_fu_3801_weights_3_V_ce0.read();
    } else {
        conv1_weight_buf_3_s_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_3_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_3_s_ce1 = grp_biconv16_fu_3801_weights_3_V_ce1.read();
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln106_reg_22023.read()))) {
        conv1_weight_buf_3_s_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_3_s_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_4_s_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_4_s_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6066_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_4_s_address0 = grp_biconv16_fu_3801_weights_4_V_address0.read();
    } else {
        conv1_weight_buf_4_s_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_4_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_4_s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_4_s_ce0 = grp_biconv16_fu_3801_weights_4_V_ce0.read();
    } else {
        conv1_weight_buf_4_s_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_4_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_4_s_ce1 = grp_biconv16_fu_3801_weights_4_V_ce1.read();
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln106_reg_22023.read()))) {
        conv1_weight_buf_4_s_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_4_s_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_5_s_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_5_s_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6066_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_5_s_address0 = grp_biconv16_fu_3801_weights_5_V_address0.read();
    } else {
        conv1_weight_buf_5_s_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_5_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_5_s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_5_s_ce0 = grp_biconv16_fu_3801_weights_5_V_ce0.read();
    } else {
        conv1_weight_buf_5_s_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_5_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_5_s_ce1 = grp_biconv16_fu_3801_weights_5_V_ce1.read();
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln106_reg_22023.read()))) {
        conv1_weight_buf_5_s_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_5_s_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_6_s_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_6_s_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6066_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_6_s_address0 = grp_biconv16_fu_3801_weights_6_V_address0.read();
    } else {
        conv1_weight_buf_6_s_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_6_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_6_s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_6_s_ce0 = grp_biconv16_fu_3801_weights_6_V_ce0.read();
    } else {
        conv1_weight_buf_6_s_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_6_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_6_s_ce1 = grp_biconv16_fu_3801_weights_6_V_ce1.read();
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln106_reg_22023.read()))) {
        conv1_weight_buf_6_s_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_6_s_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_7_s_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_7_s_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6066_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_7_s_address0 = grp_biconv16_fu_3801_weights_7_V_address0.read();
    } else {
        conv1_weight_buf_7_s_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_7_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_7_s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_7_s_ce0 = grp_biconv16_fu_3801_weights_7_V_ce0.read();
    } else {
        conv1_weight_buf_7_s_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_7_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_7_s_ce1 = grp_biconv16_fu_3801_weights_7_V_ce1.read();
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln106_reg_22023.read()))) {
        conv1_weight_buf_7_s_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_7_s_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_8_s_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_8_s_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6066_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_8_s_address0 = grp_biconv16_fu_3801_weights_8_V_address0.read();
    } else {
        conv1_weight_buf_8_s_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_8_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_8_s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_8_s_ce0 = grp_biconv16_fu_3801_weights_8_V_ce0.read();
    } else {
        conv1_weight_buf_8_s_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_8_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_8_s_ce1 = grp_biconv16_fu_3801_weights_8_V_ce1.read();
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln106_reg_22023.read()))) {
        conv1_weight_buf_8_s_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_8_s_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_9_s_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        conv1_weight_buf_9_s_address0 =  (sc_lv<4>) (sext_ln321_16_fu_6066_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_9_s_address0 = grp_biconv16_fu_3801_weights_9_V_address0.read();
    } else {
        conv1_weight_buf_9_s_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ResNet::thread_conv1_weight_buf_9_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv1_weight_buf_9_s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_9_s_ce0 = grp_biconv16_fu_3801_weights_9_V_ce0.read();
    } else {
        conv1_weight_buf_9_s_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_conv1_weight_buf_9_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv1_weight_buf_9_s_ce1 = grp_biconv16_fu_3801_weights_9_V_ce1.read();
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln106_reg_22023.read()))) {
        conv1_weight_buf_9_s_we0 = ap_const_logic_1;
    } else {
        conv1_weight_buf_9_s_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_coo_1_fu_11515_p2() {
    coo_1_fu_11515_p2 = (!coo39_0_reg_2693.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(coo39_0_reg_2693.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_coo_2_fu_11596_p2() {
    coo_2_fu_11596_p2 = (!coo45_0_reg_2763.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(coo45_0_reg_2763.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_coo_fu_11434_p2() {
    coo_fu_11434_p2 = (!coo_0_reg_2623.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(coo_0_reg_2623.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_fm_buf_V_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_0_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_0_address0 =  (sc_lv<11>) (zext_ln203_3_fu_6716_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_0_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_0_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_0_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_0_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_0_address0.read();
    } else {
        fm_buf_V_0_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_0_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_0_address1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_0_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_0_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_0_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_0_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_0_address1.read();
    } else {
        fm_buf_V_0_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        fm_buf_V_0_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_0_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_0_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_0_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_0_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_0_ce0.read();
    } else {
        fm_buf_V_0_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_0_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_0_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_0_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_0_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_0_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_0_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_0_ce1.read();
    } else {
        fm_buf_V_0_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_0_d0() {
    fm_buf_V_0_d0 = (!or_ln340_265_fu_6986_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_265_fu_6986_p2.read()[0].to_bool())? select_ln340_fu_6992_p3.read(): select_ln388_fu_7000_p3.read());
}

void ResNet::thread_fm_buf_V_0_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_0_d1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_0_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_0_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_0_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_0_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_0_d1.read();
    } else {
        fm_buf_V_0_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln119_reg_22129.read()))) {
        fm_buf_V_0_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_0_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_0_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_0_we1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_0_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_0_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_0_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_0_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_0_we1.read();
    } else {
        fm_buf_V_0_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_10_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_10_address0 =  (sc_lv<11>) (zext_ln203_3_fu_6716_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_10_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_10_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_10_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_10_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_10_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_10_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_10_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_10_address0.read();
    } else {
        fm_buf_V_10_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_10_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_10_address1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_10_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_10_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_10_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_10_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_10_address1.read();
    } else {
        fm_buf_V_10_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        fm_buf_V_10_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_10_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_10_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_10_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_10_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_10_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_10_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_10_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_10_ce0.read();
    } else {
        fm_buf_V_10_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_10_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_10_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_10_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_10_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_10_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_10_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_10_ce1.read();
    } else {
        fm_buf_V_10_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_10_d0() {
    fm_buf_V_10_d0 = (!or_ln340_285_fu_9796_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_285_fu_9796_p2.read()[0].to_bool())? select_ln340_10_fu_9802_p3.read(): select_ln388_10_fu_9810_p3.read());
}

void ResNet::thread_fm_buf_V_10_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_10_d1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_10_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_10_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_10_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_10_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_10_d1.read();
    } else {
        fm_buf_V_10_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln119_reg_22129.read()))) {
        fm_buf_V_10_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_10_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_10_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_10_we1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_10_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_10_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_10_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_10_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_10_we1.read();
    } else {
        fm_buf_V_10_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_11_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_11_address0 =  (sc_lv<11>) (zext_ln203_3_fu_6716_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_11_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_11_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_11_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_11_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_11_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_11_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_11_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_11_address0.read();
    } else {
        fm_buf_V_11_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_11_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_11_address1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_11_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_11_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_11_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_11_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_11_address1.read();
    } else {
        fm_buf_V_11_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        fm_buf_V_11_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_11_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_11_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_11_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_11_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_11_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_11_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_11_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_11_ce0.read();
    } else {
        fm_buf_V_11_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_11_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_11_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_11_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_11_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_11_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_11_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_11_ce1.read();
    } else {
        fm_buf_V_11_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_11_d0() {
    fm_buf_V_11_d0 = (!or_ln340_287_fu_10077_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_287_fu_10077_p2.read()[0].to_bool())? select_ln340_11_fu_10083_p3.read(): select_ln388_11_fu_10091_p3.read());
}

void ResNet::thread_fm_buf_V_11_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_11_d1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_11_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_11_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_11_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_11_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_11_d1.read();
    } else {
        fm_buf_V_11_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln119_reg_22129.read()))) {
        fm_buf_V_11_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_11_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_11_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_11_we1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_11_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_11_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_11_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_11_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_11_we1.read();
    } else {
        fm_buf_V_11_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_12_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_12_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_12_address0 =  (sc_lv<11>) (zext_ln203_3_fu_6716_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_12_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_12_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_12_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_12_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_12_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_12_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_12_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_12_address0.read();
    } else {
        fm_buf_V_12_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_12_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_12_address1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_12_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_12_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_12_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_12_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_12_address1.read();
    } else {
        fm_buf_V_12_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_12_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        fm_buf_V_12_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_12_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_12_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_12_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_12_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_12_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_12_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_12_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_12_ce0.read();
    } else {
        fm_buf_V_12_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_12_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_12_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_12_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_12_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_12_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_12_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_12_ce1.read();
    } else {
        fm_buf_V_12_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_12_d0() {
    fm_buf_V_12_d0 = (!or_ln340_289_fu_10358_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_289_fu_10358_p2.read()[0].to_bool())? select_ln340_12_fu_10364_p3.read(): select_ln388_12_fu_10372_p3.read());
}

void ResNet::thread_fm_buf_V_12_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_12_d1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_12_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_12_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_12_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_12_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_12_d1.read();
    } else {
        fm_buf_V_12_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_12_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln119_reg_22129.read()))) {
        fm_buf_V_12_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_12_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_12_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_12_we1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_12_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_12_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_12_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_12_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_12_we1.read();
    } else {
        fm_buf_V_12_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_13_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_13_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_13_address0 =  (sc_lv<11>) (zext_ln203_3_fu_6716_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_13_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_13_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_13_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_13_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_13_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_13_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_13_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_13_address0.read();
    } else {
        fm_buf_V_13_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_13_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_13_address1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_13_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_13_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_13_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_13_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_13_address1.read();
    } else {
        fm_buf_V_13_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_13_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        fm_buf_V_13_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_13_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_13_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_13_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_13_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_13_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_13_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_13_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_13_ce0.read();
    } else {
        fm_buf_V_13_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_13_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_13_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_13_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_13_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_13_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_13_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_13_ce1.read();
    } else {
        fm_buf_V_13_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_13_d0() {
    fm_buf_V_13_d0 = (!or_ln340_291_fu_10639_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_291_fu_10639_p2.read()[0].to_bool())? select_ln340_13_fu_10645_p3.read(): select_ln388_13_fu_10653_p3.read());
}

void ResNet::thread_fm_buf_V_13_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_13_d1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_13_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_13_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_13_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_13_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_13_d1.read();
    } else {
        fm_buf_V_13_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_13_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln119_reg_22129.read()))) {
        fm_buf_V_13_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_13_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_13_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_13_we1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_13_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_13_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_13_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_13_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_13_we1.read();
    } else {
        fm_buf_V_13_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_14_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_14_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_14_address0 =  (sc_lv<11>) (zext_ln203_3_fu_6716_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_14_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_14_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_14_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_14_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_14_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_14_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_14_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_14_address0.read();
    } else {
        fm_buf_V_14_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_14_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_14_address1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_14_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_14_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_14_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_14_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_14_address1.read();
    } else {
        fm_buf_V_14_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_14_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        fm_buf_V_14_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_14_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_14_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_14_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_14_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_14_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_14_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_14_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_14_ce0.read();
    } else {
        fm_buf_V_14_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_14_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_14_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_14_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_14_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_14_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_14_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_14_ce1.read();
    } else {
        fm_buf_V_14_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_14_d0() {
    fm_buf_V_14_d0 = (!or_ln340_293_fu_10920_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_293_fu_10920_p2.read()[0].to_bool())? select_ln340_14_fu_10926_p3.read(): select_ln388_14_fu_10934_p3.read());
}

void ResNet::thread_fm_buf_V_14_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_14_d1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_14_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_14_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_14_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_14_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_14_d1.read();
    } else {
        fm_buf_V_14_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_14_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln119_reg_22129.read()))) {
        fm_buf_V_14_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_14_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_14_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_14_we1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_14_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_14_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_14_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_14_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_14_we1.read();
    } else {
        fm_buf_V_14_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_15_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_15_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_15_address0 =  (sc_lv<11>) (zext_ln203_3_fu_6716_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_15_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_15_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_15_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_15_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_15_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_15_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_15_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_15_address0.read();
    } else {
        fm_buf_V_15_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_15_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_15_address1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_15_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_15_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_15_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_15_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_15_address1.read();
    } else {
        fm_buf_V_15_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        fm_buf_V_15_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_15_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_15_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_15_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_15_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_15_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_15_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_15_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_15_ce0.read();
    } else {
        fm_buf_V_15_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_15_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_15_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_15_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_15_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_15_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_15_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_15_ce1.read();
    } else {
        fm_buf_V_15_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_15_d0() {
    fm_buf_V_15_d0 = (!or_ln340_295_fu_11201_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_295_fu_11201_p2.read()[0].to_bool())? select_ln340_15_fu_11207_p3.read(): select_ln388_15_fu_11215_p3.read());
}

void ResNet::thread_fm_buf_V_15_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_15_d1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_15_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_15_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_15_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_15_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_15_d1.read();
    } else {
        fm_buf_V_15_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_15_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln119_reg_22129.read()))) {
        fm_buf_V_15_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_15_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_15_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_15_we1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_15_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_15_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_15_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_15_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_15_we1.read();
    } else {
        fm_buf_V_15_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_16_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_16_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_16_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_16_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_16_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_16_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_16_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_16_address0.read();
    } else {
        fm_buf_V_16_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_16_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_16_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_16_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_16_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_16_address1.read();
    } else {
        fm_buf_V_16_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_16_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_16_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_16_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_16_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_16_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_16_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_16_ce0.read();
    } else {
        fm_buf_V_16_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_16_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_16_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_16_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_16_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_16_ce1.read();
    } else {
        fm_buf_V_16_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_16_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_16_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_16_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_16_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_16_d1.read();
    } else {
        fm_buf_V_16_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_16_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_16_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_16_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_16_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_16_we1.read();
    } else {
        fm_buf_V_16_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_17_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_17_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_17_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_17_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_17_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_17_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_17_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_17_address0.read();
    } else {
        fm_buf_V_17_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_17_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_17_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_17_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_17_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_17_address1.read();
    } else {
        fm_buf_V_17_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_17_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_17_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_17_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_17_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_17_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_17_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_17_ce0.read();
    } else {
        fm_buf_V_17_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_17_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_17_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_17_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_17_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_17_ce1.read();
    } else {
        fm_buf_V_17_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_17_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_17_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_17_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_17_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_17_d1.read();
    } else {
        fm_buf_V_17_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_17_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_17_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_17_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_17_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_17_we1.read();
    } else {
        fm_buf_V_17_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_18_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_18_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_18_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_18_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_18_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_18_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_18_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_18_address0.read();
    } else {
        fm_buf_V_18_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_18_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_18_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_18_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_18_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_18_address1.read();
    } else {
        fm_buf_V_18_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_18_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_18_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_18_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_18_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_18_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_18_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_18_ce0.read();
    } else {
        fm_buf_V_18_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_18_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_18_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_18_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_18_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_18_ce1.read();
    } else {
        fm_buf_V_18_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_18_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_18_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_18_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_18_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_18_d1.read();
    } else {
        fm_buf_V_18_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_18_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_18_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_18_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_18_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_18_we1.read();
    } else {
        fm_buf_V_18_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_19_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_19_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_19_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_19_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_19_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_19_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_19_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_19_address0.read();
    } else {
        fm_buf_V_19_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_19_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_19_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_19_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_19_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_19_address1.read();
    } else {
        fm_buf_V_19_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_19_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_19_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_19_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_19_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_19_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_19_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_19_ce0.read();
    } else {
        fm_buf_V_19_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_19_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_19_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_19_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_19_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_19_ce1.read();
    } else {
        fm_buf_V_19_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_19_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_19_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_19_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_19_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_19_d1.read();
    } else {
        fm_buf_V_19_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_19_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_19_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_19_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_19_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_19_we1.read();
    } else {
        fm_buf_V_19_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_1_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_1_address0 =  (sc_lv<11>) (zext_ln203_3_fu_6716_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_1_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_1_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_1_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_1_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_1_address0.read();
    } else {
        fm_buf_V_1_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_1_address1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_1_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_1_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_1_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_1_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_1_address1.read();
    } else {
        fm_buf_V_1_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        fm_buf_V_1_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_1_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_1_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_1_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_1_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_1_ce0.read();
    } else {
        fm_buf_V_1_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_1_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_1_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_1_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_1_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_1_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_1_ce1.read();
    } else {
        fm_buf_V_1_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_1_d0() {
    fm_buf_V_1_d0 = (!or_ln340_267_fu_7267_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_267_fu_7267_p2.read()[0].to_bool())? select_ln340_1_fu_7273_p3.read(): select_ln388_1_fu_7281_p3.read());
}

void ResNet::thread_fm_buf_V_1_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_1_d1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_1_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_1_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_1_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_1_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_1_d1.read();
    } else {
        fm_buf_V_1_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln119_reg_22129.read()))) {
        fm_buf_V_1_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_1_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_1_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_1_we1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_1_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_1_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_1_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_1_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_1_we1.read();
    } else {
        fm_buf_V_1_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_20_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_20_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_20_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_20_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_20_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_20_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_20_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_20_address0.read();
    } else {
        fm_buf_V_20_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_20_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_20_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_20_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_20_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_20_address1.read();
    } else {
        fm_buf_V_20_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_20_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_20_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_20_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_20_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_20_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_20_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_20_ce0.read();
    } else {
        fm_buf_V_20_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_20_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_20_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_20_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_20_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_20_ce1.read();
    } else {
        fm_buf_V_20_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_20_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_20_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_20_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_20_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_20_d1.read();
    } else {
        fm_buf_V_20_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_20_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_20_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_20_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_20_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_20_we1.read();
    } else {
        fm_buf_V_20_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_21_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_21_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_21_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_21_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_21_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_21_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_21_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_21_address0.read();
    } else {
        fm_buf_V_21_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_21_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_21_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_21_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_21_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_21_address1.read();
    } else {
        fm_buf_V_21_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_21_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_21_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_21_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_21_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_21_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_21_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_21_ce0.read();
    } else {
        fm_buf_V_21_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_21_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_21_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_21_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_21_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_21_ce1.read();
    } else {
        fm_buf_V_21_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_21_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_21_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_21_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_21_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_21_d1.read();
    } else {
        fm_buf_V_21_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_21_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_21_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_21_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_21_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_21_we1.read();
    } else {
        fm_buf_V_21_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_22_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_22_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_22_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_22_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_22_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_22_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_22_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_22_address0.read();
    } else {
        fm_buf_V_22_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_22_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_22_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_22_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_22_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_22_address1.read();
    } else {
        fm_buf_V_22_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_22_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_22_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_22_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_22_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_22_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_22_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_22_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_22_ce0.read();
    } else {
        fm_buf_V_22_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_22_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_22_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_22_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_22_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_22_ce1.read();
    } else {
        fm_buf_V_22_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_22_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_22_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_22_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_22_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_22_d1.read();
    } else {
        fm_buf_V_22_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_22_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_22_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_22_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_22_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_22_we1.read();
    } else {
        fm_buf_V_22_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_23_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_23_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_23_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_23_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_23_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_23_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_23_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_23_address0.read();
    } else {
        fm_buf_V_23_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_23_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_23_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_23_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_23_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_23_address1.read();
    } else {
        fm_buf_V_23_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_23_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_23_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_23_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_23_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_23_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_23_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_23_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_23_ce0.read();
    } else {
        fm_buf_V_23_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_23_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_23_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_23_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_23_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_23_ce1.read();
    } else {
        fm_buf_V_23_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_23_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_23_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_23_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_23_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_23_d1.read();
    } else {
        fm_buf_V_23_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_23_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_23_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_23_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_23_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_23_we1.read();
    } else {
        fm_buf_V_23_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_24_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_24_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_24_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_24_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_24_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_24_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_24_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_24_address0.read();
    } else {
        fm_buf_V_24_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_24_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_24_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_24_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_24_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_24_address1.read();
    } else {
        fm_buf_V_24_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_24_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_24_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_24_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_24_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_24_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_24_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_24_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_24_ce0.read();
    } else {
        fm_buf_V_24_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_24_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_24_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_24_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_24_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_24_ce1.read();
    } else {
        fm_buf_V_24_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_24_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_24_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_24_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_24_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_24_d1.read();
    } else {
        fm_buf_V_24_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_24_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_24_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_24_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_24_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_24_we1.read();
    } else {
        fm_buf_V_24_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_25_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_25_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_25_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_25_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_25_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_25_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_25_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_25_address0.read();
    } else {
        fm_buf_V_25_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_25_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_25_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_25_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_25_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_25_address1.read();
    } else {
        fm_buf_V_25_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_25_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_25_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_25_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_25_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_25_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_25_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_25_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_25_ce0.read();
    } else {
        fm_buf_V_25_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_25_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_25_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_25_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_25_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_25_ce1.read();
    } else {
        fm_buf_V_25_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_25_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_25_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_25_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_25_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_25_d1.read();
    } else {
        fm_buf_V_25_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_25_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_25_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_25_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_25_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_25_we1.read();
    } else {
        fm_buf_V_25_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_26_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_26_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_26_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_26_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_26_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_26_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_26_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_26_address0.read();
    } else {
        fm_buf_V_26_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_26_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_26_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_26_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_26_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_26_address1.read();
    } else {
        fm_buf_V_26_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_26_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_26_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_26_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_26_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_26_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_26_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_26_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_26_ce0.read();
    } else {
        fm_buf_V_26_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_26_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_26_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_26_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_26_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_26_ce1.read();
    } else {
        fm_buf_V_26_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_26_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_26_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_26_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_26_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_26_d1.read();
    } else {
        fm_buf_V_26_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_26_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_26_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_26_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_26_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_26_we1.read();
    } else {
        fm_buf_V_26_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_27_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_27_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_27_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_27_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_27_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_27_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_27_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_27_address0.read();
    } else {
        fm_buf_V_27_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_27_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_27_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_27_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_27_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_27_address1.read();
    } else {
        fm_buf_V_27_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_27_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_27_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_27_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_27_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_27_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_27_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_27_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_27_ce0.read();
    } else {
        fm_buf_V_27_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_27_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_27_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_27_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_27_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_27_ce1.read();
    } else {
        fm_buf_V_27_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_27_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_27_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_27_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_27_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_27_d1.read();
    } else {
        fm_buf_V_27_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_27_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_27_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_27_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_27_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_27_we1.read();
    } else {
        fm_buf_V_27_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_28_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_28_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_28_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_28_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_28_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_28_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_28_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_28_address0.read();
    } else {
        fm_buf_V_28_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_28_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_28_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_28_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_28_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_28_address1.read();
    } else {
        fm_buf_V_28_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_28_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_28_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_28_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_28_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_28_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_28_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_28_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_28_ce0.read();
    } else {
        fm_buf_V_28_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_28_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_28_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_28_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_28_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_28_ce1.read();
    } else {
        fm_buf_V_28_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_28_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_28_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_28_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_28_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_28_d1.read();
    } else {
        fm_buf_V_28_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_28_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_28_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_28_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_28_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_28_we1.read();
    } else {
        fm_buf_V_28_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_29_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_29_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_29_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_29_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_29_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_29_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_29_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_29_address0.read();
    } else {
        fm_buf_V_29_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_29_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_29_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_29_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_29_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_29_address1.read();
    } else {
        fm_buf_V_29_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_29_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_29_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_29_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_29_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_29_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_29_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_29_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_29_ce0.read();
    } else {
        fm_buf_V_29_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_29_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_29_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_29_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_29_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_29_ce1.read();
    } else {
        fm_buf_V_29_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_29_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_29_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_29_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_29_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_29_d1.read();
    } else {
        fm_buf_V_29_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_29_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_29_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_29_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_29_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_29_we1.read();
    } else {
        fm_buf_V_29_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_2_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_2_address0 =  (sc_lv<11>) (zext_ln203_3_fu_6716_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_2_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_2_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_2_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_2_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_2_address0.read();
    } else {
        fm_buf_V_2_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_2_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_2_address1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_2_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_2_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_2_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_2_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_2_address1.read();
    } else {
        fm_buf_V_2_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        fm_buf_V_2_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_2_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_2_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_2_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_2_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_2_ce0.read();
    } else {
        fm_buf_V_2_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_2_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_2_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_2_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_2_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_2_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_2_ce1.read();
    } else {
        fm_buf_V_2_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_2_d0() {
    fm_buf_V_2_d0 = (!or_ln340_269_fu_7548_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_269_fu_7548_p2.read()[0].to_bool())? select_ln340_2_fu_7554_p3.read(): select_ln388_2_fu_7562_p3.read());
}

void ResNet::thread_fm_buf_V_2_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_2_d1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_2_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_2_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_2_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_2_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_2_d1.read();
    } else {
        fm_buf_V_2_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln119_reg_22129.read()))) {
        fm_buf_V_2_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_2_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_2_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_2_we1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_2_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_2_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_2_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_2_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_2_we1.read();
    } else {
        fm_buf_V_2_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_30_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_30_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_30_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_30_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_30_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_30_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_30_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_30_address0.read();
    } else {
        fm_buf_V_30_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_30_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_30_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_30_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_30_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_30_address1.read();
    } else {
        fm_buf_V_30_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_30_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_30_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()))) {
        fm_buf_V_30_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_30_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_30_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_30_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_30_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_30_ce0.read();
    } else {
        fm_buf_V_30_ce0 = ap_const_logic_0;
    }
}

}

