// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module load_weight_1x1_from (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        m_axi_src_V_AWVALID,
        m_axi_src_V_AWREADY,
        m_axi_src_V_AWADDR,
        m_axi_src_V_AWID,
        m_axi_src_V_AWLEN,
        m_axi_src_V_AWSIZE,
        m_axi_src_V_AWBURST,
        m_axi_src_V_AWLOCK,
        m_axi_src_V_AWCACHE,
        m_axi_src_V_AWPROT,
        m_axi_src_V_AWQOS,
        m_axi_src_V_AWREGION,
        m_axi_src_V_AWUSER,
        m_axi_src_V_WVALID,
        m_axi_src_V_WREADY,
        m_axi_src_V_WDATA,
        m_axi_src_V_WSTRB,
        m_axi_src_V_WLAST,
        m_axi_src_V_WID,
        m_axi_src_V_WUSER,
        m_axi_src_V_ARVALID,
        m_axi_src_V_ARREADY,
        m_axi_src_V_ARADDR,
        m_axi_src_V_ARID,
        m_axi_src_V_ARLEN,
        m_axi_src_V_ARSIZE,
        m_axi_src_V_ARBURST,
        m_axi_src_V_ARLOCK,
        m_axi_src_V_ARCACHE,
        m_axi_src_V_ARPROT,
        m_axi_src_V_ARQOS,
        m_axi_src_V_ARREGION,
        m_axi_src_V_ARUSER,
        m_axi_src_V_RVALID,
        m_axi_src_V_RREADY,
        m_axi_src_V_RDATA,
        m_axi_src_V_RLAST,
        m_axi_src_V_RID,
        m_axi_src_V_RUSER,
        m_axi_src_V_RRESP,
        m_axi_src_V_BVALID,
        m_axi_src_V_BREADY,
        m_axi_src_V_BRESP,
        m_axi_src_V_BID,
        m_axi_src_V_BUSER,
        src_V_offset,
        index,
        weight_buf_1x1_V_0_0_address0,
        weight_buf_1x1_V_0_0_ce0,
        weight_buf_1x1_V_0_0_we0,
        weight_buf_1x1_V_0_0_d0,
        weight_buf_1x1_V_0_1_address0,
        weight_buf_1x1_V_0_1_ce0,
        weight_buf_1x1_V_0_1_we0,
        weight_buf_1x1_V_0_1_d0,
        weight_buf_1x1_V_0_2_address0,
        weight_buf_1x1_V_0_2_ce0,
        weight_buf_1x1_V_0_2_we0,
        weight_buf_1x1_V_0_2_d0,
        weight_buf_1x1_V_0_3_address0,
        weight_buf_1x1_V_0_3_ce0,
        weight_buf_1x1_V_0_3_we0,
        weight_buf_1x1_V_0_3_d0,
        weight_buf_1x1_V_0_4_address0,
        weight_buf_1x1_V_0_4_ce0,
        weight_buf_1x1_V_0_4_we0,
        weight_buf_1x1_V_0_4_d0,
        weight_buf_1x1_V_0_5_address0,
        weight_buf_1x1_V_0_5_ce0,
        weight_buf_1x1_V_0_5_we0,
        weight_buf_1x1_V_0_5_d0,
        weight_buf_1x1_V_0_6_address0,
        weight_buf_1x1_V_0_6_ce0,
        weight_buf_1x1_V_0_6_we0,
        weight_buf_1x1_V_0_6_d0,
        weight_buf_1x1_V_0_7_address0,
        weight_buf_1x1_V_0_7_ce0,
        weight_buf_1x1_V_0_7_we0,
        weight_buf_1x1_V_0_7_d0
);

