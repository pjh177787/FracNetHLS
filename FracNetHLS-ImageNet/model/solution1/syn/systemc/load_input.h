// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _load_input_HH_
#define _load_input_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "FracNet_urem_7ns_bkb.h"
#include "FracNet_mac_muladcud.h"
#include "FracNet_mac_muladdEe.h"

namespace ap_rtl {

struct load_input : public sc_module {
    // Port declarations 59
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<5> > row;
    sc_in< sc_lv<5> > col;
    sc_in< sc_lv<3> > c;
    sc_out< sc_lv<7> > buf_V_address0;
    sc_out< sc_logic > buf_V_ce0;
    sc_out< sc_logic > buf_V_we0;
    sc_out< sc_lv<16> > buf_V_d0;
    sc_out< sc_logic > m_axi_img_V_AWVALID;
    sc_in< sc_logic > m_axi_img_V_AWREADY;
    sc_out< sc_lv<32> > m_axi_img_V_AWADDR;
    sc_out< sc_lv<1> > m_axi_img_V_AWID;
    sc_out< sc_lv<32> > m_axi_img_V_AWLEN;
    sc_out< sc_lv<3> > m_axi_img_V_AWSIZE;
    sc_out< sc_lv<2> > m_axi_img_V_AWBURST;
    sc_out< sc_lv<2> > m_axi_img_V_AWLOCK;
    sc_out< sc_lv<4> > m_axi_img_V_AWCACHE;
    sc_out< sc_lv<3> > m_axi_img_V_AWPROT;
    sc_out< sc_lv<4> > m_axi_img_V_AWQOS;
    sc_out< sc_lv<4> > m_axi_img_V_AWREGION;
    sc_out< sc_lv<1> > m_axi_img_V_AWUSER;
    sc_out< sc_logic > m_axi_img_V_WVALID;
    sc_in< sc_logic > m_axi_img_V_WREADY;
    sc_out< sc_lv<16> > m_axi_img_V_WDATA;
    sc_out< sc_lv<2> > m_axi_img_V_WSTRB;
    sc_out< sc_logic > m_axi_img_V_WLAST;
    sc_out< sc_lv<1> > m_axi_img_V_WID;
    sc_out< sc_lv<1> > m_axi_img_V_WUSER;
    sc_out< sc_logic > m_axi_img_V_ARVALID;
    sc_in< sc_logic > m_axi_img_V_ARREADY;
    sc_out< sc_lv<32> > m_axi_img_V_ARADDR;
    sc_out< sc_lv<1> > m_axi_img_V_ARID;
    sc_out< sc_lv<32> > m_axi_img_V_ARLEN;
    sc_out< sc_lv<3> > m_axi_img_V_ARSIZE;
    sc_out< sc_lv<2> > m_axi_img_V_ARBURST;
    sc_out< sc_lv<2> > m_axi_img_V_ARLOCK;
    sc_out< sc_lv<4> > m_axi_img_V_ARCACHE;
    sc_out< sc_lv<3> > m_axi_img_V_ARPROT;
    sc_out< sc_lv<4> > m_axi_img_V_ARQOS;
    sc_out< sc_lv<4> > m_axi_img_V_ARREGION;
    sc_out< sc_lv<1> > m_axi_img_V_ARUSER;
    sc_in< sc_logic > m_axi_img_V_RVALID;
    sc_out< sc_logic > m_axi_img_V_RREADY;
    sc_in< sc_lv<16> > m_axi_img_V_RDATA;
    sc_in< sc_logic > m_axi_img_V_RLAST;
    sc_in< sc_lv<1> > m_axi_img_V_RID;
    sc_in< sc_lv<1> > m_axi_img_V_RUSER;
    sc_in< sc_lv<2> > m_axi_img_V_RRESP;
    sc_in< sc_logic > m_axi_img_V_BVALID;
    sc_out< sc_logic > m_axi_img_V_BREADY;
    sc_in< sc_lv<2> > m_axi_img_V_BRESP;
    sc_in< sc_lv<1> > m_axi_img_V_BID;
    sc_in< sc_lv<1> > m_axi_img_V_BUSER;
    sc_in< sc_lv<31> > img_V_offset;


