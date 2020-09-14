#include "pgconv64_1bit.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pgconv64_1bit::thread_bottom_6_V_address1() {
    bottom_6_V_address1 =  (sc_lv<4>) (zext_ln531_fu_6067_p1.read());
}

void pgconv64_1bit::thread_bottom_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)))) {
        bottom_6_V_ce0 = ap_const_logic_1;
    } else {
        bottom_6_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_bottom_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        bottom_6_V_ce1 = ap_const_logic_1;
    } else {
        bottom_6_V_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_bottom_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            bottom_7_V_address0 =  (sc_lv<4>) (zext_ln534_fu_6111_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            bottom_7_V_address0 =  (sc_lv<4>) (sext_ln532_fu_6086_p1.read());
        } else {
            bottom_7_V_address0 = "XXXX";
        }
    } else {
        bottom_7_V_address0 = "XXXX";
    }
}

void pgconv64_1bit::thread_bottom_7_V_address1() {
    bottom_7_V_address1 =  (sc_lv<4>) (zext_ln531_fu_6067_p1.read());
}

void pgconv64_1bit::thread_bottom_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)))) {
        bottom_7_V_ce0 = ap_const_logic_1;
    } else {
        bottom_7_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_bottom_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        bottom_7_V_ce1 = ap_const_logic_1;
    } else {
        bottom_7_V_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_bottom_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            bottom_8_V_address0 =  (sc_lv<4>) (zext_ln534_fu_6111_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            bottom_8_V_address0 =  (sc_lv<4>) (sext_ln532_fu_6086_p1.read());
        } else {
            bottom_8_V_address0 = "XXXX";
        }
    } else {
        bottom_8_V_address0 = "XXXX";
    }
}

void pgconv64_1bit::thread_bottom_8_V_address1() {
    bottom_8_V_address1 =  (sc_lv<4>) (zext_ln531_fu_6067_p1.read());
}

