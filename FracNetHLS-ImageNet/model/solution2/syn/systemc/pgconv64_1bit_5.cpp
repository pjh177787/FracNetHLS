#include "pgconv64_1bit.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pgconv64_1bit::thread_weight_buf_3x3_V_27_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_27_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_27_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_27_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_27_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_27_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_27_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_27_ce0() {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_27_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_27_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_28_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_28_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_28_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_28_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_28_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_28_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_28_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_28_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_28_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_28_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_28_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_28_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_28_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_28_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_28_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_28_ce0() {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_28_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_28_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_29_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_29_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_29_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_29_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_29_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_29_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_29_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_29_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_29_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_29_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_29_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_29_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_29_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_29_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_29_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_29_ce0() {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
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
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
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
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_2_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_2_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_30_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_30_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_30_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_30_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_30_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_30_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_30_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_30_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_30_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_30_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_30_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_30_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_30_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_30_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_30_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_30_ce0() {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_30_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_30_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_31_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_31_address0 = ap_const_lv6_8;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_31_address0 = ap_const_lv6_6;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_31_address0 = ap_const_lv6_4;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_31_address0 = ap_const_lv6_2;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_31_address0 = ap_const_lv6_0;
        } else {
            weight_buf_3x3_V_31_address0 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_31_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_31_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_31_address1 = ap_const_lv6_7;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_31_address1 = ap_const_lv6_5;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_31_address1 = ap_const_lv6_3;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_buf_3x3_V_31_address1 = ap_const_lv6_1;
        } else {
            weight_buf_3x3_V_31_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        weight_buf_3x3_V_31_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void pgconv64_1bit::thread_weight_buf_3x3_V_31_ce0() {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
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
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
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
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
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
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
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
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
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
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
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
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
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
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
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
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
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
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
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
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
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
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
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
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
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
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
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
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        weight_buf_3x3_V_9_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3x3_V_9_ce1 = ap_const_logic_0;
    }
}

