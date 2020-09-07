#include "ResNet.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ResNet::thread_fm_buf_V_30_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_30_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_30_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_30_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_30_ce1.read();
    } else {
        fm_buf_V_30_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_30_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_30_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_30_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_30_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_30_d1.read();
    } else {
        fm_buf_V_30_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_30_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_30_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_30_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_30_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_30_we1.read();
    } else {
        fm_buf_V_30_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_31_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_31_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_31_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_31_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_31_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_31_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_31_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_31_address0.read();
    } else {
        fm_buf_V_31_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_31_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_31_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_31_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_31_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_31_address1.read();
    } else {
        fm_buf_V_31_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_31_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_31_ce0 = ap_const_logic_1;
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
        fm_buf_V_31_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_31_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_31_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_31_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_31_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_31_ce0.read();
    } else {
        fm_buf_V_31_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_31_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_31_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_31_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_31_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_31_ce1.read();
    } else {
        fm_buf_V_31_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_31_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_31_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_31_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_31_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_31_d1.read();
    } else {
        fm_buf_V_31_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_31_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_31_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_31_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_31_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_31_we1.read();
    } else {
        fm_buf_V_31_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_32_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_32_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_32_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_32_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_32_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_32_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_32_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_32_address0.read();
    } else {
        fm_buf_V_32_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_32_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_32_ce0 = ap_const_logic_1;
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
        fm_buf_V_32_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_32_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_32_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_32_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_32_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_32_ce0.read();
    } else {
        fm_buf_V_32_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_32_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_32_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_32_ce1.read();
    } else {
        fm_buf_V_32_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_32_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_32_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_32_we1.read();
    } else {
        fm_buf_V_32_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_33_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_33_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_33_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_33_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_33_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_33_address0.read();
    } else {
        fm_buf_V_33_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_33_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_33_ce0 = ap_const_logic_1;
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
        fm_buf_V_33_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_33_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_33_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_33_ce0.read();
    } else {
        fm_buf_V_33_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_33_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_33_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_33_ce1.read();
    } else {
        fm_buf_V_33_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_33_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_33_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_33_we1.read();
    } else {
        fm_buf_V_33_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_34_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_34_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_34_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_34_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_34_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_34_address0.read();
    } else {
        fm_buf_V_34_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_34_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_34_ce0 = ap_const_logic_1;
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
        fm_buf_V_34_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_34_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_34_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_34_ce0.read();
    } else {
        fm_buf_V_34_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_34_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_34_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_34_ce1.read();
    } else {
        fm_buf_V_34_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_34_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_34_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_34_we1.read();
    } else {
        fm_buf_V_34_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_35_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_35_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_35_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_35_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_35_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_35_address0.read();
    } else {
        fm_buf_V_35_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_35_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_35_ce0 = ap_const_logic_1;
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
        fm_buf_V_35_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_35_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_35_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_35_ce0.read();
    } else {
        fm_buf_V_35_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_35_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_35_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_35_ce1.read();
    } else {
        fm_buf_V_35_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_35_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_35_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_35_we1.read();
    } else {
        fm_buf_V_35_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_36_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_36_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_36_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_36_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_36_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_36_address0.read();
    } else {
        fm_buf_V_36_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_36_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_36_ce0 = ap_const_logic_1;
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
        fm_buf_V_36_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_36_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_36_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_36_ce0.read();
    } else {
        fm_buf_V_36_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_36_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_36_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_36_ce1.read();
    } else {
        fm_buf_V_36_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_36_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_36_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_36_we1.read();
    } else {
        fm_buf_V_36_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_37_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_37_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_37_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_37_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_37_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_37_address0.read();
    } else {
        fm_buf_V_37_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_37_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_37_ce0 = ap_const_logic_1;
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
        fm_buf_V_37_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_37_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_37_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_37_ce0.read();
    } else {
        fm_buf_V_37_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_37_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_37_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_37_ce1.read();
    } else {
        fm_buf_V_37_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_37_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_37_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_37_we1.read();
    } else {
        fm_buf_V_37_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_38_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_38_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_38_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_38_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_38_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_38_address0.read();
    } else {
        fm_buf_V_38_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_38_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_38_ce0 = ap_const_logic_1;
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
        fm_buf_V_38_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_38_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_38_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_38_ce0.read();
    } else {
        fm_buf_V_38_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_38_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_38_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_38_ce1.read();
    } else {
        fm_buf_V_38_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_38_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_38_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_38_we1.read();
    } else {
        fm_buf_V_38_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_39_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_39_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_39_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_39_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_39_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_39_address0.read();
    } else {
        fm_buf_V_39_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_39_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_39_ce0 = ap_const_logic_1;
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
        fm_buf_V_39_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_39_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_39_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_39_ce0.read();
    } else {
        fm_buf_V_39_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_39_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_39_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_39_ce1.read();
    } else {
        fm_buf_V_39_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_39_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_39_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_39_we1.read();
    } else {
        fm_buf_V_39_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_3_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_3_address0 =  (sc_lv<11>) (zext_ln203_3_fu_6716_p1.read());
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
        fm_buf_V_3_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_3_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_3_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_3_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_3_address0.read();
    } else {
        fm_buf_V_3_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_3_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_3_address1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_3_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_3_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_3_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_3_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_3_address1.read();
    } else {
        fm_buf_V_3_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        fm_buf_V_3_ce0 = ap_const_logic_1;
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
        fm_buf_V_3_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_3_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_3_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_3_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_3_ce0.read();
    } else {
        fm_buf_V_3_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_3_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_3_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_3_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_3_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_3_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_3_ce1.read();
    } else {
        fm_buf_V_3_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_3_d0() {
    fm_buf_V_3_d0 = (!or_ln340_271_fu_7829_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_271_fu_7829_p2.read()[0].to_bool())? select_ln340_3_fu_7835_p3.read(): select_ln388_3_fu_7843_p3.read());
}

void ResNet::thread_fm_buf_V_3_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_3_d1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_3_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_3_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_3_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_3_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_3_d1.read();
    } else {
        fm_buf_V_3_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln119_reg_22129.read()))) {
        fm_buf_V_3_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_3_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_3_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_3_we1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_3_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_3_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_3_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_3_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_3_we1.read();
    } else {
        fm_buf_V_3_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_40_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_40_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_40_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_40_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_40_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_40_address0.read();
    } else {
        fm_buf_V_40_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_40_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_40_ce0 = ap_const_logic_1;
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
        fm_buf_V_40_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_40_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_40_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_40_ce0.read();
    } else {
        fm_buf_V_40_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_40_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_40_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_40_ce1.read();
    } else {
        fm_buf_V_40_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_40_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_40_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_40_we1.read();
    } else {
        fm_buf_V_40_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_41_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_41_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_41_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_41_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_41_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_41_address0.read();
    } else {
        fm_buf_V_41_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_41_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_41_ce0 = ap_const_logic_1;
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
        fm_buf_V_41_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_41_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_41_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_41_ce0.read();
    } else {
        fm_buf_V_41_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_41_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_41_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_41_ce1.read();
    } else {
        fm_buf_V_41_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_41_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_41_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_41_we1.read();
    } else {
        fm_buf_V_41_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_42_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_42_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_42_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_42_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_42_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_42_address0.read();
    } else {
        fm_buf_V_42_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_42_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_42_ce0 = ap_const_logic_1;
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
        fm_buf_V_42_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_42_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_42_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_42_ce0.read();
    } else {
        fm_buf_V_42_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_42_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_42_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_42_ce1.read();
    } else {
        fm_buf_V_42_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_42_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_42_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_42_we1.read();
    } else {
        fm_buf_V_42_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_43_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_43_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_43_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_43_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_43_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_43_address0.read();
    } else {
        fm_buf_V_43_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_43_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_43_ce0 = ap_const_logic_1;
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
        fm_buf_V_43_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_43_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_43_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_43_ce0.read();
    } else {
        fm_buf_V_43_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_43_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_43_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_43_ce1.read();
    } else {
        fm_buf_V_43_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_43_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_43_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_43_we1.read();
    } else {
        fm_buf_V_43_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_44_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_44_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_44_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_44_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_44_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_44_address0.read();
    } else {
        fm_buf_V_44_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_44_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_44_ce0 = ap_const_logic_1;
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
        fm_buf_V_44_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_44_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_44_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_44_ce0.read();
    } else {
        fm_buf_V_44_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_44_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_44_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_44_ce1.read();
    } else {
        fm_buf_V_44_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_44_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_44_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_44_we1.read();
    } else {
        fm_buf_V_44_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_45_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_45_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_45_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_45_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_45_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_45_address0.read();
    } else {
        fm_buf_V_45_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_45_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_45_ce0 = ap_const_logic_1;
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
        fm_buf_V_45_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_45_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_45_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_45_ce0.read();
    } else {
        fm_buf_V_45_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_45_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_45_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_45_ce1.read();
    } else {
        fm_buf_V_45_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_45_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_45_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_45_we1.read();
    } else {
        fm_buf_V_45_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_46_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_46_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_46_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_46_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_46_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_46_address0.read();
    } else {
        fm_buf_V_46_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_46_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_46_ce0 = ap_const_logic_1;
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
        fm_buf_V_46_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_46_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_46_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_46_ce0.read();
    } else {
        fm_buf_V_46_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_46_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_46_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_46_ce1.read();
    } else {
        fm_buf_V_46_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_46_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_46_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_46_we1.read();
    } else {
        fm_buf_V_46_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_47_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_47_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_47_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_47_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_47_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_47_address0.read();
    } else {
        fm_buf_V_47_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_47_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_47_ce0 = ap_const_logic_1;
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
        fm_buf_V_47_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_47_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_47_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_47_ce0.read();
    } else {
        fm_buf_V_47_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_47_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_47_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_47_ce1.read();
    } else {
        fm_buf_V_47_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_47_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_47_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_47_we1.read();
    } else {
        fm_buf_V_47_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_48_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_48_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_48_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_48_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_48_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_48_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_48_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_48_address0.read();
    } else {
        fm_buf_V_48_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_48_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_48_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_48_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_48_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_48_address1.read();
    } else {
        fm_buf_V_48_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_48_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_48_ce0 = ap_const_logic_1;
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
        fm_buf_V_48_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_48_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_48_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_48_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_48_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_48_ce0.read();
    } else {
        fm_buf_V_48_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_48_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_48_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_48_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_48_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_48_ce1.read();
    } else {
        fm_buf_V_48_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_48_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_48_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_48_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_48_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_48_d1.read();
    } else {
        fm_buf_V_48_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_48_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_48_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_48_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_48_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_48_we1.read();
    } else {
        fm_buf_V_48_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_49_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_49_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_49_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_49_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_49_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_49_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_49_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_49_address0.read();
    } else {
        fm_buf_V_49_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_49_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_49_ce0 = ap_const_logic_1;
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
        fm_buf_V_49_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_49_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_49_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_49_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_49_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_49_ce0.read();
    } else {
        fm_buf_V_49_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_49_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_49_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_49_ce1.read();
    } else {
        fm_buf_V_49_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_49_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_49_we0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_49_we0.read();
    } else {
        fm_buf_V_49_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_49_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_49_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_49_we1.read();
    } else {
        fm_buf_V_49_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_4_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_4_address0 =  (sc_lv<11>) (zext_ln203_3_fu_6716_p1.read());
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
        fm_buf_V_4_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_4_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_4_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_4_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_4_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_4_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_4_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_4_address0.read();
    } else {
        fm_buf_V_4_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_4_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_4_address1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_4_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_4_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_4_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_4_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_4_address1.read();
    } else {
        fm_buf_V_4_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        fm_buf_V_4_ce0 = ap_const_logic_1;
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
        fm_buf_V_4_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_4_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_4_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_4_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_4_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_4_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_4_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_4_ce0.read();
    } else {
        fm_buf_V_4_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_4_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_4_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_4_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_4_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_4_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_4_ce1.read();
    } else {
        fm_buf_V_4_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_4_d0() {
    fm_buf_V_4_d0 = (!or_ln340_273_fu_8110_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_273_fu_8110_p2.read()[0].to_bool())? select_ln340_68_fu_8116_p3.read(): select_ln388_67_fu_8124_p3.read());
}

void ResNet::thread_fm_buf_V_4_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_4_d1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_4_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_4_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_4_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_4_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_4_d1.read();
    } else {
        fm_buf_V_4_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln119_reg_22129.read()))) {
        fm_buf_V_4_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_4_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_4_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_4_we1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_4_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_4_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_4_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_4_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_4_we1.read();
    } else {
        fm_buf_V_4_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_50_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_50_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_50_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_50_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_50_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_50_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_50_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_50_address0.read();
    } else {
        fm_buf_V_50_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_50_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_50_ce0 = ap_const_logic_1;
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
        fm_buf_V_50_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_50_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_50_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_50_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_50_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_50_ce0.read();
    } else {
        fm_buf_V_50_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_50_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_50_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_50_ce1.read();
    } else {
        fm_buf_V_50_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_50_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_50_we0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_50_we0.read();
    } else {
        fm_buf_V_50_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_50_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_50_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_50_we1.read();
    } else {
        fm_buf_V_50_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_51_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_51_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_51_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_51_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_51_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_51_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_51_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_51_address0.read();
    } else {
        fm_buf_V_51_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_51_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_51_ce0 = ap_const_logic_1;
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
        fm_buf_V_51_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_51_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_51_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_51_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_51_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_51_ce0.read();
    } else {
        fm_buf_V_51_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_51_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_51_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_51_ce1.read();
    } else {
        fm_buf_V_51_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_51_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_51_we0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_51_we0.read();
    } else {
        fm_buf_V_51_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_51_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_51_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_51_we1.read();
    } else {
        fm_buf_V_51_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_52_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_52_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_52_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_52_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_52_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_52_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_52_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_52_address0.read();
    } else {
        fm_buf_V_52_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_52_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_52_ce0 = ap_const_logic_1;
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
        fm_buf_V_52_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_52_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_52_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_52_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_52_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_52_ce0.read();
    } else {
        fm_buf_V_52_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_52_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_52_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_52_ce1.read();
    } else {
        fm_buf_V_52_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_52_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_52_we0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_52_we0.read();
    } else {
        fm_buf_V_52_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_52_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_52_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_52_we1.read();
    } else {
        fm_buf_V_52_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_53_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_53_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_53_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_53_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_53_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_53_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_53_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_53_address0.read();
    } else {
        fm_buf_V_53_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_53_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_53_ce0 = ap_const_logic_1;
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
        fm_buf_V_53_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_53_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_53_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_53_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_53_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_53_ce0.read();
    } else {
        fm_buf_V_53_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_53_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_53_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_53_ce1.read();
    } else {
        fm_buf_V_53_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_53_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_53_we0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_53_we0.read();
    } else {
        fm_buf_V_53_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_53_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_53_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_53_we1.read();
    } else {
        fm_buf_V_53_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_54_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_54_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_54_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_54_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_54_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_54_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_54_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_54_address0.read();
    } else {
        fm_buf_V_54_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_54_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_54_ce0 = ap_const_logic_1;
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
        fm_buf_V_54_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_54_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_54_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_54_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_54_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_54_ce0.read();
    } else {
        fm_buf_V_54_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_54_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_54_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_54_ce1.read();
    } else {
        fm_buf_V_54_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_54_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_54_we0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_54_we0.read();
    } else {
        fm_buf_V_54_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_54_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_54_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_54_we1.read();
    } else {
        fm_buf_V_54_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_55_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_55_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_55_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_55_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_55_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_55_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_55_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_55_address0.read();
    } else {
        fm_buf_V_55_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_55_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_55_ce0 = ap_const_logic_1;
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
        fm_buf_V_55_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_55_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_55_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_55_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_55_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_55_ce0.read();
    } else {
        fm_buf_V_55_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_55_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_55_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_55_ce1.read();
    } else {
        fm_buf_V_55_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_55_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_55_we0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_55_we0.read();
    } else {
        fm_buf_V_55_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_55_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_55_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_55_we1.read();
    } else {
        fm_buf_V_55_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_56_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_56_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_56_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_56_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_56_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_56_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_56_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_56_address0.read();
    } else {
        fm_buf_V_56_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_56_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_56_ce0 = ap_const_logic_1;
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
        fm_buf_V_56_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_56_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_56_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_56_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_56_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_56_ce0.read();
    } else {
        fm_buf_V_56_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_56_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_56_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_56_ce1.read();
    } else {
        fm_buf_V_56_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_56_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_56_we0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_56_we0.read();
    } else {
        fm_buf_V_56_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_56_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_56_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_56_we1.read();
    } else {
        fm_buf_V_56_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_57_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_57_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_57_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_57_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_57_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_57_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_57_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_57_address0.read();
    } else {
        fm_buf_V_57_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_57_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_57_ce0 = ap_const_logic_1;
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
        fm_buf_V_57_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_57_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_57_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_57_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_57_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_57_ce0.read();
    } else {
        fm_buf_V_57_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_57_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_57_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_57_ce1.read();
    } else {
        fm_buf_V_57_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_57_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_57_we0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_57_we0.read();
    } else {
        fm_buf_V_57_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_57_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_57_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_57_we1.read();
    } else {
        fm_buf_V_57_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_58_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_58_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_58_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_58_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_58_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_58_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_58_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_58_address0.read();
    } else {
        fm_buf_V_58_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_58_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_58_ce0 = ap_const_logic_1;
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
        fm_buf_V_58_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_58_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_58_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_58_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_58_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_58_ce0.read();
    } else {
        fm_buf_V_58_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_58_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_58_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_58_ce1.read();
    } else {
        fm_buf_V_58_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_58_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_58_we0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_58_we0.read();
    } else {
        fm_buf_V_58_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_58_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_58_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_58_we1.read();
    } else {
        fm_buf_V_58_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_59_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_59_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_59_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_59_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_59_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_59_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_59_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_59_address0.read();
    } else {
        fm_buf_V_59_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_59_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_59_ce0 = ap_const_logic_1;
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
        fm_buf_V_59_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_59_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_59_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_59_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_59_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_59_ce0.read();
    } else {
        fm_buf_V_59_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_59_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_59_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_59_ce1.read();
    } else {
        fm_buf_V_59_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_59_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_59_we0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_59_we0.read();
    } else {
        fm_buf_V_59_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_59_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_59_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_59_we1.read();
    } else {
        fm_buf_V_59_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_5_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_5_address0 =  (sc_lv<11>) (zext_ln203_3_fu_6716_p1.read());
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
        fm_buf_V_5_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_5_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_5_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_5_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_5_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_5_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_5_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_5_address0.read();
    } else {
        fm_buf_V_5_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_5_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_5_address1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_5_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_5_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_5_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_5_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_5_address1.read();
    } else {
        fm_buf_V_5_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        fm_buf_V_5_ce0 = ap_const_logic_1;
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
        fm_buf_V_5_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_5_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_5_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_5_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_5_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_5_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_5_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_5_ce0.read();
    } else {
        fm_buf_V_5_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_5_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_5_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_5_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_5_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_5_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_5_ce1.read();
    } else {
        fm_buf_V_5_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_5_d0() {
    fm_buf_V_5_d0 = (!or_ln340_275_fu_8391_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_275_fu_8391_p2.read()[0].to_bool())? select_ln340_72_fu_8397_p3.read(): select_ln388_69_fu_8405_p3.read());
}

void ResNet::thread_fm_buf_V_5_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_5_d1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_5_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_5_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_5_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_5_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_5_d1.read();
    } else {
        fm_buf_V_5_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln119_reg_22129.read()))) {
        fm_buf_V_5_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_5_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_5_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_5_we1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_5_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_5_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_5_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_5_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_5_we1.read();
    } else {
        fm_buf_V_5_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_60_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_60_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_60_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_60_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_60_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_60_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_60_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_60_address0.read();
    } else {
        fm_buf_V_60_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_60_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_60_ce0 = ap_const_logic_1;
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
        fm_buf_V_60_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_60_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_60_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_60_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_60_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_60_ce0.read();
    } else {
        fm_buf_V_60_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_60_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_60_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_60_ce1.read();
    } else {
        fm_buf_V_60_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_60_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_60_we0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_60_we0.read();
    } else {
        fm_buf_V_60_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_60_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_60_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_60_we1.read();
    } else {
        fm_buf_V_60_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_61_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_61_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_61_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_61_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_61_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_61_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_61_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_61_address0.read();
    } else {
        fm_buf_V_61_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_61_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_61_ce0 = ap_const_logic_1;
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
        fm_buf_V_61_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_61_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_61_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_61_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_61_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_61_ce0.read();
    } else {
        fm_buf_V_61_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_61_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_61_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_61_ce1.read();
    } else {
        fm_buf_V_61_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_61_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_61_we0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_61_we0.read();
    } else {
        fm_buf_V_61_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_61_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_61_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_61_we1.read();
    } else {
        fm_buf_V_61_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_62_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_62_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_62_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_62_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_62_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_62_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_62_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_62_address0.read();
    } else {
        fm_buf_V_62_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_62_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_62_ce0 = ap_const_logic_1;
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
        fm_buf_V_62_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_62_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_62_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_62_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_62_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_62_ce0.read();
    } else {
        fm_buf_V_62_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_62_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_62_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_62_ce1.read();
    } else {
        fm_buf_V_62_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_62_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_62_we0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_62_we0.read();
    } else {
        fm_buf_V_62_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_62_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_62_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_62_we1.read();
    } else {
        fm_buf_V_62_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_63_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_63_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
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
        fm_buf_V_63_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_63_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_63_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_63_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_63_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_63_address0.read();
    } else {
        fm_buf_V_63_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_63_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_63_ce0 = ap_const_logic_1;
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
        fm_buf_V_63_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_63_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_63_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_63_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_63_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_63_ce0.read();
    } else {
        fm_buf_V_63_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_63_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_63_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_63_ce1.read();
    } else {
        fm_buf_V_63_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_63_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_63_we0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_63_we0.read();
    } else {
        fm_buf_V_63_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_63_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_63_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_63_we1.read();
    } else {
        fm_buf_V_63_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_6_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_6_address0 =  (sc_lv<11>) (zext_ln203_3_fu_6716_p1.read());
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
        fm_buf_V_6_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_6_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_6_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_6_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_6_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_6_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_6_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_6_address0.read();
    } else {
        fm_buf_V_6_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_6_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_6_address1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_6_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_6_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_6_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_6_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_6_address1.read();
    } else {
        fm_buf_V_6_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        fm_buf_V_6_ce0 = ap_const_logic_1;
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
        fm_buf_V_6_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_6_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_6_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_6_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_6_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_6_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_6_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_6_ce0.read();
    } else {
        fm_buf_V_6_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_6_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_6_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_6_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_6_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_6_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_6_ce1.read();
    } else {
        fm_buf_V_6_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_6_d0() {
    fm_buf_V_6_d0 = (!or_ln340_277_fu_8672_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_277_fu_8672_p2.read()[0].to_bool())? select_ln340_6_fu_8678_p3.read(): select_ln388_6_fu_8686_p3.read());
}

void ResNet::thread_fm_buf_V_6_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_6_d1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_6_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_6_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_6_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_6_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_6_d1.read();
    } else {
        fm_buf_V_6_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln119_reg_22129.read()))) {
        fm_buf_V_6_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_6_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_6_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_6_we1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_6_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_6_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_6_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_6_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_6_we1.read();
    } else {
        fm_buf_V_6_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_7_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_7_address0 =  (sc_lv<11>) (zext_ln203_3_fu_6716_p1.read());
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
        fm_buf_V_7_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_7_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_7_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_7_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_7_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_7_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_7_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_7_address0.read();
    } else {
        fm_buf_V_7_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_7_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_7_address1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_7_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_7_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_7_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_7_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_7_address1.read();
    } else {
        fm_buf_V_7_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        fm_buf_V_7_ce0 = ap_const_logic_1;
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
        fm_buf_V_7_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_7_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_7_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_7_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_7_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_7_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_7_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_7_ce0.read();
    } else {
        fm_buf_V_7_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_7_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_7_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_7_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_7_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_7_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_7_ce1.read();
    } else {
        fm_buf_V_7_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_7_d0() {
    fm_buf_V_7_d0 = (!or_ln340_279_fu_8953_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_279_fu_8953_p2.read()[0].to_bool())? select_ln340_7_fu_8959_p3.read(): select_ln388_7_fu_8967_p3.read());
}

void ResNet::thread_fm_buf_V_7_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_7_d1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_7_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_7_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_7_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_7_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_7_d1.read();
    } else {
        fm_buf_V_7_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln119_reg_22129.read()))) {
        fm_buf_V_7_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_7_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_7_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_7_we1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_7_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_7_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_7_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_7_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_7_we1.read();
    } else {
        fm_buf_V_7_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_8_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_8_address0 =  (sc_lv<11>) (zext_ln203_3_fu_6716_p1.read());
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
        fm_buf_V_8_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_8_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_8_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_8_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_8_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_8_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_8_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_8_address0.read();
    } else {
        fm_buf_V_8_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_8_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_8_address1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_8_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_8_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_8_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_8_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_8_address1.read();
    } else {
        fm_buf_V_8_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        fm_buf_V_8_ce0 = ap_const_logic_1;
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
        fm_buf_V_8_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_8_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_8_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_8_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_8_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_8_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_8_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_8_ce0.read();
    } else {
        fm_buf_V_8_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_8_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_8_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_8_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_8_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_8_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_8_ce1.read();
    } else {
        fm_buf_V_8_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_8_d0() {
    fm_buf_V_8_d0 = (!or_ln340_281_fu_9234_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_281_fu_9234_p2.read()[0].to_bool())? select_ln340_8_fu_9240_p3.read(): select_ln388_8_fu_9248_p3.read());
}

void ResNet::thread_fm_buf_V_8_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_8_d1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_8_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_8_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_8_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_8_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_8_d1.read();
    } else {
        fm_buf_V_8_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln119_reg_22129.read()))) {
        fm_buf_V_8_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_8_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_8_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_8_we1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_8_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_8_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_8_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_8_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_8_we1.read();
    } else {
        fm_buf_V_8_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_9_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_9_address0 =  (sc_lv<11>) (zext_ln203_3_fu_6716_p1.read());
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
        fm_buf_V_9_address0 = grp_fill_fm_buf_fu_4433_fm_buf_V_9_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_9_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_9_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_9_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_9_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_9_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_9_address0.read();
    } else {
        fm_buf_V_9_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_9_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_9_address1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_9_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_9_address1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_9_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_9_address1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_9_address1.read();
    } else {
        fm_buf_V_9_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        fm_buf_V_9_ce0 = ap_const_logic_1;
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
        fm_buf_V_9_ce0 = grp_fill_fm_buf_fu_4433_fm_buf_V_9_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_9_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_9_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_9_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_9_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_9_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_9_ce0.read();
    } else {
        fm_buf_V_9_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_9_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_9_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_9_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_9_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_9_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_9_ce1.read();
    } else {
        fm_buf_V_9_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_9_d0() {
    fm_buf_V_9_d0 = (!or_ln340_283_fu_9515_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_283_fu_9515_p2.read()[0].to_bool())? select_ln340_9_fu_9521_p3.read(): select_ln388_9_fu_9529_p3.read());
}

void ResNet::thread_fm_buf_V_9_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_9_d1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_9_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_9_d1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_9_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_9_d1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_9_d1.read();
    } else {
        fm_buf_V_9_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln119_reg_22129.read()))) {
        fm_buf_V_9_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_9_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_9_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        fm_buf_V_9_we1 = grp_fill_fm_buf_bn_16u_s_fu_4176_fm_buf_V_9_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        fm_buf_V_9_we1 = grp_fill_fm_buf_bn_32u_s_fu_4025_fm_buf_V_9_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        fm_buf_V_9_we1 = grp_fill_fm_buf_bn_64u_s_fu_3847_fm_buf_V_9_we1.read();
    } else {
        fm_buf_V_9_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_grp_biconv16_fu_3801_ap_start() {
    grp_biconv16_fu_3801_ap_start = grp_biconv16_fu_3801_ap_start_reg.read();
}

void ResNet::thread_grp_fill_fm_buf_bn_16u_s_fu_4176_ap_start() {
    grp_fill_fm_buf_bn_16u_s_fu_4176_ap_start = grp_fill_fm_buf_bn_16u_s_fu_4176_ap_start_reg.read();
}

void ResNet::thread_grp_fill_fm_buf_bn_16u_s_fu_4176_col() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        grp_fill_fm_buf_bn_16u_s_fu_4176_col = col29_0_reg_2528.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()))) {
        grp_fill_fm_buf_bn_16u_s_fu_4176_col = col27_0_reg_2504.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()))) {
        grp_fill_fm_buf_bn_16u_s_fu_4176_col = col25_0_reg_2480.read();
    } else {
        grp_fill_fm_buf_bn_16u_s_fu_4176_col =  (sc_lv<3>) ("XXX");
    }
}

void ResNet::thread_grp_fill_fm_buf_bn_16u_s_fu_4176_row() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        grp_fill_fm_buf_bn_16u_s_fu_4176_row = row28_0_reg_2516.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()))) {
        grp_fill_fm_buf_bn_16u_s_fu_4176_row = row26_0_reg_2492.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()))) {
        grp_fill_fm_buf_bn_16u_s_fu_4176_row = row24_0_reg_2468.read();
    } else {
        grp_fill_fm_buf_bn_16u_s_fu_4176_row =  (sc_lv<3>) ("XXX");
    }
}

void ResNet::thread_grp_fill_fm_buf_bn_32u_s_fu_4025_ap_start() {
    grp_fill_fm_buf_bn_32u_s_fu_4025_ap_start = grp_fill_fm_buf_bn_32u_s_fu_4025_ap_start_reg.read();
}

void ResNet::thread_grp_fill_fm_buf_bn_32u_s_fu_4025_c_cat() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_fill_fm_buf_bn_32u_s_fu_4025_c_cat = coo45_0_reg_2763.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        grp_fill_fm_buf_bn_32u_s_fu_4025_c_cat = cio43_0_reg_2740.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        grp_fill_fm_buf_bn_32u_s_fu_4025_c_cat = coo39_0_reg_2693.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        grp_fill_fm_buf_bn_32u_s_fu_4025_c_cat = cio37_0_reg_2670.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        grp_fill_fm_buf_bn_32u_s_fu_4025_c_cat = coo_0_reg_2623.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        grp_fill_fm_buf_bn_32u_s_fu_4025_c_cat = ap_const_lv2_0;
    } else {
        grp_fill_fm_buf_bn_32u_s_fu_4025_c_cat =  (sc_lv<2>) ("XX");
    }
}

void ResNet::thread_grp_fill_fm_buf_bn_32u_s_fu_4025_col() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        grp_fill_fm_buf_bn_32u_s_fu_4025_col = col42_0_reg_2728.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()))) {
        grp_fill_fm_buf_bn_32u_s_fu_4025_col = col36_0_reg_2658.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        grp_fill_fm_buf_bn_32u_s_fu_4025_col = col34_0_reg_2611.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        grp_fill_fm_buf_bn_32u_s_fu_4025_col = col31_0_reg_2563.read();
    } else {
        grp_fill_fm_buf_bn_32u_s_fu_4025_col =  (sc_lv<2>) ("XX");
    }
}

void ResNet::thread_grp_fill_fm_buf_bn_32u_s_fu_4025_row() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        grp_fill_fm_buf_bn_32u_s_fu_4025_row = row41_0_reg_2716.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()))) {
        grp_fill_fm_buf_bn_32u_s_fu_4025_row = row35_0_reg_2646.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        grp_fill_fm_buf_bn_32u_s_fu_4025_row = row33_0_reg_2599.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        grp_fill_fm_buf_bn_32u_s_fu_4025_row = row30_0_reg_2551.read();
    } else {
        grp_fill_fm_buf_bn_32u_s_fu_4025_row =  (sc_lv<2>) ("XX");
    }
}

void ResNet::thread_grp_fill_fm_buf_bn_64u_s_fu_3847_ap_start() {
    grp_fill_fm_buf_bn_64u_s_fu_3847_ap_start = grp_fill_fm_buf_bn_64u_s_fu_3847_ap_start_reg.read();
}

void ResNet::thread_grp_fill_fm_buf_bn_64u_s_fu_3847_c() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read())) {
        grp_fill_fm_buf_bn_64u_s_fu_3847_c = coo67_0_0_0_reg_2930.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        grp_fill_fm_buf_bn_64u_s_fu_3847_c = cio65_0_0_0_reg_2906.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read())) {
        grp_fill_fm_buf_bn_64u_s_fu_3847_c = coo61_0_0_0_reg_2882.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        grp_fill_fm_buf_bn_64u_s_fu_3847_c = cio59_0_0_0_reg_2858.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        grp_fill_fm_buf_bn_64u_s_fu_3847_c = coo55_0_0_0_reg_2834.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        grp_fill_fm_buf_bn_64u_s_fu_3847_c = cc_reg_2786.read();
    } else {
        grp_fill_fm_buf_bn_64u_s_fu_3847_c =  (sc_lv<3>) ("XXX");
    }
}

void ResNet::thread_grp_fill_fm_buf_bn_64u_s_fu_3847_c_cat() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read())) {
        grp_fill_fm_buf_bn_64u_s_fu_3847_c_cat = coo67_0_0_0_reg_2930.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        grp_fill_fm_buf_bn_64u_s_fu_3847_c_cat = cio65_0_0_0_reg_2906.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read())) {
        grp_fill_fm_buf_bn_64u_s_fu_3847_c_cat = coo61_0_0_0_reg_2882.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        grp_fill_fm_buf_bn_64u_s_fu_3847_c_cat = cio59_0_0_0_reg_2858.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        grp_fill_fm_buf_bn_64u_s_fu_3847_c_cat = coo55_0_0_0_reg_2834.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        grp_fill_fm_buf_bn_64u_s_fu_3847_c_cat = ap_const_lv3_0;
    } else {
        grp_fill_fm_buf_bn_64u_s_fu_3847_c_cat =  (sc_lv<3>) ("XXX");
    }
}

void ResNet::thread_grp_fill_fm_buf_fu_4433_ap_start() {
    grp_fill_fm_buf_fu_4433_ap_start = grp_fill_fm_buf_fu_4433_ap_start_reg.read();
}

void ResNet::thread_grp_fill_fm_buf_fu_4433_col() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read())) {
        grp_fill_fm_buf_fu_4433_col = zext_ln435_1_reg_22559.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()))) {
        grp_fill_fm_buf_fu_4433_col = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()))) {
        grp_fill_fm_buf_fu_4433_col = zext_ln381_1_reg_22485.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()))) {
        grp_fill_fm_buf_fu_4433_col = zext_ln331_1_reg_22427.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        grp_fill_fm_buf_fu_4433_col = zext_ln299_1_reg_22385.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        grp_fill_fm_buf_fu_4433_col = zext_ln274_1_reg_22359.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()))) {
        grp_fill_fm_buf_fu_4433_col = col29_0_reg_2528.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()))) {
        grp_fill_fm_buf_fu_4433_col = col27_0_reg_2504.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        grp_fill_fm_buf_fu_4433_col = col25_0_reg_2480.read();
    } else {
        grp_fill_fm_buf_fu_4433_col =  (sc_lv<3>) ("XXX");
    }
}

void ResNet::thread_grp_fill_fm_buf_fu_4433_row() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read())) {
        grp_fill_fm_buf_fu_4433_row = zext_ln435_reg_22546.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()))) {
        grp_fill_fm_buf_fu_4433_row = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()))) {
        grp_fill_fm_buf_fu_4433_row = zext_ln381_reg_22472.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()))) {
        grp_fill_fm_buf_fu_4433_row = zext_ln331_reg_22414.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        grp_fill_fm_buf_fu_4433_row = zext_ln299_reg_22372.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        grp_fill_fm_buf_fu_4433_row = zext_ln274_reg_22346.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()))) {
        grp_fill_fm_buf_fu_4433_row = row28_0_reg_2516.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()))) {
        grp_fill_fm_buf_fu_4433_row = row26_0_reg_2492.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        grp_fill_fm_buf_fu_4433_row = row24_0_reg_2468.read();
    } else {
        grp_fill_fm_buf_fu_4433_row =  (sc_lv<3>) ("XXX");
    }
}

void ResNet::thread_grp_matmul_fu_4298_ap_start() {
    grp_matmul_fu_4298_ap_start = grp_matmul_fu_4298_ap_start_reg.read();
}

void ResNet::thread_grp_pgconv64_16u_s_fu_4582_ap_start() {
    grp_pgconv64_16u_s_fu_4582_ap_start = grp_pgconv64_16u_s_fu_4582_ap_start_reg.read();
}

void ResNet::thread_grp_pgconv64_32u_s_fu_4622_ap_start() {
    grp_pgconv64_32u_s_fu_4622_ap_start = grp_pgconv64_32u_s_fu_4622_ap_start_reg.read();
}

void ResNet::thread_grp_pgconv64_64u_s_fu_4252_ap_start() {
    grp_pgconv64_64u_s_fu_4252_ap_start = grp_pgconv64_64u_s_fu_4252_ap_start_reg.read();
}

void ResNet::thread_grp_pgconv64_64u_s_fu_4252_c() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read())) {
        grp_pgconv64_64u_s_fu_4252_c = coi68_0_0_0_reg_2942.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read())) {
        grp_pgconv64_64u_s_fu_4252_c = cii66_0_0_0_reg_2918.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        grp_pgconv64_64u_s_fu_4252_c = coi62_0_0_0_reg_2894.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        grp_pgconv64_64u_s_fu_4252_c = cii60_0_0_0_reg_2870.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        grp_pgconv64_64u_s_fu_4252_c = coi56_0_0_0_reg_2846.read();
    } else {
        grp_pgconv64_64u_s_fu_4252_c =  (sc_lv<3>) ("XXX");
    }
}

void ResNet::thread_grp_pgconv64s2_16u_s_fu_4389_ap_start() {
    grp_pgconv64s2_16u_s_fu_4389_ap_start = grp_pgconv64s2_16u_s_fu_4389_ap_start_reg.read();
}

void ResNet::thread_grp_pgconv64s2_32u_s_fu_3755_ap_start() {
    grp_pgconv64s2_32u_s_fu_3755_ap_start = grp_pgconv64s2_32u_s_fu_3755_ap_start_reg.read();
}