void pgconv64_1bit::thread_bottom_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)))) {
        bottom_8_V_ce0 = ap_const_logic_1;
    } else {
        bottom_8_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_bottom_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        bottom_8_V_ce1 = ap_const_logic_1;
    } else {
        bottom_8_V_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_col_1_fu_6050_p2() {
    col_1_fu_6050_p2 = (shl_ln6_fu_6043_p3.read() | ap_const_lv4_1);
}

void pgconv64_1bit::thread_col_2_fu_6056_p3() {
    col_2_fu_6056_p3 = (!icmp_ln500_reg_9217.read()[0].is_01())? sc_lv<4>(): ((icmp_ln500_reg_9217.read()[0].to_bool())? zext_ln511_fu_6040_p1.read(): col_1_fu_6050_p2.read());
}

void pgconv64_1bit::thread_col_fu_6034_p2() {
    col_fu_6034_p2 = (!select_ln505_fu_5881_p3.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(select_ln505_fu_5881_p3.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5066_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2282.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2303.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2331.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2363.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2477.read(), ap_const_boolean_0)))) {
        grp_batch_norm_fu_5066_ap_ce = ap_const_logic_1;
    } else {
        grp_batch_norm_fu_5066_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5066_bias_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        grp_batch_norm_fu_5066_bias_V = bn_bias_V129_load_reg_12993.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5066_bias_V = bn_bias_V122_load_reg_12923.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5066_bias_V = bn_bias_V115_load_reg_12853.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5066_bias_V = bn_bias_V108_load_reg_12783.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5066_bias_V = bn_bias_V_load_reg_12578.read();
    } else {
        grp_batch_norm_fu_5066_bias_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5066_sum_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        grp_batch_norm_fu_5066_sum_V = sum0_V_0_27_reg_13168.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5066_sum_V = sum0_V_0_20_reg_13098.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5066_sum_V = sum0_V_0_13_reg_13063.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5066_sum_V = sum0_V_0_7_reg_13028.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5066_sum_V = sum0_V_reg_12568.read();
    } else {
        grp_batch_norm_fu_5066_sum_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5066_weight_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        grp_batch_norm_fu_5066_weight_V = bn_weights_V98_load_reg_12988.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5066_weight_V = bn_weights_V91_load_reg_12918.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5066_weight_V = bn_weights_V84_load_reg_12848.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5066_weight_V = bn_weights_V77_load_reg_12778.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5066_weight_V = bn_weights_V_load_reg_12573.read();
    } else {
        grp_batch_norm_fu_5066_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5073_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2283.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2304.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2332.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2364.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2481.read(), ap_const_boolean_0)))) {
        grp_batch_norm_fu_5073_ap_ce = ap_const_logic_1;
    } else {
        grp_batch_norm_fu_5073_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5073_bias_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        grp_batch_norm_fu_5073_bias_V = bn_bias_V130_load_reg_13003.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5073_bias_V = bn_bias_V123_load_reg_12933.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5073_bias_V = bn_bias_V116_load_reg_12863.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5073_bias_V = bn_bias_V109_load_reg_12793.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5073_bias_V = bn_bias_V102_load_reg_12608.read();
    } else {
        grp_batch_norm_fu_5073_bias_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5073_sum_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        grp_batch_norm_fu_5073_sum_V = sum0_V_0_28_reg_13173.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5073_sum_V = sum0_V_0_21_reg_13103.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5073_sum_V = sum0_V_0_14_reg_13068.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5073_sum_V = sum0_V_0_8_reg_13033.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5073_sum_V = sum0_V_0_1_reg_12598.read();
    } else {
        grp_batch_norm_fu_5073_sum_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5073_weight_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        grp_batch_norm_fu_5073_weight_V = bn_weights_V99_load_reg_12998.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5073_weight_V = bn_weights_V92_load_reg_12928.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5073_weight_V = bn_weights_V85_load_reg_12858.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5073_weight_V = bn_weights_V78_load_reg_12788.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5073_weight_V = bn_weights_V71_load_reg_12603.read();
    } else {
        grp_batch_norm_fu_5073_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5080_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2284.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2305.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2333.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2365.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2485.read(), ap_const_boolean_0)))) {
        grp_batch_norm_fu_5080_ap_ce = ap_const_logic_1;
    } else {
        grp_batch_norm_fu_5080_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5080_bias_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        grp_batch_norm_fu_5080_bias_V = bn_bias_V131_load_reg_13013.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5080_bias_V = bn_bias_V124_load_reg_12943.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5080_bias_V = bn_bias_V117_load_reg_12873.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5080_bias_V = bn_bias_V110_load_reg_12803.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5080_bias_V = bn_bias_V103_load_reg_12638.read();
    } else {
        grp_batch_norm_fu_5080_bias_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5080_sum_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        grp_batch_norm_fu_5080_sum_V = sum0_V_0_29_reg_13178.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5080_sum_V = sum0_V_0_22_reg_13108.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5080_sum_V = sum0_V_0_15_reg_13073.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5080_sum_V = sum0_V_0_9_reg_13038.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5080_sum_V = sum0_V_0_2_reg_12628.read();
    } else {
        grp_batch_norm_fu_5080_sum_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5080_weight_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        grp_batch_norm_fu_5080_weight_V = bn_weights_V100_load_reg_13008.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5080_weight_V = bn_weights_V93_load_reg_12938.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5080_weight_V = bn_weights_V86_load_reg_12868.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5080_weight_V = bn_weights_V79_load_reg_12798.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5080_weight_V = bn_weights_V72_load_reg_12633.read();
    } else {
        grp_batch_norm_fu_5080_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5087_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2285.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2306.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2334.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2366.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2489.read(), ap_const_boolean_0)))) {
        grp_batch_norm_fu_5087_ap_ce = ap_const_logic_1;
    } else {
        grp_batch_norm_fu_5087_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5087_bias_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        grp_batch_norm_fu_5087_bias_V = bn_bias_V132_load_reg_13023.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5087_bias_V = bn_bias_V125_load_reg_12953.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5087_bias_V = bn_bias_V118_load_reg_12883.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5087_bias_V = bn_bias_V111_load_reg_12813.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5087_bias_V = bn_bias_V104_load_reg_12668.read();
    } else {
        grp_batch_norm_fu_5087_bias_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5087_sum_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        grp_batch_norm_fu_5087_sum_V = sum0_V_0_30_reg_13183.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5087_sum_V = sum0_V_0_23_reg_13113.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5087_sum_V = sum0_V_0_16_reg_13078.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5087_sum_V = sum0_V_0_s_reg_13043.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5087_sum_V = sum0_V_0_3_reg_12658.read();
    } else {
        grp_batch_norm_fu_5087_sum_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5087_weight_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        grp_batch_norm_fu_5087_weight_V = bn_weights_V101_load_reg_13018.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5087_weight_V = bn_weights_V94_load_reg_12948.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5087_weight_V = bn_weights_V87_load_reg_12878.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5087_weight_V = bn_weights_V80_load_reg_12808.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_batch_norm_fu_5087_weight_V = bn_weights_V73_load_reg_12663.read();
    } else {
        grp_batch_norm_fu_5087_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5094_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2286.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2307.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2335.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2367.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2493.read(), ap_const_boolean_0)))) {
        grp_batch_norm_fu_5094_ap_ce = ap_const_logic_1;
    } else {
        grp_batch_norm_fu_5094_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5094_bias_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8209.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5094_bias_V = bn_bias_V126_load_reg_12963.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8207.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5094_bias_V = bn_bias_V119_load_reg_12893.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8205.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5094_bias_V = bn_bias_V112_load_reg_12823.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8203.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5094_bias_V = bn_bias_V105_load_reg_12698.read();
        } else {
            grp_batch_norm_fu_5094_bias_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_batch_norm_fu_5094_bias_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5094_sum_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8209.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5094_sum_V = sum0_V_0_24_reg_13118.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8207.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5094_sum_V = sum0_V_0_17_reg_13083.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8205.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5094_sum_V = sum0_V_0_10_reg_13048.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8203.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5094_sum_V = sum0_V_0_4_reg_12688.read();
        } else {
            grp_batch_norm_fu_5094_sum_V =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        grp_batch_norm_fu_5094_sum_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5094_weight_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8209.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5094_weight_V = bn_weights_V95_load_reg_12958.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8207.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5094_weight_V = bn_weights_V88_load_reg_12888.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8205.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5094_weight_V = bn_weights_V81_load_reg_12818.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8203.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5094_weight_V = bn_weights_V74_load_reg_12693.read();
        } else {
            grp_batch_norm_fu_5094_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_batch_norm_fu_5094_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5101_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2287.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2308.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2336.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2368.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2497.read(), ap_const_boolean_0)))) {
        grp_batch_norm_fu_5101_ap_ce = ap_const_logic_1;
    } else {
        grp_batch_norm_fu_5101_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5101_bias_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8209.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5101_bias_V = bn_bias_V127_load_reg_12973.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8207.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5101_bias_V = bn_bias_V120_load_reg_12903.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8205.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5101_bias_V = bn_bias_V113_load_reg_12833.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8203.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5101_bias_V = bn_bias_V106_load_reg_12728.read();
        } else {
            grp_batch_norm_fu_5101_bias_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_batch_norm_fu_5101_bias_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5101_sum_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8209.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5101_sum_V = sum0_V_0_25_reg_13123.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8207.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5101_sum_V = sum0_V_0_18_reg_13088.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8205.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5101_sum_V = sum0_V_0_11_reg_13053.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8203.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5101_sum_V = sum0_V_0_5_reg_12718.read();
        } else {
            grp_batch_norm_fu_5101_sum_V =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        grp_batch_norm_fu_5101_sum_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5101_weight_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8209.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5101_weight_V = bn_weights_V96_load_reg_12968.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8207.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5101_weight_V = bn_weights_V89_load_reg_12898.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8205.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5101_weight_V = bn_weights_V82_load_reg_12828.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8203.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5101_weight_V = bn_weights_V75_load_reg_12723.read();
        } else {
            grp_batch_norm_fu_5101_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_batch_norm_fu_5101_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5108_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2288.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2309.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2337.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2369.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2501.read(), ap_const_boolean_0)))) {
        grp_batch_norm_fu_5108_ap_ce = ap_const_logic_1;
    } else {
        grp_batch_norm_fu_5108_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5108_bias_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8209.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5108_bias_V = bn_bias_V128_load_reg_12983.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8207.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5108_bias_V = bn_bias_V121_load_reg_12913.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8205.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5108_bias_V = bn_bias_V114_load_reg_12843.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8203.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5108_bias_V = bn_bias_V107_load_reg_12758.read();
        } else {
            grp_batch_norm_fu_5108_bias_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_batch_norm_fu_5108_bias_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5108_sum_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8209.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5108_sum_V = sum0_V_0_26_reg_13128.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8207.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5108_sum_V = sum0_V_0_19_reg_13093.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8205.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5108_sum_V = sum0_V_0_12_reg_13058.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8203.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5108_sum_V = sum0_V_0_6_reg_12748.read();
        } else {
            grp_batch_norm_fu_5108_sum_V =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        grp_batch_norm_fu_5108_sum_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_batch_norm_fu_5108_weight_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter2_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8209.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5108_weight_V = bn_weights_V97_load_reg_12978.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8207.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5108_weight_V = bn_weights_V90_load_reg_12908.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8205.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5108_weight_V = bn_weights_V83_load_reg_12838.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8203.read(), ap_const_boolean_1)) {
            grp_batch_norm_fu_5108_weight_V = bn_weights_V76_load_reg_12753.read();
        } else {
            grp_batch_norm_fu_5108_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_batch_norm_fu_5108_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4546_ap_start() {
    grp_compute_engine_64_fu_4546_ap_start = grp_compute_engine_64_fu_4546_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4546_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4546_b_V = select_ln539_6_reg_10803.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4546_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4546_b_V = select_ln538_6_reg_10770.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4546_b_V = reg_5610.read();
    } else {
        grp_compute_engine_64_fu_4546_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4546_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4546_w_V = weight_buf_3x3_V_25_7_reg_11093.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4546_w_V = weight_buf_3x3_V_0_l_2_reg_10347.read();
    } else if (((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0)))) {
        grp_compute_engine_64_fu_4546_w_V = reg_5298.read();
    } else {
        grp_compute_engine_64_fu_4546_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4554_ap_start() {
    grp_compute_engine_64_fu_4554_ap_start = grp_compute_engine_64_fu_4554_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4554_b_V() {
    if (((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4554_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4554_b_V = select_ln539_6_reg_10803.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4554_b_V = tmp_7_reg_10357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4554_b_V = tmp_4_reg_10320.read();
    } else {
        grp_compute_engine_64_fu_4554_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4554_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4554_w_V = weight_buf_3x3_V_25_8_reg_11173.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4554_w_V = reg_5310.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4554_w_V = reg_5298.read();
    } else if (((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4554_w_V = reg_5304.read();
    } else {
        grp_compute_engine_64_fu_4554_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4562_ap_start() {
    grp_compute_engine_64_fu_4562_ap_start = grp_compute_engine_64_fu_4562_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4562_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4562_b_V = tmp_9_reg_10559.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4562_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4562_b_V = select_ln538_6_reg_10770.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4562_b_V = reg_5632.read();
    } else {
        grp_compute_engine_64_fu_4562_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4562_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4562_w_V = weight_buf_3x3_V_26_s_reg_11498.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4562_w_V = reg_5325.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4562_w_V = reg_5310.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4562_w_V = reg_5304.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4562_w_V = weight_buf_3x3_V_0_l_3_reg_10352.read();
    } else {
        grp_compute_engine_64_fu_4562_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4570_ap_start() {
    grp_compute_engine_64_fu_4570_ap_start = grp_compute_engine_64_fu_4570_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4570_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4570_b_V = tmp_s_reg_10577.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4570_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4570_b_V = select_ln539_6_reg_10803.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4570_b_V = reg_5610.read();
    } else {
        grp_compute_engine_64_fu_4570_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4570_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4570_w_V = weight_buf_3x3_V_26_1_reg_11503.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4570_w_V = reg_5340.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4570_w_V = reg_5318.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4570_w_V = weight_buf_3x3_V_1_l_2_reg_10389.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4570_w_V = reg_5310.read();
    } else {
        grp_compute_engine_64_fu_4570_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4578_ap_start() {
    grp_compute_engine_64_fu_4578_ap_start = grp_compute_engine_64_fu_4578_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4578_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4578_b_V = tmp_1_reg_10841.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4578_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4578_b_V = select_ln538_6_reg_10770.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4578_b_V = tmp_7_reg_10357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4578_b_V = tmp_4_reg_10320.read();
    } else {
        grp_compute_engine_64_fu_4578_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4578_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4578_w_V = weight_buf_3x3_V_26_2_reg_10710.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4578_w_V = reg_5355.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4578_w_V = reg_5325.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4578_w_V = reg_5310.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4578_w_V = reg_5318.read();
    } else {
        grp_compute_engine_64_fu_4578_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4586_ap_start() {
    grp_compute_engine_64_fu_4586_ap_start = grp_compute_engine_64_fu_4586_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4586_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4586_b_V = tmp_2_reg_10600.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4586_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4586_b_V = select_ln539_6_reg_10803.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4586_b_V = reg_5632.read();
    } else {
        grp_compute_engine_64_fu_4586_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4586_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4586_w_V = weight_buf_3x3_V_26_3_reg_10715.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4586_w_V = reg_5370.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4586_w_V = reg_5333.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4586_w_V = reg_5318.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4586_w_V = weight_buf_3x3_V_1_l_3_reg_10394.read();
    } else {
        grp_compute_engine_64_fu_4586_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4594_ap_start() {
    grp_compute_engine_64_fu_4594_ap_start = grp_compute_engine_64_fu_4594_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4594_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4594_b_V = tmp_10_reg_10623.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4594_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4594_b_V = select_ln538_6_reg_10770.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4594_b_V = reg_5610.read();
    } else {
        grp_compute_engine_64_fu_4594_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4594_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4594_w_V = weight_buf_3x3_V_26_4_reg_10940.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4594_w_V = reg_5385.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4594_w_V = reg_5340.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4594_w_V = weight_buf_3x3_V_2_l_2_reg_10399.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4594_w_V = reg_5325.read();
    } else {
        grp_compute_engine_64_fu_4594_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4602_ap_start() {
    grp_compute_engine_64_fu_4602_ap_start = grp_compute_engine_64_fu_4602_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4602_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4602_b_V = tmp_11_reg_10858.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4602_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4602_b_V = select_ln539_6_reg_10803.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4602_b_V = tmp_7_reg_10357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4602_b_V = tmp_4_reg_10320.read();
    } else {
        grp_compute_engine_64_fu_4602_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4602_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4602_w_V = weight_buf_3x3_V_26_5_reg_10945.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4602_w_V = reg_5400.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4602_w_V = reg_5348.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4602_w_V = reg_5325.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4602_w_V = reg_5333.read();
    } else {
        grp_compute_engine_64_fu_4602_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4610_ap_start() {
    grp_compute_engine_64_fu_4610_ap_start = grp_compute_engine_64_fu_4610_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4610_b_V() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4610_b_V = select_ln540_6_reg_11000.read();
    } else if (((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4610_b_V = select_ln538_6_reg_10770.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4610_b_V = reg_5632.read();
    } else {
        grp_compute_engine_64_fu_4610_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4610_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4610_w_V = weight_buf_3x3_V_26_6_reg_11098.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4610_w_V = reg_5415.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4610_w_V = reg_5355.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4610_w_V = reg_5333.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4610_w_V = weight_buf_3x3_V_2_l_3_reg_10404.read();
    } else {
        grp_compute_engine_64_fu_4610_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4618_ap_start() {
    grp_compute_engine_64_fu_4618_ap_start = grp_compute_engine_64_fu_4618_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4618_b_V() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4618_b_V = select_ln540_6_reg_11000.read();
    } else if (((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4618_b_V = select_ln539_6_reg_10803.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4618_b_V = reg_5610.read();
    } else {
        grp_compute_engine_64_fu_4618_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4618_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4618_w_V = weight_buf_3x3_V_26_7_reg_11103.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4618_w_V = reg_5430.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4618_w_V = reg_5363.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4618_w_V = weight_buf_3x3_V_3_l_2_reg_10409.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4618_w_V = reg_5340.read();
    } else {
        grp_compute_engine_64_fu_4618_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4626_ap_start() {
    grp_compute_engine_64_fu_4626_ap_start = grp_compute_engine_64_fu_4626_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4626_b_V() {
    if (((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4626_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4626_b_V = select_ln538_6_reg_10770.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4626_b_V = tmp_7_reg_10357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4626_b_V = tmp_4_reg_10320.read();
    } else {
        grp_compute_engine_64_fu_4626_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4626_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4626_w_V = weight_buf_3x3_V_26_8_reg_11178.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4626_w_V = reg_5445.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4626_w_V = reg_5370.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4626_w_V = reg_5340.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4626_w_V = reg_5348.read();
    } else {
        grp_compute_engine_64_fu_4626_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4634_ap_start() {
    grp_compute_engine_64_fu_4634_ap_start = grp_compute_engine_64_fu_4634_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4634_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4634_b_V = tmp_9_reg_10559.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4634_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4634_b_V = select_ln539_6_reg_10803.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4634_b_V = reg_5632.read();
    } else {
        grp_compute_engine_64_fu_4634_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4634_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4634_w_V = weight_buf_3x3_V_27_s_reg_11508.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4634_w_V = reg_5460.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4634_w_V = reg_5378.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4634_w_V = reg_5348.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4634_w_V = weight_buf_3x3_V_3_l_3_reg_10414.read();
    } else {
        grp_compute_engine_64_fu_4634_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4642_ap_start() {
    grp_compute_engine_64_fu_4642_ap_start = grp_compute_engine_64_fu_4642_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4642_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4642_b_V = tmp_s_reg_10577.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4642_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4642_b_V = select_ln538_6_reg_10770.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4642_b_V = reg_5610.read();
    } else {
        grp_compute_engine_64_fu_4642_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4642_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4642_w_V = weight_buf_3x3_V_27_1_reg_11513.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4642_w_V = reg_5475.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4642_w_V = reg_5385.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4642_w_V = weight_buf_3x3_V_4_l_2_reg_10419.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4642_w_V = reg_5355.read();
    } else {
        grp_compute_engine_64_fu_4642_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4650_ap_start() {
    grp_compute_engine_64_fu_4650_ap_start = grp_compute_engine_64_fu_4650_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4650_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4650_b_V = tmp_1_reg_10841.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4650_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4650_b_V = select_ln539_6_reg_10803.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4650_b_V = tmp_7_reg_10357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4650_b_V = tmp_4_reg_10320.read();
    } else {
        grp_compute_engine_64_fu_4650_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4650_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4650_w_V = weight_buf_3x3_V_27_2_reg_10720.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4650_w_V = reg_5490.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4650_w_V = reg_5393.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4650_w_V = reg_5355.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4650_w_V = reg_5363.read();
    } else {
        grp_compute_engine_64_fu_4650_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4658_ap_start() {
    grp_compute_engine_64_fu_4658_ap_start = grp_compute_engine_64_fu_4658_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4658_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4658_b_V = tmp_2_reg_10600.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4658_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4658_b_V = select_ln538_6_reg_10770.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4658_b_V = reg_5632.read();
    } else {
        grp_compute_engine_64_fu_4658_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4658_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4658_w_V = weight_buf_3x3_V_27_3_reg_10725.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4658_w_V = reg_5505.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4658_w_V = reg_5400.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4658_w_V = reg_5363.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4658_w_V = weight_buf_3x3_V_4_l_3_reg_10424.read();
    } else {
        grp_compute_engine_64_fu_4658_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4666_ap_start() {
    grp_compute_engine_64_fu_4666_ap_start = grp_compute_engine_64_fu_4666_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4666_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4666_b_V = tmp_10_reg_10623.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4666_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4666_b_V = select_ln539_6_reg_10803.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4666_b_V = reg_5610.read();
    } else {
        grp_compute_engine_64_fu_4666_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4666_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4666_w_V = weight_buf_3x3_V_27_4_reg_10950.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4666_w_V = reg_5520.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4666_w_V = reg_5408.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4666_w_V = weight_buf_3x3_V_5_l_2_reg_10429.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4666_w_V = reg_5370.read();
    } else {
        grp_compute_engine_64_fu_4666_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4674_ap_start() {
    grp_compute_engine_64_fu_4674_ap_start = grp_compute_engine_64_fu_4674_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4674_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4674_b_V = tmp_11_reg_10858.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4674_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4674_b_V = select_ln538_6_reg_10770.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4674_b_V = tmp_7_reg_10357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4674_b_V = tmp_4_reg_10320.read();
    } else {
        grp_compute_engine_64_fu_4674_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4674_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4674_w_V = weight_buf_3x3_V_27_5_reg_10955.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4674_w_V = reg_5535.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4674_w_V = reg_5415.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4674_w_V = reg_5370.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4674_w_V = reg_5378.read();
    } else {
        grp_compute_engine_64_fu_4674_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4682_ap_start() {
    grp_compute_engine_64_fu_4682_ap_start = grp_compute_engine_64_fu_4682_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4682_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4682_b_V = select_ln538_6_reg_10770.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4682_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4682_b_V = select_ln539_6_reg_10803.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4682_b_V = reg_5632.read();
    } else {
        grp_compute_engine_64_fu_4682_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4682_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4682_w_V = weight_buf_3x3_V_27_6_reg_11108.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4682_w_V = reg_5550.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4682_w_V = reg_5423.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4682_w_V = reg_5378.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4682_w_V = weight_buf_3x3_V_5_l_3_reg_10434.read();
    } else {
        grp_compute_engine_64_fu_4682_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4690_ap_start() {
    grp_compute_engine_64_fu_4690_ap_start = grp_compute_engine_64_fu_4690_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4690_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4690_b_V = select_ln539_6_reg_10803.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4690_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4690_b_V = select_ln538_6_reg_10770.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4690_b_V = reg_5610.read();
    } else {
        grp_compute_engine_64_fu_4690_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4690_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4690_w_V = weight_buf_3x3_V_27_7_reg_11113.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4690_w_V = reg_5565.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4690_w_V = reg_5430.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4690_w_V = weight_buf_3x3_V_6_l_2_reg_10439.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4690_w_V = reg_5385.read();
    } else {
        grp_compute_engine_64_fu_4690_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4698_ap_start() {
    grp_compute_engine_64_fu_4698_ap_start = grp_compute_engine_64_fu_4698_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4698_b_V() {
    if (((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4698_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4698_b_V = select_ln539_6_reg_10803.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4698_b_V = tmp_7_reg_10357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4698_b_V = tmp_4_reg_10320.read();
    } else {
        grp_compute_engine_64_fu_4698_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4698_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4698_w_V = weight_buf_3x3_V_27_8_reg_11183.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4698_w_V = reg_5580.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4698_w_V = reg_5438.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4698_w_V = reg_5385.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4698_w_V = reg_5393.read();
    } else {
        grp_compute_engine_64_fu_4698_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4706_ap_start() {
    grp_compute_engine_64_fu_4706_ap_start = grp_compute_engine_64_fu_4706_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4706_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4706_b_V = tmp_9_reg_10559.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4706_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4706_b_V = select_ln538_6_reg_10770.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4706_b_V = reg_5632.read();
    } else {
        grp_compute_engine_64_fu_4706_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4706_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4706_w_V = weight_buf_3x3_V_28_s_reg_11518.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4706_w_V = reg_5594.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4706_w_V = reg_5445.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4706_w_V = reg_5393.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4706_w_V = weight_buf_3x3_V_6_l_3_reg_10444.read();
    } else {
        grp_compute_engine_64_fu_4706_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4714_ap_start() {
    grp_compute_engine_64_fu_4714_ap_start = grp_compute_engine_64_fu_4714_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4714_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4714_b_V = tmp_s_reg_10577.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4714_b_V = select_ln538_6_reg_10770.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4714_b_V = select_ln539_6_reg_10803.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4714_b_V = reg_5610.read();
    } else {
        grp_compute_engine_64_fu_4714_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4714_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4714_w_V = weight_buf_3x3_V_28_1_reg_11523.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4714_w_V = weight_buf_3x3_V_21_6_reg_11048.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4714_w_V = reg_5453.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4714_w_V = weight_buf_3x3_V_7_l_2_reg_10449.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4714_w_V = reg_5400.read();
    } else {
        grp_compute_engine_64_fu_4714_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4722_ap_start() {
    grp_compute_engine_64_fu_4722_ap_start = grp_compute_engine_64_fu_4722_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4722_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4722_b_V = tmp_1_reg_10841.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4722_b_V = select_ln539_6_reg_10803.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4722_b_V = select_ln538_6_reg_10770.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4722_b_V = tmp_7_reg_10357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4722_b_V = tmp_4_reg_10320.read();
    } else {
        grp_compute_engine_64_fu_4722_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4722_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4722_w_V = weight_buf_3x3_V_28_2_reg_10730.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4722_w_V = weight_buf_3x3_V_21_7_reg_11053.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4722_w_V = reg_5460.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4722_w_V = reg_5400.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4722_w_V = reg_5408.read();
    } else {
        grp_compute_engine_64_fu_4722_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4730_ap_start() {
    grp_compute_engine_64_fu_4730_ap_start = grp_compute_engine_64_fu_4730_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4730_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4730_b_V = tmp_2_reg_10600.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4730_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4730_b_V = select_ln539_6_reg_10803.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4730_b_V = reg_5632.read();
    } else {
        grp_compute_engine_64_fu_4730_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4730_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4730_w_V = weight_buf_3x3_V_28_3_reg_10735.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4730_w_V = reg_5600.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4730_w_V = reg_5468.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4730_w_V = reg_5408.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4730_w_V = weight_buf_3x3_V_7_l_3_reg_10454.read();
    } else {
        grp_compute_engine_64_fu_4730_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4738_ap_start() {
    grp_compute_engine_64_fu_4738_ap_start = grp_compute_engine_64_fu_4738_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4738_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4738_b_V = tmp_10_reg_10623.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4738_b_V = tmp_9_reg_10559.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4738_b_V = select_ln538_6_reg_10770.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4738_b_V = reg_5610.read();
    } else {
        grp_compute_engine_64_fu_4738_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4738_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4738_w_V = weight_buf_3x3_V_28_4_reg_10960.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4738_w_V = weight_buf_3x3_V_22_s_reg_10229.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4738_w_V = reg_5475.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4738_w_V = weight_buf_3x3_V_8_l_2_reg_10459.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4738_w_V = reg_5415.read();
    } else {
        grp_compute_engine_64_fu_4738_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4746_ap_start() {
    grp_compute_engine_64_fu_4746_ap_start = grp_compute_engine_64_fu_4746_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4746_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4746_b_V = tmp_11_reg_10858.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4746_b_V = tmp_s_reg_10577.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4746_b_V = select_ln539_6_reg_10803.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4746_b_V = tmp_7_reg_10357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4746_b_V = tmp_4_reg_10320.read();
    } else {
        grp_compute_engine_64_fu_4746_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4746_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4746_w_V = weight_buf_3x3_V_28_5_reg_10965.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4746_w_V = weight_buf_3x3_V_22_1_reg_10234.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4746_w_V = reg_5483.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4746_w_V = reg_5415.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4746_w_V = reg_5423.read();
    } else {
        grp_compute_engine_64_fu_4746_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4754_ap_start() {
    grp_compute_engine_64_fu_4754_ap_start = grp_compute_engine_64_fu_4754_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4754_b_V() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4754_b_V = tmp_1_reg_10841.read();
    } else if (((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4754_b_V = select_ln538_6_reg_10770.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4754_b_V = reg_5632.read();
    } else {
        grp_compute_engine_64_fu_4754_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4754_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4754_w_V = weight_buf_3x3_V_28_6_reg_11118.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4754_w_V = weight_buf_3x3_V_22_2_reg_10670.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4754_w_V = reg_5490.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4754_w_V = reg_5423.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4754_w_V = weight_buf_3x3_V_8_l_3_reg_10464.read();
    } else {
        grp_compute_engine_64_fu_4754_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4762_ap_start() {
    grp_compute_engine_64_fu_4762_ap_start = grp_compute_engine_64_fu_4762_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4762_b_V() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4762_b_V = tmp_2_reg_10600.read();
    } else if (((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4762_b_V = select_ln539_6_reg_10803.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4762_b_V = reg_5610.read();
    } else {
        grp_compute_engine_64_fu_4762_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4762_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4762_w_V = weight_buf_3x3_V_28_7_reg_11123.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4762_w_V = weight_buf_3x3_V_22_3_reg_10675.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4762_w_V = reg_5498.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4762_w_V = weight_buf_3x3_V_9_l_2_reg_10469.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4762_w_V = reg_5430.read();
    } else {
        grp_compute_engine_64_fu_4762_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4770_ap_start() {
    grp_compute_engine_64_fu_4770_ap_start = grp_compute_engine_64_fu_4770_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4770_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4770_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4770_b_V = tmp_10_reg_10623.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4770_b_V = select_ln538_6_reg_10770.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4770_b_V = tmp_7_reg_10357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4770_b_V = tmp_4_reg_10320.read();
    } else {
        grp_compute_engine_64_fu_4770_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4770_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4770_w_V = weight_buf_3x3_V_28_8_reg_11188.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4770_w_V = weight_buf_3x3_V_22_4_reg_10900.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4770_w_V = reg_5505.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4770_w_V = reg_5430.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4770_w_V = reg_5438.read();
    } else {
        grp_compute_engine_64_fu_4770_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4778_ap_start() {
    grp_compute_engine_64_fu_4778_ap_start = grp_compute_engine_64_fu_4778_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4778_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4778_b_V = tmp_9_reg_10559.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4778_b_V = tmp_11_reg_10858.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4778_b_V = select_ln539_6_reg_10803.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4778_b_V = reg_5632.read();
    } else {
        grp_compute_engine_64_fu_4778_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4778_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4778_w_V = weight_buf_3x3_V_29_s_reg_11528.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4778_w_V = weight_buf_3x3_V_22_5_reg_10905.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4778_w_V = reg_5513.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4778_w_V = reg_5438.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4778_w_V = weight_buf_3x3_V_9_l_3_reg_10474.read();
    } else {
        grp_compute_engine_64_fu_4778_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4786_ap_start() {
    grp_compute_engine_64_fu_4786_ap_start = grp_compute_engine_64_fu_4786_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4786_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4786_b_V = tmp_s_reg_10577.read();
    } else if (((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0)))) {
        grp_compute_engine_64_fu_4786_b_V = select_ln538_6_reg_10770.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4786_b_V = reg_5610.read();
    } else {
        grp_compute_engine_64_fu_4786_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4786_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4786_w_V = weight_buf_3x3_V_29_1_reg_11533.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4786_w_V = weight_buf_3x3_V_22_6_reg_11058.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4786_w_V = reg_5520.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4786_w_V = weight_buf_3x3_V_10_2_reg_10479.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4786_w_V = reg_5445.read();
    } else {
        grp_compute_engine_64_fu_4786_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4794_ap_start() {
    grp_compute_engine_64_fu_4794_ap_start = grp_compute_engine_64_fu_4794_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4794_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4794_b_V = tmp_1_reg_10841.read();
    } else if (((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0)))) {
        grp_compute_engine_64_fu_4794_b_V = select_ln539_6_reg_10803.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4794_b_V = tmp_7_reg_10357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4794_b_V = tmp_4_reg_10320.read();
    } else {
        grp_compute_engine_64_fu_4794_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4794_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4794_w_V = weight_buf_3x3_V_29_2_reg_10740.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4794_w_V = weight_buf_3x3_V_22_7_reg_11063.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4794_w_V = reg_5528.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4794_w_V = reg_5445.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4794_w_V = reg_5453.read();
    } else {
        grp_compute_engine_64_fu_4794_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4802_ap_start() {
    grp_compute_engine_64_fu_4802_ap_start = grp_compute_engine_64_fu_4802_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4802_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4802_b_V = tmp_2_reg_10600.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4802_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4802_b_V = select_ln538_6_reg_10770.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4802_b_V = reg_5632.read();
    } else {
        grp_compute_engine_64_fu_4802_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4802_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4802_w_V = weight_buf_3x3_V_29_3_reg_10745.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4802_w_V = weight_buf_3x3_V_22_8_reg_11158.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4802_w_V = reg_5535.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4802_w_V = reg_5453.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4802_w_V = weight_buf_3x3_V_10_3_reg_10484.read();
    } else {
        grp_compute_engine_64_fu_4802_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4810_ap_start() {
    grp_compute_engine_64_fu_4810_ap_start = grp_compute_engine_64_fu_4810_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4810_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4810_b_V = tmp_10_reg_10623.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4810_b_V = tmp_9_reg_10559.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4810_b_V = select_ln539_6_reg_10803.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4810_b_V = reg_5610.read();
    } else {
        grp_compute_engine_64_fu_4810_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4810_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4810_w_V = weight_buf_3x3_V_29_4_reg_10970.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4810_w_V = weight_buf_3x3_V_23_s_reg_10239.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4810_w_V = reg_5543.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4810_w_V = weight_buf_3x3_V_11_2_reg_10489.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4810_w_V = reg_5460.read();
    } else {
        grp_compute_engine_64_fu_4810_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4818_ap_start() {
    grp_compute_engine_64_fu_4818_ap_start = grp_compute_engine_64_fu_4818_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4818_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4818_b_V = tmp_11_reg_10858.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4818_b_V = tmp_s_reg_10577.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4818_b_V = select_ln538_6_reg_10770.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4818_b_V = tmp_7_reg_10357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4818_b_V = tmp_4_reg_10320.read();
    } else {
        grp_compute_engine_64_fu_4818_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4818_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4818_w_V = weight_buf_3x3_V_29_5_reg_10975.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4818_w_V = weight_buf_3x3_V_23_1_reg_10244.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4818_w_V = reg_5550.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4818_w_V = reg_5460.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4818_w_V = reg_5468.read();
    } else {
        grp_compute_engine_64_fu_4818_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4826_ap_start() {
    grp_compute_engine_64_fu_4826_ap_start = grp_compute_engine_64_fu_4826_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4826_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4826_b_V = select_ln538_6_reg_10770.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4826_b_V = tmp_1_reg_10841.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4826_b_V = select_ln539_6_reg_10803.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4826_b_V = reg_5632.read();
    } else {
        grp_compute_engine_64_fu_4826_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4826_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4826_w_V = weight_buf_3x3_V_29_6_reg_11128.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4826_w_V = weight_buf_3x3_V_23_2_reg_10680.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4826_w_V = reg_5558.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4826_w_V = reg_5468.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4826_w_V = weight_buf_3x3_V_11_3_reg_10494.read();
    } else {
        grp_compute_engine_64_fu_4826_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4834_ap_start() {
    grp_compute_engine_64_fu_4834_ap_start = grp_compute_engine_64_fu_4834_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4834_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4834_b_V = select_ln539_6_reg_10803.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4834_b_V = tmp_2_reg_10600.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4834_b_V = select_ln538_6_reg_10770.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4834_b_V = reg_5610.read();
    } else {
        grp_compute_engine_64_fu_4834_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4834_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4834_w_V = weight_buf_3x3_V_29_7_reg_11133.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4834_w_V = weight_buf_3x3_V_23_3_reg_10685.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4834_w_V = reg_5565.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4834_w_V = weight_buf_3x3_V_12_2_reg_10499.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4834_w_V = reg_5475.read();
    } else {
        grp_compute_engine_64_fu_4834_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4842_ap_start() {
    grp_compute_engine_64_fu_4842_ap_start = grp_compute_engine_64_fu_4842_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4842_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4842_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4842_b_V = tmp_10_reg_10623.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4842_b_V = select_ln539_6_reg_10803.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4842_b_V = tmp_7_reg_10357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4842_b_V = tmp_4_reg_10320.read();
    } else {
        grp_compute_engine_64_fu_4842_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4842_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4842_w_V = weight_buf_3x3_V_29_8_reg_11193.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4842_w_V = weight_buf_3x3_V_23_4_reg_10910.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4842_w_V = reg_5573.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4842_w_V = reg_5475.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4842_w_V = reg_5483.read();
    } else {
        grp_compute_engine_64_fu_4842_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4850_ap_start() {
    grp_compute_engine_64_fu_4850_ap_start = grp_compute_engine_64_fu_4850_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4850_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4850_b_V = tmp_9_reg_10559.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4850_b_V = tmp_11_reg_10858.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4850_b_V = tmp_1_reg_10841.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4850_b_V = reg_5632.read();
    } else {
        grp_compute_engine_64_fu_4850_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4850_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4850_w_V = weight_buf_3x3_V_30_s_reg_11538.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4850_w_V = weight_buf_3x3_V_23_5_reg_10915.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4850_w_V = weight_buf_3x3_V_19_2_reg_10640.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4850_w_V = reg_5483.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4850_w_V = weight_buf_3x3_V_12_3_reg_10504.read();
    } else {
        grp_compute_engine_64_fu_4850_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4858_ap_start() {
    grp_compute_engine_64_fu_4858_ap_start = grp_compute_engine_64_fu_4858_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4858_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4858_b_V = tmp_s_reg_10577.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4858_b_V = select_ln538_6_reg_10770.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4858_b_V = tmp_2_reg_10600.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4858_b_V = reg_5610.read();
    } else {
        grp_compute_engine_64_fu_4858_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4858_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4858_w_V = weight_buf_3x3_V_30_1_reg_11543.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4858_w_V = weight_buf_3x3_V_23_6_reg_11068.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4858_w_V = weight_buf_3x3_V_19_3_reg_10645.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4858_w_V = weight_buf_3x3_V_13_2_reg_10509.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4858_w_V = reg_5490.read();
    } else {
        grp_compute_engine_64_fu_4858_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4866_ap_start() {
    grp_compute_engine_64_fu_4866_ap_start = grp_compute_engine_64_fu_4866_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4866_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4866_b_V = tmp_1_reg_10841.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4866_b_V = select_ln539_6_reg_10803.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4866_b_V = tmp_10_reg_10623.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4866_b_V = tmp_7_reg_10357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4866_b_V = tmp_4_reg_10320.read();
    } else {
        grp_compute_engine_64_fu_4866_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4866_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4866_w_V = weight_buf_3x3_V_30_2_reg_10750.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4866_w_V = weight_buf_3x3_V_23_7_reg_11073.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4866_w_V = reg_5580.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4866_w_V = reg_5490.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4866_w_V = reg_5498.read();
    } else {
        grp_compute_engine_64_fu_4866_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4874_ap_start() {
    grp_compute_engine_64_fu_4874_ap_start = grp_compute_engine_64_fu_4874_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4874_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4874_b_V = tmp_2_reg_10600.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4874_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4874_b_V = tmp_11_reg_10858.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4874_b_V = reg_5632.read();
    } else {
        grp_compute_engine_64_fu_4874_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4874_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4874_w_V = weight_buf_3x3_V_30_3_reg_10755.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4874_w_V = weight_buf_3x3_V_23_8_reg_11163.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4874_w_V = weight_buf_3x3_V_19_5_reg_10875.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4874_w_V = reg_5498.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4874_w_V = weight_buf_3x3_V_13_3_reg_10514.read();
    } else {
        grp_compute_engine_64_fu_4874_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4882_ap_start() {
    grp_compute_engine_64_fu_4882_ap_start = grp_compute_engine_64_fu_4882_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4882_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4882_b_V = tmp_10_reg_10623.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4882_b_V = tmp_9_reg_10559.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4882_b_V = select_ln538_6_reg_10770.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4882_b_V = reg_5610.read();
    } else {
        grp_compute_engine_64_fu_4882_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4882_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4882_w_V = weight_buf_3x3_V_30_4_reg_10980.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4882_w_V = weight_buf_3x3_V_24_s_reg_10249.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4882_w_V = reg_5587.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4882_w_V = weight_buf_3x3_V_14_2_reg_10519.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4882_w_V = reg_5505.read();
    } else {
        grp_compute_engine_64_fu_4882_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4890_ap_start() {
    grp_compute_engine_64_fu_4890_ap_start = grp_compute_engine_64_fu_4890_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4890_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4890_b_V = tmp_11_reg_10858.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4890_b_V = tmp_s_reg_10577.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4890_b_V = select_ln539_6_reg_10803.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4890_b_V = tmp_7_reg_10357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4890_b_V = tmp_4_reg_10320.read();
    } else {
        grp_compute_engine_64_fu_4890_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4890_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4890_w_V = weight_buf_3x3_V_30_5_reg_10985.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4890_w_V = weight_buf_3x3_V_24_1_reg_10254.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4890_w_V = weight_buf_3x3_V_19_7_reg_11033.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4890_w_V = reg_5505.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4890_w_V = reg_5513.read();
    } else {
        grp_compute_engine_64_fu_4890_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4898_ap_start() {
    grp_compute_engine_64_fu_4898_ap_start = grp_compute_engine_64_fu_4898_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4898_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4898_b_V = select_ln538_6_reg_10770.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4898_b_V = tmp_1_reg_10841.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4898_b_V = tmp_9_reg_10559.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4898_b_V = reg_5632.read();
    } else {
        grp_compute_engine_64_fu_4898_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4898_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4898_w_V = weight_buf_3x3_V_30_6_reg_11138.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4898_w_V = weight_buf_3x3_V_24_2_reg_10690.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4898_w_V = reg_5594.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4898_w_V = reg_5513.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4898_w_V = weight_buf_3x3_V_14_3_reg_10524.read();
    } else {
        grp_compute_engine_64_fu_4898_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4906_ap_start() {
    grp_compute_engine_64_fu_4906_ap_start = grp_compute_engine_64_fu_4906_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4906_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4906_b_V = select_ln539_6_reg_10803.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4906_b_V = tmp_2_reg_10600.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4906_b_V = tmp_s_reg_10577.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4906_b_V = reg_5610.read();
    } else {
        grp_compute_engine_64_fu_4906_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4906_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4906_w_V = weight_buf_3x3_V_30_7_reg_11143.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4906_w_V = weight_buf_3x3_V_24_3_reg_10695.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4906_w_V = weight_buf_3x3_V_20_1_reg_10219.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4906_w_V = weight_buf_3x3_V_15_2_reg_10529.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4906_w_V = reg_5520.read();
    } else {
        grp_compute_engine_64_fu_4906_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4914_ap_start() {
    grp_compute_engine_64_fu_4914_ap_start = grp_compute_engine_64_fu_4914_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4914_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4914_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4914_b_V = tmp_10_reg_10623.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4914_b_V = tmp_1_reg_10841.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4914_b_V = tmp_7_reg_10357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4914_b_V = tmp_4_reg_10320.read();
    } else {
        grp_compute_engine_64_fu_4914_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4914_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4914_w_V = weight_buf_3x3_V_30_8_reg_11198.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4914_w_V = weight_buf_3x3_V_24_4_reg_10920.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4914_w_V = weight_buf_3x3_V_20_2_reg_10650.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4914_w_V = reg_5520.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4914_w_V = reg_5528.read();
    } else {
        grp_compute_engine_64_fu_4914_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4922_ap_start() {
    grp_compute_engine_64_fu_4922_ap_start = grp_compute_engine_64_fu_4922_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4922_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4922_b_V = tmp_9_reg_10559.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4922_b_V = tmp_11_reg_10858.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4922_b_V = tmp_2_reg_10600.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4922_b_V = reg_5632.read();
    } else {
        grp_compute_engine_64_fu_4922_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4922_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4922_w_V = weight_buf_3x3_V_31_s_reg_11548.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4922_w_V = weight_buf_3x3_V_24_5_reg_10925.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4922_w_V = weight_buf_3x3_V_20_3_reg_10655.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4922_w_V = reg_5528.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4922_w_V = weight_buf_3x3_V_15_3_reg_10534.read();
    } else {
        grp_compute_engine_64_fu_4922_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4930_ap_start() {
    grp_compute_engine_64_fu_4930_ap_start = grp_compute_engine_64_fu_4930_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4930_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4930_b_V = tmp_s_reg_10577.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4930_b_V = select_ln538_6_reg_10770.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4930_b_V = tmp_10_reg_10623.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4930_b_V = reg_5610.read();
    } else {
        grp_compute_engine_64_fu_4930_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4930_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4930_w_V = weight_buf_3x3_V_31_1_reg_11553.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4930_w_V = weight_buf_3x3_V_24_6_reg_11078.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4930_w_V = weight_buf_3x3_V_20_4_reg_10880.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4930_w_V = weight_buf_3x3_V_16_2_reg_10539.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4930_w_V = reg_5535.read();
    } else {
        grp_compute_engine_64_fu_4930_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4938_ap_start() {
    grp_compute_engine_64_fu_4938_ap_start = grp_compute_engine_64_fu_4938_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4938_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4938_b_V = tmp_1_reg_10841.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4938_b_V = select_ln539_6_reg_10803.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4938_b_V = tmp_11_reg_10858.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4938_b_V = tmp_7_reg_10357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4938_b_V = tmp_4_reg_10320.read();
    } else {
        grp_compute_engine_64_fu_4938_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4938_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4938_w_V = weight_buf_3x3_V_31_2_reg_10760.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4938_w_V = weight_buf_3x3_V_24_7_reg_11083.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4938_w_V = weight_buf_3x3_V_20_5_reg_10885.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4938_w_V = reg_5535.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4938_w_V = reg_5543.read();
    } else {
        grp_compute_engine_64_fu_4938_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4946_ap_start() {
    grp_compute_engine_64_fu_4946_ap_start = grp_compute_engine_64_fu_4946_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4946_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4946_b_V = tmp_2_reg_10600.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4946_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4946_b_V = select_ln538_6_reg_10770.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4946_b_V = reg_5632.read();
    } else {
        grp_compute_engine_64_fu_4946_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4946_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4946_w_V = weight_buf_3x3_V_31_3_reg_10765.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4946_w_V = weight_buf_3x3_V_24_8_reg_11168.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4946_w_V = weight_buf_3x3_V_20_6_reg_11038.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4946_w_V = reg_5543.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4946_w_V = weight_buf_3x3_V_16_3_reg_10544.read();
    } else {
        grp_compute_engine_64_fu_4946_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4954_ap_start() {
    grp_compute_engine_64_fu_4954_ap_start = grp_compute_engine_64_fu_4954_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4954_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4954_b_V = tmp_10_reg_10623.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4954_b_V = tmp_9_reg_10559.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4954_b_V = select_ln539_6_reg_10803.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4954_b_V = reg_5610.read();
    } else {
        grp_compute_engine_64_fu_4954_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4954_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4954_w_V = weight_buf_3x3_V_31_4_reg_10990.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4954_w_V = weight_buf_3x3_V_25_s_reg_10259.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4954_w_V = weight_buf_3x3_V_20_7_reg_11043.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4954_w_V = weight_buf_3x3_V_17_2_reg_10549.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4954_w_V = reg_5550.read();
    } else {
        grp_compute_engine_64_fu_4954_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4962_ap_start() {
    grp_compute_engine_64_fu_4962_ap_start = grp_compute_engine_64_fu_4962_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4962_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4962_b_V = tmp_11_reg_10858.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4962_b_V = tmp_s_reg_10577.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4962_b_V = tmp_9_reg_10559.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4962_b_V = tmp_7_reg_10357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4962_b_V = tmp_4_reg_10320.read();
    } else {
        grp_compute_engine_64_fu_4962_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4962_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4962_w_V = weight_buf_3x3_V_31_5_reg_10995.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4962_w_V = weight_buf_3x3_V_25_1_reg_10264.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4962_w_V = reg_5600.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4962_w_V = reg_5550.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4962_w_V = reg_5558.read();
    } else {
        grp_compute_engine_64_fu_4962_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4970_ap_start() {
    grp_compute_engine_64_fu_4970_ap_start = grp_compute_engine_64_fu_4970_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4970_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4970_b_V = select_ln538_6_reg_10770.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4970_b_V = tmp_1_reg_10841.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4970_b_V = tmp_s_reg_10577.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4970_b_V = reg_5632.read();
    } else {
        grp_compute_engine_64_fu_4970_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4970_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4970_w_V = weight_buf_3x3_V_31_6_reg_11148.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4970_w_V = weight_buf_3x3_V_25_2_reg_10700.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4970_w_V = weight_buf_3x3_V_21_1_reg_10224.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4970_w_V = reg_5558.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4970_w_V = weight_buf_3x3_V_17_3_reg_10554.read();
    } else {
        grp_compute_engine_64_fu_4970_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4978_ap_start() {
    grp_compute_engine_64_fu_4978_ap_start = grp_compute_engine_64_fu_4978_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4978_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4978_b_V = select_ln539_6_reg_10803.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4978_b_V = tmp_2_reg_10600.read();
    } else if (((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)))) {
        grp_compute_engine_64_fu_4978_b_V = tmp_1_reg_10841.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4978_b_V = tmp_9_reg_10559.read();
    } else {
        grp_compute_engine_64_fu_4978_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4978_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4978_w_V = weight_buf_3x3_V_31_7_reg_11153.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4978_w_V = weight_buf_3x3_V_25_3_reg_10705.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4978_w_V = weight_buf_3x3_V_21_2_reg_10660.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4978_w_V = weight_buf_3x3_V_18_2_reg_10595.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4978_w_V = reg_5565.read();
    } else {
        grp_compute_engine_64_fu_4978_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4986_ap_start() {
    grp_compute_engine_64_fu_4986_ap_start = grp_compute_engine_64_fu_4986_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4986_b_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4986_b_V = select_ln540_6_reg_11000.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4986_b_V = tmp_2_reg_10600.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0)))) {
        grp_compute_engine_64_fu_4986_b_V = tmp_10_reg_10623.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4986_b_V = tmp_s_reg_10577.read();
    } else {
        grp_compute_engine_64_fu_4986_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4986_w_V() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4986_w_V = weight_buf_3x3_V_31_8_reg_11203.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4986_w_V = weight_buf_3x3_V_25_4_reg_10930.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4986_w_V = weight_buf_3x3_V_21_3_reg_10665.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4986_w_V = reg_5565.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4986_w_V = reg_5573.read();
    } else {
        grp_compute_engine_64_fu_4986_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4994_ap_start() {
    grp_compute_engine_64_fu_4994_ap_start = grp_compute_engine_64_fu_4994_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4994_b_V() {
    if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4994_b_V = tmp_10_reg_10623.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0)))) {
        grp_compute_engine_64_fu_4994_b_V = tmp_11_reg_10858.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4994_b_V = tmp_2_reg_10600.read();
    } else {
        grp_compute_engine_64_fu_4994_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_4994_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_4994_w_V = weight_buf_3x3_V_25_5_reg_10935.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4994_w_V = weight_buf_3x3_V_21_4_reg_10890.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4994_w_V = reg_5573.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_4994_w_V = weight_buf_3x3_V_18_3_reg_10618.read();
    } else {
        grp_compute_engine_64_fu_4994_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5002_ap_start() {
    grp_compute_engine_64_fu_5002_ap_start = grp_compute_engine_64_fu_5002_ap_start_reg.read();
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5002_b_V() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_5002_b_V = select_ln538_6_reg_10770.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5002_b_V = tmp_11_reg_10858.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5002_b_V = tmp_s_reg_10577.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5002_b_V = tmp_9_reg_10559.read();
    } else {
        grp_compute_engine_64_fu_5002_b_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_compute_engine_64_fu_5002_w_V() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(icmp_ln505_reg_10034_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        grp_compute_engine_64_fu_5002_w_V = weight_buf_3x3_V_25_6_reg_11088.read();
    } else if ((esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5002_w_V = weight_buf_3x3_V_21_5_reg_10895.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5002_w_V = reg_5587.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln505_reg_10034.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_compute_engine_64_fu_5002_w_V = reg_5580.read();
    } else {
        grp_compute_engine_64_fu_5002_w_V =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_fu_5206_p10() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_fu_5206_p10 = add_ln505_reg_10269.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_fu_5206_p10 = add_ln505_fu_6099_p2.read();
        } else {
            grp_fu_5206_p10 = "XXXX";
        }
    } else {
        grp_fu_5206_p10 = "XXXX";
    }
}

void pgconv64_1bit::thread_grp_fu_5252_p10() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_fu_5252_p10 = add_ln505_reg_10269.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_fu_5252_p10 = add_ln505_fu_6099_p2.read();
        } else {
            grp_fu_5252_p10 = "XXXX";
        }
    } else {
        grp_fu_5252_p10 = "XXXX";
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5010_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2470.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2577.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2624.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2670.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2722.read(), ap_const_boolean_0)))) {
        grp_relu_fu_5010_ap_ce = ap_const_logic_1;
    } else {
        grp_relu_fu_5010_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5010_norm_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8201.read(), ap_const_boolean_1)) {
            grp_relu_fu_5010_norm_V = norm_V_0_28_reg_13809.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8199.read(), ap_const_boolean_1)) {
            grp_relu_fu_5010_norm_V = norm_V_0_21_reg_13697.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8197.read(), ap_const_boolean_1)) {
            grp_relu_fu_5010_norm_V = norm_V_0_14_reg_13598.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8195.read(), ap_const_boolean_1)) {
            grp_relu_fu_5010_norm_V = norm_V_0_7_reg_13188.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8193.read(), ap_const_boolean_1)) {
            grp_relu_fu_5010_norm_V = norm_V_reg_13133.read();
        } else {
            grp_relu_fu_5010_norm_V =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5010_norm_V =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5010_shiftx_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8201.read(), ap_const_boolean_1)) {
            grp_relu_fu_5010_shiftx_V = relu_shiftx_V160_loa_reg_13538.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8199.read(), ap_const_boolean_1)) {
            grp_relu_fu_5010_shiftx_V = relu_shiftx_V153_loa_reg_13433.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8197.read(), ap_const_boolean_1)) {
            grp_relu_fu_5010_shiftx_V = relu_shiftx_V146_loa_reg_13328.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8195.read(), ap_const_boolean_1)) {
            grp_relu_fu_5010_shiftx_V = relu_shiftx_V139_loa_reg_13193.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8193.read(), ap_const_boolean_1)) {
            grp_relu_fu_5010_shiftx_V = relu_shiftx_V_load_reg_12583.read();
        } else {
            grp_relu_fu_5010_shiftx_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5010_shiftx_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5010_shifty_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8201.read(), ap_const_boolean_1)) {
            grp_relu_fu_5010_shifty_V = relu_shifty_V191_loa_reg_13543.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8199.read(), ap_const_boolean_1)) {
            grp_relu_fu_5010_shifty_V = relu_shifty_V184_loa_reg_13438.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8197.read(), ap_const_boolean_1)) {
            grp_relu_fu_5010_shifty_V = relu_shifty_V177_loa_reg_13333.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8195.read(), ap_const_boolean_1)) {
            grp_relu_fu_5010_shifty_V = relu_shifty_V170_loa_reg_13198.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8193.read(), ap_const_boolean_1)) {
            grp_relu_fu_5010_shifty_V = relu_shifty_V_load_reg_12588.read();
        } else {
            grp_relu_fu_5010_shifty_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5010_shifty_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5010_weight_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8201.read(), ap_const_boolean_1)) {
            grp_relu_fu_5010_weight_V = relu_weights_V222_lo_reg_13548.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8199.read(), ap_const_boolean_1)) {
            grp_relu_fu_5010_weight_V = relu_weights_V215_lo_reg_13443.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8197.read(), ap_const_boolean_1)) {
            grp_relu_fu_5010_weight_V = relu_weights_V208_lo_reg_13338.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8195.read(), ap_const_boolean_1)) {
            grp_relu_fu_5010_weight_V = relu_weights_V201_lo_reg_13203.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8193.read(), ap_const_boolean_1)) {
            grp_relu_fu_5010_weight_V = relu_weights_V_load_reg_12593.read();
        } else {
            grp_relu_fu_5010_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5010_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5018_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2471.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2578.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2626.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2672.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2723.read(), ap_const_boolean_0)))) {
        grp_relu_fu_5018_ap_ce = ap_const_logic_1;
    } else {
        grp_relu_fu_5018_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5018_norm_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8201.read(), ap_const_boolean_1)) {
            grp_relu_fu_5018_norm_V = norm_V_0_29_reg_13814.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8199.read(), ap_const_boolean_1)) {
            grp_relu_fu_5018_norm_V = norm_V_0_22_reg_13702.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8197.read(), ap_const_boolean_1)) {
            grp_relu_fu_5018_norm_V = norm_V_0_15_reg_13603.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8195.read(), ap_const_boolean_1)) {
            grp_relu_fu_5018_norm_V = norm_V_0_8_reg_13208.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8193.read(), ap_const_boolean_1)) {
            grp_relu_fu_5018_norm_V = norm_V_0_1_reg_13138.read();
        } else {
            grp_relu_fu_5018_norm_V =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5018_norm_V =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5018_shiftx_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8201.read(), ap_const_boolean_1)) {
            grp_relu_fu_5018_shiftx_V = relu_shiftx_V161_loa_reg_13553.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8199.read(), ap_const_boolean_1)) {
            grp_relu_fu_5018_shiftx_V = relu_shiftx_V154_loa_reg_13448.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8197.read(), ap_const_boolean_1)) {
            grp_relu_fu_5018_shiftx_V = relu_shiftx_V147_loa_reg_13343.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8195.read(), ap_const_boolean_1)) {
            grp_relu_fu_5018_shiftx_V = relu_shiftx_V140_loa_reg_13213.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8193.read(), ap_const_boolean_1)) {
            grp_relu_fu_5018_shiftx_V = relu_shiftx_V133_loa_reg_12613.read();
        } else {
            grp_relu_fu_5018_shiftx_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5018_shiftx_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5018_shifty_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8201.read(), ap_const_boolean_1)) {
            grp_relu_fu_5018_shifty_V = relu_shifty_V192_loa_reg_13558.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8199.read(), ap_const_boolean_1)) {
            grp_relu_fu_5018_shifty_V = relu_shifty_V185_loa_reg_13453.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8197.read(), ap_const_boolean_1)) {
            grp_relu_fu_5018_shifty_V = relu_shifty_V178_loa_reg_13348.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8195.read(), ap_const_boolean_1)) {
            grp_relu_fu_5018_shifty_V = relu_shifty_V171_loa_reg_13218.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8193.read(), ap_const_boolean_1)) {
            grp_relu_fu_5018_shifty_V = relu_shifty_V164_loa_reg_12618.read();
        } else {
            grp_relu_fu_5018_shifty_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5018_shifty_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5018_weight_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8201.read(), ap_const_boolean_1)) {
            grp_relu_fu_5018_weight_V = relu_weights_V223_lo_reg_13563.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8199.read(), ap_const_boolean_1)) {
            grp_relu_fu_5018_weight_V = relu_weights_V216_lo_reg_13458.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8197.read(), ap_const_boolean_1)) {
            grp_relu_fu_5018_weight_V = relu_weights_V209_lo_reg_13353.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8195.read(), ap_const_boolean_1)) {
            grp_relu_fu_5018_weight_V = relu_weights_V202_lo_reg_13223.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8193.read(), ap_const_boolean_1)) {
            grp_relu_fu_5018_weight_V = relu_weights_V195_lo_reg_12623.read();
        } else {
            grp_relu_fu_5018_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5018_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5026_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2472.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2579.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2628.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2674.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2724.read(), ap_const_boolean_0)))) {
        grp_relu_fu_5026_ap_ce = ap_const_logic_1;
    } else {
        grp_relu_fu_5026_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5026_norm_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8201.read(), ap_const_boolean_1)) {
            grp_relu_fu_5026_norm_V = norm_V_0_30_reg_13819.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8199.read(), ap_const_boolean_1)) {
            grp_relu_fu_5026_norm_V = norm_V_0_23_reg_13707.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8197.read(), ap_const_boolean_1)) {
            grp_relu_fu_5026_norm_V = norm_V_0_16_reg_13608.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8195.read(), ap_const_boolean_1)) {
            grp_relu_fu_5026_norm_V = norm_V_0_9_reg_13228.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8193.read(), ap_const_boolean_1)) {
            grp_relu_fu_5026_norm_V = norm_V_0_2_reg_13143.read();
        } else {
            grp_relu_fu_5026_norm_V =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5026_norm_V =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5026_shiftx_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8201.read(), ap_const_boolean_1)) {
            grp_relu_fu_5026_shiftx_V = relu_shiftx_V162_loa_reg_13568.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8199.read(), ap_const_boolean_1)) {
            grp_relu_fu_5026_shiftx_V = relu_shiftx_V155_loa_reg_13463.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8197.read(), ap_const_boolean_1)) {
            grp_relu_fu_5026_shiftx_V = relu_shiftx_V148_loa_reg_13358.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8195.read(), ap_const_boolean_1)) {
            grp_relu_fu_5026_shiftx_V = relu_shiftx_V141_loa_reg_13233.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8193.read(), ap_const_boolean_1)) {
            grp_relu_fu_5026_shiftx_V = relu_shiftx_V134_loa_reg_12643.read();
        } else {
            grp_relu_fu_5026_shiftx_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5026_shiftx_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5026_shifty_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8201.read(), ap_const_boolean_1)) {
            grp_relu_fu_5026_shifty_V = relu_shifty_V193_loa_reg_13573.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8199.read(), ap_const_boolean_1)) {
            grp_relu_fu_5026_shifty_V = relu_shifty_V186_loa_reg_13468.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8197.read(), ap_const_boolean_1)) {
            grp_relu_fu_5026_shifty_V = relu_shifty_V179_loa_reg_13363.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8195.read(), ap_const_boolean_1)) {
            grp_relu_fu_5026_shifty_V = relu_shifty_V172_loa_reg_13238.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8193.read(), ap_const_boolean_1)) {
            grp_relu_fu_5026_shifty_V = relu_shifty_V165_loa_reg_12648.read();
        } else {
            grp_relu_fu_5026_shifty_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5026_shifty_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5026_weight_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8201.read(), ap_const_boolean_1)) {
            grp_relu_fu_5026_weight_V = relu_weights_V224_lo_reg_13578.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8199.read(), ap_const_boolean_1)) {
            grp_relu_fu_5026_weight_V = relu_weights_V217_lo_reg_13473.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8197.read(), ap_const_boolean_1)) {
            grp_relu_fu_5026_weight_V = relu_weights_V210_lo_reg_13368.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8195.read(), ap_const_boolean_1)) {
            grp_relu_fu_5026_weight_V = relu_weights_V203_lo_reg_13243.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8193.read(), ap_const_boolean_1)) {
            grp_relu_fu_5026_weight_V = relu_weights_V196_lo_reg_12653.read();
        } else {
            grp_relu_fu_5026_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5026_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5034_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2473.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2580.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2630.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2676.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2725.read(), ap_const_boolean_0)))) {
        grp_relu_fu_5034_ap_ce = ap_const_logic_1;
    } else {
        grp_relu_fu_5034_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5034_norm_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8201.read(), ap_const_boolean_1)) {
            grp_relu_fu_5034_norm_V = norm_V_0_s_reg_13824.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8199.read(), ap_const_boolean_1)) {
            grp_relu_fu_5034_norm_V = norm_V_0_24_reg_13712.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8197.read(), ap_const_boolean_1)) {
            grp_relu_fu_5034_norm_V = norm_V_0_17_reg_13613.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8195.read(), ap_const_boolean_1)) {
            grp_relu_fu_5034_norm_V = norm_V_0_10_reg_13248.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8193.read(), ap_const_boolean_1)) {
            grp_relu_fu_5034_norm_V = norm_V_0_3_reg_13148.read();
        } else {
            grp_relu_fu_5034_norm_V =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5034_norm_V =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5034_shiftx_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8201.read(), ap_const_boolean_1)) {
            grp_relu_fu_5034_shiftx_V = relu_shiftx_V163_loa_reg_13583.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8199.read(), ap_const_boolean_1)) {
            grp_relu_fu_5034_shiftx_V = relu_shiftx_V156_loa_reg_13478.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8197.read(), ap_const_boolean_1)) {
            grp_relu_fu_5034_shiftx_V = relu_shiftx_V149_loa_reg_13373.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8195.read(), ap_const_boolean_1)) {
            grp_relu_fu_5034_shiftx_V = relu_shiftx_V142_loa_reg_13253.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8193.read(), ap_const_boolean_1)) {
            grp_relu_fu_5034_shiftx_V = relu_shiftx_V135_loa_reg_12673.read();
        } else {
            grp_relu_fu_5034_shiftx_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5034_shiftx_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5034_shifty_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8201.read(), ap_const_boolean_1)) {
            grp_relu_fu_5034_shifty_V = relu_shifty_V194_loa_reg_13588.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8199.read(), ap_const_boolean_1)) {
            grp_relu_fu_5034_shifty_V = relu_shifty_V187_loa_reg_13483.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8197.read(), ap_const_boolean_1)) {
            grp_relu_fu_5034_shifty_V = relu_shifty_V180_loa_reg_13378.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8195.read(), ap_const_boolean_1)) {
            grp_relu_fu_5034_shifty_V = relu_shifty_V173_loa_reg_13258.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8193.read(), ap_const_boolean_1)) {
            grp_relu_fu_5034_shifty_V = relu_shifty_V166_loa_reg_12678.read();
        } else {
            grp_relu_fu_5034_shifty_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5034_shifty_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5034_weight_V() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read())) {
        if (esl_seteq<1,1,1>(ap_condition_8201.read(), ap_const_boolean_1)) {
            grp_relu_fu_5034_weight_V = relu_weights_V225_lo_reg_13593.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8199.read(), ap_const_boolean_1)) {
            grp_relu_fu_5034_weight_V = relu_weights_V218_lo_reg_13488.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8197.read(), ap_const_boolean_1)) {
            grp_relu_fu_5034_weight_V = relu_weights_V211_lo_reg_13383.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8195.read(), ap_const_boolean_1)) {
            grp_relu_fu_5034_weight_V = relu_weights_V204_lo_reg_13263.read();
        } else if (esl_seteq<1,1,1>(ap_condition_8193.read(), ap_const_boolean_1)) {
            grp_relu_fu_5034_weight_V = relu_weights_V197_lo_reg_12683.read();
        } else {
            grp_relu_fu_5034_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5034_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5042_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2474.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2581.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2632.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2678.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2726.read(), ap_const_boolean_0)))) {
        grp_relu_fu_5042_ap_ce = ap_const_logic_1;
    } else {
        grp_relu_fu_5042_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5042_norm_V() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_relu_fu_5042_norm_V = norm_V_0_25_reg_13717.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_relu_fu_5042_norm_V = norm_V_0_18_reg_13618.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_relu_fu_5042_norm_V = norm_V_0_11_reg_13268.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            grp_relu_fu_5042_norm_V = norm_V_0_4_reg_13153.read();
        } else {
            grp_relu_fu_5042_norm_V =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5042_norm_V =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5042_shiftx_V() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_relu_fu_5042_shiftx_V = relu_shiftx_V157_loa_reg_13493.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_relu_fu_5042_shiftx_V = relu_shiftx_V150_loa_reg_13388.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_relu_fu_5042_shiftx_V = relu_shiftx_V143_loa_reg_13273.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            grp_relu_fu_5042_shiftx_V = relu_shiftx_V136_loa_reg_12703.read();
        } else {
            grp_relu_fu_5042_shiftx_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5042_shiftx_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5042_shifty_V() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_relu_fu_5042_shifty_V = relu_shifty_V188_loa_reg_13498.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_relu_fu_5042_shifty_V = relu_shifty_V181_loa_reg_13393.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_relu_fu_5042_shifty_V = relu_shifty_V174_loa_reg_13278.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            grp_relu_fu_5042_shifty_V = relu_shifty_V167_loa_reg_12708.read();
        } else {
            grp_relu_fu_5042_shifty_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5042_shifty_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5042_weight_V() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_relu_fu_5042_weight_V = relu_weights_V219_lo_reg_13503.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_relu_fu_5042_weight_V = relu_weights_V212_lo_reg_13398.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_relu_fu_5042_weight_V = relu_weights_V205_lo_reg_13283.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            grp_relu_fu_5042_weight_V = relu_weights_V198_lo_reg_12713.read();
        } else {
            grp_relu_fu_5042_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5042_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5050_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2475.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2582.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2634.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2680.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2727.read(), ap_const_boolean_0)))) {
        grp_relu_fu_5050_ap_ce = ap_const_logic_1;
    } else {
        grp_relu_fu_5050_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5050_norm_V() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_relu_fu_5050_norm_V = norm_V_0_26_reg_13722.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_relu_fu_5050_norm_V = norm_V_0_19_reg_13623.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_relu_fu_5050_norm_V = norm_V_0_12_reg_13288.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            grp_relu_fu_5050_norm_V = norm_V_0_5_reg_13158.read();
        } else {
            grp_relu_fu_5050_norm_V =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5050_norm_V =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5050_shiftx_V() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_relu_fu_5050_shiftx_V = relu_shiftx_V158_loa_reg_13508.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_relu_fu_5050_shiftx_V = relu_shiftx_V151_loa_reg_13403.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_relu_fu_5050_shiftx_V = relu_shiftx_V144_loa_reg_13293.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            grp_relu_fu_5050_shiftx_V = relu_shiftx_V137_loa_reg_12733.read();
        } else {
            grp_relu_fu_5050_shiftx_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5050_shiftx_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5050_shifty_V() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_relu_fu_5050_shifty_V = relu_shifty_V189_loa_reg_13513.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_relu_fu_5050_shifty_V = relu_shifty_V182_loa_reg_13408.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_relu_fu_5050_shifty_V = relu_shifty_V175_loa_reg_13298.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            grp_relu_fu_5050_shifty_V = relu_shifty_V168_loa_reg_12738.read();
        } else {
            grp_relu_fu_5050_shifty_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5050_shifty_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5050_weight_V() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_relu_fu_5050_weight_V = relu_weights_V220_lo_reg_13518.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_relu_fu_5050_weight_V = relu_weights_V213_lo_reg_13413.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_relu_fu_5050_weight_V = relu_weights_V206_lo_reg_13303.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            grp_relu_fu_5050_weight_V = relu_weights_V199_lo_reg_12743.read();
        } else {
            grp_relu_fu_5050_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5050_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5058_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2476.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2583.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2636.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2682.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2728.read(), ap_const_boolean_0)))) {
        grp_relu_fu_5058_ap_ce = ap_const_logic_1;
    } else {
        grp_relu_fu_5058_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5058_norm_V() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_relu_fu_5058_norm_V = norm_V_0_27_reg_13727.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_relu_fu_5058_norm_V = norm_V_0_20_reg_13628.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_relu_fu_5058_norm_V = norm_V_0_13_reg_13308.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            grp_relu_fu_5058_norm_V = norm_V_0_6_reg_13163.read();
        } else {
            grp_relu_fu_5058_norm_V =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5058_norm_V =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5058_shiftx_V() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_relu_fu_5058_shiftx_V = relu_shiftx_V159_loa_reg_13523.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_relu_fu_5058_shiftx_V = relu_shiftx_V152_loa_reg_13418.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_relu_fu_5058_shiftx_V = relu_shiftx_V145_loa_reg_13313.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            grp_relu_fu_5058_shiftx_V = relu_shiftx_V138_loa_reg_12763.read();
        } else {
            grp_relu_fu_5058_shiftx_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5058_shiftx_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5058_shifty_V() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_relu_fu_5058_shifty_V = relu_shifty_V190_loa_reg_13528.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_relu_fu_5058_shifty_V = relu_shifty_V183_loa_reg_13423.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_relu_fu_5058_shifty_V = relu_shifty_V176_loa_reg_13318.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            grp_relu_fu_5058_shifty_V = relu_shifty_V169_loa_reg_12768.read();
        } else {
            grp_relu_fu_5058_shifty_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5058_shifty_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_relu_fu_5058_weight_V() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter3_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_relu_fu_5058_weight_V = relu_weights_V221_lo_reg_13533.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_relu_fu_5058_weight_V = relu_weights_V214_lo_reg_13428.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_relu_fu_5058_weight_V = relu_weights_V207_lo_reg_13323.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            grp_relu_fu_5058_weight_V = relu_weights_V200_lo_reg_12773.read();
        } else {
            grp_relu_fu_5058_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
        }
    } else {
        grp_relu_fu_5058_weight_V =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5115_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2035.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2183.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2289.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2317.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2352.read(), ap_const_boolean_0)))) {
        grp_sum_engine_fu_5115_ap_ce = ap_const_logic_1;
    } else {
        grp_sum_engine_fu_5115_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5115_t0_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t0_V = p_036_27_reg_12388.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t0_V = p_036_20_reg_12038.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t0_V = p_036_13_reg_11418_pp0_iter2_reg.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t0_V = p_036_7_reg_11313.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t0_V = p_s_reg_11208.read();
        } else {
            grp_sum_engine_fu_5115_t0_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5115_t0_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5115_t1_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t1_V = tmp1_V_0_28_reg_12393.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t1_V = tmp1_V_0_21_reg_12043.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t1_V = tmp1_V_0_14_reg_11423_pp0_iter2_reg.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t1_V = tmp1_V_0_7_reg_11318.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t1_V = tmp1_V_reg_11213.read();
        } else {
            grp_sum_engine_fu_5115_t1_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5115_t1_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5115_t2_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t2_V = tmp2_V_0_27_reg_12398.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t2_V = tmp2_V_0_20_reg_12048.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t2_V = tmp2_V_0_13_reg_11768.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t2_V = tmp2_V_0_7_reg_11663.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t2_V = tmp2_V_reg_11558.read();
        } else {
            grp_sum_engine_fu_5115_t2_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5115_t2_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5115_t3_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t3_V = tmp3_V_0_27_reg_12403.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t3_V = tmp3_V_0_20_reg_12053.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t3_V = tmp3_V_0_13_reg_11428_pp0_iter2_reg.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t3_V = tmp3_V_0_7_reg_11323.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t3_V = tmp3_V_reg_11218.read();
        } else {
            grp_sum_engine_fu_5115_t3_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5115_t3_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5115_t4_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t4_V = tmp4_V_0_27_reg_12408.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t4_V = tmp4_V_0_20_reg_12058.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t4_V = tmp4_V_0_13_reg_11773.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t4_V = tmp4_V_0_7_reg_11668.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t4_V = tmp4_V_reg_11563.read();
        } else {
            grp_sum_engine_fu_5115_t4_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5115_t4_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5115_t5_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t5_V = tmp5_V_0_27_reg_12413.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t5_V = tmp5_V_0_20_reg_12063.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t5_V = tmp5_V_0_13_reg_11778.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t5_V = tmp5_V_0_7_reg_11673.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t5_V = tmp5_V_reg_11568.read();
        } else {
            grp_sum_engine_fu_5115_t5_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5115_t5_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5115_t6_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t6_V = tmp6_V_0_27_reg_12418.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t6_V = tmp6_V_0_20_reg_12173.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t6_V = tmp6_V_0_13_reg_11918.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t6_V = tmp6_V_0_7_reg_11848.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t6_V = reg_5654.read();
        } else {
            grp_sum_engine_fu_5115_t6_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5115_t6_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5115_t7_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t7_V = tmp7_V_0_27_reg_12423.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t7_V = tmp7_V_0_20_reg_12178.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t7_V = tmp7_V_0_13_reg_11923.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t7_V = tmp7_V_0_7_reg_11853.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t7_V = reg_5660.read();
        } else {
            grp_sum_engine_fu_5115_t7_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5115_t7_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5115_t8_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t8_V = tmp8_V_0_27_reg_12428.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t8_V = tmp8_V_0_20_reg_12183.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t8_V = tmp8_V_0_13_reg_12138.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t8_V = tmp8_V_0_7_reg_12103.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5115_t8_V = tmp8_V_reg_12068.read();
        } else {
            grp_sum_engine_fu_5115_t8_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5115_t8_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5128_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2041.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2189.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2290.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2318.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2353.read(), ap_const_boolean_0)))) {
        grp_sum_engine_fu_5128_ap_ce = ap_const_logic_1;
    } else {
        grp_sum_engine_fu_5128_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5128_t0_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t0_V = p_036_28_reg_12433.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t0_V = p_036_21_reg_12188.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t0_V = p_036_14_reg_11433_pp0_iter2_reg.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t0_V = p_036_8_reg_11328.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t0_V = p_036_1_reg_11223.read();
        } else {
            grp_sum_engine_fu_5128_t0_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5128_t0_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5128_t1_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t1_V = tmp1_V_0_29_reg_12438.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t1_V = tmp1_V_0_22_reg_12193.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t1_V = tmp1_V_0_15_reg_11438_pp0_iter2_reg.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t1_V = tmp1_V_0_8_reg_11333.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t1_V = tmp1_V_0_1_reg_11228.read();
        } else {
            grp_sum_engine_fu_5128_t1_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5128_t1_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5128_t2_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t2_V = tmp2_V_0_28_reg_12443.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t2_V = tmp2_V_0_21_reg_12198.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t2_V = tmp2_V_0_14_reg_11783.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t2_V = tmp2_V_0_8_reg_11678.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t2_V = tmp2_V_0_1_reg_11573.read();
        } else {
            grp_sum_engine_fu_5128_t2_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5128_t2_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5128_t3_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t3_V = tmp3_V_0_28_reg_12448.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t3_V = tmp3_V_0_21_reg_12203.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t3_V = tmp3_V_0_14_reg_11443_pp0_iter2_reg.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t3_V = tmp3_V_0_8_reg_11338.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t3_V = tmp3_V_0_1_reg_11233.read();
        } else {
            grp_sum_engine_fu_5128_t3_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5128_t3_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5128_t4_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t4_V = tmp4_V_0_28_reg_12453.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t4_V = tmp4_V_0_21_reg_12208.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t4_V = tmp4_V_0_14_reg_11788.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t4_V = tmp4_V_0_8_reg_11683.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t4_V = tmp4_V_0_1_reg_11578.read();
        } else {
            grp_sum_engine_fu_5128_t4_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5128_t4_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5128_t5_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t5_V = tmp5_V_0_28_reg_12458.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t5_V = tmp5_V_0_21_reg_12213.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t5_V = tmp5_V_0_14_reg_11793.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t5_V = tmp5_V_0_8_reg_11688.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t5_V = tmp5_V_0_1_reg_11583.read();
        } else {
            grp_sum_engine_fu_5128_t5_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5128_t5_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5128_t6_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t6_V = tmp6_V_0_28_reg_12463.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t6_V = tmp6_V_0_21_reg_12218.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t6_V = tmp6_V_0_14_reg_11928.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t6_V = tmp6_V_0_8_reg_11858.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t6_V = reg_5666.read();
        } else {
            grp_sum_engine_fu_5128_t6_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5128_t6_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5128_t7_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t7_V = tmp7_V_0_28_reg_12468.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t7_V = tmp7_V_0_21_reg_12223.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t7_V = tmp7_V_0_14_reg_11933.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t7_V = tmp7_V_0_8_reg_11863.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t7_V = reg_5672.read();
        } else {
            grp_sum_engine_fu_5128_t7_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5128_t7_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5128_t8_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t8_V = tmp8_V_0_28_reg_12473.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t8_V = tmp8_V_0_21_reg_12228.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t8_V = tmp8_V_0_14_reg_12143.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t8_V = tmp8_V_0_8_reg_12108.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5128_t8_V = tmp8_V_0_1_reg_12073.read();
        } else {
            grp_sum_engine_fu_5128_t8_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5128_t8_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5141_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2047.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2195.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2291.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2319.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2354.read(), ap_const_boolean_0)))) {
        grp_sum_engine_fu_5141_ap_ce = ap_const_logic_1;
    } else {
        grp_sum_engine_fu_5141_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5141_t0_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t0_V = p_036_29_reg_12478.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t0_V = p_036_22_reg_12233.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t0_V = p_036_15_reg_11448_pp0_iter2_reg.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t0_V = p_036_9_reg_11343.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t0_V = p_036_2_reg_11238.read();
        } else {
            grp_sum_engine_fu_5141_t0_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5141_t0_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5141_t1_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t1_V = tmp1_V_0_30_reg_12483.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t1_V = tmp1_V_0_23_reg_12238.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t1_V = tmp1_V_0_16_reg_11453_pp0_iter2_reg.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t1_V = tmp1_V_0_9_reg_11348.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t1_V = tmp1_V_0_2_reg_11243.read();
        } else {
            grp_sum_engine_fu_5141_t1_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5141_t1_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5141_t2_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t2_V = tmp2_V_0_29_reg_12488.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t2_V = tmp2_V_0_22_reg_12243.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t2_V = tmp2_V_0_15_reg_11798.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t2_V = tmp2_V_0_9_reg_11693.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t2_V = tmp2_V_0_2_reg_11588.read();
        } else {
            grp_sum_engine_fu_5141_t2_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5141_t2_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5141_t3_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t3_V = tmp3_V_0_29_reg_12493.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t3_V = tmp3_V_0_22_reg_12248.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t3_V = tmp3_V_0_15_reg_11458_pp0_iter2_reg.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t3_V = tmp3_V_0_9_reg_11353.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t3_V = tmp3_V_0_2_reg_11248.read();
        } else {
            grp_sum_engine_fu_5141_t3_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5141_t3_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5141_t4_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t4_V = tmp4_V_0_29_reg_12498.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t4_V = tmp4_V_0_22_reg_12253.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t4_V = tmp4_V_0_15_reg_11803.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t4_V = tmp4_V_0_9_reg_11698.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t4_V = tmp4_V_0_2_reg_11593.read();
        } else {
            grp_sum_engine_fu_5141_t4_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5141_t4_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5141_t5_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t5_V = tmp5_V_0_29_reg_12503.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t5_V = tmp5_V_0_22_reg_12258.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t5_V = tmp5_V_0_15_reg_11808.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t5_V = tmp5_V_0_9_reg_11703.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t5_V = tmp5_V_0_2_reg_11598.read();
        } else {
            grp_sum_engine_fu_5141_t5_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5141_t5_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5141_t6_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t6_V = tmp6_V_0_29_reg_12508.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t6_V = tmp6_V_0_22_reg_12263.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t6_V = tmp6_V_0_15_reg_11938.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t6_V = tmp6_V_0_9_reg_11868.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t6_V = reg_5678.read();
        } else {
            grp_sum_engine_fu_5141_t6_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5141_t6_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5141_t7_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t7_V = tmp7_V_0_29_reg_12513.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t7_V = tmp7_V_0_22_reg_12268.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t7_V = tmp7_V_0_15_reg_11943.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t7_V = tmp7_V_0_9_reg_11873.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t7_V = reg_5684.read();
        } else {
            grp_sum_engine_fu_5141_t7_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5141_t7_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5141_t8_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t8_V = tmp8_V_0_29_reg_12518.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t8_V = tmp8_V_0_22_reg_12273.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t8_V = tmp8_V_0_15_reg_12148.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t8_V = tmp8_V_0_9_reg_12113.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5141_t8_V = tmp8_V_0_2_reg_12078.read();
        } else {
            grp_sum_engine_fu_5141_t8_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5141_t8_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5154_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2053.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2201.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2292.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2320.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2355.read(), ap_const_boolean_0)))) {
        grp_sum_engine_fu_5154_ap_ce = ap_const_logic_1;
    } else {
        grp_sum_engine_fu_5154_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5154_t0_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t0_V = p_036_30_reg_12523.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t0_V = p_036_23_reg_12278.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t0_V = p_036_16_reg_11463_pp0_iter2_reg.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t0_V = p_036_s_reg_11358.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t0_V = p_036_3_reg_11253.read();
        } else {
            grp_sum_engine_fu_5154_t0_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5154_t0_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5154_t1_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t1_V = tmp1_V_0_s_reg_12528.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t1_V = tmp1_V_0_24_reg_12283.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t1_V = tmp1_V_0_17_reg_11468_pp0_iter2_reg.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t1_V = tmp1_V_0_10_reg_11363.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t1_V = tmp1_V_0_3_reg_11258.read();
        } else {
            grp_sum_engine_fu_5154_t1_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5154_t1_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5154_t2_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t2_V = tmp2_V_0_30_reg_12533.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t2_V = tmp2_V_0_23_reg_12288.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t2_V = tmp2_V_0_16_reg_11813.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t2_V = tmp2_V_0_s_reg_11708.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t2_V = tmp2_V_0_3_reg_11603.read();
        } else {
            grp_sum_engine_fu_5154_t2_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5154_t2_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5154_t3_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t3_V = tmp3_V_0_30_reg_12538.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t3_V = tmp3_V_0_23_reg_12293.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t3_V = tmp3_V_0_16_reg_11473_pp0_iter2_reg.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t3_V = tmp3_V_0_s_reg_11368.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t3_V = tmp3_V_0_3_reg_11263.read();
        } else {
            grp_sum_engine_fu_5154_t3_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5154_t3_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5154_t4_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t4_V = tmp4_V_0_30_reg_12543.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t4_V = tmp4_V_0_23_reg_12298.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t4_V = tmp4_V_0_16_reg_11818.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t4_V = tmp4_V_0_s_reg_11713.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t4_V = tmp4_V_0_3_reg_11608.read();
        } else {
            grp_sum_engine_fu_5154_t4_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5154_t4_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5154_t5_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t5_V = tmp5_V_0_30_reg_12548.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t5_V = tmp5_V_0_23_reg_12303.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t5_V = tmp5_V_0_16_reg_11823.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t5_V = tmp5_V_0_s_reg_11718.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t5_V = tmp5_V_0_3_reg_11613.read();
        } else {
            grp_sum_engine_fu_5154_t5_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5154_t5_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5154_t6_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t6_V = tmp6_V_0_30_reg_12553.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t6_V = tmp6_V_0_23_reg_12308.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t6_V = tmp6_V_0_16_reg_11948.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t6_V = tmp6_V_0_s_reg_11878.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t6_V = reg_5690.read();
        } else {
            grp_sum_engine_fu_5154_t6_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5154_t6_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5154_t7_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t7_V = tmp7_V_0_30_reg_12558.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t7_V = tmp7_V_0_23_reg_12313.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t7_V = tmp7_V_0_16_reg_11953.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t7_V = tmp7_V_0_s_reg_11883.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t7_V = reg_5696.read();
        } else {
            grp_sum_engine_fu_5154_t7_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5154_t7_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5154_t8_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10576.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t8_V = tmp8_V_0_30_reg_12563.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t8_V = tmp8_V_0_23_reg_12318.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t8_V = tmp8_V_0_16_reg_12153.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t8_V = tmp8_V_0_s_reg_12118.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5154_t8_V = tmp8_V_0_3_reg_12083.read();
        } else {
            grp_sum_engine_fu_5154_t8_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5154_t8_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5167_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2059.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2207.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2293.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2321.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2356.read(), ap_const_boolean_0)))) {
        grp_sum_engine_fu_5167_ap_ce = ap_const_logic_1;
    } else {
        grp_sum_engine_fu_5167_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5167_t0_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t0_V = p_036_24_reg_12323.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t0_V = p_036_17_reg_11478_pp0_iter2_reg.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t0_V = p_036_10_reg_11373.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t0_V = p_036_4_reg_11268.read();
        } else {
            grp_sum_engine_fu_5167_t0_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5167_t0_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5167_t1_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t1_V = tmp1_V_0_25_reg_12328.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t1_V = tmp1_V_0_18_reg_11483_pp0_iter2_reg.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t1_V = tmp1_V_0_11_reg_11378.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t1_V = tmp1_V_0_4_reg_11273.read();
        } else {
            grp_sum_engine_fu_5167_t1_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5167_t1_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5167_t2_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t2_V = tmp2_V_0_24_reg_12333.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t2_V = tmp2_V_0_17_reg_11828.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t2_V = tmp2_V_0_10_reg_11723.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t2_V = tmp2_V_0_4_reg_11618.read();
        } else {
            grp_sum_engine_fu_5167_t2_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5167_t2_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5167_t3_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t3_V = tmp3_V_0_24_reg_12338.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t3_V = tmp3_V_0_17_reg_11488_pp0_iter2_reg.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t3_V = tmp3_V_0_10_reg_11383.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t3_V = tmp3_V_0_4_reg_11278.read();
        } else {
            grp_sum_engine_fu_5167_t3_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5167_t3_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5167_t4_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t4_V = tmp4_V_0_24_reg_12343.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t4_V = tmp4_V_0_17_reg_11833.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t4_V = tmp4_V_0_10_reg_11728.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t4_V = tmp4_V_0_4_reg_11623.read();
        } else {
            grp_sum_engine_fu_5167_t4_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5167_t4_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5167_t5_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t5_V = tmp5_V_0_24_reg_12348.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t5_V = tmp5_V_0_17_reg_11838.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t5_V = tmp5_V_0_10_reg_11733.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t5_V = tmp5_V_0_4_reg_11628.read();
        } else {
            grp_sum_engine_fu_5167_t5_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5167_t5_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5167_t6_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t6_V = tmp6_V_0_24_reg_12353.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t6_V = tmp6_V_0_17_reg_11958.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t6_V = tmp6_V_0_10_reg_11888.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t6_V = reg_5702.read();
        } else {
            grp_sum_engine_fu_5167_t6_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5167_t6_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5167_t7_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t7_V = reg_5654.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t7_V = tmp7_V_0_17_reg_11963.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t7_V = tmp7_V_0_10_reg_11893.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t7_V = reg_5708.read();
        } else {
            grp_sum_engine_fu_5167_t7_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5167_t7_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5167_t8_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t8_V = reg_5660.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t8_V = tmp8_V_0_17_reg_12158.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t8_V = tmp8_V_0_10_reg_12123.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5167_t8_V = tmp8_V_0_4_reg_12088.read();
        } else {
            grp_sum_engine_fu_5167_t8_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5167_t8_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5180_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2065.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2213.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2294.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2322.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2357.read(), ap_const_boolean_0)))) {
        grp_sum_engine_fu_5180_ap_ce = ap_const_logic_1;
    } else {
        grp_sum_engine_fu_5180_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5180_t0_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t0_V = reg_5666.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t0_V = p_036_18_reg_11493_pp0_iter2_reg.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t0_V = p_036_11_reg_11388.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t0_V = p_036_5_reg_11283.read();
        } else {
            grp_sum_engine_fu_5180_t0_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5180_t0_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5180_t1_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t1_V = reg_5672.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t1_V = tmp1_V_0_19_reg_11843.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t1_V = tmp1_V_0_12_reg_11393.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t1_V = tmp1_V_0_5_reg_11288.read();
        } else {
            grp_sum_engine_fu_5180_t1_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5180_t1_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5180_t2_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t2_V = reg_5678.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t2_V = tmp2_V_0_18_reg_11968.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t2_V = tmp2_V_0_11_reg_11738.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t2_V = tmp2_V_0_5_reg_11633.read();
        } else {
            grp_sum_engine_fu_5180_t2_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5180_t2_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5180_t3_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t3_V = reg_5684.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t3_V = tmp3_V_0_18_reg_11973.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t3_V = tmp3_V_0_11_reg_11398.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t3_V = tmp3_V_0_5_reg_11293.read();
        } else {
            grp_sum_engine_fu_5180_t3_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5180_t3_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5180_t4_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t4_V = reg_5690.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t4_V = tmp4_V_0_18_reg_11978.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t4_V = tmp4_V_0_11_reg_11743.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t4_V = tmp4_V_0_5_reg_11638.read();
        } else {
            grp_sum_engine_fu_5180_t4_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5180_t4_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5180_t5_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t5_V = reg_5696.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t5_V = tmp5_V_0_18_reg_11983.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t5_V = tmp5_V_0_11_reg_11748.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t5_V = tmp5_V_0_5_reg_11643.read();
        } else {
            grp_sum_engine_fu_5180_t5_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5180_t5_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5180_t6_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t6_V = reg_5702.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t6_V = tmp6_V_0_18_reg_11988.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t6_V = tmp6_V_0_11_reg_11898.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t6_V = reg_5714.read();
        } else {
            grp_sum_engine_fu_5180_t6_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5180_t6_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5180_t7_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t7_V = reg_5708.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t7_V = tmp7_V_0_18_reg_11993.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t7_V = tmp7_V_0_11_reg_11903.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t7_V = reg_5720.read();
        } else {
            grp_sum_engine_fu_5180_t7_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5180_t7_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5180_t8_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t8_V = reg_5714.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t8_V = tmp8_V_0_18_reg_12163.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t8_V = tmp8_V_0_11_reg_12128.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5180_t8_V = tmp8_V_0_5_reg_12093.read();
        } else {
            grp_sum_engine_fu_5180_t8_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5180_t8_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5193_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001_ignoreCallOp2071.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001_ignoreCallOp2219.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001_ignoreCallOp2295.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001_ignoreCallOp2323.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001_ignoreCallOp2358.read(), ap_const_boolean_0)))) {
        grp_sum_engine_fu_5193_ap_ce = ap_const_logic_1;
    } else {
        grp_sum_engine_fu_5193_ap_ce = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5193_t0_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t0_V = reg_5720.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t0_V = p_036_19_reg_11998.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t0_V = p_036_12_reg_11403.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t0_V = p_036_6_reg_11298.read();
        } else {
            grp_sum_engine_fu_5193_t0_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5193_t0_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5193_t1_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t1_V = reg_5726.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t1_V = tmp1_V_0_20_reg_12003.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t1_V = tmp1_V_0_13_reg_11408.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t1_V = tmp1_V_0_6_reg_11303.read();
        } else {
            grp_sum_engine_fu_5193_t1_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5193_t1_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5193_t2_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t2_V = reg_5732.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t2_V = tmp2_V_0_19_reg_12008.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t2_V = tmp2_V_0_12_reg_11753.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t2_V = tmp2_V_0_6_reg_11648.read();
        } else {
            grp_sum_engine_fu_5193_t2_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5193_t2_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5193_t3_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t3_V = tmp3_V_0_26_reg_12358.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t3_V = tmp3_V_0_19_reg_12013.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t3_V = tmp3_V_0_12_reg_11413.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t3_V = tmp3_V_0_6_reg_11308.read();
        } else {
            grp_sum_engine_fu_5193_t3_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5193_t3_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5193_t4_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t4_V = tmp4_V_0_26_reg_12363.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t4_V = tmp4_V_0_19_reg_12018.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t4_V = tmp4_V_0_12_reg_11758.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t4_V = tmp4_V_0_6_reg_11653.read();
        } else {
            grp_sum_engine_fu_5193_t4_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5193_t4_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5193_t5_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t5_V = tmp5_V_0_26_reg_12368.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t5_V = tmp5_V_0_19_reg_12023.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t5_V = tmp5_V_0_12_reg_11763.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t5_V = tmp5_V_0_6_reg_11658.read();
        } else {
            grp_sum_engine_fu_5193_t5_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5193_t5_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5193_t6_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t6_V = tmp6_V_0_26_reg_12373.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t6_V = tmp6_V_0_19_reg_12028.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t6_V = tmp6_V_0_12_reg_11908.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t6_V = reg_5726.read();
        } else {
            grp_sum_engine_fu_5193_t6_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5193_t6_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5193_t7_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t7_V = tmp7_V_0_26_reg_12378.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t7_V = tmp7_V_0_19_reg_12033.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t7_V = tmp7_V_0_12_reg_11913.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t7_V = reg_5732.read();
        } else {
            grp_sum_engine_fu_5193_t7_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5193_t7_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_grp_sum_engine_fu_5193_t8_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) {
        if (esl_seteq<1,1,1>(ap_condition_10572.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t8_V = tmp8_V_0_26_reg_12383.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10568.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t8_V = tmp8_V_0_19_reg_12168.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10564.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t8_V = tmp8_V_0_12_reg_12133.read();
        } else if (esl_seteq<1,1,1>(ap_condition_10560.read(), ap_const_boolean_1)) {
            grp_sum_engine_fu_5193_t8_V = tmp8_V_0_6_reg_12098.read();
        } else {
            grp_sum_engine_fu_5193_t8_V =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        grp_sum_engine_fu_5193_t8_V =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_icmp_ln500_fu_5770_p2() {
    icmp_ln500_fu_5770_p2 = (!trunc_ln500_fu_5766_p1.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln500_fu_5766_p1.read() == ap_const_lv2_1);
}

void pgconv64_1bit::thread_icmp_ln505_fu_5865_p2() {
    icmp_ln505_fu_5865_p2 = (!ap_phi_mux_indvar_flatten_phi_fu_4517_p4.read().is_01() || !select_ln477_reg_10029.read().is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_flatten_phi_fu_4517_p4.read() == select_ln477_reg_10029.read());
}

void pgconv64_1bit::thread_icmp_ln506_fu_5876_p2() {
    icmp_ln506_fu_5876_p2 = (!ap_phi_mux_col0_0_phi_fu_4539_p4.read().is_01() || !select_ln500_reg_9224.read().is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_col0_0_phi_fu_4539_p4.read() == select_ln500_reg_9224.read());
}

void pgconv64_1bit::thread_icmp_ln538_10_fu_5970_p2() {
    icmp_ln538_10_fu_5970_p2 = (!select_ln500_2_fu_5913_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(select_ln500_2_fu_5913_p3.read() == ap_const_lv4_3);
}

void pgconv64_1bit::thread_icmp_ln538_11_fu_5984_p2() {
    icmp_ln538_11_fu_5984_p2 = (!select_ln500_2_fu_5913_p3.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(select_ln500_2_fu_5913_p3.read() == ap_const_lv4_4);
}

void pgconv64_1bit::thread_icmp_ln538_12_fu_5998_p2() {
    icmp_ln538_12_fu_5998_p2 = (!select_ln500_2_fu_5913_p3.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(select_ln500_2_fu_5913_p3.read() == ap_const_lv4_5);
}

void pgconv64_1bit::thread_icmp_ln538_13_fu_6012_p2() {
    icmp_ln538_13_fu_6012_p2 = (!select_ln500_2_fu_5913_p3.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(select_ln500_2_fu_5913_p3.read() == ap_const_lv4_6);
}

void pgconv64_1bit::thread_icmp_ln538_1_fu_5829_p2() {
    icmp_ln538_1_fu_5829_p2 = (!row_2_fu_5816_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(row_2_fu_5816_p3.read() == ap_const_lv4_1);
}

void pgconv64_1bit::thread_icmp_ln538_2_fu_5835_p2() {
    icmp_ln538_2_fu_5835_p2 = (!row_2_fu_5816_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(row_2_fu_5816_p3.read() == ap_const_lv4_2);
}

void pgconv64_1bit::thread_icmp_ln538_3_fu_5841_p2() {
    icmp_ln538_3_fu_5841_p2 = (!row_2_fu_5816_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(row_2_fu_5816_p3.read() == ap_const_lv4_3);
}

void pgconv64_1bit::thread_icmp_ln538_4_fu_5847_p2() {
    icmp_ln538_4_fu_5847_p2 = (!row_2_fu_5816_p3.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(row_2_fu_5816_p3.read() == ap_const_lv4_4);
}

void pgconv64_1bit::thread_icmp_ln538_5_fu_5853_p2() {
    icmp_ln538_5_fu_5853_p2 = (!row_2_fu_5816_p3.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(row_2_fu_5816_p3.read() == ap_const_lv4_5);
}

void pgconv64_1bit::thread_icmp_ln538_6_fu_5859_p2() {
    icmp_ln538_6_fu_5859_p2 = (!row_2_fu_5816_p3.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(row_2_fu_5816_p3.read() == ap_const_lv4_6);
}

void pgconv64_1bit::thread_icmp_ln538_7_fu_5928_p2() {
    icmp_ln538_7_fu_5928_p2 = (!select_ln500_2_fu_5913_p3.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(select_ln500_2_fu_5913_p3.read() == ap_const_lv4_0);
}

void pgconv64_1bit::thread_icmp_ln538_8_fu_5942_p2() {
    icmp_ln538_8_fu_5942_p2 = (!select_ln500_2_fu_5913_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(select_ln500_2_fu_5913_p3.read() == ap_const_lv4_1);
}

void pgconv64_1bit::thread_icmp_ln538_9_fu_5956_p2() {
    icmp_ln538_9_fu_5956_p2 = (!select_ln500_2_fu_5913_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(select_ln500_2_fu_5913_p3.read() == ap_const_lv4_2);
}

void pgconv64_1bit::thread_icmp_ln538_fu_5823_p2() {
    icmp_ln538_fu_5823_p2 = (!row_2_fu_5816_p3.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(row_2_fu_5816_p3.read() == ap_const_lv4_0);
}

void pgconv64_1bit::thread_or_ln340_352_fu_6547_p2() {
    or_ln340_352_fu_6547_p2 = (tmp_776_fu_6515_p3.read() | xor_ln340_1_fu_6541_p2.read());
}

void pgconv64_1bit::thread_or_ln340_353_fu_6635_p2() {
    or_ln340_353_fu_6635_p2 = (tmp_778_fu_6603_p3.read() | xor_ln340_2_fu_6629_p2.read());
}

void pgconv64_1bit::thread_or_ln340_354_fu_6723_p2() {
    or_ln340_354_fu_6723_p2 = (tmp_780_fu_6691_p3.read() | xor_ln340_3_fu_6717_p2.read());
}

void pgconv64_1bit::thread_or_ln340_355_fu_6811_p2() {
    or_ln340_355_fu_6811_p2 = (tmp_782_fu_6779_p3.read() | xor_ln340_4_fu_6805_p2.read());
}

void pgconv64_1bit::thread_or_ln340_356_fu_6899_p2() {
    or_ln340_356_fu_6899_p2 = (tmp_784_fu_6867_p3.read() | xor_ln340_5_fu_6893_p2.read());
}

void pgconv64_1bit::thread_or_ln340_357_fu_6987_p2() {
    or_ln340_357_fu_6987_p2 = (tmp_786_fu_6955_p3.read() | xor_ln340_6_fu_6981_p2.read());
}

void pgconv64_1bit::thread_or_ln340_358_fu_7075_p2() {
    or_ln340_358_fu_7075_p2 = (tmp_788_fu_7043_p3.read() | xor_ln340_7_fu_7069_p2.read());
}

void pgconv64_1bit::thread_or_ln340_359_fu_7163_p2() {
    or_ln340_359_fu_7163_p2 = (tmp_790_fu_7131_p3.read() | xor_ln340_8_fu_7157_p2.read());
}

void pgconv64_1bit::thread_or_ln340_360_fu_7251_p2() {
    or_ln340_360_fu_7251_p2 = (tmp_792_fu_7219_p3.read() | xor_ln340_9_fu_7245_p2.read());
}

void pgconv64_1bit::thread_or_ln340_361_fu_7339_p2() {
    or_ln340_361_fu_7339_p2 = (tmp_794_fu_7307_p3.read() | xor_ln340_10_fu_7333_p2.read());
}

void pgconv64_1bit::thread_or_ln340_362_fu_7427_p2() {
    or_ln340_362_fu_7427_p2 = (tmp_796_fu_7395_p3.read() | xor_ln340_11_fu_7421_p2.read());
}

void pgconv64_1bit::thread_or_ln340_363_fu_7515_p2() {
    or_ln340_363_fu_7515_p2 = (tmp_798_fu_7483_p3.read() | xor_ln340_12_fu_7509_p2.read());
}

void pgconv64_1bit::thread_or_ln340_364_fu_7603_p2() {
    or_ln340_364_fu_7603_p2 = (tmp_800_fu_7571_p3.read() | xor_ln340_13_fu_7597_p2.read());
}

void pgconv64_1bit::thread_or_ln340_365_fu_7691_p2() {
    or_ln340_365_fu_7691_p2 = (tmp_802_fu_7659_p3.read() | xor_ln340_14_fu_7685_p2.read());
}

void pgconv64_1bit::thread_or_ln340_366_fu_7779_p2() {
    or_ln340_366_fu_7779_p2 = (tmp_804_fu_7747_p3.read() | xor_ln340_15_fu_7773_p2.read());
}

void pgconv64_1bit::thread_or_ln340_367_fu_7867_p2() {
    or_ln340_367_fu_7867_p2 = (tmp_806_fu_7835_p3.read() | xor_ln340_16_fu_7861_p2.read());
}

void pgconv64_1bit::thread_or_ln340_368_fu_7955_p2() {
    or_ln340_368_fu_7955_p2 = (tmp_808_fu_7923_p3.read() | xor_ln340_17_fu_7949_p2.read());
}

void pgconv64_1bit::thread_or_ln340_369_fu_8043_p2() {
    or_ln340_369_fu_8043_p2 = (tmp_810_fu_8011_p3.read() | xor_ln340_18_fu_8037_p2.read());
}

void pgconv64_1bit::thread_or_ln340_370_fu_8131_p2() {
    or_ln340_370_fu_8131_p2 = (tmp_812_fu_8099_p3.read() | xor_ln340_19_fu_8125_p2.read());
}

void pgconv64_1bit::thread_or_ln340_371_fu_8219_p2() {
    or_ln340_371_fu_8219_p2 = (tmp_814_fu_8187_p3.read() | xor_ln340_20_fu_8213_p2.read());
}

void pgconv64_1bit::thread_or_ln340_372_fu_8307_p2() {
    or_ln340_372_fu_8307_p2 = (tmp_816_fu_8275_p3.read() | xor_ln340_21_fu_8301_p2.read());
}

void pgconv64_1bit::thread_or_ln340_373_fu_8395_p2() {
    or_ln340_373_fu_8395_p2 = (tmp_818_fu_8363_p3.read() | xor_ln340_22_fu_8389_p2.read());
}

void pgconv64_1bit::thread_or_ln340_374_fu_8483_p2() {
    or_ln340_374_fu_8483_p2 = (tmp_820_fu_8451_p3.read() | xor_ln340_23_fu_8477_p2.read());
}

void pgconv64_1bit::thread_or_ln340_375_fu_8571_p2() {
    or_ln340_375_fu_8571_p2 = (tmp_822_fu_8539_p3.read() | xor_ln340_24_fu_8565_p2.read());
}

void pgconv64_1bit::thread_or_ln340_376_fu_8659_p2() {
    or_ln340_376_fu_8659_p2 = (tmp_824_fu_8627_p3.read() | xor_ln340_25_fu_8653_p2.read());
}

void pgconv64_1bit::thread_or_ln340_377_fu_8747_p2() {
    or_ln340_377_fu_8747_p2 = (tmp_826_fu_8715_p3.read() | xor_ln340_26_fu_8741_p2.read());
}

void pgconv64_1bit::thread_or_ln340_378_fu_8835_p2() {
    or_ln340_378_fu_8835_p2 = (tmp_828_fu_8803_p3.read() | xor_ln340_27_fu_8829_p2.read());
}

void pgconv64_1bit::thread_or_ln340_379_fu_8923_p2() {
    or_ln340_379_fu_8923_p2 = (tmp_830_fu_8891_p3.read() | xor_ln340_28_fu_8917_p2.read());
}

void pgconv64_1bit::thread_or_ln340_380_fu_9011_p2() {
    or_ln340_380_fu_9011_p2 = (tmp_832_fu_8979_p3.read() | xor_ln340_29_fu_9005_p2.read());
}

void pgconv64_1bit::thread_or_ln340_381_fu_9099_p2() {
    or_ln340_381_fu_9099_p2 = (tmp_834_fu_9067_p3.read() | xor_ln340_30_fu_9093_p2.read());
}

void pgconv64_1bit::thread_or_ln340_382_fu_9187_p2() {
    or_ln340_382_fu_9187_p2 = (tmp_836_fu_9155_p3.read() | xor_ln340_31_fu_9181_p2.read());
}

void pgconv64_1bit::thread_or_ln340_fu_6459_p2() {
    or_ln340_fu_6459_p2 = (tmp_774_fu_6427_p3.read() | xor_ln340_fu_6453_p2.read());
}

void pgconv64_1bit::thread_or_ln513_1_fu_5907_p2() {
    or_ln513_1_fu_5907_p2 = (shl_ln513_mid1_fu_5899_p3.read() | ap_const_lv4_1);
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
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

void pgconv64_1bit::thread_row0_fu_5792_p2() {
    row0_fu_5792_p2 = (!ap_phi_mux_row0_0_phi_fu_4528_p4.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(ap_phi_mux_row0_0_phi_fu_4528_p4.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void pgconv64_1bit::thread_row_1_fu_5810_p2() {
    row_1_fu_5810_p2 = (shl_ln_fu_5802_p3.read() | ap_const_lv4_1);
}

void pgconv64_1bit::thread_row_2_fu_5816_p3() {
    row_2_fu_5816_p3 = (!icmp_ln500_reg_9217.read()[0].is_01())? sc_lv<4>(): ((icmp_ln500_reg_9217.read()[0].to_bool())? zext_ln510_fu_5798_p1.read(): row_1_fu_5810_p2.read());
}

void pgconv64_1bit::thread_select_ln340_10_fu_7345_p3() {
    select_ln340_10_fu_7345_p3 = (!xor_ln340_253_fu_7327_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_253_fu_7327_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_167_fu_7302_p2.read());
}

void pgconv64_1bit::thread_select_ln340_11_fu_7433_p3() {
    select_ln340_11_fu_7433_p3 = (!xor_ln340_254_fu_7415_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_254_fu_7415_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_168_fu_7390_p2.read());
}

void pgconv64_1bit::thread_select_ln340_12_fu_7521_p3() {
    select_ln340_12_fu_7521_p3 = (!xor_ln340_255_fu_7503_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_255_fu_7503_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_169_fu_7478_p2.read());
}

void pgconv64_1bit::thread_select_ln340_13_fu_7609_p3() {
    select_ln340_13_fu_7609_p3 = (!xor_ln340_256_fu_7591_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_256_fu_7591_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_170_fu_7566_p2.read());
}

void pgconv64_1bit::thread_select_ln340_14_fu_7697_p3() {
    select_ln340_14_fu_7697_p3 = (!xor_ln340_257_fu_7679_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_257_fu_7679_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_171_fu_7654_p2.read());
}

void pgconv64_1bit::thread_select_ln340_15_fu_7785_p3() {
    select_ln340_15_fu_7785_p3 = (!xor_ln340_258_fu_7767_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_258_fu_7767_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_172_fu_7742_p2.read());
}

void pgconv64_1bit::thread_select_ln340_16_fu_7873_p3() {
    select_ln340_16_fu_7873_p3 = (!xor_ln340_259_fu_7855_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_259_fu_7855_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_173_fu_7830_p2.read());
}

void pgconv64_1bit::thread_select_ln340_17_fu_7961_p3() {
    select_ln340_17_fu_7961_p3 = (!xor_ln340_260_fu_7943_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_260_fu_7943_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_174_fu_7918_p2.read());
}

void pgconv64_1bit::thread_select_ln340_18_fu_8049_p3() {
    select_ln340_18_fu_8049_p3 = (!xor_ln340_261_fu_8031_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_261_fu_8031_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_175_fu_8006_p2.read());
}

void pgconv64_1bit::thread_select_ln340_19_fu_8137_p3() {
    select_ln340_19_fu_8137_p3 = (!xor_ln340_262_fu_8119_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_262_fu_8119_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_176_fu_8094_p2.read());
}

void pgconv64_1bit::thread_select_ln340_1_fu_6553_p3() {
    select_ln340_1_fu_6553_p3 = (!xor_ln340_244_fu_6535_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_244_fu_6535_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_158_fu_6510_p2.read());
}

void pgconv64_1bit::thread_select_ln340_20_fu_8225_p3() {
    select_ln340_20_fu_8225_p3 = (!xor_ln340_263_fu_8207_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_263_fu_8207_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_177_fu_8182_p2.read());
}

void pgconv64_1bit::thread_select_ln340_21_fu_8313_p3() {
    select_ln340_21_fu_8313_p3 = (!xor_ln340_264_fu_8295_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_264_fu_8295_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_178_fu_8270_p2.read());
}

void pgconv64_1bit::thread_select_ln340_22_fu_8401_p3() {
    select_ln340_22_fu_8401_p3 = (!xor_ln340_265_fu_8383_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_265_fu_8383_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_179_fu_8358_p2.read());
}

void pgconv64_1bit::thread_select_ln340_23_fu_8489_p3() {
    select_ln340_23_fu_8489_p3 = (!xor_ln340_266_fu_8471_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_266_fu_8471_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_180_fu_8446_p2.read());
}

void pgconv64_1bit::thread_select_ln340_24_fu_8577_p3() {
    select_ln340_24_fu_8577_p3 = (!xor_ln340_267_fu_8559_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_267_fu_8559_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_181_fu_8534_p2.read());
}

void pgconv64_1bit::thread_select_ln340_25_fu_8665_p3() {
    select_ln340_25_fu_8665_p3 = (!xor_ln340_268_fu_8647_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_268_fu_8647_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_182_fu_8622_p2.read());
}

void pgconv64_1bit::thread_select_ln340_26_fu_8753_p3() {
    select_ln340_26_fu_8753_p3 = (!xor_ln340_269_fu_8735_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_269_fu_8735_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_183_fu_8710_p2.read());
}

void pgconv64_1bit::thread_select_ln340_27_fu_8841_p3() {
    select_ln340_27_fu_8841_p3 = (!xor_ln340_270_fu_8823_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_270_fu_8823_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_184_fu_8798_p2.read());
}

void pgconv64_1bit::thread_select_ln340_28_fu_8929_p3() {
    select_ln340_28_fu_8929_p3 = (!xor_ln340_271_fu_8911_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_271_fu_8911_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_185_fu_8886_p2.read());
}

void pgconv64_1bit::thread_select_ln340_29_fu_9017_p3() {
    select_ln340_29_fu_9017_p3 = (!xor_ln340_272_fu_8999_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_272_fu_8999_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_186_fu_8974_p2.read());
}

void pgconv64_1bit::thread_select_ln340_2_fu_6641_p3() {
    select_ln340_2_fu_6641_p3 = (!xor_ln340_245_fu_6623_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_245_fu_6623_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_159_fu_6598_p2.read());
}

void pgconv64_1bit::thread_select_ln340_30_fu_9105_p3() {
    select_ln340_30_fu_9105_p3 = (!xor_ln340_273_fu_9087_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_273_fu_9087_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_187_fu_9062_p2.read());
}

void pgconv64_1bit::thread_select_ln340_31_fu_9193_p3() {
    select_ln340_31_fu_9193_p3 = (!xor_ln340_274_fu_9175_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_274_fu_9175_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_188_fu_9150_p2.read());
}

void pgconv64_1bit::thread_select_ln340_324_fu_6481_p3() {
    select_ln340_324_fu_6481_p3 = (!or_ln340_fu_6459_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_fu_6459_p2.read()[0].to_bool())? select_ln340_fu_6465_p3.read(): select_ln388_fu_6473_p3.read());
}

void pgconv64_1bit::thread_select_ln340_325_fu_6569_p3() {
    select_ln340_325_fu_6569_p3 = (!or_ln340_352_fu_6547_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_352_fu_6547_p2.read()[0].to_bool())? select_ln340_1_fu_6553_p3.read(): select_ln388_1_fu_6561_p3.read());
}

void pgconv64_1bit::thread_select_ln340_326_fu_6657_p3() {
    select_ln340_326_fu_6657_p3 = (!or_ln340_353_fu_6635_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_353_fu_6635_p2.read()[0].to_bool())? select_ln340_2_fu_6641_p3.read(): select_ln388_2_fu_6649_p3.read());
}

void pgconv64_1bit::thread_select_ln340_327_fu_6745_p3() {
    select_ln340_327_fu_6745_p3 = (!or_ln340_354_fu_6723_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_354_fu_6723_p2.read()[0].to_bool())? select_ln340_3_fu_6729_p3.read(): select_ln388_3_fu_6737_p3.read());
}

void pgconv64_1bit::thread_select_ln340_328_fu_6833_p3() {
    select_ln340_328_fu_6833_p3 = (!or_ln340_355_fu_6811_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_355_fu_6811_p2.read()[0].to_bool())? select_ln340_4_fu_6817_p3.read(): select_ln388_4_fu_6825_p3.read());
}

void pgconv64_1bit::thread_select_ln340_329_fu_6921_p3() {
    select_ln340_329_fu_6921_p3 = (!or_ln340_356_fu_6899_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_356_fu_6899_p2.read()[0].to_bool())? select_ln340_5_fu_6905_p3.read(): select_ln388_5_fu_6913_p3.read());
}

void pgconv64_1bit::thread_select_ln340_330_fu_7009_p3() {
    select_ln340_330_fu_7009_p3 = (!or_ln340_357_fu_6987_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_357_fu_6987_p2.read()[0].to_bool())? select_ln340_6_fu_6993_p3.read(): select_ln388_6_fu_7001_p3.read());
}

void pgconv64_1bit::thread_select_ln340_331_fu_7097_p3() {
    select_ln340_331_fu_7097_p3 = (!or_ln340_358_fu_7075_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_358_fu_7075_p2.read()[0].to_bool())? select_ln340_7_fu_7081_p3.read(): select_ln388_7_fu_7089_p3.read());
}

void pgconv64_1bit::thread_select_ln340_332_fu_7185_p3() {
    select_ln340_332_fu_7185_p3 = (!or_ln340_359_fu_7163_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_359_fu_7163_p2.read()[0].to_bool())? select_ln340_8_fu_7169_p3.read(): select_ln388_8_fu_7177_p3.read());
}

void pgconv64_1bit::thread_select_ln340_333_fu_7273_p3() {
    select_ln340_333_fu_7273_p3 = (!or_ln340_360_fu_7251_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_360_fu_7251_p2.read()[0].to_bool())? select_ln340_9_fu_7257_p3.read(): select_ln388_9_fu_7265_p3.read());
}

void pgconv64_1bit::thread_select_ln340_334_fu_7361_p3() {
    select_ln340_334_fu_7361_p3 = (!or_ln340_361_fu_7339_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_361_fu_7339_p2.read()[0].to_bool())? select_ln340_10_fu_7345_p3.read(): select_ln388_10_fu_7353_p3.read());
}

void pgconv64_1bit::thread_select_ln340_335_fu_7449_p3() {
    select_ln340_335_fu_7449_p3 = (!or_ln340_362_fu_7427_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_362_fu_7427_p2.read()[0].to_bool())? select_ln340_11_fu_7433_p3.read(): select_ln388_11_fu_7441_p3.read());
}

void pgconv64_1bit::thread_select_ln340_336_fu_7537_p3() {
    select_ln340_336_fu_7537_p3 = (!or_ln340_363_fu_7515_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_363_fu_7515_p2.read()[0].to_bool())? select_ln340_12_fu_7521_p3.read(): select_ln388_12_fu_7529_p3.read());
}

void pgconv64_1bit::thread_select_ln340_337_fu_7625_p3() {
    select_ln340_337_fu_7625_p3 = (!or_ln340_364_fu_7603_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_364_fu_7603_p2.read()[0].to_bool())? select_ln340_13_fu_7609_p3.read(): select_ln388_13_fu_7617_p3.read());
}

void pgconv64_1bit::thread_select_ln340_338_fu_7713_p3() {
    select_ln340_338_fu_7713_p3 = (!or_ln340_365_fu_7691_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_365_fu_7691_p2.read()[0].to_bool())? select_ln340_14_fu_7697_p3.read(): select_ln388_14_fu_7705_p3.read());
}

void pgconv64_1bit::thread_select_ln340_339_fu_7801_p3() {
    select_ln340_339_fu_7801_p3 = (!or_ln340_366_fu_7779_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_366_fu_7779_p2.read()[0].to_bool())? select_ln340_15_fu_7785_p3.read(): select_ln388_15_fu_7793_p3.read());
}

void pgconv64_1bit::thread_select_ln340_340_fu_7889_p3() {
    select_ln340_340_fu_7889_p3 = (!or_ln340_367_fu_7867_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_367_fu_7867_p2.read()[0].to_bool())? select_ln340_16_fu_7873_p3.read(): select_ln388_16_fu_7881_p3.read());
}

void pgconv64_1bit::thread_select_ln340_341_fu_7977_p3() {
    select_ln340_341_fu_7977_p3 = (!or_ln340_368_fu_7955_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_368_fu_7955_p2.read()[0].to_bool())? select_ln340_17_fu_7961_p3.read(): select_ln388_17_fu_7969_p3.read());
}

void pgconv64_1bit::thread_select_ln340_342_fu_8065_p3() {
    select_ln340_342_fu_8065_p3 = (!or_ln340_369_fu_8043_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_369_fu_8043_p2.read()[0].to_bool())? select_ln340_18_fu_8049_p3.read(): select_ln388_18_fu_8057_p3.read());
}

void pgconv64_1bit::thread_select_ln340_343_fu_8153_p3() {
    select_ln340_343_fu_8153_p3 = (!or_ln340_370_fu_8131_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_370_fu_8131_p2.read()[0].to_bool())? select_ln340_19_fu_8137_p3.read(): select_ln388_19_fu_8145_p3.read());
}

void pgconv64_1bit::thread_select_ln340_344_fu_8241_p3() {
    select_ln340_344_fu_8241_p3 = (!or_ln340_371_fu_8219_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_371_fu_8219_p2.read()[0].to_bool())? select_ln340_20_fu_8225_p3.read(): select_ln388_20_fu_8233_p3.read());
}