void pgconv64_1bit::thread_xor_ln340_10_fu_7376_p2() {
    xor_ln340_10_fu_7376_p2 = (tmp_793_fu_7337_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_11_fu_7464_p2() {
    xor_ln340_11_fu_7464_p2 = (tmp_795_fu_7425_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_12_fu_7552_p2() {
    xor_ln340_12_fu_7552_p2 = (tmp_797_fu_7513_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_13_fu_7640_p2() {
    xor_ln340_13_fu_7640_p2 = (tmp_799_fu_7601_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_14_fu_7728_p2() {
    xor_ln340_14_fu_7728_p2 = (tmp_801_fu_7689_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_15_fu_7816_p2() {
    xor_ln340_15_fu_7816_p2 = (tmp_803_fu_7777_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_16_fu_7904_p2() {
    xor_ln340_16_fu_7904_p2 = (tmp_805_fu_7865_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_17_fu_7992_p2() {
    xor_ln340_17_fu_7992_p2 = (tmp_807_fu_7953_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_18_fu_8080_p2() {
    xor_ln340_18_fu_8080_p2 = (tmp_809_fu_8041_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_19_fu_8168_p2() {
    xor_ln340_19_fu_8168_p2 = (tmp_811_fu_8129_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_1_fu_6584_p2() {
    xor_ln340_1_fu_6584_p2 = (tmp_775_fu_6545_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_20_fu_8256_p2() {
    xor_ln340_20_fu_8256_p2 = (tmp_813_fu_8217_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_21_fu_8344_p2() {
    xor_ln340_21_fu_8344_p2 = (tmp_815_fu_8305_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_22_fu_8432_p2() {
    xor_ln340_22_fu_8432_p2 = (tmp_817_fu_8393_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_23_fu_8520_p2() {
    xor_ln340_23_fu_8520_p2 = (tmp_819_fu_8481_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_243_fu_6490_p2() {
    xor_ln340_243_fu_6490_p2 = (tmp_773_fu_6457_p3.read() ^ tmp_774_fu_6470_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_244_fu_6578_p2() {
    xor_ln340_244_fu_6578_p2 = (tmp_775_fu_6545_p3.read() ^ tmp_776_fu_6558_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_245_fu_6666_p2() {
    xor_ln340_245_fu_6666_p2 = (tmp_777_fu_6633_p3.read() ^ tmp_778_fu_6646_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_246_fu_6754_p2() {
    xor_ln340_246_fu_6754_p2 = (tmp_779_fu_6721_p3.read() ^ tmp_780_fu_6734_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_247_fu_6842_p2() {
    xor_ln340_247_fu_6842_p2 = (tmp_781_fu_6809_p3.read() ^ tmp_782_fu_6822_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_248_fu_6930_p2() {
    xor_ln340_248_fu_6930_p2 = (tmp_783_fu_6897_p3.read() ^ tmp_784_fu_6910_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_249_fu_7018_p2() {
    xor_ln340_249_fu_7018_p2 = (tmp_785_fu_6985_p3.read() ^ tmp_786_fu_6998_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_24_fu_8608_p2() {
    xor_ln340_24_fu_8608_p2 = (tmp_821_fu_8569_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_250_fu_7106_p2() {
    xor_ln340_250_fu_7106_p2 = (tmp_787_fu_7073_p3.read() ^ tmp_788_fu_7086_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_251_fu_7194_p2() {
    xor_ln340_251_fu_7194_p2 = (tmp_789_fu_7161_p3.read() ^ tmp_790_fu_7174_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_252_fu_7282_p2() {
    xor_ln340_252_fu_7282_p2 = (tmp_791_fu_7249_p3.read() ^ tmp_792_fu_7262_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_253_fu_7370_p2() {
    xor_ln340_253_fu_7370_p2 = (tmp_793_fu_7337_p3.read() ^ tmp_794_fu_7350_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_254_fu_7458_p2() {
    xor_ln340_254_fu_7458_p2 = (tmp_795_fu_7425_p3.read() ^ tmp_796_fu_7438_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_255_fu_7546_p2() {
    xor_ln340_255_fu_7546_p2 = (tmp_797_fu_7513_p3.read() ^ tmp_798_fu_7526_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_256_fu_7634_p2() {
    xor_ln340_256_fu_7634_p2 = (tmp_799_fu_7601_p3.read() ^ tmp_800_fu_7614_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_257_fu_7722_p2() {
    xor_ln340_257_fu_7722_p2 = (tmp_801_fu_7689_p3.read() ^ tmp_802_fu_7702_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_258_fu_7810_p2() {
    xor_ln340_258_fu_7810_p2 = (tmp_803_fu_7777_p3.read() ^ tmp_804_fu_7790_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_259_fu_7898_p2() {
    xor_ln340_259_fu_7898_p2 = (tmp_805_fu_7865_p3.read() ^ tmp_806_fu_7878_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_25_fu_8696_p2() {
    xor_ln340_25_fu_8696_p2 = (tmp_823_fu_8657_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_260_fu_7986_p2() {
    xor_ln340_260_fu_7986_p2 = (tmp_807_fu_7953_p3.read() ^ tmp_808_fu_7966_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_261_fu_8074_p2() {
    xor_ln340_261_fu_8074_p2 = (tmp_809_fu_8041_p3.read() ^ tmp_810_fu_8054_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_262_fu_8162_p2() {
    xor_ln340_262_fu_8162_p2 = (tmp_811_fu_8129_p3.read() ^ tmp_812_fu_8142_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_263_fu_8250_p2() {
    xor_ln340_263_fu_8250_p2 = (tmp_813_fu_8217_p3.read() ^ tmp_814_fu_8230_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_264_fu_8338_p2() {
    xor_ln340_264_fu_8338_p2 = (tmp_815_fu_8305_p3.read() ^ tmp_816_fu_8318_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_265_fu_8426_p2() {
    xor_ln340_265_fu_8426_p2 = (tmp_817_fu_8393_p3.read() ^ tmp_818_fu_8406_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_266_fu_8514_p2() {
    xor_ln340_266_fu_8514_p2 = (tmp_819_fu_8481_p3.read() ^ tmp_820_fu_8494_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_267_fu_8602_p2() {
    xor_ln340_267_fu_8602_p2 = (tmp_821_fu_8569_p3.read() ^ tmp_822_fu_8582_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_268_fu_8690_p2() {
    xor_ln340_268_fu_8690_p2 = (tmp_823_fu_8657_p3.read() ^ tmp_824_fu_8670_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_269_fu_8778_p2() {
    xor_ln340_269_fu_8778_p2 = (tmp_825_fu_8745_p3.read() ^ tmp_826_fu_8758_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_26_fu_8784_p2() {
    xor_ln340_26_fu_8784_p2 = (tmp_825_fu_8745_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_270_fu_8866_p2() {
    xor_ln340_270_fu_8866_p2 = (tmp_827_fu_8833_p3.read() ^ tmp_828_fu_8846_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_271_fu_8954_p2() {
    xor_ln340_271_fu_8954_p2 = (tmp_829_fu_8921_p3.read() ^ tmp_830_fu_8934_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_272_fu_9042_p2() {
    xor_ln340_272_fu_9042_p2 = (tmp_831_fu_9009_p3.read() ^ tmp_832_fu_9022_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_273_fu_9130_p2() {
    xor_ln340_273_fu_9130_p2 = (tmp_833_fu_9097_p3.read() ^ tmp_834_fu_9110_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_274_fu_9218_p2() {
    xor_ln340_274_fu_9218_p2 = (tmp_835_fu_9185_p3.read() ^ tmp_836_fu_9198_p3.read());
}

void pgconv64_1bit::thread_xor_ln340_27_fu_8872_p2() {
    xor_ln340_27_fu_8872_p2 = (tmp_827_fu_8833_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_28_fu_8960_p2() {
    xor_ln340_28_fu_8960_p2 = (tmp_829_fu_8921_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_29_fu_9048_p2() {
    xor_ln340_29_fu_9048_p2 = (tmp_831_fu_9009_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_2_fu_6672_p2() {
    xor_ln340_2_fu_6672_p2 = (tmp_777_fu_6633_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_30_fu_9136_p2() {
    xor_ln340_30_fu_9136_p2 = (tmp_833_fu_9097_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_31_fu_9224_p2() {
    xor_ln340_31_fu_9224_p2 = (tmp_835_fu_9185_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_3_fu_6760_p2() {
    xor_ln340_3_fu_6760_p2 = (tmp_779_fu_6721_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_4_fu_6848_p2() {
    xor_ln340_4_fu_6848_p2 = (tmp_781_fu_6809_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_5_fu_6936_p2() {
    xor_ln340_5_fu_6936_p2 = (tmp_783_fu_6897_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_6_fu_7024_p2() {
    xor_ln340_6_fu_7024_p2 = (tmp_785_fu_6985_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_7_fu_7112_p2() {
    xor_ln340_7_fu_7112_p2 = (tmp_787_fu_7073_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_8_fu_7200_p2() {
    xor_ln340_8_fu_7200_p2 = (tmp_789_fu_7161_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_9_fu_7288_p2() {
    xor_ln340_9_fu_7288_p2 = (tmp_791_fu_7249_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln340_fu_6496_p2() {
    xor_ln340_fu_6496_p2 = (tmp_773_fu_6457_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_10_fu_7358_p2() {
    xor_ln786_10_fu_7358_p2 = (tmp_794_fu_7350_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_11_fu_7446_p2() {
    xor_ln786_11_fu_7446_p2 = (tmp_796_fu_7438_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_12_fu_7534_p2() {
    xor_ln786_12_fu_7534_p2 = (tmp_798_fu_7526_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_13_fu_7622_p2() {
    xor_ln786_13_fu_7622_p2 = (tmp_800_fu_7614_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_14_fu_7710_p2() {
    xor_ln786_14_fu_7710_p2 = (tmp_802_fu_7702_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_15_fu_7798_p2() {
    xor_ln786_15_fu_7798_p2 = (tmp_804_fu_7790_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_16_fu_7886_p2() {
    xor_ln786_16_fu_7886_p2 = (tmp_806_fu_7878_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_17_fu_7974_p2() {
    xor_ln786_17_fu_7974_p2 = (tmp_808_fu_7966_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_18_fu_8062_p2() {
    xor_ln786_18_fu_8062_p2 = (tmp_810_fu_8054_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_19_fu_8150_p2() {
    xor_ln786_19_fu_8150_p2 = (tmp_812_fu_8142_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_1_fu_6566_p2() {
    xor_ln786_1_fu_6566_p2 = (tmp_776_fu_6558_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_20_fu_8238_p2() {
    xor_ln786_20_fu_8238_p2 = (tmp_814_fu_8230_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_21_fu_8326_p2() {
    xor_ln786_21_fu_8326_p2 = (tmp_816_fu_8318_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_22_fu_8414_p2() {
    xor_ln786_22_fu_8414_p2 = (tmp_818_fu_8406_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_23_fu_8502_p2() {
    xor_ln786_23_fu_8502_p2 = (tmp_820_fu_8494_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_24_fu_8590_p2() {
    xor_ln786_24_fu_8590_p2 = (tmp_822_fu_8582_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_25_fu_8678_p2() {
    xor_ln786_25_fu_8678_p2 = (tmp_824_fu_8670_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_26_fu_8766_p2() {
    xor_ln786_26_fu_8766_p2 = (tmp_826_fu_8758_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_27_fu_8854_p2() {
    xor_ln786_27_fu_8854_p2 = (tmp_828_fu_8846_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_28_fu_8942_p2() {
    xor_ln786_28_fu_8942_p2 = (tmp_830_fu_8934_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_29_fu_9030_p2() {
    xor_ln786_29_fu_9030_p2 = (tmp_832_fu_9022_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_2_fu_6654_p2() {
    xor_ln786_2_fu_6654_p2 = (tmp_778_fu_6646_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_30_fu_9118_p2() {
    xor_ln786_30_fu_9118_p2 = (tmp_834_fu_9110_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_31_fu_9206_p2() {
    xor_ln786_31_fu_9206_p2 = (tmp_836_fu_9198_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_3_fu_6742_p2() {
    xor_ln786_3_fu_6742_p2 = (tmp_780_fu_6734_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_4_fu_6830_p2() {
    xor_ln786_4_fu_6830_p2 = (tmp_782_fu_6822_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_5_fu_6918_p2() {
    xor_ln786_5_fu_6918_p2 = (tmp_784_fu_6910_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_6_fu_7006_p2() {
    xor_ln786_6_fu_7006_p2 = (tmp_786_fu_6998_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_7_fu_7094_p2() {
    xor_ln786_7_fu_7094_p2 = (tmp_788_fu_7086_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_8_fu_7182_p2() {
    xor_ln786_8_fu_7182_p2 = (tmp_790_fu_7174_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_9_fu_7270_p2() {
    xor_ln786_9_fu_7270_p2 = (tmp_792_fu_7262_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_xor_ln786_fu_6478_p2() {
    xor_ln786_fu_6478_p2 = (tmp_774_fu_6470_p3.read() ^ ap_const_lv1_1);
}

void pgconv64_1bit::thread_zext_ln500_fu_6105_p1() {
    zext_ln500_fu_6105_p1 = esl_zext<5,4>(col_2_reg_10163.read());
}

void pgconv64_1bit::thread_zext_ln510_1_fu_5916_p1() {
    zext_ln510_1_fu_5916_p1 = esl_zext<4,3>(add_ln510_fu_5910_p2.read());
}

void pgconv64_1bit::thread_zext_ln510_fu_5819_p1() {
    zext_ln510_fu_5819_p1 = esl_zext<4,3>(row0_fu_5813_p2.read());
}

void pgconv64_1bit::thread_zext_ln511_fu_6067_p1() {
    zext_ln511_fu_6067_p1 = esl_zext<4,3>(col_fu_6061_p2.read());
}

void pgconv64_1bit::thread_zext_ln531_1_fu_6404_p1() {
    zext_ln531_1_fu_6404_p1 = esl_zext<8,4>(select_ln505_1_reg_10086_pp0_iter2_reg.read());
}

void pgconv64_1bit::thread_zext_ln531_2_fu_6414_p1() {
    zext_ln531_2_fu_6414_p1 = esl_zext<8,7>(tmp_12_fu_6407_p3.read());
}

void pgconv64_1bit::thread_zext_ln531_3_fu_6424_p1() {
    zext_ln531_3_fu_6424_p1 = esl_zext<8,4>(col_2_reg_10163_pp0_iter2_reg.read());
}

void pgconv64_1bit::thread_zext_ln531_4_fu_6433_p1() {
    zext_ln531_4_fu_6433_p1 = esl_zext<64,8>(add_ln531_1_fu_6427_p2.read());
}

void pgconv64_1bit::thread_zext_ln531_fu_6092_p1() {
    zext_ln531_fu_6092_p1 = esl_zext<64,4>(col_2_fu_6085_p3.read());
}

void pgconv64_1bit::thread_zext_ln534_fu_6133_p1() {
    zext_ln534_fu_6133_p1 = esl_zext<64,5>(add_ln534_fu_6127_p2.read());
}

}

