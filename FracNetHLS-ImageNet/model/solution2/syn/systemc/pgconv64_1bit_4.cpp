#include "pgconv64_1bit.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4600_ap_start() {
    grp_compute_engine_64_fu_4600_ap_start = grp_compute_engine_64_fu_4600_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4600_b_V() {
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4600_b_V = select_ln538_6_reg_10402.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4600_b_V = select_ln539_6_reg_10326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4600_b_V = tmp_7_reg_10304.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4600_b_V = grp_fu_5383_p11.read();
    } else {
        grp_compute_engine_64_fu_4600_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4600_w_V() {
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4600_w_V = reg_5557.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4600_w_V = weight_buf_3x3_V_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4600_w_V = reg_5551.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4600_w_V = weight_buf_3x3_V_6_q1.read();
    } else {
        grp_compute_engine_64_fu_4600_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4609_ap_start() {
    grp_compute_engine_64_fu_4609_ap_start = grp_compute_engine_64_fu_4609_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4609_b_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4609_b_V = select_ln540_6_reg_10434.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4609_b_V = select_ln539_6_reg_10326.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4609_b_V = tmp_8_reg_10380.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4609_b_V = tmp_5_fu_6195_p11.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4609_b_V = grp_fu_5383_p11.read();
        } else {
            grp_compute_engine_64_fu_4609_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4609_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4609_w_V() {
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4609_w_V = weight_buf_3x3_V_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4609_w_V = weight_buf_3x3_V_3_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4609_w_V = weight_buf_3x3_V_2_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4609_w_V = weight_buf_3x3_V_7_q1.read();
    } else {
        grp_compute_engine_64_fu_4609_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4618_ap_start() {
    grp_compute_engine_64_fu_4618_ap_start = grp_compute_engine_64_fu_4618_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4618_b_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4618_b_V = select_ln538_6_reg_10402.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4618_b_V = select_ln539_6_reg_10326.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4618_b_V = tmp_7_reg_10304.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4618_b_V = grp_fu_5436_p11.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4618_b_V = grp_fu_5383_p11.read();
        } else {
            grp_compute_engine_64_fu_4618_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4618_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4618_w_V() {
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4618_w_V = reg_5563.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4618_w_V = weight_buf_3x3_V_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4618_w_V = weight_buf_3x3_V_2_q1.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4618_w_V = weight_buf_3x3_V_8_q1.read();
    } else {
        grp_compute_engine_64_fu_4618_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4627_ap_start() {
    grp_compute_engine_64_fu_4627_ap_start = grp_compute_engine_64_fu_4627_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4627_b_V() {
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4627_b_V = select_ln540_6_reg_10434.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4627_b_V = select_ln539_6_reg_10326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4627_b_V = tmp_8_reg_10380.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4627_b_V = grp_fu_5383_p11.read();
    } else {
        grp_compute_engine_64_fu_4627_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4627_w_V() {
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4627_w_V = weight_buf_3x3_V_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4627_w_V = weight_buf_3x3_V_4_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4627_w_V = reg_5557.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4627_w_V = weight_buf_3x3_V_9_q1.read();
    } else {
        grp_compute_engine_64_fu_4627_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4636_ap_start() {
    grp_compute_engine_64_fu_4636_ap_start = grp_compute_engine_64_fu_4636_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4636_b_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4636_b_V = select_ln538_6_reg_10402.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4636_b_V = select_ln539_6_reg_10326.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4636_b_V = tmp_7_reg_10304.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4636_b_V = tmp_5_fu_6195_p11.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4636_b_V = grp_fu_5383_p11.read();
        } else {
            grp_compute_engine_64_fu_4636_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4636_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4636_w_V() {
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4636_w_V = reg_5569.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4636_w_V = weight_buf_3x3_V_5_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4636_w_V = weight_buf_3x3_V_3_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4636_w_V = weight_buf_3x3_V_10_q1.read();
    } else {
        grp_compute_engine_64_fu_4636_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4645_ap_start() {
    grp_compute_engine_64_fu_4645_ap_start = grp_compute_engine_64_fu_4645_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4645_b_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4645_b_V = select_ln540_6_reg_10434.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4645_b_V = select_ln539_6_reg_10326.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4645_b_V = tmp_8_reg_10380.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4645_b_V = grp_fu_5436_p11.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4645_b_V = grp_fu_5383_p11.read();
        } else {
            grp_compute_engine_64_fu_4645_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4645_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4645_w_V() {
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4645_w_V = weight_buf_3x3_V_5_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4645_w_V = weight_buf_3x3_V_5_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4645_w_V = weight_buf_3x3_V_3_q1.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4645_w_V = weight_buf_3x3_V_11_q1.read();
    } else {
        grp_compute_engine_64_fu_4645_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4654_ap_start() {
    grp_compute_engine_64_fu_4654_ap_start = grp_compute_engine_64_fu_4654_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4654_b_V() {
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4654_b_V = select_ln538_6_reg_10402.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4654_b_V = select_ln539_6_reg_10326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4654_b_V = tmp_7_reg_10304.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4654_b_V = grp_fu_5383_p11.read();
    } else {
        grp_compute_engine_64_fu_4654_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4654_w_V() {
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4654_w_V = reg_5575.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4654_w_V = weight_buf_3x3_V_6_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4654_w_V = reg_5563.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4654_w_V = weight_buf_3x3_V_12_q1.read();
    } else {
        grp_compute_engine_64_fu_4654_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4663_ap_start() {
    grp_compute_engine_64_fu_4663_ap_start = grp_compute_engine_64_fu_4663_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4663_b_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4663_b_V = select_ln540_6_reg_10434.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4663_b_V = select_ln539_6_reg_10326.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4663_b_V = tmp_8_reg_10380.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4663_b_V = tmp_5_fu_6195_p11.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4663_b_V = grp_fu_5383_p11.read();
        } else {
            grp_compute_engine_64_fu_4663_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4663_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4663_w_V() {
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4663_w_V = weight_buf_3x3_V_6_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4663_w_V = weight_buf_3x3_V_6_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4663_w_V = weight_buf_3x3_V_4_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4663_w_V = weight_buf_3x3_V_13_q1.read();
    } else {
        grp_compute_engine_64_fu_4663_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4672_ap_start() {
    grp_compute_engine_64_fu_4672_ap_start = grp_compute_engine_64_fu_4672_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4672_b_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4672_b_V = select_ln538_6_reg_10402.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4672_b_V = select_ln539_6_reg_10326.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4672_b_V = tmp_7_reg_10304.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4672_b_V = grp_fu_5436_p11.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4672_b_V = grp_fu_5383_p11.read();
        } else {
            grp_compute_engine_64_fu_4672_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4672_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4672_w_V() {
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4672_w_V = reg_5581.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4672_w_V = weight_buf_3x3_V_7_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4672_w_V = weight_buf_3x3_V_4_q1.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4672_w_V = weight_buf_3x3_V_14_q1.read();
    } else {
        grp_compute_engine_64_fu_4672_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4681_ap_start() {
    grp_compute_engine_64_fu_4681_ap_start = grp_compute_engine_64_fu_4681_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4681_b_V() {
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4681_b_V = select_ln540_6_reg_10434.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4681_b_V = select_ln539_6_reg_10326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4681_b_V = tmp_8_reg_10380.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4681_b_V = grp_fu_5383_p11.read();
    } else {
        grp_compute_engine_64_fu_4681_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4681_w_V() {
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4681_w_V = weight_buf_3x3_V_7_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4681_w_V = weight_buf_3x3_V_7_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4681_w_V = reg_5569.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4681_w_V = weight_buf_3x3_V_15_q1.read();
    } else {
        grp_compute_engine_64_fu_4681_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4690_ap_start() {
    grp_compute_engine_64_fu_4690_ap_start = grp_compute_engine_64_fu_4690_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4690_b_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4690_b_V = select_ln538_6_reg_10402.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4690_b_V = select_ln539_6_reg_10326.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4690_b_V = tmp_7_reg_10304.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4690_b_V = tmp_5_fu_6195_p11.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4690_b_V = grp_fu_5383_p11.read();
        } else {
            grp_compute_engine_64_fu_4690_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4690_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4690_w_V() {
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4690_w_V = reg_5587.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4690_w_V = weight_buf_3x3_V_8_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4690_w_V = weight_buf_3x3_V_5_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4690_w_V = weight_buf_3x3_V_16_q1.read();
    } else {
        grp_compute_engine_64_fu_4690_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4699_ap_start() {
    grp_compute_engine_64_fu_4699_ap_start = grp_compute_engine_64_fu_4699_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4699_b_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4699_b_V = select_ln540_6_reg_10434.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4699_b_V = select_ln539_6_reg_10326.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4699_b_V = tmp_8_reg_10380.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4699_b_V = grp_fu_5436_p11.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4699_b_V = grp_fu_5383_p11.read();
        } else {
            grp_compute_engine_64_fu_4699_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4699_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4699_w_V() {
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4699_w_V = weight_buf_3x3_V_8_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4699_w_V = weight_buf_3x3_V_8_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4699_w_V = weight_buf_3x3_V_5_q1.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4699_w_V = weight_buf_3x3_V_17_q1.read();
    } else {
        grp_compute_engine_64_fu_4699_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4708_ap_start() {
    grp_compute_engine_64_fu_4708_ap_start = grp_compute_engine_64_fu_4708_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4708_b_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4708_b_V = select_ln538_6_reg_10402.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4708_b_V = select_ln539_6_reg_10326.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4708_b_V = tmp_7_reg_10304.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4708_b_V = grp_fu_5383_p11.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4708_b_V = grp_fu_5477_p11.read();
        } else {
            grp_compute_engine_64_fu_4708_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4708_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4708_w_V() {
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4708_w_V = reg_5593.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4708_w_V = weight_buf_3x3_V_9_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4708_w_V = reg_5575.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4708_w_V = weight_buf_3x3_V_18_q1.read();
    } else {
        grp_compute_engine_64_fu_4708_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4717_ap_start() {
    grp_compute_engine_64_fu_4717_ap_start = grp_compute_engine_64_fu_4717_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4717_b_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4717_b_V = select_ln540_6_reg_10434.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4717_b_V = select_ln539_6_reg_10326.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4717_b_V = tmp_8_reg_10380.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4717_b_V = tmp_5_fu_6195_p11.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4717_b_V = grp_fu_5477_p11.read();
        } else {
            grp_compute_engine_64_fu_4717_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4717_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4717_w_V() {
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4717_w_V = weight_buf_3x3_V_9_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4717_w_V = weight_buf_3x3_V_9_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4717_w_V = weight_buf_3x3_V_6_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4717_w_V = weight_buf_3x3_V_19_q1.read();
    } else {
        grp_compute_engine_64_fu_4717_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4726_ap_start() {
    grp_compute_engine_64_fu_4726_ap_start = grp_compute_engine_64_fu_4726_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4726_b_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4726_b_V = select_ln538_6_reg_10402.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4726_b_V = select_ln539_6_reg_10326.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4726_b_V = tmp_7_reg_10304.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4726_b_V = grp_fu_5436_p11.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4726_b_V = grp_fu_5477_p11.read();
        } else {
            grp_compute_engine_64_fu_4726_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4726_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4726_w_V() {
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4726_w_V = reg_5599.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4726_w_V = weight_buf_3x3_V_10_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4726_w_V = weight_buf_3x3_V_6_q1.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4726_w_V = weight_buf_3x3_V_20_q1.read();
    } else {
        grp_compute_engine_64_fu_4726_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4735_ap_start() {
    grp_compute_engine_64_fu_4735_ap_start = grp_compute_engine_64_fu_4735_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4735_b_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4735_b_V = select_ln540_6_reg_10434.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4735_b_V = tmp_9_reg_10466.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4735_b_V = tmp_8_reg_10380.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4735_b_V = grp_fu_5383_p11.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4735_b_V = grp_fu_5477_p11.read();
        } else {
            grp_compute_engine_64_fu_4735_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4735_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4735_w_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4735_w_V = weight_buf_3x3_V_10_q0.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4735_w_V = reg_5665.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4735_w_V = weight_buf_3x3_V_10_q1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4735_w_V = reg_5581.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4735_w_V = weight_buf_3x3_V_21_q1.read();
        } else {
            grp_compute_engine_64_fu_4735_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4735_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4744_ap_start() {
    grp_compute_engine_64_fu_4744_ap_start = grp_compute_engine_64_fu_4744_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4744_b_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4744_b_V = select_ln538_6_reg_10402.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4744_b_V = tmp_1_reg_10484.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4744_b_V = tmp_7_reg_10304.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4744_b_V = tmp_5_fu_6195_p11.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4744_b_V = grp_fu_5477_p11.read();
        } else {
            grp_compute_engine_64_fu_4744_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4744_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4744_w_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4744_w_V = reg_5605.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4744_w_V = reg_5737.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4744_w_V = weight_buf_3x3_V_11_q0.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4744_w_V = weight_buf_3x3_V_7_q0.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4744_w_V = weight_buf_3x3_V_22_q1.read();
        } else {
            grp_compute_engine_64_fu_4744_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4744_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4753_ap_start() {
    grp_compute_engine_64_fu_4753_ap_start = grp_compute_engine_64_fu_4753_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4753_b_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4753_b_V = select_ln540_6_reg_10434.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4753_b_V = tmp_2_reg_10502.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4753_b_V = tmp_8_reg_10380.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4753_b_V = grp_fu_5436_p11.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4753_b_V = grp_fu_5477_p11.read();
        } else {
            grp_compute_engine_64_fu_4753_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4753_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4753_w_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4753_w_V = weight_buf_3x3_V_11_q0.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4753_w_V = weight_buf_3x3_V_21_3_reg_10546.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4753_w_V = weight_buf_3x3_V_11_q1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4753_w_V = weight_buf_3x3_V_7_q1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4753_w_V = weight_buf_3x3_V_23_q1.read();
        } else {
            grp_compute_engine_64_fu_4753_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4753_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4762_ap_start() {
    grp_compute_engine_64_fu_4762_ap_start = grp_compute_engine_64_fu_4762_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4762_b_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4762_b_V = select_ln538_6_reg_10402.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4762_b_V = tmp_11_reg_10520.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4762_b_V = tmp_7_reg_10304.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4762_b_V = grp_fu_5383_p11.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4762_b_V = grp_fu_5477_p11.read();
        } else {
            grp_compute_engine_64_fu_4762_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4762_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4762_w_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4762_w_V = reg_5611.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4762_w_V = weight_buf_3x3_V_21_5_reg_10726.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4762_w_V = weight_buf_3x3_V_12_q0.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4762_w_V = reg_5587.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4762_w_V = weight_buf_3x3_V_24_q1.read();
        } else {
            grp_compute_engine_64_fu_4762_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4762_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4771_ap_start() {
    grp_compute_engine_64_fu_4771_ap_start = grp_compute_engine_64_fu_4771_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4771_b_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4771_b_V = select_ln540_6_reg_10434.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4771_b_V = select_ln539_6_reg_10326.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4771_b_V = tmp_8_reg_10380.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4771_b_V = tmp_5_fu_6195_p11.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4771_b_V = grp_fu_5477_p11.read();
        } else {
            grp_compute_engine_64_fu_4771_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4771_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4771_w_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4771_w_V = weight_buf_3x3_V_12_q0.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4771_w_V = weight_buf_3x3_V_21_q1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4771_w_V = weight_buf_3x3_V_12_q1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4771_w_V = weight_buf_3x3_V_8_q0.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4771_w_V = weight_buf_3x3_V_25_q1.read();
        } else {
            grp_compute_engine_64_fu_4771_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4771_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4780_ap_start() {
    grp_compute_engine_64_fu_4780_ap_start = grp_compute_engine_64_fu_4780_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4780_b_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4780_b_V = select_ln538_6_reg_10402.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4780_b_V = tmp_9_reg_10466.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4780_b_V = tmp_7_reg_10304.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4780_b_V = grp_fu_5436_p11.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4780_b_V = grp_fu_5477_p11.read();
        } else {
            grp_compute_engine_64_fu_4780_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4780_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4780_w_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4780_w_V = reg_5617.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4780_w_V = reg_5671.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4780_w_V = weight_buf_3x3_V_13_q0.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4780_w_V = weight_buf_3x3_V_8_q1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4780_w_V = weight_buf_3x3_V_26_q1.read();
        } else {
            grp_compute_engine_64_fu_4780_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4780_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4789_ap_start() {
    grp_compute_engine_64_fu_4789_ap_start = grp_compute_engine_64_fu_4789_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4789_b_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4789_b_V = select_ln540_6_reg_10434.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4789_b_V = tmp_1_reg_10484.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4789_b_V = tmp_8_reg_10380.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4789_b_V = grp_fu_5383_p11.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4789_b_V = grp_fu_5477_p11.read();
        } else {
            grp_compute_engine_64_fu_4789_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4789_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4789_w_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4789_w_V = weight_buf_3x3_V_13_q0.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4789_w_V = reg_5743.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4789_w_V = weight_buf_3x3_V_13_q1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4789_w_V = reg_5593.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4789_w_V = weight_buf_3x3_V_27_q1.read();
        } else {
            grp_compute_engine_64_fu_4789_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4789_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4798_ap_start() {
    grp_compute_engine_64_fu_4798_ap_start = grp_compute_engine_64_fu_4798_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4798_b_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4798_b_V = select_ln538_6_reg_10402.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4798_b_V = tmp_2_reg_10502.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4798_b_V = tmp_7_reg_10304.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4798_b_V = tmp_5_fu_6195_p11.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4798_b_V = grp_fu_5477_p11.read();
        } else {
            grp_compute_engine_64_fu_4798_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4798_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4798_w_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4798_w_V = reg_5623.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4798_w_V = weight_buf_3x3_V_22_3_reg_10551.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4798_w_V = weight_buf_3x3_V_14_q0.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4798_w_V = weight_buf_3x3_V_9_q0.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4798_w_V = weight_buf_3x3_V_28_q1.read();
        } else {
            grp_compute_engine_64_fu_4798_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4798_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4807_ap_start() {
    grp_compute_engine_64_fu_4807_ap_start = grp_compute_engine_64_fu_4807_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4807_b_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4807_b_V = select_ln540_6_reg_10434.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4807_b_V = tmp_11_reg_10520.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4807_b_V = tmp_8_reg_10380.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4807_b_V = grp_fu_5436_p11.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4807_b_V = grp_fu_5477_p11.read();
        } else {
            grp_compute_engine_64_fu_4807_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4807_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4807_w_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4807_w_V = weight_buf_3x3_V_14_q0.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4807_w_V = weight_buf_3x3_V_22_5_reg_10736.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4807_w_V = weight_buf_3x3_V_14_q1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4807_w_V = weight_buf_3x3_V_9_q1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4807_w_V = weight_buf_3x3_V_29_q1.read();
        } else {
            grp_compute_engine_64_fu_4807_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4807_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4816_ap_start() {
    grp_compute_engine_64_fu_4816_ap_start = grp_compute_engine_64_fu_4816_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4816_b_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4816_b_V = select_ln538_6_reg_10402.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4816_b_V = select_ln539_6_reg_10326.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4816_b_V = tmp_7_reg_10304.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4816_b_V = grp_fu_5383_p11.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4816_b_V = grp_fu_5477_p11.read();
        } else {
            grp_compute_engine_64_fu_4816_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4816_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4816_w_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4816_w_V = reg_5629.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4816_w_V = weight_buf_3x3_V_22_q1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4816_w_V = weight_buf_3x3_V_15_q0.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4816_w_V = reg_5599.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4816_w_V = weight_buf_3x3_V_30_q1.read();
        } else {
            grp_compute_engine_64_fu_4816_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4816_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4825_ap_start() {
    grp_compute_engine_64_fu_4825_ap_start = grp_compute_engine_64_fu_4825_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4825_b_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4825_b_V = select_ln540_6_reg_10434.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4825_b_V = tmp_9_reg_10466.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4825_b_V = tmp_8_reg_10380.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4825_b_V = tmp_5_fu_6195_p11.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4825_b_V = grp_fu_5477_p11.read();
        } else {
            grp_compute_engine_64_fu_4825_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4825_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4825_w_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4825_w_V = weight_buf_3x3_V_15_q0.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4825_w_V = reg_5677.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4825_w_V = weight_buf_3x3_V_15_q1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4825_w_V = weight_buf_3x3_V_10_q0.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5006.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_4825_w_V = weight_buf_3x3_V_31_q1.read();
        } else {
            grp_compute_engine_64_fu_4825_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_4825_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4855_ap_start() {
    grp_compute_engine_64_fu_4855_ap_start = grp_compute_engine_64_fu_4855_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4855_b_V() {
    if (((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4855_b_V = select_ln538_6_reg_10402.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4855_b_V = tmp_1_reg_10484.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4855_b_V = tmp_7_reg_10304.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4855_b_V = grp_fu_5436_p11.read();
    } else {
        grp_compute_engine_64_fu_4855_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4855_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4855_w_V = reg_5659.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4855_w_V = reg_5635.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4855_w_V = reg_5749.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4855_w_V = weight_buf_3x3_V_16_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4855_w_V = weight_buf_3x3_V_10_q1.read();
    } else {
        grp_compute_engine_64_fu_4855_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4864_ap_start() {
    grp_compute_engine_64_fu_4864_ap_start = grp_compute_engine_64_fu_4864_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4864_b_V() {
    if (((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4864_b_V = select_ln540_6_reg_10434.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4864_b_V = tmp_2_reg_10502.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4864_b_V = tmp_8_reg_10380.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4864_b_V = grp_fu_5383_p11.read();
    } else {
        grp_compute_engine_64_fu_4864_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4864_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4864_w_V = reg_5731.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4864_w_V = weight_buf_3x3_V_16_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4864_w_V = weight_buf_3x3_V_23_3_reg_10556.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4864_w_V = weight_buf_3x3_V_16_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4864_w_V = reg_5605.read();
    } else {
        grp_compute_engine_64_fu_4864_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4872_ap_start() {
    grp_compute_engine_64_fu_4872_ap_start = grp_compute_engine_64_fu_4872_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4872_b_V() {
    if (((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4872_b_V = select_ln538_6_reg_10402.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4872_b_V = tmp_11_reg_10520.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4872_b_V = tmp_7_reg_10304.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4872_b_V = tmp_5_fu_6195_p11.read();
    } else {
        grp_compute_engine_64_fu_4872_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4872_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4872_w_V = reg_5665.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4872_w_V = reg_5641.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4872_w_V = weight_buf_3x3_V_23_5_reg_10746.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4872_w_V = weight_buf_3x3_V_17_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4872_w_V = weight_buf_3x3_V_11_q0.read();
    } else {
        grp_compute_engine_64_fu_4872_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4881_ap_start() {
    grp_compute_engine_64_fu_4881_ap_start = grp_compute_engine_64_fu_4881_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4881_b_V() {
    if (((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4881_b_V = select_ln540_6_reg_10434.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4881_b_V = select_ln539_6_reg_10326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4881_b_V = tmp_8_reg_10380.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4881_b_V = grp_fu_5436_p11.read();
    } else {
        grp_compute_engine_64_fu_4881_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4881_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4881_w_V = reg_5737.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4881_w_V = weight_buf_3x3_V_17_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4881_w_V = weight_buf_3x3_V_23_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4881_w_V = weight_buf_3x3_V_17_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4881_w_V = weight_buf_3x3_V_11_q1.read();
    } else {
        grp_compute_engine_64_fu_4881_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4890_ap_start() {
    grp_compute_engine_64_fu_4890_ap_start = grp_compute_engine_64_fu_4890_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4890_b_V() {
    if (((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4890_b_V = select_ln538_6_reg_10402.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4890_b_V = tmp_9_reg_10466.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4890_b_V = tmp_10_reg_10362.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4890_b_V = grp_fu_5383_p11.read();
    } else {
        grp_compute_engine_64_fu_4890_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4890_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4890_w_V = reg_5671.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4890_w_V = reg_5647.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4890_w_V = reg_5683.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4890_w_V = weight_buf_3x3_V_18_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4890_w_V = reg_5611.read();
    } else {
        grp_compute_engine_64_fu_4890_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4898_ap_start() {
    grp_compute_engine_64_fu_4898_ap_start = grp_compute_engine_64_fu_4898_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4898_b_V() {
    if (((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4898_b_V = select_ln540_6_reg_10434.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4898_b_V = tmp_1_reg_10484.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4898_b_V = tmp_11_reg_10520.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4898_b_V = tmp_5_fu_6195_p11.read();
    } else {
        grp_compute_engine_64_fu_4898_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4898_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4898_w_V = reg_5743.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4898_w_V = weight_buf_3x3_V_18_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4898_w_V = reg_5755.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4898_w_V = weight_buf_3x3_V_18_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4898_w_V = weight_buf_3x3_V_12_q0.read();
    } else {
        grp_compute_engine_64_fu_4898_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4907_ap_start() {
    grp_compute_engine_64_fu_4907_ap_start = grp_compute_engine_64_fu_4907_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4907_b_V() {
    if (((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4907_b_V = select_ln538_6_reg_10402.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4907_b_V = tmp_2_reg_10502.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4907_b_V = tmp_1_reg_10484.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4907_b_V = grp_fu_5436_p11.read();
    } else {
        grp_compute_engine_64_fu_4907_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4907_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4907_w_V = reg_5677.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4907_w_V = weight_buf_3x3_V_24_3_reg_10561.read();
    } else if (((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4907_w_V = reg_5653.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4907_w_V = weight_buf_3x3_V_12_q1.read();
    } else {
        grp_compute_engine_64_fu_4907_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4916_ap_start() {
    grp_compute_engine_64_fu_4916_ap_start = grp_compute_engine_64_fu_4916_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4916_b_V() {
    if (((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4916_b_V = select_ln540_6_reg_10434.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4916_b_V = tmp_11_reg_10520.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4916_b_V = tmp_2_reg_10502.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4916_b_V = grp_fu_5383_p11.read();
    } else {
        grp_compute_engine_64_fu_4916_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4916_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4916_w_V = reg_5749.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4916_w_V = weight_buf_3x3_V_19_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4916_w_V = weight_buf_3x3_V_24_5_reg_10756.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4916_w_V = weight_buf_3x3_V_19_3_reg_10536.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4916_w_V = reg_5617.read();
    } else {
        grp_compute_engine_64_fu_4916_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4924_ap_start() {
    grp_compute_engine_64_fu_4924_ap_start = grp_compute_engine_64_fu_4924_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4924_b_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4924_b_V = select_ln538_6_reg_10402.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4924_b_V = tmp_2_reg_10502.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4924_b_V = select_ln539_6_reg_10326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4924_b_V = tmp_10_reg_10362.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4924_b_V = tmp_5_fu_6195_p11.read();
    } else {
        grp_compute_engine_64_fu_4924_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4924_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4924_w_V = reg_5683.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4924_w_V = weight_buf_3x3_V_28_3_reg_10581.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4924_w_V = weight_buf_3x3_V_24_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4924_w_V = weight_buf_3x3_V_19_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4924_w_V = weight_buf_3x3_V_13_q0.read();
    } else {
        grp_compute_engine_64_fu_4924_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4933_ap_start() {
    grp_compute_engine_64_fu_4933_ap_start = grp_compute_engine_64_fu_4933_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4933_b_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4933_b_V = select_ln540_6_reg_10434.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4933_b_V = tmp_9_reg_10466.read();
    } else if (((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4933_b_V = tmp_11_reg_10520.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4933_b_V = grp_fu_5436_p11.read();
    } else {
        grp_compute_engine_64_fu_4933_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4933_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4933_w_V = reg_5755.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4933_w_V = weight_buf_3x3_V_28_5_reg_10796.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4933_w_V = reg_5689.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4933_w_V = weight_buf_3x3_V_19_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4933_w_V = weight_buf_3x3_V_13_q1.read();
    } else {
        grp_compute_engine_64_fu_4933_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4942_ap_start() {
    grp_compute_engine_64_fu_4942_ap_start = grp_compute_engine_64_fu_4942_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4942_b_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4942_b_V = select_ln538_6_reg_10402.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4942_b_V = select_ln539_6_reg_10326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4942_b_V = tmp_1_reg_10484.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4942_b_V = tmp_9_reg_10466.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4942_b_V = grp_fu_5383_p11.read();
    } else {
        grp_compute_engine_64_fu_4942_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4942_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4942_w_V = reg_5689.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4942_w_V = reg_5779.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4942_w_V = reg_5761.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4942_w_V = reg_5659.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4942_w_V = reg_5623.read();
    } else {
        grp_compute_engine_64_fu_4942_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4950_ap_start() {
    grp_compute_engine_64_fu_4950_ap_start = grp_compute_engine_64_fu_4950_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4950_b_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4950_b_V = select_ln540_6_reg_10434.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4950_b_V = tmp_9_reg_10466.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4950_b_V = tmp_2_reg_10502.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4950_b_V = tmp_1_reg_10484.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4950_b_V = tmp_5_fu_6195_p11.read();
    } else {
        grp_compute_engine_64_fu_4950_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4950_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4950_w_V = reg_5761.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4950_w_V = reg_5713.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4950_w_V = weight_buf_3x3_V_25_3_reg_10566.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4950_w_V = reg_5731.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4950_w_V = weight_buf_3x3_V_14_q0.read();
    } else {
        grp_compute_engine_64_fu_4950_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4959_ap_start() {
    grp_compute_engine_64_fu_4959_ap_start = grp_compute_engine_64_fu_4959_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4959_b_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4959_b_V = select_ln538_6_reg_10402.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4959_b_V = tmp_1_reg_10484.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4959_b_V = tmp_11_reg_10520.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4959_b_V = tmp_2_reg_10502.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4959_b_V = grp_fu_5436_p11.read();
    } else {
        grp_compute_engine_64_fu_4959_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4959_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4959_w_V = reg_5695.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4959_w_V = weight_buf_3x3_V_29_2_reg_10586.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4959_w_V = weight_buf_3x3_V_25_5_reg_10766.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4959_w_V = weight_buf_3x3_V_20_3_reg_10541.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4959_w_V = weight_buf_3x3_V_14_q1.read();
    } else {
        grp_compute_engine_64_fu_4959_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4968_ap_start() {
    grp_compute_engine_64_fu_4968_ap_start = grp_compute_engine_64_fu_4968_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4968_b_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4968_b_V = select_ln540_6_reg_10434.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4968_b_V = tmp_2_reg_10502.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4968_b_V = select_ln539_6_reg_10326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4968_b_V = tmp_10_reg_10362.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4968_b_V = grp_fu_5383_p11.read();
    } else {
        grp_compute_engine_64_fu_4968_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4968_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4968_w_V = reg_5767.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4968_w_V = weight_buf_3x3_V_29_3_reg_10591.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4968_w_V = weight_buf_3x3_V_25_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4968_w_V = weight_buf_3x3_V_20_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4968_w_V = reg_5629.read();
    } else {
        grp_compute_engine_64_fu_4968_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4976_ap_start() {
    grp_compute_engine_64_fu_4976_ap_start = grp_compute_engine_64_fu_4976_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4976_b_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4976_b_V = select_ln538_6_reg_10402.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4976_b_V = tmp_9_reg_10466.read();
    } else if (((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4976_b_V = tmp_11_reg_10520.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4976_b_V = tmp_5_fu_6195_p11.read();
    } else {
        grp_compute_engine_64_fu_4976_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4976_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4976_w_V = reg_5701.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4976_w_V = weight_buf_3x3_V_29_5_reg_10806.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4976_w_V = reg_5695.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4976_w_V = weight_buf_3x3_V_20_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4976_w_V = weight_buf_3x3_V_15_q0.read();
    } else {
        grp_compute_engine_64_fu_4976_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4985_ap_start() {
    grp_compute_engine_64_fu_4985_ap_start = grp_compute_engine_64_fu_4985_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4985_b_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4985_b_V = select_ln540_6_reg_10434.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4985_b_V = select_ln539_6_reg_10326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4985_b_V = tmp_1_reg_10484.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4985_b_V = tmp_10_reg_10362.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4985_b_V = grp_fu_5436_p11.read();
    } else {
        grp_compute_engine_64_fu_4985_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4985_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4985_w_V = reg_5773.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4985_w_V = weight_buf_3x3_V_29_7_reg_11126.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4985_w_V = reg_5767.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4985_w_V = weight_buf_3x3_V_21_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4985_w_V = weight_buf_3x3_V_15_q1.read();
    } else {
        grp_compute_engine_64_fu_4985_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4994_ap_start() {
    grp_compute_engine_64_fu_4994_ap_start = grp_compute_engine_64_fu_4994_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4994_b_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4994_b_V = select_ln538_6_reg_10402.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4994_b_V = tmp_9_reg_10466.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4994_b_V = tmp_2_reg_10502.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4994_b_V = tmp_10_reg_10362.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4994_b_V = grp_fu_5383_p11.read();
    } else {
        grp_compute_engine_64_fu_4994_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4994_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4994_w_V = reg_5707.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4994_w_V = reg_5719.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4994_w_V = weight_buf_3x3_V_26_3_reg_10571.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4994_w_V = weight_buf_3x3_V_22_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4994_w_V = reg_5635.read();
    } else {
        grp_compute_engine_64_fu_4994_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5002_ap_start() {
    grp_compute_engine_64_fu_5002_ap_start = grp_compute_engine_64_fu_5002_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5002_b_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5002_b_V = select_ln540_6_reg_10434.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5002_b_V = tmp_1_reg_10484.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5002_b_V = tmp_11_reg_10520.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5002_b_V = tmp_10_reg_10362.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5002_b_V = tmp_5_fu_6195_p11.read();
    } else {
        grp_compute_engine_64_fu_5002_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5002_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5002_w_V = reg_5779.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5002_w_V = weight_buf_3x3_V_30_2_reg_10596.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5002_w_V = weight_buf_3x3_V_26_5_reg_10776.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5002_w_V = weight_buf_3x3_V_23_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5002_w_V = weight_buf_3x3_V_16_q0.read();
    } else {
        grp_compute_engine_64_fu_5002_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5011_ap_start() {
    grp_compute_engine_64_fu_5011_ap_start = grp_compute_engine_64_fu_5011_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5011_b_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5011_b_V = select_ln538_6_reg_10402.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5011_b_V = tmp_2_reg_10502.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5011_b_V = select_ln539_6_reg_10326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5011_b_V = tmp_10_reg_10362.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5011_b_V = grp_fu_5436_p11.read();
    } else {
        grp_compute_engine_64_fu_5011_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5011_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5011_w_V = weight_buf_3x3_V_29_6_reg_11121.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5011_w_V = weight_buf_3x3_V_30_3_reg_10601.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5011_w_V = weight_buf_3x3_V_26_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5011_w_V = weight_buf_3x3_V_24_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5011_w_V = weight_buf_3x3_V_16_q1.read();
    } else {
        grp_compute_engine_64_fu_5011_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5020_ap_start() {
    grp_compute_engine_64_fu_5020_ap_start = grp_compute_engine_64_fu_5020_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5020_b_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5020_b_V = select_ln540_6_reg_10434.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5020_b_V = tmp_11_reg_10520.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5020_b_V = tmp_9_reg_10466.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5020_b_V = tmp_10_reg_10362.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5020_b_V = grp_fu_5383_p11.read();
    } else {
        grp_compute_engine_64_fu_5020_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5020_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5020_w_V = reg_5713.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5020_w_V = weight_buf_3x3_V_30_5_reg_10816.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5020_w_V = reg_5701.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5020_w_V = weight_buf_3x3_V_25_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5020_w_V = reg_5641.read();
    } else {
        grp_compute_engine_64_fu_5020_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5028_ap_start() {
    grp_compute_engine_64_fu_5028_ap_start = grp_compute_engine_64_fu_5028_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5028_b_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5028_b_V = select_ln538_6_reg_10402.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5028_b_V = select_ln539_6_reg_10326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5028_b_V = tmp_1_reg_10484.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5028_b_V = tmp_10_reg_10362.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5028_b_V = tmp_5_fu_6195_p11.read();
    } else {
        grp_compute_engine_64_fu_5028_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5028_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5028_w_V = weight_buf_3x3_V_30_6_reg_11131.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5028_w_V = weight_buf_3x3_V_30_7_reg_11136.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5028_w_V = reg_5773.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5028_w_V = weight_buf_3x3_V_26_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5028_w_V = weight_buf_3x3_V_17_q0.read();
    } else {
        grp_compute_engine_64_fu_5028_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5037_ap_start() {
    grp_compute_engine_64_fu_5037_ap_start = grp_compute_engine_64_fu_5037_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5037_b_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5037_b_V = select_ln540_6_reg_10434.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5037_b_V = tmp_9_reg_10466.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5037_b_V = tmp_2_reg_10502.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5037_b_V = tmp_10_reg_10362.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5037_b_V = grp_fu_5436_p11.read();
    } else {
        grp_compute_engine_64_fu_5037_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5037_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5037_w_V = reg_5719.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5037_w_V = reg_5725.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5037_w_V = weight_buf_3x3_V_27_3_reg_10576.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5037_w_V = weight_buf_3x3_V_27_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5037_w_V = weight_buf_3x3_V_17_q1.read();
    } else {
        grp_compute_engine_64_fu_5037_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5046_ap_start() {
    grp_compute_engine_64_fu_5046_ap_start = grp_compute_engine_64_fu_5046_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5046_b_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5046_b_V = select_ln538_6_reg_10402.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5046_b_V = tmp_1_reg_10484.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5046_b_V = tmp_11_reg_10520.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5046_b_V = tmp_10_reg_10362.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5046_b_V = grp_fu_5477_p11.read();
    } else {
        grp_compute_engine_64_fu_5046_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5046_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5046_w_V = weight_buf_3x3_V_31_6_reg_11141.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5046_w_V = weight_buf_3x3_V_31_2_reg_10606.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5046_w_V = weight_buf_3x3_V_27_5_reg_10786.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5046_w_V = weight_buf_3x3_V_28_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5046_w_V = reg_5647.read();
    } else {
        grp_compute_engine_64_fu_5046_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5054_ap_start() {
    grp_compute_engine_64_fu_5054_ap_start = grp_compute_engine_64_fu_5054_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5054_b_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5054_b_V = select_ln540_6_reg_10434.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5054_b_V = tmp_2_reg_10502.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5054_b_V = select_ln539_6_reg_10326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5054_b_V = tmp_10_reg_10362.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5054_b_V = tmp_1_fu_6357_p11.read();
    } else {
        grp_compute_engine_64_fu_5054_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5054_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5054_w_V = reg_5725.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5054_w_V = weight_buf_3x3_V_31_3_reg_10611.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5054_w_V = weight_buf_3x3_V_27_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5054_w_V = weight_buf_3x3_V_29_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5054_w_V = weight_buf_3x3_V_18_q0.read();
    } else {
        grp_compute_engine_64_fu_5054_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5063_ap_start() {
    grp_compute_engine_64_fu_5063_ap_start = grp_compute_engine_64_fu_5063_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5063_b_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_5063_b_V = tmp_11_reg_10520.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_5063_b_V = tmp_9_reg_10466.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_5063_b_V = tmp_10_reg_10362.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_5063_b_V = grp_fu_5516_p11.read();
        } else {
            grp_compute_engine_64_fu_5063_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_5063_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5063_w_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_5063_w_V = weight_buf_3x3_V_31_5_reg_10826.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_5063_w_V = reg_5707.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_5063_w_V = weight_buf_3x3_V_30_q0.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_5063_w_V = weight_buf_3x3_V_18_q1.read();
        } else {
            grp_compute_engine_64_fu_5063_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_5063_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5072_ap_start() {
    grp_compute_engine_64_fu_5072_ap_start = grp_compute_engine_64_fu_5072_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5072_b_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_5072_b_V = select_ln539_6_reg_10326.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_5072_b_V = tmp_1_reg_10484.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_5072_b_V = tmp_10_reg_10362.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_5072_b_V = grp_fu_5477_p11.read();
        } else {
            grp_compute_engine_64_fu_5072_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_5072_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5072_w_V() {
    if (esl_seteq<1,1,1>(icmp_ln505_reg_10077.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_condition_4991.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_5072_w_V = weight_buf_3x3_V_31_7_reg_11146.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5022.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_5072_w_V = reg_5779.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5017.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_5072_w_V = weight_buf_3x3_V_31_q0.read();
        } else if (esl_seteq<1,1,1>(ap_condition_5011.read(), ap_const_boolean_1)) {
            grp_compute_engine_64_fu_5072_w_V = reg_5653.read();
        } else {
            grp_compute_engine_64_fu_5072_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_compute_engine_64_fu_5072_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5159_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2156.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2209.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2262.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2354.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2451.read(), ap_const_boolean_0)))) {
        grp_relu_fu_5159_ap_ce = ap_const_logic_1;
    } else {
        grp_relu_fu_5159_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5159_shiftx_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_relu_fu_5159_shiftx_V = relu_shiftx_V160_loa_reg_13399.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_relu_fu_5159_shiftx_V = relu_shiftx_V153_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_relu_fu_5159_shiftx_V = relu_shiftx_V146_loa_reg_12576.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_relu_fu_5159_shiftx_V = relu_shiftx_V139_loa_reg_12456.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_relu_fu_5159_shiftx_V = relu_shiftx_V_load_reg_12351.read();
    } else {
        grp_relu_fu_5159_shiftx_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5159_shifty_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_relu_fu_5159_shifty_V = relu_shifty_V191_loa_reg_13404.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_relu_fu_5159_shifty_V = relu_shifty_V184_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_relu_fu_5159_shifty_V = relu_shifty_V177_loa_reg_12581.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_relu_fu_5159_shifty_V = relu_shifty_V170_loa_reg_12461.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_relu_fu_5159_shifty_V = relu_shifty_V_load_reg_12356.read();
    } else {
        grp_relu_fu_5159_shifty_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5159_weight_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_relu_fu_5159_weight_V = relu_weights_V222_lo_reg_13409.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_relu_fu_5159_weight_V = relu_weights_V215_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_relu_fu_5159_weight_V = relu_weights_V208_lo_reg_12586.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_relu_fu_5159_weight_V = relu_weights_V201_lo_reg_12466.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_relu_fu_5159_weight_V = relu_weights_V_load_reg_12361.read();
    } else {
        grp_relu_fu_5159_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5167_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2158.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2211.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2264.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2355.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2466.read(), ap_const_boolean_0)))) {
        grp_relu_fu_5167_ap_ce = ap_const_logic_1;
    } else {
        grp_relu_fu_5167_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5167_shiftx_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_relu_fu_5167_shiftx_V = relu_shiftx_V161_loa_reg_13414.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_relu_fu_5167_shiftx_V = relu_shiftx_V154_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_relu_fu_5167_shiftx_V = relu_shiftx_V147_loa_reg_12606.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_relu_fu_5167_shiftx_V = relu_shiftx_V140_loa_reg_12471.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_relu_fu_5167_shiftx_V = relu_shiftx_V133_loa_reg_12366.read();
    } else {
        grp_relu_fu_5167_shiftx_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5167_shifty_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_relu_fu_5167_shifty_V = relu_shifty_V192_loa_reg_13419.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_relu_fu_5167_shifty_V = relu_shifty_V185_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_relu_fu_5167_shifty_V = relu_shifty_V178_loa_reg_12611.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_relu_fu_5167_shifty_V = relu_shifty_V171_loa_reg_12476.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_relu_fu_5167_shifty_V = relu_shifty_V164_loa_reg_12371.read();
    } else {
        grp_relu_fu_5167_shifty_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5167_weight_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_relu_fu_5167_weight_V = relu_weights_V223_lo_reg_13424.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_relu_fu_5167_weight_V = relu_weights_V216_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_relu_fu_5167_weight_V = relu_weights_V209_lo_reg_12616.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_relu_fu_5167_weight_V = relu_weights_V202_lo_reg_12481.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_relu_fu_5167_weight_V = relu_weights_V195_lo_reg_12376.read();
    } else {
        grp_relu_fu_5167_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5175_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2160.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2213.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2266.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2356.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2481.read(), ap_const_boolean_0)))) {
        grp_relu_fu_5175_ap_ce = ap_const_logic_1;
    } else {
        grp_relu_fu_5175_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5175_shiftx_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_relu_fu_5175_shiftx_V = relu_shiftx_V162_loa_reg_13429.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_relu_fu_5175_shiftx_V = relu_shiftx_V155_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_relu_fu_5175_shiftx_V = relu_shiftx_V148_loa_reg_12636.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_relu_fu_5175_shiftx_V = relu_shiftx_V141_loa_reg_12486.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_relu_fu_5175_shiftx_V = relu_shiftx_V134_loa_reg_12381.read();
    } else {
        grp_relu_fu_5175_shiftx_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5175_shifty_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_relu_fu_5175_shifty_V = relu_shifty_V193_loa_reg_13434.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_relu_fu_5175_shifty_V = relu_shifty_V186_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_relu_fu_5175_shifty_V = relu_shifty_V179_loa_reg_12641.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_relu_fu_5175_shifty_V = relu_shifty_V172_loa_reg_12491.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_relu_fu_5175_shifty_V = relu_shifty_V165_loa_reg_12386.read();
    } else {
        grp_relu_fu_5175_shifty_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5175_weight_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_relu_fu_5175_weight_V = relu_weights_V224_lo_reg_13439.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_relu_fu_5175_weight_V = relu_weights_V217_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_relu_fu_5175_weight_V = relu_weights_V210_lo_reg_12646.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_relu_fu_5175_weight_V = relu_weights_V203_lo_reg_12496.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_relu_fu_5175_weight_V = relu_weights_V196_lo_reg_12391.read();
    } else {
        grp_relu_fu_5175_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5183_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2162.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2215.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2268.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2357.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2496.read(), ap_const_boolean_0)))) {
        grp_relu_fu_5183_ap_ce = ap_const_logic_1;
    } else {
        grp_relu_fu_5183_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5183_shiftx_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_relu_fu_5183_shiftx_V = relu_shiftx_V163_loa_reg_13444.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_relu_fu_5183_shiftx_V = relu_shiftx_V156_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_relu_fu_5183_shiftx_V = relu_shiftx_V149_loa_reg_12666.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_relu_fu_5183_shiftx_V = relu_shiftx_V142_loa_reg_12501.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_relu_fu_5183_shiftx_V = relu_shiftx_V135_loa_reg_12396.read();
    } else {
        grp_relu_fu_5183_shiftx_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5183_shifty_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_relu_fu_5183_shifty_V = relu_shifty_V194_loa_reg_13449.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_relu_fu_5183_shifty_V = relu_shifty_V187_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_relu_fu_5183_shifty_V = relu_shifty_V180_loa_reg_12671.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_relu_fu_5183_shifty_V = relu_shifty_V173_loa_reg_12506.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_relu_fu_5183_shifty_V = relu_shifty_V166_loa_reg_12401.read();
    } else {
        grp_relu_fu_5183_shifty_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5183_weight_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_relu_fu_5183_weight_V = relu_weights_V225_lo_reg_13454.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_relu_fu_5183_weight_V = relu_weights_V218_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_relu_fu_5183_weight_V = relu_weights_V211_lo_reg_12676.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_relu_fu_5183_weight_V = relu_weights_V204_lo_reg_12511.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_relu_fu_5183_weight_V = relu_weights_V197_lo_reg_12406.read();
    } else {
        grp_relu_fu_5183_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5191_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2164.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2217.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2270.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2358.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2511.read(), ap_const_boolean_0)))) {
        grp_relu_fu_5191_ap_ce = ap_const_logic_1;
    } else {
        grp_relu_fu_5191_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5191_shiftx_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_relu_fu_5191_shiftx_V = relu_shiftx_V157_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_relu_fu_5191_shiftx_V = relu_shiftx_V150_loa_reg_12696.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_relu_fu_5191_shiftx_V = relu_shiftx_V143_loa_reg_12516.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_relu_fu_5191_shiftx_V = relu_shiftx_V136_loa_reg_12411.read();
    } else {
        grp_relu_fu_5191_shiftx_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5191_shifty_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_relu_fu_5191_shifty_V = relu_shifty_V188_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_relu_fu_5191_shifty_V = relu_shifty_V181_loa_reg_12701.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_relu_fu_5191_shifty_V = relu_shifty_V174_loa_reg_12521.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_relu_fu_5191_shifty_V = relu_shifty_V167_loa_reg_12416.read();
    } else {
        grp_relu_fu_5191_shifty_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5191_weight_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_relu_fu_5191_weight_V = relu_weights_V219_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_relu_fu_5191_weight_V = relu_weights_V212_lo_reg_12706.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_relu_fu_5191_weight_V = relu_weights_V205_lo_reg_12526.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_relu_fu_5191_weight_V = relu_weights_V198_lo_reg_12421.read();
    } else {
        grp_relu_fu_5191_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5199_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2166.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2219.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2272.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2359.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2526.read(), ap_const_boolean_0)))) {
        grp_relu_fu_5199_ap_ce = ap_const_logic_1;
    } else {
        grp_relu_fu_5199_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5199_shiftx_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_relu_fu_5199_shiftx_V = relu_shiftx_V158_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_relu_fu_5199_shiftx_V = relu_shiftx_V151_loa_reg_12726.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_relu_fu_5199_shiftx_V = relu_shiftx_V144_loa_reg_12531.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_relu_fu_5199_shiftx_V = relu_shiftx_V137_loa_reg_12426.read();
    } else {
        grp_relu_fu_5199_shiftx_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5199_shifty_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_relu_fu_5199_shifty_V = relu_shifty_V189_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_relu_fu_5199_shifty_V = relu_shifty_V182_loa_reg_12731.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_relu_fu_5199_shifty_V = relu_shifty_V175_loa_reg_12536.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_relu_fu_5199_shifty_V = relu_shifty_V168_loa_reg_12431.read();
    } else {
        grp_relu_fu_5199_shifty_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5199_weight_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_relu_fu_5199_weight_V = relu_weights_V220_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_relu_fu_5199_weight_V = relu_weights_V213_lo_reg_12736.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_relu_fu_5199_weight_V = relu_weights_V206_lo_reg_12541.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_relu_fu_5199_weight_V = relu_weights_V199_lo_reg_12436.read();
    } else {
        grp_relu_fu_5199_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5207_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2168.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2221.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2274.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2360.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2541.read(), ap_const_boolean_0)))) {
        grp_relu_fu_5207_ap_ce = ap_const_logic_1;
    } else {
        grp_relu_fu_5207_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5207_shiftx_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_relu_fu_5207_shiftx_V = relu_shiftx_V159_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_relu_fu_5207_shiftx_V = relu_shiftx_V152_loa_reg_12756.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_relu_fu_5207_shiftx_V = relu_shiftx_V145_loa_reg_12546.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_relu_fu_5207_shiftx_V = relu_shiftx_V138_loa_reg_12441.read();
    } else {
        grp_relu_fu_5207_shiftx_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5207_shifty_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_relu_fu_5207_shifty_V = relu_shifty_V190_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_relu_fu_5207_shifty_V = relu_shifty_V183_loa_reg_12761.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_relu_fu_5207_shifty_V = relu_shifty_V176_loa_reg_12551.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_relu_fu_5207_shifty_V = relu_shifty_V169_loa_reg_12446.read();
    } else {
        grp_relu_fu_5207_shifty_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5207_weight_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_relu_fu_5207_weight_V = relu_weights_V221_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_relu_fu_5207_weight_V = relu_weights_V214_lo_reg_12766.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_relu_fu_5207_weight_V = relu_weights_V207_lo_reg_12556.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_relu_fu_5207_weight_V = relu_weights_V200_lo_reg_12451.read();
    } else {
        grp_relu_fu_5207_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5292_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp1831.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp1862.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp1904.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2052.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2144.read(), ap_const_boolean_0)))) {
        grp_sum_engine_fu_5292_ap_ce = ap_const_logic_1;
    } else {
        grp_sum_engine_fu_5292_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5292_t0_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t0_V = p_036_27_reg_11861_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t0_V = p_036_20_reg_11686.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t0_V = p_036_13_reg_11041_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t0_V = p_036_7_reg_10936.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t0_V = p_s_reg_10831.read();
    } else {
        grp_sum_engine_fu_5292_t0_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5292_t1_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t1_V = tmp1_V_0_28_reg_10791_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t1_V = tmp1_V_0_21_reg_10721_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t1_V = tmp1_V_0_14_reg_10686_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t1_V = tmp1_V_0_7_reg_10651_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t1_V = tmp1_V_reg_10616.read();
    } else {
        grp_sum_engine_fu_5292_t1_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5292_t2_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t2_V = tmp2_V_0_27_reg_11866_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t2_V = tmp2_V_0_20_reg_11691.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t2_V = tmp2_V_0_13_reg_11046_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t2_V = tmp2_V_0_7_reg_10941.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t2_V = tmp2_V_reg_10836.read();
    } else {
        grp_sum_engine_fu_5292_t2_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5292_t3_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t3_V = tmp3_V_0_27_reg_12071.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t3_V = tmp3_V_0_20_reg_11696.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t3_V = tmp3_V_0_13_reg_11051_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t3_V = tmp3_V_0_7_reg_10946.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t3_V = tmp3_V_reg_10841.read();
    } else {
        grp_sum_engine_fu_5292_t3_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5292_t4_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t4_V = tmp4_V_0_27_reg_11421_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t4_V = tmp4_V_0_20_reg_11386_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t4_V = tmp4_V_0_13_reg_11291.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t4_V = tmp4_V_0_7_reg_11221.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t4_V = tmp4_V_reg_11151.read();
    } else {
        grp_sum_engine_fu_5292_t4_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5292_t5_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t5_V = tmp5_V_0_27_reg_12076.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t5_V = tmp5_V_0_20_reg_11701.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t5_V = tmp5_V_0_13_reg_11296.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t5_V = tmp5_V_0_7_reg_11226.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t5_V = tmp5_V_reg_11156.read();
    } else {
        grp_sum_engine_fu_5292_t5_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5292_t6_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t6_V = tmp6_V_0_27_reg_12241.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t6_V = tmp6_V_0_20_reg_12171.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t6_V = tmp6_V_0_13_reg_12011.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t6_V = tmp6_V_0_7_reg_11941.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t6_V = tmp6_V_reg_11871.read();
    } else {
        grp_sum_engine_fu_5292_t6_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5292_t7_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t7_V = tmp7_V_0_27_reg_12081.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t7_V = tmp7_V_0_20_reg_11706.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t7_V = tmp7_V_0_13_reg_11651.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t7_V = tmp7_V_0_7_reg_11546.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t7_V = tmp7_V_reg_11441.read();
    } else {
        grp_sum_engine_fu_5292_t7_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5292_t8_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t8_V = tmp8_V_0_27_reg_12246.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t8_V = tmp8_V_0_20_reg_12176.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t8_V = tmp8_V_0_13_reg_12016.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t8_V = tmp8_V_0_7_reg_11946.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5292_t8_V = tmp8_V_reg_11876.read();
    } else {
        grp_sum_engine_fu_5292_t8_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5305_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp1832.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp1863.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp1908.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2058.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2145.read(), ap_const_boolean_0)))) {
        grp_sum_engine_fu_5305_ap_ce = ap_const_logic_1;
    } else {
        grp_sum_engine_fu_5305_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5305_t0_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t0_V = p_036_28_reg_12086.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t0_V = p_036_21_reg_11711.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t0_V = p_036_14_reg_11056_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t0_V = p_036_8_reg_10951.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t0_V = p_036_1_reg_10846.read();
    } else {
        grp_sum_engine_fu_5305_t0_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5305_t1_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t1_V = tmp1_V_0_29_reg_10801_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t1_V = tmp1_V_0_22_reg_10731_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t1_V = tmp1_V_0_15_reg_10691_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t1_V = tmp1_V_0_8_reg_10656_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t1_V = tmp1_V_0_1_reg_10621.read();
    } else {
        grp_sum_engine_fu_5305_t1_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5305_t2_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t2_V = tmp2_V_0_28_reg_12091.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t2_V = tmp2_V_0_21_reg_11716.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t2_V = tmp2_V_0_14_reg_11061_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t2_V = tmp2_V_0_8_reg_10956.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t2_V = tmp2_V_0_1_reg_10851.read();
    } else {
        grp_sum_engine_fu_5305_t2_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5305_t3_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t3_V = tmp3_V_0_28_reg_12096.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t3_V = tmp3_V_0_21_reg_11721.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t3_V = tmp3_V_0_14_reg_11066_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t3_V = tmp3_V_0_8_reg_10961.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t3_V = tmp3_V_0_1_reg_10856.read();
    } else {
        grp_sum_engine_fu_5305_t3_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5305_t4_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t4_V = tmp4_V_0_28_reg_11426_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t4_V = tmp4_V_0_21_reg_11391_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t4_V = tmp4_V_0_14_reg_11301.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t4_V = tmp4_V_0_8_reg_11231.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t4_V = tmp4_V_0_1_reg_11161.read();
    } else {
        grp_sum_engine_fu_5305_t4_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5305_t5_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t5_V = tmp5_V_0_28_reg_12101.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t5_V = tmp5_V_0_21_reg_11726.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t5_V = tmp5_V_0_14_reg_11306.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t5_V = tmp5_V_0_8_reg_11236.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t5_V = tmp5_V_0_1_reg_11166.read();
    } else {
        grp_sum_engine_fu_5305_t5_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5305_t6_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t6_V = tmp6_V_0_28_reg_12251.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t6_V = tmp6_V_0_21_reg_12181.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t6_V = tmp6_V_0_14_reg_12021.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t6_V = tmp6_V_0_8_reg_11951.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t6_V = tmp6_V_0_1_reg_11881.read();
    } else {
        grp_sum_engine_fu_5305_t6_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5305_t7_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t7_V = tmp7_V_0_28_reg_12106.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t7_V = tmp7_V_0_21_reg_11731.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t7_V = tmp7_V_0_14_reg_11656.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t7_V = tmp7_V_0_8_reg_11561.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t7_V = tmp7_V_0_1_reg_11456.read();
    } else {
        grp_sum_engine_fu_5305_t7_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5305_t8_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t8_V = tmp8_V_0_28_reg_12256.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t8_V = tmp8_V_0_21_reg_12186.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t8_V = tmp8_V_0_14_reg_12026.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t8_V = tmp8_V_0_8_reg_11956.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5305_t8_V = tmp8_V_0_1_reg_11886.read();
    } else {
        grp_sum_engine_fu_5305_t8_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5318_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp1833.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp1864.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp1912.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2064.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2146.read(), ap_const_boolean_0)))) {
        grp_sum_engine_fu_5318_ap_ce = ap_const_logic_1;
    } else {
        grp_sum_engine_fu_5318_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5318_t0_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t0_V = p_036_29_reg_12111.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t0_V = p_036_22_reg_11736.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t0_V = p_036_15_reg_11071_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t0_V = p_036_9_reg_10966.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t0_V = p_036_2_reg_10861.read();
    } else {
        grp_sum_engine_fu_5318_t0_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5318_t1_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t1_V = tmp1_V_0_30_reg_10811_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t1_V = tmp1_V_0_23_reg_10741_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t1_V = tmp1_V_0_16_reg_10696_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t1_V = tmp1_V_0_9_reg_10661_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t1_V = tmp1_V_0_2_reg_10626.read();
    } else {
        grp_sum_engine_fu_5318_t1_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5318_t2_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t2_V = tmp2_V_0_29_reg_12116.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t2_V = tmp2_V_0_22_reg_11741.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t2_V = tmp2_V_0_15_reg_11076_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t2_V = tmp2_V_0_9_reg_10971.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t2_V = tmp2_V_0_2_reg_10866.read();
    } else {
        grp_sum_engine_fu_5318_t2_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5318_t3_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t3_V = tmp3_V_0_29_reg_12121.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t3_V = tmp3_V_0_22_reg_11746.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t3_V = tmp3_V_0_15_reg_11081_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t3_V = tmp3_V_0_9_reg_10976.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t3_V = tmp3_V_0_2_reg_10871.read();
    } else {
        grp_sum_engine_fu_5318_t3_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5318_t4_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t4_V = tmp4_V_0_29_reg_11431_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t4_V = tmp4_V_0_22_reg_11396_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t4_V = tmp4_V_0_15_reg_11311.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t4_V = tmp4_V_0_9_reg_11241.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t4_V = tmp4_V_0_2_reg_11171.read();
    } else {
        grp_sum_engine_fu_5318_t4_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5318_t5_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t5_V = tmp5_V_0_29_reg_12126.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t5_V = tmp5_V_0_22_reg_11751.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t5_V = tmp5_V_0_15_reg_11316.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t5_V = tmp5_V_0_9_reg_11246.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t5_V = tmp5_V_0_2_reg_11176.read();
    } else {
        grp_sum_engine_fu_5318_t5_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5318_t6_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t6_V = tmp6_V_0_29_reg_12261.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t6_V = tmp6_V_0_22_reg_12191.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t6_V = tmp6_V_0_15_reg_12031.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t6_V = tmp6_V_0_9_reg_11961.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t6_V = tmp6_V_0_2_reg_11891.read();
    } else {
        grp_sum_engine_fu_5318_t6_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5318_t7_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t7_V = tmp7_V_0_29_reg_12131.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t7_V = tmp7_V_0_22_reg_11756.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t7_V = tmp7_V_0_15_reg_11661.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t7_V = tmp7_V_0_9_reg_11576.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t7_V = tmp7_V_0_2_reg_11471.read();
    } else {
        grp_sum_engine_fu_5318_t7_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5318_t8_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t8_V = tmp8_V_0_29_reg_12266.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t8_V = tmp8_V_0_22_reg_12196.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t8_V = tmp8_V_0_15_reg_12036.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t8_V = tmp8_V_0_9_reg_11966.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5318_t8_V = tmp8_V_0_2_reg_11896.read();
    } else {
        grp_sum_engine_fu_5318_t8_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5331_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp1834.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp1865.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp1916.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2070.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2147.read(), ap_const_boolean_0)))) {
        grp_sum_engine_fu_5331_ap_ce = ap_const_logic_1;
    } else {
        grp_sum_engine_fu_5331_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5331_t0_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t0_V = p_036_30_reg_12136.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t0_V = p_036_23_reg_11761.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t0_V = p_036_16_reg_11086_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t0_V = p_036_s_reg_10981.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t0_V = p_036_3_reg_10876.read();
    } else {
        grp_sum_engine_fu_5331_t0_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5331_t1_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t1_V = tmp1_V_0_s_reg_10821_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t1_V = tmp1_V_0_24_reg_10751_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t1_V = tmp1_V_0_17_reg_10701_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t1_V = tmp1_V_0_10_reg_10666_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t1_V = tmp1_V_0_3_reg_10631.read();
    } else {
        grp_sum_engine_fu_5331_t1_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5331_t2_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t2_V = tmp2_V_0_30_reg_12141.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t2_V = tmp2_V_0_23_reg_11766.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t2_V = tmp2_V_0_16_reg_11091_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t2_V = tmp2_V_0_s_reg_10986.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t2_V = tmp2_V_0_3_reg_10881.read();
    } else {
        grp_sum_engine_fu_5331_t2_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5331_t3_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t3_V = tmp3_V_0_30_reg_12146.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t3_V = tmp3_V_0_23_reg_11771.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t3_V = tmp3_V_0_16_reg_11096_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t3_V = tmp3_V_0_s_reg_10991.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t3_V = tmp3_V_0_3_reg_10886.read();
    } else {
        grp_sum_engine_fu_5331_t3_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5331_t4_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t4_V = tmp4_V_0_30_reg_11436_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t4_V = tmp4_V_0_23_reg_11401_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t4_V = tmp4_V_0_16_reg_11321.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t4_V = tmp4_V_0_s_reg_11251.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t4_V = tmp4_V_0_3_reg_11181.read();
    } else {
        grp_sum_engine_fu_5331_t4_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5331_t5_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t5_V = tmp5_V_0_30_reg_12151.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t5_V = tmp5_V_0_23_reg_11776.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t5_V = tmp5_V_0_16_reg_11326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t5_V = tmp5_V_0_s_reg_11256.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t5_V = tmp5_V_0_3_reg_11186.read();
    } else {
        grp_sum_engine_fu_5331_t5_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5331_t6_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t6_V = tmp6_V_0_30_reg_12271.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t6_V = tmp6_V_0_23_reg_12201.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t6_V = tmp6_V_0_16_reg_12041.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t6_V = tmp6_V_0_s_reg_11971.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t6_V = tmp6_V_0_3_reg_11901.read();
    } else {
        grp_sum_engine_fu_5331_t6_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5331_t7_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t7_V = tmp7_V_0_30_reg_12156.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t7_V = tmp7_V_0_23_reg_11781.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t7_V = tmp7_V_0_16_reg_11666.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t7_V = tmp7_V_0_s_reg_11591.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t7_V = tmp7_V_0_3_reg_11486.read();
    } else {
        grp_sum_engine_fu_5331_t7_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5331_t8_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t8_V = tmp8_V_0_30_reg_12276.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t8_V = tmp8_V_0_23_reg_12206.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t8_V = tmp8_V_0_16_reg_12046.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t8_V = tmp8_V_0_s_reg_11976.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5331_t8_V = tmp8_V_0_3_reg_11906.read();
    } else {
        grp_sum_engine_fu_5331_t8_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5344_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp1835.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp1866.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp1920.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2076.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2148.read(), ap_const_boolean_0)))) {
        grp_sum_engine_fu_5344_ap_ce = ap_const_logic_1;
    } else {
        grp_sum_engine_fu_5344_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5344_t0_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t0_V = p_036_24_reg_11786.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t0_V = p_036_17_reg_11101_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t0_V = p_036_10_reg_10996.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t0_V = p_036_4_reg_10891.read();
    } else {
        grp_sum_engine_fu_5344_t0_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5344_t1_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t1_V = tmp1_V_0_25_reg_10761_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t1_V = tmp1_V_0_18_reg_10706_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t1_V = tmp1_V_0_11_reg_10671_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t1_V = tmp1_V_0_4_reg_10636.read();
    } else {
        grp_sum_engine_fu_5344_t1_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5344_t2_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t2_V = tmp2_V_0_24_reg_11791.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t2_V = tmp2_V_0_17_reg_11106_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t2_V = tmp2_V_0_10_reg_11001.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t2_V = tmp2_V_0_4_reg_10896.read();
    } else {
        grp_sum_engine_fu_5344_t2_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5344_t3_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t3_V = tmp3_V_0_24_reg_11796.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t3_V = tmp3_V_0_17_reg_11111_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t3_V = tmp3_V_0_10_reg_11006.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t3_V = tmp3_V_0_4_reg_10901.read();
    } else {
        grp_sum_engine_fu_5344_t3_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5344_t4_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t4_V = tmp4_V_0_24_reg_11406_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t4_V = tmp4_V_0_17_reg_11331.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t4_V = tmp4_V_0_10_reg_11261.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t4_V = tmp4_V_0_4_reg_11191.read();
    } else {
        grp_sum_engine_fu_5344_t4_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5344_t5_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t5_V = tmp5_V_0_24_reg_11801.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t5_V = tmp5_V_0_17_reg_11336.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t5_V = tmp5_V_0_10_reg_11266.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t5_V = tmp5_V_0_4_reg_11196.read();
    } else {
        grp_sum_engine_fu_5344_t5_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5344_t6_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t6_V = tmp6_V_0_24_reg_12211.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t6_V = tmp6_V_0_17_reg_12051.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t6_V = tmp6_V_0_10_reg_11981.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t6_V = tmp6_V_0_4_reg_11911.read();
    } else {
        grp_sum_engine_fu_5344_t6_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5344_t7_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t7_V = tmp7_V_0_24_reg_11806.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t7_V = tmp7_V_0_17_reg_11671.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t7_V = tmp7_V_0_10_reg_11606.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t7_V = tmp7_V_0_4_reg_11501.read();
    } else {
        grp_sum_engine_fu_5344_t7_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5344_t8_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t8_V = tmp8_V_0_24_reg_12216.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t8_V = tmp8_V_0_17_reg_12056.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t8_V = tmp8_V_0_10_reg_11986.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5344_t8_V = tmp8_V_0_4_reg_11916.read();
    } else {
        grp_sum_engine_fu_5344_t8_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5357_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp1836.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp1867.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp1924.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2082.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2149.read(), ap_const_boolean_0)))) {
        grp_sum_engine_fu_5357_ap_ce = ap_const_logic_1;
    } else {
        grp_sum_engine_fu_5357_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5357_t0_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t0_V = p_036_25_reg_11811.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t0_V = p_036_18_reg_11116_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t0_V = p_036_11_reg_11011.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t0_V = p_036_5_reg_10906.read();
    } else {
        grp_sum_engine_fu_5357_t0_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5357_t1_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t1_V = tmp1_V_0_26_reg_10771_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t1_V = tmp1_V_0_19_reg_10711_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t1_V = tmp1_V_0_12_reg_10676_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t1_V = tmp1_V_0_5_reg_10641.read();
    } else {
        grp_sum_engine_fu_5357_t1_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5357_t2_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t2_V = tmp2_V_0_25_reg_11816.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t2_V = tmp2_V_0_18_reg_11341.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t2_V = tmp2_V_0_11_reg_11016.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t2_V = tmp2_V_0_5_reg_10911.read();
    } else {
        grp_sum_engine_fu_5357_t2_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5357_t3_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t3_V = tmp3_V_0_25_reg_11821.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t3_V = tmp3_V_0_18_reg_11346.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t3_V = tmp3_V_0_11_reg_11021.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t3_V = tmp3_V_0_5_reg_10916.read();
    } else {
        grp_sum_engine_fu_5357_t3_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5357_t4_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t4_V = tmp4_V_0_25_reg_11411_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t4_V = tmp4_V_0_18_reg_11351.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t4_V = tmp4_V_0_11_reg_11271.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t4_V = tmp4_V_0_5_reg_11201.read();
    } else {
        grp_sum_engine_fu_5357_t4_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5357_t5_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t5_V = tmp5_V_0_25_reg_11826.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t5_V = tmp5_V_0_18_reg_11356.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t5_V = tmp5_V_0_11_reg_11276.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t5_V = tmp5_V_0_5_reg_11206.read();
    } else {
        grp_sum_engine_fu_5357_t5_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5357_t6_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t6_V = tmp6_V_0_25_reg_12221.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t6_V = tmp6_V_0_18_reg_12061.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t6_V = tmp6_V_0_11_reg_11991.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t6_V = tmp6_V_0_5_reg_11921.read();
    } else {
        grp_sum_engine_fu_5357_t6_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5357_t7_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t7_V = tmp7_V_0_25_reg_11831.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t7_V = tmp7_V_0_18_reg_11676.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t7_V = tmp7_V_0_11_reg_11621.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t7_V = tmp7_V_0_5_reg_11516.read();
    } else {
        grp_sum_engine_fu_5357_t7_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5357_t8_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t8_V = tmp8_V_0_25_reg_12226.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t8_V = tmp8_V_0_18_reg_12066.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t8_V = tmp8_V_0_11_reg_11996.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5357_t8_V = tmp8_V_0_5_reg_11926.read();
    } else {
        grp_sum_engine_fu_5357_t8_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5370_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp1837.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp1868.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp1928.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2088.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2150.read(), ap_const_boolean_0)))) {
        grp_sum_engine_fu_5370_ap_ce = ap_const_logic_1;
    } else {
        grp_sum_engine_fu_5370_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5370_t0_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t0_V = p_036_26_reg_11836.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t0_V = p_036_19_reg_11361.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t0_V = p_036_12_reg_11026.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t0_V = p_036_6_reg_10921.read();
    } else {
        grp_sum_engine_fu_5370_t0_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5370_t1_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t1_V = tmp1_V_0_27_reg_10781_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t1_V = tmp1_V_0_20_reg_10716_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t1_V = tmp1_V_0_13_reg_10681_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t1_V = tmp1_V_0_6_reg_10646.read();
    } else {
        grp_sum_engine_fu_5370_t1_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5370_t2_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t2_V = tmp2_V_0_26_reg_11841.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t2_V = tmp2_V_0_19_reg_11366.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t2_V = tmp2_V_0_12_reg_11031.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t2_V = tmp2_V_0_6_reg_10926.read();
    } else {
        grp_sum_engine_fu_5370_t2_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5370_t3_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t3_V = tmp3_V_0_26_reg_11846.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t3_V = tmp3_V_0_19_reg_11371.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t3_V = tmp3_V_0_12_reg_11036.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t3_V = tmp3_V_0_6_reg_10931.read();
    } else {
        grp_sum_engine_fu_5370_t3_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5370_t4_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t4_V = tmp4_V_0_26_reg_11416_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t4_V = tmp4_V_0_19_reg_11376.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t4_V = tmp4_V_0_12_reg_11281.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t4_V = tmp4_V_0_6_reg_11211.read();
    } else {
        grp_sum_engine_fu_5370_t4_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5370_t5_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t5_V = tmp5_V_0_26_reg_11851.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t5_V = tmp5_V_0_19_reg_11381.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t5_V = tmp5_V_0_12_reg_11286.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t5_V = tmp5_V_0_6_reg_11216.read();
    } else {
        grp_sum_engine_fu_5370_t5_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5370_t6_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t6_V = tmp6_V_0_26_reg_12231.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t6_V = tmp6_V_0_19_reg_12161.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t6_V = tmp6_V_0_12_reg_12001.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t6_V = tmp6_V_0_6_reg_11931.read();
    } else {
        grp_sum_engine_fu_5370_t6_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5370_t7_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t7_V = tmp7_V_0_26_reg_11856.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t7_V = tmp7_V_0_19_reg_11681.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t7_V = tmp7_V_0_12_reg_11636.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t7_V = tmp7_V_0_6_reg_11531.read();
    } else {
        grp_sum_engine_fu_5370_t7_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5370_t8_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t8_V = tmp8_V_0_26_reg_12236.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t8_V = tmp8_V_0_19_reg_12166.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t8_V = tmp8_V_0_12_reg_12006.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_sum_engine_fu_5370_t8_V = tmp8_V_0_6_reg_11936.read();
    } else {
        grp_sum_engine_fu_5370_t8_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_icmp_ln500_fu_5791_p2() {
    icmp_ln500_fu_5791_p2 = (!trunc_ln500_fu_5787_p1.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln500_fu_5787_p1.read() == ap_const_lv2_1);
}

void pgconv64_1bit::thread_icmp_ln505_fu_5886_p2() {
    icmp_ln505_fu_5886_p2 = (!ap_phi_mux_indvar_flatten_phi_fu_4517_p4.read().is_01() || !select_ln477_reg_10072.read().is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_flatten_phi_fu_4517_p4.read() == select_ln477_reg_10072.read());
}

void pgconv64_1bit::thread_icmp_ln506_fu_5897_p2() {
    icmp_ln506_fu_5897_p2 = (!ap_phi_mux_col0_0_phi_fu_4539_p4.read().is_01() || !select_ln500_reg_9267.read().is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_col0_0_phi_fu_4539_p4.read() == select_ln500_reg_9267.read());
}

void pgconv64_1bit::thread_icmp_ln538_10_fu_5997_p2() {
    icmp_ln538_10_fu_5997_p2 = (!select_ln500_2_fu_5934_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(select_ln500_2_fu_5934_p3.read() == ap_const_lv4_3);
}

void pgconv64_1bit::thread_icmp_ln538_11_fu_6011_p2() {
    icmp_ln538_11_fu_6011_p2 = (!select_ln500_2_fu_5934_p3.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(select_ln500_2_fu_5934_p3.read() == ap_const_lv4_4);
}

void pgconv64_1bit::thread_icmp_ln538_12_fu_6025_p2() {
    icmp_ln538_12_fu_6025_p2 = (!select_ln500_2_fu_5934_p3.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(select_ln500_2_fu_5934_p3.read() == ap_const_lv4_5);
}

void pgconv64_1bit::thread_icmp_ln538_13_fu_6039_p2() {
    icmp_ln538_13_fu_6039_p2 = (!select_ln500_2_fu_5934_p3.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(select_ln500_2_fu_5934_p3.read() == ap_const_lv4_6);
}

void pgconv64_1bit::thread_icmp_ln538_1_fu_5850_p2() {
    icmp_ln538_1_fu_5850_p2 = (!row_2_fu_5837_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(row_2_fu_5837_p3.read() == ap_const_lv4_1);
}

void pgconv64_1bit::thread_icmp_ln538_2_fu_5856_p2() {
    icmp_ln538_2_fu_5856_p2 = (!row_2_fu_5837_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(row_2_fu_5837_p3.read() == ap_const_lv4_2);
}

void pgconv64_1bit::thread_icmp_ln538_3_fu_5862_p2() {
    icmp_ln538_3_fu_5862_p2 = (!row_2_fu_5837_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(row_2_fu_5837_p3.read() == ap_const_lv4_3);
}

void pgconv64_1bit::thread_icmp_ln538_4_fu_5868_p2() {
    icmp_ln538_4_fu_5868_p2 = (!row_2_fu_5837_p3.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(row_2_fu_5837_p3.read() == ap_const_lv4_4);
}

void pgconv64_1bit::thread_icmp_ln538_5_fu_5874_p2() {
    icmp_ln538_5_fu_5874_p2 = (!row_2_fu_5837_p3.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(row_2_fu_5837_p3.read() == ap_const_lv4_5);
}

void pgconv64_1bit::thread_icmp_ln538_6_fu_5880_p2() {
    icmp_ln538_6_fu_5880_p2 = (!row_2_fu_5837_p3.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(row_2_fu_5837_p3.read() == ap_const_lv4_6);
}

void pgconv64_1bit::thread_icmp_ln538_7_fu_5955_p2() {
    icmp_ln538_7_fu_5955_p2 = (!select_ln500_2_fu_5934_p3.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(select_ln500_2_fu_5934_p3.read() == ap_const_lv4_0);
}

void pgconv64_1bit::thread_icmp_ln538_8_fu_5969_p2() {
    icmp_ln538_8_fu_5969_p2 = (!select_ln500_2_fu_5934_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(select_ln500_2_fu_5934_p3.read() == ap_const_lv4_1);
}

void pgconv64_1bit::thread_icmp_ln538_9_fu_5983_p2() {
    icmp_ln538_9_fu_5983_p2 = (!select_ln500_2_fu_5934_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(select_ln500_2_fu_5934_p3.read() == ap_const_lv4_2);
}

void pgconv64_1bit::thread_icmp_ln538_fu_5844_p2() {
    icmp_ln538_fu_5844_p2 = (!row_2_fu_5837_p3.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(row_2_fu_5837_p3.read() == ap_const_lv4_0);
}

void pgconv64_1bit::thread_or_ln340_352_fu_6590_p2() {
    or_ln340_352_fu_6590_p2 = (tmp_776_fu_6558_p3.read() | xor_ln340_1_fu_6584_p2.read());
}

void pgconv64_1bit::thread_or_ln340_353_fu_6678_p2() {
    or_ln340_353_fu_6678_p2 = (tmp_778_fu_6646_p3.read() | xor_ln340_2_fu_6672_p2.read());
}

void pgconv64_1bit::thread_or_ln340_354_fu_6766_p2() {
    or_ln340_354_fu_6766_p2 = (tmp_780_fu_6734_p3.read() | xor_ln340_3_fu_6760_p2.read());
}

void pgconv64_1bit::thread_or_ln340_355_fu_6854_p2() {
    or_ln340_355_fu_6854_p2 = (tmp_782_fu_6822_p3.read() | xor_ln340_4_fu_6848_p2.read());
}

void pgconv64_1bit::thread_or_ln340_356_fu_6942_p2() {
    or_ln340_356_fu_6942_p2 = (tmp_784_fu_6910_p3.read() | xor_ln340_5_fu_6936_p2.read());
}

void pgconv64_1bit::thread_or_ln340_357_fu_7030_p2() {
    or_ln340_357_fu_7030_p2 = (tmp_786_fu_6998_p3.read() | xor_ln340_6_fu_7024_p2.read());
}

void pgconv64_1bit::thread_or_ln340_358_fu_7118_p2() {
    or_ln340_358_fu_7118_p2 = (tmp_788_fu_7086_p3.read() | xor_ln340_7_fu_7112_p2.read());
}

void pgconv64_1bit::thread_or_ln340_359_fu_7206_p2() {
    or_ln340_359_fu_7206_p2 = (tmp_790_fu_7174_p3.read() | xor_ln340_8_fu_7200_p2.read());
}

void pgconv64_1bit::thread_or_ln340_360_fu_7294_p2() {
    or_ln340_360_fu_7294_p2 = (tmp_792_fu_7262_p3.read() | xor_ln340_9_fu_7288_p2.read());
}

void pgconv64_1bit::thread_or_ln340_361_fu_7382_p2() {
    or_ln340_361_fu_7382_p2 = (tmp_794_fu_7350_p3.read() | xor_ln340_10_fu_7376_p2.read());
}

void pgconv64_1bit::thread_or_ln340_362_fu_7470_p2() {
    or_ln340_362_fu_7470_p2 = (tmp_796_fu_7438_p3.read() | xor_ln340_11_fu_7464_p2.read());
}

void pgconv64_1bit::thread_or_ln340_363_fu_7558_p2() {
    or_ln340_363_fu_7558_p2 = (tmp_798_fu_7526_p3.read() | xor_ln340_12_fu_7552_p2.read());
}

void pgconv64_1bit::thread_or_ln340_364_fu_7646_p2() {
    or_ln340_364_fu_7646_p2 = (tmp_800_fu_7614_p3.read() | xor_ln340_13_fu_7640_p2.read());
}

void pgconv64_1bit::thread_or_ln340_365_fu_7734_p2() {
    or_ln340_365_fu_7734_p2 = (tmp_802_fu_7702_p3.read() | xor_ln340_14_fu_7728_p2.read());
}

void pgconv64_1bit::thread_or_ln340_366_fu_7822_p2() {
    or_ln340_366_fu_7822_p2 = (tmp_804_fu_7790_p3.read() | xor_ln340_15_fu_7816_p2.read());
}

void pgconv64_1bit::thread_or_ln340_367_fu_7910_p2() {
    or_ln340_367_fu_7910_p2 = (tmp_806_fu_7878_p3.read() | xor_ln340_16_fu_7904_p2.read());
}

void pgconv64_1bit::thread_or_ln340_368_fu_7998_p2() {
    or_ln340_368_fu_7998_p2 = (tmp_808_fu_7966_p3.read() | xor_ln340_17_fu_7992_p2.read());
}

void pgconv64_1bit::thread_or_ln340_369_fu_8086_p2() {
    or_ln340_369_fu_8086_p2 = (tmp_810_fu_8054_p3.read() | xor_ln340_18_fu_8080_p2.read());
}

void pgconv64_1bit::thread_or_ln340_370_fu_8174_p2() {
    or_ln340_370_fu_8174_p2 = (tmp_812_fu_8142_p3.read() | xor_ln340_19_fu_8168_p2.read());
}

void pgconv64_1bit::thread_or_ln340_371_fu_8262_p2() {
    or_ln340_371_fu_8262_p2 = (tmp_814_fu_8230_p3.read() | xor_ln340_20_fu_8256_p2.read());
}

void pgconv64_1bit::thread_or_ln340_372_fu_8350_p2() {
    or_ln340_372_fu_8350_p2 = (tmp_816_fu_8318_p3.read() | xor_ln340_21_fu_8344_p2.read());
}

void pgconv64_1bit::thread_or_ln340_373_fu_8438_p2() {
    or_ln340_373_fu_8438_p2 = (tmp_818_fu_8406_p3.read() | xor_ln340_22_fu_8432_p2.read());
}

void pgconv64_1bit::thread_or_ln340_374_fu_8526_p2() {
    or_ln340_374_fu_8526_p2 = (tmp_820_fu_8494_p3.read() | xor_ln340_23_fu_8520_p2.read());
}

void pgconv64_1bit::thread_or_ln340_375_fu_8614_p2() {
    or_ln340_375_fu_8614_p2 = (tmp_822_fu_8582_p3.read() | xor_ln340_24_fu_8608_p2.read());
}

void pgconv64_1bit::thread_or_ln340_376_fu_8702_p2() {
    or_ln340_376_fu_8702_p2 = (tmp_824_fu_8670_p3.read() | xor_ln340_25_fu_8696_p2.read());
}

void pgconv64_1bit::thread_or_ln340_377_fu_8790_p2() {
    or_ln340_377_fu_8790_p2 = (tmp_826_fu_8758_p3.read() | xor_ln340_26_fu_8784_p2.read());
}

void pgconv64_1bit::thread_or_ln340_378_fu_8878_p2() {
    or_ln340_378_fu_8878_p2 = (tmp_828_fu_8846_p3.read() | xor_ln340_27_fu_8872_p2.read());
}

void pgconv64_1bit::thread_or_ln340_379_fu_8966_p2() {
    or_ln340_379_fu_8966_p2 = (tmp_830_fu_8934_p3.read() | xor_ln340_28_fu_8960_p2.read());
}

void pgconv64_1bit::thread_or_ln340_380_fu_9054_p2() {
    or_ln340_380_fu_9054_p2 = (tmp_832_fu_9022_p3.read() | xor_ln340_29_fu_9048_p2.read());
}

void pgconv64_1bit::thread_or_ln340_381_fu_9142_p2() {
    or_ln340_381_fu_9142_p2 = (tmp_834_fu_9110_p3.read() | xor_ln340_30_fu_9136_p2.read());
}

void pgconv64_1bit::thread_or_ln340_382_fu_9230_p2() {
    or_ln340_382_fu_9230_p2 = (tmp_836_fu_9198_p3.read() | xor_ln340_31_fu_9224_p2.read());
}

void pgconv64_1bit::thread_or_ln340_fu_6502_p2() {
    or_ln340_fu_6502_p2 = (tmp_774_fu_6470_p3.read() | xor_ln340_fu_6496_p2.read());
}

void pgconv64_1bit::thread_or_ln513_1_fu_5928_p2() {
    or_ln513_1_fu_5928_p2 = (shl_ln513_mid1_fu_5920_p3.read() | ap_const_lv4_1);
}

void pgconv64_1bit::thread_relu_shiftx_V133_address0() {
    relu_shiftx_V133_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V133_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shiftx_V133_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V133_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V134_address0() {
    relu_shiftx_V134_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V134_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shiftx_V134_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V134_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V135_address0() {
    relu_shiftx_V135_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V135_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shiftx_V135_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V135_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V136_address0() {
    relu_shiftx_V136_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V136_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shiftx_V136_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V136_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V137_address0() {
    relu_shiftx_V137_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V137_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shiftx_V137_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V137_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V138_address0() {
    relu_shiftx_V138_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V138_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shiftx_V138_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V138_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V139_address0() {
    relu_shiftx_V139_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V139_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shiftx_V139_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V139_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V140_address0() {
    relu_shiftx_V140_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V140_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shiftx_V140_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V140_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V141_address0() {
    relu_shiftx_V141_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V141_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shiftx_V141_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V141_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V142_address0() {
    relu_shiftx_V142_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V142_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shiftx_V142_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V142_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V143_address0() {
    relu_shiftx_V143_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V143_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shiftx_V143_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V143_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V144_address0() {
    relu_shiftx_V144_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V144_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shiftx_V144_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V144_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V145_address0() {
    relu_shiftx_V145_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V145_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shiftx_V145_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V145_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V146_address0() {
    relu_shiftx_V146_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V146_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shiftx_V146_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V146_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V147_address0() {
    relu_shiftx_V147_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V147_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shiftx_V147_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V147_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V148_address0() {
    relu_shiftx_V148_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V148_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shiftx_V148_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V148_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V149_address0() {
    relu_shiftx_V149_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V149_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shiftx_V149_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V149_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V150_address0() {
    relu_shiftx_V150_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V150_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shiftx_V150_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V150_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V151_address0() {
    relu_shiftx_V151_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V151_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shiftx_V151_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V151_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V152_address0() {
    relu_shiftx_V152_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V152_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shiftx_V152_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V152_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V153_address0() {
    relu_shiftx_V153_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V153_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_shiftx_V153_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V153_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V154_address0() {
    relu_shiftx_V154_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V154_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_shiftx_V154_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V154_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V155_address0() {
    relu_shiftx_V155_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V155_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_shiftx_V155_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V155_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V156_address0() {
    relu_shiftx_V156_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V156_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_shiftx_V156_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V156_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V157_address0() {
    relu_shiftx_V157_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V157_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_shiftx_V157_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V157_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V158_address0() {
    relu_shiftx_V158_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V158_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_shiftx_V158_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V158_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V159_address0() {
    relu_shiftx_V159_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V159_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_shiftx_V159_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V159_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V160_address0() {
    relu_shiftx_V160_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V160_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_shiftx_V160_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V160_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V161_address0() {
    relu_shiftx_V161_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V161_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_shiftx_V161_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V161_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V162_address0() {
    relu_shiftx_V162_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V162_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_shiftx_V162_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V162_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V163_address0() {
    relu_shiftx_V163_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V163_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_shiftx_V163_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V163_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shiftx_V_address0() {
    relu_shiftx_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shiftx_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shiftx_V_ce0 = ap_const_logic_1;
    } else {
        relu_shiftx_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V164_address0() {
    relu_shifty_V164_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V164_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shifty_V164_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V164_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V165_address0() {
    relu_shifty_V165_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V165_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shifty_V165_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V165_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V166_address0() {
    relu_shifty_V166_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V166_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shifty_V166_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V166_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V167_address0() {
    relu_shifty_V167_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V167_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shifty_V167_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V167_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V168_address0() {
    relu_shifty_V168_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V168_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shifty_V168_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V168_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V169_address0() {
    relu_shifty_V169_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V169_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shifty_V169_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V169_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V170_address0() {
    relu_shifty_V170_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V170_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shifty_V170_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V170_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V171_address0() {
    relu_shifty_V171_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V171_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shifty_V171_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V171_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V172_address0() {
    relu_shifty_V172_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V172_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shifty_V172_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V172_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V173_address0() {
    relu_shifty_V173_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V173_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shifty_V173_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V173_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V174_address0() {
    relu_shifty_V174_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V174_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shifty_V174_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V174_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V175_address0() {
    relu_shifty_V175_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V175_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shifty_V175_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V175_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V176_address0() {
    relu_shifty_V176_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V176_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shifty_V176_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V176_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V177_address0() {
    relu_shifty_V177_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V177_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shifty_V177_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V177_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V178_address0() {
    relu_shifty_V178_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V178_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shifty_V178_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V178_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V179_address0() {
    relu_shifty_V179_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V179_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shifty_V179_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V179_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V180_address0() {
    relu_shifty_V180_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V180_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shifty_V180_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V180_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V181_address0() {
    relu_shifty_V181_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V181_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shifty_V181_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V181_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V182_address0() {
    relu_shifty_V182_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V182_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shifty_V182_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V182_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V183_address0() {
    relu_shifty_V183_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V183_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shifty_V183_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V183_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V184_address0() {
    relu_shifty_V184_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V184_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_shifty_V184_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V184_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V185_address0() {
    relu_shifty_V185_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V185_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_shifty_V185_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V185_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V186_address0() {
    relu_shifty_V186_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V186_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_shifty_V186_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V186_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V187_address0() {
    relu_shifty_V187_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V187_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_shifty_V187_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V187_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V188_address0() {
    relu_shifty_V188_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V188_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_shifty_V188_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V188_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V189_address0() {
    relu_shifty_V189_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V189_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_shifty_V189_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V189_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V190_address0() {
    relu_shifty_V190_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V190_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_shifty_V190_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V190_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V191_address0() {
    relu_shifty_V191_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V191_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_shifty_V191_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V191_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V192_address0() {
    relu_shifty_V192_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V192_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_shifty_V192_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V192_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V193_address0() {
    relu_shifty_V193_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V193_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_shifty_V193_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V193_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V194_address0() {
    relu_shifty_V194_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V194_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_shifty_V194_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V194_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_shifty_V_address0() {
    relu_shifty_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_shifty_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_shifty_V_ce0 = ap_const_logic_1;
    } else {
        relu_shifty_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V195_address0() {
    relu_weights_V195_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V195_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_weights_V195_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V195_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V196_address0() {
    relu_weights_V196_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V196_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_weights_V196_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V196_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V197_address0() {
    relu_weights_V197_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V197_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_weights_V197_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V197_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V198_address0() {
    relu_weights_V198_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V198_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_weights_V198_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V198_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V199_address0() {
    relu_weights_V199_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V199_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_weights_V199_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V199_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V200_address0() {
    relu_weights_V200_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V200_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_weights_V200_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V200_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V201_address0() {
    relu_weights_V201_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V201_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_weights_V201_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V201_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V202_address0() {
    relu_weights_V202_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V202_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_weights_V202_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V202_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V203_address0() {
    relu_weights_V203_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V203_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_weights_V203_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V203_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V204_address0() {
    relu_weights_V204_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V204_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_weights_V204_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V204_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V205_address0() {
    relu_weights_V205_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V205_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_weights_V205_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V205_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V206_address0() {
    relu_weights_V206_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V206_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_weights_V206_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V206_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V207_address0() {
    relu_weights_V207_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V207_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_weights_V207_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V207_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V208_address0() {
    relu_weights_V208_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V208_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_weights_V208_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V208_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V209_address0() {
    relu_weights_V209_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V209_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_weights_V209_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V209_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V210_address0() {
    relu_weights_V210_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V210_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_weights_V210_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V210_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V211_address0() {
    relu_weights_V211_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V211_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_weights_V211_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V211_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V212_address0() {
    relu_weights_V212_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V212_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_weights_V212_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V212_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V213_address0() {
    relu_weights_V213_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V213_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_weights_V213_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V213_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V214_address0() {
    relu_weights_V214_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V214_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_weights_V214_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V214_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V215_address0() {
    relu_weights_V215_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V215_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_weights_V215_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V215_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V216_address0() {
    relu_weights_V216_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V216_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_weights_V216_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V216_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V217_address0() {
    relu_weights_V217_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V217_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_weights_V217_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V217_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V218_address0() {
    relu_weights_V218_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V218_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_weights_V218_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V218_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V219_address0() {
    relu_weights_V219_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V219_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_weights_V219_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V219_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V220_address0() {
    relu_weights_V220_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V220_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_weights_V220_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V220_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V221_address0() {
    relu_weights_V221_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V221_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_weights_V221_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V221_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V222_address0() {
    relu_weights_V222_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V222_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_weights_V222_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V222_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V223_address0() {
    relu_weights_V223_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V223_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_weights_V223_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V223_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V224_address0() {
    relu_weights_V224_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V224_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_weights_V224_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V224_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V225_address0() {
    relu_weights_V225_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V225_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        relu_weights_V225_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V225_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_relu_weights_V_address0() {
    relu_weights_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pgconv64_1bit::thread_relu_weights_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        relu_weights_V_ce0 = ap_const_logic_1;
    } else {
        relu_weights_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_row0_fu_5813_p2() {
    row0_fu_5813_p2 = (!ap_phi_mux_row0_0_phi_fu_4528_p4.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(ap_phi_mux_row0_0_phi_fu_4528_p4.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void pgconv64_1bit::thread_row_1_fu_5831_p2() {
    row_1_fu_5831_p2 = (shl_ln_fu_5823_p3.read() | ap_const_lv4_1);
}

void pgconv64_1bit::thread_row_2_fu_5837_p3() {
    row_2_fu_5837_p3 = (!icmp_ln500_reg_9260.read()[0].is_01())? sc_lv<4>(): ((icmp_ln500_reg_9260.read()[0].to_bool())? zext_ln510_fu_5819_p1.read(): row_1_fu_5831_p2.read());
}

void pgconv64_1bit::thread_select_ln340_10_fu_7388_p3() {
    select_ln340_10_fu_7388_p3 = (!xor_ln340_253_fu_7370_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_253_fu_7370_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_167_fu_7345_p2.read());
}

void pgconv64_1bit::thread_select_ln340_11_fu_7476_p3() {
    select_ln340_11_fu_7476_p3 = (!xor_ln340_254_fu_7458_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_254_fu_7458_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_168_fu_7433_p2.read());
}

void pgconv64_1bit::thread_select_ln340_12_fu_7564_p3() {
    select_ln340_12_fu_7564_p3 = (!xor_ln340_255_fu_7546_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_255_fu_7546_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_169_fu_7521_p2.read());
}

void pgconv64_1bit::thread_select_ln340_13_fu_7652_p3() {
    select_ln340_13_fu_7652_p3 = (!xor_ln340_256_fu_7634_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_256_fu_7634_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_170_fu_7609_p2.read());
}

void pgconv64_1bit::thread_select_ln340_14_fu_7740_p3() {
    select_ln340_14_fu_7740_p3 = (!xor_ln340_257_fu_7722_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_257_fu_7722_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_171_fu_7697_p2.read());
}

void pgconv64_1bit::thread_select_ln340_15_fu_7828_p3() {
    select_ln340_15_fu_7828_p3 = (!xor_ln340_258_fu_7810_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_258_fu_7810_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_172_fu_7785_p2.read());
}

void pgconv64_1bit::thread_select_ln340_16_fu_7916_p3() {
    select_ln340_16_fu_7916_p3 = (!xor_ln340_259_fu_7898_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_259_fu_7898_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_173_fu_7873_p2.read());
}

void pgconv64_1bit::thread_select_ln340_17_fu_8004_p3() {
    select_ln340_17_fu_8004_p3 = (!xor_ln340_260_fu_7986_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_260_fu_7986_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_174_fu_7961_p2.read());
}

void pgconv64_1bit::thread_select_ln340_18_fu_8092_p3() {
    select_ln340_18_fu_8092_p3 = (!xor_ln340_261_fu_8074_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_261_fu_8074_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_175_fu_8049_p2.read());
}

void pgconv64_1bit::thread_select_ln340_19_fu_8180_p3() {
    select_ln340_19_fu_8180_p3 = (!xor_ln340_262_fu_8162_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_262_fu_8162_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_176_fu_8137_p2.read());
}

void pgconv64_1bit::thread_select_ln340_1_fu_6596_p3() {
    select_ln340_1_fu_6596_p3 = (!xor_ln340_244_fu_6578_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_244_fu_6578_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_158_fu_6553_p2.read());
}

void pgconv64_1bit::thread_select_ln340_20_fu_8268_p3() {
    select_ln340_20_fu_8268_p3 = (!xor_ln340_263_fu_8250_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_263_fu_8250_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_177_fu_8225_p2.read());
}

void pgconv64_1bit::thread_select_ln340_21_fu_8356_p3() {
    select_ln340_21_fu_8356_p3 = (!xor_ln340_264_fu_8338_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_264_fu_8338_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_178_fu_8313_p2.read());
}

void pgconv64_1bit::thread_select_ln340_22_fu_8444_p3() {
    select_ln340_22_fu_8444_p3 = (!xor_ln340_265_fu_8426_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_265_fu_8426_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_179_fu_8401_p2.read());
}

void pgconv64_1bit::thread_select_ln340_23_fu_8532_p3() {
    select_ln340_23_fu_8532_p3 = (!xor_ln340_266_fu_8514_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_266_fu_8514_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_180_fu_8489_p2.read());
}

void pgconv64_1bit::thread_select_ln340_24_fu_8620_p3() {
    select_ln340_24_fu_8620_p3 = (!xor_ln340_267_fu_8602_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_267_fu_8602_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_181_fu_8577_p2.read());
}

void pgconv64_1bit::thread_select_ln340_25_fu_8708_p3() {
    select_ln340_25_fu_8708_p3 = (!xor_ln340_268_fu_8690_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_268_fu_8690_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_182_fu_8665_p2.read());
}

void pgconv64_1bit::thread_select_ln340_26_fu_8796_p3() {
    select_ln340_26_fu_8796_p3 = (!xor_ln340_269_fu_8778_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_269_fu_8778_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_183_fu_8753_p2.read());
}

void pgconv64_1bit::thread_select_ln340_27_fu_8884_p3() {
    select_ln340_27_fu_8884_p3 = (!xor_ln340_270_fu_8866_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_270_fu_8866_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_184_fu_8841_p2.read());
}

void pgconv64_1bit::thread_select_ln340_28_fu_8972_p3() {
    select_ln340_28_fu_8972_p3 = (!xor_ln340_271_fu_8954_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_271_fu_8954_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_185_fu_8929_p2.read());
}

void pgconv64_1bit::thread_select_ln340_29_fu_9060_p3() {
    select_ln340_29_fu_9060_p3 = (!xor_ln340_272_fu_9042_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_272_fu_9042_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_186_fu_9017_p2.read());
}

void pgconv64_1bit::thread_select_ln340_2_fu_6684_p3() {
    select_ln340_2_fu_6684_p3 = (!xor_ln340_245_fu_6666_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_245_fu_6666_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_159_fu_6641_p2.read());
}

void pgconv64_1bit::thread_select_ln340_30_fu_9148_p3() {
    select_ln340_30_fu_9148_p3 = (!xor_ln340_273_fu_9130_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_273_fu_9130_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_187_fu_9105_p2.read());
}

void pgconv64_1bit::thread_select_ln340_31_fu_9236_p3() {
    select_ln340_31_fu_9236_p3 = (!xor_ln340_274_fu_9218_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_274_fu_9218_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_188_fu_9193_p2.read());
}

void pgconv64_1bit::thread_select_ln340_324_fu_6524_p3() {
    select_ln340_324_fu_6524_p3 = (!or_ln340_fu_6502_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_fu_6502_p2.read()[0].to_bool())? select_ln340_fu_6508_p3.read(): select_ln388_fu_6516_p3.read());
}

void pgconv64_1bit::thread_select_ln340_325_fu_6612_p3() {
    select_ln340_325_fu_6612_p3 = (!or_ln340_352_fu_6590_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_352_fu_6590_p2.read()[0].to_bool())? select_ln340_1_fu_6596_p3.read(): select_ln388_1_fu_6604_p3.read());
}

void pgconv64_1bit::thread_select_ln340_326_fu_6700_p3() {
    select_ln340_326_fu_6700_p3 = (!or_ln340_353_fu_6678_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_353_fu_6678_p2.read()[0].to_bool())? select_ln340_2_fu_6684_p3.read(): select_ln388_2_fu_6692_p3.read());
}

void pgconv64_1bit::thread_select_ln340_327_fu_6788_p3() {
    select_ln340_327_fu_6788_p3 = (!or_ln340_354_fu_6766_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_354_fu_6766_p2.read()[0].to_bool())? select_ln340_3_fu_6772_p3.read(): select_ln388_3_fu_6780_p3.read());
}

void pgconv64_1bit::thread_select_ln340_328_fu_6876_p3() {
    select_ln340_328_fu_6876_p3 = (!or_ln340_355_fu_6854_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_355_fu_6854_p2.read()[0].to_bool())? select_ln340_4_fu_6860_p3.read(): select_ln388_4_fu_6868_p3.read());
}

void pgconv64_1bit::thread_select_ln340_329_fu_6964_p3() {
    select_ln340_329_fu_6964_p3 = (!or_ln340_356_fu_6942_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_356_fu_6942_p2.read()[0].to_bool())? select_ln340_5_fu_6948_p3.read(): select_ln388_5_fu_6956_p3.read());
}

void pgconv64_1bit::thread_select_ln340_330_fu_7052_p3() {
    select_ln340_330_fu_7052_p3 = (!or_ln340_357_fu_7030_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_357_fu_7030_p2.read()[0].to_bool())? select_ln340_6_fu_7036_p3.read(): select_ln388_6_fu_7044_p3.read());
}

void pgconv64_1bit::thread_select_ln340_331_fu_7140_p3() {
    select_ln340_331_fu_7140_p3 = (!or_ln340_358_fu_7118_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_358_fu_7118_p2.read()[0].to_bool())? select_ln340_7_fu_7124_p3.read(): select_ln388_7_fu_7132_p3.read());
}

void pgconv64_1bit::thread_select_ln340_332_fu_7228_p3() {
    select_ln340_332_fu_7228_p3 = (!or_ln340_359_fu_7206_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_359_fu_7206_p2.read()[0].to_bool())? select_ln340_8_fu_7212_p3.read(): select_ln388_8_fu_7220_p3.read());
}

void pgconv64_1bit::thread_select_ln340_333_fu_7316_p3() {
    select_ln340_333_fu_7316_p3 = (!or_ln340_360_fu_7294_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_360_fu_7294_p2.read()[0].to_bool())? select_ln340_9_fu_7300_p3.read(): select_ln388_9_fu_7308_p3.read());
}

void pgconv64_1bit::thread_select_ln340_334_fu_7404_p3() {
    select_ln340_334_fu_7404_p3 = (!or_ln340_361_fu_7382_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_361_fu_7382_p2.read()[0].to_bool())? select_ln340_10_fu_7388_p3.read(): select_ln388_10_fu_7396_p3.read());
}

void pgconv64_1bit::thread_select_ln340_335_fu_7492_p3() {
    select_ln340_335_fu_7492_p3 = (!or_ln340_362_fu_7470_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_362_fu_7470_p2.read()[0].to_bool())? select_ln340_11_fu_7476_p3.read(): select_ln388_11_fu_7484_p3.read());
}

void pgconv64_1bit::thread_select_ln340_336_fu_7580_p3() {
    select_ln340_336_fu_7580_p3 = (!or_ln340_363_fu_7558_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_363_fu_7558_p2.read()[0].to_bool())? select_ln340_12_fu_7564_p3.read(): select_ln388_12_fu_7572_p3.read());
}

void pgconv64_1bit::thread_select_ln340_337_fu_7668_p3() {
    select_ln340_337_fu_7668_p3 = (!or_ln340_364_fu_7646_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_364_fu_7646_p2.read()[0].to_bool())? select_ln340_13_fu_7652_p3.read(): select_ln388_13_fu_7660_p3.read());
}

void pgconv64_1bit::thread_select_ln340_338_fu_7756_p3() {
    select_ln340_338_fu_7756_p3 = (!or_ln340_365_fu_7734_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_365_fu_7734_p2.read()[0].to_bool())? select_ln340_14_fu_7740_p3.read(): select_ln388_14_fu_7748_p3.read());
}

void pgconv64_1bit::thread_select_ln340_339_fu_7844_p3() {
    select_ln340_339_fu_7844_p3 = (!or_ln340_366_fu_7822_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_366_fu_7822_p2.read()[0].to_bool())? select_ln340_15_fu_7828_p3.read(): select_ln388_15_fu_7836_p3.read());
}

void pgconv64_1bit::thread_select_ln340_340_fu_7932_p3() {
    select_ln340_340_fu_7932_p3 = (!or_ln340_367_fu_7910_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_367_fu_7910_p2.read()[0].to_bool())? select_ln340_16_fu_7916_p3.read(): select_ln388_16_fu_7924_p3.read());
}

void pgconv64_1bit::thread_select_ln340_341_fu_8020_p3() {
    select_ln340_341_fu_8020_p3 = (!or_ln340_368_fu_7998_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_368_fu_7998_p2.read()[0].to_bool())? select_ln340_17_fu_8004_p3.read(): select_ln388_17_fu_8012_p3.read());
}

void pgconv64_1bit::thread_select_ln340_342_fu_8108_p3() {
    select_ln340_342_fu_8108_p3 = (!or_ln340_369_fu_8086_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_369_fu_8086_p2.read()[0].to_bool())? select_ln340_18_fu_8092_p3.read(): select_ln388_18_fu_8100_p3.read());
}

void pgconv64_1bit::thread_select_ln340_343_fu_8196_p3() {
    select_ln340_343_fu_8196_p3 = (!or_ln340_370_fu_8174_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_370_fu_8174_p2.read()[0].to_bool())? select_ln340_19_fu_8180_p3.read(): select_ln388_19_fu_8188_p3.read());
}

void pgconv64_1bit::thread_select_ln340_344_fu_8284_p3() {
    select_ln340_344_fu_8284_p3 = (!or_ln340_371_fu_8262_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_371_fu_8262_p2.read()[0].to_bool())? select_ln340_20_fu_8268_p3.read(): select_ln388_20_fu_8276_p3.read());
}

void pgconv64_1bit::thread_select_ln340_345_fu_8372_p3() {
    select_ln340_345_fu_8372_p3 = (!or_ln340_372_fu_8350_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_372_fu_8350_p2.read()[0].to_bool())? select_ln340_21_fu_8356_p3.read(): select_ln388_21_fu_8364_p3.read());
}

void pgconv64_1bit::thread_select_ln340_346_fu_8460_p3() {
    select_ln340_346_fu_8460_p3 = (!or_ln340_373_fu_8438_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_373_fu_8438_p2.read()[0].to_bool())? select_ln340_22_fu_8444_p3.read(): select_ln388_22_fu_8452_p3.read());
}

void pgconv64_1bit::thread_select_ln340_347_fu_8548_p3() {
    select_ln340_347_fu_8548_p3 = (!or_ln340_374_fu_8526_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_374_fu_8526_p2.read()[0].to_bool())? select_ln340_23_fu_8532_p3.read(): select_ln388_23_fu_8540_p3.read());
}

void pgconv64_1bit::thread_select_ln340_348_fu_8636_p3() {
    select_ln340_348_fu_8636_p3 = (!or_ln340_375_fu_8614_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_375_fu_8614_p2.read()[0].to_bool())? select_ln340_24_fu_8620_p3.read(): select_ln388_24_fu_8628_p3.read());
}

void pgconv64_1bit::thread_select_ln340_349_fu_8724_p3() {
    select_ln340_349_fu_8724_p3 = (!or_ln340_376_fu_8702_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_376_fu_8702_p2.read()[0].to_bool())? select_ln340_25_fu_8708_p3.read(): select_ln388_25_fu_8716_p3.read());
}

void pgconv64_1bit::thread_select_ln340_350_fu_8812_p3() {
    select_ln340_350_fu_8812_p3 = (!or_ln340_377_fu_8790_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_377_fu_8790_p2.read()[0].to_bool())? select_ln340_26_fu_8796_p3.read(): select_ln388_26_fu_8804_p3.read());
}

void pgconv64_1bit::thread_select_ln340_351_fu_8900_p3() {
    select_ln340_351_fu_8900_p3 = (!or_ln340_378_fu_8878_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_378_fu_8878_p2.read()[0].to_bool())? select_ln340_27_fu_8884_p3.read(): select_ln388_27_fu_8892_p3.read());
}

void pgconv64_1bit::thread_select_ln340_352_fu_8988_p3() {
    select_ln340_352_fu_8988_p3 = (!or_ln340_379_fu_8966_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_379_fu_8966_p2.read()[0].to_bool())? select_ln340_28_fu_8972_p3.read(): select_ln388_28_fu_8980_p3.read());
}

void pgconv64_1bit::thread_select_ln340_353_fu_9076_p3() {
    select_ln340_353_fu_9076_p3 = (!or_ln340_380_fu_9054_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_380_fu_9054_p2.read()[0].to_bool())? select_ln340_29_fu_9060_p3.read(): select_ln388_29_fu_9068_p3.read());
}

void pgconv64_1bit::thread_select_ln340_354_fu_9164_p3() {
    select_ln340_354_fu_9164_p3 = (!or_ln340_381_fu_9142_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_381_fu_9142_p2.read()[0].to_bool())? select_ln340_30_fu_9148_p3.read(): select_ln388_30_fu_9156_p3.read());
}

void pgconv64_1bit::thread_select_ln340_355_fu_9252_p3() {
    select_ln340_355_fu_9252_p3 = (!or_ln340_382_fu_9230_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_382_fu_9230_p2.read()[0].to_bool())? select_ln340_31_fu_9236_p3.read(): select_ln388_31_fu_9244_p3.read());
}

void pgconv64_1bit::thread_select_ln340_3_fu_6772_p3() {
    select_ln340_3_fu_6772_p3 = (!xor_ln340_246_fu_6754_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_246_fu_6754_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_160_fu_6729_p2.read());
}

void pgconv64_1bit::thread_select_ln340_4_fu_6860_p3() {
    select_ln340_4_fu_6860_p3 = (!xor_ln340_247_fu_6842_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_247_fu_6842_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_161_fu_6817_p2.read());
}

void pgconv64_1bit::thread_select_ln340_5_fu_6948_p3() {
    select_ln340_5_fu_6948_p3 = (!xor_ln340_248_fu_6930_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_248_fu_6930_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_162_fu_6905_p2.read());
}

void pgconv64_1bit::thread_select_ln340_6_fu_7036_p3() {
    select_ln340_6_fu_7036_p3 = (!xor_ln340_249_fu_7018_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_249_fu_7018_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_163_fu_6993_p2.read());
}

void pgconv64_1bit::thread_select_ln340_7_fu_7124_p3() {
    select_ln340_7_fu_7124_p3 = (!xor_ln340_250_fu_7106_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_250_fu_7106_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_164_fu_7081_p2.read());
}

void pgconv64_1bit::thread_select_ln340_8_fu_7212_p3() {
    select_ln340_8_fu_7212_p3 = (!xor_ln340_251_fu_7194_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_251_fu_7194_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_165_fu_7169_p2.read());
}

void pgconv64_1bit::thread_select_ln340_9_fu_7300_p3() {
    select_ln340_9_fu_7300_p3 = (!xor_ln340_252_fu_7282_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_252_fu_7282_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_166_fu_7257_p2.read());
}

void pgconv64_1bit::thread_select_ln340_fu_6508_p3() {
    select_ln340_fu_6508_p3 = (!xor_ln340_243_fu_6490_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_243_fu_6490_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_fu_6465_p2.read());
}

void pgconv64_1bit::thread_select_ln388_10_fu_7396_p3() {
    select_ln388_10_fu_7396_p3 = (!and_ln786_267_fu_7364_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_267_fu_7364_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_167_fu_7345_p2.read());
}

void pgconv64_1bit::thread_select_ln388_11_fu_7484_p3() {
    select_ln388_11_fu_7484_p3 = (!and_ln786_268_fu_7452_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_268_fu_7452_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_168_fu_7433_p2.read());
}

void pgconv64_1bit::thread_select_ln388_12_fu_7572_p3() {
    select_ln388_12_fu_7572_p3 = (!and_ln786_269_fu_7540_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_269_fu_7540_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_169_fu_7521_p2.read());
}

void pgconv64_1bit::thread_select_ln388_13_fu_7660_p3() {
    select_ln388_13_fu_7660_p3 = (!and_ln786_270_fu_7628_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_270_fu_7628_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_170_fu_7609_p2.read());
}

void pgconv64_1bit::thread_select_ln388_14_fu_7748_p3() {
    select_ln388_14_fu_7748_p3 = (!and_ln786_271_fu_7716_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_271_fu_7716_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_171_fu_7697_p2.read());
}

void pgconv64_1bit::thread_select_ln388_15_fu_7836_p3() {
    select_ln388_15_fu_7836_p3 = (!and_ln786_272_fu_7804_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_272_fu_7804_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_172_fu_7785_p2.read());
}

void pgconv64_1bit::thread_select_ln388_16_fu_7924_p3() {
    select_ln388_16_fu_7924_p3 = (!and_ln786_273_fu_7892_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_273_fu_7892_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_173_fu_7873_p2.read());
}

void pgconv64_1bit::thread_select_ln388_17_fu_8012_p3() {
    select_ln388_17_fu_8012_p3 = (!and_ln786_274_fu_7980_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_274_fu_7980_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_174_fu_7961_p2.read());
}

void pgconv64_1bit::thread_select_ln388_18_fu_8100_p3() {
    select_ln388_18_fu_8100_p3 = (!and_ln786_275_fu_8068_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_275_fu_8068_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_175_fu_8049_p2.read());
}

void pgconv64_1bit::thread_select_ln388_19_fu_8188_p3() {
    select_ln388_19_fu_8188_p3 = (!and_ln786_276_fu_8156_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_276_fu_8156_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_176_fu_8137_p2.read());
}

void pgconv64_1bit::thread_select_ln388_1_fu_6604_p3() {
    select_ln388_1_fu_6604_p3 = (!and_ln786_258_fu_6572_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_258_fu_6572_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_158_fu_6553_p2.read());
}

void pgconv64_1bit::thread_select_ln388_20_fu_8276_p3() {
    select_ln388_20_fu_8276_p3 = (!and_ln786_277_fu_8244_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_277_fu_8244_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_177_fu_8225_p2.read());
}

void pgconv64_1bit::thread_select_ln388_21_fu_8364_p3() {
    select_ln388_21_fu_8364_p3 = (!and_ln786_278_fu_8332_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_278_fu_8332_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_178_fu_8313_p2.read());
}

void pgconv64_1bit::thread_select_ln388_22_fu_8452_p3() {
    select_ln388_22_fu_8452_p3 = (!and_ln786_279_fu_8420_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_279_fu_8420_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_179_fu_8401_p2.read());
}

void pgconv64_1bit::thread_select_ln388_23_fu_8540_p3() {
    select_ln388_23_fu_8540_p3 = (!and_ln786_280_fu_8508_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_280_fu_8508_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_180_fu_8489_p2.read());
}

void pgconv64_1bit::thread_select_ln388_24_fu_8628_p3() {
    select_ln388_24_fu_8628_p3 = (!and_ln786_281_fu_8596_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_281_fu_8596_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_181_fu_8577_p2.read());
}

void pgconv64_1bit::thread_select_ln388_25_fu_8716_p3() {
    select_ln388_25_fu_8716_p3 = (!and_ln786_282_fu_8684_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_282_fu_8684_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_182_fu_8665_p2.read());
}

void pgconv64_1bit::thread_select_ln388_26_fu_8804_p3() {
    select_ln388_26_fu_8804_p3 = (!and_ln786_283_fu_8772_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_283_fu_8772_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_183_fu_8753_p2.read());
}

void pgconv64_1bit::thread_select_ln388_27_fu_8892_p3() {
    select_ln388_27_fu_8892_p3 = (!and_ln786_284_fu_8860_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_284_fu_8860_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_184_fu_8841_p2.read());
}

void pgconv64_1bit::thread_select_ln388_28_fu_8980_p3() {
    select_ln388_28_fu_8980_p3 = (!and_ln786_285_fu_8948_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_285_fu_8948_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_185_fu_8929_p2.read());
}

void pgconv64_1bit::thread_select_ln388_29_fu_9068_p3() {
    select_ln388_29_fu_9068_p3 = (!and_ln786_286_fu_9036_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_286_fu_9036_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_186_fu_9017_p2.read());
}

void pgconv64_1bit::thread_select_ln388_2_fu_6692_p3() {
    select_ln388_2_fu_6692_p3 = (!and_ln786_259_fu_6660_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_259_fu_6660_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_159_fu_6641_p2.read());
}

void pgconv64_1bit::thread_select_ln388_30_fu_9156_p3() {
    select_ln388_30_fu_9156_p3 = (!and_ln786_287_fu_9124_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_287_fu_9124_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_187_fu_9105_p2.read());
}

void pgconv64_1bit::thread_select_ln388_31_fu_9244_p3() {
    select_ln388_31_fu_9244_p3 = (!and_ln786_288_fu_9212_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_288_fu_9212_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_188_fu_9193_p2.read());
}

void pgconv64_1bit::thread_select_ln388_3_fu_6780_p3() {
    select_ln388_3_fu_6780_p3 = (!and_ln786_260_fu_6748_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_260_fu_6748_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_160_fu_6729_p2.read());
}

void pgconv64_1bit::thread_select_ln388_4_fu_6868_p3() {
    select_ln388_4_fu_6868_p3 = (!and_ln786_261_fu_6836_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_261_fu_6836_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_161_fu_6817_p2.read());
}

void pgconv64_1bit::thread_select_ln388_5_fu_6956_p3() {
    select_ln388_5_fu_6956_p3 = (!and_ln786_262_fu_6924_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_262_fu_6924_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_162_fu_6905_p2.read());
}

void pgconv64_1bit::thread_select_ln388_6_fu_7044_p3() {
    select_ln388_6_fu_7044_p3 = (!and_ln786_263_fu_7012_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_263_fu_7012_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_163_fu_6993_p2.read());
}

void pgconv64_1bit::thread_select_ln388_7_fu_7132_p3() {
    select_ln388_7_fu_7132_p3 = (!and_ln786_264_fu_7100_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_264_fu_7100_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_164_fu_7081_p2.read());
}

void pgconv64_1bit::thread_select_ln388_8_fu_7220_p3() {
    select_ln388_8_fu_7220_p3 = (!and_ln786_265_fu_7188_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_265_fu_7188_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_165_fu_7169_p2.read());
}

void pgconv64_1bit::thread_select_ln388_9_fu_7308_p3() {
    select_ln388_9_fu_7308_p3 = (!and_ln786_266_fu_7276_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_266_fu_7276_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_166_fu_7257_p2.read());
}

void pgconv64_1bit::thread_select_ln388_fu_6516_p3() {
    select_ln388_fu_6516_p3 = (!and_ln786_fu_6484_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_fu_6484_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_fu_6465_p2.read());
}

void pgconv64_1bit::thread_select_ln477_fu_5805_p3() {
    select_ln477_fu_5805_p3 = (!icmp_ln500_fu_5791_p2.read()[0].is_01())? sc_lv<6>(): ((icmp_ln500_fu_5791_p2.read()[0].to_bool())? ap_const_lv6_31: ap_const_lv6_10);
}

void pgconv64_1bit::thread_select_ln500_2_fu_5934_p3() {
    select_ln500_2_fu_5934_p3 = (!icmp_ln500_reg_9260.read()[0].is_01())? sc_lv<4>(): ((icmp_ln500_reg_9260.read()[0].to_bool())? zext_ln510_1_fu_5916_p1.read(): or_ln513_1_fu_5928_p2.read());
}

void pgconv64_1bit::thread_select_ln500_fu_5797_p3() {
    select_ln500_fu_5797_p3 = (!icmp_ln500_fu_5791_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln500_fu_5791_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_4);
}

void pgconv64_1bit::thread_select_ln505_1_fu_5941_p3() {
    select_ln505_1_fu_5941_p3 = (!icmp_ln506_fu_5897_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln506_fu_5897_p2.read()[0].to_bool())? select_ln500_2_fu_5934_p3.read(): row_2_fu_5837_p3.read());
}

void pgconv64_1bit::thread_select_ln505_2_fu_5961_p3() {
    select_ln505_2_fu_5961_p3 = (!icmp_ln506_fu_5897_p2.read()[0].is_01())? sc_lv<1>(): ((icmp_ln506_fu_5897_p2.read()[0].to_bool())? icmp_ln538_7_fu_5955_p2.read(): icmp_ln538_fu_5844_p2.read());
}

void pgconv64_1bit::thread_select_ln505_3_fu_5975_p3() {
    select_ln505_3_fu_5975_p3 = (!icmp_ln506_fu_5897_p2.read()[0].is_01())? sc_lv<1>(): ((icmp_ln506_fu_5897_p2.read()[0].to_bool())? icmp_ln538_8_fu_5969_p2.read(): icmp_ln538_1_fu_5850_p2.read());
}

void pgconv64_1bit::thread_select_ln505_4_fu_5989_p3() {
    select_ln505_4_fu_5989_p3 = (!icmp_ln506_fu_5897_p2.read()[0].is_01())? sc_lv<1>(): ((icmp_ln506_fu_5897_p2.read()[0].to_bool())? icmp_ln538_9_fu_5983_p2.read(): icmp_ln538_2_fu_5856_p2.read());
}

void pgconv64_1bit::thread_select_ln505_5_fu_6003_p3() {
    select_ln505_5_fu_6003_p3 = (!icmp_ln506_fu_5897_p2.read()[0].is_01())? sc_lv<1>(): ((icmp_ln506_fu_5897_p2.read()[0].to_bool())? icmp_ln538_10_fu_5997_p2.read(): icmp_ln538_3_fu_5862_p2.read());
}

void pgconv64_1bit::thread_select_ln505_6_fu_6017_p3() {
    select_ln505_6_fu_6017_p3 = (!icmp_ln506_fu_5897_p2.read()[0].is_01())? sc_lv<1>(): ((icmp_ln506_fu_5897_p2.read()[0].to_bool())? icmp_ln538_11_fu_6011_p2.read(): icmp_ln538_4_fu_5868_p2.read());
}

void pgconv64_1bit::thread_select_ln505_7_fu_6031_p3() {
    select_ln505_7_fu_6031_p3 = (!icmp_ln506_fu_5897_p2.read()[0].is_01())? sc_lv<1>(): ((icmp_ln506_fu_5897_p2.read()[0].to_bool())? icmp_ln538_12_fu_6025_p2.read(): icmp_ln538_5_fu_5874_p2.read());
}

void pgconv64_1bit::thread_select_ln505_8_fu_6045_p3() {
    select_ln505_8_fu_6045_p3 = (!icmp_ln506_fu_5897_p2.read()[0].is_01())? sc_lv<1>(): ((icmp_ln506_fu_5897_p2.read()[0].to_bool())? icmp_ln538_13_fu_6039_p2.read(): icmp_ln538_6_fu_5880_p2.read());
}

void pgconv64_1bit::thread_select_ln505_9_fu_6053_p3() {
    select_ln505_9_fu_6053_p3 = (!icmp_ln506_fu_5897_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln506_fu_5897_p2.read()[0].to_bool())? row0_fu_5813_p2.read(): ap_phi_mux_row0_0_phi_fu_4528_p4.read());
}

void pgconv64_1bit::thread_select_ln505_fu_5902_p3() {
    select_ln505_fu_5902_p3 = (!icmp_ln506_fu_5897_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln506_fu_5897_p2.read()[0].to_bool())? ap_const_lv3_0: ap_phi_mux_col0_0_phi_fu_4539_p4.read());
}

void pgconv64_1bit::thread_select_ln538_1_fu_6266_p3() {
    select_ln538_1_fu_6266_p3 = (!select_ln505_3_reg_10111.read()[0].is_01())? sc_lv<64>(): ((select_ln505_3_reg_10111.read()[0].to_bool())? bottom_2_V_q0.read(): select_ln538_fu_6259_p3.read());
}

void pgconv64_1bit::thread_select_ln538_2_fu_6273_p3() {
    select_ln538_2_fu_6273_p3 = (!select_ln505_4_reg_10118.read()[0].is_01())? sc_lv<64>(): ((select_ln505_4_reg_10118.read()[0].to_bool())? bottom_3_V_q0.read(): select_ln538_1_fu_6266_p3.read());
}

void pgconv64_1bit::thread_select_ln538_3_fu_6280_p3() {
    select_ln538_3_fu_6280_p3 = (!select_ln505_5_reg_10125.read()[0].is_01())? sc_lv<64>(): ((select_ln505_5_reg_10125.read()[0].to_bool())? bottom_4_V_q0.read(): select_ln538_2_fu_6273_p3.read());
}

void pgconv64_1bit::thread_select_ln538_4_fu_6287_p3() {
    select_ln538_4_fu_6287_p3 = (!select_ln505_6_reg_10132.read()[0].is_01())? sc_lv<64>(): ((select_ln505_6_reg_10132.read()[0].to_bool())? bottom_5_V_q0.read(): select_ln538_3_fu_6280_p3.read());
}

void pgconv64_1bit::thread_select_ln538_5_fu_6294_p3() {
    select_ln538_5_fu_6294_p3 = (!select_ln505_7_reg_10139.read()[0].is_01())? sc_lv<64>(): ((select_ln505_7_reg_10139.read()[0].to_bool())? bottom_6_V_q0.read(): select_ln538_4_fu_6287_p3.read());
}

void pgconv64_1bit::thread_select_ln538_6_fu_6301_p3() {
    select_ln538_6_fu_6301_p3 = (!select_ln505_8_reg_10146.read()[0].is_01())? sc_lv<64>(): ((select_ln505_8_reg_10146.read()[0].to_bool())? bottom_7_V_q0.read(): select_ln538_5_fu_6294_p3.read());
}

void pgconv64_1bit::thread_select_ln538_fu_6259_p3() {
    select_ln538_fu_6259_p3 = (!select_ln505_2_reg_10104.read()[0].is_01())? sc_lv<64>(): ((select_ln505_2_reg_10104.read()[0].to_bool())? bottom_1_V_q0.read(): bottom_8_V_q0.read());
}

void pgconv64_1bit::thread_select_ln539_1_fu_6153_p3() {
    select_ln539_1_fu_6153_p3 = (!select_ln505_3_reg_10111.read()[0].is_01())? sc_lv<64>(): ((select_ln505_3_reg_10111.read()[0].to_bool())? bottom_2_V_q0.read(): select_ln539_fu_6146_p3.read());
}

void pgconv64_1bit::thread_select_ln539_2_fu_6160_p3() {
    select_ln539_2_fu_6160_p3 = (!select_ln505_4_reg_10118.read()[0].is_01())? sc_lv<64>(): ((select_ln505_4_reg_10118.read()[0].to_bool())? bottom_3_V_q0.read(): select_ln539_1_fu_6153_p3.read());
}

void pgconv64_1bit::thread_select_ln539_3_fu_6167_p3() {
    select_ln539_3_fu_6167_p3 = (!select_ln505_5_reg_10125.read()[0].is_01())? sc_lv<64>(): ((select_ln505_5_reg_10125.read()[0].to_bool())? bottom_4_V_q0.read(): select_ln539_2_fu_6160_p3.read());
}

void pgconv64_1bit::thread_select_ln539_4_fu_6174_p3() {
    select_ln539_4_fu_6174_p3 = (!select_ln505_6_reg_10132.read()[0].is_01())? sc_lv<64>(): ((select_ln505_6_reg_10132.read()[0].to_bool())? bottom_5_V_q0.read(): select_ln539_3_fu_6167_p3.read());
}

void pgconv64_1bit::thread_select_ln539_5_fu_6181_p3() {
    select_ln539_5_fu_6181_p3 = (!select_ln505_7_reg_10139.read()[0].is_01())? sc_lv<64>(): ((select_ln505_7_reg_10139.read()[0].to_bool())? bottom_6_V_q0.read(): select_ln539_4_fu_6174_p3.read());
}

void pgconv64_1bit::thread_select_ln539_6_fu_6188_p3() {
    select_ln539_6_fu_6188_p3 = (!select_ln505_8_reg_10146.read()[0].is_01())? sc_lv<64>(): ((select_ln505_8_reg_10146.read()[0].to_bool())? bottom_7_V_q0.read(): select_ln539_5_fu_6181_p3.read());
}

void pgconv64_1bit::thread_select_ln539_fu_6146_p3() {
    select_ln539_fu_6146_p3 = (!select_ln505_2_reg_10104.read()[0].is_01())? sc_lv<64>(): ((select_ln505_2_reg_10104.read()[0].to_bool())? bottom_1_V_q0.read(): bottom_8_V_q0.read());
}

void pgconv64_1bit::thread_select_ln540_1_fu_6315_p3() {
    select_ln540_1_fu_6315_p3 = (!select_ln505_3_reg_10111.read()[0].is_01())? sc_lv<64>(): ((select_ln505_3_reg_10111.read()[0].to_bool())? bottom_2_V_q1.read(): select_ln540_fu_6308_p3.read());
}

void pgconv64_1bit::thread_select_ln540_2_fu_6322_p3() {
    select_ln540_2_fu_6322_p3 = (!select_ln505_4_reg_10118.read()[0].is_01())? sc_lv<64>(): ((select_ln505_4_reg_10118.read()[0].to_bool())? bottom_3_V_q1.read(): select_ln540_1_fu_6315_p3.read());
}

void pgconv64_1bit::thread_select_ln540_3_fu_6329_p3() {
    select_ln540_3_fu_6329_p3 = (!select_ln505_5_reg_10125.read()[0].is_01())? sc_lv<64>(): ((select_ln505_5_reg_10125.read()[0].to_bool())? bottom_4_V_q1.read(): select_ln540_2_fu_6322_p3.read());
}

void pgconv64_1bit::thread_select_ln540_4_fu_6336_p3() {
    select_ln540_4_fu_6336_p3 = (!select_ln505_6_reg_10132.read()[0].is_01())? sc_lv<64>(): ((select_ln505_6_reg_10132.read()[0].to_bool())? bottom_5_V_q1.read(): select_ln540_3_fu_6329_p3.read());
}

void pgconv64_1bit::thread_select_ln540_5_fu_6343_p3() {
    select_ln540_5_fu_6343_p3 = (!select_ln505_7_reg_10139.read()[0].is_01())? sc_lv<64>(): ((select_ln505_7_reg_10139.read()[0].to_bool())? bottom_6_V_q1.read(): select_ln540_4_fu_6336_p3.read());
}

void pgconv64_1bit::thread_select_ln540_6_fu_6350_p3() {
    select_ln540_6_fu_6350_p3 = (!select_ln505_8_reg_10146.read()[0].is_01())? sc_lv<64>(): ((select_ln505_8_reg_10146.read()[0].to_bool())? bottom_7_V_q1.read(): select_ln540_5_fu_6343_p3.read());
}

void pgconv64_1bit::thread_select_ln540_fu_6308_p3() {
    select_ln540_fu_6308_p3 = (!select_ln505_2_reg_10104.read()[0].is_01())? sc_lv<64>(): ((select_ln505_2_reg_10104.read()[0].to_bool())? bottom_1_V_q1.read(): bottom_8_V_q1.read());
}

void pgconv64_1bit::thread_sext_ln532_fu_6114_p1() {
    sext_ln532_fu_6114_p1 = esl_sext<64,5>(add_ln532_fu_6108_p2.read());
}

void pgconv64_1bit::thread_sext_ln703_190_fu_6447_p0() {
    sext_ln703_190_fu_6447_p0 = grp_relu_fu_5159_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_190_fu_6447_p1() {
    sext_ln703_190_fu_6447_p1 = esl_sext<15,14>(sext_ln703_190_fu_6447_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_191_fu_6532_p1() {
    sext_ln703_191_fu_6532_p1 = esl_sext<15,14>(top_1_V_load_reg_13111.read());
}

void pgconv64_1bit::thread_sext_ln703_192_fu_6535_p0() {
    sext_ln703_192_fu_6535_p0 = grp_relu_fu_5167_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_192_fu_6535_p1() {
    sext_ln703_192_fu_6535_p1 = esl_sext<15,14>(sext_ln703_192_fu_6535_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_193_fu_6620_p1() {
    sext_ln703_193_fu_6620_p1 = esl_sext<15,14>(top_2_V_load_reg_13117.read());
}

void pgconv64_1bit::thread_sext_ln703_194_fu_6623_p0() {
    sext_ln703_194_fu_6623_p0 = grp_relu_fu_5175_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_194_fu_6623_p1() {
    sext_ln703_194_fu_6623_p1 = esl_sext<15,14>(sext_ln703_194_fu_6623_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_195_fu_6708_p1() {
    sext_ln703_195_fu_6708_p1 = esl_sext<15,14>(top_3_V_load_reg_13123.read());
}

void pgconv64_1bit::thread_sext_ln703_196_fu_6711_p0() {
    sext_ln703_196_fu_6711_p0 = grp_relu_fu_5183_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_196_fu_6711_p1() {
    sext_ln703_196_fu_6711_p1 = esl_sext<15,14>(sext_ln703_196_fu_6711_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_197_fu_6796_p1() {
    sext_ln703_197_fu_6796_p1 = esl_sext<15,14>(top_4_V_load_reg_13129.read());
}

void pgconv64_1bit::thread_sext_ln703_198_fu_6799_p0() {
    sext_ln703_198_fu_6799_p0 = grp_relu_fu_5191_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_198_fu_6799_p1() {
    sext_ln703_198_fu_6799_p1 = esl_sext<15,14>(sext_ln703_198_fu_6799_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_199_fu_6884_p1() {
    sext_ln703_199_fu_6884_p1 = esl_sext<15,14>(top_5_V_load_reg_13135.read());
}

void pgconv64_1bit::thread_sext_ln703_200_fu_6887_p0() {
    sext_ln703_200_fu_6887_p0 = grp_relu_fu_5199_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_200_fu_6887_p1() {
    sext_ln703_200_fu_6887_p1 = esl_sext<15,14>(sext_ln703_200_fu_6887_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_201_fu_6972_p1() {
    sext_ln703_201_fu_6972_p1 = esl_sext<15,14>(top_6_V_load_reg_13141.read());
}

void pgconv64_1bit::thread_sext_ln703_202_fu_6975_p0() {
    sext_ln703_202_fu_6975_p0 = grp_relu_fu_5207_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_202_fu_6975_p1() {
    sext_ln703_202_fu_6975_p1 = esl_sext<15,14>(sext_ln703_202_fu_6975_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_203_fu_7060_p1() {
    sext_ln703_203_fu_7060_p1 = esl_sext<15,14>(top_7_V_load_reg_13217.read());
}

void pgconv64_1bit::thread_sext_ln703_204_fu_7063_p0() {
    sext_ln703_204_fu_7063_p0 = grp_relu_fu_5159_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_204_fu_7063_p1() {
    sext_ln703_204_fu_7063_p1 = esl_sext<15,14>(sext_ln703_204_fu_7063_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_205_fu_7148_p1() {
    sext_ln703_205_fu_7148_p1 = esl_sext<15,14>(top_8_V_load_reg_13223.read());
}

void pgconv64_1bit::thread_sext_ln703_206_fu_7151_p0() {
    sext_ln703_206_fu_7151_p0 = grp_relu_fu_5167_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_206_fu_7151_p1() {
    sext_ln703_206_fu_7151_p1 = esl_sext<15,14>(sext_ln703_206_fu_7151_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_207_fu_7236_p1() {
    sext_ln703_207_fu_7236_p1 = esl_sext<15,14>(top_9_V_load_reg_13229.read());
}

void pgconv64_1bit::thread_sext_ln703_208_fu_7239_p0() {
    sext_ln703_208_fu_7239_p0 = grp_relu_fu_5175_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_208_fu_7239_p1() {
    sext_ln703_208_fu_7239_p1 = esl_sext<15,14>(sext_ln703_208_fu_7239_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_209_fu_7324_p1() {
    sext_ln703_209_fu_7324_p1 = esl_sext<15,14>(top_10_V_load_reg_13235.read());
}

void pgconv64_1bit::thread_sext_ln703_210_fu_7327_p0() {
    sext_ln703_210_fu_7327_p0 = grp_relu_fu_5183_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_210_fu_7327_p1() {
    sext_ln703_210_fu_7327_p1 = esl_sext<15,14>(sext_ln703_210_fu_7327_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_211_fu_7412_p1() {
    sext_ln703_211_fu_7412_p1 = esl_sext<15,14>(top_11_V_load_reg_13241.read());
}

void pgconv64_1bit::thread_sext_ln703_212_fu_7415_p0() {
    sext_ln703_212_fu_7415_p0 = grp_relu_fu_5191_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_212_fu_7415_p1() {
    sext_ln703_212_fu_7415_p1 = esl_sext<15,14>(sext_ln703_212_fu_7415_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_213_fu_7500_p1() {
    sext_ln703_213_fu_7500_p1 = esl_sext<15,14>(top_12_V_load_reg_13247.read());
}

void pgconv64_1bit::thread_sext_ln703_214_fu_7503_p0() {
    sext_ln703_214_fu_7503_p0 = grp_relu_fu_5199_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_214_fu_7503_p1() {
    sext_ln703_214_fu_7503_p1 = esl_sext<15,14>(sext_ln703_214_fu_7503_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_215_fu_7588_p1() {
    sext_ln703_215_fu_7588_p1 = esl_sext<15,14>(top_13_V_load_reg_13253.read());
}

void pgconv64_1bit::thread_sext_ln703_216_fu_7591_p0() {
    sext_ln703_216_fu_7591_p0 = grp_relu_fu_5207_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_216_fu_7591_p1() {
    sext_ln703_216_fu_7591_p1 = esl_sext<15,14>(sext_ln703_216_fu_7591_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_217_fu_7676_p1() {
    sext_ln703_217_fu_7676_p1 = esl_sext<15,14>(top_14_V_load_reg_13549.read());
}

void pgconv64_1bit::thread_sext_ln703_218_fu_7679_p0() {
    sext_ln703_218_fu_7679_p0 = grp_relu_fu_5159_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_218_fu_7679_p1() {
    sext_ln703_218_fu_7679_p1 = esl_sext<15,14>(sext_ln703_218_fu_7679_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_219_fu_7764_p1() {
    sext_ln703_219_fu_7764_p1 = esl_sext<15,14>(top_15_V_load_reg_13555.read());
}

void pgconv64_1bit::thread_sext_ln703_220_fu_7767_p0() {
    sext_ln703_220_fu_7767_p0 = grp_relu_fu_5167_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_220_fu_7767_p1() {
    sext_ln703_220_fu_7767_p1 = esl_sext<15,14>(sext_ln703_220_fu_7767_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_221_fu_7852_p1() {
    sext_ln703_221_fu_7852_p1 = esl_sext<15,14>(top_16_V_load_reg_13561.read());
}

void pgconv64_1bit::thread_sext_ln703_222_fu_7855_p0() {
    sext_ln703_222_fu_7855_p0 = grp_relu_fu_5175_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_222_fu_7855_p1() {
    sext_ln703_222_fu_7855_p1 = esl_sext<15,14>(sext_ln703_222_fu_7855_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_223_fu_7940_p1() {
    sext_ln703_223_fu_7940_p1 = esl_sext<15,14>(top_17_V_load_reg_13567.read());
}

void pgconv64_1bit::thread_sext_ln703_224_fu_7943_p0() {
    sext_ln703_224_fu_7943_p0 = grp_relu_fu_5183_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_224_fu_7943_p1() {
    sext_ln703_224_fu_7943_p1 = esl_sext<15,14>(sext_ln703_224_fu_7943_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_225_fu_8028_p1() {
    sext_ln703_225_fu_8028_p1 = esl_sext<15,14>(top_18_V_load_reg_13573.read());
}

void pgconv64_1bit::thread_sext_ln703_226_fu_8031_p0() {
    sext_ln703_226_fu_8031_p0 = grp_relu_fu_5191_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_226_fu_8031_p1() {
    sext_ln703_226_fu_8031_p1 = esl_sext<15,14>(sext_ln703_226_fu_8031_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_227_fu_8116_p1() {
    sext_ln703_227_fu_8116_p1 = esl_sext<15,14>(top_19_V_load_reg_13579.read());
}

void pgconv64_1bit::thread_sext_ln703_228_fu_8119_p0() {
    sext_ln703_228_fu_8119_p0 = grp_relu_fu_5199_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_228_fu_8119_p1() {
    sext_ln703_228_fu_8119_p1 = esl_sext<15,14>(sext_ln703_228_fu_8119_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_229_fu_8204_p1() {
    sext_ln703_229_fu_8204_p1 = esl_sext<15,14>(top_20_V_load_reg_13585.read());
}

void pgconv64_1bit::thread_sext_ln703_230_fu_8207_p0() {
    sext_ln703_230_fu_8207_p0 = grp_relu_fu_5207_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_230_fu_8207_p1() {
    sext_ln703_230_fu_8207_p1 = esl_sext<15,14>(sext_ln703_230_fu_8207_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_231_fu_8292_p1() {
    sext_ln703_231_fu_8292_p1 = esl_sext<15,14>(top_21_V_load_reg_13646.read());
}

void pgconv64_1bit::thread_sext_ln703_232_fu_8295_p0() {
    sext_ln703_232_fu_8295_p0 = grp_relu_fu_5159_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_232_fu_8295_p1() {
    sext_ln703_232_fu_8295_p1 = esl_sext<15,14>(sext_ln703_232_fu_8295_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_233_fu_8380_p1() {
    sext_ln703_233_fu_8380_p1 = esl_sext<15,14>(top_22_V_load_reg_13652.read());
}

void pgconv64_1bit::thread_sext_ln703_234_fu_8383_p0() {
    sext_ln703_234_fu_8383_p0 = grp_relu_fu_5167_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_234_fu_8383_p1() {
    sext_ln703_234_fu_8383_p1 = esl_sext<15,14>(sext_ln703_234_fu_8383_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_235_fu_8468_p1() {
    sext_ln703_235_fu_8468_p1 = esl_sext<15,14>(top_23_V_load_reg_13658.read());
}

void pgconv64_1bit::thread_sext_ln703_236_fu_8471_p0() {
    sext_ln703_236_fu_8471_p0 = grp_relu_fu_5175_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_236_fu_8471_p1() {
    sext_ln703_236_fu_8471_p1 = esl_sext<15,14>(sext_ln703_236_fu_8471_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_237_fu_8556_p1() {
    sext_ln703_237_fu_8556_p1 = esl_sext<15,14>(top_24_V_load_reg_13664.read());
}

void pgconv64_1bit::thread_sext_ln703_238_fu_8559_p0() {
    sext_ln703_238_fu_8559_p0 = grp_relu_fu_5183_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_238_fu_8559_p1() {
    sext_ln703_238_fu_8559_p1 = esl_sext<15,14>(sext_ln703_238_fu_8559_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_239_fu_8644_p1() {
    sext_ln703_239_fu_8644_p1 = esl_sext<15,14>(top_25_V_load_reg_13670.read());
}

void pgconv64_1bit::thread_sext_ln703_240_fu_8647_p0() {
    sext_ln703_240_fu_8647_p0 = grp_relu_fu_5191_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_240_fu_8647_p1() {
    sext_ln703_240_fu_8647_p1 = esl_sext<15,14>(sext_ln703_240_fu_8647_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_241_fu_8732_p1() {
    sext_ln703_241_fu_8732_p1 = esl_sext<15,14>(top_26_V_load_reg_13676.read());
}

void pgconv64_1bit::thread_sext_ln703_242_fu_8735_p0() {
    sext_ln703_242_fu_8735_p0 = grp_relu_fu_5199_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_242_fu_8735_p1() {
    sext_ln703_242_fu_8735_p1 = esl_sext<15,14>(sext_ln703_242_fu_8735_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_243_fu_8820_p1() {
    sext_ln703_243_fu_8820_p1 = esl_sext<15,14>(top_27_V_load_reg_13682.read());
}

void pgconv64_1bit::thread_sext_ln703_244_fu_8823_p0() {
    sext_ln703_244_fu_8823_p0 = grp_relu_fu_5207_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_244_fu_8823_p1() {
    sext_ln703_244_fu_8823_p1 = esl_sext<15,14>(sext_ln703_244_fu_8823_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_245_fu_8908_p1() {
    sext_ln703_245_fu_8908_p1 = esl_sext<15,14>(top_28_V_load_reg_13723.read());
}

void pgconv64_1bit::thread_sext_ln703_246_fu_8911_p0() {
    sext_ln703_246_fu_8911_p0 = grp_relu_fu_5159_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_246_fu_8911_p1() {
    sext_ln703_246_fu_8911_p1 = esl_sext<15,14>(sext_ln703_246_fu_8911_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_247_fu_8996_p1() {
    sext_ln703_247_fu_8996_p1 = esl_sext<15,14>(top_29_V_load_reg_13729.read());
}

void pgconv64_1bit::thread_sext_ln703_248_fu_8999_p0() {
    sext_ln703_248_fu_8999_p0 = grp_relu_fu_5167_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_248_fu_8999_p1() {
    sext_ln703_248_fu_8999_p1 = esl_sext<15,14>(sext_ln703_248_fu_8999_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_249_fu_9084_p1() {
    sext_ln703_249_fu_9084_p1 = esl_sext<15,14>(top_30_V_load_reg_13735.read());
}

void pgconv64_1bit::thread_sext_ln703_250_fu_9087_p0() {
    sext_ln703_250_fu_9087_p0 = grp_relu_fu_5175_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_250_fu_9087_p1() {
    sext_ln703_250_fu_9087_p1 = esl_sext<15,14>(sext_ln703_250_fu_9087_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_251_fu_9172_p1() {
    sext_ln703_251_fu_9172_p1 = esl_sext<15,14>(top_31_V_load_reg_13741.read());
}

void pgconv64_1bit::thread_sext_ln703_252_fu_9175_p0() {
    sext_ln703_252_fu_9175_p0 = grp_relu_fu_5183_ap_return.read();
}

void pgconv64_1bit::thread_sext_ln703_252_fu_9175_p1() {
    sext_ln703_252_fu_9175_p1 = esl_sext<15,14>(sext_ln703_252_fu_9175_p0.read());
}

void pgconv64_1bit::thread_sext_ln703_fu_6444_p1() {
    sext_ln703_fu_6444_p1 = esl_sext<15,14>(top_0_V_load_reg_13105.read());
}

void pgconv64_1bit::thread_shl_ln513_mid1_fu_5920_p3() {
    shl_ln513_mid1_fu_5920_p3 = esl_concat<3,1>(row0_fu_5813_p2.read(), ap_const_lv1_0);
}

void pgconv64_1bit::thread_shl_ln6_fu_6071_p3() {
    shl_ln6_fu_6071_p3 = esl_concat<3,1>(select_ln505_fu_5902_p3.read(), ap_const_lv1_0);
}

void pgconv64_1bit::thread_shl_ln_fu_5823_p3() {
    shl_ln_fu_5823_p3 = esl_concat<3,1>(ap_phi_mux_row0_0_phi_fu_4528_p4.read(), ap_const_lv1_0);
}

void pgconv64_1bit::thread_tmp_12_fu_6407_p3() {
    tmp_12_fu_6407_p3 = esl_concat<4,3>(select_ln505_1_reg_10086_pp0_iter2_reg.read(), ap_const_lv3_0);
}

void pgconv64_1bit::thread_tmp_773_fu_6457_p3() {
    tmp_773_fu_6457_p3 = add_ln1192_fu_6451_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_774_fu_6470_p3() {
    tmp_774_fu_6470_p3 = add_ln703_fu_6465_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_775_fu_6545_p3() {
    tmp_775_fu_6545_p3 = add_ln1192_160_fu_6539_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_776_fu_6558_p3() {
    tmp_776_fu_6558_p3 = add_ln703_158_fu_6553_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_777_fu_6633_p3() {
    tmp_777_fu_6633_p3 = add_ln1192_161_fu_6627_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_778_fu_6646_p3() {
    tmp_778_fu_6646_p3 = add_ln703_159_fu_6641_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_779_fu_6721_p3() {
    tmp_779_fu_6721_p3 = add_ln1192_162_fu_6715_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_780_fu_6734_p3() {
    tmp_780_fu_6734_p3 = add_ln703_160_fu_6729_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_781_fu_6809_p3() {
    tmp_781_fu_6809_p3 = add_ln1192_163_fu_6803_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_782_fu_6822_p3() {
    tmp_782_fu_6822_p3 = add_ln703_161_fu_6817_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_783_fu_6897_p3() {
    tmp_783_fu_6897_p3 = add_ln1192_164_fu_6891_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_784_fu_6910_p3() {
    tmp_784_fu_6910_p3 = add_ln703_162_fu_6905_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_785_fu_6985_p3() {
    tmp_785_fu_6985_p3 = add_ln1192_165_fu_6979_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_786_fu_6998_p3() {
    tmp_786_fu_6998_p3 = add_ln703_163_fu_6993_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_787_fu_7073_p3() {
    tmp_787_fu_7073_p3 = add_ln1192_166_fu_7067_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_788_fu_7086_p3() {
    tmp_788_fu_7086_p3 = add_ln703_164_fu_7081_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_789_fu_7161_p3() {
    tmp_789_fu_7161_p3 = add_ln1192_167_fu_7155_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_790_fu_7174_p3() {
    tmp_790_fu_7174_p3 = add_ln703_165_fu_7169_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_791_fu_7249_p3() {
    tmp_791_fu_7249_p3 = add_ln1192_168_fu_7243_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_792_fu_7262_p3() {
    tmp_792_fu_7262_p3 = add_ln703_166_fu_7257_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_793_fu_7337_p3() {
    tmp_793_fu_7337_p3 = add_ln1192_169_fu_7331_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_794_fu_7350_p3() {
    tmp_794_fu_7350_p3 = add_ln703_167_fu_7345_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_795_fu_7425_p3() {
    tmp_795_fu_7425_p3 = add_ln1192_170_fu_7419_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_796_fu_7438_p3() {
    tmp_796_fu_7438_p3 = add_ln703_168_fu_7433_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_797_fu_7513_p3() {
    tmp_797_fu_7513_p3 = add_ln1192_171_fu_7507_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_798_fu_7526_p3() {
    tmp_798_fu_7526_p3 = add_ln703_169_fu_7521_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_799_fu_7601_p3() {
    tmp_799_fu_7601_p3 = add_ln1192_172_fu_7595_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_800_fu_7614_p3() {
    tmp_800_fu_7614_p3 = add_ln703_170_fu_7609_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_801_fu_7689_p3() {
    tmp_801_fu_7689_p3 = add_ln1192_173_fu_7683_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_802_fu_7702_p3() {
    tmp_802_fu_7702_p3 = add_ln703_171_fu_7697_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_803_fu_7777_p3() {
    tmp_803_fu_7777_p3 = add_ln1192_174_fu_7771_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_804_fu_7790_p3() {
    tmp_804_fu_7790_p3 = add_ln703_172_fu_7785_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_805_fu_7865_p3() {
    tmp_805_fu_7865_p3 = add_ln1192_175_fu_7859_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_806_fu_7878_p3() {
    tmp_806_fu_7878_p3 = add_ln703_173_fu_7873_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_807_fu_7953_p3() {
    tmp_807_fu_7953_p3 = add_ln1192_176_fu_7947_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_808_fu_7966_p3() {
    tmp_808_fu_7966_p3 = add_ln703_174_fu_7961_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_809_fu_8041_p3() {
    tmp_809_fu_8041_p3 = add_ln1192_177_fu_8035_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_810_fu_8054_p3() {
    tmp_810_fu_8054_p3 = add_ln703_175_fu_8049_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_811_fu_8129_p3() {
    tmp_811_fu_8129_p3 = add_ln1192_178_fu_8123_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_812_fu_8142_p3() {
    tmp_812_fu_8142_p3 = add_ln703_176_fu_8137_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_813_fu_8217_p3() {
    tmp_813_fu_8217_p3 = add_ln1192_179_fu_8211_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_814_fu_8230_p3() {
    tmp_814_fu_8230_p3 = add_ln703_177_fu_8225_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_815_fu_8305_p3() {
    tmp_815_fu_8305_p3 = add_ln1192_180_fu_8299_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_816_fu_8318_p3() {
    tmp_816_fu_8318_p3 = add_ln703_178_fu_8313_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_817_fu_8393_p3() {
    tmp_817_fu_8393_p3 = add_ln1192_181_fu_8387_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_818_fu_8406_p3() {
    tmp_818_fu_8406_p3 = add_ln703_179_fu_8401_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_819_fu_8481_p3() {
    tmp_819_fu_8481_p3 = add_ln1192_182_fu_8475_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_820_fu_8494_p3() {
    tmp_820_fu_8494_p3 = add_ln703_180_fu_8489_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_821_fu_8569_p3() {
    tmp_821_fu_8569_p3 = add_ln1192_183_fu_8563_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_822_fu_8582_p3() {
    tmp_822_fu_8582_p3 = add_ln703_181_fu_8577_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_823_fu_8657_p3() {
    tmp_823_fu_8657_p3 = add_ln1192_184_fu_8651_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_824_fu_8670_p3() {
    tmp_824_fu_8670_p3 = add_ln703_182_fu_8665_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_825_fu_8745_p3() {
    tmp_825_fu_8745_p3 = add_ln1192_185_fu_8739_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_826_fu_8758_p3() {
    tmp_826_fu_8758_p3 = add_ln703_183_fu_8753_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_827_fu_8833_p3() {
    tmp_827_fu_8833_p3 = add_ln1192_186_fu_8827_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_828_fu_8846_p3() {
    tmp_828_fu_8846_p3 = add_ln703_184_fu_8841_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_829_fu_8921_p3() {
    tmp_829_fu_8921_p3 = add_ln1192_187_fu_8915_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_830_fu_8934_p3() {
    tmp_830_fu_8934_p3 = add_ln703_185_fu_8929_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_831_fu_9009_p3() {
    tmp_831_fu_9009_p3 = add_ln1192_188_fu_9003_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_832_fu_9022_p3() {
    tmp_832_fu_9022_p3 = add_ln703_186_fu_9017_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_833_fu_9097_p3() {
    tmp_833_fu_9097_p3 = add_ln1192_189_fu_9091_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_834_fu_9110_p3() {
    tmp_834_fu_9110_p3 = add_ln703_187_fu_9105_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_835_fu_9185_p3() {
    tmp_835_fu_9185_p3 = add_ln1192_190_fu_9179_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_836_fu_9198_p3() {
    tmp_836_fu_9198_p3 = add_ln703_188_fu_9193_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_top_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        top_0_V_address0 = top_0_V_addr_reg_13000.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        top_0_V_address0 =  (sc_lv<7>) (zext_ln531_4_fu_6433_p1.read());
    } else {
        top_0_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_0_V_ce0 = ap_const_logic_1;
    } else {
        top_0_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_0_V_d0() {
    top_0_V_d0 = select_ln340_324_reg_13514.read();
}

void pgconv64_1bit::thread_top_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()))) {
        top_0_V_we0 = ap_const_logic_1;
    } else {
        top_0_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            top_10_V_address0 = top_10_V_addr_reg_13085.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            top_10_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        } else {
            top_10_V_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        top_10_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_10_V_ce0 = ap_const_logic_1;
    } else {
        top_10_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_10_V_d0() {
    top_10_V_d0 = select_ln340_334_reg_13626.read();
}

void pgconv64_1bit::thread_top_10_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()))) {
        top_10_V_we0 = ap_const_logic_1;
    } else {
        top_10_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            top_11_V_address0 = top_11_V_addr_reg_13090.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            top_11_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        } else {
            top_11_V_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        top_11_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_11_V_ce0 = ap_const_logic_1;
    } else {
        top_11_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_11_V_d0() {
    top_11_V_d0 = select_ln340_335_reg_13631.read();
}

void pgconv64_1bit::thread_top_11_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()))) {
        top_11_V_we0 = ap_const_logic_1;
    } else {
        top_11_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            top_12_V_address0 = top_12_V_addr_reg_13095.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            top_12_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        } else {
            top_12_V_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        top_12_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_12_V_ce0 = ap_const_logic_1;
    } else {
        top_12_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_12_V_d0() {
    top_12_V_d0 = select_ln340_336_reg_13636.read();
}

void pgconv64_1bit::thread_top_12_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()))) {
        top_12_V_we0 = ap_const_logic_1;
    } else {
        top_12_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            top_13_V_address0 = top_13_V_addr_reg_13100.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            top_13_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        } else {
            top_13_V_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        top_13_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_13_V_ce0 = ap_const_logic_1;
    } else {
        top_13_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_13_V_d0() {
    top_13_V_d0 = select_ln340_337_reg_13641.read();
}

void pgconv64_1bit::thread_top_13_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()))) {
        top_13_V_we0 = ap_const_logic_1;
    } else {
        top_13_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_14_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_14_V_address0 = top_14_V_addr_reg_13182.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        top_14_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
    } else {
        top_14_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_14_V_ce0 = ap_const_logic_1;
    } else {
        top_14_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_14_V_d0() {
    top_14_V_d0 = select_ln340_338_reg_13688.read();
}

void pgconv64_1bit::thread_top_14_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_14_V_we0 = ap_const_logic_1;
    } else {
        top_14_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_15_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_15_V_address0 = top_15_V_addr_reg_13187.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        top_15_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
    } else {
        top_15_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_15_V_ce0 = ap_const_logic_1;
    } else {
        top_15_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_15_V_d0() {
    top_15_V_d0 = select_ln340_339_reg_13693.read();
}

void pgconv64_1bit::thread_top_15_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_15_V_we0 = ap_const_logic_1;
    } else {
        top_15_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_16_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_16_V_address0 = top_16_V_addr_reg_13192.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        top_16_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
    } else {
        top_16_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_16_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_16_V_ce0 = ap_const_logic_1;
    } else {
        top_16_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_16_V_d0() {
    top_16_V_d0 = select_ln340_340_reg_13698.read();
}

void pgconv64_1bit::thread_top_16_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_16_V_we0 = ap_const_logic_1;
    } else {
        top_16_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_17_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_17_V_address0 = top_17_V_addr_reg_13197.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        top_17_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
    } else {
        top_17_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_17_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_17_V_ce0 = ap_const_logic_1;
    } else {
        top_17_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_17_V_d0() {
    top_17_V_d0 = select_ln340_341_reg_13703.read();
}

void pgconv64_1bit::thread_top_17_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_17_V_we0 = ap_const_logic_1;
    } else {
        top_17_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_18_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_18_V_address0 = top_18_V_addr_reg_13202.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        top_18_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
    } else {
        top_18_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_18_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_18_V_ce0 = ap_const_logic_1;
    } else {
        top_18_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_18_V_d0() {
    top_18_V_d0 = select_ln340_342_reg_13708.read();
}

void pgconv64_1bit::thread_top_18_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_18_V_we0 = ap_const_logic_1;
    } else {
        top_18_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_19_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_19_V_address0 = top_19_V_addr_reg_13207.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        top_19_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
    } else {
        top_19_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_19_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_19_V_ce0 = ap_const_logic_1;
    } else {
        top_19_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_19_V_d0() {
    top_19_V_d0 = select_ln340_343_reg_13713.read();
}

void pgconv64_1bit::thread_top_19_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_19_V_we0 = ap_const_logic_1;
    } else {
        top_19_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        top_1_V_address0 = top_1_V_addr_reg_13005.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        top_1_V_address0 =  (sc_lv<7>) (zext_ln531_4_fu_6433_p1.read());
    } else {
        top_1_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_1_V_ce0 = ap_const_logic_1;
    } else {
        top_1_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_1_V_d0() {
    top_1_V_d0 = select_ln340_325_reg_13519.read();
}

void pgconv64_1bit::thread_top_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()))) {
        top_1_V_we0 = ap_const_logic_1;
    } else {
        top_1_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_20_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_20_V_address0 = top_20_V_addr_reg_13212.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        top_20_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
    } else {
        top_20_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_20_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_20_V_ce0 = ap_const_logic_1;
    } else {
        top_20_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_20_V_d0() {
    top_20_V_d0 = select_ln340_344_reg_13718.read();
}

void pgconv64_1bit::thread_top_20_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_20_V_we0 = ap_const_logic_1;
    } else {
        top_20_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_21_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_21_V_address0 = top_21_V_addr_reg_13459.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        top_21_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
    } else {
        top_21_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_21_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_21_V_ce0 = ap_const_logic_1;
    } else {
        top_21_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_21_V_d0() {
    top_21_V_d0 = select_ln340_345_reg_13747.read();
}

void pgconv64_1bit::thread_top_21_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_21_V_we0 = ap_const_logic_1;
    } else {
        top_21_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_22_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_22_V_address0 = top_22_V_addr_reg_13464.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        top_22_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
    } else {
        top_22_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_22_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_22_V_ce0 = ap_const_logic_1;
    } else {
        top_22_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_22_V_d0() {
    top_22_V_d0 = select_ln340_346_reg_13752.read();
}

void pgconv64_1bit::thread_top_22_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_22_V_we0 = ap_const_logic_1;
    } else {
        top_22_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_23_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_23_V_address0 = top_23_V_addr_reg_13469.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        top_23_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
    } else {
        top_23_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_23_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_23_V_ce0 = ap_const_logic_1;
    } else {
        top_23_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_23_V_d0() {
    top_23_V_d0 = select_ln340_347_reg_13757.read();
}

void pgconv64_1bit::thread_top_23_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_23_V_we0 = ap_const_logic_1;
    } else {
        top_23_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_24_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_24_V_address0 = top_24_V_addr_reg_13474.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        top_24_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
    } else {
        top_24_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_24_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_24_V_ce0 = ap_const_logic_1;
    } else {
        top_24_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_24_V_d0() {
    top_24_V_d0 = select_ln340_348_reg_13762.read();
}

void pgconv64_1bit::thread_top_24_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_24_V_we0 = ap_const_logic_1;
    } else {
        top_24_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_25_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_25_V_address0 = top_25_V_addr_reg_13479.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        top_25_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
    } else {
        top_25_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_25_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_25_V_ce0 = ap_const_logic_1;
    } else {
        top_25_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_25_V_d0() {
    top_25_V_d0 = select_ln340_349_reg_13767.read();
}

void pgconv64_1bit::thread_top_25_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_25_V_we0 = ap_const_logic_1;
    } else {
        top_25_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_26_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_26_V_address0 = top_26_V_addr_reg_13484.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        top_26_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
    } else {
        top_26_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_26_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_26_V_ce0 = ap_const_logic_1;
    } else {
        top_26_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_26_V_d0() {
    top_26_V_d0 = select_ln340_350_reg_13772.read();
}

void pgconv64_1bit::thread_top_26_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_26_V_we0 = ap_const_logic_1;
    } else {
        top_26_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_27_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_27_V_address0 = top_27_V_addr_reg_13489.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        top_27_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
    } else {
        top_27_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_27_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_27_V_ce0 = ap_const_logic_1;
    } else {
        top_27_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_27_V_d0() {
    top_27_V_d0 = select_ln340_351_reg_13777.read();
}

void pgconv64_1bit::thread_top_27_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_27_V_we0 = ap_const_logic_1;
    } else {
        top_27_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_28_V_address0() {
    top_28_V_address0 = top_28_V_addr_reg_13494.read();
}

void pgconv64_1bit::thread_top_28_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_28_V_ce0 = ap_const_logic_1;
    } else {
        top_28_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_28_V_d0() {
    top_28_V_d0 = select_ln340_352_reg_13782.read();
}

void pgconv64_1bit::thread_top_28_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_28_V_we0 = ap_const_logic_1;
    } else {
        top_28_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_29_V_address0() {
    top_29_V_address0 = top_29_V_addr_reg_13499.read();
}

void pgconv64_1bit::thread_top_29_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_29_V_ce0 = ap_const_logic_1;
    } else {
        top_29_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_29_V_d0() {
    top_29_V_d0 = select_ln340_353_reg_13787.read();
}

void pgconv64_1bit::thread_top_29_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_29_V_we0 = ap_const_logic_1;
    } else {
        top_29_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        top_2_V_address0 = top_2_V_addr_reg_13010.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        top_2_V_address0 =  (sc_lv<7>) (zext_ln531_4_fu_6433_p1.read());
    } else {
        top_2_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_2_V_ce0 = ap_const_logic_1;
    } else {
        top_2_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_2_V_d0() {
    top_2_V_d0 = select_ln340_326_reg_13524.read();
}

void pgconv64_1bit::thread_top_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()))) {
        top_2_V_we0 = ap_const_logic_1;
    } else {
        top_2_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_30_V_address0() {
    top_30_V_address0 = top_30_V_addr_reg_13504.read();
}

void pgconv64_1bit::thread_top_30_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_30_V_ce0 = ap_const_logic_1;
    } else {
        top_30_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_30_V_d0() {
    top_30_V_d0 = select_ln340_354_reg_13792.read();
}

void pgconv64_1bit::thread_top_30_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_30_V_we0 = ap_const_logic_1;
    } else {
        top_30_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_31_V_address0() {
    top_31_V_address0 = top_31_V_addr_reg_13509.read();
}

void pgconv64_1bit::thread_top_31_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_31_V_ce0 = ap_const_logic_1;
    } else {
        top_31_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_31_V_d0() {
    top_31_V_d0 = select_ln340_355_reg_13797.read();
}

void pgconv64_1bit::thread_top_31_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        top_31_V_we0 = ap_const_logic_1;
    } else {
        top_31_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        top_3_V_address0 = top_3_V_addr_reg_13015.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        top_3_V_address0 =  (sc_lv<7>) (zext_ln531_4_fu_6433_p1.read());
    } else {
        top_3_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_3_V_ce0 = ap_const_logic_1;
    } else {
        top_3_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_3_V_d0() {
    top_3_V_d0 = select_ln340_327_reg_13529.read();
}

void pgconv64_1bit::thread_top_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()))) {
        top_3_V_we0 = ap_const_logic_1;
    } else {
        top_3_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        top_4_V_address0 = top_4_V_addr_reg_13020.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        top_4_V_address0 =  (sc_lv<7>) (zext_ln531_4_fu_6433_p1.read());
    } else {
        top_4_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_4_V_ce0 = ap_const_logic_1;
    } else {
        top_4_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_4_V_d0() {
    top_4_V_d0 = select_ln340_328_reg_13534.read();
}

void pgconv64_1bit::thread_top_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()))) {
        top_4_V_we0 = ap_const_logic_1;
    } else {
        top_4_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        top_5_V_address0 = top_5_V_addr_reg_13025.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        top_5_V_address0 =  (sc_lv<7>) (zext_ln531_4_fu_6433_p1.read());
    } else {
        top_5_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_5_V_ce0 = ap_const_logic_1;
    } else {
        top_5_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_5_V_d0() {
    top_5_V_d0 = select_ln340_329_reg_13539.read();
}

void pgconv64_1bit::thread_top_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()))) {
        top_5_V_we0 = ap_const_logic_1;
    } else {
        top_5_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        top_6_V_address0 = top_6_V_addr_reg_13030.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        top_6_V_address0 =  (sc_lv<7>) (zext_ln531_4_fu_6433_p1.read());
    } else {
        top_6_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_6_V_ce0 = ap_const_logic_1;
    } else {
        top_6_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_6_V_d0() {
    top_6_V_d0 = select_ln340_330_reg_13544.read();
}

void pgconv64_1bit::thread_top_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()))) {
        top_6_V_we0 = ap_const_logic_1;
    } else {
        top_6_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            top_7_V_address0 = top_7_V_addr_reg_13070.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            top_7_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        } else {
            top_7_V_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        top_7_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_7_V_ce0 = ap_const_logic_1;
    } else {
        top_7_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_7_V_d0() {
    top_7_V_d0 = select_ln340_331_reg_13611.read();
}

void pgconv64_1bit::thread_top_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()))) {
        top_7_V_we0 = ap_const_logic_1;
    } else {
        top_7_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            top_8_V_address0 = top_8_V_addr_reg_13075.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            top_8_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        } else {
            top_8_V_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        top_8_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_8_V_ce0 = ap_const_logic_1;
    } else {
        top_8_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_8_V_d0() {
    top_8_V_d0 = select_ln340_332_reg_13616.read();
}

void pgconv64_1bit::thread_top_8_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()))) {
        top_8_V_we0 = ap_const_logic_1;
    } else {
        top_8_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            top_9_V_address0 = top_9_V_addr_reg_13080.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            top_9_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_12971.read());
        } else {
            top_9_V_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        top_9_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_9_V_ce0 = ap_const_logic_1;
    } else {
        top_9_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_9_V_d0() {
    top_9_V_d0 = select_ln340_333_reg_13621.read();
}

void pgconv64_1bit::thread_top_9_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10077_pp0_iter3_reg.read()))) {
        top_9_V_we0 = ap_const_logic_1;
    } else {
        top_9_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_trunc_ln500_fu_5787_p1() {
    trunc_ln500_fu_5787_p1 = stride.read().range(2-1, 0);
}

void pgconv64_1bit::thread_weight_buf_3x3_V_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_0_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_0_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_0_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_0_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_0_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_0_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_0_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_0_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_0_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_0_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_0_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_0_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_0_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_0_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_0_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_0_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_0_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_10_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_10_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_10_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_10_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_10_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_10_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_10_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_10_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_10_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_10_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_10_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_10_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_10_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_10_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_10_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_10_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_10_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_10_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_10_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_11_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_11_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_11_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_11_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_11_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_11_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_11_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_11_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_11_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_11_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_11_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_11_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_11_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_11_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_11_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_11_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_11_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_11_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_11_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_12_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_12_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_12_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_12_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_12_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_12_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_12_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_12_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_12_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_12_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_12_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_12_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_12_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_12_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_12_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_12_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_12_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_12_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_12_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_12_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_13_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_13_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_13_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_13_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_13_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_13_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_13_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_13_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_13_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_13_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_13_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_13_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_13_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_13_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_13_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_13_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_13_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_13_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_13_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_13_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_14_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_14_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_14_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_14_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_14_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_14_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_14_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_14_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_14_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_14_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_14_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_14_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_14_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_14_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_14_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_14_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_14_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_14_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_14_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_14_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_15_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_15_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_15_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_15_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_15_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_15_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_15_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_15_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_15_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_15_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_15_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_15_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_15_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_15_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_15_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_15_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_15_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_15_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_15_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_16_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_16_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_16_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_16_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_16_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_16_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_16_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_16_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_16_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_16_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_16_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_16_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_16_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_16_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_16_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_16_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_16_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_16_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_16_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_16_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_17_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_17_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_17_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_17_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_17_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_17_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_17_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_17_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_17_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_17_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_17_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_17_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_17_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_17_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_17_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_17_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_17_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_17_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_17_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_17_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_18_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_18_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_18_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_18_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_18_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_18_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_18_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_18_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_18_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_18_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_18_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_18_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_18_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_18_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_18_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_18_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_18_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_18_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_18_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_18_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_19_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_19_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_19_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_19_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_19_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_19_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_19_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_19_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_19_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_19_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_19_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_19_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_19_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_19_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_19_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_19_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_19_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_19_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_19_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_19_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_1_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_1_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_1_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_1_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_1_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_1_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_1_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_1_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_1_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_1_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_1_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_1_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_1_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_1_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_1_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_1_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_1_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_20_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_20_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_20_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_20_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_20_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_20_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_20_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_20_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_20_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_20_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_20_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_20_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_20_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_20_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_20_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_20_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_20_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_20_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_20_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_20_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_21_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_21_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_21_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_21_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_21_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_21_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_21_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_21_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_21_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_21_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_21_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_21_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_21_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_21_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_21_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_21_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_21_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_21_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_21_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_21_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_22_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_22_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_22_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_22_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_22_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_22_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_22_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_22_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_22_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_22_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_22_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_22_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_22_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_22_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_22_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_22_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_22_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_22_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_22_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_22_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_23_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_23_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_23_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_23_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_23_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_23_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_23_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_23_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_23_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_23_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_23_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_23_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_23_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_23_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_23_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_23_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_23_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_23_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_23_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_23_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_24_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_24_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_24_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_24_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_24_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_24_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_24_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_24_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_24_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_24_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_24_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_24_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_24_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_24_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_24_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_24_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_24_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_24_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_24_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_24_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_24_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_25_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_25_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_25_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_25_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_25_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_25_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_25_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_25_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_25_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_25_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_25_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_25_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_25_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_25_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_25_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_25_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_25_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_25_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_25_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_25_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_25_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_26_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_26_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_26_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_26_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_26_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_26_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_26_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_26_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_26_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_26_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_26_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_26_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_26_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_26_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_26_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_26_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_26_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_26_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_26_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_26_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_26_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_27_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_27_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_27_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_27_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_27_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_27_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_27_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_27_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

}