void pgconv64_1bit::thread_select_ln340_345_fu_8329_p3() {
    select_ln340_345_fu_8329_p3 = (!or_ln340_372_fu_8307_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_372_fu_8307_p2.read()[0].to_bool())? select_ln340_21_fu_8313_p3.read(): select_ln388_21_fu_8321_p3.read());
}

void pgconv64_1bit::thread_select_ln340_346_fu_8417_p3() {
    select_ln340_346_fu_8417_p3 = (!or_ln340_373_fu_8395_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_373_fu_8395_p2.read()[0].to_bool())? select_ln340_22_fu_8401_p3.read(): select_ln388_22_fu_8409_p3.read());
}

void pgconv64_1bit::thread_select_ln340_347_fu_8505_p3() {
    select_ln340_347_fu_8505_p3 = (!or_ln340_374_fu_8483_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_374_fu_8483_p2.read()[0].to_bool())? select_ln340_23_fu_8489_p3.read(): select_ln388_23_fu_8497_p3.read());
}

void pgconv64_1bit::thread_select_ln340_348_fu_8593_p3() {
    select_ln340_348_fu_8593_p3 = (!or_ln340_375_fu_8571_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_375_fu_8571_p2.read()[0].to_bool())? select_ln340_24_fu_8577_p3.read(): select_ln388_24_fu_8585_p3.read());
}

