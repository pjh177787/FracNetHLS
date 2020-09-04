// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _batch_norm_HH_
#define _batch_norm_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "pgconv32_2bit_mulcud.h"

namespace ap_rtl {

struct batch_norm : public sc_module {
    // Port declarations 5
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<8> > sum_V;
    sc_in< sc_lv<11> > weight_V;
    sc_in< sc_lv<11> > bias_V;
    sc_out< sc_lv<14> > ap_return;


    // Module declarations
    batch_norm(sc_module_name name);
    SC_HAS_PROCESS(batch_norm);

    ~batch_norm();

    sc_trace_file* mVcdFile;

    pgconv32_2bit_mulcud<1,1,8,11,19>* pgconv32_2bit_mulcud_U13;
    sc_signal< sc_lv<11> > sext_ln703_fu_62_p0;
    sc_signal< sc_lv<19> > sext_ln703_fu_62_p1;
    sc_signal< sc_lv<19> > r_V_4_fu_208_p2;
    sc_signal< sc_lv<19> > ret_V_fu_66_p2;
    sc_signal< sc_lv<11> > sext_ln731_fu_79_p0;
    sc_signal< sc_lv<13> > sext_ln731_fu_79_p1;
    sc_signal< sc_lv<13> > trunc_ln731_fu_83_p1;
    sc_signal< sc_lv<13> > add_ln731_fu_86_p2;
    sc_signal< sc_lv<6> > tmp_fu_108_p4;
    sc_signal< sc_lv<1> > p_Result_7_fu_100_p3;
    sc_signal< sc_lv<1> > icmp_ln785_fu_118_p2;
    sc_signal< sc_lv<1> > p_Result_s_fu_71_p3;
    sc_signal< sc_lv<1> > or_ln785_fu_124_p2;
    sc_signal< sc_lv<1> > xor_ln785_fu_130_p2;
    sc_signal< sc_lv<1> > icmp_ln786_fu_148_p2;
    sc_signal< sc_lv<1> > xor_ln786_fu_142_p2;
    sc_signal< sc_lv<1> > or_ln786_fu_154_p2;
    sc_signal< sc_lv<1> > underflow_fu_160_p2;
    sc_signal< sc_lv<1> > overflow_fu_136_p2;
    sc_signal< sc_lv<1> > xor_ln340_fu_172_p2;
    sc_signal< sc_lv<1> > or_ln340_fu_166_p2;
    sc_signal< sc_lv<14> > p_Val2_10_fu_92_p3;
    sc_signal< sc_lv<1> > or_ln340_5_fu_178_p2;
    sc_signal< sc_lv<14> > select_ln340_fu_184_p3;
    sc_signal< sc_lv<14> > select_ln388_fu_192_p3;
    sc_signal< sc_lv<8> > r_V_4_fu_208_p0;
    sc_signal< sc_lv<19> > r_V_4_fu_208_p00;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<6> ap_const_lv6_3F;
    static const sc_lv<14> ap_const_lv14_1FFF;
    static const sc_lv<14> ap_const_lv14_2000;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_add_ln731_fu_86_p2();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_icmp_ln785_fu_118_p2();
    void thread_icmp_ln786_fu_148_p2();
    void thread_or_ln340_5_fu_178_p2();
    void thread_or_ln340_fu_166_p2();
    void thread_or_ln785_fu_124_p2();
    void thread_or_ln786_fu_154_p2();
    void thread_overflow_fu_136_p2();
    void thread_p_Result_7_fu_100_p3();
    void thread_p_Result_s_fu_71_p3();
    void thread_p_Val2_10_fu_92_p3();
    void thread_r_V_4_fu_208_p0();
    void thread_r_V_4_fu_208_p00();
    void thread_ret_V_fu_66_p2();
    void thread_select_ln340_fu_184_p3();
    void thread_select_ln388_fu_192_p3();
    void thread_sext_ln703_fu_62_p0();
    void thread_sext_ln703_fu_62_p1();
    void thread_sext_ln731_fu_79_p0();
    void thread_sext_ln731_fu_79_p1();
    void thread_tmp_fu_108_p4();
    void thread_trunc_ln731_fu_83_p1();
    void thread_underflow_fu_160_p2();
    void thread_xor_ln340_fu_172_p2();
    void thread_xor_ln785_fu_130_p2();
    void thread_xor_ln786_fu_142_p2();
};

}

using namespace ap_rtl;

#endif
