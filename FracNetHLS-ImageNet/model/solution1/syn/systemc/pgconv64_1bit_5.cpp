#include "pgconv64_1bit.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_25_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_25_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_26_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_26_address0 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_26_address0 = ap_const_lv6_8;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_26_address0 = ap_const_lv6_6;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_26_address0 = ap_const_lv6_4;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        weight_buf_3x3_V_26_address0 = ap_const_lv6_2;
    } else {
        weight_buf_3x3_V_26_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_26_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_26_address1 = ap_const_lv6_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_26_address1 = ap_const_lv6_7;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_26_address1 = ap_const_lv6_5;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        weight_buf_3x3_V_26_address1 = ap_const_lv6_3;
    } else {
        weight_buf_3x3_V_26_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_26_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_26_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_26_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_27_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_27_address0 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_27_address0 = ap_const_lv6_8;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_27_address0 = ap_const_lv6_6;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_27_address0 = ap_const_lv6_4;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        weight_buf_3x3_V_27_address0 = ap_const_lv6_2;
    } else {
        weight_buf_3x3_V_27_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_27_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_27_address1 = ap_const_lv6_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_27_address1 = ap_const_lv6_7;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_27_address1 = ap_const_lv6_5;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        weight_buf_3x3_V_27_address1 = ap_const_lv6_3;
    } else {
        weight_buf_3x3_V_27_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_27_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_27_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_27_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_27_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_27_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_27_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_28_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_28_address0 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_28_address0 = ap_const_lv6_8;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_28_address0 = ap_const_lv6_6;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_28_address0 = ap_const_lv6_4;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        weight_buf_3x3_V_28_address0 = ap_const_lv6_2;
    } else {
        weight_buf_3x3_V_28_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_28_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_28_address1 = ap_const_lv6_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_28_address1 = ap_const_lv6_7;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_28_address1 = ap_const_lv6_5;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        weight_buf_3x3_V_28_address1 = ap_const_lv6_3;
    } else {
        weight_buf_3x3_V_28_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_28_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_28_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_28_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_28_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_28_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_28_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_29_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_29_address0 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_29_address0 = ap_const_lv6_8;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_29_address0 = ap_const_lv6_6;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_29_address0 = ap_const_lv6_4;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        weight_buf_3x3_V_29_address0 = ap_const_lv6_2;
    } else {
        weight_buf_3x3_V_29_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_29_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_29_address1 = ap_const_lv6_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_29_address1 = ap_const_lv6_7;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_29_address1 = ap_const_lv6_5;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        weight_buf_3x3_V_29_address1 = ap_const_lv6_3;
    } else {
        weight_buf_3x3_V_29_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_29_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_29_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_29_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_29_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_29_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_29_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_2_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_2_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_2_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            weight_buf_3x3_V_2_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_2_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_2_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_2_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_2_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_2_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            weight_buf_3x3_V_2_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_2_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_2_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_2_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_2_ce0() {
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
        weight_buf_3x3_V_2_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_2_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_2_ce1() {
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
        weight_buf_3x3_V_2_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_2_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_30_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_30_address0 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_30_address0 = ap_const_lv6_8;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_30_address0 = ap_const_lv6_6;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_30_address0 = ap_const_lv6_4;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        weight_buf_3x3_V_30_address0 = ap_const_lv6_2;
    } else {
        weight_buf_3x3_V_30_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_30_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_30_address1 = ap_const_lv6_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_30_address1 = ap_const_lv6_7;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_30_address1 = ap_const_lv6_5;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        weight_buf_3x3_V_30_address1 = ap_const_lv6_3;
    } else {
        weight_buf_3x3_V_30_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_30_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_30_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_30_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_30_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_30_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_30_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_31_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_31_address0 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_31_address0 = ap_const_lv6_8;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_31_address0 = ap_const_lv6_6;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_31_address0 = ap_const_lv6_4;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        weight_buf_3x3_V_31_address0 = ap_const_lv6_2;
    } else {
        weight_buf_3x3_V_31_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_31_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_31_address1 = ap_const_lv6_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_31_address1 = ap_const_lv6_7;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        weight_buf_3x3_V_31_address1 = ap_const_lv6_5;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
        weight_buf_3x3_V_31_address1 = ap_const_lv6_3;
    } else {
        weight_buf_3x3_V_31_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_31_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_31_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_31_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_31_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_31_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_31_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_3_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_3_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_3_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            weight_buf_3x3_V_3_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_3_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_3_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_3_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_3_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_3_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            weight_buf_3x3_V_3_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_3_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_3_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_3_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_3_ce0() {
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
        weight_buf_3x3_V_3_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_3_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_3_ce1() {
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
        weight_buf_3x3_V_3_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_3_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_4_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_4_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_4_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            weight_buf_3x3_V_4_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_4_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_4_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_4_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_4_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_4_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            weight_buf_3x3_V_4_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_4_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_4_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_4_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_4_ce0() {
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
        weight_buf_3x3_V_4_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_4_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_4_ce1() {
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
        weight_buf_3x3_V_4_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_4_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_5_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_5_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_5_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            weight_buf_3x3_V_5_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_5_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_5_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_5_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_5_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_5_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            weight_buf_3x3_V_5_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_5_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_5_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_5_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_5_ce0() {
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
        weight_buf_3x3_V_5_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_5_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_5_ce1() {
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
        weight_buf_3x3_V_5_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_5_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_6_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_6_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_6_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            weight_buf_3x3_V_6_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_6_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_6_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_6_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_6_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_6_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            weight_buf_3x3_V_6_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_6_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_6_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_6_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_6_ce0() {
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
        weight_buf_3x3_V_6_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_6_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_6_ce1() {
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
        weight_buf_3x3_V_6_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_6_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_7_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_7_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_7_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            weight_buf_3x3_V_7_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_7_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_7_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_7_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_7_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_7_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            weight_buf_3x3_V_7_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_7_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_7_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_7_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_7_ce0() {
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
        weight_buf_3x3_V_7_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_7_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_7_ce1() {
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
        weight_buf_3x3_V_7_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_7_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_8_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_8_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_8_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            weight_buf_3x3_V_8_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_8_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_8_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_8_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_8_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_8_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_8_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            weight_buf_3x3_V_8_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_8_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_8_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_8_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_8_ce0() {
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
        weight_buf_3x3_V_8_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_8_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_8_ce1() {
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
        weight_buf_3x3_V_8_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_8_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_9_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_9_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_9_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            weight_buf_3x3_V_9_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_9_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_9_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_9_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_9_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_9_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_9_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1.read()))) {
            weight_buf_3x3_V_9_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_9_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_9_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_9_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_9_ce0() {
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
        weight_buf_3x3_V_9_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_9_ce0 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_9_ce1() {
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
        weight_buf_3x3_V_9_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_9_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_xor_ln340_10_fu_7333_p2() {
    xor_ln340_10_fu_7333_p2 = (tmp_793_fu_7294_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_11_fu_7421_p2() {
    xor_ln340_11_fu_7421_p2 = (tmp_795_fu_7382_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_12_fu_7509_p2() {
    xor_ln340_12_fu_7509_p2 = (tmp_797_fu_7470_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_13_fu_7597_p2() {
    xor_ln340_13_fu_7597_p2 = (tmp_799_fu_7558_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_14_fu_7685_p2() {
    xor_ln340_14_fu_7685_p2 = (tmp_801_fu_7646_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_15_fu_7773_p2() {
    xor_ln340_15_fu_7773_p2 = (tmp_803_fu_7734_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_16_fu_7861_p2() {
    xor_ln340_16_fu_7861_p2 = (tmp_805_fu_7822_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_17_fu_7949_p2() {
    xor_ln340_17_fu_7949_p2 = (tmp_807_fu_7910_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_18_fu_8037_p2() {
    xor_ln340_18_fu_8037_p2 = (tmp_809_fu_7998_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_19_fu_8125_p2() {
    xor_ln340_19_fu_8125_p2 = (tmp_811_fu_8086_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_1_fu_6541_p2() {
    xor_ln340_1_fu_6541_p2 = (tmp_775_fu_6502_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_20_fu_8213_p2() {
    xor_ln340_20_fu_8213_p2 = (tmp_813_fu_8174_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_21_fu_8301_p2() {
    xor_ln340_21_fu_8301_p2 = (tmp_815_fu_8262_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_22_fu_8389_p2() {
    xor_ln340_22_fu_8389_p2 = (tmp_817_fu_8350_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_23_fu_8477_p2() {
    xor_ln340_23_fu_8477_p2 = (tmp_819_fu_8438_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_243_fu_6447_p2() {
    xor_ln340_243_fu_6447_p2 = (tmp_773_fu_6414_p3.read() ^ tmp_774_fu_6427_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_244_fu_6535_p2() {
    xor_ln340_244_fu_6535_p2 = (tmp_775_fu_6502_p3.read() ^ tmp_776_fu_6515_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_245_fu_6623_p2() {
    xor_ln340_245_fu_6623_p2 = (tmp_777_fu_6590_p3.read() ^ tmp_778_fu_6603_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_246_fu_6711_p2() {
    xor_ln340_246_fu_6711_p2 = (tmp_779_fu_6678_p3.read() ^ tmp_780_fu_6691_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_247_fu_6799_p2() {
    xor_ln340_247_fu_6799_p2 = (tmp_781_fu_6766_p3.read() ^ tmp_782_fu_6779_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_248_fu_6887_p2() {
    xor_ln340_248_fu_6887_p2 = (tmp_783_fu_6854_p3.read() ^ tmp_784_fu_6867_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_249_fu_6975_p2() {
    xor_ln340_249_fu_6975_p2 = (tmp_785_fu_6942_p3.read() ^ tmp_786_fu_6955_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_24_fu_8565_p2() {
    xor_ln340_24_fu_8565_p2 = (tmp_821_fu_8526_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_250_fu_7063_p2() {
    xor_ln340_250_fu_7063_p2 = (tmp_787_fu_7030_p3.read() ^ tmp_788_fu_7043_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_251_fu_7151_p2() {
    xor_ln340_251_fu_7151_p2 = (tmp_789_fu_7118_p3.read() ^ tmp_790_fu_7131_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_252_fu_7239_p2() {
    xor_ln340_252_fu_7239_p2 = (tmp_791_fu_7206_p3.read() ^ tmp_792_fu_7219_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_253_fu_7327_p2() {
    xor_ln340_253_fu_7327_p2 = (tmp_793_fu_7294_p3.read() ^ tmp_794_fu_7307_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_254_fu_7415_p2() {
    xor_ln340_254_fu_7415_p2 = (tmp_795_fu_7382_p3.read() ^ tmp_796_fu_7395_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_255_fu_7503_p2() {
    xor_ln340_255_fu_7503_p2 = (tmp_797_fu_7470_p3.read() ^ tmp_798_fu_7483_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_256_fu_7591_p2() {
    xor_ln340_256_fu_7591_p2 = (tmp_799_fu_7558_p3.read() ^ tmp_800_fu_7571_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_257_fu_7679_p2() {
    xor_ln340_257_fu_7679_p2 = (tmp_801_fu_7646_p3.read() ^ tmp_802_fu_7659_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_258_fu_7767_p2() {
    xor_ln340_258_fu_7767_p2 = (tmp_803_fu_7734_p3.read() ^ tmp_804_fu_7747_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_259_fu_7855_p2() {
    xor_ln340_259_fu_7855_p2 = (tmp_805_fu_7822_p3.read() ^ tmp_806_fu_7835_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_25_fu_8653_p2() {
    xor_ln340_25_fu_8653_p2 = (tmp_823_fu_8614_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_260_fu_7943_p2() {
    xor_ln340_260_fu_7943_p2 = (tmp_807_fu_7910_p3.read() ^ tmp_808_fu_7923_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_261_fu_8031_p2() {
    xor_ln340_261_fu_8031_p2 = (tmp_809_fu_7998_p3.read() ^ tmp_810_fu_8011_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_262_fu_8119_p2() {
    xor_ln340_262_fu_8119_p2 = (tmp_811_fu_8086_p3.read() ^ tmp_812_fu_8099_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_263_fu_8207_p2() {
    xor_ln340_263_fu_8207_p2 = (tmp_813_fu_8174_p3.read() ^ tmp_814_fu_8187_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_264_fu_8295_p2() {
    xor_ln340_264_fu_8295_p2 = (tmp_815_fu_8262_p3.read() ^ tmp_816_fu_8275_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_265_fu_8383_p2() {
    xor_ln340_265_fu_8383_p2 = (tmp_817_fu_8350_p3.read() ^ tmp_818_fu_8363_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_266_fu_8471_p2() {
    xor_ln340_266_fu_8471_p2 = (tmp_819_fu_8438_p3.read() ^ tmp_820_fu_8451_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_267_fu_8559_p2() {
    xor_ln340_267_fu_8559_p2 = (tmp_821_fu_8526_p3.read() ^ tmp_822_fu_8539_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_268_fu_8647_p2() {
    xor_ln340_268_fu_8647_p2 = (tmp_823_fu_8614_p3.read() ^ tmp_824_fu_8627_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_269_fu_8735_p2() {
    xor_ln340_269_fu_8735_p2 = (tmp_825_fu_8702_p3.read() ^ tmp_826_fu_8715_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_26_fu_8741_p2() {
    xor_ln340_26_fu_8741_p2 = (tmp_825_fu_8702_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_270_fu_8823_p2() {
    xor_ln340_270_fu_8823_p2 = (tmp_827_fu_8790_p3.read() ^ tmp_828_fu_8803_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_271_fu_8911_p2() {
    xor_ln340_271_fu_8911_p2 = (tmp_829_fu_8878_p3.read() ^ tmp_830_fu_8891_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_272_fu_8999_p2() {
    xor_ln340_272_fu_8999_p2 = (tmp_831_fu_8966_p3.read() ^ tmp_832_fu_8979_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_273_fu_9087_p2() {
    xor_ln340_273_fu_9087_p2 = (tmp_833_fu_9054_p3.read() ^ tmp_834_fu_9067_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_274_fu_9175_p2() {
    xor_ln340_274_fu_9175_p2 = (tmp_835_fu_9142_p3.read() ^ tmp_836_fu_9155_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_27_fu_8829_p2() {
    xor_ln340_27_fu_8829_p2 = (tmp_827_fu_8790_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_28_fu_8917_p2() {
    xor_ln340_28_fu_8917_p2 = (tmp_829_fu_8878_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_29_fu_9005_p2() {
    xor_ln340_29_fu_9005_p2 = (tmp_831_fu_8966_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_2_fu_6629_p2() {
    xor_ln340_2_fu_6629_p2 = (tmp_777_fu_6590_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_30_fu_9093_p2() {
    xor_ln340_30_fu_9093_p2 = (tmp_833_fu_9054_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_31_fu_9181_p2() {
    xor_ln340_31_fu_9181_p2 = (tmp_835_fu_9142_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_3_fu_6717_p2() {
    xor_ln340_3_fu_6717_p2 = (tmp_779_fu_6678_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_4_fu_6805_p2() {
    xor_ln340_4_fu_6805_p2 = (tmp_781_fu_6766_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_5_fu_6893_p2() {
    xor_ln340_5_fu_6893_p2 = (tmp_783_fu_6854_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_6_fu_6981_p2() {
    xor_ln340_6_fu_6981_p2 = (tmp_785_fu_6942_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_7_fu_7069_p2() {
    xor_ln340_7_fu_7069_p2 = (tmp_787_fu_7030_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_8_fu_7157_p2() {
    xor_ln340_8_fu_7157_p2 = (tmp_789_fu_7118_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_9_fu_7245_p2() {
    xor_ln340_9_fu_7245_p2 = (tmp_791_fu_7206_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_fu_6453_p2() {
    xor_ln340_fu_6453_p2 = (tmp_773_fu_6414_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_10_fu_7315_p2() {
    xor_ln786_10_fu_7315_p2 = (tmp_794_fu_7307_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_11_fu_7403_p2() {
    xor_ln786_11_fu_7403_p2 = (tmp_796_fu_7395_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_12_fu_7491_p2() {
    xor_ln786_12_fu_7491_p2 = (tmp_798_fu_7483_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_13_fu_7579_p2() {
    xor_ln786_13_fu_7579_p2 = (tmp_800_fu_7571_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_14_fu_7667_p2() {
    xor_ln786_14_fu_7667_p2 = (tmp_802_fu_7659_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_15_fu_7755_p2() {
    xor_ln786_15_fu_7755_p2 = (tmp_804_fu_7747_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_16_fu_7843_p2() {
    xor_ln786_16_fu_7843_p2 = (tmp_806_fu_7835_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_17_fu_7931_p2() {
    xor_ln786_17_fu_7931_p2 = (tmp_808_fu_7923_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_18_fu_8019_p2() {
    xor_ln786_18_fu_8019_p2 = (tmp_810_fu_8011_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_19_fu_8107_p2() {
    xor_ln786_19_fu_8107_p2 = (tmp_812_fu_8099_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_1_fu_6523_p2() {
    xor_ln786_1_fu_6523_p2 = (tmp_776_fu_6515_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_20_fu_8195_p2() {
    xor_ln786_20_fu_8195_p2 = (tmp_814_fu_8187_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_21_fu_8283_p2() {
    xor_ln786_21_fu_8283_p2 = (tmp_816_fu_8275_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_22_fu_8371_p2() {
    xor_ln786_22_fu_8371_p2 = (tmp_818_fu_8363_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_23_fu_8459_p2() {
    xor_ln786_23_fu_8459_p2 = (tmp_820_fu_8451_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_24_fu_8547_p2() {
    xor_ln786_24_fu_8547_p2 = (tmp_822_fu_8539_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_25_fu_8635_p2() {
    xor_ln786_25_fu_8635_p2 = (tmp_824_fu_8627_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_26_fu_8723_p2() {
    xor_ln786_26_fu_8723_p2 = (tmp_826_fu_8715_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_27_fu_8811_p2() {
    xor_ln786_27_fu_8811_p2 = (tmp_828_fu_8803_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_28_fu_8899_p2() {
    xor_ln786_28_fu_8899_p2 = (tmp_830_fu_8891_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_29_fu_8987_p2() {
    xor_ln786_29_fu_8987_p2 = (tmp_832_fu_8979_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_2_fu_6611_p2() {
    xor_ln786_2_fu_6611_p2 = (tmp_778_fu_6603_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_30_fu_9075_p2() {
    xor_ln786_30_fu_9075_p2 = (tmp_834_fu_9067_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_31_fu_9163_p2() {
    xor_ln786_31_fu_9163_p2 = (tmp_836_fu_9155_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_3_fu_6699_p2() {
    xor_ln786_3_fu_6699_p2 = (tmp_780_fu_6691_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_4_fu_6787_p2() {
    xor_ln786_4_fu_6787_p2 = (tmp_782_fu_6779_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_5_fu_6875_p2() {
    xor_ln786_5_fu_6875_p2 = (tmp_784_fu_6867_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_6_fu_6963_p2() {
    xor_ln786_6_fu_6963_p2 = (tmp_786_fu_6955_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_7_fu_7051_p2() {
    xor_ln786_7_fu_7051_p2 = (tmp_788_fu_7043_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_8_fu_7139_p2() {
    xor_ln786_8_fu_7139_p2 = (tmp_790_fu_7131_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_9_fu_7227_p2() {
    xor_ln786_9_fu_7227_p2 = (tmp_792_fu_7219_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_fu_6435_p2() {
    xor_ln786_fu_6435_p2 = (tmp_774_fu_6427_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_zext_ln500_fu_6063_p1() {
    zext_ln500_fu_6063_p1 = esl_zext<5,4>(col_2_fu_6056_p3.read());
}

void pgconv64_1bit::thread_zext_ln510_1_fu_5895_p1() {
    zext_ln510_1_fu_5895_p1 = esl_zext<4,3>(add_ln510_fu_5889_p2.read());
}

void pgconv64_1bit::thread_zext_ln510_fu_5798_p1() {
    zext_ln510_fu_5798_p1 = esl_zext<4,3>(row0_fu_5792_p2.read());
}

void pgconv64_1bit::thread_zext_ln511_fu_6040_p1() {
    zext_ln511_fu_6040_p1 = esl_zext<4,3>(col_reg_10113.read());
}

void pgconv64_1bit::thread_zext_ln531_1_fu_6361_p1() {
    zext_ln531_1_fu_6361_p1 = esl_zext<8,4>(select_ln505_1_reg_10048_pp0_iter3_reg.read());
}

void pgconv64_1bit::thread_zext_ln531_2_fu_6371_p1() {
    zext_ln531_2_fu_6371_p1 = esl_zext<8,7>(tmp_12_fu_6364_p3.read());
}

void pgconv64_1bit::thread_zext_ln531_3_fu_6381_p1() {
    zext_ln531_3_fu_6381_p1 = esl_zext<8,4>(col_2_reg_10119_pp0_iter3_reg.read());
}

void pgconv64_1bit::thread_zext_ln531_4_fu_6390_p1() {
    zext_ln531_4_fu_6390_p1 = esl_zext<64,8>(add_ln531_1_fu_6384_p2.read());
}

void pgconv64_1bit::thread_zext_ln531_fu_6067_p1() {
    zext_ln531_fu_6067_p1 = esl_zext<64,4>(col_2_fu_6056_p3.read());
}

void pgconv64_1bit::thread_zext_ln534_fu_6111_p1() {
    zext_ln534_fu_6111_p1 = esl_zext<64,5>(add_ln534_fu_6106_p2.read());
}

}

