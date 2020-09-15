// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module load_buf_from_buf_al (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        row,
        col,
        pg_buf_all_V_0_address0,
        pg_buf_all_V_0_ce0,
        pg_buf_all_V_0_q0,
        pg_buf_all_V_1_address0,
        pg_buf_all_V_1_ce0,
        pg_buf_all_V_1_q0,
        pg_buf_all_V_2_address0,
        pg_buf_all_V_2_ce0,
        pg_buf_all_V_2_q0,
        pg_buf_all_V_3_address0,
        pg_buf_all_V_3_ce0,
        pg_buf_all_V_3_q0,
        pg_buf_all_V_4_address0,
        pg_buf_all_V_4_ce0,
        pg_buf_all_V_4_q0,
        pg_buf_all_V_5_address0,
        pg_buf_all_V_5_ce0,
        pg_buf_all_V_5_q0,
        pg_buf_all_V_6_address0,
        pg_buf_all_V_6_ce0,
        pg_buf_all_V_6_q0,
        pg_buf_all_V_7_address0,
        pg_buf_all_V_7_ce0,
        pg_buf_all_V_7_q0,
        pg_buf_all_V_8_address0,
        pg_buf_all_V_8_ce0,
        pg_buf_all_V_8_q0,
        pg_buf_all_V_9_address0,
        pg_buf_all_V_9_ce0,
        pg_buf_all_V_9_q0,
        pg_buf_all_V_10_address0,
        pg_buf_all_V_10_ce0,
        pg_buf_all_V_10_q0,
        pg_buf_all_V_11_address0,
        pg_buf_all_V_11_ce0,
        pg_buf_all_V_11_q0,
        pg_buf_all_V_12_address0,
        pg_buf_all_V_12_ce0,
        pg_buf_all_V_12_q0,
        pg_buf_all_V_13_address0,
        pg_buf_all_V_13_ce0,
        pg_buf_all_V_13_q0,
        pg_buf_all_V_14_address0,
        pg_buf_all_V_14_ce0,
        pg_buf_all_V_14_q0,
        pg_buf_all_V_15_address0,
        pg_buf_all_V_15_ce0,
        pg_buf_all_V_15_q0,
        pg_buf_all_V_16_address0,
        pg_buf_all_V_16_ce0,
        pg_buf_all_V_16_q0,
        pg_buf_all_V_17_address0,
        pg_buf_all_V_17_ce0,
        pg_buf_all_V_17_q0,
        pg_buf_all_V_18_address0,
        pg_buf_all_V_18_ce0,
        pg_buf_all_V_18_q0,
        pg_buf_all_V_19_address0,
        pg_buf_all_V_19_ce0,
        pg_buf_all_V_19_q0,
        pg_buf_all_V_20_address0,
        pg_buf_all_V_20_ce0,
        pg_buf_all_V_20_q0,
        pg_buf_all_V_21_address0,
        pg_buf_all_V_21_ce0,
        pg_buf_all_V_21_q0,
        pg_buf_all_V_22_address0,
        pg_buf_all_V_22_ce0,
        pg_buf_all_V_22_q0,
        pg_buf_all_V_23_address0,
        pg_buf_all_V_23_ce0,
        pg_buf_all_V_23_q0,
        pg_buf_all_V_24_address0,
        pg_buf_all_V_24_ce0,
        pg_buf_all_V_24_q0,
        pg_buf_all_V_25_address0,
        pg_buf_all_V_25_ce0,
        pg_buf_all_V_25_q0,
        pg_buf_all_V_26_address0,
        pg_buf_all_V_26_ce0,
        pg_buf_all_V_26_q0,
        pg_buf_all_V_27_address0,
        pg_buf_all_V_27_ce0,
        pg_buf_all_V_27_q0,
        pg_buf_all_V_28_address0,
        pg_buf_all_V_28_ce0,
        pg_buf_all_V_28_q0,
        pg_buf_all_V_29_address0,
        pg_buf_all_V_29_ce0,
        pg_buf_all_V_29_q0,
        pg_buf_all_V_30_address0,
        pg_buf_all_V_30_ce0,
        pg_buf_all_V_30_q0,
        pg_buf_all_V_31_address0,
        pg_buf_all_V_31_ce0,
        pg_buf_all_V_31_q0,
        pg_buf0_V_1_address0,
        pg_buf0_V_1_ce0,
        pg_buf0_V_1_we0,
        pg_buf0_V_1_d0,
        pg_buf0_V_2_address0,
        pg_buf0_V_2_ce0,
        pg_buf0_V_2_we0,
        pg_buf0_V_2_d0,
        pg_buf0_V_3_address0,
        pg_buf0_V_3_ce0,
        pg_buf0_V_3_we0,
        pg_buf0_V_3_d0,
        pg_buf0_V_4_address0,
        pg_buf0_V_4_ce0,
        pg_buf0_V_4_we0,
        pg_buf0_V_4_d0,
        pg_buf0_V_5_address0,
        pg_buf0_V_5_ce0,
        pg_buf0_V_5_we0,
        pg_buf0_V_5_d0,
        pg_buf0_V_6_address0,
        pg_buf0_V_6_ce0,
        pg_buf0_V_6_we0,
        pg_buf0_V_6_d0,
        pg_buf0_V_7_address0,
        pg_buf0_V_7_ce0,
        pg_buf0_V_7_we0,
        pg_buf0_V_7_d0
);

