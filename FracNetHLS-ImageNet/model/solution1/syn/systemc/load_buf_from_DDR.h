// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _load_buf_from_DDR_HH_
#define _load_buf_from_DDR_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "FracNet_urem_6ns_hbi.h"
#include "FracNet_mul_mul_1ibs.h"
#include "FracNet_mac_muladjbC.h"

namespace ap_rtl {

struct load_buf_from_DDR : public sc_module {
    // Port declarations 183
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > m_axi_src_V_AWVALID;
    sc_in< sc_logic > m_axi_src_V_AWREADY;
    sc_out< sc_lv<32> > m_axi_src_V_AWADDR;
    sc_out< sc_lv<1> > m_axi_src_V_AWID;
    sc_out< sc_lv<32> > m_axi_src_V_AWLEN;
    sc_out< sc_lv<3> > m_axi_src_V_AWSIZE;
    sc_out< sc_lv<2> > m_axi_src_V_AWBURST;
    sc_out< sc_lv<2> > m_axi_src_V_AWLOCK;
    sc_out< sc_lv<4> > m_axi_src_V_AWCACHE;
    sc_out< sc_lv<3> > m_axi_src_V_AWPROT;
    sc_out< sc_lv<4> > m_axi_src_V_AWQOS;
    sc_out< sc_lv<4> > m_axi_src_V_AWREGION;
    sc_out< sc_lv<1> > m_axi_src_V_AWUSER;
    sc_out< sc_logic > m_axi_src_V_WVALID;
    sc_in< sc_logic > m_axi_src_V_WREADY;
    sc_out< sc_lv<512> > m_axi_src_V_WDATA;
    sc_out< sc_lv<64> > m_axi_src_V_WSTRB;
    sc_out< sc_logic > m_axi_src_V_WLAST;
    sc_out< sc_lv<1> > m_axi_src_V_WID;
    sc_out< sc_lv<1> > m_axi_src_V_WUSER;
    sc_out< sc_logic > m_axi_src_V_ARVALID;
    sc_in< sc_logic > m_axi_src_V_ARREADY;
    sc_out< sc_lv<32> > m_axi_src_V_ARADDR;
    sc_out< sc_lv<1> > m_axi_src_V_ARID;
    sc_out< sc_lv<32> > m_axi_src_V_ARLEN;
    sc_out< sc_lv<3> > m_axi_src_V_ARSIZE;
    sc_out< sc_lv<2> > m_axi_src_V_ARBURST;
    sc_out< sc_lv<2> > m_axi_src_V_ARLOCK;
    sc_out< sc_lv<4> > m_axi_src_V_ARCACHE;
    sc_out< sc_lv<3> > m_axi_src_V_ARPROT;
    sc_out< sc_lv<4> > m_axi_src_V_ARQOS;
    sc_out< sc_lv<4> > m_axi_src_V_ARREGION;
    sc_out< sc_lv<1> > m_axi_src_V_ARUSER;
    sc_in< sc_logic > m_axi_src_V_RVALID;
    sc_out< sc_logic > m_axi_src_V_RREADY;
    sc_in< sc_lv<512> > m_axi_src_V_RDATA;
    sc_in< sc_logic > m_axi_src_V_RLAST;
    sc_in< sc_lv<1> > m_axi_src_V_RID;
    sc_in< sc_lv<1> > m_axi_src_V_RUSER;
    sc_in< sc_lv<2> > m_axi_src_V_RRESP;
    sc_in< sc_logic > m_axi_src_V_BVALID;
    sc_out< sc_logic > m_axi_src_V_BREADY;
    sc_in< sc_lv<2> > m_axi_src_V_BRESP;
    sc_in< sc_lv<1> > m_axi_src_V_BID;
    sc_in< sc_lv<1> > m_axi_src_V_BUSER;
    sc_in< sc_lv<26> > src_V_offset;
    sc_out< sc_lv<7> > dest_0_V_address0;
    sc_out< sc_logic > dest_0_V_ce0;
    sc_out< sc_logic > dest_0_V_we0;
    sc_out< sc_lv<9> > dest_0_V_d0;
    sc_out< sc_lv<7> > dest_1_V_address0;
    sc_out< sc_logic > dest_1_V_ce0;
    sc_out< sc_logic > dest_1_V_we0;
    sc_out< sc_lv<9> > dest_1_V_d0;
    sc_out< sc_lv<7> > dest_2_V_address0;
    sc_out< sc_logic > dest_2_V_ce0;
    sc_out< sc_logic > dest_2_V_we0;
    sc_out< sc_lv<9> > dest_2_V_d0;
    sc_out< sc_lv<7> > dest_3_V_address0;
    sc_out< sc_logic > dest_3_V_ce0;
    sc_out< sc_logic > dest_3_V_we0;
    sc_out< sc_lv<9> > dest_3_V_d0;
    sc_out< sc_lv<7> > dest_4_V_address0;
    sc_out< sc_logic > dest_4_V_ce0;
    sc_out< sc_logic > dest_4_V_we0;
    sc_out< sc_lv<9> > dest_4_V_d0;
    sc_out< sc_lv<7> > dest_5_V_address0;
    sc_out< sc_logic > dest_5_V_ce0;
    sc_out< sc_logic > dest_5_V_we0;
    sc_out< sc_lv<9> > dest_5_V_d0;
    sc_out< sc_lv<7> > dest_6_V_address0;
    sc_out< sc_logic > dest_6_V_ce0;
    sc_out< sc_logic > dest_6_V_we0;
    sc_out< sc_lv<9> > dest_6_V_d0;
    sc_out< sc_lv<7> > dest_7_V_address0;
    sc_out< sc_logic > dest_7_V_ce0;
    sc_out< sc_logic > dest_7_V_we0;
    sc_out< sc_lv<9> > dest_7_V_d0;
    sc_out< sc_lv<7> > dest_8_V_address0;
    sc_out< sc_logic > dest_8_V_ce0;
    sc_out< sc_logic > dest_8_V_we0;
    sc_out< sc_lv<9> > dest_8_V_d0;
    sc_out< sc_lv<7> > dest_9_V_address0;
    sc_out< sc_logic > dest_9_V_ce0;
    sc_out< sc_logic > dest_9_V_we0;
    sc_out< sc_lv<9> > dest_9_V_d0;
    sc_out< sc_lv<7> > dest_10_V_address0;
    sc_out< sc_logic > dest_10_V_ce0;
    sc_out< sc_logic > dest_10_V_we0;
    sc_out< sc_lv<9> > dest_10_V_d0;
    sc_out< sc_lv<7> > dest_11_V_address0;
    sc_out< sc_logic > dest_11_V_ce0;
    sc_out< sc_logic > dest_11_V_we0;
    sc_out< sc_lv<9> > dest_11_V_d0;
    sc_out< sc_lv<7> > dest_12_V_address0;
    sc_out< sc_logic > dest_12_V_ce0;
    sc_out< sc_logic > dest_12_V_we0;
    sc_out< sc_lv<9> > dest_12_V_d0;
    sc_out< sc_lv<7> > dest_13_V_address0;
    sc_out< sc_logic > dest_13_V_ce0;
    sc_out< sc_logic > dest_13_V_we0;
    sc_out< sc_lv<9> > dest_13_V_d0;
    sc_out< sc_lv<7> > dest_14_V_address0;
    sc_out< sc_logic > dest_14_V_ce0;
    sc_out< sc_logic > dest_14_V_we0;
    sc_out< sc_lv<9> > dest_14_V_d0;
    sc_out< sc_lv<7> > dest_15_V_address0;
    sc_out< sc_logic > dest_15_V_ce0;
    sc_out< sc_logic > dest_15_V_we0;
    sc_out< sc_lv<9> > dest_15_V_d0;
    sc_out< sc_lv<7> > dest_16_V_address0;
    sc_out< sc_logic > dest_16_V_ce0;
    sc_out< sc_logic > dest_16_V_we0;
    sc_out< sc_lv<9> > dest_16_V_d0;
    sc_out< sc_lv<7> > dest_17_V_address0;
    sc_out< sc_logic > dest_17_V_ce0;
    sc_out< sc_logic > dest_17_V_we0;
    sc_out< sc_lv<9> > dest_17_V_d0;
    sc_out< sc_lv<7> > dest_18_V_address0;
    sc_out< sc_logic > dest_18_V_ce0;
    sc_out< sc_logic > dest_18_V_we0;
    sc_out< sc_lv<9> > dest_18_V_d0;
    sc_out< sc_lv<7> > dest_19_V_address0;
    sc_out< sc_logic > dest_19_V_ce0;
    sc_out< sc_logic > dest_19_V_we0;
    sc_out< sc_lv<9> > dest_19_V_d0;
    sc_out< sc_lv<7> > dest_20_V_address0;
    sc_out< sc_logic > dest_20_V_ce0;
    sc_out< sc_logic > dest_20_V_we0;
    sc_out< sc_lv<9> > dest_20_V_d0;
    sc_out< sc_lv<7> > dest_21_V_address0;
    sc_out< sc_logic > dest_21_V_ce0;
    sc_out< sc_logic > dest_21_V_we0;
    sc_out< sc_lv<9> > dest_21_V_d0;
    sc_out< sc_lv<7> > dest_22_V_address0;
    sc_out< sc_logic > dest_22_V_ce0;
    sc_out< sc_logic > dest_22_V_we0;
    sc_out< sc_lv<9> > dest_22_V_d0;
    sc_out< sc_lv<7> > dest_23_V_address0;
    sc_out< sc_logic > dest_23_V_ce0;
    sc_out< sc_logic > dest_23_V_we0;
    sc_out< sc_lv<9> > dest_23_V_d0;
    sc_out< sc_lv<7> > dest_24_V_address0;
    sc_out< sc_logic > dest_24_V_ce0;
    sc_out< sc_logic > dest_24_V_we0;
    sc_out< sc_lv<9> > dest_24_V_d0;
    sc_out< sc_lv<7> > dest_25_V_address0;
    sc_out< sc_logic > dest_25_V_ce0;
    sc_out< sc_logic > dest_25_V_we0;
    sc_out< sc_lv<9> > dest_25_V_d0;
    sc_out< sc_lv<7> > dest_26_V_address0;
    sc_out< sc_logic > dest_26_V_ce0;
    sc_out< sc_logic > dest_26_V_we0;
    sc_out< sc_lv<9> > dest_26_V_d0;
    sc_out< sc_lv<7> > dest_27_V_address0;
    sc_out< sc_logic > dest_27_V_ce0;
    sc_out< sc_logic > dest_27_V_we0;
    sc_out< sc_lv<9> > dest_27_V_d0;
    sc_out< sc_lv<7> > dest_28_V_address0;
    sc_out< sc_logic > dest_28_V_ce0;
    sc_out< sc_logic > dest_28_V_we0;
    sc_out< sc_lv<9> > dest_28_V_d0;
    sc_out< sc_lv<7> > dest_29_V_address0;
    sc_out< sc_logic > dest_29_V_ce0;
    sc_out< sc_logic > dest_29_V_we0;
    sc_out< sc_lv<9> > dest_29_V_d0;
    sc_out< sc_lv<7> > dest_30_V_address0;
    sc_out< sc_logic > dest_30_V_ce0;
    sc_out< sc_logic > dest_30_V_we0;
    sc_out< sc_lv<9> > dest_30_V_d0;
    sc_out< sc_lv<7> > dest_31_V_address0;
    sc_out< sc_logic > dest_31_V_ce0;
    sc_out< sc_logic > dest_31_V_we0;
    sc_out< sc_lv<9> > dest_31_V_d0;
    sc_in< sc_lv<5> > row_offset;
    sc_in< sc_lv<5> > col_offset;
    sc_in< sc_lv<6> > ch_offset;