parameter    ap_ST_fsm_state1 = 10'd1;
parameter    ap_ST_fsm_state2 = 10'd2;
parameter    ap_ST_fsm_state3 = 10'd4;
parameter    ap_ST_fsm_state4 = 10'd8;
parameter    ap_ST_fsm_state5 = 10'd16;
parameter    ap_ST_fsm_state6 = 10'd32;
parameter    ap_ST_fsm_state7 = 10'd64;
parameter    ap_ST_fsm_state8 = 10'd128;
parameter    ap_ST_fsm_pp0_stage0 = 10'd256;
parameter    ap_ST_fsm_state12 = 10'd512;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output   m_axi_src_V_AWVALID;
input   m_axi_src_V_AWREADY;
output  [31:0] m_axi_src_V_AWADDR;
output  [0:0] m_axi_src_V_AWID;
output  [31:0] m_axi_src_V_AWLEN;
output  [2:0] m_axi_src_V_AWSIZE;
output  [1:0] m_axi_src_V_AWBURST;
output  [1:0] m_axi_src_V_AWLOCK;
output  [3:0] m_axi_src_V_AWCACHE;
output  [2:0] m_axi_src_V_AWPROT;
output  [3:0] m_axi_src_V_AWQOS;
output  [3:0] m_axi_src_V_AWREGION;
output  [0:0] m_axi_src_V_AWUSER;
output   m_axi_src_V_WVALID;
input   m_axi_src_V_WREADY;
output  [511:0] m_axi_src_V_WDATA;
output  [63:0] m_axi_src_V_WSTRB;
output   m_axi_src_V_WLAST;
output  [0:0] m_axi_src_V_WID;
output  [0:0] m_axi_src_V_WUSER;
output   m_axi_src_V_ARVALID;
input   m_axi_src_V_ARREADY;
output  [31:0] m_axi_src_V_ARADDR;
output  [0:0] m_axi_src_V_ARID;
output  [31:0] m_axi_src_V_ARLEN;
output  [2:0] m_axi_src_V_ARSIZE;
output  [1:0] m_axi_src_V_ARBURST;
output  [1:0] m_axi_src_V_ARLOCK;
output  [3:0] m_axi_src_V_ARCACHE;
output  [2:0] m_axi_src_V_ARPROT;
output  [3:0] m_axi_src_V_ARQOS;
output  [3:0] m_axi_src_V_ARREGION;
output  [0:0] m_axi_src_V_ARUSER;
input   m_axi_src_V_RVALID;
output   m_axi_src_V_RREADY;
input  [511:0] m_axi_src_V_RDATA;
input   m_axi_src_V_RLAST;
input  [0:0] m_axi_src_V_RID;
input  [0:0] m_axi_src_V_RUSER;
input  [1:0] m_axi_src_V_RRESP;
input   m_axi_src_V_BVALID;
output   m_axi_src_V_BREADY;
input  [1:0] m_axi_src_V_BRESP;
input  [0:0] m_axi_src_V_BID;
input  [0:0] m_axi_src_V_BUSER;
input  [25:0] src_V_offset;
input  [8:0] index;
output  [2:0] weight_buf_1x1_V_0_0_address0;
output   weight_buf_1x1_V_0_0_ce0;
output   weight_buf_1x1_V_0_0_we0;
output  [63:0] weight_buf_1x1_V_0_0_d0;
output  [2:0] weight_buf_1x1_V_0_1_address0;
output   weight_buf_1x1_V_0_1_ce0;
output   weight_buf_1x1_V_0_1_we0;
output  [63:0] weight_buf_1x1_V_0_1_d0;
output  [2:0] weight_buf_1x1_V_0_2_address0;
output   weight_buf_1x1_V_0_2_ce0;
output   weight_buf_1x1_V_0_2_we0;
output  [63:0] weight_buf_1x1_V_0_2_d0;
output  [2:0] weight_buf_1x1_V_0_3_address0;
output   weight_buf_1x1_V_0_3_ce0;
output   weight_buf_1x1_V_0_3_we0;
output  [63:0] weight_buf_1x1_V_0_3_d0;
output  [2:0] weight_buf_1x1_V_0_4_address0;
output   weight_buf_1x1_V_0_4_ce0;
output   weight_buf_1x1_V_0_4_we0;
output  [63:0] weight_buf_1x1_V_0_4_d0;
output  [2:0] weight_buf_1x1_V_0_5_address0;
output   weight_buf_1x1_V_0_5_ce0;
output   weight_buf_1x1_V_0_5_we0;
output  [63:0] weight_buf_1x1_V_0_5_d0;
output  [2:0] weight_buf_1x1_V_0_6_address0;
output   weight_buf_1x1_V_0_6_ce0;
output   weight_buf_1x1_V_0_6_we0;
output  [63:0] weight_buf_1x1_V_0_6_d0;
output  [2:0] weight_buf_1x1_V_0_7_address0;
output   weight_buf_1x1_V_0_7_ce0;
output   weight_buf_1x1_V_0_7_we0;
output  [63:0] weight_buf_1x1_V_0_7_d0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg m_axi_src_V_ARVALID;
reg m_axi_src_V_RREADY;
reg weight_buf_1x1_V_0_0_ce0;
reg weight_buf_1x1_V_0_0_we0;
reg weight_buf_1x1_V_0_1_ce0;
reg weight_buf_1x1_V_0_1_we0;
reg weight_buf_1x1_V_0_2_ce0;
reg weight_buf_1x1_V_0_2_we0;
reg weight_buf_1x1_V_0_3_ce0;
reg weight_buf_1x1_V_0_3_we0;
reg weight_buf_1x1_V_0_4_ce0;
reg weight_buf_1x1_V_0_4_we0;
reg weight_buf_1x1_V_0_5_ce0;
reg weight_buf_1x1_V_0_5_we0;
reg weight_buf_1x1_V_0_6_ce0;
reg weight_buf_1x1_V_0_6_we0;
reg weight_buf_1x1_V_0_7_ce0;
reg weight_buf_1x1_V_0_7_we0;