parameter    ap_ST_fsm_state1 = 5'd1;
parameter    ap_ST_fsm_state2 = 5'd2;
parameter    ap_ST_fsm_state3 = 5'd4;
parameter    ap_ST_fsm_pp0_stage0 = 5'd8;
parameter    ap_ST_fsm_state7 = 5'd16;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [4:0] row;
input  [4:0] col;
output  [13:0] pg_buf_all_V_0_address0;
output   pg_buf_all_V_0_ce0;
input  [0:0] pg_buf_all_V_0_q0;
output  [13:0] pg_buf_all_V_1_address0;
output   pg_buf_all_V_1_ce0;
input  [0:0] pg_buf_all_V_1_q0;
output  [13:0] pg_buf_all_V_2_address0;
output   pg_buf_all_V_2_ce0;
input  [0:0] pg_buf_all_V_2_q0;
output  [13:0] pg_buf_all_V_3_address0;
output   pg_buf_all_V_3_ce0;
input  [0:0] pg_buf_all_V_3_q0;
output  [13:0] pg_buf_all_V_4_address0;
output   pg_buf_all_V_4_ce0;
input  [0:0] pg_buf_all_V_4_q0;
output  [13:0] pg_buf_all_V_5_address0;
output   pg_buf_all_V_5_ce0;
input  [0:0] pg_buf_all_V_5_q0;
output  [13:0] pg_buf_all_V_6_address0;
output   pg_buf_all_V_6_ce0;
input  [0:0] pg_buf_all_V_6_q0;
output  [13:0] pg_buf_all_V_7_address0;
output   pg_buf_all_V_7_ce0;
input  [0:0] pg_buf_all_V_7_q0;
output  [13:0] pg_buf_all_V_8_address0;
output   pg_buf_all_V_8_ce0;
input  [0:0] pg_buf_all_V_8_q0;
output  [13:0] pg_buf_all_V_9_address0;
output   pg_buf_all_V_9_ce0;
input  [0:0] pg_buf_all_V_9_q0;
output  [13:0] pg_buf_all_V_10_address0;
output   pg_buf_all_V_10_ce0;
input  [0:0] pg_buf_all_V_10_q0;
output  [13:0] pg_buf_all_V_11_address0;
output   pg_buf_all_V_11_ce0;
input  [0:0] pg_buf_all_V_11_q0;
output  [13:0] pg_buf_all_V_12_address0;
output   pg_buf_all_V_12_ce0;
input  [0:0] pg_buf_all_V_12_q0;
output  [13:0] pg_buf_all_V_13_address0;
output   pg_buf_all_V_13_ce0;
input  [0:0] pg_buf_all_V_13_q0;
output  [13:0] pg_buf_all_V_14_address0;
output   pg_buf_all_V_14_ce0;
input  [0:0] pg_buf_all_V_14_q0;
output  [13:0] pg_buf_all_V_15_address0;
output   pg_buf_all_V_15_ce0;
input  [0:0] pg_buf_all_V_15_q0;
output  [13:0] pg_buf_all_V_16_address0;
output   pg_buf_all_V_16_ce0;
input  [0:0] pg_buf_all_V_16_q0;
output  [13:0] pg_buf_all_V_17_address0;
output   pg_buf_all_V_17_ce0;
input  [0:0] pg_buf_all_V_17_q0;
output  [13:0] pg_buf_all_V_18_address0;
output   pg_buf_all_V_18_ce0;
input  [0:0] pg_buf_all_V_18_q0;
output  [13:0] pg_buf_all_V_19_address0;
output   pg_buf_all_V_19_ce0;
input  [0:0] pg_buf_all_V_19_q0;
output  [13:0] pg_buf_all_V_20_address0;
output   pg_buf_all_V_20_ce0;
input  [0:0] pg_buf_all_V_20_q0;
output  [13:0] pg_buf_all_V_21_address0;
output   pg_buf_all_V_21_ce0;
input  [0:0] pg_buf_all_V_21_q0;
output  [13:0] pg_buf_all_V_22_address0;
output   pg_buf_all_V_22_ce0;
input  [0:0] pg_buf_all_V_22_q0;
output  [13:0] pg_buf_all_V_23_address0;
output   pg_buf_all_V_23_ce0;
input  [0:0] pg_buf_all_V_23_q0;
output  [13:0] pg_buf_all_V_24_address0;
output   pg_buf_all_V_24_ce0;
input  [0:0] pg_buf_all_V_24_q0;
output  [13:0] pg_buf_all_V_25_address0;
output   pg_buf_all_V_25_ce0;
input  [0:0] pg_buf_all_V_25_q0;
output  [13:0] pg_buf_all_V_26_address0;
output   pg_buf_all_V_26_ce0;
input  [0:0] pg_buf_all_V_26_q0;
output  [13:0] pg_buf_all_V_27_address0;
output   pg_buf_all_V_27_ce0;
input  [0:0] pg_buf_all_V_27_q0;
output  [13:0] pg_buf_all_V_28_address0;
output   pg_buf_all_V_28_ce0;
input  [0:0] pg_buf_all_V_28_q0;
output  [13:0] pg_buf_all_V_29_address0;
output   pg_buf_all_V_29_ce0;
input  [0:0] pg_buf_all_V_29_q0;
output  [13:0] pg_buf_all_V_30_address0;
output   pg_buf_all_V_30_ce0;
input  [0:0] pg_buf_all_V_30_q0;
output  [13:0] pg_buf_all_V_31_address0;
output   pg_buf_all_V_31_ce0;
input  [0:0] pg_buf_all_V_31_q0;
output  [3:0] pg_buf0_V_1_address0;
output   pg_buf0_V_1_ce0;
output   pg_buf0_V_1_we0;
output  [63:0] pg_buf0_V_1_d0;
output  [3:0] pg_buf0_V_2_address0;
output   pg_buf0_V_2_ce0;
output   pg_buf0_V_2_we0;
output  [63:0] pg_buf0_V_2_d0;
output  [3:0] pg_buf0_V_3_address0;
output   pg_buf0_V_3_ce0;
output   pg_buf0_V_3_we0;
output  [63:0] pg_buf0_V_3_d0;
output  [3:0] pg_buf0_V_4_address0;
output   pg_buf0_V_4_ce0;
output   pg_buf0_V_4_we0;
output  [63:0] pg_buf0_V_4_d0;
output  [3:0] pg_buf0_V_5_address0;
output   pg_buf0_V_5_ce0;
output   pg_buf0_V_5_we0;
output  [63:0] pg_buf0_V_5_d0;
output  [3:0] pg_buf0_V_6_address0;
output   pg_buf0_V_6_ce0;
output   pg_buf0_V_6_we0;
output  [63:0] pg_buf0_V_6_d0;
output  [3:0] pg_buf0_V_7_address0;
output   pg_buf0_V_7_ce0;
output   pg_buf0_V_7_we0;
output  [63:0] pg_buf0_V_7_d0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg pg_buf_all_V_0_ce0;
reg pg_buf_all_V_1_ce0;
reg pg_buf_all_V_2_ce0;
reg pg_buf_all_V_3_ce0;
reg pg_buf_all_V_4_ce0;
reg pg_buf_all_V_5_ce0;
reg pg_buf_all_V_6_ce0;
reg pg_buf_all_V_7_ce0;
reg pg_buf_all_V_8_ce0;
reg pg_buf_all_V_9_ce0;
reg pg_buf_all_V_10_ce0;
reg pg_buf_all_V_11_ce0;
reg pg_buf_all_V_12_ce0;
reg pg_buf_all_V_13_ce0;
reg pg_buf_all_V_14_ce0;
reg pg_buf_all_V_15_ce0;
reg pg_buf_all_V_16_ce0;
reg pg_buf_all_V_17_ce0;
reg pg_buf_all_V_18_ce0;
reg pg_buf_all_V_19_ce0;
reg pg_buf_all_V_20_ce0;
reg pg_buf_all_V_21_ce0;
reg pg_buf_all_V_22_ce0;
reg pg_buf_all_V_23_ce0;
reg pg_buf_all_V_24_ce0;
reg pg_buf_all_V_25_ce0;
reg pg_buf_all_V_26_ce0;
reg pg_buf_all_V_27_ce0;
reg pg_buf_all_V_28_ce0;
reg pg_buf_all_V_29_ce0;
reg pg_buf_all_V_30_ce0;
reg pg_buf_all_V_31_ce0;
reg pg_buf0_V_1_ce0;
reg pg_buf0_V_1_we0;
reg pg_buf0_V_2_ce0;
reg pg_buf0_V_2_we0;
reg pg_buf0_V_3_ce0;
reg pg_buf0_V_3_we0;
reg pg_buf0_V_4_ce0;
reg pg_buf0_V_4_we0;
reg pg_buf0_V_5_ce0;
reg pg_buf0_V_5_we0;
reg pg_buf0_V_6_ce0;
reg pg_buf0_V_6_we0;
reg pg_buf0_V_7_ce0;
reg pg_buf0_V_7_we0;