    // Module declarations
    load_input(sc_module_name name);
    SC_HAS_PROCESS(load_input);

    ~load_input();

    sc_trace_file* mVcdFile;

    FracNet_urem_7ns_bkb<1,11,7,5,7>* FracNet_urem_7ns_bkb_U1;
    FracNet_mac_muladcud<1,1,3,17,9,20>* FracNet_mac_muladcud_U2;
    FracNet_mac_muladdEe<1,1,9,9,20,20>* FracNet_mac_muladdEe_U3;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > img_V_blk_n_AR;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter12;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > empty_40_reg_424;
    sc_signal< sc_logic > img_V_blk_n_R;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter19;
    sc_signal< sc_lv<1> > icmp_ln356_reg_377;
    sc_signal< sc_lv<1> > icmp_ln356_reg_377_pp0_iter18_reg;
    sc_signal< sc_lv<7> > indvar_flatten_reg_130;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter5;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter6;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter7;
    sc_signal< bool > ap_block_state11_pp0_stage0_iter8;
    sc_signal< bool > ap_block_state12_pp0_stage0_iter9;
    sc_signal< bool > ap_block_state13_pp0_stage0_iter10;
    sc_signal< bool > ap_block_state14_pp0_stage0_iter11;
    sc_signal< bool > ap_block_state15_pp0_stage0_iter12;
    sc_signal< bool > ap_block_state15_io;
    sc_signal< bool > ap_block_state16_pp0_stage0_iter13;
    sc_signal< bool > ap_block_state17_pp0_stage0_iter14;
    sc_signal< bool > ap_block_state18_pp0_stage0_iter15;
    sc_signal< bool > ap_block_state19_pp0_stage0_iter16;
    sc_signal< bool > ap_block_state20_pp0_stage0_iter17;
    sc_signal< bool > ap_block_state21_pp0_stage0_iter18;
    sc_signal< bool > ap_block_state22_pp0_stage0_iter19;
    sc_signal< bool > ap_block_state23_pp0_stage0_iter20;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<4> > mm_0_reg_142;
    sc_signal< sc_lv<4> > nn_0_reg_154;
    sc_signal< sc_lv<9> > sub_ln365_1_fu_182_p2;
    sc_signal< sc_lv<9> > sub_ln365_1_reg_357;
    sc_signal< sc_lv<9> > sub_ln365_fu_208_p2;
    sc_signal< sc_lv<9> > sub_ln365_reg_362;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<20> > grp_fu_342_p3;
    sc_signal< sc_lv<20> > add_ln365_reg_367;
    sc_signal< sc_lv<33> > zext_ln356_1_fu_217_p1;
    sc_signal< sc_lv<33> > zext_ln356_1_reg_372;
    sc_signal< sc_lv<1> > icmp_ln356_fu_221_p2;
    sc_signal< sc_lv<1> > icmp_ln356_reg_377_pp0_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln356_reg_377_pp0_iter2_reg;
    sc_signal< sc_lv<1> > icmp_ln356_reg_377_pp0_iter3_reg;
    sc_signal< sc_lv<1> > icmp_ln356_reg_377_pp0_iter4_reg;
    sc_signal< sc_lv<1> > icmp_ln356_reg_377_pp0_iter5_reg;
    sc_signal< sc_lv<1> > icmp_ln356_reg_377_pp0_iter6_reg;
    sc_signal< sc_lv<1> > icmp_ln356_reg_377_pp0_iter7_reg;
    sc_signal< sc_lv<1> > icmp_ln356_reg_377_pp0_iter8_reg;
    sc_signal< sc_lv<1> > icmp_ln356_reg_377_pp0_iter9_reg;
    sc_signal< sc_lv<1> > icmp_ln356_reg_377_pp0_iter10_reg;
    sc_signal< sc_lv<1> > icmp_ln356_reg_377_pp0_iter11_reg;
    sc_signal< sc_lv<1> > icmp_ln356_reg_377_pp0_iter12_reg;
    sc_signal< sc_lv<1> > icmp_ln356_reg_377_pp0_iter13_reg;
    sc_signal< sc_lv<1> > icmp_ln356_reg_377_pp0_iter14_reg;
    sc_signal< sc_lv<1> > icmp_ln356_reg_377_pp0_iter15_reg;
    sc_signal< sc_lv<1> > icmp_ln356_reg_377_pp0_iter16_reg;
    sc_signal< sc_lv<1> > icmp_ln356_reg_377_pp0_iter17_reg;
    sc_signal< sc_lv<1> > icmp_ln356_reg_377_pp0_iter19_reg;
    sc_signal< sc_lv<7> > add_ln356_2_fu_227_p2;
    sc_signal< sc_lv<7> > add_ln356_2_reg_381;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<4> > select_ln356_fu_251_p3;
    sc_signal< sc_lv<4> > select_ln356_reg_386;
    sc_signal< sc_lv<4> > select_ln356_reg_386_pp0_iter10_reg;
    sc_signal< sc_lv<4> > select_ln356_reg_386_pp0_iter11_reg;
    sc_signal< sc_lv<4> > select_ln356_reg_386_pp0_iter12_reg;
    sc_signal< sc_lv<4> > select_ln356_reg_386_pp0_iter13_reg;
    sc_signal< sc_lv<4> > select_ln356_reg_386_pp0_iter14_reg;
    sc_signal< sc_lv<4> > select_ln356_reg_386_pp0_iter15_reg;
    sc_signal< sc_lv<4> > select_ln356_reg_386_pp0_iter16_reg;
    sc_signal< sc_lv<4> > select_ln356_reg_386_pp0_iter17_reg;
    sc_signal< sc_lv<4> > select_ln356_reg_386_pp0_iter18_reg;
    sc_signal< sc_lv<4> > select_ln356_1_fu_259_p3;
    sc_signal< sc_lv<4> > select_ln356_1_reg_391;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter9;
    sc_signal< sc_lv<4> > select_ln356_1_reg_391_pp0_iter10_reg;
    sc_signal< sc_lv<4> > select_ln356_1_reg_391_pp0_iter11_reg;
    sc_signal< sc_lv<4> > select_ln356_1_reg_391_pp0_iter12_reg;
    sc_signal< sc_lv<4> > select_ln356_1_reg_391_pp0_iter13_reg;
    sc_signal< sc_lv<4> > select_ln356_1_reg_391_pp0_iter14_reg;
    sc_signal< sc_lv<4> > select_ln356_1_reg_391_pp0_iter15_reg;
    sc_signal< sc_lv<4> > select_ln356_1_reg_391_pp0_iter16_reg;
    sc_signal< sc_lv<4> > select_ln356_1_reg_391_pp0_iter17_reg;
    sc_signal< sc_lv<4> > select_ln356_1_reg_391_pp0_iter18_reg;
    sc_signal< sc_lv<9> > add_ln356_fu_271_p2;
    sc_signal< sc_lv<9> > add_ln356_reg_398;
    sc_signal< sc_lv<4> > nn_fu_276_p2;
    sc_signal< sc_lv<4> > nn_reg_403;
    sc_signal< sc_lv<20> > grp_fu_350_p3;
    sc_signal< sc_lv<20> > add_ln356_1_reg_408;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter10;
    sc_signal< sc_lv<7> > grp_fu_233_p2;
    sc_signal< sc_lv<7> > empty_39_reg_413;
    sc_signal< sc_lv<32> > img_V_addr_reg_418;
    sc_signal< sc_lv<1> > empty_40_fu_303_p2;
    sc_signal< sc_lv<7> > buf_V_addr_reg_428;
    sc_signal< sc_lv<16> > img_V_addr_read_reg_433;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter6;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter7;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter8;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter11;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter13;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter14;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter15;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter16;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter17;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter18;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter20;
    sc_signal< sc_lv<7> > ap_phi_mux_indvar_flatten_phi_fu_134_p4;
    sc_signal< sc_lv<4> > ap_phi_mux_mm_0_phi_fu_146_p4;
    sc_signal< sc_lv<4> > ap_phi_mux_nn_0_phi_fu_158_p4;
    sc_signal< sc_lv<64> > zext_ln321_6_fu_337_p1;
    sc_signal< sc_lv<64> > sext_ln321_fu_293_p1;
    sc_signal< sc_lv<8> > shl_ln365_1_fu_166_p3;
    sc_signal< sc_lv<9> > zext_ln365_3_fu_174_p1;
    sc_signal< sc_lv<9> > zext_ln365_4_fu_178_p1;
    sc_signal< sc_lv<8> > shl_ln_fu_192_p3;
    sc_signal< sc_lv<9> > zext_ln365_1_fu_200_p1;
    sc_signal< sc_lv<9> > zext_ln365_2_fu_204_p1;
    sc_signal< sc_lv<5> > grp_fu_233_p1;
    sc_signal< sc_lv<1> > icmp_ln357_fu_245_p2;
    sc_signal< sc_lv<4> > mm_fu_239_p2;
    sc_signal< sc_lv<9> > zext_ln356_fu_267_p1;
    sc_signal< sc_lv<33> > sext_ln357_fu_285_p1;
    sc_signal< sc_lv<33> > add_ln321_2_fu_288_p2;
    sc_signal< sc_lv<7> > tmp_s_fu_311_p3;
    sc_signal< sc_lv<8> > zext_ln321_fu_308_p1;
    sc_signal< sc_lv<8> > zext_ln321_4_fu_318_p1;
    sc_signal< sc_lv<8> > add_ln321_fu_322_p2;
    sc_signal< sc_lv<8> > zext_ln321_5_fu_328_p1;
    sc_signal< sc_lv<8> > add_ln321_1_fu_331_p2;
    sc_signal< sc_lv<3> > grp_fu_342_p0;
    sc_signal< sc_lv<17> > grp_fu_342_p1;
    sc_signal< sc_lv<9> > grp_fu_350_p1;
    sc_signal< sc_logic > grp_fu_233_ce;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<20> > grp_fu_342_p00;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_state1;
    static const sc_lv<4> ap_ST_fsm_state2;
    static const sc_lv<4> ap_ST_fsm_pp0_stage0;
    static const sc_lv<4> ap_ST_fsm_state24;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<16> ap_const_lv16_0;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<7> ap_const_lv7_51;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<7> ap_const_lv7_9;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<4> ap_const_lv4_9;
    static const sc_lv<20> ap_const_lv20_C784;
    static const sc_lv<17> ap_const_lv17_E4;
    static const sc_lv<32> ap_const_lv32_3;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln321_1_fu_331_p2();
    void thread_add_ln321_2_fu_288_p2();
    void thread_add_ln321_fu_322_p2();
    void thread_add_ln356_2_fu_227_p2();
    void thread_add_ln356_fu_271_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state24();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state10_pp0_stage0_iter7();
    void thread_ap_block_state11_pp0_stage0_iter8();
    void thread_ap_block_state12_pp0_stage0_iter9();
    void thread_ap_block_state13_pp0_stage0_iter10();
    void thread_ap_block_state14_pp0_stage0_iter11();
    void thread_ap_block_state15_io();
    void thread_ap_block_state15_pp0_stage0_iter12();
    void thread_ap_block_state16_pp0_stage0_iter13();
    void thread_ap_block_state17_pp0_stage0_iter14();
    void thread_ap_block_state18_pp0_stage0_iter15();
    void thread_ap_block_state19_pp0_stage0_iter16();
    void thread_ap_block_state20_pp0_stage0_iter17();
    void thread_ap_block_state21_pp0_stage0_iter18();
    void thread_ap_block_state22_pp0_stage0_iter19();
    void thread_ap_block_state23_pp0_stage0_iter20();
    void thread_ap_block_state3_pp0_stage0_iter0();
    void thread_ap_block_state4_pp0_stage0_iter1();
    void thread_ap_block_state5_pp0_stage0_iter2();
    void thread_ap_block_state6_pp0_stage0_iter3();
    void thread_ap_block_state7_pp0_stage0_iter4();
    void thread_ap_block_state8_pp0_stage0_iter5();
    void thread_ap_block_state9_pp0_stage0_iter6();
    void thread_ap_condition_pp0_exit_iter0_state3();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_indvar_flatten_phi_fu_134_p4();
    void thread_ap_phi_mux_mm_0_phi_fu_146_p4();
    void thread_ap_phi_mux_nn_0_phi_fu_158_p4();
    void thread_ap_ready();
    void thread_buf_V_address0();
    void thread_buf_V_ce0();
    void thread_buf_V_d0();
    void thread_buf_V_we0();
    void thread_empty_40_fu_303_p2();
    void thread_grp_fu_233_ce();
    void thread_grp_fu_233_p1();
    void thread_grp_fu_342_p0();
    void thread_grp_fu_342_p00();
    void thread_grp_fu_342_p1();
    void thread_grp_fu_350_p1();
    void thread_icmp_ln356_fu_221_p2();
    void thread_icmp_ln357_fu_245_p2();
    void thread_img_V_blk_n_AR();
    void thread_img_V_blk_n_R();
    void thread_m_axi_img_V_ARADDR();
    void thread_m_axi_img_V_ARBURST();
    void thread_m_axi_img_V_ARCACHE();
    void thread_m_axi_img_V_ARID();
    void thread_m_axi_img_V_ARLEN();
    void thread_m_axi_img_V_ARLOCK();
    void thread_m_axi_img_V_ARPROT();
    void thread_m_axi_img_V_ARQOS();
    void thread_m_axi_img_V_ARREGION();
    void thread_m_axi_img_V_ARSIZE();
    void thread_m_axi_img_V_ARUSER();
    void thread_m_axi_img_V_ARVALID();
    void thread_m_axi_img_V_AWADDR();
    void thread_m_axi_img_V_AWBURST();
    void thread_m_axi_img_V_AWCACHE();
    void thread_m_axi_img_V_AWID();
    void thread_m_axi_img_V_AWLEN();
    void thread_m_axi_img_V_AWLOCK();
    void thread_m_axi_img_V_AWPROT();
    void thread_m_axi_img_V_AWQOS();
    void thread_m_axi_img_V_AWREGION();
    void thread_m_axi_img_V_AWSIZE();
    void thread_m_axi_img_V_AWUSER();
    void thread_m_axi_img_V_AWVALID();
    void thread_m_axi_img_V_BREADY();
    void thread_m_axi_img_V_RREADY();
    void thread_m_axi_img_V_WDATA();
    void thread_m_axi_img_V_WID();
    void thread_m_axi_img_V_WLAST();
    void thread_m_axi_img_V_WSTRB();
    void thread_m_axi_img_V_WUSER();
    void thread_m_axi_img_V_WVALID();
    void thread_mm_fu_239_p2();
    void thread_nn_fu_276_p2();
    void thread_select_ln356_1_fu_259_p3();
    void thread_select_ln356_fu_251_p3();
    void thread_sext_ln321_fu_293_p1();
    void thread_sext_ln357_fu_285_p1();
    void thread_shl_ln365_1_fu_166_p3();
    void thread_shl_ln_fu_192_p3();
    void thread_sub_ln365_1_fu_182_p2();
    void thread_sub_ln365_fu_208_p2();
    void thread_tmp_s_fu_311_p3();
    void thread_zext_ln321_4_fu_318_p1();
    void thread_zext_ln321_5_fu_328_p1();
    void thread_zext_ln321_6_fu_337_p1();
    void thread_zext_ln321_fu_308_p1();
    void thread_zext_ln356_1_fu_217_p1();
    void thread_zext_ln356_fu_267_p1();
    void thread_zext_ln365_1_fu_200_p1();
    void thread_zext_ln365_2_fu_204_p1();
    void thread_zext_ln365_3_fu_174_p1();
    void thread_zext_ln365_4_fu_178_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif