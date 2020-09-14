// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _sum_engine_HH_
#define _sum_engine_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct sum_engine : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_lv<6> > t0_V;
    sc_in< sc_lv<6> > t1_V;
    sc_in< sc_lv<6> > t2_V;
    sc_in< sc_lv<6> > t3_V;
    sc_in< sc_lv<6> > t4_V;
    sc_in< sc_lv<6> > t5_V;
    sc_in< sc_lv<6> > t6_V;
    sc_in< sc_lv<6> > t7_V;
    sc_in< sc_lv<6> > t8_V;
    sc_out< sc_lv<8> > ap_return;
    sc_in< sc_logic > ap_ce;


    // Module declarations
    sum_engine(sc_module_name name);
    SC_HAS_PROCESS(sum_engine);

    ~sum_engine();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<6> > t8_V_read_reg_152;
    sc_signal< bool > ap_block_state1_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<6> > add0_V_fu_84_p2;
    sc_signal< sc_lv<6> > add0_V_reg_157;
    sc_signal< sc_lv<6> > add1_V_fu_90_p2;
    sc_signal< sc_lv<6> > add1_V_reg_162;
    sc_signal< sc_lv<7> > add_ln68_1_fu_116_p2;
    sc_signal< sc_lv<7> > add_ln68_1_reg_167;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<6> > add2_V_fu_96_p2;
    sc_signal< sc_lv<6> > add3_V_fu_102_p2;
    sc_signal< sc_lv<7> > lhs_V_3_fu_108_p1;
    sc_signal< sc_lv<7> > rhs_V_4_fu_112_p1;
    sc_signal< sc_lv<7> > rhs_V_fu_125_p1;
    sc_signal< sc_lv<7> > lhs_V_fu_122_p1;
    sc_signal< sc_lv<7> > add_ln68_fu_128_p2;
    sc_signal< sc_lv<7> > add6_V_fu_134_p2;
    sc_signal< sc_lv<8> > lhs_V_4_fu_139_p1;
    sc_signal< sc_lv<8> > rhs_V_5_fu_143_p1;
    sc_signal< sc_lv<8> > ret_V_fu_146_p2;
    sc_signal< sc_logic > ap_ce_reg;
    sc_signal< sc_lv<8> > ap_return_int_reg;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const bool ap_const_boolean_1;
    static const bool ap_const_boolean_0;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add0_V_fu_84_p2();
    void thread_add1_V_fu_90_p2();
    void thread_add2_V_fu_96_p2();
    void thread_add3_V_fu_102_p2();
    void thread_add6_V_fu_134_p2();
    void thread_add_ln68_1_fu_116_p2();
    void thread_add_ln68_fu_128_p2();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_state1_pp0_stage0_iter0();
    void thread_ap_block_state2_pp0_stage0_iter1();
    void thread_ap_return();
    void thread_lhs_V_3_fu_108_p1();
    void thread_lhs_V_4_fu_139_p1();
    void thread_lhs_V_fu_122_p1();
    void thread_ret_V_fu_146_p2();
    void thread_rhs_V_4_fu_112_p1();
    void thread_rhs_V_5_fu_143_p1();
    void thread_rhs_V_fu_125_p1();
};

}

using namespace ap_rtl;

#endif