void pgconv64_1bit::thread_select_ln340_349_fu_8681_p3() {
    select_ln340_349_fu_8681_p3 = (!or_ln340_376_fu_8659_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_376_fu_8659_p2.read()[0].to_bool())? select_ln340_25_fu_8665_p3.read(): select_ln388_25_fu_8673_p3.read());
}

void pgconv64_1bit::thread_select_ln340_350_fu_8769_p3() {
    select_ln340_350_fu_8769_p3 = (!or_ln340_377_fu_8747_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_377_fu_8747_p2.read()[0].to_bool())? select_ln340_26_fu_8753_p3.read(): select_ln388_26_fu_8761_p3.read());
}

void pgconv64_1bit::thread_select_ln340_351_fu_8857_p3() {
    select_ln340_351_fu_8857_p3 = (!or_ln340_378_fu_8835_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_378_fu_8835_p2.read()[0].to_bool())? select_ln340_27_fu_8841_p3.read(): select_ln388_27_fu_8849_p3.read());
}

void pgconv64_1bit::thread_select_ln340_352_fu_8945_p3() {
    select_ln340_352_fu_8945_p3 = (!or_ln340_379_fu_8923_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_379_fu_8923_p2.read()[0].to_bool())? select_ln340_28_fu_8929_p3.read(): select_ln388_28_fu_8937_p3.read());
}