(* fsm_encoding = "none" *) reg   [9:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    src_V_blk_n_AR;
wire    ap_CS_fsm_state2;
reg    src_V_blk_n_R;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage0;
reg   [0:0] icmp_ln131_reg_389;
reg   [3:0] cc_0_reg_234;
wire   [26:0] add_ln647_fu_253_p2;
reg   [26:0] add_ln647_reg_378;
wire   [0:0] icmp_ln131_fu_269_p2;
wire    ap_block_state9_pp0_stage0_iter0;
reg    ap_block_state10_pp0_stage0_iter1;
wire    ap_block_state11_pp0_stage0_iter2;
reg    ap_block_pp0_stage0_11001;
reg   [0:0] icmp_ln131_reg_389_pp0_iter1_reg;
wire   [3:0] cc_fu_275_p2;
reg    ap_enable_reg_pp0_iter0;
wire   [2:0] trunc_ln321_fu_281_p1;
reg   [2:0] trunc_ln321_reg_398;
reg   [2:0] trunc_ln321_reg_398_pp0_iter1_reg;
wire   [63:0] trunc_ln647_fu_285_p1;
reg   [63:0] trunc_ln647_reg_403;
reg   [63:0] p_Result_74_1_reg_408;
reg   [63:0] p_Result_74_2_reg_413;
reg   [63:0] p_Result_74_3_reg_418;
reg   [63:0] p_Result_74_4_reg_423;
reg   [63:0] p_Result_74_5_reg_428;
reg   [63:0] p_Result_74_6_reg_433;
reg   [63:0] p_Result_74_7_reg_438;
wire    ap_CS_fsm_state8;
reg    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state9;
reg    ap_enable_reg_pp0_iter2;
wire   [63:0] zext_ln321_fu_366_p1;
wire   [63:0] zext_ln647_4_fu_259_p1;
wire   [26:0] zext_ln647_fu_245_p1;
wire   [26:0] zext_ln647_3_fu_249_p1;
wire   [5:0] and_ln_fu_359_p3;
wire    ap_CS_fsm_state12;
reg   [9:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 ap_CS_fsm = 10'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_condition_pp0_exit_iter0_state9) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_state8)) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            if ((1'b1 == ap_condition_pp0_exit_iter0_state9)) begin
                ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state9);
            end else if ((1'b1 == 1'b1)) begin
                ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end else if ((1'b1 == ap_CS_fsm_state8)) begin
            ap_enable_reg_pp0_iter2 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln131_fu_269_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        cc_0_reg_234 <= cc_fu_275_p2;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        cc_0_reg_234 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        add_ln647_reg_378 <= add_ln647_fu_253_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        icmp_ln131_reg_389 <= icmp_ln131_fu_269_p2;
        icmp_ln131_reg_389_pp0_iter1_reg <= icmp_ln131_reg_389;
        trunc_ln321_reg_398_pp0_iter1_reg <= trunc_ln321_reg_398;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln131_reg_389 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        p_Result_74_1_reg_408 <= {{m_axi_src_V_RDATA[127:64]}};
        p_Result_74_2_reg_413 <= {{m_axi_src_V_RDATA[191:128]}};
        p_Result_74_3_reg_418 <= {{m_axi_src_V_RDATA[255:192]}};
        p_Result_74_4_reg_423 <= {{m_axi_src_V_RDATA[319:256]}};
        p_Result_74_5_reg_428 <= {{m_axi_src_V_RDATA[383:320]}};
        p_Result_74_6_reg_433 <= {{m_axi_src_V_RDATA[447:384]}};
        p_Result_74_7_reg_438 <= {{m_axi_src_V_RDATA[511:448]}};
        trunc_ln647_reg_403 <= trunc_ln647_fu_285_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln131_fu_269_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        trunc_ln321_reg_398 <= trunc_ln321_fu_281_p1;
    end
end

always @ (*) begin
    if ((icmp_ln131_fu_269_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state9 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state9 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state12) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((m_axi_src_V_ARREADY == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
        m_axi_src_V_ARVALID = 1'b1;
    end else begin
        m_axi_src_V_ARVALID = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln131_reg_389 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        m_axi_src_V_RREADY = 1'b1;
    end else begin
        m_axi_src_V_RREADY = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        src_V_blk_n_AR = m_axi_src_V_ARREADY;
    end else begin
        src_V_blk_n_AR = 1'b1;
    end
end

always @ (*) begin
    if (((icmp_ln131_reg_389 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0))) begin
        src_V_blk_n_R = m_axi_src_V_RVALID;
    end else begin
        src_V_blk_n_R = 1'b1;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        weight_buf_1x1_V_0_0_ce0 = 1'b1;
    end else begin
        weight_buf_1x1_V_0_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln131_reg_389_pp0_iter1_reg == 1'd0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        weight_buf_1x1_V_0_0_we0 = 1'b1;
    end else begin
        weight_buf_1x1_V_0_0_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        weight_buf_1x1_V_0_1_ce0 = 1'b1;
    end else begin
        weight_buf_1x1_V_0_1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln131_reg_389_pp0_iter1_reg == 1'd0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        weight_buf_1x1_V_0_1_we0 = 1'b1;
    end else begin
        weight_buf_1x1_V_0_1_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        weight_buf_1x1_V_0_2_ce0 = 1'b1;
    end else begin
        weight_buf_1x1_V_0_2_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln131_reg_389_pp0_iter1_reg == 1'd0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        weight_buf_1x1_V_0_2_we0 = 1'b1;
    end else begin
        weight_buf_1x1_V_0_2_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        weight_buf_1x1_V_0_3_ce0 = 1'b1;
    end else begin
        weight_buf_1x1_V_0_3_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln131_reg_389_pp0_iter1_reg == 1'd0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        weight_buf_1x1_V_0_3_we0 = 1'b1;
    end else begin
        weight_buf_1x1_V_0_3_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        weight_buf_1x1_V_0_4_ce0 = 1'b1;
    end else begin
        weight_buf_1x1_V_0_4_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln131_reg_389_pp0_iter1_reg == 1'd0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        weight_buf_1x1_V_0_4_we0 = 1'b1;
    end else begin
        weight_buf_1x1_V_0_4_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        weight_buf_1x1_V_0_5_ce0 = 1'b1;
    end else begin
        weight_buf_1x1_V_0_5_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln131_reg_389_pp0_iter1_reg == 1'd0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        weight_buf_1x1_V_0_5_we0 = 1'b1;
    end else begin
        weight_buf_1x1_V_0_5_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        weight_buf_1x1_V_0_6_ce0 = 1'b1;
    end else begin
        weight_buf_1x1_V_0_6_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln131_reg_389_pp0_iter1_reg == 1'd0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        weight_buf_1x1_V_0_6_we0 = 1'b1;
    end else begin
        weight_buf_1x1_V_0_6_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        weight_buf_1x1_V_0_7_ce0 = 1'b1;
    end else begin
        weight_buf_1x1_V_0_7_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln131_reg_389_pp0_iter1_reg == 1'd0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        weight_buf_1x1_V_0_7_we0 = 1'b1;
    end else begin
        weight_buf_1x1_V_0_7_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((m_axi_src_V_ARREADY == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (icmp_ln131_fu_269_p2 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b0)) & ~((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter2 == 1'b1) & (ap_enable_reg_pp0_iter1 == 1'b0)))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if ((((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter2 == 1'b1) & (ap_enable_reg_pp0_iter1 == 1'b0)) | ((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (icmp_ln131_fu_269_p2 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b0)))) begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln647_fu_253_p2 = (zext_ln647_fu_245_p1 + zext_ln647_3_fu_249_p1);

assign and_ln_fu_359_p3 = {{3'd0}, {trunc_ln321_reg_398_pp0_iter1_reg}};

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd8];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_11001 = ((icmp_ln131_reg_389 == 1'd0) & (m_axi_src_V_RVALID == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = ((icmp_ln131_reg_389 == 1'd0) & (m_axi_src_V_RVALID == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1));
end

always @ (*) begin
    ap_block_state10_pp0_stage0_iter1 = ((icmp_ln131_reg_389 == 1'd0) & (m_axi_src_V_RVALID == 1'b0));
end

assign ap_block_state11_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign cc_fu_275_p2 = (cc_0_reg_234 + 4'd1);

assign icmp_ln131_fu_269_p2 = ((cc_0_reg_234 == 4'd8) ? 1'b1 : 1'b0);

assign m_axi_src_V_ARADDR = zext_ln647_4_fu_259_p1;

assign m_axi_src_V_ARBURST = 2'd0;

assign m_axi_src_V_ARCACHE = 4'd0;

assign m_axi_src_V_ARID = 1'd0;

assign m_axi_src_V_ARLEN = 32'd8;

assign m_axi_src_V_ARLOCK = 2'd0;

assign m_axi_src_V_ARPROT = 3'd0;

assign m_axi_src_V_ARQOS = 4'd0;

assign m_axi_src_V_ARREGION = 4'd0;

assign m_axi_src_V_ARSIZE = 3'd0;

assign m_axi_src_V_ARUSER = 1'd0;

assign m_axi_src_V_AWADDR = 32'd0;

assign m_axi_src_V_AWBURST = 2'd0;

assign m_axi_src_V_AWCACHE = 4'd0;

assign m_axi_src_V_AWID = 1'd0;

assign m_axi_src_V_AWLEN = 32'd0;

assign m_axi_src_V_AWLOCK = 2'd0;

assign m_axi_src_V_AWPROT = 3'd0;

assign m_axi_src_V_AWQOS = 4'd0;

assign m_axi_src_V_AWREGION = 4'd0;

assign m_axi_src_V_AWSIZE = 3'd0;

assign m_axi_src_V_AWUSER = 1'd0;

assign m_axi_src_V_AWVALID = 1'b0;

assign m_axi_src_V_BREADY = 1'b0;

assign m_axi_src_V_WDATA = 512'd0;

assign m_axi_src_V_WID = 1'd0;

assign m_axi_src_V_WLAST = 1'b0;

assign m_axi_src_V_WSTRB = 64'd0;

assign m_axi_src_V_WUSER = 1'd0;

assign m_axi_src_V_WVALID = 1'b0;

assign trunc_ln321_fu_281_p1 = cc_0_reg_234[2:0];

assign trunc_ln647_fu_285_p1 = m_axi_src_V_RDATA[63:0];

assign weight_buf_1x1_V_0_0_address0 = zext_ln321_fu_366_p1;

assign weight_buf_1x1_V_0_0_d0 = trunc_ln647_reg_403;

assign weight_buf_1x1_V_0_1_address0 = zext_ln321_fu_366_p1;

assign weight_buf_1x1_V_0_1_d0 = p_Result_74_1_reg_408;

assign weight_buf_1x1_V_0_2_address0 = zext_ln321_fu_366_p1;

assign weight_buf_1x1_V_0_2_d0 = p_Result_74_2_reg_413;

assign weight_buf_1x1_V_0_3_address0 = zext_ln321_fu_366_p1;

assign weight_buf_1x1_V_0_3_d0 = p_Result_74_3_reg_418;

assign weight_buf_1x1_V_0_4_address0 = zext_ln321_fu_366_p1;

assign weight_buf_1x1_V_0_4_d0 = p_Result_74_4_reg_423;

assign weight_buf_1x1_V_0_5_address0 = zext_ln321_fu_366_p1;

assign weight_buf_1x1_V_0_5_d0 = p_Result_74_5_reg_428;

assign weight_buf_1x1_V_0_6_address0 = zext_ln321_fu_366_p1;

assign weight_buf_1x1_V_0_6_d0 = p_Result_74_6_reg_433;

assign weight_buf_1x1_V_0_7_address0 = zext_ln321_fu_366_p1;

assign weight_buf_1x1_V_0_7_d0 = p_Result_74_7_reg_438;

assign zext_ln321_fu_366_p1 = and_ln_fu_359_p3;

assign zext_ln647_3_fu_249_p1 = src_V_offset;

assign zext_ln647_4_fu_259_p1 = add_ln647_reg_378;

assign zext_ln647_fu_245_p1 = index;

endmodule //load_weight_1x1_from
