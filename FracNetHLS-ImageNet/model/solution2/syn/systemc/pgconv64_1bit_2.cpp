#include "pgconv64_1bit.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pgconv64_1bit::thread_ap_clk_no_reset_() {
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
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter4 = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_subdone.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_subdone.read(), ap_const_boolean_0)))) {
            ap_enable_reg_pp0_iter4 = ap_enable_reg_pp0_iter3.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter4 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        col0_0_reg_4535 = col_reg_10158.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        col0_0_reg_4535 = ap_const_lv3_0;
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4546_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4546_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4546_ap_ready.read())) {
            grp_compute_engine_64_fu_4546_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4555_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4555_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4555_ap_ready.read())) {
            grp_compute_engine_64_fu_4555_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4564_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4564_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4564_ap_ready.read())) {
            grp_compute_engine_64_fu_4564_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4573_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4573_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4573_ap_ready.read())) {
            grp_compute_engine_64_fu_4573_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4582_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4582_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4582_ap_ready.read())) {
            grp_compute_engine_64_fu_4582_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4591_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4591_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4591_ap_ready.read())) {
            grp_compute_engine_64_fu_4591_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4600_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4600_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4600_ap_ready.read())) {
            grp_compute_engine_64_fu_4600_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4609_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4609_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4609_ap_ready.read())) {
            grp_compute_engine_64_fu_4609_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4618_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4618_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4618_ap_ready.read())) {
            grp_compute_engine_64_fu_4618_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4627_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4627_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4627_ap_ready.read())) {
            grp_compute_engine_64_fu_4627_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4636_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4636_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4636_ap_ready.read())) {
            grp_compute_engine_64_fu_4636_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4645_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4645_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4645_ap_ready.read())) {
            grp_compute_engine_64_fu_4645_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4654_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4654_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4654_ap_ready.read())) {
            grp_compute_engine_64_fu_4654_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4663_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4663_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4663_ap_ready.read())) {
            grp_compute_engine_64_fu_4663_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4672_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4672_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4672_ap_ready.read())) {
            grp_compute_engine_64_fu_4672_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4681_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4681_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4681_ap_ready.read())) {
            grp_compute_engine_64_fu_4681_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4690_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4690_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4690_ap_ready.read())) {
            grp_compute_engine_64_fu_4690_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4699_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4699_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4699_ap_ready.read())) {
            grp_compute_engine_64_fu_4699_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4708_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4708_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4708_ap_ready.read())) {
            grp_compute_engine_64_fu_4708_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4717_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4717_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4717_ap_ready.read())) {
            grp_compute_engine_64_fu_4717_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4726_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4726_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4726_ap_ready.read())) {
            grp_compute_engine_64_fu_4726_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4735_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4735_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4735_ap_ready.read())) {
            grp_compute_engine_64_fu_4735_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4744_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4744_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4744_ap_ready.read())) {
            grp_compute_engine_64_fu_4744_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4753_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4753_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4753_ap_ready.read())) {
            grp_compute_engine_64_fu_4753_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4762_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4762_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4762_ap_ready.read())) {
            grp_compute_engine_64_fu_4762_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4771_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4771_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4771_ap_ready.read())) {
            grp_compute_engine_64_fu_4771_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4780_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4780_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4780_ap_ready.read())) {
            grp_compute_engine_64_fu_4780_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4789_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4789_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4789_ap_ready.read())) {
            grp_compute_engine_64_fu_4789_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4798_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4798_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4798_ap_ready.read())) {
            grp_compute_engine_64_fu_4798_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4807_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4807_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4807_ap_ready.read())) {
            grp_compute_engine_64_fu_4807_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4816_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4816_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4816_ap_ready.read())) {
            grp_compute_engine_64_fu_4816_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4825_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4825_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4825_ap_ready.read())) {
            grp_compute_engine_64_fu_4825_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4855_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4855_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4855_ap_ready.read())) {
            grp_compute_engine_64_fu_4855_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4864_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4864_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4864_ap_ready.read())) {
            grp_compute_engine_64_fu_4864_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4872_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4872_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4872_ap_ready.read())) {
            grp_compute_engine_64_fu_4872_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4881_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4881_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4881_ap_ready.read())) {
            grp_compute_engine_64_fu_4881_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4890_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4890_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4890_ap_ready.read())) {
            grp_compute_engine_64_fu_4890_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4898_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4898_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4898_ap_ready.read())) {
            grp_compute_engine_64_fu_4898_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4907_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4907_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4907_ap_ready.read())) {
            grp_compute_engine_64_fu_4907_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4916_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4916_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4916_ap_ready.read())) {
            grp_compute_engine_64_fu_4916_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4924_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4924_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4924_ap_ready.read())) {
            grp_compute_engine_64_fu_4924_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4933_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4933_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4933_ap_ready.read())) {
            grp_compute_engine_64_fu_4933_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4942_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4942_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4942_ap_ready.read())) {
            grp_compute_engine_64_fu_4942_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4950_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4950_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4950_ap_ready.read())) {
            grp_compute_engine_64_fu_4950_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4959_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4959_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4959_ap_ready.read())) {
            grp_compute_engine_64_fu_4959_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4968_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4968_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4968_ap_ready.read())) {
            grp_compute_engine_64_fu_4968_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4976_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4976_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4976_ap_ready.read())) {
            grp_compute_engine_64_fu_4976_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4985_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4985_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4985_ap_ready.read())) {
            grp_compute_engine_64_fu_4985_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_4994_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_4994_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_4994_ap_ready.read())) {
            grp_compute_engine_64_fu_4994_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_5002_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_5002_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_5002_ap_ready.read())) {
            grp_compute_engine_64_fu_5002_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_5011_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_5011_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_5011_ap_ready.read())) {
            grp_compute_engine_64_fu_5011_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_5020_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_5020_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_5020_ap_ready.read())) {
            grp_compute_engine_64_fu_5020_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_5028_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_5028_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_5028_ap_ready.read())) {
            grp_compute_engine_64_fu_5028_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_5037_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_5037_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_5037_ap_ready.read())) {
            grp_compute_engine_64_fu_5037_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_5046_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_5046_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_5046_ap_ready.read())) {
            grp_compute_engine_64_fu_5046_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_5054_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_5054_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_5054_ap_ready.read())) {
            grp_compute_engine_64_fu_5054_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_5063_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_5063_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_5063_ap_ready.read())) {
            grp_compute_engine_64_fu_5063_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute_engine_64_fu_5072_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
              esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
            grp_compute_engine_64_fu_5072_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_engine_64_fu_5072_ap_ready.read())) {
            grp_compute_engine_64_fu_5072_ap_start_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        indvar_flatten_reg_4513 = add_ln505_1_reg_10081.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvar_flatten_reg_4513 = ap_const_lv6_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        reg_5779 = weight_buf_3x3_V_28_q1.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        reg_5779 = weight_buf_3x3_V_28_q0.read();
    }
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        row0_0_reg_4524 = select_ln505_9_reg_10153.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        row0_0_reg_4524 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        add_ln505_1_reg_10081 = add_ln505_1_fu_5891_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read()))) {
        add_ln505_reg_10096 = add_ln505_fu_5949_p2.read();
        col_2_reg_10163 = col_2_fu_6085_p3.read();
        select_ln505_1_reg_10086 = select_ln505_1_fu_5941_p3.read();
        select_ln505_2_reg_10104 = select_ln505_2_fu_5961_p3.read();
        select_ln505_3_reg_10111 = select_ln505_3_fu_5975_p3.read();
        select_ln505_4_reg_10118 = select_ln505_4_fu_5989_p3.read();
        select_ln505_5_reg_10125 = select_ln505_5_fu_6003_p3.read();
        select_ln505_6_reg_10132 = select_ln505_6_fu_6017_p3.read();
        select_ln505_7_reg_10139 = select_ln505_7_fu_6031_p3.read();
        select_ln505_8_reg_10146 = select_ln505_8_fu_6045_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()))) {
        bn_bias_V102_load_reg_11466 = bn_bias_V102_q0.read();
        bn_bias_V103_load_reg_11481 = bn_bias_V103_q0.read();
        bn_bias_V104_load_reg_11496 = bn_bias_V104_q0.read();
        bn_bias_V105_load_reg_11511 = bn_bias_V105_q0.read();
        bn_bias_V106_load_reg_11526 = bn_bias_V106_q0.read();
        bn_bias_V107_load_reg_11541 = bn_bias_V107_q0.read();
        bn_bias_V108_load_reg_11556 = bn_bias_V108_q0.read();
        bn_bias_V109_load_reg_11571 = bn_bias_V109_q0.read();
        bn_bias_V110_load_reg_11586 = bn_bias_V110_q0.read();
        bn_bias_V111_load_reg_11601 = bn_bias_V111_q0.read();
        bn_bias_V112_load_reg_11616 = bn_bias_V112_q0.read();
        bn_bias_V113_load_reg_11631 = bn_bias_V113_q0.read();
        bn_bias_V114_load_reg_11646 = bn_bias_V114_q0.read();
        bn_bias_V_load_reg_11451 = bn_bias_V_q0.read();
        bn_weights_V71_load_reg_11461 = bn_weights_V71_q0.read();
        bn_weights_V72_load_reg_11476 = bn_weights_V72_q0.read();
        bn_weights_V73_load_reg_11491 = bn_weights_V73_q0.read();
        bn_weights_V74_load_reg_11506 = bn_weights_V74_q0.read();
        bn_weights_V75_load_reg_11521 = bn_weights_V75_q0.read();
        bn_weights_V76_load_reg_11536 = bn_weights_V76_q0.read();
        bn_weights_V77_load_reg_11551 = bn_weights_V77_q0.read();
        bn_weights_V78_load_reg_11566 = bn_weights_V78_q0.read();
        bn_weights_V79_load_reg_11581 = bn_weights_V79_q0.read();
        bn_weights_V80_load_reg_11596 = bn_weights_V80_q0.read();
        bn_weights_V81_load_reg_11611 = bn_weights_V81_q0.read();
        bn_weights_V82_load_reg_11626 = bn_weights_V82_q0.read();
        bn_weights_V83_load_reg_11641 = bn_weights_V83_q0.read();
        bn_weights_V_load_reg_11446 = bn_weights_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()))) {
        bn_bias_V115_load_reg_12571 = bn_bias_V115_q0.read();
        bn_bias_V116_load_reg_12601 = bn_bias_V116_q0.read();
        bn_bias_V117_load_reg_12631 = bn_bias_V117_q0.read();
        bn_bias_V118_load_reg_12661 = bn_bias_V118_q0.read();
        bn_bias_V119_load_reg_12691 = bn_bias_V119_q0.read();
        bn_bias_V120_load_reg_12721 = bn_bias_V120_q0.read();
        bn_bias_V121_load_reg_12751 = bn_bias_V121_q0.read();
        bn_bias_V122_load_reg_12776 = bn_bias_V122_q0.read();
        bn_bias_V123_load_reg_12786 = bn_bias_V123_q0.read();
        bn_bias_V124_load_reg_12796 = bn_bias_V124_q0.read();
        bn_bias_V125_load_reg_12806 = bn_bias_V125_q0.read();
        bn_bias_V126_load_reg_12816 = bn_bias_V126_q0.read();
        bn_bias_V127_load_reg_12826 = bn_bias_V127_q0.read();
        bn_bias_V128_load_reg_12836 = bn_bias_V128_q0.read();
        bn_bias_V129_load_reg_12846 = bn_bias_V129_q0.read();
        bn_bias_V130_load_reg_12856 = bn_bias_V130_q0.read();
        bn_bias_V131_load_reg_12866 = bn_bias_V131_q0.read();
        bn_bias_V132_load_reg_12876 = bn_bias_V132_q0.read();
        bn_weights_V100_load_reg_12861 = bn_weights_V100_q0.read();
        bn_weights_V101_load_reg_12871 = bn_weights_V101_q0.read();
        bn_weights_V84_load_reg_12566 = bn_weights_V84_q0.read();
        bn_weights_V85_load_reg_12596 = bn_weights_V85_q0.read();
        bn_weights_V86_load_reg_12626 = bn_weights_V86_q0.read();
        bn_weights_V87_load_reg_12656 = bn_weights_V87_q0.read();
        bn_weights_V88_load_reg_12686 = bn_weights_V88_q0.read();
        bn_weights_V89_load_reg_12716 = bn_weights_V89_q0.read();
        bn_weights_V90_load_reg_12746 = bn_weights_V90_q0.read();
        bn_weights_V91_load_reg_12771 = bn_weights_V91_q0.read();
        bn_weights_V92_load_reg_12781 = bn_weights_V92_q0.read();
        bn_weights_V93_load_reg_12791 = bn_weights_V93_q0.read();
        bn_weights_V94_load_reg_12801 = bn_weights_V94_q0.read();
        bn_weights_V95_load_reg_12811 = bn_weights_V95_q0.read();
        bn_weights_V96_load_reg_12821 = bn_weights_V96_q0.read();
        bn_weights_V97_load_reg_12831 = bn_weights_V97_q0.read();
        bn_weights_V98_load_reg_12841 = bn_weights_V98_q0.read();
        bn_weights_V99_load_reg_12851 = bn_weights_V99_q0.read();
        relu_shiftx_V133_loa_reg_12366 = relu_shiftx_V133_q0.read();
        relu_shiftx_V134_loa_reg_12381 = relu_shiftx_V134_q0.read();
        relu_shiftx_V135_loa_reg_12396 = relu_shiftx_V135_q0.read();
        relu_shiftx_V136_loa_reg_12411 = relu_shiftx_V136_q0.read();
        relu_shiftx_V137_loa_reg_12426 = relu_shiftx_V137_q0.read();
        relu_shiftx_V138_loa_reg_12441 = relu_shiftx_V138_q0.read();
        relu_shiftx_V139_loa_reg_12456 = relu_shiftx_V139_q0.read();
        relu_shiftx_V140_loa_reg_12471 = relu_shiftx_V140_q0.read();
        relu_shiftx_V141_loa_reg_12486 = relu_shiftx_V141_q0.read();
        relu_shiftx_V142_loa_reg_12501 = relu_shiftx_V142_q0.read();
        relu_shiftx_V143_loa_reg_12516 = relu_shiftx_V143_q0.read();
        relu_shiftx_V144_loa_reg_12531 = relu_shiftx_V144_q0.read();
        relu_shiftx_V145_loa_reg_12546 = relu_shiftx_V145_q0.read();
        relu_shiftx_V146_loa_reg_12576 = relu_shiftx_V146_q0.read();
        relu_shiftx_V147_loa_reg_12606 = relu_shiftx_V147_q0.read();
        relu_shiftx_V148_loa_reg_12636 = relu_shiftx_V148_q0.read();
        relu_shiftx_V149_loa_reg_12666 = relu_shiftx_V149_q0.read();
        relu_shiftx_V150_loa_reg_12696 = relu_shiftx_V150_q0.read();
        relu_shiftx_V151_loa_reg_12726 = relu_shiftx_V151_q0.read();
        relu_shiftx_V152_loa_reg_12756 = relu_shiftx_V152_q0.read();
        relu_shiftx_V_load_reg_12351 = relu_shiftx_V_q0.read();
        relu_shifty_V164_loa_reg_12371 = relu_shifty_V164_q0.read();
        relu_shifty_V165_loa_reg_12386 = relu_shifty_V165_q0.read();
        relu_shifty_V166_loa_reg_12401 = relu_shifty_V166_q0.read();
        relu_shifty_V167_loa_reg_12416 = relu_shifty_V167_q0.read();
        relu_shifty_V168_loa_reg_12431 = relu_shifty_V168_q0.read();
        relu_shifty_V169_loa_reg_12446 = relu_shifty_V169_q0.read();
        relu_shifty_V170_loa_reg_12461 = relu_shifty_V170_q0.read();
        relu_shifty_V171_loa_reg_12476 = relu_shifty_V171_q0.read();
        relu_shifty_V172_loa_reg_12491 = relu_shifty_V172_q0.read();
        relu_shifty_V173_loa_reg_12506 = relu_shifty_V173_q0.read();
        relu_shifty_V174_loa_reg_12521 = relu_shifty_V174_q0.read();
        relu_shifty_V175_loa_reg_12536 = relu_shifty_V175_q0.read();
        relu_shifty_V176_loa_reg_12551 = relu_shifty_V176_q0.read();
        relu_shifty_V177_loa_reg_12581 = relu_shifty_V177_q0.read();
        relu_shifty_V178_loa_reg_12611 = relu_shifty_V178_q0.read();
        relu_shifty_V179_loa_reg_12641 = relu_shifty_V179_q0.read();
        relu_shifty_V180_loa_reg_12671 = relu_shifty_V180_q0.read();
        relu_shifty_V181_loa_reg_12701 = relu_shifty_V181_q0.read();
        relu_shifty_V182_loa_reg_12731 = relu_shifty_V182_q0.read();
        relu_shifty_V183_loa_reg_12761 = relu_shifty_V183_q0.read();
        relu_shifty_V_load_reg_12356 = relu_shifty_V_q0.read();
        relu_weights_V195_lo_reg_12376 = relu_weights_V195_q0.read();
        relu_weights_V196_lo_reg_12391 = relu_weights_V196_q0.read();
        relu_weights_V197_lo_reg_12406 = relu_weights_V197_q0.read();
        relu_weights_V198_lo_reg_12421 = relu_weights_V198_q0.read();
        relu_weights_V199_lo_reg_12436 = relu_weights_V199_q0.read();
        relu_weights_V200_lo_reg_12451 = relu_weights_V200_q0.read();
        relu_weights_V201_lo_reg_12466 = relu_weights_V201_q0.read();
        relu_weights_V202_lo_reg_12481 = relu_weights_V202_q0.read();
        relu_weights_V203_lo_reg_12496 = relu_weights_V203_q0.read();
        relu_weights_V204_lo_reg_12511 = relu_weights_V204_q0.read();
        relu_weights_V205_lo_reg_12526 = relu_weights_V205_q0.read();
        relu_weights_V206_lo_reg_12541 = relu_weights_V206_q0.read();
        relu_weights_V207_lo_reg_12556 = relu_weights_V207_q0.read();
        relu_weights_V208_lo_reg_12586 = relu_weights_V208_q0.read();
        relu_weights_V209_lo_reg_12616 = relu_weights_V209_q0.read();
        relu_weights_V210_lo_reg_12646 = relu_weights_V210_q0.read();
        relu_weights_V211_lo_reg_12676 = relu_weights_V211_q0.read();
        relu_weights_V212_lo_reg_12706 = relu_weights_V212_q0.read();
        relu_weights_V213_lo_reg_12736 = relu_weights_V213_q0.read();
        relu_weights_V214_lo_reg_12766 = relu_weights_V214_q0.read();
        relu_weights_V_load_reg_12361 = relu_weights_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        col_2_reg_10163_pp0_iter1_reg = col_2_reg_10163.read();
        col_2_reg_10163_pp0_iter2_reg = col_2_reg_10163_pp0_iter1_reg.read();
        icmp_ln505_reg_10077 = icmp_ln505_fu_5886_p2.read();
        icmp_ln505_reg_10077_pp0_iter1_reg = icmp_ln505_reg_10077.read();
        icmp_ln505_reg_10077_pp0_iter2_reg = icmp_ln505_reg_10077_pp0_iter1_reg.read();
        icmp_ln505_reg_10077_pp0_iter3_reg = icmp_ln505_reg_10077_pp0_iter2_reg.read();
        icmp_ln505_reg_10077_pp0_iter4_reg = icmp_ln505_reg_10077_pp0_iter3_reg.read();
        select_ln505_1_reg_10086_pp0_iter1_reg = select_ln505_1_reg_10086.read();
        select_ln505_1_reg_10086_pp0_iter2_reg = select_ln505_1_reg_10086_pp0_iter1_reg.read();
        tmp4_V_0_20_reg_11386_pp0_iter2_reg = tmp4_V_0_20_reg_11386.read();
        tmp4_V_0_21_reg_11391_pp0_iter2_reg = tmp4_V_0_21_reg_11391.read();
        tmp4_V_0_22_reg_11396_pp0_iter2_reg = tmp4_V_0_22_reg_11396.read();
        tmp4_V_0_23_reg_11401_pp0_iter2_reg = tmp4_V_0_23_reg_11401.read();
        tmp4_V_0_24_reg_11406_pp0_iter2_reg = tmp4_V_0_24_reg_11406.read();
        tmp4_V_0_25_reg_11411_pp0_iter2_reg = tmp4_V_0_25_reg_11411.read();
        tmp4_V_0_26_reg_11416_pp0_iter2_reg = tmp4_V_0_26_reg_11416.read();
        tmp4_V_0_27_reg_11421_pp0_iter2_reg = tmp4_V_0_27_reg_11421.read();
        tmp4_V_0_28_reg_11426_pp0_iter2_reg = tmp4_V_0_28_reg_11426.read();
        tmp4_V_0_29_reg_11431_pp0_iter2_reg = tmp4_V_0_29_reg_11431.read();
        tmp4_V_0_30_reg_11436_pp0_iter2_reg = tmp4_V_0_30_reg_11436.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_fu_5886_p2.read()))) {
        col_reg_10158 = col_fu_6061_p2.read();
        select_ln505_9_reg_10153 = select_ln505_9_fu_6053_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        icmp_ln500_reg_9260 = icmp_ln500_fu_5791_p2.read();
        select_ln477_reg_10072 = select_ln477_fu_5805_p3.read();
        select_ln500_reg_9267 = select_ln500_fu_5797_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        p_036_10_reg_10996 = grp_compute_engine_64_fu_4864_ap_return.read();
        p_036_11_reg_11011 = grp_compute_engine_64_fu_4890_ap_return.read();
        p_036_12_reg_11026 = grp_compute_engine_64_fu_4916_ap_return.read();
        p_036_13_reg_11041 = grp_compute_engine_64_fu_4942_ap_return.read();
        p_036_14_reg_11056 = grp_compute_engine_64_fu_4968_ap_return.read();
        p_036_15_reg_11071 = grp_compute_engine_64_fu_4994_ap_return.read();
        p_036_16_reg_11086 = grp_compute_engine_64_fu_5020_ap_return.read();
        p_036_17_reg_11101 = grp_compute_engine_64_fu_5046_ap_return.read();
        p_036_18_reg_11116 = grp_compute_engine_64_fu_5072_ap_return.read();
        p_036_1_reg_10846 = grp_compute_engine_64_fu_4573_ap_return.read();
        p_036_2_reg_10861 = grp_compute_engine_64_fu_4600_ap_return.read();
        p_036_3_reg_10876 = grp_compute_engine_64_fu_4627_ap_return.read();
        p_036_4_reg_10891 = grp_compute_engine_64_fu_4654_ap_return.read();
        p_036_5_reg_10906 = grp_compute_engine_64_fu_4681_ap_return.read();
        p_036_6_reg_10921 = grp_compute_engine_64_fu_4708_ap_return.read();
        p_036_7_reg_10936 = grp_compute_engine_64_fu_4735_ap_return.read();
        p_036_8_reg_10951 = grp_compute_engine_64_fu_4762_ap_return.read();
        p_036_9_reg_10966 = grp_compute_engine_64_fu_4789_ap_return.read();
        p_036_s_reg_10981 = grp_compute_engine_64_fu_4816_ap_return.read();
        p_s_reg_10831 = grp_compute_engine_64_fu_4546_ap_return.read();
        tmp2_V_0_10_reg_11001 = grp_compute_engine_64_fu_4872_ap_return.read();
        tmp2_V_0_11_reg_11016 = grp_compute_engine_64_fu_4898_ap_return.read();
        tmp2_V_0_12_reg_11031 = grp_compute_engine_64_fu_4924_ap_return.read();
        tmp2_V_0_13_reg_11046 = grp_compute_engine_64_fu_4950_ap_return.read();
        tmp2_V_0_14_reg_11061 = grp_compute_engine_64_fu_4976_ap_return.read();
        tmp2_V_0_15_reg_11076 = grp_compute_engine_64_fu_5002_ap_return.read();
        tmp2_V_0_16_reg_11091 = grp_compute_engine_64_fu_5028_ap_return.read();
        tmp2_V_0_17_reg_11106 = grp_compute_engine_64_fu_5054_ap_return.read();
        tmp2_V_0_1_reg_10851 = grp_compute_engine_64_fu_4582_ap_return.read();
        tmp2_V_0_2_reg_10866 = grp_compute_engine_64_fu_4609_ap_return.read();
        tmp2_V_0_3_reg_10881 = grp_compute_engine_64_fu_4636_ap_return.read();
        tmp2_V_0_4_reg_10896 = grp_compute_engine_64_fu_4663_ap_return.read();
        tmp2_V_0_5_reg_10911 = grp_compute_engine_64_fu_4690_ap_return.read();
        tmp2_V_0_6_reg_10926 = grp_compute_engine_64_fu_4717_ap_return.read();
        tmp2_V_0_7_reg_10941 = grp_compute_engine_64_fu_4744_ap_return.read();
        tmp2_V_0_8_reg_10956 = grp_compute_engine_64_fu_4771_ap_return.read();
        tmp2_V_0_9_reg_10971 = grp_compute_engine_64_fu_4798_ap_return.read();
        tmp2_V_0_s_reg_10986 = grp_compute_engine_64_fu_4825_ap_return.read();
        tmp2_V_reg_10836 = grp_compute_engine_64_fu_4555_ap_return.read();
        tmp3_V_0_10_reg_11006 = grp_compute_engine_64_fu_4881_ap_return.read();
        tmp3_V_0_11_reg_11021 = grp_compute_engine_64_fu_4907_ap_return.read();
        tmp3_V_0_12_reg_11036 = grp_compute_engine_64_fu_4933_ap_return.read();
        tmp3_V_0_13_reg_11051 = grp_compute_engine_64_fu_4959_ap_return.read();
        tmp3_V_0_14_reg_11066 = grp_compute_engine_64_fu_4985_ap_return.read();
        tmp3_V_0_15_reg_11081 = grp_compute_engine_64_fu_5011_ap_return.read();
        tmp3_V_0_16_reg_11096 = grp_compute_engine_64_fu_5037_ap_return.read();
        tmp3_V_0_17_reg_11111 = grp_compute_engine_64_fu_5063_ap_return.read();
        tmp3_V_0_1_reg_10856 = grp_compute_engine_64_fu_4591_ap_return.read();
        tmp3_V_0_2_reg_10871 = grp_compute_engine_64_fu_4618_ap_return.read();
        tmp3_V_0_3_reg_10886 = grp_compute_engine_64_fu_4645_ap_return.read();
        tmp3_V_0_4_reg_10901 = grp_compute_engine_64_fu_4672_ap_return.read();
        tmp3_V_0_5_reg_10916 = grp_compute_engine_64_fu_4699_ap_return.read();
        tmp3_V_0_6_reg_10931 = grp_compute_engine_64_fu_4726_ap_return.read();
        tmp3_V_0_7_reg_10946 = grp_compute_engine_64_fu_4753_ap_return.read();
        tmp3_V_0_8_reg_10961 = grp_compute_engine_64_fu_4780_ap_return.read();
        tmp3_V_0_9_reg_10976 = grp_compute_engine_64_fu_4807_ap_return.read();
        tmp3_V_0_s_reg_10991 = grp_compute_engine_64_fu_4855_ap_return.read();
        tmp3_V_reg_10841 = grp_compute_engine_64_fu_4564_ap_return.read();
        weight_buf_3x3_V_29_6_reg_11121 = weight_buf_3x3_V_29_q0.read();
        weight_buf_3x3_V_29_7_reg_11126 = weight_buf_3x3_V_29_q1.read();
        weight_buf_3x3_V_30_6_reg_11131 = weight_buf_3x3_V_30_q0.read();
        weight_buf_3x3_V_30_7_reg_11136 = weight_buf_3x3_V_30_q1.read();
        weight_buf_3x3_V_31_6_reg_11141 = weight_buf_3x3_V_31_q0.read();
        weight_buf_3x3_V_31_7_reg_11146 = weight_buf_3x3_V_31_q1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        p_036_13_reg_11041_pp0_iter1_reg = p_036_13_reg_11041.read();
        p_036_14_reg_11056_pp0_iter1_reg = p_036_14_reg_11056.read();
        p_036_15_reg_11071_pp0_iter1_reg = p_036_15_reg_11071.read();
        p_036_16_reg_11086_pp0_iter1_reg = p_036_16_reg_11086.read();
        p_036_17_reg_11101_pp0_iter1_reg = p_036_17_reg_11101.read();
        p_036_18_reg_11116_pp0_iter1_reg = p_036_18_reg_11116.read();
        tmp2_V_0_13_reg_11046_pp0_iter1_reg = tmp2_V_0_13_reg_11046.read();
        tmp2_V_0_14_reg_11061_pp0_iter1_reg = tmp2_V_0_14_reg_11061.read();
        tmp2_V_0_15_reg_11076_pp0_iter1_reg = tmp2_V_0_15_reg_11076.read();
        tmp2_V_0_16_reg_11091_pp0_iter1_reg = tmp2_V_0_16_reg_11091.read();
        tmp2_V_0_17_reg_11106_pp0_iter1_reg = tmp2_V_0_17_reg_11106.read();
        tmp3_V_0_13_reg_11051_pp0_iter1_reg = tmp3_V_0_13_reg_11051.read();
        tmp3_V_0_14_reg_11066_pp0_iter1_reg = tmp3_V_0_14_reg_11066.read();
        tmp3_V_0_15_reg_11081_pp0_iter1_reg = tmp3_V_0_15_reg_11081.read();
        tmp3_V_0_16_reg_11096_pp0_iter1_reg = tmp3_V_0_16_reg_11096.read();
        tmp3_V_0_17_reg_11111_pp0_iter1_reg = tmp3_V_0_17_reg_11111.read();
    }
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        p_036_19_reg_11361 = grp_compute_engine_64_fu_4942_ap_return.read();
        tmp2_V_0_18_reg_11341 = grp_compute_engine_64_fu_4907_ap_return.read();
        tmp2_V_0_19_reg_11366 = grp_compute_engine_64_fu_4950_ap_return.read();
        tmp3_V_0_18_reg_11346 = grp_compute_engine_64_fu_4916_ap_return.read();
        tmp3_V_0_19_reg_11371 = grp_compute_engine_64_fu_4959_ap_return.read();
        tmp4_V_0_10_reg_11261 = grp_compute_engine_64_fu_4744_ap_return.read();
        tmp4_V_0_11_reg_11271 = grp_compute_engine_64_fu_4762_ap_return.read();
        tmp4_V_0_12_reg_11281 = grp_compute_engine_64_fu_4780_ap_return.read();
        tmp4_V_0_13_reg_11291 = grp_compute_engine_64_fu_4798_ap_return.read();
        tmp4_V_0_14_reg_11301 = grp_compute_engine_64_fu_4816_ap_return.read();
        tmp4_V_0_15_reg_11311 = grp_compute_engine_64_fu_4855_ap_return.read();
        tmp4_V_0_16_reg_11321 = grp_compute_engine_64_fu_4872_ap_return.read();
        tmp4_V_0_17_reg_11331 = grp_compute_engine_64_fu_4890_ap_return.read();
        tmp4_V_0_18_reg_11351 = grp_compute_engine_64_fu_4924_ap_return.read();
        tmp4_V_0_19_reg_11376 = grp_compute_engine_64_fu_4968_ap_return.read();
        tmp4_V_0_1_reg_11161 = grp_compute_engine_64_fu_4564_ap_return.read();
        tmp4_V_0_20_reg_11386 = grp_compute_engine_64_fu_4985_ap_return.read();
        tmp4_V_0_21_reg_11391 = grp_compute_engine_64_fu_4994_ap_return.read();
        tmp4_V_0_22_reg_11396 = grp_compute_engine_64_fu_5002_ap_return.read();
        tmp4_V_0_23_reg_11401 = grp_compute_engine_64_fu_5011_ap_return.read();
        tmp4_V_0_24_reg_11406 = grp_compute_engine_64_fu_5020_ap_return.read();
        tmp4_V_0_25_reg_11411 = grp_compute_engine_64_fu_5028_ap_return.read();
        tmp4_V_0_26_reg_11416 = grp_compute_engine_64_fu_5037_ap_return.read();
        tmp4_V_0_27_reg_11421 = grp_compute_engine_64_fu_5046_ap_return.read();
        tmp4_V_0_28_reg_11426 = grp_compute_engine_64_fu_5054_ap_return.read();
        tmp4_V_0_29_reg_11431 = grp_compute_engine_64_fu_5063_ap_return.read();
        tmp4_V_0_2_reg_11171 = grp_compute_engine_64_fu_4582_ap_return.read();
        tmp4_V_0_30_reg_11436 = grp_compute_engine_64_fu_5072_ap_return.read();
        tmp4_V_0_3_reg_11181 = grp_compute_engine_64_fu_4600_ap_return.read();
        tmp4_V_0_4_reg_11191 = grp_compute_engine_64_fu_4618_ap_return.read();
        tmp4_V_0_5_reg_11201 = grp_compute_engine_64_fu_4636_ap_return.read();
        tmp4_V_0_6_reg_11211 = grp_compute_engine_64_fu_4654_ap_return.read();
        tmp4_V_0_7_reg_11221 = grp_compute_engine_64_fu_4672_ap_return.read();
        tmp4_V_0_8_reg_11231 = grp_compute_engine_64_fu_4690_ap_return.read();
        tmp4_V_0_9_reg_11241 = grp_compute_engine_64_fu_4708_ap_return.read();
        tmp4_V_0_s_reg_11251 = grp_compute_engine_64_fu_4726_ap_return.read();
        tmp4_V_reg_11151 = grp_compute_engine_64_fu_4546_ap_return.read();
        tmp5_V_0_10_reg_11266 = grp_compute_engine_64_fu_4753_ap_return.read();
        tmp5_V_0_11_reg_11276 = grp_compute_engine_64_fu_4771_ap_return.read();
        tmp5_V_0_12_reg_11286 = grp_compute_engine_64_fu_4789_ap_return.read();
        tmp5_V_0_13_reg_11296 = grp_compute_engine_64_fu_4807_ap_return.read();
        tmp5_V_0_14_reg_11306 = grp_compute_engine_64_fu_4825_ap_return.read();
        tmp5_V_0_15_reg_11316 = grp_compute_engine_64_fu_4864_ap_return.read();
        tmp5_V_0_16_reg_11326 = grp_compute_engine_64_fu_4881_ap_return.read();
        tmp5_V_0_17_reg_11336 = grp_compute_engine_64_fu_4898_ap_return.read();
        tmp5_V_0_18_reg_11356 = grp_compute_engine_64_fu_4933_ap_return.read();
        tmp5_V_0_19_reg_11381 = grp_compute_engine_64_fu_4976_ap_return.read();
        tmp5_V_0_1_reg_11166 = grp_compute_engine_64_fu_4573_ap_return.read();
        tmp5_V_0_2_reg_11176 = grp_compute_engine_64_fu_4591_ap_return.read();
        tmp5_V_0_3_reg_11186 = grp_compute_engine_64_fu_4609_ap_return.read();
        tmp5_V_0_4_reg_11196 = grp_compute_engine_64_fu_4627_ap_return.read();
        tmp5_V_0_5_reg_11206 = grp_compute_engine_64_fu_4645_ap_return.read();
        tmp5_V_0_6_reg_11216 = grp_compute_engine_64_fu_4663_ap_return.read();
        tmp5_V_0_7_reg_11226 = grp_compute_engine_64_fu_4681_ap_return.read();
        tmp5_V_0_8_reg_11236 = grp_compute_engine_64_fu_4699_ap_return.read();
        tmp5_V_0_9_reg_11246 = grp_compute_engine_64_fu_4717_ap_return.read();
        tmp5_V_0_s_reg_11256 = grp_compute_engine_64_fu_4735_ap_return.read();
        tmp5_V_reg_11156 = grp_compute_engine_64_fu_4555_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()))) {
        p_036_20_reg_11686 = grp_compute_engine_64_fu_4735_ap_return.read();
        p_036_21_reg_11711 = grp_compute_engine_64_fu_4780_ap_return.read();
        p_036_22_reg_11736 = grp_compute_engine_64_fu_4825_ap_return.read();
        p_036_23_reg_11761 = grp_compute_engine_64_fu_4890_ap_return.read();
        p_036_24_reg_11786 = grp_compute_engine_64_fu_4933_ap_return.read();
        p_036_25_reg_11811 = grp_compute_engine_64_fu_4976_ap_return.read();
        p_036_26_reg_11836 = grp_compute_engine_64_fu_5020_ap_return.read();
        p_036_27_reg_11861 = grp_compute_engine_64_fu_5063_ap_return.read();
        tmp2_V_0_20_reg_11691 = grp_compute_engine_64_fu_4744_ap_return.read();
        tmp2_V_0_21_reg_11716 = grp_compute_engine_64_fu_4789_ap_return.read();
        tmp2_V_0_22_reg_11741 = grp_compute_engine_64_fu_4855_ap_return.read();
        tmp2_V_0_23_reg_11766 = grp_compute_engine_64_fu_4898_ap_return.read();
        tmp2_V_0_24_reg_11791 = grp_compute_engine_64_fu_4942_ap_return.read();
        tmp2_V_0_25_reg_11816 = grp_compute_engine_64_fu_4985_ap_return.read();
        tmp2_V_0_26_reg_11841 = grp_compute_engine_64_fu_5028_ap_return.read();
        tmp2_V_0_27_reg_11866 = grp_compute_engine_64_fu_5072_ap_return.read();
        tmp3_V_0_20_reg_11696 = grp_compute_engine_64_fu_4753_ap_return.read();
        tmp3_V_0_21_reg_11721 = grp_compute_engine_64_fu_4798_ap_return.read();
        tmp3_V_0_22_reg_11746 = grp_compute_engine_64_fu_4864_ap_return.read();
        tmp3_V_0_23_reg_11771 = grp_compute_engine_64_fu_4907_ap_return.read();
        tmp3_V_0_24_reg_11796 = grp_compute_engine_64_fu_4950_ap_return.read();
        tmp3_V_0_25_reg_11821 = grp_compute_engine_64_fu_4994_ap_return.read();
        tmp3_V_0_26_reg_11846 = grp_compute_engine_64_fu_5037_ap_return.read();
        tmp5_V_0_20_reg_11701 = grp_compute_engine_64_fu_4762_ap_return.read();
        tmp5_V_0_21_reg_11726 = grp_compute_engine_64_fu_4807_ap_return.read();
        tmp5_V_0_22_reg_11751 = grp_compute_engine_64_fu_4872_ap_return.read();
        tmp5_V_0_23_reg_11776 = grp_compute_engine_64_fu_4916_ap_return.read();
        tmp5_V_0_24_reg_11801 = grp_compute_engine_64_fu_4959_ap_return.read();
        tmp5_V_0_25_reg_11826 = grp_compute_engine_64_fu_5002_ap_return.read();
        tmp5_V_0_26_reg_11851 = grp_compute_engine_64_fu_5046_ap_return.read();
        tmp7_V_0_10_reg_11606 = grp_compute_engine_64_fu_4645_ap_return.read();
        tmp7_V_0_11_reg_11621 = grp_compute_engine_64_fu_4654_ap_return.read();
        tmp7_V_0_12_reg_11636 = grp_compute_engine_64_fu_4663_ap_return.read();
        tmp7_V_0_13_reg_11651 = grp_compute_engine_64_fu_4672_ap_return.read();
        tmp7_V_0_14_reg_11656 = grp_compute_engine_64_fu_4681_ap_return.read();
        tmp7_V_0_15_reg_11661 = grp_compute_engine_64_fu_4690_ap_return.read();
        tmp7_V_0_16_reg_11666 = grp_compute_engine_64_fu_4699_ap_return.read();
        tmp7_V_0_17_reg_11671 = grp_compute_engine_64_fu_4708_ap_return.read();
        tmp7_V_0_18_reg_11676 = grp_compute_engine_64_fu_4717_ap_return.read();
        tmp7_V_0_19_reg_11681 = grp_compute_engine_64_fu_4726_ap_return.read();
        tmp7_V_0_1_reg_11456 = grp_compute_engine_64_fu_4555_ap_return.read();
        tmp7_V_0_20_reg_11706 = grp_compute_engine_64_fu_4771_ap_return.read();
        tmp7_V_0_21_reg_11731 = grp_compute_engine_64_fu_4816_ap_return.read();
        tmp7_V_0_22_reg_11756 = grp_compute_engine_64_fu_4881_ap_return.read();
        tmp7_V_0_23_reg_11781 = grp_compute_engine_64_fu_4924_ap_return.read();
        tmp7_V_0_24_reg_11806 = grp_compute_engine_64_fu_4968_ap_return.read();
        tmp7_V_0_25_reg_11831 = grp_compute_engine_64_fu_5011_ap_return.read();
        tmp7_V_0_26_reg_11856 = grp_compute_engine_64_fu_5054_ap_return.read();
        tmp7_V_0_2_reg_11471 = grp_compute_engine_64_fu_4564_ap_return.read();
        tmp7_V_0_3_reg_11486 = grp_compute_engine_64_fu_4573_ap_return.read();
        tmp7_V_0_4_reg_11501 = grp_compute_engine_64_fu_4582_ap_return.read();
        tmp7_V_0_5_reg_11516 = grp_compute_engine_64_fu_4591_ap_return.read();
        tmp7_V_0_6_reg_11531 = grp_compute_engine_64_fu_4600_ap_return.read();
        tmp7_V_0_7_reg_11546 = grp_compute_engine_64_fu_4609_ap_return.read();
        tmp7_V_0_8_reg_11561 = grp_compute_engine_64_fu_4618_ap_return.read();
        tmp7_V_0_9_reg_11576 = grp_compute_engine_64_fu_4627_ap_return.read();
        tmp7_V_0_s_reg_11591 = grp_compute_engine_64_fu_4636_ap_return.read();
        tmp7_V_reg_11441 = grp_compute_engine_64_fu_4546_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        p_036_27_reg_11861_pp0_iter2_reg = p_036_27_reg_11861.read();
        tmp2_V_0_27_reg_11866_pp0_iter2_reg = tmp2_V_0_27_reg_11866.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()))) {
        p_036_28_reg_12086 = grp_compute_engine_64_fu_4950_ap_return.read();
        p_036_29_reg_12111 = grp_compute_engine_64_fu_4994_ap_return.read();
        p_036_30_reg_12136 = grp_compute_engine_64_fu_5037_ap_return.read();
        tmp2_V_0_28_reg_12091 = grp_compute_engine_64_fu_4959_ap_return.read();
        tmp2_V_0_29_reg_12116 = grp_compute_engine_64_fu_5002_ap_return.read();
        tmp2_V_0_30_reg_12141 = grp_compute_engine_64_fu_5046_ap_return.read();
        tmp3_V_0_27_reg_12071 = grp_compute_engine_64_fu_4924_ap_return.read();
        tmp3_V_0_28_reg_12096 = grp_compute_engine_64_fu_4968_ap_return.read();
        tmp3_V_0_29_reg_12121 = grp_compute_engine_64_fu_5011_ap_return.read();
        tmp3_V_0_30_reg_12146 = grp_compute_engine_64_fu_5054_ap_return.read();
        tmp5_V_0_27_reg_12076 = grp_compute_engine_64_fu_4933_ap_return.read();
        tmp5_V_0_28_reg_12101 = grp_compute_engine_64_fu_4976_ap_return.read();
        tmp5_V_0_29_reg_12126 = grp_compute_engine_64_fu_5020_ap_return.read();
        tmp5_V_0_30_reg_12151 = grp_compute_engine_64_fu_5063_ap_return.read();
        tmp6_V_0_10_reg_11981 = grp_compute_engine_64_fu_4744_ap_return.read();
        tmp6_V_0_11_reg_11991 = grp_compute_engine_64_fu_4762_ap_return.read();
        tmp6_V_0_12_reg_12001 = grp_compute_engine_64_fu_4780_ap_return.read();
        tmp6_V_0_13_reg_12011 = grp_compute_engine_64_fu_4798_ap_return.read();
        tmp6_V_0_14_reg_12021 = grp_compute_engine_64_fu_4816_ap_return.read();
        tmp6_V_0_15_reg_12031 = grp_compute_engine_64_fu_4855_ap_return.read();
        tmp6_V_0_16_reg_12041 = grp_compute_engine_64_fu_4872_ap_return.read();
        tmp6_V_0_17_reg_12051 = grp_compute_engine_64_fu_4890_ap_return.read();
        tmp6_V_0_18_reg_12061 = grp_compute_engine_64_fu_4907_ap_return.read();
        tmp6_V_0_1_reg_11881 = grp_compute_engine_64_fu_4564_ap_return.read();
        tmp6_V_0_2_reg_11891 = grp_compute_engine_64_fu_4582_ap_return.read();
        tmp6_V_0_3_reg_11901 = grp_compute_engine_64_fu_4600_ap_return.read();
        tmp6_V_0_4_reg_11911 = grp_compute_engine_64_fu_4618_ap_return.read();
        tmp6_V_0_5_reg_11921 = grp_compute_engine_64_fu_4636_ap_return.read();
        tmp6_V_0_6_reg_11931 = grp_compute_engine_64_fu_4654_ap_return.read();
        tmp6_V_0_7_reg_11941 = grp_compute_engine_64_fu_4672_ap_return.read();
        tmp6_V_0_8_reg_11951 = grp_compute_engine_64_fu_4690_ap_return.read();
        tmp6_V_0_9_reg_11961 = grp_compute_engine_64_fu_4708_ap_return.read();
        tmp6_V_0_s_reg_11971 = grp_compute_engine_64_fu_4726_ap_return.read();
        tmp6_V_reg_11871 = grp_compute_engine_64_fu_4546_ap_return.read();
        tmp7_V_0_27_reg_12081 = grp_compute_engine_64_fu_4942_ap_return.read();
        tmp7_V_0_28_reg_12106 = grp_compute_engine_64_fu_4985_ap_return.read();
        tmp7_V_0_29_reg_12131 = grp_compute_engine_64_fu_5028_ap_return.read();
        tmp7_V_0_30_reg_12156 = grp_compute_engine_64_fu_5072_ap_return.read();
        tmp8_V_0_10_reg_11986 = grp_compute_engine_64_fu_4753_ap_return.read();
        tmp8_V_0_11_reg_11996 = grp_compute_engine_64_fu_4771_ap_return.read();
        tmp8_V_0_12_reg_12006 = grp_compute_engine_64_fu_4789_ap_return.read();
        tmp8_V_0_13_reg_12016 = grp_compute_engine_64_fu_4807_ap_return.read();
        tmp8_V_0_14_reg_12026 = grp_compute_engine_64_fu_4825_ap_return.read();
        tmp8_V_0_15_reg_12036 = grp_compute_engine_64_fu_4864_ap_return.read();
        tmp8_V_0_16_reg_12046 = grp_compute_engine_64_fu_4881_ap_return.read();
        tmp8_V_0_17_reg_12056 = grp_compute_engine_64_fu_4898_ap_return.read();
        tmp8_V_0_18_reg_12066 = grp_compute_engine_64_fu_4916_ap_return.read();
        tmp8_V_0_1_reg_11886 = grp_compute_engine_64_fu_4573_ap_return.read();
        tmp8_V_0_2_reg_11896 = grp_compute_engine_64_fu_4591_ap_return.read();
        tmp8_V_0_3_reg_11906 = grp_compute_engine_64_fu_4609_ap_return.read();
        tmp8_V_0_4_reg_11916 = grp_compute_engine_64_fu_4627_ap_return.read();
        tmp8_V_0_5_reg_11926 = grp_compute_engine_64_fu_4645_ap_return.read();
        tmp8_V_0_6_reg_11936 = grp_compute_engine_64_fu_4663_ap_return.read();
        tmp8_V_0_7_reg_11946 = grp_compute_engine_64_fu_4681_ap_return.read();
        tmp8_V_0_8_reg_11956 = grp_compute_engine_64_fu_4699_ap_return.read();
        tmp8_V_0_9_reg_11966 = grp_compute_engine_64_fu_4717_ap_return.read();
        tmp8_V_0_s_reg_11976 = grp_compute_engine_64_fu_4735_ap_return.read();
        tmp8_V_reg_11876 = grp_compute_engine_64_fu_4555_ap_return.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        reg_5540 = weight_buf_3x3_V_0_q0.read();
        reg_5545 = weight_buf_3x3_V_1_q0.read();
        reg_5551 = weight_buf_3x3_V_2_q0.read();
        reg_5557 = weight_buf_3x3_V_3_q0.read();
        reg_5563 = weight_buf_3x3_V_4_q0.read();
        reg_5569 = weight_buf_3x3_V_5_q0.read();
        reg_5575 = weight_buf_3x3_V_6_q0.read();
        reg_5581 = weight_buf_3x3_V_7_q0.read();
        reg_5587 = weight_buf_3x3_V_8_q0.read();
        reg_5593 = weight_buf_3x3_V_9_q0.read();
        reg_5599 = weight_buf_3x3_V_10_q0.read();
        reg_5605 = weight_buf_3x3_V_11_q0.read();
        reg_5611 = weight_buf_3x3_V_12_q0.read();
        reg_5617 = weight_buf_3x3_V_13_q0.read();
        reg_5623 = weight_buf_3x3_V_14_q0.read();
        reg_5629 = weight_buf_3x3_V_15_q0.read();
        reg_5635 = weight_buf_3x3_V_16_q0.read();
        reg_5641 = weight_buf_3x3_V_17_q0.read();
        reg_5647 = weight_buf_3x3_V_18_q0.read();
        reg_5659 = weight_buf_3x3_V_20_q0.read();
        reg_5665 = weight_buf_3x3_V_21_q0.read();
        reg_5671 = weight_buf_3x3_V_22_q0.read();
        reg_5677 = weight_buf_3x3_V_23_q0.read();
        reg_5683 = weight_buf_3x3_V_24_q0.read();
        reg_5689 = weight_buf_3x3_V_25_q0.read();
        reg_5695 = weight_buf_3x3_V_26_q0.read();
        reg_5701 = weight_buf_3x3_V_27_q0.read();
        reg_5707 = weight_buf_3x3_V_28_q0.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)))) {
        reg_5653 = weight_buf_3x3_V_19_q0.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) || (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        reg_5713 = weight_buf_3x3_V_29_q0.read();
        reg_5719 = weight_buf_3x3_V_30_q0.read();
        reg_5725 = weight_buf_3x3_V_31_q0.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        reg_5731 = weight_buf_3x3_V_20_q0.read();
        reg_5737 = weight_buf_3x3_V_21_q0.read();
        reg_5743 = weight_buf_3x3_V_22_q0.read();
        reg_5749 = weight_buf_3x3_V_23_q0.read();
        reg_5755 = weight_buf_3x3_V_24_q0.read();
        reg_5761 = weight_buf_3x3_V_25_q0.read();
        reg_5767 = weight_buf_3x3_V_26_q0.read();
        reg_5773 = weight_buf_3x3_V_27_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()))) {
        relu_shiftx_V160_loa_reg_13399 = relu_shiftx_V160_q0.read();
        relu_shiftx_V161_loa_reg_13414 = relu_shiftx_V161_q0.read();
        relu_shiftx_V162_loa_reg_13429 = relu_shiftx_V162_q0.read();
        relu_shiftx_V163_loa_reg_13444 = relu_shiftx_V163_q0.read();
        relu_shifty_V191_loa_reg_13404 = relu_shifty_V191_q0.read();
        relu_shifty_V192_loa_reg_13419 = relu_shifty_V192_q0.read();
        relu_shifty_V193_loa_reg_13434 = relu_shifty_V193_q0.read();
        relu_shifty_V194_loa_reg_13449 = relu_shifty_V194_q0.read();
        relu_weights_V222_lo_reg_13409 = relu_weights_V222_q0.read();
        relu_weights_V223_lo_reg_13424 = relu_weights_V223_q0.read();
        relu_weights_V224_lo_reg_13439 = relu_weights_V224_q0.read();
        relu_weights_V225_lo_reg_13454 = relu_weights_V225_q0.read();
        top_14_V_addr_reg_13182 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        top_15_V_addr_reg_13187 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        top_16_V_addr_reg_13192 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        top_17_V_addr_reg_13197 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        top_18_V_addr_reg_13202 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        top_19_V_addr_reg_13207 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        top_20_V_addr_reg_13212 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()))) {
        select_ln340_324_reg_13514 = select_ln340_324_fu_6524_p3.read();
        select_ln340_325_reg_13519 = select_ln340_325_fu_6612_p3.read();
        select_ln340_326_reg_13524 = select_ln340_326_fu_6700_p3.read();
        select_ln340_327_reg_13529 = select_ln340_327_fu_6788_p3.read();
        select_ln340_328_reg_13534 = select_ln340_328_fu_6876_p3.read();
        select_ln340_329_reg_13539 = select_ln340_329_fu_6964_p3.read();
        select_ln340_330_reg_13544 = select_ln340_330_fu_7052_p3.read();
        top_21_V_addr_reg_13459 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        top_22_V_addr_reg_13464 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        top_23_V_addr_reg_13469 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        top_24_V_addr_reg_13474 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        top_25_V_addr_reg_13479 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        top_26_V_addr_reg_13484 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        top_27_V_addr_reg_13489 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        top_28_V_addr_reg_13494 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        top_29_V_addr_reg_13499 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        top_30_V_addr_reg_13504 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        top_31_V_addr_reg_13509 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()))) {
        select_ln340_331_reg_13611 = select_ln340_331_fu_7140_p3.read();
        select_ln340_332_reg_13616 = select_ln340_332_fu_7228_p3.read();
        select_ln340_333_reg_13621 = select_ln340_333_fu_7316_p3.read();
        select_ln340_334_reg_13626 = select_ln340_334_fu_7404_p3.read();
        select_ln340_335_reg_13631 = select_ln340_335_fu_7492_p3.read();
        select_ln340_336_reg_13636 = select_ln340_336_fu_7580_p3.read();
        select_ln340_337_reg_13641 = select_ln340_337_fu_7668_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()))) {
        select_ln340_338_reg_13688 = select_ln340_338_fu_7756_p3.read();
        select_ln340_339_reg_13693 = select_ln340_339_fu_7844_p3.read();
        select_ln340_340_reg_13698 = select_ln340_340_fu_7932_p3.read();
        select_ln340_341_reg_13703 = select_ln340_341_fu_8020_p3.read();
        select_ln340_342_reg_13708 = select_ln340_342_fu_8108_p3.read();
        select_ln340_343_reg_13713 = select_ln340_343_fu_8196_p3.read();
        select_ln340_344_reg_13718 = select_ln340_344_fu_8284_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()))) {
        select_ln340_345_reg_13747 = select_ln340_345_fu_8372_p3.read();
        select_ln340_346_reg_13752 = select_ln340_346_fu_8460_p3.read();
        select_ln340_347_reg_13757 = select_ln340_347_fu_8548_p3.read();
        select_ln340_348_reg_13762 = select_ln340_348_fu_8636_p3.read();
        select_ln340_349_reg_13767 = select_ln340_349_fu_8724_p3.read();
        select_ln340_350_reg_13772 = select_ln340_350_fu_8812_p3.read();
        select_ln340_351_reg_13777 = select_ln340_351_fu_8900_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter4_reg.read()))) {
        select_ln340_352_reg_13782 = select_ln340_352_fu_8988_p3.read();
        select_ln340_353_reg_13787 = select_ln340_353_fu_9076_p3.read();
        select_ln340_354_reg_13792 = select_ln340_354_fu_9164_p3.read();
        select_ln340_355_reg_13797 = select_ln340_355_fu_9252_p3.read();
    }
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        select_ln538_6_reg_10402 = select_ln538_6_fu_6301_p3.read();
        select_ln540_6_reg_10434 = select_ln540_6_fu_6350_p3.read();
        tmp_11_reg_10520 = tmp_11_fu_6381_p11.read();
        tmp_1_reg_10484 = tmp_1_fu_6357_p11.read();
        tmp_8_reg_10380 = tmp_8_fu_6236_p11.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0))) {
        select_ln539_6_reg_10326 = select_ln539_6_fu_6188_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        sum0_V_0_10_reg_12336 = grp_sum_engine_fu_5344_ap_return.read();
        sum0_V_0_11_reg_12341 = grp_sum_engine_fu_5357_ap_return.read();
        sum0_V_0_12_reg_12346 = grp_sum_engine_fu_5370_ap_return.read();
        sum0_V_0_7_reg_12316 = grp_sum_engine_fu_5292_ap_return.read();
        sum0_V_0_8_reg_12321 = grp_sum_engine_fu_5305_ap_return.read();
        sum0_V_0_9_reg_12326 = grp_sum_engine_fu_5318_ap_return.read();
        sum0_V_0_s_reg_12331 = grp_sum_engine_fu_5331_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()))) {
        sum0_V_0_13_reg_12561 = grp_sum_engine_fu_5292_ap_return.read();
        sum0_V_0_14_reg_12591 = grp_sum_engine_fu_5305_ap_return.read();
        sum0_V_0_15_reg_12621 = grp_sum_engine_fu_5318_ap_return.read();
        sum0_V_0_16_reg_12651 = grp_sum_engine_fu_5331_ap_return.read();
        sum0_V_0_17_reg_12681 = grp_sum_engine_fu_5344_ap_return.read();
        sum0_V_0_18_reg_12711 = grp_sum_engine_fu_5357_ap_return.read();
        sum0_V_0_19_reg_12741 = grp_sum_engine_fu_5370_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()))) {
        sum0_V_0_1_reg_12286 = grp_sum_engine_fu_5305_ap_return.read();
        sum0_V_0_2_reg_12291 = grp_sum_engine_fu_5318_ap_return.read();
        sum0_V_0_3_reg_12296 = grp_sum_engine_fu_5331_ap_return.read();
        sum0_V_0_4_reg_12301 = grp_sum_engine_fu_5344_ap_return.read();
        sum0_V_0_5_reg_12306 = grp_sum_engine_fu_5357_ap_return.read();
        sum0_V_0_6_reg_12311 = grp_sum_engine_fu_5370_ap_return.read();
        sum0_V_reg_12281 = grp_sum_engine_fu_5292_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()))) {
        sum0_V_0_20_reg_12881 = grp_sum_engine_fu_5292_ap_return.read();
        sum0_V_0_21_reg_12886 = grp_sum_engine_fu_5305_ap_return.read();
        sum0_V_0_22_reg_12891 = grp_sum_engine_fu_5318_ap_return.read();
        sum0_V_0_23_reg_12896 = grp_sum_engine_fu_5331_ap_return.read();
        sum0_V_0_24_reg_12901 = grp_sum_engine_fu_5344_ap_return.read();
        sum0_V_0_25_reg_12906 = grp_sum_engine_fu_5357_ap_return.read();
        sum0_V_0_26_reg_12911 = grp_sum_engine_fu_5370_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()))) {
        sum0_V_0_27_reg_12951 = grp_sum_engine_fu_5292_ap_return.read();
        sum0_V_0_28_reg_12956 = grp_sum_engine_fu_5305_ap_return.read();
        sum0_V_0_29_reg_12961 = grp_sum_engine_fu_5318_ap_return.read();
        sum0_V_0_30_reg_12966 = grp_sum_engine_fu_5331_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0))) {
        tmp1_V_0_10_reg_10666 = grp_compute_engine_64_fu_4636_ap_return.read();
        tmp1_V_0_11_reg_10671 = grp_compute_engine_64_fu_4645_ap_return.read();
        tmp1_V_0_12_reg_10676 = grp_compute_engine_64_fu_4654_ap_return.read();
        tmp1_V_0_13_reg_10681 = grp_compute_engine_64_fu_4663_ap_return.read();
        tmp1_V_0_14_reg_10686 = grp_compute_engine_64_fu_4672_ap_return.read();
        tmp1_V_0_15_reg_10691 = grp_compute_engine_64_fu_4681_ap_return.read();
        tmp1_V_0_16_reg_10696 = grp_compute_engine_64_fu_4690_ap_return.read();
        tmp1_V_0_17_reg_10701 = grp_compute_engine_64_fu_4699_ap_return.read();
        tmp1_V_0_18_reg_10706 = grp_compute_engine_64_fu_4708_ap_return.read();
        tmp1_V_0_19_reg_10711 = grp_compute_engine_64_fu_4717_ap_return.read();
        tmp1_V_0_1_reg_10621 = grp_compute_engine_64_fu_4555_ap_return.read();
        tmp1_V_0_20_reg_10716 = grp_compute_engine_64_fu_4726_ap_return.read();
        tmp1_V_0_21_reg_10721 = grp_compute_engine_64_fu_4735_ap_return.read();
        tmp1_V_0_22_reg_10731 = grp_compute_engine_64_fu_4744_ap_return.read();
        tmp1_V_0_23_reg_10741 = grp_compute_engine_64_fu_4753_ap_return.read();
        tmp1_V_0_24_reg_10751 = grp_compute_engine_64_fu_4762_ap_return.read();
        tmp1_V_0_25_reg_10761 = grp_compute_engine_64_fu_4771_ap_return.read();
        tmp1_V_0_26_reg_10771 = grp_compute_engine_64_fu_4780_ap_return.read();
        tmp1_V_0_27_reg_10781 = grp_compute_engine_64_fu_4789_ap_return.read();
        tmp1_V_0_28_reg_10791 = grp_compute_engine_64_fu_4798_ap_return.read();
        tmp1_V_0_29_reg_10801 = grp_compute_engine_64_fu_4807_ap_return.read();
        tmp1_V_0_2_reg_10626 = grp_compute_engine_64_fu_4564_ap_return.read();
        tmp1_V_0_30_reg_10811 = grp_compute_engine_64_fu_4816_ap_return.read();
        tmp1_V_0_3_reg_10631 = grp_compute_engine_64_fu_4573_ap_return.read();
        tmp1_V_0_4_reg_10636 = grp_compute_engine_64_fu_4582_ap_return.read();
        tmp1_V_0_5_reg_10641 = grp_compute_engine_64_fu_4591_ap_return.read();
        tmp1_V_0_6_reg_10646 = grp_compute_engine_64_fu_4600_ap_return.read();
        tmp1_V_0_7_reg_10651 = grp_compute_engine_64_fu_4609_ap_return.read();
        tmp1_V_0_8_reg_10656 = grp_compute_engine_64_fu_4618_ap_return.read();
        tmp1_V_0_9_reg_10661 = grp_compute_engine_64_fu_4627_ap_return.read();
        tmp1_V_0_s_reg_10821 = grp_compute_engine_64_fu_4825_ap_return.read();
        tmp1_V_reg_10616 = grp_compute_engine_64_fu_4546_ap_return.read();
        weight_buf_3x3_V_21_5_reg_10726 = weight_buf_3x3_V_21_q1.read();
        weight_buf_3x3_V_22_5_reg_10736 = weight_buf_3x3_V_22_q1.read();
        weight_buf_3x3_V_23_5_reg_10746 = weight_buf_3x3_V_23_q1.read();
        weight_buf_3x3_V_24_5_reg_10756 = weight_buf_3x3_V_24_q1.read();
        weight_buf_3x3_V_25_5_reg_10766 = weight_buf_3x3_V_25_q1.read();
        weight_buf_3x3_V_26_5_reg_10776 = weight_buf_3x3_V_26_q1.read();
        weight_buf_3x3_V_27_5_reg_10786 = weight_buf_3x3_V_27_q1.read();
        weight_buf_3x3_V_28_5_reg_10796 = weight_buf_3x3_V_28_q1.read();
        weight_buf_3x3_V_29_5_reg_10806 = weight_buf_3x3_V_29_q1.read();
        weight_buf_3x3_V_30_5_reg_10816 = weight_buf_3x3_V_30_q1.read();
        weight_buf_3x3_V_31_5_reg_10826 = weight_buf_3x3_V_31_q1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0))) {
        tmp1_V_0_10_reg_10666_pp0_iter1_reg = tmp1_V_0_10_reg_10666.read();
        tmp1_V_0_11_reg_10671_pp0_iter1_reg = tmp1_V_0_11_reg_10671.read();
        tmp1_V_0_12_reg_10676_pp0_iter1_reg = tmp1_V_0_12_reg_10676.read();
        tmp1_V_0_13_reg_10681_pp0_iter1_reg = tmp1_V_0_13_reg_10681.read();
        tmp1_V_0_14_reg_10686_pp0_iter1_reg = tmp1_V_0_14_reg_10686.read();
        tmp1_V_0_15_reg_10691_pp0_iter1_reg = tmp1_V_0_15_reg_10691.read();
        tmp1_V_0_16_reg_10696_pp0_iter1_reg = tmp1_V_0_16_reg_10696.read();
        tmp1_V_0_17_reg_10701_pp0_iter1_reg = tmp1_V_0_17_reg_10701.read();
        tmp1_V_0_18_reg_10706_pp0_iter1_reg = tmp1_V_0_18_reg_10706.read();
        tmp1_V_0_19_reg_10711_pp0_iter1_reg = tmp1_V_0_19_reg_10711.read();
        tmp1_V_0_20_reg_10716_pp0_iter1_reg = tmp1_V_0_20_reg_10716.read();
        tmp1_V_0_21_reg_10721_pp0_iter1_reg = tmp1_V_0_21_reg_10721.read();
        tmp1_V_0_22_reg_10731_pp0_iter1_reg = tmp1_V_0_22_reg_10731.read();
        tmp1_V_0_23_reg_10741_pp0_iter1_reg = tmp1_V_0_23_reg_10741.read();
        tmp1_V_0_24_reg_10751_pp0_iter1_reg = tmp1_V_0_24_reg_10751.read();
        tmp1_V_0_25_reg_10761_pp0_iter1_reg = tmp1_V_0_25_reg_10761.read();
        tmp1_V_0_26_reg_10771_pp0_iter1_reg = tmp1_V_0_26_reg_10771.read();
        tmp1_V_0_27_reg_10781_pp0_iter1_reg = tmp1_V_0_27_reg_10781.read();
        tmp1_V_0_28_reg_10791_pp0_iter1_reg = tmp1_V_0_28_reg_10791.read();
        tmp1_V_0_29_reg_10801_pp0_iter1_reg = tmp1_V_0_29_reg_10801.read();
        tmp1_V_0_30_reg_10811_pp0_iter1_reg = tmp1_V_0_30_reg_10811.read();
        tmp1_V_0_7_reg_10651_pp0_iter1_reg = tmp1_V_0_7_reg_10651.read();
        tmp1_V_0_8_reg_10656_pp0_iter1_reg = tmp1_V_0_8_reg_10656.read();
        tmp1_V_0_9_reg_10661_pp0_iter1_reg = tmp1_V_0_9_reg_10661.read();
        tmp1_V_0_s_reg_10821_pp0_iter1_reg = tmp1_V_0_s_reg_10821.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()))) {
        tmp6_V_0_19_reg_12161 = grp_compute_engine_64_fu_4855_ap_return.read();
        tmp6_V_0_20_reg_12171 = grp_compute_engine_64_fu_4872_ap_return.read();
        tmp6_V_0_21_reg_12181 = grp_compute_engine_64_fu_4890_ap_return.read();
        tmp6_V_0_22_reg_12191 = grp_compute_engine_64_fu_4907_ap_return.read();
        tmp6_V_0_23_reg_12201 = grp_compute_engine_64_fu_4924_ap_return.read();
        tmp6_V_0_24_reg_12211 = grp_compute_engine_64_fu_4942_ap_return.read();
        tmp6_V_0_25_reg_12221 = grp_compute_engine_64_fu_4959_ap_return.read();
        tmp6_V_0_26_reg_12231 = grp_compute_engine_64_fu_4976_ap_return.read();
        tmp6_V_0_27_reg_12241 = grp_compute_engine_64_fu_4994_ap_return.read();
        tmp6_V_0_28_reg_12251 = grp_compute_engine_64_fu_5011_ap_return.read();
        tmp6_V_0_29_reg_12261 = grp_compute_engine_64_fu_5028_ap_return.read();
        tmp6_V_0_30_reg_12271 = grp_compute_engine_64_fu_5046_ap_return.read();
        tmp8_V_0_19_reg_12166 = grp_compute_engine_64_fu_4864_ap_return.read();
        tmp8_V_0_20_reg_12176 = grp_compute_engine_64_fu_4881_ap_return.read();
        tmp8_V_0_21_reg_12186 = grp_compute_engine_64_fu_4898_ap_return.read();
        tmp8_V_0_22_reg_12196 = grp_compute_engine_64_fu_4916_ap_return.read();
        tmp8_V_0_23_reg_12206 = grp_compute_engine_64_fu_4933_ap_return.read();
        tmp8_V_0_24_reg_12216 = grp_compute_engine_64_fu_4950_ap_return.read();
        tmp8_V_0_25_reg_12226 = grp_compute_engine_64_fu_4968_ap_return.read();
        tmp8_V_0_26_reg_12236 = grp_compute_engine_64_fu_4985_ap_return.read();
        tmp8_V_0_27_reg_12246 = grp_compute_engine_64_fu_5002_ap_return.read();
        tmp8_V_0_28_reg_12256 = grp_compute_engine_64_fu_5020_ap_return.read();
        tmp8_V_0_29_reg_12266 = grp_compute_engine_64_fu_5037_ap_return.read();
        tmp8_V_0_30_reg_12276 = grp_compute_engine_64_fu_5054_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0))) {
        tmp_10_reg_10362 = grp_fu_5516_p11.read();
        tmp_7_reg_10304 = grp_fu_5436_p11.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        tmp_2_reg_10502 = grp_fu_5516_p11.read();
        tmp_9_reg_10466 = grp_fu_5477_p11.read();
        weight_buf_3x3_V_19_3_reg_10536 = weight_buf_3x3_V_19_q1.read();
        weight_buf_3x3_V_20_3_reg_10541 = weight_buf_3x3_V_20_q1.read();
        weight_buf_3x3_V_21_3_reg_10546 = weight_buf_3x3_V_21_q1.read();
        weight_buf_3x3_V_22_3_reg_10551 = weight_buf_3x3_V_22_q1.read();
        weight_buf_3x3_V_23_3_reg_10556 = weight_buf_3x3_V_23_q1.read();
        weight_buf_3x3_V_24_3_reg_10561 = weight_buf_3x3_V_24_q1.read();
        weight_buf_3x3_V_25_3_reg_10566 = weight_buf_3x3_V_25_q1.read();
        weight_buf_3x3_V_26_3_reg_10571 = weight_buf_3x3_V_26_q1.read();
        weight_buf_3x3_V_27_3_reg_10576 = weight_buf_3x3_V_27_q1.read();
        weight_buf_3x3_V_28_3_reg_10581 = weight_buf_3x3_V_28_q1.read();
        weight_buf_3x3_V_29_2_reg_10586 = weight_buf_3x3_V_29_q0.read();
        weight_buf_3x3_V_29_3_reg_10591 = weight_buf_3x3_V_29_q1.read();
        weight_buf_3x3_V_30_2_reg_10596 = weight_buf_3x3_V_30_q0.read();
        weight_buf_3x3_V_30_3_reg_10601 = weight_buf_3x3_V_30_q1.read();
        weight_buf_3x3_V_31_2_reg_10606 = weight_buf_3x3_V_31_q0.read();
        weight_buf_3x3_V_31_3_reg_10611 = weight_buf_3x3_V_31_q1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()))) {
        top_0_V_addr_reg_13000 =  (sc_lv<7>) (zext_ln531_4_fu_6433_p1.read());
        top_1_V_addr_reg_13005 =  (sc_lv<7>) (zext_ln531_4_fu_6433_p1.read());
        top_2_V_addr_reg_13010 =  (sc_lv<7>) (zext_ln531_4_fu_6433_p1.read());
        top_3_V_addr_reg_13015 =  (sc_lv<7>) (zext_ln531_4_fu_6433_p1.read());
        top_4_V_addr_reg_13020 =  (sc_lv<7>) (zext_ln531_4_fu_6433_p1.read());
        top_5_V_addr_reg_13025 =  (sc_lv<7>) (zext_ln531_4_fu_6433_p1.read());
        top_6_V_addr_reg_13030 =  (sc_lv<7>) (zext_ln531_4_fu_6433_p1.read());
        zext_ln531_4_reg_12971 = zext_ln531_4_fu_6433_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        top_0_V_load_reg_13105 = top_0_V_q0.read();
        top_1_V_load_reg_13111 = top_1_V_q0.read();
        top_2_V_load_reg_13117 = top_2_V_q0.read();
        top_3_V_load_reg_13123 = top_3_V_q0.read();
        top_4_V_load_reg_13129 = top_4_V_q0.read();
        top_5_V_load_reg_13135 = top_5_V_q0.read();
        top_6_V_load_reg_13141 = top_6_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()))) {
        top_10_V_addr_reg_13085 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        top_11_V_addr_reg_13090 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        top_12_V_addr_reg_13095 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        top_13_V_addr_reg_13100 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        top_7_V_addr_reg_13070 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        top_8_V_addr_reg_13075 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        top_9_V_addr_reg_13080 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()))) {
        top_10_V_load_reg_13235 = top_10_V_q0.read();
        top_11_V_load_reg_13241 = top_11_V_q0.read();
        top_12_V_load_reg_13247 = top_12_V_q0.read();
        top_13_V_load_reg_13253 = top_13_V_q0.read();
        top_7_V_load_reg_13217 = top_7_V_q0.read();
        top_8_V_load_reg_13223 = top_8_V_q0.read();
        top_9_V_load_reg_13229 = top_9_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()))) {
        top_14_V_load_reg_13549 = top_14_V_q0.read();
        top_15_V_load_reg_13555 = top_15_V_q0.read();
        top_16_V_load_reg_13561 = top_16_V_q0.read();
        top_17_V_load_reg_13567 = top_17_V_q0.read();
        top_18_V_load_reg_13573 = top_18_V_q0.read();
        top_19_V_load_reg_13579 = top_19_V_q0.read();
        top_20_V_load_reg_13585 = top_20_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()))) {
        top_21_V_load_reg_13646 = top_21_V_q0.read();
        top_22_V_load_reg_13652 = top_22_V_q0.read();
        top_23_V_load_reg_13658 = top_23_V_q0.read();
        top_24_V_load_reg_13664 = top_24_V_q0.read();
        top_25_V_load_reg_13670 = top_25_V_q0.read();
        top_26_V_load_reg_13676 = top_26_V_q0.read();
        top_27_V_load_reg_13682 = top_27_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()))) {
        top_28_V_load_reg_13723 = top_28_V_q0.read();
        top_29_V_load_reg_13729 = top_29_V_q0.read();
        top_30_V_load_reg_13735 = top_30_V_q0.read();
        top_31_V_load_reg_13741 = top_31_V_q0.read();
    }
}

void pgconv64_1bit::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln505_fu_5886_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln505_fu_5886_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_state25;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage2_subdone.read(), ap_const_boolean_0) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_state25;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            }
            break;
        case 16 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage4;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            }
            break;
        case 32 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage4_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage4;
            }
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<7>) ("XXXXXXX");
            break;
    }
}

}