void ResNet::thread_i_fu_11803_p2() {
    i_fu_11803_p2 = (!ap_phi_mux_i_0_phi_fu_2969_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(ap_phi_mux_i_0_phi_fu_2969_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ResNet::thread_icmp_ln105_fu_4873_p2() {
    icmp_ln105_fu_4873_p2 = (!cii_0_reg_2346.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(cii_0_reg_2346.read() == ap_const_lv3_6);
}

void ResNet::thread_icmp_ln106_fu_5383_p2() {
    icmp_ln106_fu_5383_p2 = (!indvar_flatten26_reg_2358.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten26_reg_2358.read() == ap_const_lv4_9);
}

void ResNet::thread_icmp_ln107_fu_5401_p2() {
    icmp_ln107_fu_5401_p2 = (!col22_0_reg_2380.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(col22_0_reg_2380.read() == ap_const_lv2_3);
}

void ResNet::thread_icmp_ln119_fu_6268_p2() {
    icmp_ln119_fu_6268_p2 = (!indvar_flatten89_reg_2391.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten89_reg_2391.read() == ap_const_lv11_400);
}

void ResNet::thread_icmp_ln120_fu_6286_p2() {
    icmp_ln120_fu_6286_p2 = (!indvar_flatten53_reg_2413.read().is_01() || !ap_const_lv10_100.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten53_reg_2413.read() == ap_const_lv10_100);
}

void ResNet::thread_icmp_ln121_fu_6372_p2() {
    icmp_ln121_fu_6372_p2 = (!indvar_flatten33_reg_2435.read().is_01() || !ap_const_lv8_40.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten33_reg_2435.read() == ap_const_lv8_40);
}

void ResNet::thread_icmp_ln122_fu_6360_p2() {
    icmp_ln122_fu_6360_p2 = (!bcol_0_reg_2457.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(bcol_0_reg_2457.read() == ap_const_lv4_9);
}

void ResNet::thread_icmp_ln142_fu_11232_p2() {
    icmp_ln142_fu_11232_p2 = (!row24_0_reg_2468.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(row24_0_reg_2468.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln143_fu_11244_p2() {
    icmp_ln143_fu_11244_p2 = (!col25_0_reg_2480.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(col25_0_reg_2480.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln184_fu_11256_p2() {
    icmp_ln184_fu_11256_p2 = (!row26_0_reg_2492.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(row26_0_reg_2492.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln185_fu_11268_p2() {
    icmp_ln185_fu_11268_p2 = (!col27_0_reg_2504.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(col27_0_reg_2504.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln226_fu_11280_p2() {
    icmp_ln226_fu_11280_p2 = (!row28_0_reg_2516.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(row28_0_reg_2516.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln227_fu_11292_p2() {
    icmp_ln227_fu_11292_p2 = (!col29_0_reg_2528.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(col29_0_reg_2528.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln268_fu_11304_p2() {
    icmp_ln268_fu_11304_p2 = (!cio_0_reg_2540.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(cio_0_reg_2540.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln269_fu_11316_p2() {
    icmp_ln269_fu_11316_p2 = (!row30_0_reg_2551.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(row30_0_reg_2551.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln270_fu_11334_p2() {
    icmp_ln270_fu_11334_p2 = (!col31_0_reg_2563.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(col31_0_reg_2563.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln272_fu_11352_p2() {
    icmp_ln272_fu_11352_p2 = (!row0_0_0_reg_2575.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(row0_0_0_reg_2575.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln273_fu_11373_p2() {
    icmp_ln273_fu_11373_p2 = (!col0_0_0_reg_2587.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(col0_0_0_reg_2587.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln297_fu_11395_p2() {
    icmp_ln297_fu_11395_p2 = (!row33_0_reg_2599.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(row33_0_reg_2599.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln298_fu_11411_p2() {
    icmp_ln298_fu_11411_p2 = (!col34_0_reg_2611.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(col34_0_reg_2611.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln300_fu_11428_p2() {
    icmp_ln300_fu_11428_p2 = (!coo_0_reg_2623.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(coo_0_reg_2623.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln301_fu_11440_p2() {
    icmp_ln301_fu_11440_p2 = (!coi_0_reg_2635.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(coi_0_reg_2635.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln329_fu_11452_p2() {
    icmp_ln329_fu_11452_p2 = (!row35_0_reg_2646.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(row35_0_reg_2646.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln330_fu_11468_p2() {
    icmp_ln330_fu_11468_p2 = (!col36_0_reg_2658.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(col36_0_reg_2658.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln332_fu_11485_p2() {
    icmp_ln332_fu_11485_p2 = (!cio37_0_reg_2670.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(cio37_0_reg_2670.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln333_fu_11497_p2() {
    icmp_ln333_fu_11497_p2 = (!cii38_0_reg_2682.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(cii38_0_reg_2682.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln351_fu_11509_p2() {
    icmp_ln351_fu_11509_p2 = (!coo39_0_reg_2693.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(coo39_0_reg_2693.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln352_fu_11521_p2() {
    icmp_ln352_fu_11521_p2 = (!coi40_0_reg_2705.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(coi40_0_reg_2705.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln379_fu_11533_p2() {
    icmp_ln379_fu_11533_p2 = (!row41_0_reg_2716.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(row41_0_reg_2716.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln380_fu_11549_p2() {
    icmp_ln380_fu_11549_p2 = (!col42_0_reg_2728.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(col42_0_reg_2728.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln382_fu_11566_p2() {
    icmp_ln382_fu_11566_p2 = (!cio43_0_reg_2740.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(cio43_0_reg_2740.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln383_fu_11578_p2() {
    icmp_ln383_fu_11578_p2 = (!cii44_0_reg_2752.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(cii44_0_reg_2752.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln401_fu_11590_p2() {
    icmp_ln401_fu_11590_p2 = (!coo45_0_reg_2763.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(coo45_0_reg_2763.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln402_fu_11602_p2() {
    icmp_ln402_fu_11602_p2 = (!coi46_0_reg_2775.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(coi46_0_reg_2775.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln429_fu_11614_p2() {
    icmp_ln429_fu_11614_p2 = (!cc_reg_2786.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(cc_reg_2786.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln432_fu_11626_p2() {
    icmp_ln432_fu_11626_p2 = (!cii50_0_0_0_reg_2798.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(cii50_0_0_0_reg_2798.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln433_fu_11638_p2() {
    icmp_ln433_fu_11638_p2 = (!row051_0_0_0_reg_2810.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(row051_0_0_0_reg_2810.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln434_fu_11654_p2() {
    icmp_ln434_fu_11654_p2 = (!col052_0_0_0_reg_2822.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(col052_0_0_0_reg_2822.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln466_fu_11671_p2() {
    icmp_ln466_fu_11671_p2 = (!coo55_0_0_0_reg_2834.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(coo55_0_0_0_reg_2834.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln467_fu_11683_p2() {
    icmp_ln467_fu_11683_p2 = (!coi56_0_0_0_reg_2846.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(coi56_0_0_0_reg_2846.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln497_fu_11695_p2() {
    icmp_ln497_fu_11695_p2 = (!cio59_0_0_0_reg_2858.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(cio59_0_0_0_reg_2858.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln498_fu_11707_p2() {
    icmp_ln498_fu_11707_p2 = (!cii60_0_0_0_reg_2870.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(cii60_0_0_0_reg_2870.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln516_fu_11719_p2() {
    icmp_ln516_fu_11719_p2 = (!coo61_0_0_0_reg_2882.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(coo61_0_0_0_reg_2882.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln517_fu_11731_p2() {
    icmp_ln517_fu_11731_p2 = (!coi62_0_0_0_reg_2894.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(coi62_0_0_0_reg_2894.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln547_fu_11743_p2() {
    icmp_ln547_fu_11743_p2 = (!cio65_0_0_0_reg_2906.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(cio65_0_0_0_reg_2906.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln548_fu_11755_p2() {
    icmp_ln548_fu_11755_p2 = (!cii66_0_0_0_reg_2918.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(cii66_0_0_0_reg_2918.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln566_fu_11767_p2() {
    icmp_ln566_fu_11767_p2 = (!coo67_0_0_0_reg_2930.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(coo67_0_0_0_reg_2930.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln567_fu_11779_p2() {
    icmp_ln567_fu_11779_p2 = (!coi68_0_0_0_reg_2942.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(coi68_0_0_0_reg_2942.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln589_fu_11791_p2() {
    icmp_ln589_fu_11791_p2 = (!indvar_flatten96_reg_2954.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten96_reg_2954.read() == ap_const_lv7_40);
}

void ResNet::thread_icmp_ln590_fu_11809_p2() {
    icmp_ln590_fu_11809_p2 = (!j_0_reg_3744.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(j_0_reg_3744.read() == ap_const_lv4_9);
}

void ResNet::thread_icmp_ln768_55_fu_7159_p2() {
    icmp_ln768_55_fu_7159_p2 = (!tmp_190_fu_7143_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_190_fu_7143_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_56_fu_7440_p2() {
    icmp_ln768_56_fu_7440_p2 = (!tmp_192_fu_7424_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_192_fu_7424_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_57_fu_7721_p2() {
    icmp_ln768_57_fu_7721_p2 = (!tmp_194_fu_7705_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_194_fu_7705_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_58_fu_8002_p2() {
    icmp_ln768_58_fu_8002_p2 = (!tmp_196_fu_7986_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_196_fu_7986_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_59_fu_8283_p2() {
    icmp_ln768_59_fu_8283_p2 = (!tmp_198_fu_8267_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_198_fu_8267_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_60_fu_8564_p2() {
    icmp_ln768_60_fu_8564_p2 = (!tmp_200_fu_8548_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_200_fu_8548_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_61_fu_8845_p2() {
    icmp_ln768_61_fu_8845_p2 = (!tmp_202_fu_8829_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_202_fu_8829_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_62_fu_9126_p2() {
    icmp_ln768_62_fu_9126_p2 = (!tmp_204_fu_9110_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_204_fu_9110_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_63_fu_9407_p2() {
    icmp_ln768_63_fu_9407_p2 = (!tmp_206_fu_9391_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_206_fu_9391_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_64_fu_9688_p2() {
    icmp_ln768_64_fu_9688_p2 = (!tmp_208_fu_9672_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_208_fu_9672_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_65_fu_9969_p2() {
    icmp_ln768_65_fu_9969_p2 = (!tmp_210_fu_9953_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_210_fu_9953_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_66_fu_10250_p2() {
    icmp_ln768_66_fu_10250_p2 = (!tmp_212_fu_10234_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_212_fu_10234_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_67_fu_10531_p2() {
    icmp_ln768_67_fu_10531_p2 = (!tmp_214_fu_10515_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_214_fu_10515_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_68_fu_10812_p2() {
    icmp_ln768_68_fu_10812_p2 = (!tmp_216_fu_10796_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_216_fu_10796_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_69_fu_11093_p2() {
    icmp_ln768_69_fu_11093_p2 = (!tmp_218_fu_11077_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_218_fu_11077_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_fu_6878_p2() {
    icmp_ln768_fu_6878_p2 = (!tmp_188_fu_6862_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_188_fu_6862_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln86_fu_4686_p2() {
    icmp_ln86_fu_4686_p2 = (!indvar_flatten19_reg_2291.read().is_01() || !ap_const_lv13_1800.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten19_reg_2291.read() == ap_const_lv13_1800);
}

void ResNet::thread_icmp_ln879_113_fu_6872_p2() {
    icmp_ln879_113_fu_6872_p2 = (!tmp_188_fu_6862_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_188_fu_6862_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_114_fu_7137_p2() {
    icmp_ln879_114_fu_7137_p2 = (!tmp_189_fu_7127_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_189_fu_7127_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_115_fu_7153_p2() {
    icmp_ln879_115_fu_7153_p2 = (!tmp_190_fu_7143_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_190_fu_7143_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_116_fu_7418_p2() {
    icmp_ln879_116_fu_7418_p2 = (!tmp_191_fu_7408_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_191_fu_7408_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_117_fu_7434_p2() {
    icmp_ln879_117_fu_7434_p2 = (!tmp_192_fu_7424_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_192_fu_7424_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_118_fu_7699_p2() {
    icmp_ln879_118_fu_7699_p2 = (!tmp_193_fu_7689_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_193_fu_7689_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_119_fu_7715_p2() {
    icmp_ln879_119_fu_7715_p2 = (!tmp_194_fu_7705_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_194_fu_7705_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_120_fu_7980_p2() {
    icmp_ln879_120_fu_7980_p2 = (!tmp_195_fu_7970_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_195_fu_7970_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_121_fu_7996_p2() {
    icmp_ln879_121_fu_7996_p2 = (!tmp_196_fu_7986_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_196_fu_7986_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_122_fu_8261_p2() {
    icmp_ln879_122_fu_8261_p2 = (!tmp_197_fu_8251_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_197_fu_8251_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_123_fu_8277_p2() {
    icmp_ln879_123_fu_8277_p2 = (!tmp_198_fu_8267_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_198_fu_8267_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_124_fu_8542_p2() {
    icmp_ln879_124_fu_8542_p2 = (!tmp_199_fu_8532_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_199_fu_8532_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_125_fu_8558_p2() {
    icmp_ln879_125_fu_8558_p2 = (!tmp_200_fu_8548_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_200_fu_8548_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_126_fu_8823_p2() {
    icmp_ln879_126_fu_8823_p2 = (!tmp_201_fu_8813_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_201_fu_8813_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_127_fu_8839_p2() {
    icmp_ln879_127_fu_8839_p2 = (!tmp_202_fu_8829_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_202_fu_8829_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_128_fu_9104_p2() {
    icmp_ln879_128_fu_9104_p2 = (!tmp_203_fu_9094_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_203_fu_9094_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_129_fu_9120_p2() {
    icmp_ln879_129_fu_9120_p2 = (!tmp_204_fu_9110_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_204_fu_9110_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_130_fu_9385_p2() {
    icmp_ln879_130_fu_9385_p2 = (!tmp_205_fu_9375_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_fu_9375_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_131_fu_9401_p2() {
    icmp_ln879_131_fu_9401_p2 = (!tmp_206_fu_9391_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_206_fu_9391_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_132_fu_9666_p2() {
    icmp_ln879_132_fu_9666_p2 = (!tmp_207_fu_9656_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_207_fu_9656_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_133_fu_9682_p2() {
    icmp_ln879_133_fu_9682_p2 = (!tmp_208_fu_9672_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_208_fu_9672_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_134_fu_9947_p2() {
    icmp_ln879_134_fu_9947_p2 = (!tmp_209_fu_9937_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_209_fu_9937_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_135_fu_9963_p2() {
    icmp_ln879_135_fu_9963_p2 = (!tmp_210_fu_9953_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_210_fu_9953_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_136_fu_10228_p2() {
    icmp_ln879_136_fu_10228_p2 = (!tmp_211_fu_10218_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_211_fu_10218_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_137_fu_10244_p2() {
    icmp_ln879_137_fu_10244_p2 = (!tmp_212_fu_10234_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_212_fu_10234_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_138_fu_10509_p2() {
    icmp_ln879_138_fu_10509_p2 = (!tmp_213_fu_10499_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_213_fu_10499_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_139_fu_10525_p2() {
    icmp_ln879_139_fu_10525_p2 = (!tmp_214_fu_10515_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_214_fu_10515_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_140_fu_10790_p2() {
    icmp_ln879_140_fu_10790_p2 = (!tmp_215_fu_10780_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_215_fu_10780_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_141_fu_10806_p2() {
    icmp_ln879_141_fu_10806_p2 = (!tmp_216_fu_10796_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_216_fu_10796_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_142_fu_11071_p2() {
    icmp_ln879_142_fu_11071_p2 = (!tmp_217_fu_11061_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_217_fu_11061_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_143_fu_11087_p2() {
    icmp_ln879_143_fu_11087_p2 = (!tmp_218_fu_11077_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_218_fu_11077_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_fu_6856_p2() {
    icmp_ln879_fu_6856_p2 = (!tmp_187_fu_6846_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_187_fu_6846_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln87_fu_4704_p2() {
    icmp_ln87_fu_4704_p2 = (!indvar_flatten_reg_2313.read().is_01() || !ap_const_lv9_C0.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_2313.read() == ap_const_lv9_C0);
}

void ResNet::thread_icmp_ln88_fu_4748_p2() {
    icmp_ln88_fu_4748_p2 = (!cbb_0_reg_2335.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(cbb_0_reg_2335.read() == ap_const_lv3_6);
}

void ResNet::thread_image_buf_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        image_buf_0_V_address0 =  (sc_lv<10>) (zext_ln321_fu_4863_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        image_buf_0_V_address0 = grp_biconv16_fu_3801_bottom_0_V_address0.read();
    } else {
        image_buf_0_V_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_image_buf_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        image_buf_0_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        image_buf_0_V_ce0 = grp_biconv16_fu_3801_bottom_0_V_ce0.read();
    } else {
        image_buf_0_V_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_0_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        image_buf_0_V_ce1 = grp_biconv16_fu_3801_bottom_0_V_ce1.read();
    } else {
        image_buf_0_V_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,3,3>(select_ln90_reg_21890_pp0_iter8_reg.read(), ap_const_lv3_0))) {
        image_buf_0_V_we0 = ap_const_logic_1;
    } else {
        image_buf_0_V_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        image_buf_1_V_address0 =  (sc_lv<10>) (zext_ln321_fu_4863_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        image_buf_1_V_address0 = grp_biconv16_fu_3801_bottom_1_V_address0.read();
    } else {
        image_buf_1_V_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_image_buf_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        image_buf_1_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        image_buf_1_V_ce0 = grp_biconv16_fu_3801_bottom_1_V_ce0.read();
    } else {
        image_buf_1_V_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_1_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        image_buf_1_V_ce1 = grp_biconv16_fu_3801_bottom_1_V_ce1.read();
    } else {
        image_buf_1_V_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,3,3>(select_ln90_reg_21890_pp0_iter8_reg.read(), ap_const_lv3_1))) {
        image_buf_1_V_we0 = ap_const_logic_1;
    } else {
        image_buf_1_V_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        image_buf_2_V_address0 =  (sc_lv<10>) (zext_ln321_fu_4863_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        image_buf_2_V_address0 = grp_biconv16_fu_3801_bottom_2_V_address0.read();
    } else {
        image_buf_2_V_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_image_buf_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        image_buf_2_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        image_buf_2_V_ce0 = grp_biconv16_fu_3801_bottom_2_V_ce0.read();
    } else {
        image_buf_2_V_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_2_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        image_buf_2_V_ce1 = grp_biconv16_fu_3801_bottom_2_V_ce1.read();
    } else {
        image_buf_2_V_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,3,3>(select_ln90_reg_21890_pp0_iter8_reg.read(), ap_const_lv3_2))) {
        image_buf_2_V_we0 = ap_const_logic_1;
    } else {
        image_buf_2_V_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        image_buf_3_V_address0 =  (sc_lv<10>) (zext_ln321_fu_4863_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        image_buf_3_V_address0 = grp_biconv16_fu_3801_bottom_3_V_address0.read();
    } else {
        image_buf_3_V_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_image_buf_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        image_buf_3_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        image_buf_3_V_ce0 = grp_biconv16_fu_3801_bottom_3_V_ce0.read();
    } else {
        image_buf_3_V_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_3_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        image_buf_3_V_ce1 = grp_biconv16_fu_3801_bottom_3_V_ce1.read();
    } else {
        image_buf_3_V_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,3,3>(select_ln90_reg_21890_pp0_iter8_reg.read(), ap_const_lv3_3))) {
        image_buf_3_V_we0 = ap_const_logic_1;
    } else {
        image_buf_3_V_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        image_buf_4_V_address0 =  (sc_lv<10>) (zext_ln321_fu_4863_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        image_buf_4_V_address0 = grp_biconv16_fu_3801_bottom_4_V_address0.read();
    } else {
        image_buf_4_V_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_image_buf_4_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        image_buf_4_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        image_buf_4_V_ce0 = grp_biconv16_fu_3801_bottom_4_V_ce0.read();
    } else {
        image_buf_4_V_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_4_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        image_buf_4_V_ce1 = grp_biconv16_fu_3801_bottom_4_V_ce1.read();
    } else {
        image_buf_4_V_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,3,3>(select_ln90_reg_21890_pp0_iter8_reg.read(), ap_const_lv3_4))) {
        image_buf_4_V_we0 = ap_const_logic_1;
    } else {
        image_buf_4_V_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        image_buf_5_V_address0 =  (sc_lv<10>) (zext_ln321_fu_4863_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        image_buf_5_V_address0 = grp_biconv16_fu_3801_bottom_5_V_address0.read();
    } else {
        image_buf_5_V_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_image_buf_5_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        image_buf_5_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        image_buf_5_V_ce0 = grp_biconv16_fu_3801_bottom_5_V_ce0.read();
    } else {
        image_buf_5_V_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_5_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        image_buf_5_V_ce1 = grp_biconv16_fu_3801_bottom_5_V_ce1.read();
    } else {
        image_buf_5_V_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         ((esl_seteq<1,3,3>(select_ln90_reg_21890_pp0_iter8_reg.read(), ap_const_lv3_7) || 
           esl_seteq<1,3,3>(select_ln90_reg_21890_pp0_iter8_reg.read(), ap_const_lv3_6)) || 
          esl_seteq<1,3,3>(select_ln90_reg_21890_pp0_iter8_reg.read(), ap_const_lv3_5)))) {
        image_buf_5_V_we0 = ap_const_logic_1;
    } else {
        image_buf_5_V_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_input_buf_V_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        input_buf_V_1_address0 = grp_pgconv64_32u_s_fu_4622_bottom1_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        input_buf_V_1_address0 = grp_pgconv64_16u_s_fu_4582_bottom1_V_address0.read();
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
        input_buf_V_1_address0 = grp_fill_fm_buf_fu_4433_input_buf_V_1_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        input_buf_V_1_address0 = grp_pgconv64s2_16u_s_fu_4389_bottom1_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        input_buf_V_1_address0 = grp_pgconv64_64u_s_fu_4252_bottom1_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        input_buf_V_1_address0 = grp_pgconv64s2_32u_s_fu_3755_bottom1_V_address0.read();
    } else {
        input_buf_V_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_input_buf_V_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        input_buf_V_1_address1 = grp_pgconv64_32u_s_fu_4622_bottom1_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        input_buf_V_1_address1 = grp_pgconv64_16u_s_fu_4582_bottom1_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        input_buf_V_1_address1 = grp_pgconv64s2_16u_s_fu_4389_bottom1_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        input_buf_V_1_address1 = grp_pgconv64_64u_s_fu_4252_bottom1_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        input_buf_V_1_address1 = grp_pgconv64s2_32u_s_fu_3755_bottom1_V_address1.read();
    } else {
        input_buf_V_1_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_input_buf_V_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        input_buf_V_1_ce0 = grp_pgconv64_32u_s_fu_4622_bottom1_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        input_buf_V_1_ce0 = grp_pgconv64_16u_s_fu_4582_bottom1_V_ce0.read();
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
        input_buf_V_1_ce0 = grp_fill_fm_buf_fu_4433_input_buf_V_1_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        input_buf_V_1_ce0 = grp_pgconv64s2_16u_s_fu_4389_bottom1_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        input_buf_V_1_ce0 = grp_pgconv64_64u_s_fu_4252_bottom1_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        input_buf_V_1_ce0 = grp_pgconv64s2_32u_s_fu_3755_bottom1_V_ce0.read();
    } else {
        input_buf_V_1_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_input_buf_V_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        input_buf_V_1_ce1 = grp_pgconv64_32u_s_fu_4622_bottom1_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        input_buf_V_1_ce1 = grp_pgconv64_16u_s_fu_4582_bottom1_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        input_buf_V_1_ce1 = grp_pgconv64s2_16u_s_fu_4389_bottom1_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        input_buf_V_1_ce1 = grp_pgconv64_64u_s_fu_4252_bottom1_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        input_buf_V_1_ce1 = grp_pgconv64s2_32u_s_fu_3755_bottom1_V_ce1.read();
    } else {
        input_buf_V_1_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_input_buf_V_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
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
        input_buf_V_1_we0 = grp_fill_fm_buf_fu_4433_input_buf_V_1_we0.read();
    } else {
        input_buf_V_1_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_j_fu_11939_p2() {
    j_fu_11939_p2 = (!select_ln595_fu_11815_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(select_ln595_fu_11815_p3.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ResNet::thread_linear_buf_0_V_fu_12027_p3() {
    linear_buf_0_V_fu_12027_p3 = (!or_ln340_296_fu_12005_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_296_fu_12005_p2.read()[0].to_bool())? select_ln340_66_fu_12011_p3.read(): select_ln388_68_fu_12019_p3.read());
}

void ResNet::thread_linear_buf_10_V_fu_12927_p3() {
    linear_buf_10_V_fu_12927_p3 = (!or_ln340_306_fu_12905_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_306_fu_12905_p2.read()[0].to_bool())? select_ln340_88_fu_12911_p3.read(): select_ln388_79_fu_12919_p3.read());
}

void ResNet::thread_linear_buf_11_V_fu_13017_p3() {
    linear_buf_11_V_fu_13017_p3 = (!or_ln340_307_fu_12995_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_307_fu_12995_p2.read()[0].to_bool())? select_ln340_90_fu_13001_p3.read(): select_ln388_80_fu_13009_p3.read());
}

void ResNet::thread_linear_buf_12_V_fu_13107_p3() {
    linear_buf_12_V_fu_13107_p3 = (!or_ln340_308_fu_13085_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_308_fu_13085_p2.read()[0].to_bool())? select_ln340_92_fu_13091_p3.read(): select_ln388_81_fu_13099_p3.read());
}

void ResNet::thread_linear_buf_13_V_fu_13197_p3() {
    linear_buf_13_V_fu_13197_p3 = (!or_ln340_309_fu_13175_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_309_fu_13175_p2.read()[0].to_bool())? select_ln340_94_fu_13181_p3.read(): select_ln388_82_fu_13189_p3.read());
}

void ResNet::thread_linear_buf_14_V_fu_13287_p3() {
    linear_buf_14_V_fu_13287_p3 = (!or_ln340_310_fu_13265_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_310_fu_13265_p2.read()[0].to_bool())? select_ln340_96_fu_13271_p3.read(): select_ln388_83_fu_13279_p3.read());
}

void ResNet::thread_linear_buf_15_V_fu_13377_p3() {
    linear_buf_15_V_fu_13377_p3 = (!or_ln340_311_fu_13355_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_311_fu_13355_p2.read()[0].to_bool())? select_ln340_98_fu_13361_p3.read(): select_ln388_84_fu_13369_p3.read());
}

void ResNet::thread_linear_buf_16_V_fu_13467_p3() {
    linear_buf_16_V_fu_13467_p3 = (!or_ln340_312_fu_13445_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_312_fu_13445_p2.read()[0].to_bool())? select_ln340_100_fu_13451_p3.read(): select_ln388_85_fu_13459_p3.read());
}

void ResNet::thread_linear_buf_17_V_fu_13557_p3() {
    linear_buf_17_V_fu_13557_p3 = (!or_ln340_313_fu_13535_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_313_fu_13535_p2.read()[0].to_bool())? select_ln340_102_fu_13541_p3.read(): select_ln388_86_fu_13549_p3.read());
}

void ResNet::thread_linear_buf_18_V_fu_13647_p3() {
    linear_buf_18_V_fu_13647_p3 = (!or_ln340_314_fu_13625_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_314_fu_13625_p2.read()[0].to_bool())? select_ln340_104_fu_13631_p3.read(): select_ln388_87_fu_13639_p3.read());
}

void ResNet::thread_linear_buf_19_V_fu_13737_p3() {
    linear_buf_19_V_fu_13737_p3 = (!or_ln340_315_fu_13715_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_315_fu_13715_p2.read()[0].to_bool())? select_ln340_106_fu_13721_p3.read(): select_ln388_88_fu_13729_p3.read());
}

void ResNet::thread_linear_buf_1_V_fu_12117_p3() {
    linear_buf_1_V_fu_12117_p3 = (!or_ln340_297_fu_12095_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_297_fu_12095_p2.read()[0].to_bool())? select_ln340_69_fu_12101_p3.read(): select_ln388_70_fu_12109_p3.read());
}

void ResNet::thread_linear_buf_20_V_fu_13827_p3() {
    linear_buf_20_V_fu_13827_p3 = (!or_ln340_316_fu_13805_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_316_fu_13805_p2.read()[0].to_bool())? select_ln340_108_fu_13811_p3.read(): select_ln388_89_fu_13819_p3.read());
}

void ResNet::thread_linear_buf_21_V_fu_13917_p3() {
    linear_buf_21_V_fu_13917_p3 = (!or_ln340_317_fu_13895_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_317_fu_13895_p2.read()[0].to_bool())? select_ln340_110_fu_13901_p3.read(): select_ln388_90_fu_13909_p3.read());
}

void ResNet::thread_linear_buf_22_V_fu_14007_p3() {
    linear_buf_22_V_fu_14007_p3 = (!or_ln340_318_fu_13985_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_318_fu_13985_p2.read()[0].to_bool())? select_ln340_112_fu_13991_p3.read(): select_ln388_91_fu_13999_p3.read());
}

void ResNet::thread_linear_buf_23_V_fu_14097_p3() {
    linear_buf_23_V_fu_14097_p3 = (!or_ln340_319_fu_14075_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_319_fu_14075_p2.read()[0].to_bool())? select_ln340_114_fu_14081_p3.read(): select_ln388_92_fu_14089_p3.read());
}

void ResNet::thread_linear_buf_24_V_fu_14187_p3() {
    linear_buf_24_V_fu_14187_p3 = (!or_ln340_320_fu_14165_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_320_fu_14165_p2.read()[0].to_bool())? select_ln340_116_fu_14171_p3.read(): select_ln388_93_fu_14179_p3.read());
}

void ResNet::thread_linear_buf_25_V_fu_14277_p3() {
    linear_buf_25_V_fu_14277_p3 = (!or_ln340_321_fu_14255_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_321_fu_14255_p2.read()[0].to_bool())? select_ln340_118_fu_14261_p3.read(): select_ln388_94_fu_14269_p3.read());
}

void ResNet::thread_linear_buf_26_V_fu_14367_p3() {
    linear_buf_26_V_fu_14367_p3 = (!or_ln340_322_fu_14345_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_322_fu_14345_p2.read()[0].to_bool())? select_ln340_120_fu_14351_p3.read(): select_ln388_95_fu_14359_p3.read());
}

void ResNet::thread_linear_buf_27_V_fu_14457_p3() {
    linear_buf_27_V_fu_14457_p3 = (!or_ln340_323_fu_14435_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_323_fu_14435_p2.read()[0].to_bool())? select_ln340_122_fu_14441_p3.read(): select_ln388_96_fu_14449_p3.read());
}

void ResNet::thread_linear_buf_28_V_fu_14547_p3() {
    linear_buf_28_V_fu_14547_p3 = (!or_ln340_324_fu_14525_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_324_fu_14525_p2.read()[0].to_bool())? select_ln340_124_fu_14531_p3.read(): select_ln388_97_fu_14539_p3.read());
}

void ResNet::thread_linear_buf_29_V_fu_14637_p3() {
    linear_buf_29_V_fu_14637_p3 = (!or_ln340_325_fu_14615_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_325_fu_14615_p2.read()[0].to_bool())? select_ln340_126_fu_14621_p3.read(): select_ln388_98_fu_14629_p3.read());
}

void ResNet::thread_linear_buf_2_V_fu_12207_p3() {
    linear_buf_2_V_fu_12207_p3 = (!or_ln340_298_fu_12185_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_298_fu_12185_p2.read()[0].to_bool())? select_ln340_71_fu_12191_p3.read(): select_ln388_71_fu_12199_p3.read());
}

void ResNet::thread_linear_buf_30_V_fu_14727_p3() {
    linear_buf_30_V_fu_14727_p3 = (!or_ln340_326_fu_14705_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_326_fu_14705_p2.read()[0].to_bool())? select_ln340_128_fu_14711_p3.read(): select_ln388_99_fu_14719_p3.read());
}

void ResNet::thread_linear_buf_31_V_fu_14817_p3() {
    linear_buf_31_V_fu_14817_p3 = (!or_ln340_327_fu_14795_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_327_fu_14795_p2.read()[0].to_bool())? select_ln340_130_fu_14801_p3.read(): select_ln388_100_fu_14809_p3.read());
}

void ResNet::thread_linear_buf_32_V_fu_14907_p3() {
    linear_buf_32_V_fu_14907_p3 = (!or_ln340_328_fu_14885_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_328_fu_14885_p2.read()[0].to_bool())? select_ln340_132_fu_14891_p3.read(): select_ln388_101_fu_14899_p3.read());
}

void ResNet::thread_linear_buf_33_V_fu_14997_p3() {
    linear_buf_33_V_fu_14997_p3 = (!or_ln340_329_fu_14975_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_329_fu_14975_p2.read()[0].to_bool())? select_ln340_134_fu_14981_p3.read(): select_ln388_102_fu_14989_p3.read());
}

void ResNet::thread_linear_buf_34_V_fu_15087_p3() {
    linear_buf_34_V_fu_15087_p3 = (!or_ln340_330_fu_15065_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_330_fu_15065_p2.read()[0].to_bool())? select_ln340_136_fu_15071_p3.read(): select_ln388_103_fu_15079_p3.read());
}

void ResNet::thread_linear_buf_35_V_fu_15177_p3() {
    linear_buf_35_V_fu_15177_p3 = (!or_ln340_331_fu_15155_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_331_fu_15155_p2.read()[0].to_bool())? select_ln340_138_fu_15161_p3.read(): select_ln388_104_fu_15169_p3.read());
}

void ResNet::thread_linear_buf_36_V_fu_15267_p3() {
    linear_buf_36_V_fu_15267_p3 = (!or_ln340_332_fu_15245_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_332_fu_15245_p2.read()[0].to_bool())? select_ln340_140_fu_15251_p3.read(): select_ln388_105_fu_15259_p3.read());
}

void ResNet::thread_linear_buf_37_V_fu_15357_p3() {
    linear_buf_37_V_fu_15357_p3 = (!or_ln340_333_fu_15335_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_333_fu_15335_p2.read()[0].to_bool())? select_ln340_142_fu_15341_p3.read(): select_ln388_106_fu_15349_p3.read());
}

void ResNet::thread_linear_buf_38_V_fu_15447_p3() {
    linear_buf_38_V_fu_15447_p3 = (!or_ln340_334_fu_15425_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_334_fu_15425_p2.read()[0].to_bool())? select_ln340_144_fu_15431_p3.read(): select_ln388_107_fu_15439_p3.read());
}

void ResNet::thread_linear_buf_39_V_fu_15537_p3() {
    linear_buf_39_V_fu_15537_p3 = (!or_ln340_335_fu_15515_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_335_fu_15515_p2.read()[0].to_bool())? select_ln340_146_fu_15521_p3.read(): select_ln388_108_fu_15529_p3.read());
}

void ResNet::thread_linear_buf_3_V_fu_12297_p3() {
    linear_buf_3_V_fu_12297_p3 = (!or_ln340_299_fu_12275_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_299_fu_12275_p2.read()[0].to_bool())? select_ln340_74_fu_12281_p3.read(): select_ln388_72_fu_12289_p3.read());
}

void ResNet::thread_linear_buf_40_V_fu_15627_p3() {
    linear_buf_40_V_fu_15627_p3 = (!or_ln340_336_fu_15605_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_336_fu_15605_p2.read()[0].to_bool())? select_ln340_148_fu_15611_p3.read(): select_ln388_109_fu_15619_p3.read());
}

void ResNet::thread_linear_buf_41_V_fu_15717_p3() {
    linear_buf_41_V_fu_15717_p3 = (!or_ln340_337_fu_15695_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_337_fu_15695_p2.read()[0].to_bool())? select_ln340_150_fu_15701_p3.read(): select_ln388_110_fu_15709_p3.read());
}

void ResNet::thread_linear_buf_42_V_fu_15807_p3() {
    linear_buf_42_V_fu_15807_p3 = (!or_ln340_338_fu_15785_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_338_fu_15785_p2.read()[0].to_bool())? select_ln340_152_fu_15791_p3.read(): select_ln388_111_fu_15799_p3.read());
}

void ResNet::thread_linear_buf_43_V_fu_15897_p3() {
    linear_buf_43_V_fu_15897_p3 = (!or_ln340_339_fu_15875_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_339_fu_15875_p2.read()[0].to_bool())? select_ln340_154_fu_15881_p3.read(): select_ln388_112_fu_15889_p3.read());
}

void ResNet::thread_linear_buf_44_V_fu_15987_p3() {
    linear_buf_44_V_fu_15987_p3 = (!or_ln340_340_fu_15965_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_340_fu_15965_p2.read()[0].to_bool())? select_ln340_156_fu_15971_p3.read(): select_ln388_113_fu_15979_p3.read());
}

void ResNet::thread_linear_buf_45_V_fu_16077_p3() {
    linear_buf_45_V_fu_16077_p3 = (!or_ln340_341_fu_16055_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_341_fu_16055_p2.read()[0].to_bool())? select_ln340_158_fu_16061_p3.read(): select_ln388_114_fu_16069_p3.read());
}

void ResNet::thread_linear_buf_46_V_fu_16167_p3() {
    linear_buf_46_V_fu_16167_p3 = (!or_ln340_342_fu_16145_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_342_fu_16145_p2.read()[0].to_bool())? select_ln340_160_fu_16151_p3.read(): select_ln388_115_fu_16159_p3.read());
}

void ResNet::thread_linear_buf_47_V_fu_16257_p3() {
    linear_buf_47_V_fu_16257_p3 = (!or_ln340_343_fu_16235_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_343_fu_16235_p2.read()[0].to_bool())? select_ln340_162_fu_16241_p3.read(): select_ln388_116_fu_16249_p3.read());
}

void ResNet::thread_linear_buf_48_V_fu_16347_p3() {
    linear_buf_48_V_fu_16347_p3 = (!or_ln340_344_fu_16325_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_344_fu_16325_p2.read()[0].to_bool())? select_ln340_164_fu_16331_p3.read(): select_ln388_117_fu_16339_p3.read());
}

void ResNet::thread_linear_buf_49_V_fu_16437_p3() {
    linear_buf_49_V_fu_16437_p3 = (!or_ln340_345_fu_16415_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_345_fu_16415_p2.read()[0].to_bool())? select_ln340_166_fu_16421_p3.read(): select_ln388_118_fu_16429_p3.read());
}

void ResNet::thread_linear_buf_4_V_fu_12387_p3() {
    linear_buf_4_V_fu_12387_p3 = (!or_ln340_300_fu_12365_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_300_fu_12365_p2.read()[0].to_bool())? select_ln340_76_fu_12371_p3.read(): select_ln388_73_fu_12379_p3.read());
}

void ResNet::thread_linear_buf_50_V_fu_16527_p3() {
    linear_buf_50_V_fu_16527_p3 = (!or_ln340_346_fu_16505_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_346_fu_16505_p2.read()[0].to_bool())? select_ln340_168_fu_16511_p3.read(): select_ln388_119_fu_16519_p3.read());
}

void ResNet::thread_linear_buf_51_V_fu_16617_p3() {
    linear_buf_51_V_fu_16617_p3 = (!or_ln340_347_fu_16595_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_347_fu_16595_p2.read()[0].to_bool())? select_ln340_170_fu_16601_p3.read(): select_ln388_120_fu_16609_p3.read());
}

void ResNet::thread_linear_buf_52_V_fu_16707_p3() {
    linear_buf_52_V_fu_16707_p3 = (!or_ln340_348_fu_16685_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_348_fu_16685_p2.read()[0].to_bool())? select_ln340_172_fu_16691_p3.read(): select_ln388_121_fu_16699_p3.read());
}

void ResNet::thread_linear_buf_53_V_fu_16797_p3() {
    linear_buf_53_V_fu_16797_p3 = (!or_ln340_349_fu_16775_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_349_fu_16775_p2.read()[0].to_bool())? select_ln340_174_fu_16781_p3.read(): select_ln388_122_fu_16789_p3.read());
}

void ResNet::thread_linear_buf_54_V_fu_16887_p3() {
    linear_buf_54_V_fu_16887_p3 = (!or_ln340_350_fu_16865_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_350_fu_16865_p2.read()[0].to_bool())? select_ln340_176_fu_16871_p3.read(): select_ln388_123_fu_16879_p3.read());
}

void ResNet::thread_linear_buf_55_V_fu_16977_p3() {
    linear_buf_55_V_fu_16977_p3 = (!or_ln340_351_fu_16955_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_351_fu_16955_p2.read()[0].to_bool())? select_ln340_178_fu_16961_p3.read(): select_ln388_124_fu_16969_p3.read());
}

void ResNet::thread_linear_buf_56_V_fu_17067_p3() {
    linear_buf_56_V_fu_17067_p3 = (!or_ln340_352_fu_17045_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_352_fu_17045_p2.read()[0].to_bool())? select_ln340_180_fu_17051_p3.read(): select_ln388_125_fu_17059_p3.read());
}

void ResNet::thread_linear_buf_57_V_fu_17157_p3() {
    linear_buf_57_V_fu_17157_p3 = (!or_ln340_353_fu_17135_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_353_fu_17135_p2.read()[0].to_bool())? select_ln340_182_fu_17141_p3.read(): select_ln388_126_fu_17149_p3.read());
}

void ResNet::thread_linear_buf_58_V_fu_17247_p3() {
    linear_buf_58_V_fu_17247_p3 = (!or_ln340_354_fu_17225_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_354_fu_17225_p2.read()[0].to_bool())? select_ln340_184_fu_17231_p3.read(): select_ln388_127_fu_17239_p3.read());
}

void ResNet::thread_linear_buf_59_V_fu_17337_p3() {
    linear_buf_59_V_fu_17337_p3 = (!or_ln340_355_fu_17315_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_355_fu_17315_p2.read()[0].to_bool())? select_ln340_186_fu_17321_p3.read(): select_ln388_128_fu_17329_p3.read());
}

void ResNet::thread_linear_buf_5_V_fu_12477_p3() {
    linear_buf_5_V_fu_12477_p3 = (!or_ln340_301_fu_12455_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_301_fu_12455_p2.read()[0].to_bool())? select_ln340_78_fu_12461_p3.read(): select_ln388_74_fu_12469_p3.read());
}

void ResNet::thread_linear_buf_60_V_fu_17427_p3() {
    linear_buf_60_V_fu_17427_p3 = (!or_ln340_356_fu_17405_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_356_fu_17405_p2.read()[0].to_bool())? select_ln340_188_fu_17411_p3.read(): select_ln388_129_fu_17419_p3.read());
}

void ResNet::thread_linear_buf_61_V_fu_17517_p3() {
    linear_buf_61_V_fu_17517_p3 = (!or_ln340_357_fu_17495_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_357_fu_17495_p2.read()[0].to_bool())? select_ln340_190_fu_17501_p3.read(): select_ln388_130_fu_17509_p3.read());
}

void ResNet::thread_linear_buf_62_V_fu_17607_p3() {
    linear_buf_62_V_fu_17607_p3 = (!or_ln340_358_fu_17585_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_358_fu_17585_p2.read()[0].to_bool())? select_ln340_192_fu_17591_p3.read(): select_ln388_131_fu_17599_p3.read());
}

void ResNet::thread_linear_buf_63_V_fu_17697_p3() {
    linear_buf_63_V_fu_17697_p3 = (!or_ln340_359_fu_17675_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_359_fu_17675_p2.read()[0].to_bool())? select_ln340_194_fu_17681_p3.read(): select_ln388_132_fu_17689_p3.read());
}

void ResNet::thread_linear_buf_6_V_fu_12567_p3() {
    linear_buf_6_V_fu_12567_p3 = (!or_ln340_302_fu_12545_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_302_fu_12545_p2.read()[0].to_bool())? select_ln340_80_fu_12551_p3.read(): select_ln388_75_fu_12559_p3.read());
}

void ResNet::thread_linear_buf_7_V_fu_12657_p3() {
    linear_buf_7_V_fu_12657_p3 = (!or_ln340_303_fu_12635_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_303_fu_12635_p2.read()[0].to_bool())? select_ln340_82_fu_12641_p3.read(): select_ln388_76_fu_12649_p3.read());
}

void ResNet::thread_linear_buf_8_V_fu_12747_p3() {
    linear_buf_8_V_fu_12747_p3 = (!or_ln340_304_fu_12725_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_304_fu_12725_p2.read()[0].to_bool())? select_ln340_84_fu_12731_p3.read(): select_ln388_77_fu_12739_p3.read());
}

void ResNet::thread_linear_buf_9_V_fu_12837_p3() {
    linear_buf_9_V_fu_12837_p3 = (!or_ln340_305_fu_12815_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_305_fu_12815_p2.read()[0].to_bool())? select_ln340_86_fu_12821_p3.read(): select_ln388_78_fu_12829_p3.read());
}

void ResNet::thread_or_ln111_10_fu_5227_p2() {
    or_ln111_10_fu_5227_p2 = (shl_ln_fu_4885_p3.read() | ap_const_lv7_B);
}

void ResNet::thread_or_ln111_11_fu_5259_p2() {
    or_ln111_11_fu_5259_p2 = (shl_ln_fu_4885_p3.read() | ap_const_lv7_C);
}

void ResNet::thread_or_ln111_12_fu_5287_p2() {
    or_ln111_12_fu_5287_p2 = (shl_ln_fu_4885_p3.read() | ap_const_lv7_D);
}

void ResNet::thread_or_ln111_13_fu_5319_p2() {
    or_ln111_13_fu_5319_p2 = (shl_ln_fu_4885_p3.read() | ap_const_lv7_E);
}

void ResNet::thread_or_ln111_14_fu_5351_p2() {
    or_ln111_14_fu_5351_p2 = (shl_ln_fu_4885_p3.read() | ap_const_lv7_F);
}

void ResNet::thread_or_ln111_1_fu_4947_p2() {
    or_ln111_1_fu_4947_p2 = (shl_ln_fu_4885_p3.read() | ap_const_lv7_2);
}

void ResNet::thread_or_ln111_2_fu_4979_p2() {
    or_ln111_2_fu_4979_p2 = (shl_ln_fu_4885_p3.read() | ap_const_lv7_3);
}

void ResNet::thread_or_ln111_3_fu_5011_p2() {
    or_ln111_3_fu_5011_p2 = (shl_ln_fu_4885_p3.read() | ap_const_lv7_4);
}

void ResNet::thread_or_ln111_4_fu_5039_p2() {
    or_ln111_4_fu_5039_p2 = (shl_ln_fu_4885_p3.read() | ap_const_lv7_5);
}

void ResNet::thread_or_ln111_5_fu_5071_p2() {
    or_ln111_5_fu_5071_p2 = (shl_ln_fu_4885_p3.read() | ap_const_lv7_6);
}

void ResNet::thread_or_ln111_6_fu_5103_p2() {
    or_ln111_6_fu_5103_p2 = (shl_ln_fu_4885_p3.read() | ap_const_lv7_7);
}

void ResNet::thread_or_ln111_7_fu_5135_p2() {
    or_ln111_7_fu_5135_p2 = (shl_ln_fu_4885_p3.read() | ap_const_lv7_8);
}

void ResNet::thread_or_ln111_8_fu_5163_p2() {
    or_ln111_8_fu_5163_p2 = (shl_ln_fu_4885_p3.read() | ap_const_lv7_9);
}

void ResNet::thread_or_ln111_9_fu_5195_p2() {
    or_ln111_9_fu_5195_p2 = (shl_ln_fu_4885_p3.read() | ap_const_lv7_A);
}

void ResNet::thread_or_ln111_fu_4915_p2() {
    or_ln111_fu_4915_p2 = (shl_ln_fu_4885_p3.read() | ap_const_lv7_1);
}

void ResNet::thread_or_ln120_1_fu_6452_p2() {
    or_ln120_1_fu_6452_p2 = (icmp_ln120_fu_6286_p2.read() | xor_ln120_fu_6446_p2.read());
}

void ResNet::thread_or_ln120_fu_6390_p2() {
    or_ln120_fu_6390_p2 = (and_ln119_1_fu_6378_p2.read() | icmp_ln120_fu_6286_p2.read());
}

void ResNet::thread_or_ln121_1_fu_6476_p2() {
    or_ln121_1_fu_6476_p2 = (or_ln121_fu_6470_p2.read() | icmp_ln120_fu_6286_p2.read());
}

void ResNet::thread_or_ln121_fu_6470_p2() {
    or_ln121_fu_6470_p2 = (and_ln120_fu_6458_p2.read() | and_ln119_1_fu_6378_p2.read());
}

void ResNet::thread_or_ln126_1_fu_6436_p2() {
    or_ln126_1_fu_6436_p2 = (select_ln119_2_fu_6320_p3.read() | ap_const_lv5_1);
}

void ResNet::thread_or_ln126_fu_6340_p2() {
    or_ln126_fu_6340_p2 = (shl_ln126_mid1_fu_6312_p3.read() | ap_const_lv5_1);
}

void ResNet::thread_or_ln321_1_fu_5536_p2() {
    or_ln321_1_fu_5536_p2 = (trunc_ln321_1_fu_5533_p1.read() | select_ln111_1_fu_5415_p3.read());
}

void ResNet::thread_or_ln321_2_fu_5642_p2() {
    or_ln321_2_fu_5642_p2 = (trunc_ln321_2_fu_5639_p1.read() | select_ln111_1_fu_5415_p3.read());
}

void ResNet::thread_or_ln321_3_fu_5748_p2() {
    or_ln321_3_fu_5748_p2 = (trunc_ln321_3_fu_5745_p1.read() | select_ln111_1_fu_5415_p3.read());
}

void ResNet::thread_or_ln321_fu_5430_p2() {
    or_ln321_fu_5430_p2 = (trunc_ln321_fu_5427_p1.read() | select_ln111_1_fu_5415_p3.read());
}

void ResNet::thread_or_ln340_10_fu_9784_p2() {
    or_ln340_10_fu_9784_p2 = (and_ln786_169_fu_9778_p2.read() | and_ln785_64_fu_9754_p2.read());
}

void ResNet::thread_or_ln340_11_fu_10065_p2() {
    or_ln340_11_fu_10065_p2 = (and_ln786_170_fu_10059_p2.read() | and_ln785_65_fu_10035_p2.read());
}

void ResNet::thread_or_ln340_12_fu_10346_p2() {
    or_ln340_12_fu_10346_p2 = (and_ln786_172_fu_10340_p2.read() | and_ln785_66_fu_10316_p2.read());
}

void ResNet::thread_or_ln340_13_fu_10627_p2() {
    or_ln340_13_fu_10627_p2 = (and_ln786_173_fu_10621_p2.read() | and_ln785_67_fu_10597_p2.read());
}

void ResNet::thread_or_ln340_14_fu_10908_p2() {
    or_ln340_14_fu_10908_p2 = (and_ln786_175_fu_10902_p2.read() | and_ln785_68_fu_10878_p2.read());
}

void ResNet::thread_or_ln340_15_fu_11189_p2() {
    or_ln340_15_fu_11189_p2 = (and_ln786_177_fu_11183_p2.read() | and_ln785_69_fu_11159_p2.read());
}

void ResNet::thread_or_ln340_1_fu_7255_p2() {
    or_ln340_1_fu_7255_p2 = (and_ln786_156_fu_7249_p2.read() | and_ln785_55_fu_7225_p2.read());
}

void ResNet::thread_or_ln340_264_fu_6980_p2() {
    or_ln340_264_fu_6980_p2 = (and_ln786_fu_6950_p2.read() | xor_ln785_113_fu_6938_p2.read());
}

void ResNet::thread_or_ln340_265_fu_6986_p2() {
    or_ln340_265_fu_6986_p2 = (or_ln340_264_fu_6980_p2.read() | and_ln781_fu_6920_p2.read());
}

void ResNet::thread_or_ln340_266_fu_7261_p2() {
    or_ln340_266_fu_7261_p2 = (and_ln786_1_fu_7231_p2.read() | xor_ln785_114_fu_7219_p2.read());
}

void ResNet::thread_or_ln340_267_fu_7267_p2() {
    or_ln340_267_fu_7267_p2 = (or_ln340_266_fu_7261_p2.read() | and_ln781_1_fu_7201_p2.read());
}

void ResNet::thread_or_ln340_268_fu_7542_p2() {
    or_ln340_268_fu_7542_p2 = (and_ln786_2_fu_7512_p2.read() | xor_ln785_115_fu_7500_p2.read());
}

void ResNet::thread_or_ln340_269_fu_7548_p2() {
    or_ln340_269_fu_7548_p2 = (or_ln340_268_fu_7542_p2.read() | and_ln781_2_fu_7482_p2.read());
}

void ResNet::thread_or_ln340_270_fu_7823_p2() {
    or_ln340_270_fu_7823_p2 = (and_ln786_3_fu_7793_p2.read() | xor_ln785_116_fu_7781_p2.read());
}

void ResNet::thread_or_ln340_271_fu_7829_p2() {
    or_ln340_271_fu_7829_p2 = (or_ln340_270_fu_7823_p2.read() | and_ln781_3_fu_7763_p2.read());
}

void ResNet::thread_or_ln340_272_fu_8104_p2() {
    or_ln340_272_fu_8104_p2 = (and_ln786_4_fu_8074_p2.read() | xor_ln785_117_fu_8062_p2.read());
}

void ResNet::thread_or_ln340_273_fu_8110_p2() {
    or_ln340_273_fu_8110_p2 = (or_ln340_272_fu_8104_p2.read() | and_ln781_4_fu_8044_p2.read());
}

void ResNet::thread_or_ln340_274_fu_8385_p2() {
    or_ln340_274_fu_8385_p2 = (and_ln786_5_fu_8355_p2.read() | xor_ln785_118_fu_8343_p2.read());
}

void ResNet::thread_or_ln340_275_fu_8391_p2() {
    or_ln340_275_fu_8391_p2 = (or_ln340_274_fu_8385_p2.read() | and_ln781_5_fu_8325_p2.read());
}

void ResNet::thread_or_ln340_276_fu_8666_p2() {
    or_ln340_276_fu_8666_p2 = (and_ln786_6_fu_8636_p2.read() | xor_ln785_119_fu_8624_p2.read());
}

void ResNet::thread_or_ln340_277_fu_8672_p2() {
    or_ln340_277_fu_8672_p2 = (or_ln340_276_fu_8666_p2.read() | and_ln781_6_fu_8606_p2.read());
}

void ResNet::thread_or_ln340_278_fu_8947_p2() {
    or_ln340_278_fu_8947_p2 = (and_ln786_7_fu_8917_p2.read() | xor_ln785_120_fu_8905_p2.read());
}

void ResNet::thread_or_ln340_279_fu_8953_p2() {
    or_ln340_279_fu_8953_p2 = (or_ln340_278_fu_8947_p2.read() | and_ln781_7_fu_8887_p2.read());
}

void ResNet::thread_or_ln340_280_fu_9228_p2() {
    or_ln340_280_fu_9228_p2 = (and_ln786_8_fu_9198_p2.read() | xor_ln785_121_fu_9186_p2.read());
}

void ResNet::thread_or_ln340_281_fu_9234_p2() {
    or_ln340_281_fu_9234_p2 = (or_ln340_280_fu_9228_p2.read() | and_ln781_8_fu_9168_p2.read());
}

void ResNet::thread_or_ln340_282_fu_9509_p2() {
    or_ln340_282_fu_9509_p2 = (and_ln786_9_fu_9479_p2.read() | xor_ln785_122_fu_9467_p2.read());
}

void ResNet::thread_or_ln340_283_fu_9515_p2() {
    or_ln340_283_fu_9515_p2 = (or_ln340_282_fu_9509_p2.read() | and_ln781_9_fu_9449_p2.read());
}

void ResNet::thread_or_ln340_284_fu_9790_p2() {
    or_ln340_284_fu_9790_p2 = (and_ln786_10_fu_9760_p2.read() | xor_ln785_123_fu_9748_p2.read());
}

void ResNet::thread_or_ln340_285_fu_9796_p2() {
    or_ln340_285_fu_9796_p2 = (or_ln340_284_fu_9790_p2.read() | and_ln781_10_fu_9730_p2.read());
}

void ResNet::thread_or_ln340_286_fu_10071_p2() {
    or_ln340_286_fu_10071_p2 = (and_ln786_11_fu_10041_p2.read() | xor_ln785_125_fu_10029_p2.read());
}

void ResNet::thread_or_ln340_287_fu_10077_p2() {
    or_ln340_287_fu_10077_p2 = (or_ln340_286_fu_10071_p2.read() | and_ln781_11_fu_10011_p2.read());
}

void ResNet::thread_or_ln340_288_fu_10352_p2() {
    or_ln340_288_fu_10352_p2 = (and_ln786_12_fu_10322_p2.read() | xor_ln785_127_fu_10310_p2.read());
}

void ResNet::thread_or_ln340_289_fu_10358_p2() {
    or_ln340_289_fu_10358_p2 = (or_ln340_288_fu_10352_p2.read() | and_ln781_12_fu_10292_p2.read());
}

void ResNet::thread_or_ln340_290_fu_10633_p2() {
    or_ln340_290_fu_10633_p2 = (and_ln786_13_fu_10603_p2.read() | xor_ln785_129_fu_10591_p2.read());
}

void ResNet::thread_or_ln340_291_fu_10639_p2() {
    or_ln340_291_fu_10639_p2 = (or_ln340_290_fu_10633_p2.read() | and_ln781_13_fu_10573_p2.read());
}

void ResNet::thread_or_ln340_292_fu_10914_p2() {
    or_ln340_292_fu_10914_p2 = (and_ln786_14_fu_10884_p2.read() | xor_ln785_130_fu_10872_p2.read());
}

void ResNet::thread_or_ln340_293_fu_10920_p2() {
    or_ln340_293_fu_10920_p2 = (or_ln340_292_fu_10914_p2.read() | and_ln781_14_fu_10854_p2.read());
}

void ResNet::thread_or_ln340_294_fu_11195_p2() {
    or_ln340_294_fu_11195_p2 = (and_ln786_15_fu_11165_p2.read() | xor_ln785_131_fu_11153_p2.read());
}

void ResNet::thread_or_ln340_295_fu_11201_p2() {
    or_ln340_295_fu_11201_p2 = (or_ln340_294_fu_11195_p2.read() | and_ln781_15_fu_11135_p2.read());
}

void ResNet::thread_or_ln340_296_fu_12005_p2() {
    or_ln340_296_fu_12005_p2 = (tmp_920_fu_11973_p3.read() | xor_ln340_66_fu_11999_p2.read());
}

void ResNet::thread_or_ln340_297_fu_12095_p2() {
    or_ln340_297_fu_12095_p2 = (tmp_922_fu_12063_p3.read() | xor_ln340_68_fu_12089_p2.read());
}

void ResNet::thread_or_ln340_298_fu_12185_p2() {
    or_ln340_298_fu_12185_p2 = (tmp_924_fu_12153_p3.read() | xor_ln340_70_fu_12179_p2.read());
}

void ResNet::thread_or_ln340_299_fu_12275_p2() {
    or_ln340_299_fu_12275_p2 = (tmp_926_fu_12243_p3.read() | xor_ln340_73_fu_12269_p2.read());
}

void ResNet::thread_or_ln340_2_fu_7536_p2() {
    or_ln340_2_fu_7536_p2 = (and_ln786_157_fu_7530_p2.read() | and_ln785_56_fu_7506_p2.read());
}

void ResNet::thread_or_ln340_300_fu_12365_p2() {
    or_ln340_300_fu_12365_p2 = (tmp_928_fu_12333_p3.read() | xor_ln340_75_fu_12359_p2.read());
}

void ResNet::thread_or_ln340_301_fu_12455_p2() {
    or_ln340_301_fu_12455_p2 = (tmp_930_fu_12423_p3.read() | xor_ln340_77_fu_12449_p2.read());
}

void ResNet::thread_or_ln340_302_fu_12545_p2() {
    or_ln340_302_fu_12545_p2 = (tmp_932_fu_12513_p3.read() | xor_ln340_79_fu_12539_p2.read());
}

void ResNet::thread_or_ln340_303_fu_12635_p2() {
    or_ln340_303_fu_12635_p2 = (tmp_934_fu_12603_p3.read() | xor_ln340_81_fu_12629_p2.read());
}

void ResNet::thread_or_ln340_304_fu_12725_p2() {
    or_ln340_304_fu_12725_p2 = (tmp_936_fu_12693_p3.read() | xor_ln340_83_fu_12719_p2.read());
}

void ResNet::thread_or_ln340_305_fu_12815_p2() {
    or_ln340_305_fu_12815_p2 = (tmp_938_fu_12783_p3.read() | xor_ln340_85_fu_12809_p2.read());
}

void ResNet::thread_or_ln340_306_fu_12905_p2() {
    or_ln340_306_fu_12905_p2 = (tmp_940_fu_12873_p3.read() | xor_ln340_87_fu_12899_p2.read());
}

void ResNet::thread_or_ln340_307_fu_12995_p2() {
    or_ln340_307_fu_12995_p2 = (tmp_942_fu_12963_p3.read() | xor_ln340_89_fu_12989_p2.read());
}

void ResNet::thread_or_ln340_308_fu_13085_p2() {
    or_ln340_308_fu_13085_p2 = (tmp_944_fu_13053_p3.read() | xor_ln340_91_fu_13079_p2.read());
}

void ResNet::thread_or_ln340_309_fu_13175_p2() {
    or_ln340_309_fu_13175_p2 = (tmp_946_fu_13143_p3.read() | xor_ln340_93_fu_13169_p2.read());
}

void ResNet::thread_or_ln340_310_fu_13265_p2() {
    or_ln340_310_fu_13265_p2 = (tmp_948_fu_13233_p3.read() | xor_ln340_95_fu_13259_p2.read());
}

void ResNet::thread_or_ln340_311_fu_13355_p2() {
    or_ln340_311_fu_13355_p2 = (tmp_950_fu_13323_p3.read() | xor_ln340_97_fu_13349_p2.read());
}

void ResNet::thread_or_ln340_312_fu_13445_p2() {
    or_ln340_312_fu_13445_p2 = (tmp_952_fu_13413_p3.read() | xor_ln340_99_fu_13439_p2.read());
}

void ResNet::thread_or_ln340_313_fu_13535_p2() {
    or_ln340_313_fu_13535_p2 = (tmp_954_fu_13503_p3.read() | xor_ln340_101_fu_13529_p2.read());
}

void ResNet::thread_or_ln340_314_fu_13625_p2() {
    or_ln340_314_fu_13625_p2 = (tmp_956_fu_13593_p3.read() | xor_ln340_103_fu_13619_p2.read());
}

void ResNet::thread_or_ln340_315_fu_13715_p2() {
    or_ln340_315_fu_13715_p2 = (tmp_958_fu_13683_p3.read() | xor_ln340_105_fu_13709_p2.read());
}

void ResNet::thread_or_ln340_316_fu_13805_p2() {
    or_ln340_316_fu_13805_p2 = (tmp_960_fu_13773_p3.read() | xor_ln340_107_fu_13799_p2.read());
}

void ResNet::thread_or_ln340_317_fu_13895_p2() {
    or_ln340_317_fu_13895_p2 = (tmp_962_fu_13863_p3.read() | xor_ln340_109_fu_13889_p2.read());
}

void ResNet::thread_or_ln340_318_fu_13985_p2() {
    or_ln340_318_fu_13985_p2 = (tmp_964_fu_13953_p3.read() | xor_ln340_111_fu_13979_p2.read());
}

void ResNet::thread_or_ln340_319_fu_14075_p2() {
    or_ln340_319_fu_14075_p2 = (tmp_966_fu_14043_p3.read() | xor_ln340_113_fu_14069_p2.read());
}

void ResNet::thread_or_ln340_320_fu_14165_p2() {
    or_ln340_320_fu_14165_p2 = (tmp_968_fu_14133_p3.read() | xor_ln340_115_fu_14159_p2.read());
}

void ResNet::thread_or_ln340_321_fu_14255_p2() {
    or_ln340_321_fu_14255_p2 = (tmp_970_fu_14223_p3.read() | xor_ln340_117_fu_14249_p2.read());
}

void ResNet::thread_or_ln340_322_fu_14345_p2() {
    or_ln340_322_fu_14345_p2 = (tmp_972_fu_14313_p3.read() | xor_ln340_119_fu_14339_p2.read());
}

void ResNet::thread_or_ln340_323_fu_14435_p2() {
    or_ln340_323_fu_14435_p2 = (tmp_974_fu_14403_p3.read() | xor_ln340_121_fu_14429_p2.read());
}

void ResNet::thread_or_ln340_324_fu_14525_p2() {
    or_ln340_324_fu_14525_p2 = (tmp_976_fu_14493_p3.read() | xor_ln340_123_fu_14519_p2.read());
}

void ResNet::thread_or_ln340_325_fu_14615_p2() {
    or_ln340_325_fu_14615_p2 = (tmp_978_fu_14583_p3.read() | xor_ln340_125_fu_14609_p2.read());
}

void ResNet::thread_or_ln340_326_fu_14705_p2() {
    or_ln340_326_fu_14705_p2 = (tmp_980_fu_14673_p3.read() | xor_ln340_127_fu_14699_p2.read());
}

void ResNet::thread_or_ln340_327_fu_14795_p2() {
    or_ln340_327_fu_14795_p2 = (tmp_982_fu_14763_p3.read() | xor_ln340_129_fu_14789_p2.read());
}

void ResNet::thread_or_ln340_328_fu_14885_p2() {
    or_ln340_328_fu_14885_p2 = (tmp_984_fu_14853_p3.read() | xor_ln340_131_fu_14879_p2.read());
}

void ResNet::thread_or_ln340_329_fu_14975_p2() {
    or_ln340_329_fu_14975_p2 = (tmp_986_fu_14943_p3.read() | xor_ln340_133_fu_14969_p2.read());
}

void ResNet::thread_or_ln340_330_fu_15065_p2() {
    or_ln340_330_fu_15065_p2 = (tmp_988_fu_15033_p3.read() | xor_ln340_135_fu_15059_p2.read());
}

void ResNet::thread_or_ln340_331_fu_15155_p2() {
    or_ln340_331_fu_15155_p2 = (tmp_990_fu_15123_p3.read() | xor_ln340_137_fu_15149_p2.read());
}

void ResNet::thread_or_ln340_332_fu_15245_p2() {
    or_ln340_332_fu_15245_p2 = (tmp_992_fu_15213_p3.read() | xor_ln340_139_fu_15239_p2.read());
}

void ResNet::thread_or_ln340_333_fu_15335_p2() {
    or_ln340_333_fu_15335_p2 = (tmp_994_fu_15303_p3.read() | xor_ln340_141_fu_15329_p2.read());
}

void ResNet::thread_or_ln340_334_fu_15425_p2() {
    or_ln340_334_fu_15425_p2 = (tmp_996_fu_15393_p3.read() | xor_ln340_143_fu_15419_p2.read());
}

void ResNet::thread_or_ln340_335_fu_15515_p2() {
    or_ln340_335_fu_15515_p2 = (tmp_998_fu_15483_p3.read() | xor_ln340_145_fu_15509_p2.read());
}

void ResNet::thread_or_ln340_336_fu_15605_p2() {
    or_ln340_336_fu_15605_p2 = (tmp_1000_fu_15573_p3.read() | xor_ln340_147_fu_15599_p2.read());
}

void ResNet::thread_or_ln340_337_fu_15695_p2() {
    or_ln340_337_fu_15695_p2 = (tmp_1002_fu_15663_p3.read() | xor_ln340_149_fu_15689_p2.read());
}

void ResNet::thread_or_ln340_338_fu_15785_p2() {
    or_ln340_338_fu_15785_p2 = (tmp_1004_fu_15753_p3.read() | xor_ln340_151_fu_15779_p2.read());
}

void ResNet::thread_or_ln340_339_fu_15875_p2() {
    or_ln340_339_fu_15875_p2 = (tmp_1006_fu_15843_p3.read() | xor_ln340_153_fu_15869_p2.read());
}

void ResNet::thread_or_ln340_340_fu_15965_p2() {
    or_ln340_340_fu_15965_p2 = (tmp_1008_fu_15933_p3.read() | xor_ln340_155_fu_15959_p2.read());
}

void ResNet::thread_or_ln340_341_fu_16055_p2() {
    or_ln340_341_fu_16055_p2 = (tmp_1010_fu_16023_p3.read() | xor_ln340_157_fu_16049_p2.read());
}

void ResNet::thread_or_ln340_342_fu_16145_p2() {
    or_ln340_342_fu_16145_p2 = (tmp_1012_fu_16113_p3.read() | xor_ln340_159_fu_16139_p2.read());
}

void ResNet::thread_or_ln340_343_fu_16235_p2() {
    or_ln340_343_fu_16235_p2 = (tmp_1014_fu_16203_p3.read() | xor_ln340_161_fu_16229_p2.read());
}

void ResNet::thread_or_ln340_344_fu_16325_p2() {
    or_ln340_344_fu_16325_p2 = (tmp_1016_fu_16293_p3.read() | xor_ln340_163_fu_16319_p2.read());
}

void ResNet::thread_or_ln340_345_fu_16415_p2() {
    or_ln340_345_fu_16415_p2 = (tmp_1018_fu_16383_p3.read() | xor_ln340_165_fu_16409_p2.read());
}

void ResNet::thread_or_ln340_346_fu_16505_p2() {
    or_ln340_346_fu_16505_p2 = (tmp_1020_fu_16473_p3.read() | xor_ln340_167_fu_16499_p2.read());
}

void ResNet::thread_or_ln340_347_fu_16595_p2() {
    or_ln340_347_fu_16595_p2 = (tmp_1022_fu_16563_p3.read() | xor_ln340_169_fu_16589_p2.read());
}

void ResNet::thread_or_ln340_348_fu_16685_p2() {
    or_ln340_348_fu_16685_p2 = (tmp_1024_fu_16653_p3.read() | xor_ln340_171_fu_16679_p2.read());
}

void ResNet::thread_or_ln340_349_fu_16775_p2() {
    or_ln340_349_fu_16775_p2 = (tmp_1026_fu_16743_p3.read() | xor_ln340_173_fu_16769_p2.read());
}

void ResNet::thread_or_ln340_350_fu_16865_p2() {
    or_ln340_350_fu_16865_p2 = (tmp_1028_fu_16833_p3.read() | xor_ln340_175_fu_16859_p2.read());
}

void ResNet::thread_or_ln340_351_fu_16955_p2() {
    or_ln340_351_fu_16955_p2 = (tmp_1030_fu_16923_p3.read() | xor_ln340_177_fu_16949_p2.read());
}

void ResNet::thread_or_ln340_352_fu_17045_p2() {
    or_ln340_352_fu_17045_p2 = (tmp_1032_fu_17013_p3.read() | xor_ln340_179_fu_17039_p2.read());
}

void ResNet::thread_or_ln340_353_fu_17135_p2() {
    or_ln340_353_fu_17135_p2 = (tmp_1034_fu_17103_p3.read() | xor_ln340_181_fu_17129_p2.read());
}

void ResNet::thread_or_ln340_354_fu_17225_p2() {
    or_ln340_354_fu_17225_p2 = (tmp_1036_fu_17193_p3.read() | xor_ln340_183_fu_17219_p2.read());
}

void ResNet::thread_or_ln340_355_fu_17315_p2() {
    or_ln340_355_fu_17315_p2 = (tmp_1038_fu_17283_p3.read() | xor_ln340_185_fu_17309_p2.read());
}

void ResNet::thread_or_ln340_356_fu_17405_p2() {
    or_ln340_356_fu_17405_p2 = (tmp_1040_fu_17373_p3.read() | xor_ln340_187_fu_17399_p2.read());
}

void ResNet::thread_or_ln340_357_fu_17495_p2() {
    or_ln340_357_fu_17495_p2 = (tmp_1042_fu_17463_p3.read() | xor_ln340_189_fu_17489_p2.read());
}

void ResNet::thread_or_ln340_358_fu_17585_p2() {
    or_ln340_358_fu_17585_p2 = (tmp_1044_fu_17553_p3.read() | xor_ln340_191_fu_17579_p2.read());
}

void ResNet::thread_or_ln340_359_fu_17675_p2() {
    or_ln340_359_fu_17675_p2 = (tmp_1046_fu_17643_p3.read() | xor_ln340_193_fu_17669_p2.read());
}

void ResNet::thread_or_ln340_3_fu_7817_p2() {
    or_ln340_3_fu_7817_p2 = (and_ln786_158_fu_7811_p2.read() | and_ln785_57_fu_7787_p2.read());
}

void ResNet::thread_or_ln340_4_fu_8098_p2() {
    or_ln340_4_fu_8098_p2 = (and_ln786_159_fu_8092_p2.read() | and_ln785_58_fu_8068_p2.read());
}

void ResNet::thread_or_ln340_5_fu_8379_p2() {
    or_ln340_5_fu_8379_p2 = (and_ln786_161_fu_8373_p2.read() | and_ln785_59_fu_8349_p2.read());
}

void ResNet::thread_or_ln340_6_fu_8660_p2() {
    or_ln340_6_fu_8660_p2 = (and_ln786_162_fu_8654_p2.read() | and_ln785_60_fu_8630_p2.read());
}

void ResNet::thread_or_ln340_7_fu_8941_p2() {
    or_ln340_7_fu_8941_p2 = (and_ln786_164_fu_8935_p2.read() | and_ln785_61_fu_8911_p2.read());
}

void ResNet::thread_or_ln340_8_fu_9222_p2() {
    or_ln340_8_fu_9222_p2 = (and_ln786_166_fu_9216_p2.read() | and_ln785_62_fu_9192_p2.read());
}

void ResNet::thread_or_ln340_9_fu_9503_p2() {
    or_ln340_9_fu_9503_p2 = (and_ln786_167_fu_9497_p2.read() | and_ln785_63_fu_9473_p2.read());
}

void ResNet::thread_or_ln340_fu_6974_p2() {
    or_ln340_fu_6974_p2 = (and_ln786_155_fu_6968_p2.read() | and_ln785_fu_6944_p2.read());
}

void ResNet::thread_or_ln785_10_fu_9742_p2() {
    or_ln785_10_fu_9742_p2 = (tmp_811_fu_9648_p3.read() | xor_ln785_10_fu_9736_p2.read());
}

void ResNet::thread_or_ln785_11_fu_10023_p2() {
    or_ln785_11_fu_10023_p2 = (tmp_817_fu_9929_p3.read() | xor_ln785_124_fu_10017_p2.read());
}

void ResNet::thread_or_ln785_12_fu_10304_p2() {
    or_ln785_12_fu_10304_p2 = (tmp_823_fu_10210_p3.read() | xor_ln785_126_fu_10298_p2.read());
}

void ResNet::thread_or_ln785_13_fu_10585_p2() {
    or_ln785_13_fu_10585_p2 = (tmp_829_fu_10491_p3.read() | xor_ln785_128_fu_10579_p2.read());
}

void ResNet::thread_or_ln785_14_fu_10866_p2() {
    or_ln785_14_fu_10866_p2 = (tmp_835_fu_10772_p3.read() | xor_ln785_14_fu_10860_p2.read());
}

void ResNet::thread_or_ln785_15_fu_11147_p2() {
    or_ln785_15_fu_11147_p2 = (tmp_841_fu_11053_p3.read() | xor_ln785_15_fu_11141_p2.read());
}

void ResNet::thread_or_ln785_1_fu_7213_p2() {
    or_ln785_1_fu_7213_p2 = (tmp_757_fu_7119_p3.read() | xor_ln785_1_fu_7207_p2.read());
}

void ResNet::thread_or_ln785_2_fu_7494_p2() {
    or_ln785_2_fu_7494_p2 = (tmp_763_fu_7400_p3.read() | xor_ln785_2_fu_7488_p2.read());
}

void ResNet::thread_or_ln785_3_fu_7775_p2() {
    or_ln785_3_fu_7775_p2 = (tmp_769_fu_7681_p3.read() | xor_ln785_3_fu_7769_p2.read());
}

void ResNet::thread_or_ln785_4_fu_8056_p2() {
    or_ln785_4_fu_8056_p2 = (tmp_775_fu_7962_p3.read() | xor_ln785_4_fu_8050_p2.read());
}

void ResNet::thread_or_ln785_55_fu_8618_p2() {
    or_ln785_55_fu_8618_p2 = (tmp_787_fu_8524_p3.read() | xor_ln785_6_fu_8612_p2.read());
}

void ResNet::thread_or_ln785_56_fu_8899_p2() {
    or_ln785_56_fu_8899_p2 = (tmp_793_fu_8805_p3.read() | xor_ln785_7_fu_8893_p2.read());
}

void ResNet::thread_or_ln785_5_fu_8337_p2() {
    or_ln785_5_fu_8337_p2 = (tmp_781_fu_8243_p3.read() | xor_ln785_5_fu_8331_p2.read());
}

void ResNet::thread_or_ln785_8_fu_9180_p2() {
    or_ln785_8_fu_9180_p2 = (tmp_799_fu_9086_p3.read() | xor_ln785_8_fu_9174_p2.read());
}

void ResNet::thread_or_ln785_9_fu_9461_p2() {
    or_ln785_9_fu_9461_p2 = (tmp_805_fu_9367_p3.read() | xor_ln785_9_fu_9455_p2.read());
}

void ResNet::thread_or_ln785_fu_6932_p2() {
    or_ln785_fu_6932_p2 = (tmp_751_fu_6838_p3.read() | xor_ln785_fu_6926_p2.read());
}

void ResNet::thread_or_ln786_55_fu_7237_p2() {
    or_ln786_55_fu_7237_p2 = (and_ln781_1_fu_7201_p2.read() | and_ln786_1_fu_7231_p2.read());
}

void ResNet::thread_or_ln786_56_fu_7518_p2() {
    or_ln786_56_fu_7518_p2 = (and_ln781_2_fu_7482_p2.read() | and_ln786_2_fu_7512_p2.read());
}

void ResNet::thread_or_ln786_57_fu_7799_p2() {
    or_ln786_57_fu_7799_p2 = (and_ln781_3_fu_7763_p2.read() | and_ln786_3_fu_7793_p2.read());
}

void ResNet::thread_or_ln786_58_fu_8080_p2() {
    or_ln786_58_fu_8080_p2 = (and_ln781_4_fu_8044_p2.read() | and_ln786_4_fu_8074_p2.read());
}

void ResNet::thread_or_ln786_59_fu_8361_p2() {
    or_ln786_59_fu_8361_p2 = (and_ln781_5_fu_8325_p2.read() | and_ln786_5_fu_8355_p2.read());
}

void ResNet::thread_or_ln786_60_fu_8642_p2() {
    or_ln786_60_fu_8642_p2 = (and_ln781_6_fu_8606_p2.read() | and_ln786_6_fu_8636_p2.read());
}

void ResNet::thread_or_ln786_61_fu_8923_p2() {
    or_ln786_61_fu_8923_p2 = (and_ln781_7_fu_8887_p2.read() | and_ln786_7_fu_8917_p2.read());
}

void ResNet::thread_or_ln786_62_fu_9204_p2() {
    or_ln786_62_fu_9204_p2 = (and_ln781_8_fu_9168_p2.read() | and_ln786_8_fu_9198_p2.read());
}

void ResNet::thread_or_ln786_63_fu_9485_p2() {
    or_ln786_63_fu_9485_p2 = (and_ln781_9_fu_9449_p2.read() | and_ln786_9_fu_9479_p2.read());
}

void ResNet::thread_or_ln786_64_fu_9766_p2() {
    or_ln786_64_fu_9766_p2 = (and_ln781_10_fu_9730_p2.read() | and_ln786_10_fu_9760_p2.read());
}

void ResNet::thread_or_ln786_65_fu_10047_p2() {
    or_ln786_65_fu_10047_p2 = (and_ln781_11_fu_10011_p2.read() | and_ln786_11_fu_10041_p2.read());
}

void ResNet::thread_or_ln786_66_fu_10328_p2() {
    or_ln786_66_fu_10328_p2 = (and_ln781_12_fu_10292_p2.read() | and_ln786_12_fu_10322_p2.read());
}

void ResNet::thread_or_ln786_67_fu_10609_p2() {
    or_ln786_67_fu_10609_p2 = (and_ln781_13_fu_10573_p2.read() | and_ln786_13_fu_10603_p2.read());
}

void ResNet::thread_or_ln786_68_fu_10890_p2() {
    or_ln786_68_fu_10890_p2 = (and_ln781_14_fu_10854_p2.read() | and_ln786_14_fu_10884_p2.read());
}

void ResNet::thread_or_ln786_69_fu_11171_p2() {
    or_ln786_69_fu_11171_p2 = (and_ln781_15_fu_11135_p2.read() | and_ln786_15_fu_11165_p2.read());
}

void ResNet::thread_or_ln786_fu_6956_p2() {
    or_ln786_fu_6956_p2 = (and_ln781_fu_6920_p2.read() | and_ln786_fu_6950_p2.read());
}

void ResNet::thread_or_ln90_fu_4766_p2() {
    or_ln90_fu_4766_p2 = (and_ln86_fu_4754_p2.read() | icmp_ln87_fu_4704_p2.read());
}

void ResNet::thread_out_buf0_V_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_0_address0 = grp_pgconv64_32u_s_fu_4622_top_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_0_address0 = grp_pgconv64_16u_s_fu_4582_top_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_0_address0 = grp_pgconv64s2_16u_s_fu_4389_top_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_0_address0 = grp_pgconv64_64u_s_fu_4252_top_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_0_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_0_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_0_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_0_address0 = grp_pgconv64s2_32u_s_fu_3755_top_0_V_address0.read();
    } else {
        out_buf0_V_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_0_ce0 = grp_pgconv64_32u_s_fu_4622_top_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_0_ce0 = grp_pgconv64_16u_s_fu_4582_top_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_0_ce0 = grp_pgconv64s2_16u_s_fu_4389_top_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_0_ce0 = grp_pgconv64_64u_s_fu_4252_top_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_0_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_0_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_0_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_0_ce0 = grp_pgconv64s2_32u_s_fu_3755_top_0_V_ce0.read();
    } else {
        out_buf0_V_0_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_0_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_0_d0 = grp_pgconv64_32u_s_fu_4622_top_0_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_0_d0 = grp_pgconv64_16u_s_fu_4582_top_0_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_0_d0 = grp_pgconv64s2_16u_s_fu_4389_top_0_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_0_d0 = grp_pgconv64_64u_s_fu_4252_top_0_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_0_d0 = grp_pgconv64s2_32u_s_fu_3755_top_0_V_d0.read();
    } else {
        out_buf0_V_0_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_0_we0 = grp_pgconv64_32u_s_fu_4622_top_0_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_0_we0 = grp_pgconv64_16u_s_fu_4582_top_0_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_0_we0 = grp_pgconv64s2_16u_s_fu_4389_top_0_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_0_we0 = grp_pgconv64_64u_s_fu_4252_top_0_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_0_we0 = grp_pgconv64s2_32u_s_fu_3755_top_0_V_we0.read();
    } else {
        out_buf0_V_0_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_10_address0 = grp_pgconv64_32u_s_fu_4622_top_10_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_10_address0 = grp_pgconv64_16u_s_fu_4582_top_10_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_10_address0 = grp_pgconv64s2_16u_s_fu_4389_top_10_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_10_address0 = grp_pgconv64_64u_s_fu_4252_top_10_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_10_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_10_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_10_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_10_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_10_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_10_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_10_address0 = grp_pgconv64s2_32u_s_fu_3755_top_10_V_address0.read();
    } else {
        out_buf0_V_10_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_10_ce0 = grp_pgconv64_32u_s_fu_4622_top_10_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_10_ce0 = grp_pgconv64_16u_s_fu_4582_top_10_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_10_ce0 = grp_pgconv64s2_16u_s_fu_4389_top_10_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_10_ce0 = grp_pgconv64_64u_s_fu_4252_top_10_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_10_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_10_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_10_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_10_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_10_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_10_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_10_ce0 = grp_pgconv64s2_32u_s_fu_3755_top_10_V_ce0.read();
    } else {
        out_buf0_V_10_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_10_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_10_d0 = grp_pgconv64_32u_s_fu_4622_top_10_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_10_d0 = grp_pgconv64_16u_s_fu_4582_top_10_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_10_d0 = grp_pgconv64s2_16u_s_fu_4389_top_10_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_10_d0 = grp_pgconv64_64u_s_fu_4252_top_10_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_10_d0 = grp_pgconv64s2_32u_s_fu_3755_top_10_V_d0.read();
    } else {
        out_buf0_V_10_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_10_we0 = grp_pgconv64_32u_s_fu_4622_top_10_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_10_we0 = grp_pgconv64_16u_s_fu_4582_top_10_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_10_we0 = grp_pgconv64s2_16u_s_fu_4389_top_10_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_10_we0 = grp_pgconv64_64u_s_fu_4252_top_10_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_10_we0 = grp_pgconv64s2_32u_s_fu_3755_top_10_V_we0.read();
    } else {
        out_buf0_V_10_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_11_address0 = grp_pgconv64_32u_s_fu_4622_top_11_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_11_address0 = grp_pgconv64_16u_s_fu_4582_top_11_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_11_address0 = grp_pgconv64s2_16u_s_fu_4389_top_11_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_11_address0 = grp_pgconv64_64u_s_fu_4252_top_11_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_11_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_11_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_11_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_11_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_11_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_11_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_11_address0 = grp_pgconv64s2_32u_s_fu_3755_top_11_V_address0.read();
    } else {
        out_buf0_V_11_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_11_ce0 = grp_pgconv64_32u_s_fu_4622_top_11_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_11_ce0 = grp_pgconv64_16u_s_fu_4582_top_11_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_11_ce0 = grp_pgconv64s2_16u_s_fu_4389_top_11_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_11_ce0 = grp_pgconv64_64u_s_fu_4252_top_11_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_11_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_11_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_11_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_11_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_11_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_11_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_11_ce0 = grp_pgconv64s2_32u_s_fu_3755_top_11_V_ce0.read();
    } else {
        out_buf0_V_11_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_11_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_11_d0 = grp_pgconv64_32u_s_fu_4622_top_11_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_11_d0 = grp_pgconv64_16u_s_fu_4582_top_11_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_11_d0 = grp_pgconv64s2_16u_s_fu_4389_top_11_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_11_d0 = grp_pgconv64_64u_s_fu_4252_top_11_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_11_d0 = grp_pgconv64s2_32u_s_fu_3755_top_11_V_d0.read();
    } else {
        out_buf0_V_11_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_11_we0 = grp_pgconv64_32u_s_fu_4622_top_11_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_11_we0 = grp_pgconv64_16u_s_fu_4582_top_11_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_11_we0 = grp_pgconv64s2_16u_s_fu_4389_top_11_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_11_we0 = grp_pgconv64_64u_s_fu_4252_top_11_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_11_we0 = grp_pgconv64s2_32u_s_fu_3755_top_11_V_we0.read();
    } else {
        out_buf0_V_11_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_12_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_12_address0 = grp_pgconv64_32u_s_fu_4622_top_12_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_12_address0 = grp_pgconv64_16u_s_fu_4582_top_12_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_12_address0 = grp_pgconv64s2_16u_s_fu_4389_top_12_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_12_address0 = grp_pgconv64_64u_s_fu_4252_top_12_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_12_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_12_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_12_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_12_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_12_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_12_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_12_address0 = grp_pgconv64s2_32u_s_fu_3755_top_12_V_address0.read();
    } else {
        out_buf0_V_12_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_12_ce0 = grp_pgconv64_32u_s_fu_4622_top_12_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_12_ce0 = grp_pgconv64_16u_s_fu_4582_top_12_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_12_ce0 = grp_pgconv64s2_16u_s_fu_4389_top_12_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_12_ce0 = grp_pgconv64_64u_s_fu_4252_top_12_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_12_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_12_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_12_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_12_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_12_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_12_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_12_ce0 = grp_pgconv64s2_32u_s_fu_3755_top_12_V_ce0.read();
    } else {
        out_buf0_V_12_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_12_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_12_d0 = grp_pgconv64_32u_s_fu_4622_top_12_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_12_d0 = grp_pgconv64_16u_s_fu_4582_top_12_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_12_d0 = grp_pgconv64s2_16u_s_fu_4389_top_12_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_12_d0 = grp_pgconv64_64u_s_fu_4252_top_12_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_12_d0 = grp_pgconv64s2_32u_s_fu_3755_top_12_V_d0.read();
    } else {
        out_buf0_V_12_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_12_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_12_we0 = grp_pgconv64_32u_s_fu_4622_top_12_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_12_we0 = grp_pgconv64_16u_s_fu_4582_top_12_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_12_we0 = grp_pgconv64s2_16u_s_fu_4389_top_12_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_12_we0 = grp_pgconv64_64u_s_fu_4252_top_12_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_12_we0 = grp_pgconv64s2_32u_s_fu_3755_top_12_V_we0.read();
    } else {
        out_buf0_V_12_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_13_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_13_address0 = grp_pgconv64_32u_s_fu_4622_top_13_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_13_address0 = grp_pgconv64_16u_s_fu_4582_top_13_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_13_address0 = grp_pgconv64s2_16u_s_fu_4389_top_13_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_13_address0 = grp_pgconv64_64u_s_fu_4252_top_13_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_13_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_13_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_13_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_13_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_13_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_13_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_13_address0 = grp_pgconv64s2_32u_s_fu_3755_top_13_V_address0.read();
    } else {
        out_buf0_V_13_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_13_ce0 = grp_pgconv64_32u_s_fu_4622_top_13_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_13_ce0 = grp_pgconv64_16u_s_fu_4582_top_13_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_13_ce0 = grp_pgconv64s2_16u_s_fu_4389_top_13_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_13_ce0 = grp_pgconv64_64u_s_fu_4252_top_13_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_13_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_13_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_13_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_13_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_13_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_13_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_13_ce0 = grp_pgconv64s2_32u_s_fu_3755_top_13_V_ce0.read();
    } else {
        out_buf0_V_13_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_13_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_13_d0 = grp_pgconv64_32u_s_fu_4622_top_13_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_13_d0 = grp_pgconv64_16u_s_fu_4582_top_13_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_13_d0 = grp_pgconv64s2_16u_s_fu_4389_top_13_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_13_d0 = grp_pgconv64_64u_s_fu_4252_top_13_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_13_d0 = grp_pgconv64s2_32u_s_fu_3755_top_13_V_d0.read();
    } else {
        out_buf0_V_13_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_13_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_13_we0 = grp_pgconv64_32u_s_fu_4622_top_13_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_13_we0 = grp_pgconv64_16u_s_fu_4582_top_13_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_13_we0 = grp_pgconv64s2_16u_s_fu_4389_top_13_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_13_we0 = grp_pgconv64_64u_s_fu_4252_top_13_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_13_we0 = grp_pgconv64s2_32u_s_fu_3755_top_13_V_we0.read();
    } else {
        out_buf0_V_13_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_14_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_14_address0 = grp_pgconv64_32u_s_fu_4622_top_14_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_14_address0 = grp_pgconv64_16u_s_fu_4582_top_14_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_14_address0 = grp_pgconv64s2_16u_s_fu_4389_top_14_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_14_address0 = grp_pgconv64_64u_s_fu_4252_top_14_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_14_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_14_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_14_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_14_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_14_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_14_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_14_address0 = grp_pgconv64s2_32u_s_fu_3755_top_14_V_address0.read();
    } else {
        out_buf0_V_14_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_14_ce0 = grp_pgconv64_32u_s_fu_4622_top_14_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_14_ce0 = grp_pgconv64_16u_s_fu_4582_top_14_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_14_ce0 = grp_pgconv64s2_16u_s_fu_4389_top_14_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_14_ce0 = grp_pgconv64_64u_s_fu_4252_top_14_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_14_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_14_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_14_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_14_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_14_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_14_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_14_ce0 = grp_pgconv64s2_32u_s_fu_3755_top_14_V_ce0.read();
    } else {
        out_buf0_V_14_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_14_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_14_d0 = grp_pgconv64_32u_s_fu_4622_top_14_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_14_d0 = grp_pgconv64_16u_s_fu_4582_top_14_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_14_d0 = grp_pgconv64s2_16u_s_fu_4389_top_14_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_14_d0 = grp_pgconv64_64u_s_fu_4252_top_14_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_14_d0 = grp_pgconv64s2_32u_s_fu_3755_top_14_V_d0.read();
    } else {
        out_buf0_V_14_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_14_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_14_we0 = grp_pgconv64_32u_s_fu_4622_top_14_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_14_we0 = grp_pgconv64_16u_s_fu_4582_top_14_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_14_we0 = grp_pgconv64s2_16u_s_fu_4389_top_14_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_14_we0 = grp_pgconv64_64u_s_fu_4252_top_14_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_14_we0 = grp_pgconv64s2_32u_s_fu_3755_top_14_V_we0.read();
    } else {
        out_buf0_V_14_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_15_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_15_address0 = grp_pgconv64_32u_s_fu_4622_top_15_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_15_address0 = grp_pgconv64_16u_s_fu_4582_top_15_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_15_address0 = grp_pgconv64s2_16u_s_fu_4389_top_15_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_15_address0 = grp_pgconv64_64u_s_fu_4252_top_15_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_15_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_15_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_15_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_15_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_15_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_15_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_15_address0 = grp_pgconv64s2_32u_s_fu_3755_top_15_V_address0.read();
    } else {
        out_buf0_V_15_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_15_ce0 = grp_pgconv64_32u_s_fu_4622_top_15_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_15_ce0 = grp_pgconv64_16u_s_fu_4582_top_15_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_15_ce0 = grp_pgconv64s2_16u_s_fu_4389_top_15_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_15_ce0 = grp_pgconv64_64u_s_fu_4252_top_15_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_15_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_15_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_15_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_15_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_15_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_15_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_15_ce0 = grp_pgconv64s2_32u_s_fu_3755_top_15_V_ce0.read();
    } else {
        out_buf0_V_15_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_15_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_15_d0 = grp_pgconv64_32u_s_fu_4622_top_15_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_15_d0 = grp_pgconv64_16u_s_fu_4582_top_15_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_15_d0 = grp_pgconv64s2_16u_s_fu_4389_top_15_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_15_d0 = grp_pgconv64_64u_s_fu_4252_top_15_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_15_d0 = grp_pgconv64s2_32u_s_fu_3755_top_15_V_d0.read();
    } else {
        out_buf0_V_15_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_15_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_15_we0 = grp_pgconv64_32u_s_fu_4622_top_15_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_15_we0 = grp_pgconv64_16u_s_fu_4582_top_15_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_15_we0 = grp_pgconv64s2_16u_s_fu_4389_top_15_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_15_we0 = grp_pgconv64_64u_s_fu_4252_top_15_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_15_we0 = grp_pgconv64s2_32u_s_fu_3755_top_15_V_we0.read();
    } else {
        out_buf0_V_15_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_1_address0 = grp_pgconv64_32u_s_fu_4622_top_1_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_1_address0 = grp_pgconv64_16u_s_fu_4582_top_1_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_1_address0 = grp_pgconv64s2_16u_s_fu_4389_top_1_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_1_address0 = grp_pgconv64_64u_s_fu_4252_top_1_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_1_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_1_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_1_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_1_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_1_address0 = grp_pgconv64s2_32u_s_fu_3755_top_1_V_address0.read();
    } else {
        out_buf0_V_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_1_ce0 = grp_pgconv64_32u_s_fu_4622_top_1_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_1_ce0 = grp_pgconv64_16u_s_fu_4582_top_1_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_1_ce0 = grp_pgconv64s2_16u_s_fu_4389_top_1_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_1_ce0 = grp_pgconv64_64u_s_fu_4252_top_1_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_1_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_1_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_1_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_1_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_1_ce0 = grp_pgconv64s2_32u_s_fu_3755_top_1_V_ce0.read();
    } else {
        out_buf0_V_1_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_1_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_1_d0 = grp_pgconv64_32u_s_fu_4622_top_1_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_1_d0 = grp_pgconv64_16u_s_fu_4582_top_1_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_1_d0 = grp_pgconv64s2_16u_s_fu_4389_top_1_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_1_d0 = grp_pgconv64_64u_s_fu_4252_top_1_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_1_d0 = grp_pgconv64s2_32u_s_fu_3755_top_1_V_d0.read();
    } else {
        out_buf0_V_1_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_1_we0 = grp_pgconv64_32u_s_fu_4622_top_1_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_1_we0 = grp_pgconv64_16u_s_fu_4582_top_1_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_1_we0 = grp_pgconv64s2_16u_s_fu_4389_top_1_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_1_we0 = grp_pgconv64_64u_s_fu_4252_top_1_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_1_we0 = grp_pgconv64s2_32u_s_fu_3755_top_1_V_we0.read();
    } else {
        out_buf0_V_1_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_2_address0 = grp_pgconv64_32u_s_fu_4622_top_2_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_2_address0 = grp_pgconv64_16u_s_fu_4582_top_2_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_2_address0 = grp_pgconv64s2_16u_s_fu_4389_top_2_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_2_address0 = grp_pgconv64_64u_s_fu_4252_top_2_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_2_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_2_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_2_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_2_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_2_address0 = grp_pgconv64s2_32u_s_fu_3755_top_2_V_address0.read();
    } else {
        out_buf0_V_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_2_ce0 = grp_pgconv64_32u_s_fu_4622_top_2_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_2_ce0 = grp_pgconv64_16u_s_fu_4582_top_2_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_2_ce0 = grp_pgconv64s2_16u_s_fu_4389_top_2_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_2_ce0 = grp_pgconv64_64u_s_fu_4252_top_2_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_2_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_2_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_2_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_2_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_2_ce0 = grp_pgconv64s2_32u_s_fu_3755_top_2_V_ce0.read();
    } else {
        out_buf0_V_2_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_2_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_2_d0 = grp_pgconv64_32u_s_fu_4622_top_2_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_2_d0 = grp_pgconv64_16u_s_fu_4582_top_2_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_2_d0 = grp_pgconv64s2_16u_s_fu_4389_top_2_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_2_d0 = grp_pgconv64_64u_s_fu_4252_top_2_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_2_d0 = grp_pgconv64s2_32u_s_fu_3755_top_2_V_d0.read();
    } else {
        out_buf0_V_2_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_2_we0 = grp_pgconv64_32u_s_fu_4622_top_2_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_2_we0 = grp_pgconv64_16u_s_fu_4582_top_2_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_2_we0 = grp_pgconv64s2_16u_s_fu_4389_top_2_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_2_we0 = grp_pgconv64_64u_s_fu_4252_top_2_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_2_we0 = grp_pgconv64s2_32u_s_fu_3755_top_2_V_we0.read();
    } else {
        out_buf0_V_2_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_3_address0 = grp_pgconv64_32u_s_fu_4622_top_3_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_3_address0 = grp_pgconv64_16u_s_fu_4582_top_3_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_3_address0 = grp_pgconv64s2_16u_s_fu_4389_top_3_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_3_address0 = grp_pgconv64_64u_s_fu_4252_top_3_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_3_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_3_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_3_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_3_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_3_address0 = grp_pgconv64s2_32u_s_fu_3755_top_3_V_address0.read();
    } else {
        out_buf0_V_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_3_ce0 = grp_pgconv64_32u_s_fu_4622_top_3_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_3_ce0 = grp_pgconv64_16u_s_fu_4582_top_3_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_3_ce0 = grp_pgconv64s2_16u_s_fu_4389_top_3_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_3_ce0 = grp_pgconv64_64u_s_fu_4252_top_3_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_3_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_3_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_3_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_3_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_3_ce0 = grp_pgconv64s2_32u_s_fu_3755_top_3_V_ce0.read();
    } else {
        out_buf0_V_3_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_3_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_3_d0 = grp_pgconv64_32u_s_fu_4622_top_3_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_3_d0 = grp_pgconv64_16u_s_fu_4582_top_3_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_3_d0 = grp_pgconv64s2_16u_s_fu_4389_top_3_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_3_d0 = grp_pgconv64_64u_s_fu_4252_top_3_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_3_d0 = grp_pgconv64s2_32u_s_fu_3755_top_3_V_d0.read();
    } else {
        out_buf0_V_3_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_3_we0 = grp_pgconv64_32u_s_fu_4622_top_3_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_3_we0 = grp_pgconv64_16u_s_fu_4582_top_3_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_3_we0 = grp_pgconv64s2_16u_s_fu_4389_top_3_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_3_we0 = grp_pgconv64_64u_s_fu_4252_top_3_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_3_we0 = grp_pgconv64s2_32u_s_fu_3755_top_3_V_we0.read();
    } else {
        out_buf0_V_3_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_4_address0 = grp_pgconv64_32u_s_fu_4622_top_4_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_4_address0 = grp_pgconv64_16u_s_fu_4582_top_4_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_4_address0 = grp_pgconv64s2_16u_s_fu_4389_top_4_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_4_address0 = grp_pgconv64_64u_s_fu_4252_top_4_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_4_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_4_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_4_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_4_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_4_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_4_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_4_address0 = grp_pgconv64s2_32u_s_fu_3755_top_4_V_address0.read();
    } else {
        out_buf0_V_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_4_ce0 = grp_pgconv64_32u_s_fu_4622_top_4_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_4_ce0 = grp_pgconv64_16u_s_fu_4582_top_4_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_4_ce0 = grp_pgconv64s2_16u_s_fu_4389_top_4_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_4_ce0 = grp_pgconv64_64u_s_fu_4252_top_4_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_4_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_4_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_4_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_4_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_4_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_4_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_4_ce0 = grp_pgconv64s2_32u_s_fu_3755_top_4_V_ce0.read();
    } else {
        out_buf0_V_4_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_4_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_4_d0 = grp_pgconv64_32u_s_fu_4622_top_4_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_4_d0 = grp_pgconv64_16u_s_fu_4582_top_4_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_4_d0 = grp_pgconv64s2_16u_s_fu_4389_top_4_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_4_d0 = grp_pgconv64_64u_s_fu_4252_top_4_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_4_d0 = grp_pgconv64s2_32u_s_fu_3755_top_4_V_d0.read();
    } else {
        out_buf0_V_4_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_4_we0 = grp_pgconv64_32u_s_fu_4622_top_4_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_4_we0 = grp_pgconv64_16u_s_fu_4582_top_4_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_4_we0 = grp_pgconv64s2_16u_s_fu_4389_top_4_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_4_we0 = grp_pgconv64_64u_s_fu_4252_top_4_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_4_we0 = grp_pgconv64s2_32u_s_fu_3755_top_4_V_we0.read();
    } else {
        out_buf0_V_4_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_5_address0 = grp_pgconv64_32u_s_fu_4622_top_5_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_5_address0 = grp_pgconv64_16u_s_fu_4582_top_5_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_5_address0 = grp_pgconv64s2_16u_s_fu_4389_top_5_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_5_address0 = grp_pgconv64_64u_s_fu_4252_top_5_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_5_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_5_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_5_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_5_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_5_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_5_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_5_address0 = grp_pgconv64s2_32u_s_fu_3755_top_5_V_address0.read();
    } else {
        out_buf0_V_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_5_ce0 = grp_pgconv64_32u_s_fu_4622_top_5_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_5_ce0 = grp_pgconv64_16u_s_fu_4582_top_5_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_5_ce0 = grp_pgconv64s2_16u_s_fu_4389_top_5_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_5_ce0 = grp_pgconv64_64u_s_fu_4252_top_5_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_5_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_5_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_5_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_5_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_5_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_5_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_5_ce0 = grp_pgconv64s2_32u_s_fu_3755_top_5_V_ce0.read();
    } else {
        out_buf0_V_5_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_5_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_5_d0 = grp_pgconv64_32u_s_fu_4622_top_5_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_5_d0 = grp_pgconv64_16u_s_fu_4582_top_5_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_5_d0 = grp_pgconv64s2_16u_s_fu_4389_top_5_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_5_d0 = grp_pgconv64_64u_s_fu_4252_top_5_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_5_d0 = grp_pgconv64s2_32u_s_fu_3755_top_5_V_d0.read();
    } else {
        out_buf0_V_5_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_5_we0 = grp_pgconv64_32u_s_fu_4622_top_5_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_5_we0 = grp_pgconv64_16u_s_fu_4582_top_5_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_5_we0 = grp_pgconv64s2_16u_s_fu_4389_top_5_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_5_we0 = grp_pgconv64_64u_s_fu_4252_top_5_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_5_we0 = grp_pgconv64s2_32u_s_fu_3755_top_5_V_we0.read();
    } else {
        out_buf0_V_5_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_6_address0 = grp_pgconv64_32u_s_fu_4622_top_6_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_6_address0 = grp_pgconv64_16u_s_fu_4582_top_6_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_6_address0 = grp_pgconv64s2_16u_s_fu_4389_top_6_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_6_address0 = grp_pgconv64_64u_s_fu_4252_top_6_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_6_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_6_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_6_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_6_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_6_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_6_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_6_address0 = grp_pgconv64s2_32u_s_fu_3755_top_6_V_address0.read();
    } else {
        out_buf0_V_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_6_ce0 = grp_pgconv64_32u_s_fu_4622_top_6_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_6_ce0 = grp_pgconv64_16u_s_fu_4582_top_6_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_6_ce0 = grp_pgconv64s2_16u_s_fu_4389_top_6_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_6_ce0 = grp_pgconv64_64u_s_fu_4252_top_6_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_6_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_6_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_6_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_6_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_6_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_6_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_6_ce0 = grp_pgconv64s2_32u_s_fu_3755_top_6_V_ce0.read();
    } else {
        out_buf0_V_6_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_6_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_6_d0 = grp_pgconv64_32u_s_fu_4622_top_6_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_6_d0 = grp_pgconv64_16u_s_fu_4582_top_6_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_6_d0 = grp_pgconv64s2_16u_s_fu_4389_top_6_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_6_d0 = grp_pgconv64_64u_s_fu_4252_top_6_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_6_d0 = grp_pgconv64s2_32u_s_fu_3755_top_6_V_d0.read();
    } else {
        out_buf0_V_6_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_6_we0 = grp_pgconv64_32u_s_fu_4622_top_6_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_6_we0 = grp_pgconv64_16u_s_fu_4582_top_6_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_6_we0 = grp_pgconv64s2_16u_s_fu_4389_top_6_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_6_we0 = grp_pgconv64_64u_s_fu_4252_top_6_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_6_we0 = grp_pgconv64s2_32u_s_fu_3755_top_6_V_we0.read();
    } else {
        out_buf0_V_6_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_7_address0 = grp_pgconv64_32u_s_fu_4622_top_7_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_7_address0 = grp_pgconv64_16u_s_fu_4582_top_7_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_7_address0 = grp_pgconv64s2_16u_s_fu_4389_top_7_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_7_address0 = grp_pgconv64_64u_s_fu_4252_top_7_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_7_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_7_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_7_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_7_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_7_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_7_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_7_address0 = grp_pgconv64s2_32u_s_fu_3755_top_7_V_address0.read();
    } else {
        out_buf0_V_7_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_7_ce0 = grp_pgconv64_32u_s_fu_4622_top_7_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_7_ce0 = grp_pgconv64_16u_s_fu_4582_top_7_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_7_ce0 = grp_pgconv64s2_16u_s_fu_4389_top_7_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_7_ce0 = grp_pgconv64_64u_s_fu_4252_top_7_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_7_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_7_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_7_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_7_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_7_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_7_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_7_ce0 = grp_pgconv64s2_32u_s_fu_3755_top_7_V_ce0.read();
    } else {
        out_buf0_V_7_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_7_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_7_d0 = grp_pgconv64_32u_s_fu_4622_top_7_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_7_d0 = grp_pgconv64_16u_s_fu_4582_top_7_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_7_d0 = grp_pgconv64s2_16u_s_fu_4389_top_7_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_7_d0 = grp_pgconv64_64u_s_fu_4252_top_7_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_7_d0 = grp_pgconv64s2_32u_s_fu_3755_top_7_V_d0.read();
    } else {
        out_buf0_V_7_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_7_we0 = grp_pgconv64_32u_s_fu_4622_top_7_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_7_we0 = grp_pgconv64_16u_s_fu_4582_top_7_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_7_we0 = grp_pgconv64s2_16u_s_fu_4389_top_7_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_7_we0 = grp_pgconv64_64u_s_fu_4252_top_7_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_7_we0 = grp_pgconv64s2_32u_s_fu_3755_top_7_V_we0.read();
    } else {
        out_buf0_V_7_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_8_address0 = grp_pgconv64_32u_s_fu_4622_top_8_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_8_address0 = grp_pgconv64_16u_s_fu_4582_top_8_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_8_address0 = grp_pgconv64s2_16u_s_fu_4389_top_8_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_8_address0 = grp_pgconv64_64u_s_fu_4252_top_8_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_8_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_8_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_8_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_8_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_8_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_8_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_8_address0 = grp_pgconv64s2_32u_s_fu_3755_top_8_V_address0.read();
    } else {
        out_buf0_V_8_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_8_ce0 = grp_pgconv64_32u_s_fu_4622_top_8_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_8_ce0 = grp_pgconv64_16u_s_fu_4582_top_8_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_8_ce0 = grp_pgconv64s2_16u_s_fu_4389_top_8_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_8_ce0 = grp_pgconv64_64u_s_fu_4252_top_8_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_8_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_8_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_8_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_8_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_8_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_8_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_8_ce0 = grp_pgconv64s2_32u_s_fu_3755_top_8_V_ce0.read();
    } else {
        out_buf0_V_8_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_8_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_8_d0 = grp_pgconv64_32u_s_fu_4622_top_8_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_8_d0 = grp_pgconv64_16u_s_fu_4582_top_8_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_8_d0 = grp_pgconv64s2_16u_s_fu_4389_top_8_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_8_d0 = grp_pgconv64_64u_s_fu_4252_top_8_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_8_d0 = grp_pgconv64s2_32u_s_fu_3755_top_8_V_d0.read();
    } else {
        out_buf0_V_8_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_8_we0 = grp_pgconv64_32u_s_fu_4622_top_8_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_8_we0 = grp_pgconv64_16u_s_fu_4582_top_8_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_8_we0 = grp_pgconv64s2_16u_s_fu_4389_top_8_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_8_we0 = grp_pgconv64_64u_s_fu_4252_top_8_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_8_we0 = grp_pgconv64s2_32u_s_fu_3755_top_8_V_we0.read();
    } else {
        out_buf0_V_8_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_9_address0 = grp_pgconv64_32u_s_fu_4622_top_9_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_9_address0 = grp_pgconv64_16u_s_fu_4582_top_9_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_9_address0 = grp_pgconv64s2_16u_s_fu_4389_top_9_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_9_address0 = grp_pgconv64_64u_s_fu_4252_top_9_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_9_address0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_9_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_9_address0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_9_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_9_address0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_9_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_9_address0 = grp_pgconv64s2_32u_s_fu_3755_top_9_V_address0.read();
    } else {
        out_buf0_V_9_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_9_ce0 = grp_pgconv64_32u_s_fu_4622_top_9_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_9_ce0 = grp_pgconv64_16u_s_fu_4582_top_9_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_9_ce0 = grp_pgconv64s2_16u_s_fu_4389_top_9_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_9_ce0 = grp_pgconv64_64u_s_fu_4252_top_9_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        out_buf0_V_9_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4176_out_buf0_V_9_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        out_buf0_V_9_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4025_out_buf0_V_9_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        out_buf0_V_9_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3847_out_buf0_V_9_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_9_ce0 = grp_pgconv64s2_32u_s_fu_3755_top_9_V_ce0.read();
    } else {
        out_buf0_V_9_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_9_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_9_d0 = grp_pgconv64_32u_s_fu_4622_top_9_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_9_d0 = grp_pgconv64_16u_s_fu_4582_top_9_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_9_d0 = grp_pgconv64s2_16u_s_fu_4389_top_9_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_9_d0 = grp_pgconv64_64u_s_fu_4252_top_9_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_9_d0 = grp_pgconv64s2_32u_s_fu_3755_top_9_V_d0.read();
    } else {
        out_buf0_V_9_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        out_buf0_V_9_we0 = grp_pgconv64_32u_s_fu_4622_top_9_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_9_we0 = grp_pgconv64_16u_s_fu_4582_top_9_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        out_buf0_V_9_we0 = grp_pgconv64s2_16u_s_fu_4389_top_9_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        out_buf0_V_9_we0 = grp_pgconv64_64u_s_fu_4252_top_9_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        out_buf0_V_9_we0 = grp_pgconv64s2_32u_s_fu_3755_top_9_V_we0.read();
    } else {
        out_buf0_V_9_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_p_cast_fu_4682_p1() {
    p_cast_fu_4682_p1 = esl_zext<32,31>(tmp_744_fu_4672_p4.read());
}

void ResNet::thread_p_shl24_cast_fu_5784_p4() {
    p_shl24_cast_fu_5784_p4 = esl_concat<9,2>(esl_concat<7,2>(tmp_854_fu_5775_p4.read(), or_ln321_3_fu_5748_p2.read()), ap_const_lv2_0);
}

void ResNet::thread_p_shl28_cast_fu_5678_p4() {
    p_shl28_cast_fu_5678_p4 = esl_concat<9,2>(esl_concat<7,2>(tmp_851_fu_5669_p4.read(), or_ln321_2_fu_5642_p2.read()), ap_const_lv2_0);
}

void ResNet::thread_p_shl32_cast_fu_5572_p4() {
    p_shl32_cast_fu_5572_p4 = esl_concat<9,2>(esl_concat<7,2>(tmp_848_fu_5563_p4.read(), or_ln321_1_fu_5536_p2.read()), ap_const_lv2_0);
}

void ResNet::thread_p_shl36_cast_fu_5466_p4() {
    p_shl36_cast_fu_5466_p4 = esl_concat<9,2>(esl_concat<7,2>(tmp_845_fu_5457_p4.read(), or_ln321_fu_5430_p2.read()), ap_const_lv2_0);
}

void ResNet::thread_p_shl37_cast_fu_6681_p3() {
    p_shl37_cast_fu_6681_p3 = esl_concat<9,3>(trunc_ln203_fu_6677_p1.read(), ap_const_lv3_0);
}

void ResNet::thread_p_shl38_cast_fu_6693_p3() {
    p_shl38_cast_fu_6693_p3 = esl_concat<11,1>(trunc_ln203_1_fu_6689_p1.read(), ap_const_lv1_0);
}

void ResNet::thread_row_2_fu_5395_p2() {
    row_2_fu_5395_p2 = (!ap_const_lv2_1.is_01() || !ap_phi_mux_row21_0_phi_fu_2373_p4.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(ap_phi_mux_row21_0_phi_fu_2373_p4.read()));
}

void ResNet::thread_row_3_fu_11238_p2() {
    row_3_fu_11238_p2 = (!row24_0_reg_2468.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(row24_0_reg_2468.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_row_4_fu_11262_p2() {
    row_4_fu_11262_p2 = (!row26_0_reg_2492.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(row26_0_reg_2492.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_row_5_fu_11286_p2() {
    row_5_fu_11286_p2 = (!row28_0_reg_2516.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(row28_0_reg_2516.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_row_6_fu_11401_p2() {
    row_6_fu_11401_p2 = (!row33_0_reg_2599.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(row33_0_reg_2599.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_row_7_fu_11322_p2() {
    row_7_fu_11322_p2 = (!row30_0_reg_2551.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(row30_0_reg_2551.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_row_8_fu_11458_p2() {
    row_8_fu_11458_p2 = (!row35_0_reg_2646.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(row35_0_reg_2646.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_row_9_fu_11539_p2() {
    row_9_fu_11539_p2 = (!row41_0_reg_2716.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(row41_0_reg_2716.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_row_b_fu_6280_p2() {
    row_b_fu_6280_p2 = (!ap_const_lv3_1.is_01() || !ap_phi_mux_row_b_0_phi_fu_2406_p4.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_1) + sc_biguint<3>(ap_phi_mux_row_b_0_phi_fu_2406_p4.read()));
}

void ResNet::thread_row_fu_4698_p2() {
    row_fu_4698_p2 = (!ap_const_lv6_1.is_01() || !ap_phi_mux_row_0_phi_fu_2306_p4.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(ap_phi_mux_row_0_phi_fu_2306_p4.read()));
}

void ResNet::thread_select_ln111_1_fu_5415_p3() {
    select_ln111_1_fu_5415_p3 = (!icmp_ln107_fu_5401_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln107_fu_5401_p2.read()[0].to_bool())? row_2_fu_5395_p2.read(): ap_phi_mux_row21_0_phi_fu_2373_p4.read());
}

void ResNet::thread_select_ln111_fu_5407_p3() {
    select_ln111_fu_5407_p3 = (!icmp_ln107_fu_5401_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln107_fu_5401_p2.read()[0].to_bool())? ap_const_lv2_0: col22_0_reg_2380.read());
}

void ResNet::thread_select_ln1148_10_fu_18411_p3() {
    select_ln1148_10_fu_18411_p3 = (!tmp_865_fu_18359_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_865_fu_18359_p3.read()[0].to_bool())? sub_ln1148_21_fu_18387_p2.read(): zext_ln1148_10_fu_18407_p1.read());
}

void ResNet::thread_select_ln1148_11_fu_18476_p3() {
    select_ln1148_11_fu_18476_p3 = (!tmp_866_fu_18424_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_866_fu_18424_p3.read()[0].to_bool())? sub_ln1148_23_fu_18452_p2.read(): zext_ln1148_11_fu_18472_p1.read());
}

void ResNet::thread_select_ln1148_12_fu_18541_p3() {
    select_ln1148_12_fu_18541_p3 = (!tmp_867_fu_18489_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_867_fu_18489_p3.read()[0].to_bool())? sub_ln1148_25_fu_18517_p2.read(): zext_ln1148_12_fu_18537_p1.read());
}

void ResNet::thread_select_ln1148_13_fu_18606_p3() {
    select_ln1148_13_fu_18606_p3 = (!tmp_868_fu_18554_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_868_fu_18554_p3.read()[0].to_bool())? sub_ln1148_27_fu_18582_p2.read(): zext_ln1148_13_fu_18602_p1.read());
}

void ResNet::thread_select_ln1148_14_fu_18671_p3() {
    select_ln1148_14_fu_18671_p3 = (!tmp_869_fu_18619_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_869_fu_18619_p3.read()[0].to_bool())? sub_ln1148_29_fu_18647_p2.read(): zext_ln1148_14_fu_18667_p1.read());
}

void ResNet::thread_select_ln1148_15_fu_18736_p3() {
    select_ln1148_15_fu_18736_p3 = (!tmp_870_fu_18684_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_870_fu_18684_p3.read()[0].to_bool())? sub_ln1148_31_fu_18712_p2.read(): zext_ln1148_15_fu_18732_p1.read());
}

void ResNet::thread_select_ln1148_16_fu_18801_p3() {
    select_ln1148_16_fu_18801_p3 = (!tmp_871_fu_18749_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_871_fu_18749_p3.read()[0].to_bool())? sub_ln1148_33_fu_18777_p2.read(): zext_ln1148_16_fu_18797_p1.read());
}

void ResNet::thread_select_ln1148_17_fu_18866_p3() {
    select_ln1148_17_fu_18866_p3 = (!tmp_872_fu_18814_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_872_fu_18814_p3.read()[0].to_bool())? sub_ln1148_35_fu_18842_p2.read(): zext_ln1148_17_fu_18862_p1.read());
}

void ResNet::thread_select_ln1148_18_fu_18931_p3() {
    select_ln1148_18_fu_18931_p3 = (!tmp_873_fu_18879_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_873_fu_18879_p3.read()[0].to_bool())? sub_ln1148_37_fu_18907_p2.read(): zext_ln1148_18_fu_18927_p1.read());
}

void ResNet::thread_select_ln1148_19_fu_18996_p3() {
    select_ln1148_19_fu_18996_p3 = (!tmp_874_fu_18944_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_874_fu_18944_p3.read()[0].to_bool())? sub_ln1148_39_fu_18972_p2.read(): zext_ln1148_19_fu_18992_p1.read());
}

void ResNet::thread_select_ln1148_1_fu_17826_p3() {
    select_ln1148_1_fu_17826_p3 = (!tmp_856_fu_17774_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_856_fu_17774_p3.read()[0].to_bool())? sub_ln1148_3_fu_17802_p2.read(): zext_ln1148_1_fu_17822_p1.read());
}

void ResNet::thread_select_ln1148_20_fu_19061_p3() {
    select_ln1148_20_fu_19061_p3 = (!tmp_875_fu_19009_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_875_fu_19009_p3.read()[0].to_bool())? sub_ln1148_41_fu_19037_p2.read(): zext_ln1148_20_fu_19057_p1.read());
}

void ResNet::thread_select_ln1148_21_fu_19126_p3() {
    select_ln1148_21_fu_19126_p3 = (!tmp_876_fu_19074_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_876_fu_19074_p3.read()[0].to_bool())? sub_ln1148_43_fu_19102_p2.read(): zext_ln1148_21_fu_19122_p1.read());
}

void ResNet::thread_select_ln1148_22_fu_19191_p3() {
    select_ln1148_22_fu_19191_p3 = (!tmp_877_fu_19139_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_877_fu_19139_p3.read()[0].to_bool())? sub_ln1148_45_fu_19167_p2.read(): zext_ln1148_22_fu_19187_p1.read());
}

void ResNet::thread_select_ln1148_23_fu_19256_p3() {
    select_ln1148_23_fu_19256_p3 = (!tmp_878_fu_19204_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_878_fu_19204_p3.read()[0].to_bool())? sub_ln1148_47_fu_19232_p2.read(): zext_ln1148_23_fu_19252_p1.read());
}

void ResNet::thread_select_ln1148_24_fu_19321_p3() {
    select_ln1148_24_fu_19321_p3 = (!tmp_879_fu_19269_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_879_fu_19269_p3.read()[0].to_bool())? sub_ln1148_49_fu_19297_p2.read(): zext_ln1148_24_fu_19317_p1.read());
}

void ResNet::thread_select_ln1148_25_fu_19386_p3() {
    select_ln1148_25_fu_19386_p3 = (!tmp_880_fu_19334_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_880_fu_19334_p3.read()[0].to_bool())? sub_ln1148_51_fu_19362_p2.read(): zext_ln1148_25_fu_19382_p1.read());
}

void ResNet::thread_select_ln1148_26_fu_19451_p3() {
    select_ln1148_26_fu_19451_p3 = (!tmp_881_fu_19399_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_881_fu_19399_p3.read()[0].to_bool())? sub_ln1148_53_fu_19427_p2.read(): zext_ln1148_26_fu_19447_p1.read());
}

void ResNet::thread_select_ln1148_27_fu_19516_p3() {
    select_ln1148_27_fu_19516_p3 = (!tmp_882_fu_19464_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_882_fu_19464_p3.read()[0].to_bool())? sub_ln1148_55_fu_19492_p2.read(): zext_ln1148_27_fu_19512_p1.read());
}

void ResNet::thread_select_ln1148_28_fu_19581_p3() {
    select_ln1148_28_fu_19581_p3 = (!tmp_883_fu_19529_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_883_fu_19529_p3.read()[0].to_bool())? sub_ln1148_57_fu_19557_p2.read(): zext_ln1148_28_fu_19577_p1.read());
}

void ResNet::thread_select_ln1148_29_fu_19646_p3() {
    select_ln1148_29_fu_19646_p3 = (!tmp_884_fu_19594_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_884_fu_19594_p3.read()[0].to_bool())? sub_ln1148_59_fu_19622_p2.read(): zext_ln1148_29_fu_19642_p1.read());
}

void ResNet::thread_select_ln1148_2_fu_17891_p3() {
    select_ln1148_2_fu_17891_p3 = (!tmp_857_fu_17839_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_857_fu_17839_p3.read()[0].to_bool())? sub_ln1148_5_fu_17867_p2.read(): zext_ln1148_2_fu_17887_p1.read());
}

void ResNet::thread_select_ln1148_30_fu_19711_p3() {
    select_ln1148_30_fu_19711_p3 = (!tmp_885_fu_19659_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_885_fu_19659_p3.read()[0].to_bool())? sub_ln1148_61_fu_19687_p2.read(): zext_ln1148_30_fu_19707_p1.read());
}

void ResNet::thread_select_ln1148_31_fu_19776_p3() {
    select_ln1148_31_fu_19776_p3 = (!tmp_886_fu_19724_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_886_fu_19724_p3.read()[0].to_bool())? sub_ln1148_63_fu_19752_p2.read(): zext_ln1148_31_fu_19772_p1.read());
}

void ResNet::thread_select_ln1148_32_fu_19841_p3() {
    select_ln1148_32_fu_19841_p3 = (!tmp_887_fu_19789_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_887_fu_19789_p3.read()[0].to_bool())? sub_ln1148_65_fu_19817_p2.read(): zext_ln1148_32_fu_19837_p1.read());
}

void ResNet::thread_select_ln1148_33_fu_19906_p3() {
    select_ln1148_33_fu_19906_p3 = (!tmp_888_fu_19854_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_888_fu_19854_p3.read()[0].to_bool())? sub_ln1148_67_fu_19882_p2.read(): zext_ln1148_33_fu_19902_p1.read());
}

void ResNet::thread_select_ln1148_34_fu_19971_p3() {
    select_ln1148_34_fu_19971_p3 = (!tmp_889_fu_19919_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_889_fu_19919_p3.read()[0].to_bool())? sub_ln1148_69_fu_19947_p2.read(): zext_ln1148_34_fu_19967_p1.read());
}

void ResNet::thread_select_ln1148_35_fu_20036_p3() {
    select_ln1148_35_fu_20036_p3 = (!tmp_890_fu_19984_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_890_fu_19984_p3.read()[0].to_bool())? sub_ln1148_71_fu_20012_p2.read(): zext_ln1148_35_fu_20032_p1.read());
}

void ResNet::thread_select_ln1148_36_fu_20101_p3() {
    select_ln1148_36_fu_20101_p3 = (!tmp_891_fu_20049_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_891_fu_20049_p3.read()[0].to_bool())? sub_ln1148_73_fu_20077_p2.read(): zext_ln1148_36_fu_20097_p1.read());
}

void ResNet::thread_select_ln1148_37_fu_20166_p3() {
    select_ln1148_37_fu_20166_p3 = (!tmp_892_fu_20114_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_892_fu_20114_p3.read()[0].to_bool())? sub_ln1148_75_fu_20142_p2.read(): zext_ln1148_37_fu_20162_p1.read());
}

void ResNet::thread_select_ln1148_38_fu_20231_p3() {
    select_ln1148_38_fu_20231_p3 = (!tmp_893_fu_20179_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_893_fu_20179_p3.read()[0].to_bool())? sub_ln1148_77_fu_20207_p2.read(): zext_ln1148_38_fu_20227_p1.read());
}

void ResNet::thread_select_ln1148_39_fu_20296_p3() {
    select_ln1148_39_fu_20296_p3 = (!tmp_894_fu_20244_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_894_fu_20244_p3.read()[0].to_bool())? sub_ln1148_79_fu_20272_p2.read(): zext_ln1148_39_fu_20292_p1.read());
}

void ResNet::thread_select_ln1148_3_fu_17956_p3() {
    select_ln1148_3_fu_17956_p3 = (!tmp_858_fu_17904_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_858_fu_17904_p3.read()[0].to_bool())? sub_ln1148_7_fu_17932_p2.read(): zext_ln1148_3_fu_17952_p1.read());
}

void ResNet::thread_select_ln1148_40_fu_20361_p3() {
    select_ln1148_40_fu_20361_p3 = (!tmp_895_fu_20309_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_895_fu_20309_p3.read()[0].to_bool())? sub_ln1148_81_fu_20337_p2.read(): zext_ln1148_40_fu_20357_p1.read());
}

void ResNet::thread_select_ln1148_41_fu_20426_p3() {
    select_ln1148_41_fu_20426_p3 = (!tmp_896_fu_20374_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_896_fu_20374_p3.read()[0].to_bool())? sub_ln1148_83_fu_20402_p2.read(): zext_ln1148_41_fu_20422_p1.read());
}

void ResNet::thread_select_ln1148_42_fu_20491_p3() {
    select_ln1148_42_fu_20491_p3 = (!tmp_897_fu_20439_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_897_fu_20439_p3.read()[0].to_bool())? sub_ln1148_85_fu_20467_p2.read(): zext_ln1148_42_fu_20487_p1.read());
}

void ResNet::thread_select_ln1148_43_fu_20556_p3() {
    select_ln1148_43_fu_20556_p3 = (!tmp_898_fu_20504_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_898_fu_20504_p3.read()[0].to_bool())? sub_ln1148_87_fu_20532_p2.read(): zext_ln1148_43_fu_20552_p1.read());
}

void ResNet::thread_select_ln1148_44_fu_20621_p3() {
    select_ln1148_44_fu_20621_p3 = (!tmp_899_fu_20569_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_899_fu_20569_p3.read()[0].to_bool())? sub_ln1148_89_fu_20597_p2.read(): zext_ln1148_44_fu_20617_p1.read());
}

void ResNet::thread_select_ln1148_45_fu_20686_p3() {
    select_ln1148_45_fu_20686_p3 = (!tmp_900_fu_20634_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_900_fu_20634_p3.read()[0].to_bool())? sub_ln1148_91_fu_20662_p2.read(): zext_ln1148_45_fu_20682_p1.read());
}

void ResNet::thread_select_ln1148_46_fu_20751_p3() {
    select_ln1148_46_fu_20751_p3 = (!tmp_901_fu_20699_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_901_fu_20699_p3.read()[0].to_bool())? sub_ln1148_93_fu_20727_p2.read(): zext_ln1148_46_fu_20747_p1.read());
}

void ResNet::thread_select_ln1148_47_fu_20816_p3() {
    select_ln1148_47_fu_20816_p3 = (!tmp_902_fu_20764_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_902_fu_20764_p3.read()[0].to_bool())? sub_ln1148_95_fu_20792_p2.read(): zext_ln1148_47_fu_20812_p1.read());
}

void ResNet::thread_select_ln1148_48_fu_20881_p3() {
    select_ln1148_48_fu_20881_p3 = (!tmp_903_fu_20829_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_903_fu_20829_p3.read()[0].to_bool())? sub_ln1148_97_fu_20857_p2.read(): zext_ln1148_48_fu_20877_p1.read());
}

void ResNet::thread_select_ln1148_49_fu_20946_p3() {
    select_ln1148_49_fu_20946_p3 = (!tmp_904_fu_20894_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_904_fu_20894_p3.read()[0].to_bool())? sub_ln1148_99_fu_20922_p2.read(): zext_ln1148_49_fu_20942_p1.read());
}

void ResNet::thread_select_ln1148_4_fu_18021_p3() {
    select_ln1148_4_fu_18021_p3 = (!tmp_859_fu_17969_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_859_fu_17969_p3.read()[0].to_bool())? sub_ln1148_9_fu_17997_p2.read(): zext_ln1148_4_fu_18017_p1.read());
}

void ResNet::thread_select_ln1148_50_fu_21011_p3() {
    select_ln1148_50_fu_21011_p3 = (!tmp_905_fu_20959_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_905_fu_20959_p3.read()[0].to_bool())? sub_ln1148_101_fu_20987_p2.read(): zext_ln1148_50_fu_21007_p1.read());
}

void ResNet::thread_select_ln1148_51_fu_21076_p3() {
    select_ln1148_51_fu_21076_p3 = (!tmp_906_fu_21024_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_906_fu_21024_p3.read()[0].to_bool())? sub_ln1148_103_fu_21052_p2.read(): zext_ln1148_51_fu_21072_p1.read());
}

void ResNet::thread_select_ln1148_52_fu_21141_p3() {
    select_ln1148_52_fu_21141_p3 = (!tmp_907_fu_21089_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_907_fu_21089_p3.read()[0].to_bool())? sub_ln1148_105_fu_21117_p2.read(): zext_ln1148_52_fu_21137_p1.read());
}

void ResNet::thread_select_ln1148_53_fu_21206_p3() {
    select_ln1148_53_fu_21206_p3 = (!tmp_908_fu_21154_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_908_fu_21154_p3.read()[0].to_bool())? sub_ln1148_107_fu_21182_p2.read(): zext_ln1148_53_fu_21202_p1.read());
}

void ResNet::thread_select_ln1148_54_fu_21271_p3() {
    select_ln1148_54_fu_21271_p3 = (!tmp_909_fu_21219_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_909_fu_21219_p3.read()[0].to_bool())? sub_ln1148_109_fu_21247_p2.read(): zext_ln1148_54_fu_21267_p1.read());
}

void ResNet::thread_select_ln1148_55_fu_21336_p3() {
    select_ln1148_55_fu_21336_p3 = (!tmp_910_fu_21284_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_910_fu_21284_p3.read()[0].to_bool())? sub_ln1148_111_fu_21312_p2.read(): zext_ln1148_55_fu_21332_p1.read());
}

void ResNet::thread_select_ln1148_56_fu_21401_p3() {
    select_ln1148_56_fu_21401_p3 = (!tmp_911_fu_21349_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_911_fu_21349_p3.read()[0].to_bool())? sub_ln1148_113_fu_21377_p2.read(): zext_ln1148_56_fu_21397_p1.read());
}

void ResNet::thread_select_ln1148_57_fu_21466_p3() {
    select_ln1148_57_fu_21466_p3 = (!tmp_912_fu_21414_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_912_fu_21414_p3.read()[0].to_bool())? sub_ln1148_115_fu_21442_p2.read(): zext_ln1148_57_fu_21462_p1.read());
}

void ResNet::thread_select_ln1148_58_fu_21531_p3() {
    select_ln1148_58_fu_21531_p3 = (!tmp_913_fu_21479_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_913_fu_21479_p3.read()[0].to_bool())? sub_ln1148_117_fu_21507_p2.read(): zext_ln1148_58_fu_21527_p1.read());
}

void ResNet::thread_select_ln1148_59_fu_21596_p3() {
    select_ln1148_59_fu_21596_p3 = (!tmp_914_fu_21544_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_914_fu_21544_p3.read()[0].to_bool())? sub_ln1148_119_fu_21572_p2.read(): zext_ln1148_59_fu_21592_p1.read());
}

void ResNet::thread_select_ln1148_5_fu_18086_p3() {
    select_ln1148_5_fu_18086_p3 = (!tmp_860_fu_18034_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_860_fu_18034_p3.read()[0].to_bool())? sub_ln1148_11_fu_18062_p2.read(): zext_ln1148_5_fu_18082_p1.read());
}

void ResNet::thread_select_ln1148_60_fu_21661_p3() {
    select_ln1148_60_fu_21661_p3 = (!tmp_915_fu_21609_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_915_fu_21609_p3.read()[0].to_bool())? sub_ln1148_121_fu_21637_p2.read(): zext_ln1148_60_fu_21657_p1.read());
}

void ResNet::thread_select_ln1148_61_fu_21726_p3() {
    select_ln1148_61_fu_21726_p3 = (!tmp_916_fu_21674_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_916_fu_21674_p3.read()[0].to_bool())? sub_ln1148_123_fu_21702_p2.read(): zext_ln1148_61_fu_21722_p1.read());
}

void ResNet::thread_select_ln1148_62_fu_21791_p3() {
    select_ln1148_62_fu_21791_p3 = (!tmp_917_fu_21739_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_917_fu_21739_p3.read()[0].to_bool())? sub_ln1148_125_fu_21767_p2.read(): zext_ln1148_62_fu_21787_p1.read());
}

void ResNet::thread_select_ln1148_63_fu_21856_p3() {
    select_ln1148_63_fu_21856_p3 = (!tmp_918_fu_21804_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_918_fu_21804_p3.read()[0].to_bool())? sub_ln1148_127_fu_21832_p2.read(): zext_ln1148_63_fu_21852_p1.read());
}

void ResNet::thread_select_ln1148_6_fu_18151_p3() {
    select_ln1148_6_fu_18151_p3 = (!tmp_861_fu_18099_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_861_fu_18099_p3.read()[0].to_bool())? sub_ln1148_13_fu_18127_p2.read(): zext_ln1148_6_fu_18147_p1.read());
}

void ResNet::thread_select_ln1148_7_fu_18216_p3() {
    select_ln1148_7_fu_18216_p3 = (!tmp_862_fu_18164_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_862_fu_18164_p3.read()[0].to_bool())? sub_ln1148_15_fu_18192_p2.read(): zext_ln1148_7_fu_18212_p1.read());
}

void ResNet::thread_select_ln1148_8_fu_18281_p3() {
    select_ln1148_8_fu_18281_p3 = (!tmp_863_fu_18229_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_863_fu_18229_p3.read()[0].to_bool())? sub_ln1148_17_fu_18257_p2.read(): zext_ln1148_8_fu_18277_p1.read());
}

void ResNet::thread_select_ln1148_9_fu_18346_p3() {
    select_ln1148_9_fu_18346_p3 = (!tmp_864_fu_18294_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_864_fu_18294_p3.read()[0].to_bool())? sub_ln1148_19_fu_18322_p2.read(): zext_ln1148_9_fu_18342_p1.read());
}

void ResNet::thread_select_ln1148_fu_17761_p3() {
    select_ln1148_fu_17761_p3 = (!tmp_855_fu_17709_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_855_fu_17709_p3.read()[0].to_bool())? sub_ln1148_1_fu_17737_p2.read(): zext_ln1148_fu_17757_p1.read());
}

void ResNet::thread_select_ln119_1_fu_6300_p3() {
    select_ln119_1_fu_6300_p3 = (!icmp_ln120_fu_6286_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln120_fu_6286_p2.read()[0].to_bool())? row_b_fu_6280_p2.read(): ap_phi_mux_row_b_0_phi_fu_2406_p4.read());
}

void ResNet::thread_select_ln119_2_fu_6320_p3() {
    select_ln119_2_fu_6320_p3 = (!icmp_ln120_fu_6286_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln120_fu_6286_p2.read()[0].to_bool())? shl_ln126_mid1_fu_6312_p3.read(): shl_ln2_fu_6234_p3.read());
}

void ResNet::thread_select_ln119_3_fu_6332_p3() {
    select_ln119_3_fu_6332_p3 = (!icmp_ln120_fu_6286_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln120_fu_6286_p2.read()[0].to_bool())? ap_const_lv5_0: shl_ln126_1_fu_6250_p3.read());
}

void ResNet::thread_select_ln119_4_fu_6508_p3() {
    select_ln119_4_fu_6508_p3 = (!icmp_ln120_fu_6286_p2.read()[0].is_01())? sc_lv<6>(): ((icmp_ln120_fu_6286_p2.read()[0].to_bool())? add_ln126_mid_fu_6346_p3.read(): add_ln126_fu_6262_p2.read());
}

void ResNet::thread_select_ln119_fu_6292_p3() {
    select_ln119_fu_6292_p3 = (!icmp_ln120_fu_6286_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln120_fu_6286_p2.read()[0].to_bool())? ap_const_lv3_0: ap_phi_mux_col_b_0_phi_fu_2428_p4.read());
}

void ResNet::thread_select_ln120_1_fu_6404_p3() {
    select_ln120_1_fu_6404_p3 = (!and_ln119_1_fu_6378_p2.read()[0].is_01())? sc_lv<3>(): ((and_ln119_1_fu_6378_p2.read()[0].to_bool())? col_b_fu_6384_p2.read(): select_ln119_fu_6292_p3.read());
}

void ResNet::thread_select_ln120_2_fu_6424_p3() {
    select_ln120_2_fu_6424_p3 = (!and_ln119_1_fu_6378_p2.read()[0].is_01())? sc_lv<5>(): ((and_ln119_1_fu_6378_p2.read()[0].to_bool())? shl_ln126_1_mid1_fu_6416_p3.read(): select_ln119_3_fu_6332_p3.read());
}

void ResNet::thread_select_ln120_3_fu_6516_p3() {
    select_ln120_3_fu_6516_p3 = (!and_ln119_1_fu_6378_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln119_1_fu_6378_p2.read()[0].to_bool())? zext_ln126_2_fu_6442_p1.read(): select_ln119_4_fu_6508_p3.read());
}

void ResNet::thread_select_ln120_4_fu_6610_p3() {
    select_ln120_4_fu_6610_p3 = (!icmp_ln120_fu_6286_p2.read()[0].is_01())? sc_lv<10>(): ((icmp_ln120_fu_6286_p2.read()[0].to_bool())? ap_const_lv10_1: add_ln120_1_fu_6604_p2.read());
}

void ResNet::thread_select_ln120_fu_6396_p3() {
    select_ln120_fu_6396_p3 = (!or_ln120_fu_6390_p2.read()[0].is_01())? sc_lv<4>(): ((or_ln120_fu_6390_p2.read()[0].to_bool())? ap_const_lv4_1: ap_phi_mux_brow_0_phi_fu_2450_p4.read());
}

void ResNet::thread_select_ln121_1_fu_6494_p3() {
    select_ln121_1_fu_6494_p3 = (!and_ln120_fu_6458_p2.read()[0].is_01())? sc_lv<4>(): ((and_ln120_fu_6458_p2.read()[0].to_bool())? brow_fu_6464_p2.read(): select_ln120_fu_6396_p3.read());
}

void ResNet::thread_select_ln121_2_fu_6524_p3() {
    select_ln121_2_fu_6524_p3 = (!and_ln120_fu_6458_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln120_fu_6458_p2.read()[0].to_bool())? add_ln126_2_fu_6502_p2.read(): select_ln120_3_fu_6516_p3.read());
}

void ResNet::thread_select_ln121_3_fu_6596_p3() {
    select_ln121_3_fu_6596_p3 = (!or_ln120_fu_6390_p2.read()[0].is_01())? sc_lv<8>(): ((or_ln120_fu_6390_p2.read()[0].to_bool())? ap_const_lv8_1: add_ln121_1_fu_6590_p2.read());
}

void ResNet::thread_select_ln121_fu_6482_p3() {
    select_ln121_fu_6482_p3 = (!or_ln121_1_fu_6476_p2.read()[0].is_01())? sc_lv<4>(): ((or_ln121_1_fu_6476_p2.read()[0].to_bool())? ap_const_lv4_1: bcol_0_reg_2457.read());
}

void ResNet::thread_select_ln340_100_fu_13451_p3() {
    select_ln340_100_fu_13451_p3 = (!xor_ln340_128_fu_13433_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_128_fu_13433_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_106_fu_13407_p2.read());
}

void ResNet::thread_select_ln340_102_fu_13541_p3() {
    select_ln340_102_fu_13541_p3 = (!xor_ln340_130_fu_13523_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_130_fu_13523_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_107_fu_13497_p2.read());
}

void ResNet::thread_select_ln340_104_fu_13631_p3() {
    select_ln340_104_fu_13631_p3 = (!xor_ln340_132_fu_13613_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_132_fu_13613_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_108_fu_13587_p2.read());
}

void ResNet::thread_select_ln340_106_fu_13721_p3() {
    select_ln340_106_fu_13721_p3 = (!xor_ln340_134_fu_13703_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_134_fu_13703_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_109_fu_13677_p2.read());
}

void ResNet::thread_select_ln340_108_fu_13811_p3() {
    select_ln340_108_fu_13811_p3 = (!xor_ln340_136_fu_13793_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_136_fu_13793_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_110_fu_13767_p2.read());
}

void ResNet::thread_select_ln340_10_fu_9802_p3() {
    select_ln340_10_fu_9802_p3 = (!or_ln340_10_fu_9784_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_10_fu_9784_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_64_fu_9622_p2.read());
}

void ResNet::thread_select_ln340_110_fu_13901_p3() {
    select_ln340_110_fu_13901_p3 = (!xor_ln340_138_fu_13883_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_138_fu_13883_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_111_fu_13857_p2.read());
}

void ResNet::thread_select_ln340_112_fu_13991_p3() {
    select_ln340_112_fu_13991_p3 = (!xor_ln340_140_fu_13973_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_140_fu_13973_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_112_fu_13947_p2.read());
}

void ResNet::thread_select_ln340_114_fu_14081_p3() {
    select_ln340_114_fu_14081_p3 = (!xor_ln340_142_fu_14063_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_142_fu_14063_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_113_fu_14037_p2.read());
}

void ResNet::thread_select_ln340_116_fu_14171_p3() {
    select_ln340_116_fu_14171_p3 = (!xor_ln340_144_fu_14153_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_144_fu_14153_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_114_fu_14127_p2.read());
}

void ResNet::thread_select_ln340_118_fu_14261_p3() {
    select_ln340_118_fu_14261_p3 = (!xor_ln340_146_fu_14243_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_146_fu_14243_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_115_fu_14217_p2.read());
}

void ResNet::thread_select_ln340_11_fu_10083_p3() {
    select_ln340_11_fu_10083_p3 = (!or_ln340_11_fu_10065_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_11_fu_10065_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_65_fu_9903_p2.read());
}

void ResNet::thread_select_ln340_120_fu_14351_p3() {
    select_ln340_120_fu_14351_p3 = (!xor_ln340_148_fu_14333_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_148_fu_14333_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_116_fu_14307_p2.read());
}

void ResNet::thread_select_ln340_122_fu_14441_p3() {
    select_ln340_122_fu_14441_p3 = (!xor_ln340_150_fu_14423_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_150_fu_14423_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_117_fu_14397_p2.read());
}

void ResNet::thread_select_ln340_124_fu_14531_p3() {
    select_ln340_124_fu_14531_p3 = (!xor_ln340_152_fu_14513_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_152_fu_14513_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_118_fu_14487_p2.read());
}

void ResNet::thread_select_ln340_126_fu_14621_p3() {
    select_ln340_126_fu_14621_p3 = (!xor_ln340_154_fu_14603_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_154_fu_14603_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_119_fu_14577_p2.read());
}

void ResNet::thread_select_ln340_128_fu_14711_p3() {
    select_ln340_128_fu_14711_p3 = (!xor_ln340_156_fu_14693_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_156_fu_14693_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_120_fu_14667_p2.read());
}

void ResNet::thread_select_ln340_12_fu_10364_p3() {
    select_ln340_12_fu_10364_p3 = (!or_ln340_12_fu_10346_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_12_fu_10346_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_66_fu_10184_p2.read());
}

void ResNet::thread_select_ln340_130_fu_14801_p3() {
    select_ln340_130_fu_14801_p3 = (!xor_ln340_158_fu_14783_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_158_fu_14783_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_121_fu_14757_p2.read());
}

void ResNet::thread_select_ln340_132_fu_14891_p3() {
    select_ln340_132_fu_14891_p3 = (!xor_ln340_160_fu_14873_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_160_fu_14873_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_122_fu_14847_p2.read());
}

void ResNet::thread_select_ln340_134_fu_14981_p3() {
    select_ln340_134_fu_14981_p3 = (!xor_ln340_162_fu_14963_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_162_fu_14963_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_123_fu_14937_p2.read());
}

void ResNet::thread_select_ln340_136_fu_15071_p3() {
    select_ln340_136_fu_15071_p3 = (!xor_ln340_164_fu_15053_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_164_fu_15053_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_124_fu_15027_p2.read());
}

void ResNet::thread_select_ln340_138_fu_15161_p3() {
    select_ln340_138_fu_15161_p3 = (!xor_ln340_166_fu_15143_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_166_fu_15143_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_125_fu_15117_p2.read());
}

void ResNet::thread_select_ln340_13_fu_10645_p3() {
    select_ln340_13_fu_10645_p3 = (!or_ln340_13_fu_10627_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_13_fu_10627_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_67_fu_10465_p2.read());
}

void ResNet::thread_select_ln340_140_fu_15251_p3() {
    select_ln340_140_fu_15251_p3 = (!xor_ln340_168_fu_15233_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_168_fu_15233_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_126_fu_15207_p2.read());
}

void ResNet::thread_select_ln340_142_fu_15341_p3() {
    select_ln340_142_fu_15341_p3 = (!xor_ln340_170_fu_15323_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_170_fu_15323_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_127_fu_15297_p2.read());
}

void ResNet::thread_select_ln340_144_fu_15431_p3() {
    select_ln340_144_fu_15431_p3 = (!xor_ln340_172_fu_15413_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_172_fu_15413_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_128_fu_15387_p2.read());
}

void ResNet::thread_select_ln340_146_fu_15521_p3() {
    select_ln340_146_fu_15521_p3 = (!xor_ln340_174_fu_15503_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_174_fu_15503_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_129_fu_15477_p2.read());
}

void ResNet::thread_select_ln340_148_fu_15611_p3() {
    select_ln340_148_fu_15611_p3 = (!xor_ln340_176_fu_15593_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_176_fu_15593_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_130_fu_15567_p2.read());
}

void ResNet::thread_select_ln340_14_fu_10926_p3() {
    select_ln340_14_fu_10926_p3 = (!or_ln340_14_fu_10908_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_14_fu_10908_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_68_fu_10746_p2.read());
}

void ResNet::thread_select_ln340_150_fu_15701_p3() {
    select_ln340_150_fu_15701_p3 = (!xor_ln340_178_fu_15683_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_178_fu_15683_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_131_fu_15657_p2.read());
}

void ResNet::thread_select_ln340_152_fu_15791_p3() {
    select_ln340_152_fu_15791_p3 = (!xor_ln340_180_fu_15773_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_180_fu_15773_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_132_fu_15747_p2.read());
}

void ResNet::thread_select_ln340_154_fu_15881_p3() {
    select_ln340_154_fu_15881_p3 = (!xor_ln340_182_fu_15863_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_182_fu_15863_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_133_fu_15837_p2.read());
}

void ResNet::thread_select_ln340_156_fu_15971_p3() {
    select_ln340_156_fu_15971_p3 = (!xor_ln340_184_fu_15953_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_184_fu_15953_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_134_fu_15927_p2.read());
}

void ResNet::thread_select_ln340_158_fu_16061_p3() {
    select_ln340_158_fu_16061_p3 = (!xor_ln340_186_fu_16043_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_186_fu_16043_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_135_fu_16017_p2.read());
}

void ResNet::thread_select_ln340_15_fu_11207_p3() {
    select_ln340_15_fu_11207_p3 = (!or_ln340_15_fu_11189_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_15_fu_11189_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_69_fu_11027_p2.read());
}

void ResNet::thread_select_ln340_160_fu_16151_p3() {
    select_ln340_160_fu_16151_p3 = (!xor_ln340_188_fu_16133_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_188_fu_16133_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_136_fu_16107_p2.read());
}

void ResNet::thread_select_ln340_162_fu_16241_p3() {
    select_ln340_162_fu_16241_p3 = (!xor_ln340_190_fu_16223_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_190_fu_16223_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_137_fu_16197_p2.read());
}

void ResNet::thread_select_ln340_164_fu_16331_p3() {
    select_ln340_164_fu_16331_p3 = (!xor_ln340_192_fu_16313_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_192_fu_16313_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_138_fu_16287_p2.read());
}

void ResNet::thread_select_ln340_166_fu_16421_p3() {
    select_ln340_166_fu_16421_p3 = (!xor_ln340_194_fu_16403_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_194_fu_16403_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_139_fu_16377_p2.read());
}

void ResNet::thread_select_ln340_168_fu_16511_p3() {
    select_ln340_168_fu_16511_p3 = (!xor_ln340_195_fu_16493_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_195_fu_16493_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_140_fu_16467_p2.read());
}

void ResNet::thread_select_ln340_170_fu_16601_p3() {
    select_ln340_170_fu_16601_p3 = (!xor_ln340_196_fu_16583_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_196_fu_16583_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_141_fu_16557_p2.read());
}

void ResNet::thread_select_ln340_172_fu_16691_p3() {
    select_ln340_172_fu_16691_p3 = (!xor_ln340_197_fu_16673_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_197_fu_16673_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_142_fu_16647_p2.read());
}

void ResNet::thread_select_ln340_174_fu_16781_p3() {
    select_ln340_174_fu_16781_p3 = (!xor_ln340_198_fu_16763_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_198_fu_16763_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_143_fu_16737_p2.read());
}

void ResNet::thread_select_ln340_176_fu_16871_p3() {
    select_ln340_176_fu_16871_p3 = (!xor_ln340_199_fu_16853_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_199_fu_16853_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_144_fu_16827_p2.read());
}

void ResNet::thread_select_ln340_178_fu_16961_p3() {
    select_ln340_178_fu_16961_p3 = (!xor_ln340_200_fu_16943_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_200_fu_16943_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_145_fu_16917_p2.read());
}

void ResNet::thread_select_ln340_180_fu_17051_p3() {
    select_ln340_180_fu_17051_p3 = (!xor_ln340_201_fu_17033_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_201_fu_17033_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_146_fu_17007_p2.read());
}

void ResNet::thread_select_ln340_182_fu_17141_p3() {
    select_ln340_182_fu_17141_p3 = (!xor_ln340_202_fu_17123_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_202_fu_17123_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_147_fu_17097_p2.read());
}

void ResNet::thread_select_ln340_184_fu_17231_p3() {
    select_ln340_184_fu_17231_p3 = (!xor_ln340_203_fu_17213_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_203_fu_17213_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_148_fu_17187_p2.read());
}

void ResNet::thread_select_ln340_186_fu_17321_p3() {
    select_ln340_186_fu_17321_p3 = (!xor_ln340_204_fu_17303_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_204_fu_17303_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_149_fu_17277_p2.read());
}

void ResNet::thread_select_ln340_188_fu_17411_p3() {
    select_ln340_188_fu_17411_p3 = (!xor_ln340_205_fu_17393_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_205_fu_17393_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_150_fu_17367_p2.read());
}

void ResNet::thread_select_ln340_190_fu_17501_p3() {
    select_ln340_190_fu_17501_p3 = (!xor_ln340_206_fu_17483_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_206_fu_17483_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_151_fu_17457_p2.read());
}

void ResNet::thread_select_ln340_192_fu_17591_p3() {
    select_ln340_192_fu_17591_p3 = (!xor_ln340_207_fu_17573_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_207_fu_17573_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_152_fu_17547_p2.read());
}

void ResNet::thread_select_ln340_194_fu_17681_p3() {
    select_ln340_194_fu_17681_p3 = (!xor_ln340_208_fu_17663_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_208_fu_17663_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_153_fu_17637_p2.read());
}

void ResNet::thread_select_ln340_1_fu_7273_p3() {
    select_ln340_1_fu_7273_p3 = (!or_ln340_1_fu_7255_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_1_fu_7255_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_55_fu_7093_p2.read());
}

void ResNet::thread_select_ln340_2_fu_7554_p3() {
    select_ln340_2_fu_7554_p3 = (!or_ln340_2_fu_7536_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_2_fu_7536_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_56_fu_7374_p2.read());
}

void ResNet::thread_select_ln340_3_fu_7835_p3() {
    select_ln340_3_fu_7835_p3 = (!or_ln340_3_fu_7817_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_3_fu_7817_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_57_fu_7655_p2.read());
}

void ResNet::thread_select_ln340_66_fu_12011_p3() {
    select_ln340_66_fu_12011_p3 = (!xor_ln340_fu_11993_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_fu_11993_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_fu_11967_p2.read());
}

void ResNet::thread_select_ln340_68_fu_8116_p3() {
    select_ln340_68_fu_8116_p3 = (!or_ln340_4_fu_8098_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_4_fu_8098_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_58_fu_7936_p2.read());
}

void ResNet::thread_select_ln340_69_fu_12101_p3() {
    select_ln340_69_fu_12101_p3 = (!xor_ln340_98_fu_12083_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_98_fu_12083_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_91_fu_12057_p2.read());
}

void ResNet::thread_select_ln340_6_fu_8678_p3() {
    select_ln340_6_fu_8678_p3 = (!or_ln340_6_fu_8660_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_6_fu_8660_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_60_fu_8498_p2.read());
}

void ResNet::thread_select_ln340_71_fu_12191_p3() {
    select_ln340_71_fu_12191_p3 = (!xor_ln340_100_fu_12173_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_100_fu_12173_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_92_fu_12147_p2.read());
}

void ResNet::thread_select_ln340_72_fu_8397_p3() {
    select_ln340_72_fu_8397_p3 = (!or_ln340_5_fu_8379_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_5_fu_8379_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_59_fu_8217_p2.read());
}

void ResNet::thread_select_ln340_74_fu_12281_p3() {
    select_ln340_74_fu_12281_p3 = (!xor_ln340_102_fu_12263_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_102_fu_12263_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_93_fu_12237_p2.read());
}

void ResNet::thread_select_ln340_76_fu_12371_p3() {
    select_ln340_76_fu_12371_p3 = (!xor_ln340_104_fu_12353_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_104_fu_12353_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_94_fu_12327_p2.read());
}

void ResNet::thread_select_ln340_78_fu_12461_p3() {
    select_ln340_78_fu_12461_p3 = (!xor_ln340_106_fu_12443_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_106_fu_12443_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_95_fu_12417_p2.read());
}

void ResNet::thread_select_ln340_7_fu_8959_p3() {
    select_ln340_7_fu_8959_p3 = (!or_ln340_7_fu_8941_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_7_fu_8941_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_61_fu_8779_p2.read());
}

void ResNet::thread_select_ln340_80_fu_12551_p3() {
    select_ln340_80_fu_12551_p3 = (!xor_ln340_108_fu_12533_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_108_fu_12533_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_96_fu_12507_p2.read());
}

void ResNet::thread_select_ln340_82_fu_12641_p3() {
    select_ln340_82_fu_12641_p3 = (!xor_ln340_110_fu_12623_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_110_fu_12623_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_97_fu_12597_p2.read());
}

void ResNet::thread_select_ln340_84_fu_12731_p3() {
    select_ln340_84_fu_12731_p3 = (!xor_ln340_112_fu_12713_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_112_fu_12713_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_98_fu_12687_p2.read());
}

void ResNet::thread_select_ln340_86_fu_12821_p3() {
    select_ln340_86_fu_12821_p3 = (!xor_ln340_114_fu_12803_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_114_fu_12803_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_99_fu_12777_p2.read());
}

void ResNet::thread_select_ln340_88_fu_12911_p3() {
    select_ln340_88_fu_12911_p3 = (!xor_ln340_116_fu_12893_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_116_fu_12893_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_100_fu_12867_p2.read());
}

void ResNet::thread_select_ln340_8_fu_9240_p3() {
    select_ln340_8_fu_9240_p3 = (!or_ln340_8_fu_9222_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_8_fu_9222_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_62_fu_9060_p2.read());
}

void ResNet::thread_select_ln340_90_fu_13001_p3() {
    select_ln340_90_fu_13001_p3 = (!xor_ln340_118_fu_12983_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_118_fu_12983_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_101_fu_12957_p2.read());
}

void ResNet::thread_select_ln340_92_fu_13091_p3() {
    select_ln340_92_fu_13091_p3 = (!xor_ln340_120_fu_13073_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_120_fu_13073_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_102_fu_13047_p2.read());
}

void ResNet::thread_select_ln340_94_fu_13181_p3() {
    select_ln340_94_fu_13181_p3 = (!xor_ln340_122_fu_13163_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_122_fu_13163_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_103_fu_13137_p2.read());
}

void ResNet::thread_select_ln340_96_fu_13271_p3() {
    select_ln340_96_fu_13271_p3 = (!xor_ln340_124_fu_13253_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_124_fu_13253_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_104_fu_13227_p2.read());
}

void ResNet::thread_select_ln340_98_fu_13361_p3() {
    select_ln340_98_fu_13361_p3 = (!xor_ln340_126_fu_13343_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_126_fu_13343_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_105_fu_13317_p2.read());
}

void ResNet::thread_select_ln340_9_fu_9521_p3() {
    select_ln340_9_fu_9521_p3 = (!or_ln340_9_fu_9503_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_9_fu_9503_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_63_fu_9341_p2.read());
}

void ResNet::thread_select_ln340_fu_6992_p3() {
    select_ln340_fu_6992_p3 = (!or_ln340_fu_6974_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_fu_6974_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_fu_6812_p2.read());
}

void ResNet::thread_select_ln388_100_fu_14809_p3() {
    select_ln388_100_fu_14809_p3 = (!and_ln786_202_fu_14777_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_202_fu_14777_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_121_fu_14757_p2.read());
}

void ResNet::thread_select_ln388_101_fu_14899_p3() {
    select_ln388_101_fu_14899_p3 = (!and_ln786_203_fu_14867_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_203_fu_14867_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_122_fu_14847_p2.read());
}

void ResNet::thread_select_ln388_102_fu_14989_p3() {
    select_ln388_102_fu_14989_p3 = (!and_ln786_204_fu_14957_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_204_fu_14957_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_123_fu_14937_p2.read());
}

void ResNet::thread_select_ln388_103_fu_15079_p3() {
    select_ln388_103_fu_15079_p3 = (!and_ln786_205_fu_15047_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_205_fu_15047_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_124_fu_15027_p2.read());
}

void ResNet::thread_select_ln388_104_fu_15169_p3() {
    select_ln388_104_fu_15169_p3 = (!and_ln786_206_fu_15137_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_206_fu_15137_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_125_fu_15117_p2.read());
}

void ResNet::thread_select_ln388_105_fu_15259_p3() {
    select_ln388_105_fu_15259_p3 = (!and_ln786_207_fu_15227_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_207_fu_15227_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_126_fu_15207_p2.read());
}

void ResNet::thread_select_ln388_106_fu_15349_p3() {
    select_ln388_106_fu_15349_p3 = (!and_ln786_208_fu_15317_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_208_fu_15317_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_127_fu_15297_p2.read());
}

void ResNet::thread_select_ln388_107_fu_15439_p3() {
    select_ln388_107_fu_15439_p3 = (!and_ln786_209_fu_15407_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_209_fu_15407_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_128_fu_15387_p2.read());
}

void ResNet::thread_select_ln388_108_fu_15529_p3() {
    select_ln388_108_fu_15529_p3 = (!and_ln786_210_fu_15497_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_210_fu_15497_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_129_fu_15477_p2.read());
}

void ResNet::thread_select_ln388_109_fu_15619_p3() {
    select_ln388_109_fu_15619_p3 = (!and_ln786_211_fu_15587_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_211_fu_15587_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_130_fu_15567_p2.read());
}

void ResNet::thread_select_ln388_10_fu_9810_p3() {
    select_ln388_10_fu_9810_p3 = (!and_ln786_169_fu_9778_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_169_fu_9778_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_64_fu_9622_p2.read());
}

void ResNet::thread_select_ln388_110_fu_15709_p3() {
    select_ln388_110_fu_15709_p3 = (!and_ln786_212_fu_15677_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_212_fu_15677_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_131_fu_15657_p2.read());
}

void ResNet::thread_select_ln388_111_fu_15799_p3() {
    select_ln388_111_fu_15799_p3 = (!and_ln786_213_fu_15767_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_213_fu_15767_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_132_fu_15747_p2.read());
}

void ResNet::thread_select_ln388_112_fu_15889_p3() {
    select_ln388_112_fu_15889_p3 = (!and_ln786_214_fu_15857_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_214_fu_15857_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_133_fu_15837_p2.read());
}

void ResNet::thread_select_ln388_113_fu_15979_p3() {
    select_ln388_113_fu_15979_p3 = (!and_ln786_215_fu_15947_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_215_fu_15947_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_134_fu_15927_p2.read());
}

void ResNet::thread_select_ln388_114_fu_16069_p3() {
    select_ln388_114_fu_16069_p3 = (!and_ln786_216_fu_16037_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_216_fu_16037_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_135_fu_16017_p2.read());
}

void ResNet::thread_select_ln388_115_fu_16159_p3() {
    select_ln388_115_fu_16159_p3 = (!and_ln786_217_fu_16127_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_217_fu_16127_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_136_fu_16107_p2.read());
}

void ResNet::thread_select_ln388_116_fu_16249_p3() {
    select_ln388_116_fu_16249_p3 = (!and_ln786_218_fu_16217_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_218_fu_16217_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_137_fu_16197_p2.read());
}

void ResNet::thread_select_ln388_117_fu_16339_p3() {
    select_ln388_117_fu_16339_p3 = (!and_ln786_219_fu_16307_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_219_fu_16307_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_138_fu_16287_p2.read());
}

void ResNet::thread_select_ln388_118_fu_16429_p3() {
    select_ln388_118_fu_16429_p3 = (!and_ln786_220_fu_16397_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_220_fu_16397_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_139_fu_16377_p2.read());
}

void ResNet::thread_select_ln388_119_fu_16519_p3() {
    select_ln388_119_fu_16519_p3 = (!and_ln786_221_fu_16487_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_221_fu_16487_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_140_fu_16467_p2.read());
}

void ResNet::thread_select_ln388_11_fu_10091_p3() {
    select_ln388_11_fu_10091_p3 = (!and_ln786_170_fu_10059_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_170_fu_10059_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_65_fu_9903_p2.read());
}

void ResNet::thread_select_ln388_120_fu_16609_p3() {
    select_ln388_120_fu_16609_p3 = (!and_ln786_222_fu_16577_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_222_fu_16577_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_141_fu_16557_p2.read());
}

void ResNet::thread_select_ln388_121_fu_16699_p3() {
    select_ln388_121_fu_16699_p3 = (!and_ln786_223_fu_16667_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_223_fu_16667_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_142_fu_16647_p2.read());
}

void ResNet::thread_select_ln388_122_fu_16789_p3() {
    select_ln388_122_fu_16789_p3 = (!and_ln786_224_fu_16757_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_224_fu_16757_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_143_fu_16737_p2.read());
}

void ResNet::thread_select_ln388_123_fu_16879_p3() {
    select_ln388_123_fu_16879_p3 = (!and_ln786_225_fu_16847_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_225_fu_16847_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_144_fu_16827_p2.read());
}

void ResNet::thread_select_ln388_124_fu_16969_p3() {
    select_ln388_124_fu_16969_p3 = (!and_ln786_226_fu_16937_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_226_fu_16937_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_145_fu_16917_p2.read());
}

void ResNet::thread_select_ln388_125_fu_17059_p3() {
    select_ln388_125_fu_17059_p3 = (!and_ln786_227_fu_17027_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_227_fu_17027_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_146_fu_17007_p2.read());
}

void ResNet::thread_select_ln388_126_fu_17149_p3() {
    select_ln388_126_fu_17149_p3 = (!and_ln786_228_fu_17117_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_228_fu_17117_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_147_fu_17097_p2.read());
}

void ResNet::thread_select_ln388_127_fu_17239_p3() {
    select_ln388_127_fu_17239_p3 = (!and_ln786_229_fu_17207_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_229_fu_17207_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_148_fu_17187_p2.read());
}

void ResNet::thread_select_ln388_128_fu_17329_p3() {
    select_ln388_128_fu_17329_p3 = (!and_ln786_230_fu_17297_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_230_fu_17297_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_149_fu_17277_p2.read());
}

void ResNet::thread_select_ln388_129_fu_17419_p3() {
    select_ln388_129_fu_17419_p3 = (!and_ln786_231_fu_17387_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_231_fu_17387_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_150_fu_17367_p2.read());
}

void ResNet::thread_select_ln388_12_fu_10372_p3() {
    select_ln388_12_fu_10372_p3 = (!and_ln786_172_fu_10340_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_172_fu_10340_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_66_fu_10184_p2.read());
}

void ResNet::thread_select_ln388_130_fu_17509_p3() {
    select_ln388_130_fu_17509_p3 = (!and_ln786_232_fu_17477_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_232_fu_17477_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_151_fu_17457_p2.read());
}

void ResNet::thread_select_ln388_131_fu_17599_p3() {
    select_ln388_131_fu_17599_p3 = (!and_ln786_233_fu_17567_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_233_fu_17567_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_152_fu_17547_p2.read());
}

void ResNet::thread_select_ln388_132_fu_17689_p3() {
    select_ln388_132_fu_17689_p3 = (!and_ln786_234_fu_17657_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_234_fu_17657_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_153_fu_17637_p2.read());
}

void ResNet::thread_select_ln388_13_fu_10653_p3() {
    select_ln388_13_fu_10653_p3 = (!and_ln786_173_fu_10621_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_173_fu_10621_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_67_fu_10465_p2.read());
}

void ResNet::thread_select_ln388_14_fu_10934_p3() {
    select_ln388_14_fu_10934_p3 = (!and_ln786_175_fu_10902_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_175_fu_10902_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_68_fu_10746_p2.read());
}

void ResNet::thread_select_ln388_15_fu_11215_p3() {
    select_ln388_15_fu_11215_p3 = (!and_ln786_177_fu_11183_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_177_fu_11183_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_69_fu_11027_p2.read());
}

void ResNet::thread_select_ln388_1_fu_7281_p3() {
    select_ln388_1_fu_7281_p3 = (!and_ln786_156_fu_7249_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_156_fu_7249_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_55_fu_7093_p2.read());
}

void ResNet::thread_select_ln388_2_fu_7562_p3() {
    select_ln388_2_fu_7562_p3 = (!and_ln786_157_fu_7530_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_157_fu_7530_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_56_fu_7374_p2.read());
}

void ResNet::thread_select_ln388_3_fu_7843_p3() {
    select_ln388_3_fu_7843_p3 = (!and_ln786_158_fu_7811_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_158_fu_7811_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_57_fu_7655_p2.read());
}

void ResNet::thread_select_ln388_67_fu_8124_p3() {
    select_ln388_67_fu_8124_p3 = (!and_ln786_159_fu_8092_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_159_fu_8092_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_58_fu_7936_p2.read());
}

void ResNet::thread_select_ln388_68_fu_12019_p3() {
    select_ln388_68_fu_12019_p3 = (!and_ln786_160_fu_11987_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_160_fu_11987_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_fu_11967_p2.read());
}

void ResNet::thread_select_ln388_69_fu_8405_p3() {
    select_ln388_69_fu_8405_p3 = (!and_ln786_161_fu_8373_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_161_fu_8373_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_59_fu_8217_p2.read());
}

void ResNet::thread_select_ln388_6_fu_8686_p3() {
    select_ln388_6_fu_8686_p3 = (!and_ln786_162_fu_8654_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_162_fu_8654_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_60_fu_8498_p2.read());
}

void ResNet::thread_select_ln388_70_fu_12109_p3() {
    select_ln388_70_fu_12109_p3 = (!and_ln786_163_fu_12077_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_163_fu_12077_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_91_fu_12057_p2.read());
}

void ResNet::thread_select_ln388_71_fu_12199_p3() {
    select_ln388_71_fu_12199_p3 = (!and_ln786_165_fu_12167_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_165_fu_12167_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_92_fu_12147_p2.read());
}

void ResNet::thread_select_ln388_72_fu_12289_p3() {
    select_ln388_72_fu_12289_p3 = (!and_ln786_168_fu_12257_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_168_fu_12257_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_93_fu_12237_p2.read());
}

void ResNet::thread_select_ln388_73_fu_12379_p3() {
    select_ln388_73_fu_12379_p3 = (!and_ln786_171_fu_12347_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_171_fu_12347_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_94_fu_12327_p2.read());
}

void ResNet::thread_select_ln388_74_fu_12469_p3() {
    select_ln388_74_fu_12469_p3 = (!and_ln786_174_fu_12437_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_174_fu_12437_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_95_fu_12417_p2.read());
}

void ResNet::thread_select_ln388_75_fu_12559_p3() {
    select_ln388_75_fu_12559_p3 = (!and_ln786_176_fu_12527_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_176_fu_12527_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_96_fu_12507_p2.read());
}

void ResNet::thread_select_ln388_76_fu_12649_p3() {
    select_ln388_76_fu_12649_p3 = (!and_ln786_178_fu_12617_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_178_fu_12617_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_97_fu_12597_p2.read());
}

void ResNet::thread_select_ln388_77_fu_12739_p3() {
    select_ln388_77_fu_12739_p3 = (!and_ln786_179_fu_12707_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_179_fu_12707_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_98_fu_12687_p2.read());
}

void ResNet::thread_select_ln388_78_fu_12829_p3() {
    select_ln388_78_fu_12829_p3 = (!and_ln786_180_fu_12797_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_180_fu_12797_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_99_fu_12777_p2.read());
}

void ResNet::thread_select_ln388_79_fu_12919_p3() {
    select_ln388_79_fu_12919_p3 = (!and_ln786_181_fu_12887_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_181_fu_12887_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_100_fu_12867_p2.read());
}

void ResNet::thread_select_ln388_7_fu_8967_p3() {
    select_ln388_7_fu_8967_p3 = (!and_ln786_164_fu_8935_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_164_fu_8935_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_61_fu_8779_p2.read());
}

void ResNet::thread_select_ln388_80_fu_13009_p3() {
    select_ln388_80_fu_13009_p3 = (!and_ln786_182_fu_12977_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_182_fu_12977_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_101_fu_12957_p2.read());
}

void ResNet::thread_select_ln388_81_fu_13099_p3() {
    select_ln388_81_fu_13099_p3 = (!and_ln786_183_fu_13067_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_183_fu_13067_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_102_fu_13047_p2.read());
}

void ResNet::thread_select_ln388_82_fu_13189_p3() {
    select_ln388_82_fu_13189_p3 = (!and_ln786_184_fu_13157_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_184_fu_13157_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_103_fu_13137_p2.read());
}

void ResNet::thread_select_ln388_83_fu_13279_p3() {
    select_ln388_83_fu_13279_p3 = (!and_ln786_185_fu_13247_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_185_fu_13247_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_104_fu_13227_p2.read());
}

void ResNet::thread_select_ln388_84_fu_13369_p3() {
    select_ln388_84_fu_13369_p3 = (!and_ln786_186_fu_13337_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_186_fu_13337_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_105_fu_13317_p2.read());
}

void ResNet::thread_select_ln388_85_fu_13459_p3() {
    select_ln388_85_fu_13459_p3 = (!and_ln786_187_fu_13427_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_187_fu_13427_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_106_fu_13407_p2.read());
}

void ResNet::thread_select_ln388_86_fu_13549_p3() {
    select_ln388_86_fu_13549_p3 = (!and_ln786_188_fu_13517_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_188_fu_13517_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_107_fu_13497_p2.read());
}

void ResNet::thread_select_ln388_87_fu_13639_p3() {
    select_ln388_87_fu_13639_p3 = (!and_ln786_189_fu_13607_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_189_fu_13607_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_108_fu_13587_p2.read());
}

void ResNet::thread_select_ln388_88_fu_13729_p3() {
    select_ln388_88_fu_13729_p3 = (!and_ln786_190_fu_13697_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_190_fu_13697_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_109_fu_13677_p2.read());
}

void ResNet::thread_select_ln388_89_fu_13819_p3() {
    select_ln388_89_fu_13819_p3 = (!and_ln786_191_fu_13787_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_191_fu_13787_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_110_fu_13767_p2.read());
}

void ResNet::thread_select_ln388_8_fu_9248_p3() {
    select_ln388_8_fu_9248_p3 = (!and_ln786_166_fu_9216_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_166_fu_9216_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_62_fu_9060_p2.read());
}

void ResNet::thread_select_ln388_90_fu_13909_p3() {
    select_ln388_90_fu_13909_p3 = (!and_ln786_192_fu_13877_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_192_fu_13877_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_111_fu_13857_p2.read());
}

void ResNet::thread_select_ln388_91_fu_13999_p3() {
    select_ln388_91_fu_13999_p3 = (!and_ln786_193_fu_13967_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_193_fu_13967_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_112_fu_13947_p2.read());
}

void ResNet::thread_select_ln388_92_fu_14089_p3() {
    select_ln388_92_fu_14089_p3 = (!and_ln786_194_fu_14057_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_194_fu_14057_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_113_fu_14037_p2.read());
}

void ResNet::thread_select_ln388_93_fu_14179_p3() {
    select_ln388_93_fu_14179_p3 = (!and_ln786_195_fu_14147_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_195_fu_14147_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_114_fu_14127_p2.read());
}

void ResNet::thread_select_ln388_94_fu_14269_p3() {
    select_ln388_94_fu_14269_p3 = (!and_ln786_196_fu_14237_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_196_fu_14237_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_115_fu_14217_p2.read());
}

void ResNet::thread_select_ln388_95_fu_14359_p3() {
    select_ln388_95_fu_14359_p3 = (!and_ln786_197_fu_14327_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_197_fu_14327_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_116_fu_14307_p2.read());
}

void ResNet::thread_select_ln388_96_fu_14449_p3() {
    select_ln388_96_fu_14449_p3 = (!and_ln786_198_fu_14417_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_198_fu_14417_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_117_fu_14397_p2.read());
}

void ResNet::thread_select_ln388_97_fu_14539_p3() {
    select_ln388_97_fu_14539_p3 = (!and_ln786_199_fu_14507_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_199_fu_14507_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_118_fu_14487_p2.read());
}

void ResNet::thread_select_ln388_98_fu_14629_p3() {
    select_ln388_98_fu_14629_p3 = (!and_ln786_200_fu_14597_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_200_fu_14597_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_119_fu_14577_p2.read());
}

void ResNet::thread_select_ln388_99_fu_14719_p3() {
    select_ln388_99_fu_14719_p3 = (!and_ln786_201_fu_14687_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_201_fu_14687_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_120_fu_14667_p2.read());
}

void ResNet::thread_select_ln388_9_fu_9529_p3() {
    select_ln388_9_fu_9529_p3 = (!and_ln786_167_fu_9497_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_167_fu_9497_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_63_fu_9341_p2.read());
}

void ResNet::thread_select_ln388_fu_7000_p3() {
    select_ln388_fu_7000_p3 = (!and_ln786_155_fu_6968_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_155_fu_6968_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_fu_6812_p2.read());
}

void ResNet::thread_select_ln416_55_fu_7193_p3() {
    select_ln416_55_fu_7193_p3 = (!and_ln416_55_fu_7113_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_55_fu_7113_p2.read()[0].to_bool())? and_ln779_1_fu_7187_p2.read(): icmp_ln879_115_fu_7153_p2.read());
}

void ResNet::thread_select_ln416_56_fu_7474_p3() {
    select_ln416_56_fu_7474_p3 = (!and_ln416_56_fu_7394_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_56_fu_7394_p2.read()[0].to_bool())? and_ln779_2_fu_7468_p2.read(): icmp_ln879_117_fu_7434_p2.read());
}

void ResNet::thread_select_ln416_57_fu_7755_p3() {
    select_ln416_57_fu_7755_p3 = (!and_ln416_57_fu_7675_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_57_fu_7675_p2.read()[0].to_bool())? and_ln779_3_fu_7749_p2.read(): icmp_ln879_119_fu_7715_p2.read());
}

void ResNet::thread_select_ln416_58_fu_8036_p3() {
    select_ln416_58_fu_8036_p3 = (!and_ln416_58_fu_7956_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_58_fu_7956_p2.read()[0].to_bool())? and_ln779_4_fu_8030_p2.read(): icmp_ln879_121_fu_7996_p2.read());
}

void ResNet::thread_select_ln416_59_fu_8317_p3() {
    select_ln416_59_fu_8317_p3 = (!and_ln416_59_fu_8237_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_59_fu_8237_p2.read()[0].to_bool())? and_ln779_5_fu_8311_p2.read(): icmp_ln879_123_fu_8277_p2.read());
}

void ResNet::thread_select_ln416_60_fu_8598_p3() {
    select_ln416_60_fu_8598_p3 = (!and_ln416_60_fu_8518_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_60_fu_8518_p2.read()[0].to_bool())? and_ln779_6_fu_8592_p2.read(): icmp_ln879_125_fu_8558_p2.read());
}

void ResNet::thread_select_ln416_61_fu_8879_p3() {
    select_ln416_61_fu_8879_p3 = (!and_ln416_61_fu_8799_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_61_fu_8799_p2.read()[0].to_bool())? and_ln779_7_fu_8873_p2.read(): icmp_ln879_127_fu_8839_p2.read());
}

void ResNet::thread_select_ln416_62_fu_9160_p3() {
    select_ln416_62_fu_9160_p3 = (!and_ln416_62_fu_9080_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_62_fu_9080_p2.read()[0].to_bool())? and_ln779_8_fu_9154_p2.read(): icmp_ln879_129_fu_9120_p2.read());
}

void ResNet::thread_select_ln416_63_fu_9441_p3() {
    select_ln416_63_fu_9441_p3 = (!and_ln416_63_fu_9361_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_63_fu_9361_p2.read()[0].to_bool())? and_ln779_9_fu_9435_p2.read(): icmp_ln879_131_fu_9401_p2.read());
}

void ResNet::thread_select_ln416_64_fu_9722_p3() {
    select_ln416_64_fu_9722_p3 = (!and_ln416_64_fu_9642_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_64_fu_9642_p2.read()[0].to_bool())? and_ln779_10_fu_9716_p2.read(): icmp_ln879_133_fu_9682_p2.read());
}

void ResNet::thread_select_ln416_65_fu_10003_p3() {
    select_ln416_65_fu_10003_p3 = (!and_ln416_65_fu_9923_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_65_fu_9923_p2.read()[0].to_bool())? and_ln779_11_fu_9997_p2.read(): icmp_ln879_135_fu_9963_p2.read());
}

void ResNet::thread_select_ln416_66_fu_10284_p3() {
    select_ln416_66_fu_10284_p3 = (!and_ln416_66_fu_10204_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_66_fu_10204_p2.read()[0].to_bool())? and_ln779_12_fu_10278_p2.read(): icmp_ln879_137_fu_10244_p2.read());
}

void ResNet::thread_select_ln416_67_fu_10565_p3() {
    select_ln416_67_fu_10565_p3 = (!and_ln416_67_fu_10485_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_67_fu_10485_p2.read()[0].to_bool())? and_ln779_13_fu_10559_p2.read(): icmp_ln879_139_fu_10525_p2.read());
}

void ResNet::thread_select_ln416_68_fu_10846_p3() {
    select_ln416_68_fu_10846_p3 = (!and_ln416_68_fu_10766_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_68_fu_10766_p2.read()[0].to_bool())? and_ln779_14_fu_10840_p2.read(): icmp_ln879_141_fu_10806_p2.read());
}

void ResNet::thread_select_ln416_69_fu_11127_p3() {
    select_ln416_69_fu_11127_p3 = (!and_ln416_69_fu_11047_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_69_fu_11047_p2.read()[0].to_bool())? and_ln779_15_fu_11121_p2.read(): icmp_ln879_143_fu_11087_p2.read());
}

void ResNet::thread_select_ln416_fu_6912_p3() {
    select_ln416_fu_6912_p3 = (!and_ln416_fu_6832_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_fu_6832_p2.read()[0].to_bool())? and_ln779_fu_6906_p2.read(): icmp_ln879_113_fu_6872_p2.read());
}

void ResNet::thread_select_ln595_1_fu_11823_p3() {
    select_ln595_1_fu_11823_p3 = (!icmp_ln590_fu_11809_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln590_fu_11809_p2.read()[0].to_bool())? i_fu_11803_p2.read(): ap_phi_mux_i_0_phi_fu_2969_p4.read());
}

void ResNet::thread_select_ln595_fu_11815_p3() {
    select_ln595_fu_11815_p3 = (!icmp_ln590_fu_11809_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln590_fu_11809_p2.read()[0].to_bool())? ap_const_lv4_1: j_0_reg_3744.read());
}

void ResNet::thread_select_ln777_55_fu_7165_p3() {
    select_ln777_55_fu_7165_p3 = (!and_ln416_55_fu_7113_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_55_fu_7113_p2.read()[0].to_bool())? icmp_ln879_115_fu_7153_p2.read(): icmp_ln768_55_fu_7159_p2.read());
}

void ResNet::thread_select_ln777_56_fu_7446_p3() {
    select_ln777_56_fu_7446_p3 = (!and_ln416_56_fu_7394_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_56_fu_7394_p2.read()[0].to_bool())? icmp_ln879_117_fu_7434_p2.read(): icmp_ln768_56_fu_7440_p2.read());
}

void ResNet::thread_select_ln777_57_fu_7727_p3() {
    select_ln777_57_fu_7727_p3 = (!and_ln416_57_fu_7675_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_57_fu_7675_p2.read()[0].to_bool())? icmp_ln879_119_fu_7715_p2.read(): icmp_ln768_57_fu_7721_p2.read());
}

void ResNet::thread_select_ln777_58_fu_8008_p3() {
    select_ln777_58_fu_8008_p3 = (!and_ln416_58_fu_7956_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_58_fu_7956_p2.read()[0].to_bool())? icmp_ln879_121_fu_7996_p2.read(): icmp_ln768_58_fu_8002_p2.read());
}

void ResNet::thread_select_ln777_59_fu_8289_p3() {
    select_ln777_59_fu_8289_p3 = (!and_ln416_59_fu_8237_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_59_fu_8237_p2.read()[0].to_bool())? icmp_ln879_123_fu_8277_p2.read(): icmp_ln768_59_fu_8283_p2.read());
}

void ResNet::thread_select_ln777_60_fu_8570_p3() {
    select_ln777_60_fu_8570_p3 = (!and_ln416_60_fu_8518_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_60_fu_8518_p2.read()[0].to_bool())? icmp_ln879_125_fu_8558_p2.read(): icmp_ln768_60_fu_8564_p2.read());
}

void ResNet::thread_select_ln777_61_fu_8851_p3() {
    select_ln777_61_fu_8851_p3 = (!and_ln416_61_fu_8799_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_61_fu_8799_p2.read()[0].to_bool())? icmp_ln879_127_fu_8839_p2.read(): icmp_ln768_61_fu_8845_p2.read());
}

void ResNet::thread_select_ln777_62_fu_9132_p3() {
    select_ln777_62_fu_9132_p3 = (!and_ln416_62_fu_9080_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_62_fu_9080_p2.read()[0].to_bool())? icmp_ln879_129_fu_9120_p2.read(): icmp_ln768_62_fu_9126_p2.read());
}

void ResNet::thread_select_ln777_63_fu_9413_p3() {
    select_ln777_63_fu_9413_p3 = (!and_ln416_63_fu_9361_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_63_fu_9361_p2.read()[0].to_bool())? icmp_ln879_131_fu_9401_p2.read(): icmp_ln768_63_fu_9407_p2.read());
}

void ResNet::thread_select_ln777_64_fu_9694_p3() {
    select_ln777_64_fu_9694_p3 = (!and_ln416_64_fu_9642_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_64_fu_9642_p2.read()[0].to_bool())? icmp_ln879_133_fu_9682_p2.read(): icmp_ln768_64_fu_9688_p2.read());
}

void ResNet::thread_select_ln777_65_fu_9975_p3() {
    select_ln777_65_fu_9975_p3 = (!and_ln416_65_fu_9923_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_65_fu_9923_p2.read()[0].to_bool())? icmp_ln879_135_fu_9963_p2.read(): icmp_ln768_65_fu_9969_p2.read());
}

void ResNet::thread_select_ln777_66_fu_10256_p3() {
    select_ln777_66_fu_10256_p3 = (!and_ln416_66_fu_10204_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_66_fu_10204_p2.read()[0].to_bool())? icmp_ln879_137_fu_10244_p2.read(): icmp_ln768_66_fu_10250_p2.read());
}

void ResNet::thread_select_ln777_67_fu_10537_p3() {
    select_ln777_67_fu_10537_p3 = (!and_ln416_67_fu_10485_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_67_fu_10485_p2.read()[0].to_bool())? icmp_ln879_139_fu_10525_p2.read(): icmp_ln768_67_fu_10531_p2.read());
}

void ResNet::thread_select_ln777_68_fu_10818_p3() {
    select_ln777_68_fu_10818_p3 = (!and_ln416_68_fu_10766_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_68_fu_10766_p2.read()[0].to_bool())? icmp_ln879_141_fu_10806_p2.read(): icmp_ln768_68_fu_10812_p2.read());
}

void ResNet::thread_select_ln777_69_fu_11099_p3() {
    select_ln777_69_fu_11099_p3 = (!and_ln416_69_fu_11047_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_69_fu_11047_p2.read()[0].to_bool())? icmp_ln879_143_fu_11087_p2.read(): icmp_ln768_69_fu_11093_p2.read());
}

void ResNet::thread_select_ln777_fu_6884_p3() {
    select_ln777_fu_6884_p3 = (!and_ln416_fu_6832_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_fu_6832_p2.read()[0].to_bool())? icmp_ln879_113_fu_6872_p2.read(): icmp_ln768_fu_6878_p2.read());
}

void ResNet::thread_select_ln86_1_fu_4718_p3() {
    select_ln86_1_fu_4718_p3 = (!icmp_ln87_fu_4704_p2.read()[0].is_01())? sc_lv<6>(): ((icmp_ln87_fu_4704_p2.read()[0].to_bool())? row_fu_4698_p2.read(): ap_phi_mux_row_0_phi_fu_2306_p4.read());
}

void ResNet::thread_select_ln86_fu_4710_p3() {
    select_ln86_fu_4710_p3 = (!icmp_ln87_fu_4704_p2.read()[0].is_01())? sc_lv<6>(): ((icmp_ln87_fu_4704_p2.read()[0].to_bool())? ap_const_lv6_0: ap_phi_mux_col_0_phi_fu_2328_p4.read());
}

void ResNet::thread_select_ln87_fu_4835_p3() {
    select_ln87_fu_4835_p3 = (!icmp_ln87_fu_4704_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln87_fu_4704_p2.read()[0].to_bool())? ap_const_lv9_1: add_ln87_1_fu_4829_p2.read());
}

void ResNet::thread_select_ln90_1_fu_4780_p3() {
    select_ln90_1_fu_4780_p3 = (!and_ln86_fu_4754_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln86_fu_4754_p2.read()[0].to_bool())? col_16_fu_4760_p2.read(): select_ln86_fu_4710_p3.read());
}

void ResNet::thread_select_ln90_fu_4772_p3() {
    select_ln90_fu_4772_p3 = (!or_ln90_fu_4766_p2.read()[0].is_01())? sc_lv<3>(): ((or_ln90_fu_4766_p2.read()[0].to_bool())? ap_const_lv3_0: cbb_0_reg_2335.read());
}

void ResNet::thread_sext_ln1116_15_fu_7017_p0() {
    sext_ln1116_15_fu_7017_p0 = conv1_out_1_q0.read();
}

void ResNet::thread_sext_ln1116_15_fu_7017_p1() {
    sext_ln1116_15_fu_7017_p1 = esl_sext<23,12>(sext_ln1116_15_fu_7017_p0.read());
}

void ResNet::thread_sext_ln1116_16_fu_7298_p0() {
    sext_ln1116_16_fu_7298_p0 = conv1_out_2_q0.read();
}

void ResNet::thread_sext_ln1116_16_fu_7298_p1() {
    sext_ln1116_16_fu_7298_p1 = esl_sext<23,12>(sext_ln1116_16_fu_7298_p0.read());
}

void ResNet::thread_sext_ln1116_17_fu_7579_p0() {
    sext_ln1116_17_fu_7579_p0 = conv1_out_3_q0.read();
}

void ResNet::thread_sext_ln1116_17_fu_7579_p1() {
    sext_ln1116_17_fu_7579_p1 = esl_sext<23,12>(sext_ln1116_17_fu_7579_p0.read());
}

void ResNet::thread_sext_ln1116_18_fu_7860_p0() {
    sext_ln1116_18_fu_7860_p0 = conv1_out_4_q0.read();
}

void ResNet::thread_sext_ln1116_18_fu_7860_p1() {
    sext_ln1116_18_fu_7860_p1 = esl_sext<23,12>(sext_ln1116_18_fu_7860_p0.read());
}

void ResNet::thread_sext_ln1116_19_fu_8141_p0() {
    sext_ln1116_19_fu_8141_p0 = conv1_out_5_q0.read();
}

void ResNet::thread_sext_ln1116_19_fu_8141_p1() {
    sext_ln1116_19_fu_8141_p1 = esl_sext<23,12>(sext_ln1116_19_fu_8141_p0.read());
}

void ResNet::thread_sext_ln1116_20_fu_8422_p0() {
    sext_ln1116_20_fu_8422_p0 = conv1_out_6_q0.read();
}

void ResNet::thread_sext_ln1116_20_fu_8422_p1() {
    sext_ln1116_20_fu_8422_p1 = esl_sext<23,12>(sext_ln1116_20_fu_8422_p0.read());
}

void ResNet::thread_sext_ln1116_21_fu_8703_p0() {
    sext_ln1116_21_fu_8703_p0 = conv1_out_7_q0.read();
}

void ResNet::thread_sext_ln1116_21_fu_8703_p1() {
    sext_ln1116_21_fu_8703_p1 = esl_sext<23,12>(sext_ln1116_21_fu_8703_p0.read());
}

void ResNet::thread_sext_ln1116_22_fu_8984_p0() {
    sext_ln1116_22_fu_8984_p0 = conv1_out_8_q0.read();
}

void ResNet::thread_sext_ln1116_22_fu_8984_p1() {
    sext_ln1116_22_fu_8984_p1 = esl_sext<23,12>(sext_ln1116_22_fu_8984_p0.read());
}

void ResNet::thread_sext_ln1116_23_fu_9265_p0() {
    sext_ln1116_23_fu_9265_p0 = conv1_out_9_q0.read();
}

void ResNet::thread_sext_ln1116_23_fu_9265_p1() {
    sext_ln1116_23_fu_9265_p1 = esl_sext<23,12>(sext_ln1116_23_fu_9265_p0.read());
}

void ResNet::thread_sext_ln1116_24_fu_9546_p0() {
    sext_ln1116_24_fu_9546_p0 = conv1_out_10_q0.read();
}

void ResNet::thread_sext_ln1116_24_fu_9546_p1() {
    sext_ln1116_24_fu_9546_p1 = esl_sext<23,12>(sext_ln1116_24_fu_9546_p0.read());
}

void ResNet::thread_sext_ln1116_25_fu_9827_p0() {
    sext_ln1116_25_fu_9827_p0 = conv1_out_11_q0.read();
}

void ResNet::thread_sext_ln1116_25_fu_9827_p1() {
    sext_ln1116_25_fu_9827_p1 = esl_sext<23,12>(sext_ln1116_25_fu_9827_p0.read());
}

void ResNet::thread_sext_ln1116_26_fu_10108_p0() {
    sext_ln1116_26_fu_10108_p0 = conv1_out_12_q0.read();
}

void ResNet::thread_sext_ln1116_26_fu_10108_p1() {
    sext_ln1116_26_fu_10108_p1 = esl_sext<23,12>(sext_ln1116_26_fu_10108_p0.read());
}

void ResNet::thread_sext_ln1116_27_fu_10389_p0() {
    sext_ln1116_27_fu_10389_p0 = conv1_out_13_q0.read();
}

void ResNet::thread_sext_ln1116_27_fu_10389_p1() {
    sext_ln1116_27_fu_10389_p1 = esl_sext<23,12>(sext_ln1116_27_fu_10389_p0.read());
}

void ResNet::thread_sext_ln1116_28_fu_10670_p0() {
    sext_ln1116_28_fu_10670_p0 = conv1_out_14_q0.read();
}

void ResNet::thread_sext_ln1116_28_fu_10670_p1() {
    sext_ln1116_28_fu_10670_p1 = esl_sext<23,12>(sext_ln1116_28_fu_10670_p0.read());
}

void ResNet::thread_sext_ln1116_29_fu_10951_p0() {
    sext_ln1116_29_fu_10951_p0 = conv1_out_15_q0.read();
}

void ResNet::thread_sext_ln1116_29_fu_10951_p1() {
    sext_ln1116_29_fu_10951_p1 = esl_sext<23,12>(sext_ln1116_29_fu_10951_p0.read());
}

void ResNet::thread_sext_ln1116_fu_6736_p0() {
    sext_ln1116_fu_6736_p0 = conv1_out_0_q0.read();
}

void ResNet::thread_sext_ln1116_fu_6736_p1() {
    sext_ln1116_fu_6736_p1 = esl_sext<23,12>(sext_ln1116_fu_6736_p0.read());
}

void ResNet::thread_sext_ln1118_15_fu_7029_p1() {
    sext_ln1118_15_fu_7029_p1 = esl_sext<23,22>(shl_ln1118_1_fu_7021_p3.read());
}

void ResNet::thread_sext_ln1118_16_fu_7310_p1() {
    sext_ln1118_16_fu_7310_p1 = esl_sext<23,22>(shl_ln1118_2_fu_7302_p3.read());
}

void ResNet::thread_sext_ln1118_17_fu_7591_p1() {
    sext_ln1118_17_fu_7591_p1 = esl_sext<23,22>(shl_ln1118_3_fu_7583_p3.read());
}

void ResNet::thread_sext_ln1118_18_fu_7872_p1() {
    sext_ln1118_18_fu_7872_p1 = esl_sext<23,22>(shl_ln1118_4_fu_7864_p3.read());
}

void ResNet::thread_sext_ln1118_19_fu_8153_p1() {
    sext_ln1118_19_fu_8153_p1 = esl_sext<23,22>(shl_ln1118_5_fu_8145_p3.read());
}

void ResNet::thread_sext_ln1118_20_fu_8434_p1() {
    sext_ln1118_20_fu_8434_p1 = esl_sext<23,22>(shl_ln1118_6_fu_8426_p3.read());
}

void ResNet::thread_sext_ln1118_21_fu_8715_p1() {
    sext_ln1118_21_fu_8715_p1 = esl_sext<23,22>(shl_ln1118_7_fu_8707_p3.read());
}

void ResNet::thread_sext_ln1118_22_fu_8996_p1() {
    sext_ln1118_22_fu_8996_p1 = esl_sext<23,22>(shl_ln1118_8_fu_8988_p3.read());
}

void ResNet::thread_sext_ln1118_23_fu_9277_p1() {
    sext_ln1118_23_fu_9277_p1 = esl_sext<23,22>(shl_ln1118_9_fu_9269_p3.read());
}

void ResNet::thread_sext_ln1118_24_fu_9558_p1() {
    sext_ln1118_24_fu_9558_p1 = esl_sext<23,22>(shl_ln1118_s_fu_9550_p3.read());
}

void ResNet::thread_sext_ln1118_25_fu_9839_p1() {
    sext_ln1118_25_fu_9839_p1 = esl_sext<23,22>(shl_ln1118_10_fu_9831_p3.read());
}

}

