// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _compute_engine_64_HH_
#define _compute_engine_64_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "compute_engine_64lbW.h"

namespace ap_rtl {

struct compute_engine_64 : public sc_module {
    // Port declarations 10
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_logic > ap_ce;
    sc_in< sc_lv<64> > b_V;
    sc_in< sc_lv<64> > w_V;
    sc_out< sc_lv<6> > ap_return;


    // Module declarations
    compute_engine_64(sc_module_name name);
    SC_HAS_PROCESS(compute_engine_64);

    ~compute_engine_64();

    sc_trace_file* mVcdFile;

    compute_engine_64lbW* lut16_V_1_U;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< bool > ap_block_state1_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter3;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<4> > lut16_V_1_address0;
    sc_signal< sc_logic > lut16_V_1_ce0;
    sc_signal< sc_lv<3> > lut16_V_1_q0;
    sc_signal< sc_lv<4> > lut16_V_1_address1;
    sc_signal< sc_logic > lut16_V_1_ce1;
    sc_signal< sc_lv<3> > lut16_V_1_q1;
    sc_signal< sc_lv<4> > lut16_V_1_address2;
    sc_signal< sc_logic > lut16_V_1_ce2;
    sc_signal< sc_lv<3> > lut16_V_1_q2;
    sc_signal< sc_lv<4> > lut16_V_1_address3;
    sc_signal< sc_logic > lut16_V_1_ce3;
    sc_signal< sc_lv<3> > lut16_V_1_q3;
    sc_signal< sc_lv<4> > lut16_V_1_address4;
    sc_signal< sc_logic > lut16_V_1_ce4;
    sc_signal< sc_lv<3> > lut16_V_1_q4;
    sc_signal< sc_lv<4> > lut16_V_1_address5;
    sc_signal< sc_logic > lut16_V_1_ce5;
    sc_signal< sc_lv<3> > lut16_V_1_q5;
    sc_signal< sc_lv<4> > lut16_V_1_address6;
    sc_signal< sc_logic > lut16_V_1_ce6;
    sc_signal< sc_lv<3> > lut16_V_1_q6;
    sc_signal< sc_lv<4> > lut16_V_1_address7;
    sc_signal< sc_logic > lut16_V_1_ce7;
    sc_signal< sc_lv<3> > lut16_V_1_q7;
    sc_signal< sc_lv<4> > lut16_V_1_address8;
    sc_signal< sc_logic > lut16_V_1_ce8;
    sc_signal< sc_lv<3> > lut16_V_1_q8;
    sc_signal< sc_lv<4> > lut16_V_1_address9;
    sc_signal< sc_logic > lut16_V_1_ce9;
    sc_signal< sc_lv<3> > lut16_V_1_q9;
    sc_signal< sc_lv<4> > lut16_V_1_address10;
    sc_signal< sc_logic > lut16_V_1_ce10;
    sc_signal< sc_lv<3> > lut16_V_1_q10;
    sc_signal< sc_lv<4> > lut16_V_1_address11;
    sc_signal< sc_logic > lut16_V_1_ce11;
    sc_signal< sc_lv<3> > lut16_V_1_q11;
    sc_signal< sc_lv<4> > lut16_V_1_address12;
    sc_signal< sc_logic > lut16_V_1_ce12;
    sc_signal< sc_lv<3> > lut16_V_1_q12;
    sc_signal< sc_lv<4> > lut16_V_1_address13;
    sc_signal< sc_logic > lut16_V_1_ce13;
    sc_signal< sc_lv<3> > lut16_V_1_q13;
    sc_signal< sc_lv<4> > lut16_V_1_address14;
    sc_signal< sc_logic > lut16_V_1_ce14;
    sc_signal< sc_lv<3> > lut16_V_1_q14;
    sc_signal< sc_lv<4> > lut16_V_1_address15;
    sc_signal< sc_logic > lut16_V_1_ce15;
    sc_signal< sc_lv<3> > lut16_V_1_q15;
    sc_signal< sc_lv<4> > add0_V_fu_543_p2;
    sc_signal< sc_lv<4> > add0_V_reg_806;
    sc_signal< sc_lv<4> > add1_V_fu_557_p2;
    sc_signal< sc_lv<4> > add1_V_reg_811;
    sc_signal< sc_lv<4> > add2_V_fu_571_p2;
    sc_signal< sc_lv<4> > add2_V_reg_816;
    sc_signal< sc_lv<4> > add3_V_fu_585_p2;
    sc_signal< sc_lv<4> > add3_V_reg_821;
    sc_signal< sc_lv<4> > add4_V_fu_599_p2;
    sc_signal< sc_lv<4> > add4_V_reg_826;
    sc_signal< sc_lv<4> > add5_V_fu_613_p2;
    sc_signal< sc_lv<4> > add5_V_reg_831;
    sc_signal< sc_lv<4> > add6_V_fu_627_p2;
    sc_signal< sc_lv<4> > add6_V_reg_836;
    sc_signal< sc_lv<4> > add7_V_fu_641_p2;
    sc_signal< sc_lv<4> > add7_V_reg_841;
    sc_signal< sc_lv<5> > ret_V_8_fu_677_p2;
    sc_signal< sc_lv<5> > ret_V_8_reg_846;
    sc_signal< sc_lv<5> > ret_V_9_fu_689_p2;
    sc_signal< sc_lv<5> > ret_V_9_reg_851;
    sc_signal< sc_lv<6> > add_ln214_1_fu_703_p2;
    sc_signal< sc_lv<6> > add_ln214_1_reg_856;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_lv<64> > zext_ln19_fu_305_p1;
    sc_signal< sc_lv<64> > zext_ln19_1_fu_320_p1;
    sc_signal< sc_lv<64> > zext_ln20_fu_335_p1;
    sc_signal< sc_lv<64> > zext_ln20_1_fu_350_p1;
    sc_signal< sc_lv<64> > zext_ln21_fu_365_p1;
    sc_signal< sc_lv<64> > zext_ln21_1_fu_380_p1;
    sc_signal< sc_lv<64> > zext_ln22_fu_395_p1;
    sc_signal< sc_lv<64> > zext_ln22_1_fu_410_p1;
    sc_signal< sc_lv<64> > zext_ln23_fu_425_p1;
    sc_signal< sc_lv<64> > zext_ln23_1_fu_440_p1;
    sc_signal< sc_lv<64> > zext_ln24_fu_455_p1;
    sc_signal< sc_lv<64> > zext_ln24_1_fu_470_p1;
    sc_signal< sc_lv<64> > zext_ln25_fu_485_p1;
    sc_signal< sc_lv<64> > zext_ln25_1_fu_500_p1;
    sc_signal< sc_lv<64> > zext_ln26_fu_515_p1;
    sc_signal< sc_lv<64> > zext_ln26_1_fu_530_p1;
    sc_signal< sc_lv<64> > xor_ln769_fu_289_p2;
    sc_signal< sc_lv<64> > r_V_fu_295_p2;
    sc_signal< sc_lv<4> > trunc_ln681_fu_301_p1;
    sc_signal< sc_lv<4> > p_Result_s_fu_310_p4;
    sc_signal< sc_lv<4> > p_Result_31_fu_325_p4;
    sc_signal< sc_lv<4> > p_Result_32_fu_340_p4;
    sc_signal< sc_lv<4> > p_Result_33_fu_355_p4;
    sc_signal< sc_lv<4> > p_Result_34_fu_370_p4;
    sc_signal< sc_lv<4> > p_Result_35_fu_385_p4;
    sc_signal< sc_lv<4> > p_Result_36_fu_400_p4;
    sc_signal< sc_lv<4> > p_Result_37_fu_415_p4;
    sc_signal< sc_lv<4> > p_Result_38_fu_430_p4;
    sc_signal< sc_lv<4> > p_Result_39_fu_445_p4;
    sc_signal< sc_lv<4> > p_Result_40_fu_460_p4;
    sc_signal< sc_lv<4> > p_Result_41_fu_475_p4;
    sc_signal< sc_lv<4> > p_Result_42_fu_490_p4;
    sc_signal< sc_lv<4> > p_Result_43_fu_505_p4;
    sc_signal< sc_lv<4> > p_Result_44_fu_520_p4;
    sc_signal< sc_lv<4> > zext_ln215_1_fu_539_p1;
    sc_signal< sc_lv<4> > zext_ln215_fu_535_p1;
    sc_signal< sc_lv<4> > zext_ln215_3_fu_553_p1;
    sc_signal< sc_lv<4> > zext_ln215_2_fu_549_p1;
    sc_signal< sc_lv<4> > zext_ln215_5_fu_567_p1;
    sc_signal< sc_lv<4> > zext_ln215_4_fu_563_p1;
    sc_signal< sc_lv<4> > zext_ln215_7_fu_581_p1;
    sc_signal< sc_lv<4> > zext_ln215_6_fu_577_p1;
    sc_signal< sc_lv<4> > zext_ln215_9_fu_595_p1;
    sc_signal< sc_lv<4> > zext_ln215_8_fu_591_p1;
    sc_signal< sc_lv<4> > zext_ln215_11_fu_609_p1;
    sc_signal< sc_lv<4> > zext_ln215_10_fu_605_p1;
    sc_signal< sc_lv<4> > zext_ln215_13_fu_623_p1;
    sc_signal< sc_lv<4> > zext_ln215_12_fu_619_p1;
    sc_signal< sc_lv<4> > zext_ln215_15_fu_637_p1;
    sc_signal< sc_lv<4> > zext_ln215_14_fu_633_p1;
    sc_signal< sc_lv<5> > rhs_V_fu_650_p1;
    sc_signal< sc_lv<5> > lhs_V_fu_647_p1;
    sc_signal< sc_lv<5> > rhs_V_8_fu_662_p1;
    sc_signal< sc_lv<5> > lhs_V_6_fu_659_p1;
    sc_signal< sc_lv<5> > rhs_V_9_fu_674_p1;
    sc_signal< sc_lv<5> > lhs_V_7_fu_671_p1;
    sc_signal< sc_lv<5> > rhs_V_10_fu_686_p1;
    sc_signal< sc_lv<5> > lhs_V_8_fu_683_p1;
    sc_signal< sc_lv<5> > ret_V_fu_653_p2;
    sc_signal< sc_lv<5> > ret_V_7_fu_665_p2;
    sc_signal< sc_lv<6> > rhs_V_11_fu_699_p1;
    sc_signal< sc_lv<6> > lhs_V_9_fu_695_p1;
    sc_signal< sc_lv<6> > rhs_V_12_fu_712_p1;
    sc_signal< sc_lv<6> > lhs_V_10_fu_709_p1;
    sc_signal< sc_lv<6> > add_ln214_2_fu_715_p2;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0_0to2;
    sc_signal< sc_logic > ap_reset_idle_pp0;
    sc_signal< sc_logic > ap_reset_start_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_fsm_pp0_stage0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_0;
    static const sc_lv<64> ap_const_lv64_FFFFFFFFFFFFFFFF;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_23;
    static const sc_lv<32> ap_const_lv32_24;
    static const sc_lv<32> ap_const_lv32_27;
    static const sc_lv<32> ap_const_lv32_28;
    static const sc_lv<32> ap_const_lv32_2B;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<32> ap_const_lv32_33;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<32> ap_const_lv32_37;
    static const sc_lv<32> ap_const_lv32_38;
    static const sc_lv<32> ap_const_lv32_3B;
    static const sc_lv<32> ap_const_lv32_3C;
    static const sc_lv<32> ap_const_lv32_3F;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add0_V_fu_543_p2();
    void thread_add1_V_fu_557_p2();
    void thread_add2_V_fu_571_p2();
    void thread_add3_V_fu_585_p2();
    void thread_add4_V_fu_599_p2();
    void thread_add5_V_fu_613_p2();
    void thread_add6_V_fu_627_p2();
    void thread_add7_V_fu_641_p2();
    void thread_add_ln214_1_fu_703_p2();
    void thread_add_ln214_2_fu_715_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1_pp0_stage0_iter0();
    void thread_ap_block_state2_pp0_stage0_iter1();
    void thread_ap_block_state3_pp0_stage0_iter2();
    void thread_ap_block_state4_pp0_stage0_iter3();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_reg_pp0_iter0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp0_0to2();
    void thread_ap_ready();
    void thread_ap_reset_idle_pp0();
    void thread_ap_reset_start_pp0();
    void thread_ap_return();
    void thread_lhs_V_10_fu_709_p1();
    void thread_lhs_V_6_fu_659_p1();
    void thread_lhs_V_7_fu_671_p1();
    void thread_lhs_V_8_fu_683_p1();
    void thread_lhs_V_9_fu_695_p1();
    void thread_lhs_V_fu_647_p1();
    void thread_lut16_V_1_address0();
    void thread_lut16_V_1_address1();
    void thread_lut16_V_1_address10();
    void thread_lut16_V_1_address11();
    void thread_lut16_V_1_address12();
    void thread_lut16_V_1_address13();
    void thread_lut16_V_1_address14();
    void thread_lut16_V_1_address15();
    void thread_lut16_V_1_address2();
    void thread_lut16_V_1_address3();
    void thread_lut16_V_1_address4();
    void thread_lut16_V_1_address5();
    void thread_lut16_V_1_address6();
    void thread_lut16_V_1_address7();
    void thread_lut16_V_1_address8();
    void thread_lut16_V_1_address9();
    void thread_lut16_V_1_ce0();
    void thread_lut16_V_1_ce1();
    void thread_lut16_V_1_ce10();
    void thread_lut16_V_1_ce11();
    void thread_lut16_V_1_ce12();
    void thread_lut16_V_1_ce13();
    void thread_lut16_V_1_ce14();
    void thread_lut16_V_1_ce15();
    void thread_lut16_V_1_ce2();
    void thread_lut16_V_1_ce3();
    void thread_lut16_V_1_ce4();
    void thread_lut16_V_1_ce5();
    void thread_lut16_V_1_ce6();
    void thread_lut16_V_1_ce7();
    void thread_lut16_V_1_ce8();
    void thread_lut16_V_1_ce9();
    void thread_p_Result_31_fu_325_p4();
    void thread_p_Result_32_fu_340_p4();
    void thread_p_Result_33_fu_355_p4();
    void thread_p_Result_34_fu_370_p4();
    void thread_p_Result_35_fu_385_p4();
    void thread_p_Result_36_fu_400_p4();
    void thread_p_Result_37_fu_415_p4();
    void thread_p_Result_38_fu_430_p4();
    void thread_p_Result_39_fu_445_p4();
    void thread_p_Result_40_fu_460_p4();
    void thread_p_Result_41_fu_475_p4();
    void thread_p_Result_42_fu_490_p4();
    void thread_p_Result_43_fu_505_p4();
    void thread_p_Result_44_fu_520_p4();
    void thread_p_Result_s_fu_310_p4();
    void thread_r_V_fu_295_p2();
    void thread_ret_V_7_fu_665_p2();
    void thread_ret_V_8_fu_677_p2();
    void thread_ret_V_9_fu_689_p2();
    void thread_ret_V_fu_653_p2();
    void thread_rhs_V_10_fu_686_p1();
    void thread_rhs_V_11_fu_699_p1();
    void thread_rhs_V_12_fu_712_p1();
    void thread_rhs_V_8_fu_662_p1();
    void thread_rhs_V_9_fu_674_p1();
    void thread_rhs_V_fu_650_p1();
    void thread_trunc_ln681_fu_301_p1();
    void thread_xor_ln769_fu_289_p2();
    void thread_zext_ln19_1_fu_320_p1();
    void thread_zext_ln19_fu_305_p1();
    void thread_zext_ln20_1_fu_350_p1();
    void thread_zext_ln20_fu_335_p1();
    void thread_zext_ln215_10_fu_605_p1();
    void thread_zext_ln215_11_fu_609_p1();
    void thread_zext_ln215_12_fu_619_p1();
    void thread_zext_ln215_13_fu_623_p1();
    void thread_zext_ln215_14_fu_633_p1();
    void thread_zext_ln215_15_fu_637_p1();
    void thread_zext_ln215_1_fu_539_p1();
    void thread_zext_ln215_2_fu_549_p1();
    void thread_zext_ln215_3_fu_553_p1();
    void thread_zext_ln215_4_fu_563_p1();
    void thread_zext_ln215_5_fu_567_p1();
    void thread_zext_ln215_6_fu_577_p1();
    void thread_zext_ln215_7_fu_581_p1();
    void thread_zext_ln215_8_fu_591_p1();
    void thread_zext_ln215_9_fu_595_p1();
    void thread_zext_ln215_fu_535_p1();
    void thread_zext_ln21_1_fu_380_p1();
    void thread_zext_ln21_fu_365_p1();
    void thread_zext_ln22_1_fu_410_p1();
    void thread_zext_ln22_fu_395_p1();
    void thread_zext_ln23_1_fu_440_p1();
    void thread_zext_ln23_fu_425_p1();
    void thread_zext_ln24_1_fu_470_p1();
    void thread_zext_ln24_fu_455_p1();
    void thread_zext_ln25_1_fu_500_p1();
    void thread_zext_ln25_fu_485_p1();
    void thread_zext_ln26_1_fu_530_p1();
    void thread_zext_ln26_fu_515_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
