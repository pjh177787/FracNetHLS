#include "fill_fm_buf_bn_32u_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void fill_fm_buf_bn_32u_s::thread_ap_clk_no_reset_() {
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
    if (esl_seteq<1,1,1>(ap_condition_792.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,1,1>(icmp_ln45_reg_7713.read(), ap_const_lv1_0) && 
             esl_seteq<1,2,2>(c_cat_read_read_fu_244_p2.read(), ap_const_lv2_3))) {
            ap_phi_reg_pp0_iter2_phi_ln1265_reg_1272 = fm_buf_V_48_q0.read();
        } else if ((esl_seteq<1,1,1>(icmp_ln45_reg_7713.read(), ap_const_lv1_0) && 
                    esl_seteq<1,2,2>(c_cat_read_read_fu_244_p2.read(), ap_const_lv2_2))) {
            ap_phi_reg_pp0_iter2_phi_ln1265_reg_1272 = fm_buf_V_32_q0.read();
        } else if ((esl_seteq<1,1,1>(icmp_ln45_reg_7713.read(), ap_const_lv1_0) && 
                    esl_seteq<1,2,2>(c_cat_read_read_fu_244_p2.read(), ap_const_lv2_1))) {
            ap_phi_reg_pp0_iter2_phi_ln1265_reg_1272 = fm_buf_V_16_q0.read();
        } else if ((esl_seteq<1,1,1>(icmp_ln45_reg_7713.read(), ap_const_lv1_0) && 
                    esl_seteq<1,2,2>(c_cat_read_read_fu_244_p2.read(), ap_const_lv2_0))) {
            ap_phi_reg_pp0_iter2_phi_ln1265_reg_1272 = fm_buf_V_0_q0.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln1265_reg_1272 = ap_phi_reg_pp0_iter1_phi_ln1265_reg_1272.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln45_fu_1323_p2.read(), ap_const_lv1_0))) {
        bcol_0_reg_1261 = bcol_fu_1510_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        bcol_0_reg_1261 = ap_const_lv4_1;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln45_reg_7713.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        brow_0_reg_1250 = select_ln52_2_reg_7722.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        brow_0_reg_1250 = ap_const_lv4_1;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln45_fu_1323_p2.read(), ap_const_lv1_0))) {
        indvar_flatten_reg_1239 = add_ln45_fu_1329_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvar_flatten_reg_1239 = ap_const_lv7_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        add_ln1265_reg_7689 = add_ln1265_fu_1313_p2.read();
        trunc_ln45_reg_7694 = trunc_ln45_fu_1319_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        ap_phi_reg_pp0_iter1_phi_ln1265_reg_1272 = ap_phi_reg_pp0_iter0_phi_ln1265_reg_1272.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln45_fu_1323_p2.read(), ap_const_lv1_0))) {
        fm_buf_V_0_addr_reg_7746 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_10_addr_reg_7758 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_11_addr_reg_7764 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_12_addr_reg_7770 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_13_addr_reg_7776 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_14_addr_reg_7782 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_15_addr_reg_7788 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_16_addr_reg_7794 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_17_addr_reg_7800 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_18_addr_reg_7806 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_19_addr_reg_7812 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_1_addr_reg_7752 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_20_addr_reg_7824 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_21_addr_reg_7830 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_22_addr_reg_7836 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_23_addr_reg_7842 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_24_addr_reg_7848 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_25_addr_reg_7854 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_26_addr_reg_7860 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_27_addr_reg_7866 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_28_addr_reg_7872 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_29_addr_reg_7878 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_2_addr_reg_7818 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_30_addr_reg_7890 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_31_addr_reg_7896 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_3_addr_reg_7884 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_48_addr_reg_7913 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_4_addr_reg_7907 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_5_addr_reg_7919 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_6_addr_reg_7925 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_7_addr_reg_7931 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_8_addr_reg_7937 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        fm_buf_V_9_addr_reg_7943 =  (sc_lv<11>) (zext_ln1265_12_fu_1446_p1.read());
        zext_ln1265_12_reg_7727 = zext_ln1265_12_fu_1446_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        fm_buf_V_0_addr_reg_7746_pp0_iter1_reg = fm_buf_V_0_addr_reg_7746.read();
        fm_buf_V_10_addr_reg_7758_pp0_iter1_reg = fm_buf_V_10_addr_reg_7758.read();
        fm_buf_V_11_addr_reg_7764_pp0_iter1_reg = fm_buf_V_11_addr_reg_7764.read();
        fm_buf_V_12_addr_reg_7770_pp0_iter1_reg = fm_buf_V_12_addr_reg_7770.read();
        fm_buf_V_13_addr_reg_7776_pp0_iter1_reg = fm_buf_V_13_addr_reg_7776.read();
        fm_buf_V_14_addr_reg_7782_pp0_iter1_reg = fm_buf_V_14_addr_reg_7782.read();
        fm_buf_V_15_addr_reg_7788_pp0_iter1_reg = fm_buf_V_15_addr_reg_7788.read();
        fm_buf_V_16_addr_reg_7794_pp0_iter1_reg = fm_buf_V_16_addr_reg_7794.read();
        fm_buf_V_17_addr_reg_7800_pp0_iter1_reg = fm_buf_V_17_addr_reg_7800.read();
        fm_buf_V_18_addr_reg_7806_pp0_iter1_reg = fm_buf_V_18_addr_reg_7806.read();
        fm_buf_V_19_addr_reg_7812_pp0_iter1_reg = fm_buf_V_19_addr_reg_7812.read();
        fm_buf_V_1_addr_reg_7752_pp0_iter1_reg = fm_buf_V_1_addr_reg_7752.read();
        fm_buf_V_20_addr_reg_7824_pp0_iter1_reg = fm_buf_V_20_addr_reg_7824.read();
        fm_buf_V_21_addr_reg_7830_pp0_iter1_reg = fm_buf_V_21_addr_reg_7830.read();
        fm_buf_V_22_addr_reg_7836_pp0_iter1_reg = fm_buf_V_22_addr_reg_7836.read();
        fm_buf_V_23_addr_reg_7842_pp0_iter1_reg = fm_buf_V_23_addr_reg_7842.read();
        fm_buf_V_24_addr_reg_7848_pp0_iter1_reg = fm_buf_V_24_addr_reg_7848.read();
        fm_buf_V_25_addr_reg_7854_pp0_iter1_reg = fm_buf_V_25_addr_reg_7854.read();
        fm_buf_V_26_addr_reg_7860_pp0_iter1_reg = fm_buf_V_26_addr_reg_7860.read();
        fm_buf_V_27_addr_reg_7866_pp0_iter1_reg = fm_buf_V_27_addr_reg_7866.read();
        fm_buf_V_28_addr_reg_7872_pp0_iter1_reg = fm_buf_V_28_addr_reg_7872.read();
        fm_buf_V_29_addr_reg_7878_pp0_iter1_reg = fm_buf_V_29_addr_reg_7878.read();
        fm_buf_V_2_addr_reg_7818_pp0_iter1_reg = fm_buf_V_2_addr_reg_7818.read();
        fm_buf_V_30_addr_reg_7890_pp0_iter1_reg = fm_buf_V_30_addr_reg_7890.read();
        fm_buf_V_31_addr_reg_7896_pp0_iter1_reg = fm_buf_V_31_addr_reg_7896.read();
        fm_buf_V_3_addr_reg_7884_pp0_iter1_reg = fm_buf_V_3_addr_reg_7884.read();
        fm_buf_V_48_addr_reg_7913_pp0_iter1_reg = fm_buf_V_48_addr_reg_7913.read();
        fm_buf_V_4_addr_reg_7907_pp0_iter1_reg = fm_buf_V_4_addr_reg_7907.read();
        fm_buf_V_5_addr_reg_7919_pp0_iter1_reg = fm_buf_V_5_addr_reg_7919.read();
        fm_buf_V_6_addr_reg_7925_pp0_iter1_reg = fm_buf_V_6_addr_reg_7925.read();
        fm_buf_V_7_addr_reg_7931_pp0_iter1_reg = fm_buf_V_7_addr_reg_7931.read();
        fm_buf_V_8_addr_reg_7937_pp0_iter1_reg = fm_buf_V_8_addr_reg_7937.read();
        fm_buf_V_9_addr_reg_7943_pp0_iter1_reg = fm_buf_V_9_addr_reg_7943.read();
        icmp_ln45_reg_7713 = icmp_ln45_fu_1323_p2.read();
        select_ln340_100_reg_8072 = select_ln340_100_fu_1799_p3.read();
        select_ln340_102_reg_8078 = select_ln340_102_fu_1896_p3.read();
        select_ln340_104_reg_8084 = select_ln340_104_fu_1993_p3.read();
        select_ln340_106_reg_8090 = select_ln340_106_fu_2090_p3.read();
        select_ln340_108_reg_8096 = select_ln340_108_fu_2187_p3.read();
        select_ln340_110_reg_8102 = select_ln340_110_fu_2284_p3.read();
        select_ln340_112_reg_8108 = select_ln340_112_fu_2381_p3.read();
        select_ln340_114_reg_8114 = select_ln340_114_fu_2478_p3.read();
        select_ln340_116_reg_8120 = select_ln340_116_fu_2575_p3.read();
        select_ln340_118_reg_8126 = select_ln340_118_fu_2672_p3.read();
        select_ln340_120_reg_8132 = select_ln340_120_fu_2769_p3.read();
        select_ln340_122_reg_8138 = select_ln340_122_fu_2866_p3.read();
        select_ln340_124_reg_8144 = select_ln340_124_fu_2963_p3.read();
        select_ln340_96_reg_8060 = select_ln340_96_fu_1605_p3.read();
        select_ln340_98_reg_8066 = select_ln340_98_fu_1702_p3.read();
        zext_ln1265_12_reg_7727_pp0_iter1_reg = zext_ln1265_12_reg_7727.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln45_reg_7713.read(), ap_const_lv1_0))) {
        out_buf0_V_0_load_reg_8034 = out_buf0_V_0_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(icmp_ln45_fu_1323_p2.read(), ap_const_lv1_0))) {
        select_ln52_2_reg_7722 = select_ln52_2_fu_1355_p3.read();
    }
}

void fill_fm_buf_bn_32u_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln45_fu_1323_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(icmp_ln45_fu_1323_p2.read(), ap_const_lv1_1) && 
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

