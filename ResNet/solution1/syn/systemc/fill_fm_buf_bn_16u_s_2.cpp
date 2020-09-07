#include "fill_fm_buf_bn_16u_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void fill_fm_buf_bn_16u_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read())) {
                ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state2.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
            }
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter2 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln45_fu_751_p2.read(), ap_const_lv1_0))) {
        bcol_0_reg_688 = bcol_fu_920_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        bcol_0_reg_688 = ap_const_lv4_1;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln45_reg_6963.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        brow_0_reg_677 = select_ln52_3_reg_6972.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        brow_0_reg_677 = ap_const_lv4_1;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln45_fu_751_p2.read(), ap_const_lv1_0))) {
        indvar_flatten_reg_666 = add_ln45_fu_757_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvar_flatten_reg_666 = ap_const_lv7_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        add_ln1265_7_reg_6958 = add_ln1265_7_fu_745_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln45_fu_751_p2.read(), ap_const_lv1_0))) {
        fm_buf_V_0_addr_reg_6977 =  (sc_lv<11>) (zext_ln1265_21_fu_874_p1.read());
        fm_buf_V_10_addr_reg_6989 =  (sc_lv<11>) (zext_ln1265_21_fu_874_p1.read());
        fm_buf_V_11_addr_reg_6995 =  (sc_lv<11>) (zext_ln1265_21_fu_874_p1.read());
        fm_buf_V_12_addr_reg_7001 =  (sc_lv<11>) (zext_ln1265_21_fu_874_p1.read());
        fm_buf_V_13_addr_reg_7007 =  (sc_lv<11>) (zext_ln1265_21_fu_874_p1.read());
        fm_buf_V_14_addr_reg_7013 =  (sc_lv<11>) (zext_ln1265_21_fu_874_p1.read());
        fm_buf_V_15_addr_reg_7019 =  (sc_lv<11>) (zext_ln1265_21_fu_874_p1.read());
        fm_buf_V_1_addr_reg_6983 =  (sc_lv<11>) (zext_ln1265_21_fu_874_p1.read());
        fm_buf_V_2_addr_reg_7025 =  (sc_lv<11>) (zext_ln1265_21_fu_874_p1.read());
        fm_buf_V_3_addr_reg_7031 =  (sc_lv<11>) (zext_ln1265_21_fu_874_p1.read());
        fm_buf_V_4_addr_reg_7037 =  (sc_lv<11>) (zext_ln1265_21_fu_874_p1.read());
        fm_buf_V_5_addr_reg_7043 =  (sc_lv<11>) (zext_ln1265_21_fu_874_p1.read());
        fm_buf_V_6_addr_reg_7049 =  (sc_lv<11>) (zext_ln1265_21_fu_874_p1.read());
        fm_buf_V_7_addr_reg_7055 =  (sc_lv<11>) (zext_ln1265_21_fu_874_p1.read());
        fm_buf_V_8_addr_reg_7061 =  (sc_lv<11>) (zext_ln1265_21_fu_874_p1.read());
        fm_buf_V_9_addr_reg_7067 =  (sc_lv<11>) (zext_ln1265_21_fu_874_p1.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        fm_buf_V_0_addr_reg_6977_pp0_iter1_reg = fm_buf_V_0_addr_reg_6977.read();
        fm_buf_V_10_addr_reg_6989_pp0_iter1_reg = fm_buf_V_10_addr_reg_6989.read();
        fm_buf_V_11_addr_reg_6995_pp0_iter1_reg = fm_buf_V_11_addr_reg_6995.read();
        fm_buf_V_12_addr_reg_7001_pp0_iter1_reg = fm_buf_V_12_addr_reg_7001.read();
        fm_buf_V_13_addr_reg_7007_pp0_iter1_reg = fm_buf_V_13_addr_reg_7007.read();
        fm_buf_V_14_addr_reg_7013_pp0_iter1_reg = fm_buf_V_14_addr_reg_7013.read();
        fm_buf_V_15_addr_reg_7019_pp0_iter1_reg = fm_buf_V_15_addr_reg_7019.read();
        fm_buf_V_1_addr_reg_6983_pp0_iter1_reg = fm_buf_V_1_addr_reg_6983.read();
        fm_buf_V_2_addr_reg_7025_pp0_iter1_reg = fm_buf_V_2_addr_reg_7025.read();
        fm_buf_V_3_addr_reg_7031_pp0_iter1_reg = fm_buf_V_3_addr_reg_7031.read();
        fm_buf_V_4_addr_reg_7037_pp0_iter1_reg = fm_buf_V_4_addr_reg_7037.read();
        fm_buf_V_5_addr_reg_7043_pp0_iter1_reg = fm_buf_V_5_addr_reg_7043.read();
        fm_buf_V_6_addr_reg_7049_pp0_iter1_reg = fm_buf_V_6_addr_reg_7049.read();
        fm_buf_V_7_addr_reg_7055_pp0_iter1_reg = fm_buf_V_7_addr_reg_7055.read();
        fm_buf_V_8_addr_reg_7061_pp0_iter1_reg = fm_buf_V_8_addr_reg_7061.read();
        fm_buf_V_9_addr_reg_7067_pp0_iter1_reg = fm_buf_V_9_addr_reg_7067.read();
        icmp_ln45_reg_6963 = icmp_ln45_fu_751_p2.read();
        icmp_ln45_reg_6963_pp0_iter1_reg = icmp_ln45_reg_6963.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln45_reg_6963.read(), ap_const_lv1_0))) {
        select_ln340_126_reg_7158 = select_ln340_126_fu_1008_p3.read();
        select_ln340_128_reg_7164 = select_ln340_128_fu_1098_p3.read();
        select_ln340_130_reg_7170 = select_ln340_130_fu_1188_p3.read();
        select_ln340_132_reg_7176 = select_ln340_132_fu_1278_p3.read();
        select_ln340_134_reg_7182 = select_ln340_134_fu_1368_p3.read();
        select_ln340_136_reg_7188 = select_ln340_136_fu_1458_p3.read();
        select_ln340_138_reg_7194 = select_ln340_138_fu_1548_p3.read();
        select_ln340_140_reg_7200 = select_ln340_140_fu_1638_p3.read();
        select_ln340_142_reg_7206 = select_ln340_142_fu_1728_p3.read();
        select_ln340_144_reg_7212 = select_ln340_144_fu_1818_p3.read();
        select_ln340_146_reg_7218 = select_ln340_146_fu_1908_p3.read();
        select_ln340_148_reg_7224 = select_ln340_148_fu_1998_p3.read();
        select_ln340_150_reg_7230 = select_ln340_150_fu_2088_p3.read();
        select_ln340_152_reg_7236 = select_ln340_152_fu_2178_p3.read();
        select_ln340_154_reg_7242 = select_ln340_154_fu_2268_p3.read();
        select_ln340_156_reg_7248 = select_ln340_156_fu_2358_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(icmp_ln45_fu_751_p2.read(), ap_const_lv1_0))) {
        select_ln52_3_reg_6972 = select_ln52_3_fu_783_p3.read();
    }
}

void fill_fm_buf_bn_16u_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln45_fu_751_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(icmp_ln45_fu_751_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}