    // Module declarations
    load_buf_from_DDR(sc_module_name name);
    SC_HAS_PROCESS(load_buf_from_DDR);

    ~load_buf_from_DDR();

    sc_trace_file* mVcdFile;

    FracNet_urem_6ns_hbi<1,10,6,4,6>* FracNet_urem_6ns_hbi_U432;
    FracNet_mul_mul_1ibs<1,1,15,6,19>* FracNet_mul_mul_1ibs_U433;
    FracNet_mac_muladjbC<1,1,11,5,19,19>* FracNet_mac_muladjbC_U434;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > src_V_blk_n_AR;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter10;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > empty_44_reg_1372;
    sc_signal< sc_logic > src_V_blk_n_R;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter17;
    sc_signal< sc_lv<1> > icmp_ln93_reg_1333;
    sc_signal< sc_lv<1> > icmp_ln93_reg_1333_pp0_iter16_reg;
    sc_signal< sc_lv<6> > indvar_flatten_reg_720;
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
    sc_signal< bool > ap_block_state13_io;
    sc_signal< bool > ap_block_state14_pp0_stage0_iter11;
    sc_signal< bool > ap_block_state15_pp0_stage0_iter12;
    sc_signal< bool > ap_block_state16_pp0_stage0_iter13;
    sc_signal< bool > ap_block_state17_pp0_stage0_iter14;
    sc_signal< bool > ap_block_state18_pp0_stage0_iter15;
    sc_signal< bool > ap_block_state19_pp0_stage0_iter16;
    sc_signal< bool > ap_block_state20_pp0_stage0_iter17;
    sc_signal< bool > ap_block_state21_pp0_stage0_iter18;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<10> > src_ptr_0_rec_reg_732;
    sc_signal< sc_lv<4> > h_0_reg_744;
    sc_signal< sc_lv<4> > w_0_reg_756;
    sc_signal< sc_lv<19> > mul_ln91_fu_1299_p2;
    sc_signal< sc_lv<19> > mul_ln91_reg_1313;
    sc_signal< sc_lv<11> > sext_ln93_fu_802_p1;
    sc_signal< sc_lv<11> > sext_ln93_reg_1318;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<20> > zext_ln96_fu_806_p1;
    sc_signal< sc_lv<20> > zext_ln96_reg_1323;
    sc_signal< sc_lv<28> > zext_ln93_fu_809_p1;
    sc_signal< sc_lv<28> > zext_ln93_reg_1328;
    sc_signal< sc_lv<1> > icmp_ln93_fu_813_p2;
    sc_signal< sc_lv<1> > icmp_ln93_reg_1333_pp0_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln93_reg_1333_pp0_iter2_reg;
    sc_signal< sc_lv<1> > icmp_ln93_reg_1333_pp0_iter3_reg;
    sc_signal< sc_lv<1> > icmp_ln93_reg_1333_pp0_iter4_reg;
    sc_signal< sc_lv<1> > icmp_ln93_reg_1333_pp0_iter5_reg;
    sc_signal< sc_lv<1> > icmp_ln93_reg_1333_pp0_iter6_reg;
    sc_signal< sc_lv<1> > icmp_ln93_reg_1333_pp0_iter7_reg;
    sc_signal< sc_lv<1> > icmp_ln93_reg_1333_pp0_iter8_reg;
    sc_signal< sc_lv<1> > icmp_ln93_reg_1333_pp0_iter9_reg;
    sc_signal< sc_lv<1> > icmp_ln93_reg_1333_pp0_iter10_reg;
    sc_signal< sc_lv<1> > icmp_ln93_reg_1333_pp0_iter11_reg;
    sc_signal< sc_lv<1> > icmp_ln93_reg_1333_pp0_iter12_reg;
    sc_signal< sc_lv<1> > icmp_ln93_reg_1333_pp0_iter13_reg;
    sc_signal< sc_lv<1> > icmp_ln93_reg_1333_pp0_iter14_reg;
    sc_signal< sc_lv<1> > icmp_ln93_reg_1333_pp0_iter15_reg;
    sc_signal< sc_lv<1> > icmp_ln93_reg_1333_pp0_iter17_reg;
    sc_signal< sc_lv<6> > add_ln93_2_fu_819_p2;
    sc_signal< sc_lv<6> > add_ln93_2_reg_1337;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<1> > icmp_ln94_fu_837_p2;
    sc_signal< sc_lv<1> > icmp_ln94_reg_1342;
    sc_signal< sc_lv<1> > icmp_ln94_reg_1342_pp0_iter9_reg;
    sc_signal< sc_lv<1> > icmp_ln94_reg_1342_pp0_iter10_reg;
    sc_signal< sc_lv<1> > icmp_ln94_reg_1342_pp0_iter11_reg;
    sc_signal< sc_lv<1> > icmp_ln94_reg_1342_pp0_iter12_reg;
    sc_signal< sc_lv<1> > icmp_ln94_reg_1342_pp0_iter13_reg;
    sc_signal< sc_lv<1> > icmp_ln94_reg_1342_pp0_iter14_reg;
    sc_signal< sc_lv<1> > icmp_ln94_reg_1342_pp0_iter15_reg;
    sc_signal< sc_lv<1> > icmp_ln94_reg_1342_pp0_iter16_reg;
    sc_signal< sc_lv<4> > select_ln93_fu_843_p3;
    sc_signal< sc_lv<4> > select_ln93_reg_1347;
    sc_signal< sc_lv<4> > select_ln93_reg_1347_pp0_iter9_reg;
    sc_signal< sc_lv<4> > select_ln93_reg_1347_pp0_iter10_reg;
    sc_signal< sc_lv<4> > select_ln93_reg_1347_pp0_iter11_reg;
    sc_signal< sc_lv<4> > select_ln93_reg_1347_pp0_iter12_reg;
    sc_signal< sc_lv<4> > select_ln93_reg_1347_pp0_iter13_reg;
    sc_signal< sc_lv<4> > select_ln93_reg_1347_pp0_iter14_reg;
    sc_signal< sc_lv<4> > select_ln93_reg_1347_pp0_iter15_reg;
    sc_signal< sc_lv<4> > select_ln93_reg_1347_pp0_iter16_reg;
    sc_signal< sc_lv<4> > select_ln93_reg_1347_pp0_iter17_reg;
    sc_signal< sc_lv<10> > select_ln93_2_fu_851_p3;
    sc_signal< sc_lv<10> > select_ln93_2_reg_1352;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter8;
    sc_signal< sc_lv<11> > add_ln93_fu_863_p2;
    sc_signal< sc_lv<11> > add_ln93_reg_1357;
    sc_signal< sc_lv<4> > w_fu_868_p2;
    sc_signal< sc_lv<4> > w_reg_1362;
    sc_signal< sc_lv<28> > add_ln96_1_fu_886_p2;
    sc_signal< sc_lv<28> > add_ln96_1_reg_1367;
    sc_signal< sc_lv<1> > empty_44_fu_891_p2;
    sc_signal< sc_lv<4> > select_ln93_1_fu_913_p3;
    sc_signal< sc_lv<4> > select_ln93_1_reg_1382;
    sc_signal< sc_lv<9> > trunc_ln647_fu_920_p1;
    sc_signal< sc_lv<9> > trunc_ln647_reg_1389;
    sc_signal< sc_lv<9> > p_Result_1_reg_1394;
    sc_signal< sc_lv<9> > p_Result_2_reg_1399;
    sc_signal< sc_lv<9> > p_Result_3_reg_1404;
    sc_signal< sc_lv<9> > p_Result_4_reg_1409;
    sc_signal< sc_lv<9> > p_Result_5_reg_1414;
    sc_signal< sc_lv<9> > p_Result_6_reg_1419;
    sc_signal< sc_lv<9> > p_Result_7_reg_1424;
    sc_signal< sc_lv<9> > p_Result_8_reg_1429;
    sc_signal< sc_lv<9> > p_Result_9_reg_1434;
    sc_signal< sc_lv<9> > p_Result_s_reg_1439;
    sc_signal< sc_lv<9> > p_Result_10_reg_1444;
    sc_signal< sc_lv<9> > p_Result_11_reg_1449;
    sc_signal< sc_lv<9> > p_Result_12_reg_1454;
    sc_signal< sc_lv<9> > p_Result_13_reg_1459;
    sc_signal< sc_lv<9> > p_Result_14_reg_1464;
    sc_signal< sc_lv<9> > p_Result_15_reg_1469;
    sc_signal< sc_lv<9> > p_Result_16_reg_1474;
    sc_signal< sc_lv<9> > p_Result_17_reg_1479;
    sc_signal< sc_lv<9> > p_Result_18_reg_1484;
    sc_signal< sc_lv<9> > p_Result_19_reg_1489;
    sc_signal< sc_lv<9> > p_Result_20_reg_1494;
    sc_signal< sc_lv<9> > p_Result_21_reg_1499;
    sc_signal< sc_lv<9> > p_Result_22_reg_1504;
    sc_signal< sc_lv<9> > p_Result_23_reg_1509;
    sc_signal< sc_lv<9> > p_Result_24_reg_1514;
    sc_signal< sc_lv<9> > p_Result_25_reg_1519;
    sc_signal< sc_lv<9> > p_Result_26_reg_1524;
    sc_signal< sc_lv<9> > p_Result_27_reg_1529;
    sc_signal< sc_lv<9> > p_Result_28_reg_1534;
    sc_signal< sc_lv<9> > p_Result_29_reg_1539;
    sc_signal< sc_lv<9> > p_Result_30_reg_1544;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter6;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter7;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter9;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter11;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter12;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter13;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter14;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter15;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter16;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter18;
    sc_signal< sc_lv<6> > ap_phi_mux_indvar_flatten_phi_fu_724_p4;
    sc_signal< sc_lv<10> > ap_phi_mux_src_ptr_0_rec_phi_fu_736_p4;
    sc_signal< sc_lv<4> > ap_phi_mux_h_0_phi_fu_748_p4;
    sc_signal< sc_lv<4> > ap_phi_mux_w_0_phi_fu_760_p4;
    sc_signal< sc_lv<64> > zext_ln203_3_fu_1263_p1;
    sc_signal< sc_lv<64> > sext_ln96_fu_897_p1;
    sc_signal< sc_lv<4> > trunc_ln91_fu_776_p1;
    sc_signal< sc_lv<7> > shl_ln_fu_780_p3;
    sc_signal< sc_lv<8> > zext_ln91_3_fu_788_p1;
    sc_signal< sc_lv<8> > zext_ln91_4_fu_792_p1;
    sc_signal< sc_lv<8> > sub_ln91_fu_796_p2;
    sc_signal< sc_lv<19> > grp_fu_1305_p3;
    sc_signal< sc_lv<4> > grp_fu_825_p1;
    sc_signal< sc_lv<10> > add_ln104_fu_831_p2;
    sc_signal< sc_lv<11> > zext_ln93_1_fu_859_p1;
    sc_signal< sc_lv<20> > sext_ln93_1_fu_874_p1;
    sc_signal< sc_lv<20> > add_ln93_1_fu_877_p2;
    sc_signal< sc_lv<28> > sext_ln94_fu_882_p1;
    sc_signal< sc_lv<6> > grp_fu_825_p2;
    sc_signal< sc_lv<4> > h_fu_907_p2;
    sc_signal< sc_lv<7> > tmp_s_fu_1237_p3;
    sc_signal< sc_lv<8> > zext_ln203_fu_1234_p1;
    sc_signal< sc_lv<8> > zext_ln203_1_fu_1244_p1;
    sc_signal< sc_lv<8> > zext_ln203_2_fu_1254_p1;
    sc_signal< sc_lv<8> > add_ln203_fu_1248_p2;
    sc_signal< sc_lv<8> > add_ln203_1_fu_1257_p2;
    sc_signal< sc_lv<15> > mul_ln91_fu_1299_p0;
    sc_signal< sc_lv<6> > mul_ln91_fu_1299_p1;
    sc_signal< sc_lv<11> > grp_fu_1305_p0;
    sc_signal< sc_lv<5> > grp_fu_1305_p1;
    sc_signal< sc_logic > grp_fu_825_ce;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<16> > grp_fu_1305_p10;
    sc_signal< sc_lv<19> > mul_ln91_fu_1299_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_state1;
    static const sc_lv<4> ap_ST_fsm_state2;
    static const sc_lv<4> ap_ST_fsm_pp0_stage0;
    static const sc_lv<4> ap_ST_fsm_state22;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<512> ap_const_lv512_lc_1;
    static const sc_lv<64> ap_const_lv64_0;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<6> ap_const_lv6_31;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<6> ap_const_lv6_7;
    static const sc_lv<10> ap_const_lv10_72;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_28;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<32> ap_const_lv32_38;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<32> ap_const_lv32_48;
    static const sc_lv<32> ap_const_lv32_50;
    static const sc_lv<32> ap_const_lv32_58;
    static const sc_lv<32> ap_const_lv32_60;
    static const sc_lv<32> ap_const_lv32_68;
    static const sc_lv<32> ap_const_lv32_70;
    static const sc_lv<32> ap_const_lv32_78;
    static const sc_lv<32> ap_const_lv32_80;
    static const sc_lv<32> ap_const_lv32_88;
    static const sc_lv<32> ap_const_lv32_90;
    static const sc_lv<32> ap_const_lv32_98;
    static const sc_lv<32> ap_const_lv32_A0;
    static const sc_lv<32> ap_const_lv32_A8;
    static const sc_lv<32> ap_const_lv32_B0;
    static const sc_lv<32> ap_const_lv32_B8;
    static const sc_lv<32> ap_const_lv32_C0;
    static const sc_lv<32> ap_const_lv32_C8;
    static const sc_lv<32> ap_const_lv32_D0;
    static const sc_lv<32> ap_const_lv32_D8;
    static const sc_lv<32> ap_const_lv32_E0;
    static const sc_lv<32> ap_const_lv32_E8;
    static const sc_lv<32> ap_const_lv32_F0;
    static const sc_lv<32> ap_const_lv32_F8;
    static const sc_lv<32> ap_const_lv32_100;
    static const sc_lv<32> ap_const_lv32_108;
    static const sc_lv<32> ap_const_lv32_110;
    static const sc_lv<32> ap_const_lv32_118;
    static const sc_lv<32> ap_const_lv32_120;
    static const sc_lv<32> ap_const_lv32_128;
    static const sc_lv<32> ap_const_lv32_130;
    static const sc_lv<32> ap_const_lv32_138;
    static const sc_lv<32> ap_const_lv32_140;
    static const sc_lv<32> ap_const_lv32_148;
    static const sc_lv<32> ap_const_lv32_150;
    static const sc_lv<32> ap_const_lv32_158;
    static const sc_lv<32> ap_const_lv32_160;
    static const sc_lv<32> ap_const_lv32_168;
    static const sc_lv<32> ap_const_lv32_170;
    static const sc_lv<32> ap_const_lv32_178;
    static const sc_lv<32> ap_const_lv32_180;
    static const sc_lv<32> ap_const_lv32_188;
    static const sc_lv<32> ap_const_lv32_190;
    static const sc_lv<32> ap_const_lv32_198;
    static const sc_lv<32> ap_const_lv32_1A0;
    static const sc_lv<32> ap_const_lv32_1A8;
    static const sc_lv<32> ap_const_lv32_1B0;
    static const sc_lv<32> ap_const_lv32_1B8;
    static const sc_lv<32> ap_const_lv32_1C0;
    static const sc_lv<32> ap_const_lv32_1C8;
    static const sc_lv<32> ap_const_lv32_1D0;
    static const sc_lv<32> ap_const_lv32_1D8;
    static const sc_lv<32> ap_const_lv32_1E0;
    static const sc_lv<32> ap_const_lv32_1E8;
    static const sc_lv<32> ap_const_lv32_1F0;
    static const sc_lv<32> ap_const_lv32_1F8;
    static const sc_lv<19> ap_const_lv19_32C4;
    static const sc_lv<16> ap_const_lv16_31E;
    static const sc_lv<32> ap_const_lv32_3;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln104_fu_831_p2();
    void thread_add_ln203_1_fu_1257_p2();
    void thread_add_ln203_fu_1248_p2();
    void thread_add_ln93_1_fu_877_p2();
    void thread_add_ln93_2_fu_819_p2();
    void thread_add_ln93_fu_863_p2();
    void thread_add_ln96_1_fu_886_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state22();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state10_pp0_stage0_iter7();
    void thread_ap_block_state11_pp0_stage0_iter8();
    void thread_ap_block_state12_pp0_stage0_iter9();
    void thread_ap_block_state13_io();
    void thread_ap_block_state13_pp0_stage0_iter10();
    void thread_ap_block_state14_pp0_stage0_iter11();
    void thread_ap_block_state15_pp0_stage0_iter12();
    void thread_ap_block_state16_pp0_stage0_iter13();
    void thread_ap_block_state17_pp0_stage0_iter14();
    void thread_ap_block_state18_pp0_stage0_iter15();
    void thread_ap_block_state19_pp0_stage0_iter16();
    void thread_ap_block_state20_pp0_stage0_iter17();
    void thread_ap_block_state21_pp0_stage0_iter18();
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
    void thread_ap_phi_mux_h_0_phi_fu_748_p4();
    void thread_ap_phi_mux_indvar_flatten_phi_fu_724_p4();
    void thread_ap_phi_mux_src_ptr_0_rec_phi_fu_736_p4();
    void thread_ap_phi_mux_w_0_phi_fu_760_p4();
    void thread_ap_ready();
    void thread_dest_0_V_address0();
    void thread_dest_0_V_ce0();
    void thread_dest_0_V_d0();
    void thread_dest_0_V_we0();
    void thread_dest_10_V_address0();
    void thread_dest_10_V_ce0();
    void thread_dest_10_V_d0();
    void thread_dest_10_V_we0();
    void thread_dest_11_V_address0();
    void thread_dest_11_V_ce0();
    void thread_dest_11_V_d0();
    void thread_dest_11_V_we0();
    void thread_dest_12_V_address0();
    void thread_dest_12_V_ce0();
    void thread_dest_12_V_d0();
    void thread_dest_12_V_we0();
    void thread_dest_13_V_address0();
    void thread_dest_13_V_ce0();
    void thread_dest_13_V_d0();
    void thread_dest_13_V_we0();
    void thread_dest_14_V_address0();
    void thread_dest_14_V_ce0();
    void thread_dest_14_V_d0();
    void thread_dest_14_V_we0();
    void thread_dest_15_V_address0();
    void thread_dest_15_V_ce0();
    void thread_dest_15_V_d0();
    void thread_dest_15_V_we0();
    void thread_dest_16_V_address0();
    void thread_dest_16_V_ce0();
    void thread_dest_16_V_d0();
    void thread_dest_16_V_we0();
    void thread_dest_17_V_address0();
    void thread_dest_17_V_ce0();
    void thread_dest_17_V_d0();
    void thread_dest_17_V_we0();
    void thread_dest_18_V_address0();
    void thread_dest_18_V_ce0();
    void thread_dest_18_V_d0();
    void thread_dest_18_V_we0();
    void thread_dest_19_V_address0();
    void thread_dest_19_V_ce0();
    void thread_dest_19_V_d0();
    void thread_dest_19_V_we0();
    void thread_dest_1_V_address0();
    void thread_dest_1_V_ce0();
    void thread_dest_1_V_d0();
    void thread_dest_1_V_we0();
    void thread_dest_20_V_address0();
    void thread_dest_20_V_ce0();
    void thread_dest_20_V_d0();
    void thread_dest_20_V_we0();
    void thread_dest_21_V_address0();
    void thread_dest_21_V_ce0();
    void thread_dest_21_V_d0();
    void thread_dest_21_V_we0();
    void thread_dest_22_V_address0();
    void thread_dest_22_V_ce0();
    void thread_dest_22_V_d0();
    void thread_dest_22_V_we0();
    void thread_dest_23_V_address0();
    void thread_dest_23_V_ce0();
    void thread_dest_23_V_d0();
    void thread_dest_23_V_we0();
    void thread_dest_24_V_address0();
    void thread_dest_24_V_ce0();
    void thread_dest_24_V_d0();
    void thread_dest_24_V_we0();
    void thread_dest_25_V_address0();
    void thread_dest_25_V_ce0();
    void thread_dest_25_V_d0();
    void thread_dest_25_V_we0();
    void thread_dest_26_V_address0();
    void thread_dest_26_V_ce0();
    void thread_dest_26_V_d0();
    void thread_dest_26_V_we0();
    void thread_dest_27_V_address0();
    void thread_dest_27_V_ce0();
    void thread_dest_27_V_d0();
    void thread_dest_27_V_we0();
    void thread_dest_28_V_address0();
    void thread_dest_28_V_ce0();
    void thread_dest_28_V_d0();
    void thread_dest_28_V_we0();
    void thread_dest_29_V_address0();
    void thread_dest_29_V_ce0();
    void thread_dest_29_V_d0();
    void thread_dest_29_V_we0();
    void thread_dest_2_V_address0();
    void thread_dest_2_V_ce0();
    void thread_dest_2_V_d0();
    void thread_dest_2_V_we0();
    void thread_dest_30_V_address0();
    void thread_dest_30_V_ce0();
    void thread_dest_30_V_d0();
    void thread_dest_30_V_we0();
    void thread_dest_31_V_address0();
    void thread_dest_31_V_ce0();
    void thread_dest_31_V_d0();
    void thread_dest_31_V_we0();
    void thread_dest_3_V_address0();
    void thread_dest_3_V_ce0();
    void thread_dest_3_V_d0();
    void thread_dest_3_V_we0();
    void thread_dest_4_V_address0();
    void thread_dest_4_V_ce0();
    void thread_dest_4_V_d0();
    void thread_dest_4_V_we0();
    void thread_dest_5_V_address0();
    void thread_dest_5_V_ce0();
    void thread_dest_5_V_d0();
    void thread_dest_5_V_we0();
    void thread_dest_6_V_address0();
    void thread_dest_6_V_ce0();
    void thread_dest_6_V_d0();
    void thread_dest_6_V_we0();
    void thread_dest_7_V_address0();
    void thread_dest_7_V_ce0();
    void thread_dest_7_V_d0();
    void thread_dest_7_V_we0();
    void thread_dest_8_V_address0();
    void thread_dest_8_V_ce0();
    void thread_dest_8_V_d0();
    void thread_dest_8_V_we0();
    void thread_dest_9_V_address0();
    void thread_dest_9_V_ce0();
    void thread_dest_9_V_d0();
    void thread_dest_9_V_we0();
    void thread_empty_44_fu_891_p2();
    void thread_grp_fu_1305_p0();
    void thread_grp_fu_1305_p1();
    void thread_grp_fu_1305_p10();
    void thread_grp_fu_825_ce();
    void thread_grp_fu_825_p1();
    void thread_h_fu_907_p2();
    void thread_icmp_ln93_fu_813_p2();
    void thread_icmp_ln94_fu_837_p2();
    void thread_m_axi_src_V_ARADDR();
    void thread_m_axi_src_V_ARBURST();
    void thread_m_axi_src_V_ARCACHE();
    void thread_m_axi_src_V_ARID();
    void thread_m_axi_src_V_ARLEN();
    void thread_m_axi_src_V_ARLOCK();
    void thread_m_axi_src_V_ARPROT();
    void thread_m_axi_src_V_ARQOS();
    void thread_m_axi_src_V_ARREGION();
    void thread_m_axi_src_V_ARSIZE();
    void thread_m_axi_src_V_ARUSER();
    void thread_m_axi_src_V_ARVALID();
    void thread_m_axi_src_V_AWADDR();
    void thread_m_axi_src_V_AWBURST();
    void thread_m_axi_src_V_AWCACHE();
    void thread_m_axi_src_V_AWID();
    void thread_m_axi_src_V_AWLEN();
    void thread_m_axi_src_V_AWLOCK();
    void thread_m_axi_src_V_AWPROT();
    void thread_m_axi_src_V_AWQOS();
    void thread_m_axi_src_V_AWREGION();
    void thread_m_axi_src_V_AWSIZE();
    void thread_m_axi_src_V_AWUSER();
    void thread_m_axi_src_V_AWVALID();
    void thread_m_axi_src_V_BREADY();
    void thread_m_axi_src_V_RREADY();
    void thread_m_axi_src_V_WDATA();
    void thread_m_axi_src_V_WID();
    void thread_m_axi_src_V_WLAST();
    void thread_m_axi_src_V_WSTRB();
    void thread_m_axi_src_V_WUSER();
    void thread_m_axi_src_V_WVALID();
    void thread_mul_ln91_fu_1299_p0();
    void thread_mul_ln91_fu_1299_p1();
    void thread_mul_ln91_fu_1299_p10();
    void thread_select_ln93_1_fu_913_p3();
    void thread_select_ln93_2_fu_851_p3();
    void thread_select_ln93_fu_843_p3();
    void thread_sext_ln93_1_fu_874_p1();
    void thread_sext_ln93_fu_802_p1();
    void thread_sext_ln94_fu_882_p1();
    void thread_sext_ln96_fu_897_p1();
    void thread_shl_ln_fu_780_p3();
    void thread_src_V_blk_n_AR();
    void thread_src_V_blk_n_R();
    void thread_sub_ln91_fu_796_p2();
    void thread_tmp_s_fu_1237_p3();
    void thread_trunc_ln647_fu_920_p1();
    void thread_trunc_ln91_fu_776_p1();
    void thread_w_fu_868_p2();
    void thread_zext_ln203_1_fu_1244_p1();
    void thread_zext_ln203_2_fu_1254_p1();
    void thread_zext_ln203_3_fu_1263_p1();
    void thread_zext_ln203_fu_1234_p1();
    void thread_zext_ln91_3_fu_788_p1();
    void thread_zext_ln91_4_fu_792_p1();
    void thread_zext_ln93_1_fu_859_p1();
    void thread_zext_ln93_fu_809_p1();
    void thread_zext_ln96_fu_806_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif