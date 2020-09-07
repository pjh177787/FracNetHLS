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
    // Port declarations 11
    sc_out< sc_logic > ap_ready;
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


    // Module declarations
    sum_engine(sc_module_name name);
    SC_HAS_PROCESS(sum_engine);

    ~sum_engine();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<6> > add0_V_fu_84_p2;
    sc_signal< sc_lv<6> > add1_V_fu_90_p2;
    sc_signal< sc_lv<6> > add2_V_fu_96_p2;
    sc_signal< sc_lv<6> > add3_V_fu_102_p2;
    sc_signal< sc_lv<7> > rhs_V_fu_112_p1;
    sc_signal< sc_lv<7> > lhs_V_fu_108_p1;
    sc_signal< sc_lv<7> > lhs_V_1_fu_116_p1;
    sc_signal< sc_lv<7> > rhs_V_1_fu_120_p1;
    sc_signal< sc_lv<7> > add_ln68_1_fu_130_p2;
    sc_signal< sc_lv<7> > add_ln68_fu_124_p2;
    sc_signal< sc_lv<7> > add6_V_fu_136_p2;
    sc_signal< sc_lv<8> > lhs_V_2_fu_142_p1;
    sc_signal< sc_lv<8> > rhs_V_2_fu_146_p1;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_add0_V_fu_84_p2();
    void thread_add1_V_fu_90_p2();
    void thread_add2_V_fu_96_p2();
    void thread_add3_V_fu_102_p2();
    void thread_add6_V_fu_136_p2();
    void thread_add_ln68_1_fu_130_p2();
    void thread_add_ln68_fu_124_p2();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_lhs_V_1_fu_116_p1();
    void thread_lhs_V_2_fu_142_p1();
    void thread_lhs_V_fu_108_p1();
    void thread_rhs_V_1_fu_120_p1();
    void thread_rhs_V_2_fu_146_p1();
    void thread_rhs_V_fu_112_p1();
};

}

using namespace ap_rtl;

#endif