(* fsm_encoding = "none" *) reg   [4:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [3:0] pg_buf0_V_0_address0;
reg    pg_buf0_V_0_ce0;
reg    pg_buf0_V_0_we0;
wire   [3:0] pg_buf0_V_8_address0;
reg    pg_buf0_V_8_ce0;
reg    pg_buf0_V_8_we0;
reg   [6:0] indvar_flatten_reg_689;
reg   [14:0] index_0_reg_700;
reg   [3:0] h_0_reg_709;
reg   [3:0] w_0_reg_720;
wire   [7:0] sub_ln71_fu_751_p2;
reg  signed [7:0] sub_ln71_reg_967;
wire  signed [14:0] grp_fu_959_p3;
reg  signed [14:0] index_reg_972;
wire    ap_CS_fsm_state2;
wire   [0:0] icmp_ln72_fu_764_p2;
reg   [0:0] icmp_ln72_reg_977;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_block_state4_pp0_stage0_iter0;
wire    ap_block_state5_pp0_stage0_iter1;
wire    ap_block_state6_pp0_stage0_iter2;
wire    ap_block_pp0_stage0_11001;
wire   [6:0] add_ln72_fu_770_p2;
reg    ap_enable_reg_pp0_iter0;
wire   [3:0] select_ln73_fu_794_p3;
reg   [3:0] select_ln73_reg_986;
reg   [3:0] select_ln73_reg_986_pp0_iter1_reg;
wire   [14:0] select_ln72_fu_802_p3;
reg   [14:0] select_ln72_reg_992;
wire   [3:0] select_ln72_1_fu_810_p3;
reg   [3:0] select_ln72_1_reg_998;
reg   [3:0] select_ln72_1_reg_998_pp0_iter1_reg;
wire   [3:0] w_fu_818_p2;
wire    ap_CS_fsm_state3;
wire    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state4;
reg    ap_enable_reg_pp0_iter1;
reg    ap_enable_reg_pp0_iter2;
reg   [14:0] ap_phi_mux_index_0_phi_fu_703_p4;
wire    ap_block_pp0_stage0;
reg   [3:0] ap_phi_mux_h_0_phi_fu_713_p4;
wire  signed [63:0] sext_ln77_fu_832_p1;
wire   [63:0] zext_ln78_fu_868_p1;
wire   [63:0] p_Result_s_fu_880_p34;
wire   [3:0] trunc_ln71_fu_731_p1;
wire   [6:0] shl_ln_fu_735_p3;
wire   [7:0] zext_ln71_1_fu_743_p1;
wire   [7:0] zext_ln71_2_fu_747_p1;
wire   [0:0] icmp_ln73_fu_788_p2;
wire   [14:0] index_4_fu_776_p2;
wire   [3:0] h_fu_782_p2;
wire   [14:0] zext_ln73_fu_824_p1;
wire   [14:0] add_ln77_fu_827_p2;
wire   [10:0] grp_fu_959_p0;
wire   [4:0] grp_fu_959_p1;
wire    ap_CS_fsm_state7;
reg   [4:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
wire   [14:0] grp_fu_959_p10;

// power-on initialization
initial begin
#0 ap_CS_fsm = 5'd1;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
end

load_buf_from_bufdEe #(
    .DataWidth( 64 ),
    .AddressRange( 9 ),
    .AddressWidth( 4 ))
pg_buf0_V_0_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(pg_buf0_V_0_address0),
    .ce0(pg_buf0_V_0_ce0),
    .we0(pg_buf0_V_0_we0),
    .d0(p_Result_s_fu_880_p34)
);