void pgconv64_1bit::thread_select_ln340_353_fu_9033_p3() {
    select_ln340_353_fu_9033_p3 = (!or_ln340_380_fu_9011_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_380_fu_9011_p2.read()[0].to_bool())? select_ln340_29_fu_9017_p3.read(): select_ln388_29_fu_9025_p3.read());
}

void pgconv64_1bit::thread_select_ln340_354_fu_9121_p3() {
    select_ln340_354_fu_9121_p3 = (!or_ln340_381_fu_9099_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_381_fu_9099_p2.read()[0].to_bool())? select_ln340_30_fu_9105_p3.read(): select_ln388_30_fu_9113_p3.read());
}

void pgconv64_1bit::thread_select_ln340_355_fu_9209_p3() {
    select_ln340_355_fu_9209_p3 = (!or_ln340_382_fu_9187_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_382_fu_9187_p2.read()[0].to_bool())? select_ln340_31_fu_9193_p3.read(): select_ln388_31_fu_9201_p3.read());
}

void pgconv64_1bit::thread_select_ln340_3_fu_6729_p3() {
    select_ln340_3_fu_6729_p3 = (!xor_ln340_246_fu_6711_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_246_fu_6711_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_160_fu_6686_p2.read());
}

void pgconv64_1bit::thread_select_ln340_4_fu_6817_p3() {
    select_ln340_4_fu_6817_p3 = (!xor_ln340_247_fu_6799_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_247_fu_6799_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_161_fu_6774_p2.read());
}

void pgconv64_1bit::thread_select_ln340_5_fu_6905_p3() {
    select_ln340_5_fu_6905_p3 = (!xor_ln340_248_fu_6887_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_248_fu_6887_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_162_fu_6862_p2.read());
}

void pgconv64_1bit::thread_select_ln340_6_fu_6993_p3() {
    select_ln340_6_fu_6993_p3 = (!xor_ln340_249_fu_6975_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_249_fu_6975_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_163_fu_6950_p2.read());
}

void pgconv64_1bit::thread_select_ln340_7_fu_7081_p3() {
    select_ln340_7_fu_7081_p3 = (!xor_ln340_250_fu_7063_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_250_fu_7063_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_164_fu_7038_p2.read());
}

void pgconv64_1bit::thread_select_ln340_8_fu_7169_p3() {
    select_ln340_8_fu_7169_p3 = (!xor_ln340_251_fu_7151_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_251_fu_7151_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_165_fu_7126_p2.read());
}

void pgconv64_1bit::thread_select_ln340_9_fu_7257_p3() {
    select_ln340_9_fu_7257_p3 = (!xor_ln340_252_fu_7239_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_252_fu_7239_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_166_fu_7214_p2.read());
}

void pgconv64_1bit::thread_select_ln340_fu_6465_p3() {
    select_ln340_fu_6465_p3 = (!xor_ln340_243_fu_6447_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_243_fu_6447_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_fu_6422_p2.read());
}

void pgconv64_1bit::thread_select_ln388_10_fu_7353_p3() {
    select_ln388_10_fu_7353_p3 = (!and_ln786_267_fu_7321_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_267_fu_7321_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_167_fu_7302_p2.read());
}

void pgconv64_1bit::thread_select_ln388_11_fu_7441_p3() {
    select_ln388_11_fu_7441_p3 = (!and_ln786_268_fu_7409_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_268_fu_7409_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_168_fu_7390_p2.read());
}

void pgconv64_1bit::thread_select_ln388_12_fu_7529_p3() {
    select_ln388_12_fu_7529_p3 = (!and_ln786_269_fu_7497_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_269_fu_7497_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_169_fu_7478_p2.read());
}

void pgconv64_1bit::thread_select_ln388_13_fu_7617_p3() {
    select_ln388_13_fu_7617_p3 = (!and_ln786_270_fu_7585_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_270_fu_7585_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_170_fu_7566_p2.read());
}

void pgconv64_1bit::thread_select_ln388_14_fu_7705_p3() {
    select_ln388_14_fu_7705_p3 = (!and_ln786_271_fu_7673_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_271_fu_7673_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_171_fu_7654_p2.read());
}

void pgconv64_1bit::thread_select_ln388_15_fu_7793_p3() {
    select_ln388_15_fu_7793_p3 = (!and_ln786_272_fu_7761_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_272_fu_7761_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_172_fu_7742_p2.read());
}

void pgconv64_1bit::thread_select_ln388_16_fu_7881_p3() {
    select_ln388_16_fu_7881_p3 = (!and_ln786_273_fu_7849_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_273_fu_7849_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_173_fu_7830_p2.read());
}

void pgconv64_1bit::thread_select_ln388_17_fu_7969_p3() {
    select_ln388_17_fu_7969_p3 = (!and_ln786_274_fu_7937_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_274_fu_7937_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_174_fu_7918_p2.read());
}

void pgconv64_1bit::thread_select_ln388_18_fu_8057_p3() {
    select_ln388_18_fu_8057_p3 = (!and_ln786_275_fu_8025_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_275_fu_8025_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_175_fu_8006_p2.read());
}

void pgconv64_1bit::thread_select_ln388_19_fu_8145_p3() {
    select_ln388_19_fu_8145_p3 = (!and_ln786_276_fu_8113_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_276_fu_8113_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_176_fu_8094_p2.read());
}

void pgconv64_1bit::thread_select_ln388_1_fu_6561_p3() {
    select_ln388_1_fu_6561_p3 = (!and_ln786_258_fu_6529_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_258_fu_6529_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_158_fu_6510_p2.read());
}

void pgconv64_1bit::thread_select_ln388_20_fu_8233_p3() {
    select_ln388_20_fu_8233_p3 = (!and_ln786_277_fu_8201_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_277_fu_8201_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_177_fu_8182_p2.read());
}

void pgconv64_1bit::thread_select_ln388_21_fu_8321_p3() {
    select_ln388_21_fu_8321_p3 = (!and_ln786_278_fu_8289_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_278_fu_8289_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_178_fu_8270_p2.read());
}

void pgconv64_1bit::thread_select_ln388_22_fu_8409_p3() {
    select_ln388_22_fu_8409_p3 = (!and_ln786_279_fu_8377_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_279_fu_8377_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_179_fu_8358_p2.read());
}

void pgconv64_1bit::thread_select_ln388_23_fu_8497_p3() {
    select_ln388_23_fu_8497_p3 = (!and_ln786_280_fu_8465_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_280_fu_8465_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_180_fu_8446_p2.read());
}

void pgconv64_1bit::thread_select_ln388_24_fu_8585_p3() {
    select_ln388_24_fu_8585_p3 = (!and_ln786_281_fu_8553_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_281_fu_8553_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_181_fu_8534_p2.read());
}

void pgconv64_1bit::thread_select_ln388_25_fu_8673_p3() {
    select_ln388_25_fu_8673_p3 = (!and_ln786_282_fu_8641_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_282_fu_8641_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_182_fu_8622_p2.read());
}

void pgconv64_1bit::thread_select_ln388_26_fu_8761_p3() {
    select_ln388_26_fu_8761_p3 = (!and_ln786_283_fu_8729_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_283_fu_8729_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_183_fu_8710_p2.read());
}

void pgconv64_1bit::thread_select_ln388_27_fu_8849_p3() {
    select_ln388_27_fu_8849_p3 = (!and_ln786_284_fu_8817_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_284_fu_8817_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_184_fu_8798_p2.read());
}

void pgconv64_1bit::thread_select_ln388_28_fu_8937_p3() {
    select_ln388_28_fu_8937_p3 = (!and_ln786_285_fu_8905_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_285_fu_8905_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_185_fu_8886_p2.read());
}

void pgconv64_1bit::thread_select_ln388_29_fu_9025_p3() {
    select_ln388_29_fu_9025_p3 = (!and_ln786_286_fu_8993_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_286_fu_8993_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_186_fu_8974_p2.read());
}

void pgconv64_1bit::thread_select_ln388_2_fu_6649_p3() {
    select_ln388_2_fu_6649_p3 = (!and_ln786_259_fu_6617_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_259_fu_6617_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_159_fu_6598_p2.read());
}

void pgconv64_1bit::thread_select_ln388_30_fu_9113_p3() {
    select_ln388_30_fu_9113_p3 = (!and_ln786_287_fu_9081_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_287_fu_9081_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_187_fu_9062_p2.read());
}

void pgconv64_1bit::thread_select_ln388_31_fu_9201_p3() {
    select_ln388_31_fu_9201_p3 = (!and_ln786_288_fu_9169_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_288_fu_9169_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_188_fu_9150_p2.read());
}

void pgconv64_1bit::thread_select_ln388_3_fu_6737_p3() {
    select_ln388_3_fu_6737_p3 = (!and_ln786_260_fu_6705_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_260_fu_6705_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_160_fu_6686_p2.read());
}

void pgconv64_1bit::thread_select_ln388_4_fu_6825_p3() {
    select_ln388_4_fu_6825_p3 = (!and_ln786_261_fu_6793_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_261_fu_6793_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_161_fu_6774_p2.read());
}

void pgconv64_1bit::thread_select_ln388_5_fu_6913_p3() {
    select_ln388_5_fu_6913_p3 = (!and_ln786_262_fu_6881_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_262_fu_6881_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_162_fu_6862_p2.read());
}

void pgconv64_1bit::thread_select_ln388_6_fu_7001_p3() {
    select_ln388_6_fu_7001_p3 = (!and_ln786_263_fu_6969_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_263_fu_6969_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_163_fu_6950_p2.read());
}

void pgconv64_1bit::thread_select_ln388_7_fu_7089_p3() {
    select_ln388_7_fu_7089_p3 = (!and_ln786_264_fu_7057_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_264_fu_7057_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_164_fu_7038_p2.read());
}

void pgconv64_1bit::thread_select_ln388_8_fu_7177_p3() {
    select_ln388_8_fu_7177_p3 = (!and_ln786_265_fu_7145_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_265_fu_7145_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_165_fu_7126_p2.read());
}

void pgconv64_1bit::thread_select_ln388_9_fu_7265_p3() {
    select_ln388_9_fu_7265_p3 = (!and_ln786_266_fu_7233_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_266_fu_7233_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_166_fu_7214_p2.read());
}

void pgconv64_1bit::thread_select_ln388_fu_6473_p3() {
    select_ln388_fu_6473_p3 = (!and_ln786_fu_6441_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_fu_6441_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_fu_6422_p2.read());
}

void pgconv64_1bit::thread_select_ln477_fu_5784_p3() {
    select_ln477_fu_5784_p3 = (!icmp_ln500_fu_5770_p2.read()[0].is_01())? sc_lv<6>(): ((icmp_ln500_fu_5770_p2.read()[0].to_bool())? ap_const_lv6_31: ap_const_lv6_10);
}

void pgconv64_1bit::thread_select_ln500_2_fu_5913_p3() {
    select_ln500_2_fu_5913_p3 = (!icmp_ln500_reg_9217.read()[0].is_01())? sc_lv<4>(): ((icmp_ln500_reg_9217.read()[0].to_bool())? zext_ln510_1_fu_5895_p1.read(): or_ln513_1_fu_5907_p2.read());
}

void pgconv64_1bit::thread_select_ln500_fu_5776_p3() {
    select_ln500_fu_5776_p3 = (!icmp_ln500_fu_5770_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln500_fu_5770_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_4);
}

void pgconv64_1bit::thread_select_ln505_1_fu_5920_p3() {
    select_ln505_1_fu_5920_p3 = (!icmp_ln506_fu_5876_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln506_fu_5876_p2.read()[0].to_bool())? select_ln500_2_fu_5913_p3.read(): row_2_fu_5816_p3.read());
}

void pgconv64_1bit::thread_select_ln505_2_fu_5934_p3() {
    select_ln505_2_fu_5934_p3 = (!icmp_ln506_fu_5876_p2.read()[0].is_01())? sc_lv<1>(): ((icmp_ln506_fu_5876_p2.read()[0].to_bool())? icmp_ln538_7_fu_5928_p2.read(): icmp_ln538_fu_5823_p2.read());
}

void pgconv64_1bit::thread_select_ln505_3_fu_5948_p3() {
    select_ln505_3_fu_5948_p3 = (!icmp_ln506_fu_5876_p2.read()[0].is_01())? sc_lv<1>(): ((icmp_ln506_fu_5876_p2.read()[0].to_bool())? icmp_ln538_8_fu_5942_p2.read(): icmp_ln538_1_fu_5829_p2.read());
}