load_buf_from_bufdEe #(
    .DataWidth( 64 ),
    .AddressRange( 9 ),
    .AddressWidth( 4 ))
pg_buf0_V_8_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(pg_buf0_V_8_address0),
    .ce0(pg_buf0_V_8_ce0),
    .we0(pg_buf0_V_8_we0),
    .d0(p_Result_s_fu_880_p34)
);

FracNet_mac_muladfYi #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 11 ),
    .din1_WIDTH( 5 ),
    .din2_WIDTH( 8 ),
    .dout_WIDTH( 15 ))
FracNet_mac_muladfYi_U686(
    .din0(grp_fu_959_p0),
    .din1(grp_fu_959_p1),
    .din2(sub_ln71_reg_967),
    .dout(grp_fu_959_p3)
);

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
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_condition_pp0_exit_iter0_state4) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_state3)) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            if ((1'b1 == ap_condition_pp0_exit_iter0_state4)) begin
                ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state4);
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
        end else if ((1'b1 == ap_CS_fsm_state3)) begin
            ap_enable_reg_pp0_iter2 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln72_reg_977 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        h_0_reg_709 <= select_ln72_1_reg_998;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        h_0_reg_709 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln72_reg_977 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        index_0_reg_700 <= select_ln72_reg_992;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        index_0_reg_700 <= index_reg_972;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln72_fu_764_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        indvar_flatten_reg_689 <= add_ln72_fu_770_p2;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        indvar_flatten_reg_689 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln72_fu_764_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        w_0_reg_720 <= w_fu_818_p2;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        w_0_reg_720 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        icmp_ln72_reg_977 <= icmp_ln72_fu_764_p2;
        select_ln72_1_reg_998_pp0_iter1_reg <= select_ln72_1_reg_998;
        select_ln73_reg_986_pp0_iter1_reg <= select_ln73_reg_986;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        index_reg_972 <= grp_fu_959_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln72_fu_764_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        select_ln72_1_reg_998 <= select_ln72_1_fu_810_p3;
        select_ln72_reg_992 <= select_ln72_fu_802_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln72_fu_764_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        select_ln73_reg_986 <= select_ln73_fu_794_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        sub_ln71_reg_967 <= sub_ln71_fu_751_p2;
    end
end

always @ (*) begin
    if ((icmp_ln72_fu_764_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state4 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state4 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state7) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if (((ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (icmp_ln72_reg_977 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_phi_mux_h_0_phi_fu_713_p4 = select_ln72_1_reg_998;
    end else begin
        ap_phi_mux_h_0_phi_fu_713_p4 = h_0_reg_709;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (icmp_ln72_reg_977 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_phi_mux_index_0_phi_fu_703_p4 = select_ln72_reg_992;
    end else begin
        ap_phi_mux_index_0_phi_fu_703_p4 = index_0_reg_700;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        pg_buf0_V_0_ce0 = 1'b1;
    end else begin
        pg_buf0_V_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((select_ln72_1_reg_998_pp0_iter1_reg == 4'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        pg_buf0_V_0_we0 = 1'b1;
    end else begin
        pg_buf0_V_0_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        pg_buf0_V_1_ce0 = 1'b1;
    end else begin
        pg_buf0_V_1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((select_ln72_1_reg_998_pp0_iter1_reg == 4'd1) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        pg_buf0_V_1_we0 = 1'b1;
    end else begin
        pg_buf0_V_1_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        pg_buf0_V_2_ce0 = 1'b1;
    end else begin
        pg_buf0_V_2_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((select_ln72_1_reg_998_pp0_iter1_reg == 4'd2) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        pg_buf0_V_2_we0 = 1'b1;
    end else begin
        pg_buf0_V_2_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        pg_buf0_V_3_ce0 = 1'b1;
    end else begin
        pg_buf0_V_3_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((select_ln72_1_reg_998_pp0_iter1_reg == 4'd3) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        pg_buf0_V_3_we0 = 1'b1;
    end else begin
        pg_buf0_V_3_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        pg_buf0_V_4_ce0 = 1'b1;
    end else begin
        pg_buf0_V_4_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((select_ln72_1_reg_998_pp0_iter1_reg == 4'd4) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        pg_buf0_V_4_we0 = 1'b1;
    end else begin
        pg_buf0_V_4_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        pg_buf0_V_5_ce0 = 1'b1;
    end else begin
        pg_buf0_V_5_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((select_ln72_1_reg_998_pp0_iter1_reg == 4'd5) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        pg_buf0_V_5_we0 = 1'b1;
    end else begin
        pg_buf0_V_5_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        pg_buf0_V_6_ce0 = 1'b1;
    end else begin
        pg_buf0_V_6_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((select_ln72_1_reg_998_pp0_iter1_reg == 4'd6) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        pg_buf0_V_6_we0 = 1'b1;
    end else begin
        pg_buf0_V_6_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        pg_buf0_V_7_ce0 = 1'b1;
    end else begin
        pg_buf0_V_7_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((select_ln72_1_reg_998_pp0_iter1_reg == 4'd7) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        pg_buf0_V_7_we0 = 1'b1;
    end else begin
        pg_buf0_V_7_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        pg_buf0_V_8_ce0 = 1'b1;
    end else begin
        pg_buf0_V_8_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((~(select_ln72_1_reg_998_pp0_iter1_reg == 4'd0) & ~(select_ln72_1_reg_998_pp0_iter1_reg == 4'd1) & ~(select_ln72_1_reg_998_pp0_iter1_reg == 4'd2) & ~(select_ln72_1_reg_998_pp0_iter1_reg == 4'd3) & ~(select_ln72_1_reg_998_pp0_iter1_reg == 4'd4) & ~(select_ln72_1_reg_998_pp0_iter1_reg == 4'd5) & ~(select_ln72_1_reg_998_pp0_iter1_reg == 4'd6) & ~(select_ln72_1_reg_998_pp0_iter1_reg == 4'd7) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        pg_buf0_V_8_we0 = 1'b1;
    end else begin
        pg_buf0_V_8_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_0_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_10_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_10_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_11_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_11_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_12_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_12_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_13_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_13_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_14_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_14_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_15_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_15_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_16_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_16_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_17_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_17_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_18_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_18_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_19_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_19_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_1_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_20_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_20_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_21_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_21_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_22_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_22_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_23_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_23_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_24_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_24_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_25_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_25_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_26_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_26_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_27_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_27_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_28_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_28_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_29_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_29_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_2_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_2_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_30_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_30_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_31_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_31_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_3_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_3_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_4_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_4_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_5_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_5_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_6_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_6_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_7_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_7_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_8_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_8_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        pg_buf_all_V_9_ce0 = 1'b1;
    end else begin
        pg_buf_all_V_9_ce0 = 1'b0;
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
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (icmp_ln72_fu_764_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1)) & ~((ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter2 == 1'b1)))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if ((((ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter2 == 1'b1)) | ((ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (icmp_ln72_fu_764_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1)))) begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln72_fu_770_p2 = (indvar_flatten_reg_689 + 7'd1);

assign add_ln77_fu_827_p2 = (zext_ln73_fu_824_p1 + select_ln72_reg_992);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd4];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign grp_fu_959_p0 = 15'd798;

assign grp_fu_959_p1 = grp_fu_959_p10;

assign grp_fu_959_p10 = row;

assign h_fu_782_p2 = (ap_phi_mux_h_0_phi_fu_713_p4 + 4'd1);

assign icmp_ln72_fu_764_p2 = ((indvar_flatten_reg_689 == 7'd81) ? 1'b1 : 1'b0);

assign icmp_ln73_fu_788_p2 = ((w_0_reg_720 == 4'd9) ? 1'b1 : 1'b0);

assign index_4_fu_776_p2 = (ap_phi_mux_index_0_phi_fu_703_p4 + 15'd114);

assign p_Result_s_fu_880_p34 = {{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{32'd0}, {pg_buf_all_V_31_q0}}}, {pg_buf_all_V_30_q0}}}, {pg_buf_all_V_29_q0}}}, {pg_buf_all_V_28_q0}}}, {pg_buf_all_V_27_q0}}}, {pg_buf_all_V_26_q0}}}, {pg_buf_all_V_25_q0}}}, {pg_buf_all_V_24_q0}}}, {pg_buf_all_V_23_q0}}}, {pg_buf_all_V_22_q0}}}, {pg_buf_all_V_21_q0}}}, {pg_buf_all_V_20_q0}}}, {pg_buf_all_V_19_q0}}}, {pg_buf_all_V_18_q0}}}, {pg_buf_all_V_17_q0}}}, {pg_buf_all_V_16_q0}}}, {pg_buf_all_V_15_q0}}}, {pg_buf_all_V_14_q0}}}, {pg_buf_all_V_13_q0}}}, {pg_buf_all_V_12_q0}}}, {pg_buf_all_V_11_q0}}}, {pg_buf_all_V_10_q0}}}, {pg_buf_all_V_9_q0}}}, {pg_buf_all_V_8_q0}}}, {pg_buf_all_V_7_q0}}}, {pg_buf_all_V_6_q0}}}, {pg_buf_all_V_5_q0}}}, {pg_buf_all_V_4_q0}}}, {pg_buf_all_V_3_q0}}}, {pg_buf_all_V_2_q0}}}, {pg_buf_all_V_1_q0}}}, {pg_buf_all_V_0_q0}};

assign pg_buf0_V_0_address0 = zext_ln78_fu_868_p1;

assign pg_buf0_V_1_address0 = zext_ln78_fu_868_p1;

assign pg_buf0_V_1_d0 = p_Result_s_fu_880_p34;

assign pg_buf0_V_2_address0 = zext_ln78_fu_868_p1;

assign pg_buf0_V_2_d0 = p_Result_s_fu_880_p34;

assign pg_buf0_V_3_address0 = zext_ln78_fu_868_p1;

assign pg_buf0_V_3_d0 = p_Result_s_fu_880_p34;

assign pg_buf0_V_4_address0 = zext_ln78_fu_868_p1;

assign pg_buf0_V_4_d0 = p_Result_s_fu_880_p34;

assign pg_buf0_V_5_address0 = zext_ln78_fu_868_p1;

assign pg_buf0_V_5_d0 = p_Result_s_fu_880_p34;

assign pg_buf0_V_6_address0 = zext_ln78_fu_868_p1;

assign pg_buf0_V_6_d0 = p_Result_s_fu_880_p34;

assign pg_buf0_V_7_address0 = zext_ln78_fu_868_p1;

assign pg_buf0_V_7_d0 = p_Result_s_fu_880_p34;

assign pg_buf0_V_8_address0 = zext_ln78_fu_868_p1;

assign pg_buf_all_V_0_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_10_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_11_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_12_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_13_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_14_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_15_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_16_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_17_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_18_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_19_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_1_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_20_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_21_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_22_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_23_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_24_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_25_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_26_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_27_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_28_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_29_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_2_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_30_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_31_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_3_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_4_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_5_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_6_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_7_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_8_address0 = sext_ln77_fu_832_p1;

assign pg_buf_all_V_9_address0 = sext_ln77_fu_832_p1;

assign select_ln72_1_fu_810_p3 = ((icmp_ln73_fu_788_p2[0:0] === 1'b1) ? h_fu_782_p2 : ap_phi_mux_h_0_phi_fu_713_p4);

assign select_ln72_fu_802_p3 = ((icmp_ln73_fu_788_p2[0:0] === 1'b1) ? index_4_fu_776_p2 : ap_phi_mux_index_0_phi_fu_703_p4);

assign select_ln73_fu_794_p3 = ((icmp_ln73_fu_788_p2[0:0] === 1'b1) ? 4'd0 : w_0_reg_720);

assign sext_ln77_fu_832_p1 = $signed(add_ln77_fu_827_p2);

assign shl_ln_fu_735_p3 = {{trunc_ln71_fu_731_p1}, {3'd0}};

assign sub_ln71_fu_751_p2 = (zext_ln71_1_fu_743_p1 - zext_ln71_2_fu_747_p1);

assign trunc_ln71_fu_731_p1 = col[3:0];

assign w_fu_818_p2 = (select_ln73_fu_794_p3 + 4'd1);

assign zext_ln71_1_fu_743_p1 = shl_ln_fu_735_p3;

assign zext_ln71_2_fu_747_p1 = col;

assign zext_ln73_fu_824_p1 = select_ln73_reg_986;

assign zext_ln78_fu_868_p1 = select_ln73_reg_986_pp0_iter1_reg;

endmodule //load_buf_from_buf_al