void pgconv64_1bit::thread_select_ln505_4_fu_5962_p3() {
    select_ln505_4_fu_5962_p3 = (!icmp_ln506_fu_5876_p2.read()[0].is_01())? sc_lv<1>(): ((icmp_ln506_fu_5876_p2.read()[0].to_bool())? icmp_ln538_9_fu_5956_p2.read(): icmp_ln538_2_fu_5835_p2.read());
}

void pgconv64_1bit::thread_select_ln505_5_fu_5976_p3() {
    select_ln505_5_fu_5976_p3 = (!icmp_ln506_fu_5876_p2.read()[0].is_01())? sc_lv<1>(): ((icmp_ln506_fu_5876_p2.read()[0].to_bool())? icmp_ln538_10_fu_5970_p2.read(): icmp_ln538_3_fu_5841_p2.read());
}

void pgconv64_1bit::thread_select_ln505_6_fu_5990_p3() {
    select_ln505_6_fu_5990_p3 = (!icmp_ln506_fu_5876_p2.read()[0].is_01())? sc_lv<1>(): ((icmp_ln506_fu_5876_p2.read()[0].to_bool())? icmp_ln538_11_fu_5984_p2.read(): icmp_ln538_4_fu_5847_p2.read());
}

void pgconv64_1bit::thread_select_ln505_7_fu_6004_p3() {
    select_ln505_7_fu_6004_p3 = (!icmp_ln506_fu_5876_p2.read()[0].is_01())? sc_lv<1>(): ((icmp_ln506_fu_5876_p2.read()[0].to_bool())? icmp_ln538_12_fu_5998_p2.read(): icmp_ln538_5_fu_5853_p2.read());
}

void pgconv64_1bit::thread_select_ln505_8_fu_6018_p3() {
    select_ln505_8_fu_6018_p3 = (!icmp_ln506_fu_5876_p2.read()[0].is_01())? sc_lv<1>(): ((icmp_ln506_fu_5876_p2.read()[0].to_bool())? icmp_ln538_13_fu_6012_p2.read(): icmp_ln538_6_fu_5859_p2.read());
}

void pgconv64_1bit::thread_select_ln505_9_fu_6026_p3() {
    select_ln505_9_fu_6026_p3 = (!icmp_ln506_fu_5876_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln506_fu_5876_p2.read()[0].to_bool())? row0_fu_5792_p2.read(): ap_phi_mux_row0_0_phi_fu_4528_p4.read());
}

void pgconv64_1bit::thread_select_ln505_fu_5881_p3() {
    select_ln505_fu_5881_p3 = (!icmp_ln506_fu_5876_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln506_fu_5876_p2.read()[0].to_bool())? ap_const_lv3_0: ap_phi_mux_col0_0_phi_fu_4539_p4.read());
}

void pgconv64_1bit::thread_select_ln538_1_fu_6178_p3() {
    select_ln538_1_fu_6178_p3 = (!select_ln505_3_reg_10066.read()[0].is_01())? sc_lv<64>(): ((select_ln505_3_reg_10066.read()[0].to_bool())? bottom_2_V_q0.read(): select_ln538_fu_6171_p3.read());
}

void pgconv64_1bit::thread_select_ln538_2_fu_6185_p3() {
    select_ln538_2_fu_6185_p3 = (!select_ln505_4_reg_10073.read()[0].is_01())? sc_lv<64>(): ((select_ln505_4_reg_10073.read()[0].to_bool())? bottom_3_V_q0.read(): select_ln538_1_fu_6178_p3.read());
}

void pgconv64_1bit::thread_select_ln538_3_fu_6192_p3() {
    select_ln538_3_fu_6192_p3 = (!select_ln505_5_reg_10080.read()[0].is_01())? sc_lv<64>(): ((select_ln505_5_reg_10080.read()[0].to_bool())? bottom_4_V_q0.read(): select_ln538_2_fu_6185_p3.read());
}

void pgconv64_1bit::thread_select_ln538_4_fu_6199_p3() {
    select_ln538_4_fu_6199_p3 = (!select_ln505_6_reg_10087.read()[0].is_01())? sc_lv<64>(): ((select_ln505_6_reg_10087.read()[0].to_bool())? bottom_5_V_q0.read(): select_ln538_3_fu_6192_p3.read());
}

void pgconv64_1bit::thread_select_ln538_5_fu_6206_p3() {
    select_ln538_5_fu_6206_p3 = (!select_ln505_7_reg_10094.read()[0].is_01())? sc_lv<64>(): ((select_ln505_7_reg_10094.read()[0].to_bool())? bottom_6_V_q0.read(): select_ln538_4_fu_6199_p3.read());
}

void pgconv64_1bit::thread_select_ln538_6_fu_6302_p3() {
    select_ln538_6_fu_6302_p3 = (!select_ln505_8_reg_10101.read()[0].is_01())? sc_lv<64>(): ((select_ln505_8_reg_10101.read()[0].to_bool())? reg_5606.read(): select_ln538_5_reg_10379.read());
}

void pgconv64_1bit::thread_select_ln538_fu_6171_p3() {
    select_ln538_fu_6171_p3 = (!select_ln505_2_reg_10059.read()[0].is_01())? sc_lv<64>(): ((select_ln505_2_reg_10059.read()[0].to_bool())? bottom_1_V_q0.read(): bottom_8_V_q0.read());
}

void pgconv64_1bit::thread_select_ln539_1_fu_6220_p3() {
    select_ln539_1_fu_6220_p3 = (!select_ln505_3_reg_10066.read()[0].is_01())? sc_lv<64>(): ((select_ln505_3_reg_10066.read()[0].to_bool())? bottom_2_V_q1.read(): select_ln539_fu_6213_p3.read());
}

void pgconv64_1bit::thread_select_ln539_2_fu_6227_p3() {
    select_ln539_2_fu_6227_p3 = (!select_ln505_4_reg_10073.read()[0].is_01())? sc_lv<64>(): ((select_ln505_4_reg_10073.read()[0].to_bool())? bottom_3_V_q1.read(): select_ln539_1_fu_6220_p3.read());
}

void pgconv64_1bit::thread_select_ln539_3_fu_6234_p3() {
    select_ln539_3_fu_6234_p3 = (!select_ln505_5_reg_10080.read()[0].is_01())? sc_lv<64>(): ((select_ln505_5_reg_10080.read()[0].to_bool())? bottom_4_V_q1.read(): select_ln539_2_fu_6227_p3.read());
}

void pgconv64_1bit::thread_select_ln539_4_fu_6241_p3() {
    select_ln539_4_fu_6241_p3 = (!select_ln505_6_reg_10087.read()[0].is_01())? sc_lv<64>(): ((select_ln505_6_reg_10087.read()[0].to_bool())? bottom_5_V_q1.read(): select_ln539_3_fu_6234_p3.read());
}

void pgconv64_1bit::thread_select_ln539_5_fu_6248_p3() {
    select_ln539_5_fu_6248_p3 = (!select_ln505_7_reg_10094.read()[0].is_01())? sc_lv<64>(): ((select_ln505_7_reg_10094.read()[0].to_bool())? bottom_6_V_q1.read(): select_ln539_4_fu_6241_p3.read());
}

void pgconv64_1bit::thread_select_ln539_6_fu_6308_p3() {
    select_ln539_6_fu_6308_p3 = (!select_ln505_8_reg_10101.read()[0].is_01())? sc_lv<64>(): ((select_ln505_8_reg_10101.read()[0].to_bool())? bottom_7_V_load_2_reg_10315.read(): select_ln539_5_reg_10384.read());
}

void pgconv64_1bit::thread_select_ln539_fu_6213_p3() {
    select_ln539_fu_6213_p3 = (!select_ln505_2_reg_10059.read()[0].is_01())? sc_lv<64>(): ((select_ln505_2_reg_10059.read()[0].to_bool())? bottom_1_V_q1.read(): bottom_8_V_q1.read());
}

void pgconv64_1bit::thread_select_ln540_1_fu_6320_p3() {
    select_ln540_1_fu_6320_p3 = (!select_ln505_3_reg_10066.read()[0].is_01())? sc_lv<64>(): ((select_ln505_3_reg_10066.read()[0].to_bool())? bottom_2_V_q0.read(): select_ln540_fu_6313_p3.read());
}

void pgconv64_1bit::thread_select_ln540_2_fu_6327_p3() {
    select_ln540_2_fu_6327_p3 = (!select_ln505_4_reg_10073.read()[0].is_01())? sc_lv<64>(): ((select_ln505_4_reg_10073.read()[0].to_bool())? bottom_3_V_q0.read(): select_ln540_1_fu_6320_p3.read());
}

void pgconv64_1bit::thread_select_ln540_3_fu_6334_p3() {
    select_ln540_3_fu_6334_p3 = (!select_ln505_5_reg_10080.read()[0].is_01())? sc_lv<64>(): ((select_ln505_5_reg_10080.read()[0].to_bool())? bottom_4_V_q0.read(): select_ln540_2_fu_6327_p3.read());
}

void pgconv64_1bit::thread_select_ln540_4_fu_6341_p3() {
    select_ln540_4_fu_6341_p3 = (!select_ln505_6_reg_10087.read()[0].is_01())? sc_lv<64>(): ((select_ln505_6_reg_10087.read()[0].to_bool())? bottom_5_V_q0.read(): select_ln540_3_fu_6334_p3.read());
}

void pgconv64_1bit::thread_select_ln540_5_fu_6348_p3() {
    select_ln540_5_fu_6348_p3 = (!select_ln505_7_reg_10094.read()[0].is_01())? sc_lv<64>(): ((select_ln505_7_reg_10094.read()[0].to_bool())? bottom_6_V_q0.read(): select_ln540_4_fu_6341_p3.read());
}

void pgconv64_1bit::thread_select_ln540_6_fu_6355_p3() {
    select_ln540_6_fu_6355_p3 = (!select_ln505_8_reg_10101.read()[0].is_01())? sc_lv<64>(): ((select_ln505_8_reg_10101.read()[0].to_bool())? reg_5606.read(): select_ln540_5_reg_10836.read());
}

void pgconv64_1bit::thread_select_ln540_fu_6313_p3() {
    select_ln540_fu_6313_p3 = (!select_ln505_2_reg_10059.read()[0].is_01())? sc_lv<64>(): ((select_ln505_2_reg_10059.read()[0].to_bool())? bottom_1_V_q0.read(): bottom_8_V_q0.read());
}

void pgconv64_1bit::thread_sext_ln532_fu_6086_p1() {
    sext_ln532_fu_6086_p1 = esl_sext<64,5>(add_ln532_fu_6080_p2.read());
}

void pgconv64_1bit::thread_sext_ln703_190_fu_6404_p1() {
    sext_ln703_190_fu_6404_p1 = esl_sext<15,14>(reg_5738.read());
}

void pgconv64_1bit::thread_sext_ln703_191_fu_6489_p1() {
    sext_ln703_191_fu_6489_p1 = esl_sext<15,14>(top_1_V_load_reg_13773.read());
}

void pgconv64_1bit::thread_sext_ln703_192_fu_6492_p1() {
    sext_ln703_192_fu_6492_p1 = esl_sext<15,14>(reg_5742.read());
}

void pgconv64_1bit::thread_sext_ln703_193_fu_6577_p1() {
    sext_ln703_193_fu_6577_p1 = esl_sext<15,14>(top_2_V_load_reg_13779.read());
}

void pgconv64_1bit::thread_sext_ln703_194_fu_6580_p1() {
    sext_ln703_194_fu_6580_p1 = esl_sext<15,14>(reg_5746.read());
}

void pgconv64_1bit::thread_sext_ln703_195_fu_6665_p1() {
    sext_ln703_195_fu_6665_p1 = esl_sext<15,14>(top_3_V_load_reg_13785.read());
}

void pgconv64_1bit::thread_sext_ln703_196_fu_6668_p1() {
    sext_ln703_196_fu_6668_p1 = esl_sext<15,14>(reg_5750.read());
}

void pgconv64_1bit::thread_sext_ln703_197_fu_6753_p1() {
    sext_ln703_197_fu_6753_p1 = esl_sext<15,14>(top_4_V_load_reg_13791.read());
}

void pgconv64_1bit::thread_sext_ln703_198_fu_6756_p1() {
    sext_ln703_198_fu_6756_p1 = esl_sext<15,14>(reg_5754.read());
}

void pgconv64_1bit::thread_sext_ln703_199_fu_6841_p1() {
    sext_ln703_199_fu_6841_p1 = esl_sext<15,14>(top_5_V_load_reg_13797.read());
}

void pgconv64_1bit::thread_sext_ln703_200_fu_6844_p1() {
    sext_ln703_200_fu_6844_p1 = esl_sext<15,14>(reg_5758.read());
}

void pgconv64_1bit::thread_sext_ln703_201_fu_6929_p1() {
    sext_ln703_201_fu_6929_p1 = esl_sext<15,14>(top_6_V_load_reg_13803.read());
}

void pgconv64_1bit::thread_sext_ln703_202_fu_6932_p1() {
    sext_ln703_202_fu_6932_p1 = esl_sext<15,14>(reg_5762.read());
}

void pgconv64_1bit::thread_sext_ln703_203_fu_7017_p1() {
    sext_ln703_203_fu_7017_p1 = esl_sext<15,14>(top_7_V_load_reg_13864.read());
}

void pgconv64_1bit::thread_sext_ln703_204_fu_7020_p1() {
    sext_ln703_204_fu_7020_p1 = esl_sext<15,14>(reg_5738.read());
}

void pgconv64_1bit::thread_sext_ln703_205_fu_7105_p1() {
    sext_ln703_205_fu_7105_p1 = esl_sext<15,14>(top_8_V_load_reg_13870.read());
}

void pgconv64_1bit::thread_sext_ln703_206_fu_7108_p1() {
    sext_ln703_206_fu_7108_p1 = esl_sext<15,14>(reg_5742.read());
}

void pgconv64_1bit::thread_sext_ln703_207_fu_7193_p1() {
    sext_ln703_207_fu_7193_p1 = esl_sext<15,14>(top_9_V_load_reg_13876.read());
}

void pgconv64_1bit::thread_sext_ln703_208_fu_7196_p1() {
    sext_ln703_208_fu_7196_p1 = esl_sext<15,14>(reg_5746.read());
}

void pgconv64_1bit::thread_sext_ln703_209_fu_7281_p1() {
    sext_ln703_209_fu_7281_p1 = esl_sext<15,14>(top_10_V_load_reg_13882.read());
}

void pgconv64_1bit::thread_sext_ln703_210_fu_7284_p1() {
    sext_ln703_210_fu_7284_p1 = esl_sext<15,14>(reg_5750.read());
}

void pgconv64_1bit::thread_sext_ln703_211_fu_7369_p1() {
    sext_ln703_211_fu_7369_p1 = esl_sext<15,14>(top_11_V_load_reg_13888.read());
}

void pgconv64_1bit::thread_sext_ln703_212_fu_7372_p1() {
    sext_ln703_212_fu_7372_p1 = esl_sext<15,14>(reg_5754.read());
}

void pgconv64_1bit::thread_sext_ln703_213_fu_7457_p1() {
    sext_ln703_213_fu_7457_p1 = esl_sext<15,14>(top_12_V_load_reg_13894.read());
}

void pgconv64_1bit::thread_sext_ln703_214_fu_7460_p1() {
    sext_ln703_214_fu_7460_p1 = esl_sext<15,14>(reg_5758.read());
}

void pgconv64_1bit::thread_sext_ln703_215_fu_7545_p1() {
    sext_ln703_215_fu_7545_p1 = esl_sext<15,14>(top_13_V_load_reg_13900.read());
}

void pgconv64_1bit::thread_sext_ln703_216_fu_7548_p1() {
    sext_ln703_216_fu_7548_p1 = esl_sext<15,14>(reg_5762.read());
}

void pgconv64_1bit::thread_sext_ln703_217_fu_7633_p1() {
    sext_ln703_217_fu_7633_p1 = esl_sext<15,14>(top_14_V_load_reg_13996.read());
}

void pgconv64_1bit::thread_sext_ln703_218_fu_7636_p1() {
    sext_ln703_218_fu_7636_p1 = esl_sext<15,14>(reg_5738.read());
}

void pgconv64_1bit::thread_sext_ln703_219_fu_7721_p1() {
    sext_ln703_219_fu_7721_p1 = esl_sext<15,14>(top_15_V_load_reg_14002.read());
}

void pgconv64_1bit::thread_sext_ln703_220_fu_7724_p1() {
    sext_ln703_220_fu_7724_p1 = esl_sext<15,14>(reg_5742.read());
}

void pgconv64_1bit::thread_sext_ln703_221_fu_7809_p1() {
    sext_ln703_221_fu_7809_p1 = esl_sext<15,14>(top_16_V_load_reg_14008.read());
}

void pgconv64_1bit::thread_sext_ln703_222_fu_7812_p1() {
    sext_ln703_222_fu_7812_p1 = esl_sext<15,14>(reg_5746.read());
}

void pgconv64_1bit::thread_sext_ln703_223_fu_7897_p1() {
    sext_ln703_223_fu_7897_p1 = esl_sext<15,14>(top_17_V_load_reg_14014.read());
}

void pgconv64_1bit::thread_sext_ln703_224_fu_7900_p1() {
    sext_ln703_224_fu_7900_p1 = esl_sext<15,14>(reg_5750.read());
}

void pgconv64_1bit::thread_sext_ln703_225_fu_7985_p1() {
    sext_ln703_225_fu_7985_p1 = esl_sext<15,14>(top_18_V_load_reg_14020.read());
}

void pgconv64_1bit::thread_sext_ln703_226_fu_7988_p1() {
    sext_ln703_226_fu_7988_p1 = esl_sext<15,14>(reg_5754.read());
}

void pgconv64_1bit::thread_sext_ln703_227_fu_8073_p1() {
    sext_ln703_227_fu_8073_p1 = esl_sext<15,14>(top_19_V_load_reg_14026.read());
}

void pgconv64_1bit::thread_sext_ln703_228_fu_8076_p1() {
    sext_ln703_228_fu_8076_p1 = esl_sext<15,14>(reg_5758.read());
}

void pgconv64_1bit::thread_sext_ln703_229_fu_8161_p1() {
    sext_ln703_229_fu_8161_p1 = esl_sext<15,14>(top_20_V_load_reg_14032.read());
}

void pgconv64_1bit::thread_sext_ln703_230_fu_8164_p1() {
    sext_ln703_230_fu_8164_p1 = esl_sext<15,14>(reg_5762.read());
}

void pgconv64_1bit::thread_sext_ln703_231_fu_8249_p1() {
    sext_ln703_231_fu_8249_p1 = esl_sext<15,14>(top_21_V_load_reg_14073.read());
}

void pgconv64_1bit::thread_sext_ln703_232_fu_8252_p1() {
    sext_ln703_232_fu_8252_p1 = esl_sext<15,14>(reg_5738.read());
}

void pgconv64_1bit::thread_sext_ln703_233_fu_8337_p1() {
    sext_ln703_233_fu_8337_p1 = esl_sext<15,14>(top_22_V_load_reg_14079.read());
}

void pgconv64_1bit::thread_sext_ln703_234_fu_8340_p1() {
    sext_ln703_234_fu_8340_p1 = esl_sext<15,14>(reg_5742.read());
}

void pgconv64_1bit::thread_sext_ln703_235_fu_8425_p1() {
    sext_ln703_235_fu_8425_p1 = esl_sext<15,14>(top_23_V_load_reg_14085.read());
}

void pgconv64_1bit::thread_sext_ln703_236_fu_8428_p1() {
    sext_ln703_236_fu_8428_p1 = esl_sext<15,14>(reg_5746.read());
}

void pgconv64_1bit::thread_sext_ln703_237_fu_8513_p1() {
    sext_ln703_237_fu_8513_p1 = esl_sext<15,14>(top_24_V_load_reg_14091.read());
}

void pgconv64_1bit::thread_sext_ln703_238_fu_8516_p1() {
    sext_ln703_238_fu_8516_p1 = esl_sext<15,14>(reg_5750.read());
}

void pgconv64_1bit::thread_sext_ln703_239_fu_8601_p1() {
    sext_ln703_239_fu_8601_p1 = esl_sext<15,14>(top_25_V_load_reg_14097.read());
}

void pgconv64_1bit::thread_sext_ln703_240_fu_8604_p1() {
    sext_ln703_240_fu_8604_p1 = esl_sext<15,14>(reg_5754.read());
}

void pgconv64_1bit::thread_sext_ln703_241_fu_8689_p1() {
    sext_ln703_241_fu_8689_p1 = esl_sext<15,14>(top_26_V_load_reg_14103.read());
}

void pgconv64_1bit::thread_sext_ln703_242_fu_8692_p1() {
    sext_ln703_242_fu_8692_p1 = esl_sext<15,14>(reg_5758.read());
}

void pgconv64_1bit::thread_sext_ln703_243_fu_8777_p1() {
    sext_ln703_243_fu_8777_p1 = esl_sext<15,14>(top_27_V_load_reg_14109.read());
}

void pgconv64_1bit::thread_sext_ln703_244_fu_8780_p1() {
    sext_ln703_244_fu_8780_p1 = esl_sext<15,14>(reg_5762.read());
}

void pgconv64_1bit::thread_sext_ln703_245_fu_8865_p1() {
    sext_ln703_245_fu_8865_p1 = esl_sext<15,14>(top_28_V_load_reg_14150.read());
}

void pgconv64_1bit::thread_sext_ln703_246_fu_8868_p1() {
    sext_ln703_246_fu_8868_p1 = esl_sext<15,14>(reg_5738.read());
}

void pgconv64_1bit::thread_sext_ln703_247_fu_8953_p1() {
    sext_ln703_247_fu_8953_p1 = esl_sext<15,14>(top_29_V_load_reg_14156.read());
}

void pgconv64_1bit::thread_sext_ln703_248_fu_8956_p1() {
    sext_ln703_248_fu_8956_p1 = esl_sext<15,14>(reg_5742.read());
}

void pgconv64_1bit::thread_sext_ln703_249_fu_9041_p1() {
    sext_ln703_249_fu_9041_p1 = esl_sext<15,14>(top_30_V_load_reg_14162.read());
}

void pgconv64_1bit::thread_sext_ln703_250_fu_9044_p1() {
    sext_ln703_250_fu_9044_p1 = esl_sext<15,14>(reg_5746.read());
}

void pgconv64_1bit::thread_sext_ln703_251_fu_9129_p1() {
    sext_ln703_251_fu_9129_p1 = esl_sext<15,14>(top_31_V_load_reg_14168.read());
}

void pgconv64_1bit::thread_sext_ln703_252_fu_9132_p1() {
    sext_ln703_252_fu_9132_p1 = esl_sext<15,14>(reg_5750.read());
}

void pgconv64_1bit::thread_sext_ln703_fu_6401_p1() {
    sext_ln703_fu_6401_p1 = esl_sext<15,14>(top_0_V_load_reg_13767.read());
}

void pgconv64_1bit::thread_shl_ln513_mid1_fu_5899_p3() {
    shl_ln513_mid1_fu_5899_p3 = esl_concat<3,1>(row0_fu_5792_p2.read(), ap_const_lv1_0);
}

void pgconv64_1bit::thread_shl_ln6_fu_6043_p3() {
    shl_ln6_fu_6043_p3 = esl_concat<3,1>(select_ln505_reg_10043.read(), ap_const_lv1_0);
}

void pgconv64_1bit::thread_shl_ln_fu_5802_p3() {
    shl_ln_fu_5802_p3 = esl_concat<3,1>(ap_phi_mux_row0_0_phi_fu_4528_p4.read(), ap_const_lv1_0);
}

void pgconv64_1bit::thread_tmp_12_fu_6364_p3() {
    tmp_12_fu_6364_p3 = esl_concat<4,3>(select_ln505_1_reg_10048_pp0_iter3_reg.read(), ap_const_lv3_0);
}

void pgconv64_1bit::thread_tmp_773_fu_6414_p3() {
    tmp_773_fu_6414_p3 = add_ln1192_fu_6408_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_774_fu_6427_p3() {
    tmp_774_fu_6427_p3 = add_ln703_fu_6422_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_775_fu_6502_p3() {
    tmp_775_fu_6502_p3 = add_ln1192_160_fu_6496_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_776_fu_6515_p3() {
    tmp_776_fu_6515_p3 = add_ln703_158_fu_6510_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_777_fu_6590_p3() {
    tmp_777_fu_6590_p3 = add_ln1192_161_fu_6584_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_778_fu_6603_p3() {
    tmp_778_fu_6603_p3 = add_ln703_159_fu_6598_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_779_fu_6678_p3() {
    tmp_779_fu_6678_p3 = add_ln1192_162_fu_6672_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_780_fu_6691_p3() {
    tmp_780_fu_6691_p3 = add_ln703_160_fu_6686_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_781_fu_6766_p3() {
    tmp_781_fu_6766_p3 = add_ln1192_163_fu_6760_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_782_fu_6779_p3() {
    tmp_782_fu_6779_p3 = add_ln703_161_fu_6774_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_783_fu_6854_p3() {
    tmp_783_fu_6854_p3 = add_ln1192_164_fu_6848_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_784_fu_6867_p3() {
    tmp_784_fu_6867_p3 = add_ln703_162_fu_6862_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_785_fu_6942_p3() {
    tmp_785_fu_6942_p3 = add_ln1192_165_fu_6936_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_786_fu_6955_p3() {
    tmp_786_fu_6955_p3 = add_ln703_163_fu_6950_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_787_fu_7030_p3() {
    tmp_787_fu_7030_p3 = add_ln1192_166_fu_7024_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_788_fu_7043_p3() {
    tmp_788_fu_7043_p3 = add_ln703_164_fu_7038_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_789_fu_7118_p3() {
    tmp_789_fu_7118_p3 = add_ln1192_167_fu_7112_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_790_fu_7131_p3() {
    tmp_790_fu_7131_p3 = add_ln703_165_fu_7126_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_791_fu_7206_p3() {
    tmp_791_fu_7206_p3 = add_ln1192_168_fu_7200_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_792_fu_7219_p3() {
    tmp_792_fu_7219_p3 = add_ln703_166_fu_7214_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_793_fu_7294_p3() {
    tmp_793_fu_7294_p3 = add_ln1192_169_fu_7288_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_794_fu_7307_p3() {
    tmp_794_fu_7307_p3 = add_ln703_167_fu_7302_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_795_fu_7382_p3() {
    tmp_795_fu_7382_p3 = add_ln1192_170_fu_7376_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_796_fu_7395_p3() {
    tmp_796_fu_7395_p3 = add_ln703_168_fu_7390_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_797_fu_7470_p3() {
    tmp_797_fu_7470_p3 = add_ln1192_171_fu_7464_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_798_fu_7483_p3() {
    tmp_798_fu_7483_p3 = add_ln703_169_fu_7478_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_799_fu_7558_p3() {
    tmp_799_fu_7558_p3 = add_ln1192_172_fu_7552_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_800_fu_7571_p3() {
    tmp_800_fu_7571_p3 = add_ln703_170_fu_7566_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_801_fu_7646_p3() {
    tmp_801_fu_7646_p3 = add_ln1192_173_fu_7640_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_802_fu_7659_p3() {
    tmp_802_fu_7659_p3 = add_ln703_171_fu_7654_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_803_fu_7734_p3() {
    tmp_803_fu_7734_p3 = add_ln1192_174_fu_7728_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_804_fu_7747_p3() {
    tmp_804_fu_7747_p3 = add_ln703_172_fu_7742_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_805_fu_7822_p3() {
    tmp_805_fu_7822_p3 = add_ln1192_175_fu_7816_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_806_fu_7835_p3() {
    tmp_806_fu_7835_p3 = add_ln703_173_fu_7830_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_807_fu_7910_p3() {
    tmp_807_fu_7910_p3 = add_ln1192_176_fu_7904_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_808_fu_7923_p3() {
    tmp_808_fu_7923_p3 = add_ln703_174_fu_7918_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_809_fu_7998_p3() {
    tmp_809_fu_7998_p3 = add_ln1192_177_fu_7992_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_810_fu_8011_p3() {
    tmp_810_fu_8011_p3 = add_ln703_175_fu_8006_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_811_fu_8086_p3() {
    tmp_811_fu_8086_p3 = add_ln1192_178_fu_8080_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_812_fu_8099_p3() {
    tmp_812_fu_8099_p3 = add_ln703_176_fu_8094_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_813_fu_8174_p3() {
    tmp_813_fu_8174_p3 = add_ln1192_179_fu_8168_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_814_fu_8187_p3() {
    tmp_814_fu_8187_p3 = add_ln703_177_fu_8182_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_815_fu_8262_p3() {
    tmp_815_fu_8262_p3 = add_ln1192_180_fu_8256_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_816_fu_8275_p3() {
    tmp_816_fu_8275_p3 = add_ln703_178_fu_8270_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_817_fu_8350_p3() {
    tmp_817_fu_8350_p3 = add_ln1192_181_fu_8344_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_818_fu_8363_p3() {
    tmp_818_fu_8363_p3 = add_ln703_179_fu_8358_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_819_fu_8438_p3() {
    tmp_819_fu_8438_p3 = add_ln1192_182_fu_8432_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_820_fu_8451_p3() {
    tmp_820_fu_8451_p3 = add_ln703_180_fu_8446_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_821_fu_8526_p3() {
    tmp_821_fu_8526_p3 = add_ln1192_183_fu_8520_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_822_fu_8539_p3() {
    tmp_822_fu_8539_p3 = add_ln703_181_fu_8534_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_823_fu_8614_p3() {
    tmp_823_fu_8614_p3 = add_ln1192_184_fu_8608_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_824_fu_8627_p3() {
    tmp_824_fu_8627_p3 = add_ln703_182_fu_8622_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_825_fu_8702_p3() {
    tmp_825_fu_8702_p3 = add_ln1192_185_fu_8696_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_826_fu_8715_p3() {
    tmp_826_fu_8715_p3 = add_ln703_183_fu_8710_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_827_fu_8790_p3() {
    tmp_827_fu_8790_p3 = add_ln1192_186_fu_8784_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_828_fu_8803_p3() {
    tmp_828_fu_8803_p3 = add_ln703_184_fu_8798_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_829_fu_8878_p3() {
    tmp_829_fu_8878_p3 = add_ln1192_187_fu_8872_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_830_fu_8891_p3() {
    tmp_830_fu_8891_p3 = add_ln703_185_fu_8886_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_831_fu_8966_p3() {
    tmp_831_fu_8966_p3 = add_ln1192_188_fu_8960_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_832_fu_8979_p3() {
    tmp_832_fu_8979_p3 = add_ln703_186_fu_8974_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_833_fu_9054_p3() {
    tmp_833_fu_9054_p3 = add_ln1192_189_fu_9048_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_834_fu_9067_p3() {
    tmp_834_fu_9067_p3 = add_ln703_187_fu_9062_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_tmp_835_fu_9142_p3() {
    tmp_835_fu_9142_p3 = add_ln1192_190_fu_9136_p2.read().range(14, 14);
}

void pgconv64_1bit::thread_tmp_836_fu_9155_p3() {
    tmp_836_fu_9155_p3 = add_ln703_188_fu_9150_p2.read().range(13, 13);
}

void pgconv64_1bit::thread_top_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        top_0_V_address0 = top_0_V_addr_reg_13662.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        top_0_V_address0 =  (sc_lv<7>) (zext_ln531_4_fu_6390_p1.read());
    } else {
        top_0_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_0_V_ce0 = ap_const_logic_1;
    } else {
        top_0_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_0_V_d0() {
    top_0_V_d0 = select_ln340_324_reg_13961.read();
}

void pgconv64_1bit::thread_top_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()))) {
        top_0_V_we0 = ap_const_logic_1;
    } else {
        top_0_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_10_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        top_10_V_address0 = top_10_V_addr_reg_13747.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        top_10_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_13633.read());
    } else {
        top_10_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_10_V_ce0 = ap_const_logic_1;
    } else {
        top_10_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_10_V_d0() {
    top_10_V_d0 = select_ln340_334_reg_14053.read();
}

void pgconv64_1bit::thread_top_10_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()))) {
        top_10_V_we0 = ap_const_logic_1;
    } else {
        top_10_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_11_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        top_11_V_address0 = top_11_V_addr_reg_13752.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        top_11_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_13633.read());
    } else {
        top_11_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_11_V_ce0 = ap_const_logic_1;
    } else {
        top_11_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_11_V_d0() {
    top_11_V_d0 = select_ln340_335_reg_14058.read();
}

void pgconv64_1bit::thread_top_11_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()))) {
        top_11_V_we0 = ap_const_logic_1;
    } else {
        top_11_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_12_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        top_12_V_address0 = top_12_V_addr_reg_13757.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        top_12_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_13633.read());
    } else {
        top_12_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_12_V_ce0 = ap_const_logic_1;
    } else {
        top_12_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_12_V_d0() {
    top_12_V_d0 = select_ln340_336_reg_14063.read();
}

void pgconv64_1bit::thread_top_12_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()))) {
        top_12_V_we0 = ap_const_logic_1;
    } else {
        top_12_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_13_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        top_13_V_address0 = top_13_V_addr_reg_13762.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        top_13_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_13633.read());
    } else {
        top_13_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_13_V_ce0 = ap_const_logic_1;
    } else {
        top_13_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_13_V_d0() {
    top_13_V_d0 = select_ln340_337_reg_14068.read();
}

void pgconv64_1bit::thread_top_13_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()))) {
        top_13_V_we0 = ap_const_logic_1;
    } else {
        top_13_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            top_14_V_address0 = top_14_V_addr_reg_13829.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            top_14_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_13633.read());
        } else {
            top_14_V_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        top_14_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_14_V_ce0 = ap_const_logic_1;
    } else {
        top_14_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_14_V_d0() {
    top_14_V_d0 = select_ln340_338_reg_14115.read();
}

void pgconv64_1bit::thread_top_14_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()))) {
        top_14_V_we0 = ap_const_logic_1;
    } else {
        top_14_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            top_15_V_address0 = top_15_V_addr_reg_13834.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            top_15_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_13633.read());
        } else {
            top_15_V_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        top_15_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_15_V_ce0 = ap_const_logic_1;
    } else {
        top_15_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_15_V_d0() {
    top_15_V_d0 = select_ln340_339_reg_14120.read();
}

void pgconv64_1bit::thread_top_15_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()))) {
        top_15_V_we0 = ap_const_logic_1;
    } else {
        top_15_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            top_16_V_address0 = top_16_V_addr_reg_13839.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            top_16_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_13633.read());
        } else {
            top_16_V_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        top_16_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_16_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_16_V_ce0 = ap_const_logic_1;
    } else {
        top_16_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_16_V_d0() {
    top_16_V_d0 = select_ln340_340_reg_14125.read();
}

void pgconv64_1bit::thread_top_16_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()))) {
        top_16_V_we0 = ap_const_logic_1;
    } else {
        top_16_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_17_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            top_17_V_address0 = top_17_V_addr_reg_13844.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            top_17_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_13633.read());
        } else {
            top_17_V_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        top_17_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_17_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_17_V_ce0 = ap_const_logic_1;
    } else {
        top_17_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_17_V_d0() {
    top_17_V_d0 = select_ln340_341_reg_14130.read();
}

void pgconv64_1bit::thread_top_17_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()))) {
        top_17_V_we0 = ap_const_logic_1;
    } else {
        top_17_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_18_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            top_18_V_address0 = top_18_V_addr_reg_13849.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            top_18_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_13633.read());
        } else {
            top_18_V_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        top_18_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_18_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_18_V_ce0 = ap_const_logic_1;
    } else {
        top_18_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_18_V_d0() {
    top_18_V_d0 = select_ln340_342_reg_14135.read();
}

void pgconv64_1bit::thread_top_18_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()))) {
        top_18_V_we0 = ap_const_logic_1;
    } else {
        top_18_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_19_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            top_19_V_address0 = top_19_V_addr_reg_13854.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            top_19_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_13633.read());
        } else {
            top_19_V_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        top_19_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_19_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_19_V_ce0 = ap_const_logic_1;
    } else {
        top_19_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_19_V_d0() {
    top_19_V_d0 = select_ln340_343_reg_14140.read();
}

void pgconv64_1bit::thread_top_19_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()))) {
        top_19_V_we0 = ap_const_logic_1;
    } else {
        top_19_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        top_1_V_address0 = top_1_V_addr_reg_13667.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        top_1_V_address0 =  (sc_lv<7>) (zext_ln531_4_fu_6390_p1.read());
    } else {
        top_1_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_1_V_ce0 = ap_const_logic_1;
    } else {
        top_1_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_1_V_d0() {
    top_1_V_d0 = select_ln340_325_reg_13966.read();
}

void pgconv64_1bit::thread_top_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()))) {
        top_1_V_we0 = ap_const_logic_1;
    } else {
        top_1_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_20_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            top_20_V_address0 = top_20_V_addr_reg_13859.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            top_20_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_13633.read());
        } else {
            top_20_V_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        top_20_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_20_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        top_20_V_ce0 = ap_const_logic_1;
    } else {
        top_20_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_20_V_d0() {
    top_20_V_d0 = select_ln340_344_reg_14145.read();
}

void pgconv64_1bit::thread_top_20_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()))) {
        top_20_V_we0 = ap_const_logic_1;
    } else {
        top_20_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_21_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        top_21_V_address0 = top_21_V_addr_reg_13906.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        top_21_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_13633.read());
    } else {
        top_21_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_21_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        top_21_V_ce0 = ap_const_logic_1;
    } else {
        top_21_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_21_V_d0() {
    top_21_V_d0 = select_ln340_345_reg_14174.read();
}

void pgconv64_1bit::thread_top_21_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        top_21_V_we0 = ap_const_logic_1;
    } else {
        top_21_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_22_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        top_22_V_address0 = top_22_V_addr_reg_13911.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        top_22_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_13633.read());
    } else {
        top_22_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_22_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        top_22_V_ce0 = ap_const_logic_1;
    } else {
        top_22_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_22_V_d0() {
    top_22_V_d0 = select_ln340_346_reg_14179.read();
}

void pgconv64_1bit::thread_top_22_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        top_22_V_we0 = ap_const_logic_1;
    } else {
        top_22_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_23_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        top_23_V_address0 = top_23_V_addr_reg_13916.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        top_23_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_13633.read());
    } else {
        top_23_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_23_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        top_23_V_ce0 = ap_const_logic_1;
    } else {
        top_23_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_23_V_d0() {
    top_23_V_d0 = select_ln340_347_reg_14184.read();
}

void pgconv64_1bit::thread_top_23_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        top_23_V_we0 = ap_const_logic_1;
    } else {
        top_23_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_24_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        top_24_V_address0 = top_24_V_addr_reg_13921.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        top_24_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_13633.read());
    } else {
        top_24_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_24_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        top_24_V_ce0 = ap_const_logic_1;
    } else {
        top_24_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_24_V_d0() {
    top_24_V_d0 = select_ln340_348_reg_14189.read();
}

void pgconv64_1bit::thread_top_24_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        top_24_V_we0 = ap_const_logic_1;
    } else {
        top_24_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_25_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        top_25_V_address0 = top_25_V_addr_reg_13926.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        top_25_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_13633.read());
    } else {
        top_25_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_25_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        top_25_V_ce0 = ap_const_logic_1;
    } else {
        top_25_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_25_V_d0() {
    top_25_V_d0 = select_ln340_349_reg_14194.read();
}

void pgconv64_1bit::thread_top_25_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        top_25_V_we0 = ap_const_logic_1;
    } else {
        top_25_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_26_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        top_26_V_address0 = top_26_V_addr_reg_13931.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        top_26_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_13633.read());
    } else {
        top_26_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_26_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        top_26_V_ce0 = ap_const_logic_1;
    } else {
        top_26_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_26_V_d0() {
    top_26_V_d0 = select_ln340_350_reg_14199.read();
}

void pgconv64_1bit::thread_top_26_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        top_26_V_we0 = ap_const_logic_1;
    } else {
        top_26_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_27_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        top_27_V_address0 = top_27_V_addr_reg_13936.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        top_27_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_13633.read());
    } else {
        top_27_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_27_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        top_27_V_ce0 = ap_const_logic_1;
    } else {
        top_27_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_27_V_d0() {
    top_27_V_d0 = select_ln340_351_reg_14204.read();
}

void pgconv64_1bit::thread_top_27_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        top_27_V_we0 = ap_const_logic_1;
    } else {
        top_27_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_28_V_address0() {
    top_28_V_address0 = top_28_V_addr_reg_13941.read();
}

void pgconv64_1bit::thread_top_28_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        top_28_V_ce0 = ap_const_logic_1;
    } else {
        top_28_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_28_V_d0() {
    top_28_V_d0 = select_ln340_352_reg_14209.read();
}

void pgconv64_1bit::thread_top_28_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter5_reg.read()))) {
        top_28_V_we0 = ap_const_logic_1;
    } else {
        top_28_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_29_V_address0() {
    top_29_V_address0 = top_29_V_addr_reg_13946.read();
}

void pgconv64_1bit::thread_top_29_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        top_29_V_ce0 = ap_const_logic_1;
    } else {
        top_29_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_29_V_d0() {
    top_29_V_d0 = select_ln340_353_reg_14214.read();
}

void pgconv64_1bit::thread_top_29_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter5_reg.read()))) {
        top_29_V_we0 = ap_const_logic_1;
    } else {
        top_29_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        top_2_V_address0 = top_2_V_addr_reg_13672.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        top_2_V_address0 =  (sc_lv<7>) (zext_ln531_4_fu_6390_p1.read());
    } else {
        top_2_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_2_V_ce0 = ap_const_logic_1;
    } else {
        top_2_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_2_V_d0() {
    top_2_V_d0 = select_ln340_326_reg_13971.read();
}

void pgconv64_1bit::thread_top_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()))) {
        top_2_V_we0 = ap_const_logic_1;
    } else {
        top_2_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_30_V_address0() {
    top_30_V_address0 = top_30_V_addr_reg_13951.read();
}

void pgconv64_1bit::thread_top_30_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        top_30_V_ce0 = ap_const_logic_1;
    } else {
        top_30_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_30_V_d0() {
    top_30_V_d0 = select_ln340_354_reg_14219.read();
}

void pgconv64_1bit::thread_top_30_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter5_reg.read()))) {
        top_30_V_we0 = ap_const_logic_1;
    } else {
        top_30_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_31_V_address0() {
    top_31_V_address0 = top_31_V_addr_reg_13956.read();
}

void pgconv64_1bit::thread_top_31_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        top_31_V_ce0 = ap_const_logic_1;
    } else {
        top_31_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_31_V_d0() {
    top_31_V_d0 = select_ln340_355_reg_14224.read();
}

void pgconv64_1bit::thread_top_31_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter5_reg.read()))) {
        top_31_V_we0 = ap_const_logic_1;
    } else {
        top_31_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        top_3_V_address0 = top_3_V_addr_reg_13677.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        top_3_V_address0 =  (sc_lv<7>) (zext_ln531_4_fu_6390_p1.read());
    } else {
        top_3_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_3_V_ce0 = ap_const_logic_1;
    } else {
        top_3_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_3_V_d0() {
    top_3_V_d0 = select_ln340_327_reg_13976.read();
}

void pgconv64_1bit::thread_top_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()))) {
        top_3_V_we0 = ap_const_logic_1;
    } else {
        top_3_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        top_4_V_address0 = top_4_V_addr_reg_13682.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        top_4_V_address0 =  (sc_lv<7>) (zext_ln531_4_fu_6390_p1.read());
    } else {
        top_4_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_4_V_ce0 = ap_const_logic_1;
    } else {
        top_4_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_4_V_d0() {
    top_4_V_d0 = select_ln340_328_reg_13981.read();
}

void pgconv64_1bit::thread_top_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()))) {
        top_4_V_we0 = ap_const_logic_1;
    } else {
        top_4_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        top_5_V_address0 = top_5_V_addr_reg_13687.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        top_5_V_address0 =  (sc_lv<7>) (zext_ln531_4_fu_6390_p1.read());
    } else {
        top_5_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_5_V_ce0 = ap_const_logic_1;
    } else {
        top_5_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_5_V_d0() {
    top_5_V_d0 = select_ln340_329_reg_13986.read();
}

void pgconv64_1bit::thread_top_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()))) {
        top_5_V_we0 = ap_const_logic_1;
    } else {
        top_5_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        top_6_V_address0 = top_6_V_addr_reg_13692.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        top_6_V_address0 =  (sc_lv<7>) (zext_ln531_4_fu_6390_p1.read());
    } else {
        top_6_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_6_V_ce0 = ap_const_logic_1;
    } else {
        top_6_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_6_V_d0() {
    top_6_V_d0 = select_ln340_330_reg_13991.read();
}

void pgconv64_1bit::thread_top_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()))) {
        top_6_V_we0 = ap_const_logic_1;
    } else {
        top_6_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        top_7_V_address0 = top_7_V_addr_reg_13732.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        top_7_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_13633.read());
    } else {
        top_7_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_7_V_ce0 = ap_const_logic_1;
    } else {
        top_7_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_7_V_d0() {
    top_7_V_d0 = select_ln340_331_reg_14038.read();
}

void pgconv64_1bit::thread_top_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()))) {
        top_7_V_we0 = ap_const_logic_1;
    } else {
        top_7_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_8_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        top_8_V_address0 = top_8_V_addr_reg_13737.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        top_8_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_13633.read());
    } else {
        top_8_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_8_V_ce0 = ap_const_logic_1;
    } else {
        top_8_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_8_V_d0() {
    top_8_V_d0 = select_ln340_332_reg_14043.read();
}

void pgconv64_1bit::thread_top_8_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()))) {
        top_8_V_we0 = ap_const_logic_1;
    } else {
        top_8_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_9_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        top_9_V_address0 = top_9_V_addr_reg_13742.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        top_9_V_address0 =  (sc_lv<7>) (zext_ln531_4_reg_13633.read());
    } else {
        top_9_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void pgconv64_1bit::thread_top_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        top_9_V_ce0 = ap_const_logic_1;
    } else {
        top_9_V_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_top_9_V_d0() {
    top_9_V_d0 = select_ln340_333_reg_14048.read();
}

void pgconv64_1bit::thread_top_9_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln505_reg_10034_pp0_iter4_reg.read()))) {
        top_9_V_we0 = ap_const_logic_1;
    } else {
        top_9_V_we0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_trunc_ln500_fu_5766_p1() {
    trunc_ln500_fu_5766_p1 = stride.read().range(2-1, 0);
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_18_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_18_ce1 = ap_const_logic_0;
    }
}

}

