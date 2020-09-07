// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module compute_engine_64 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        ap_ce,
        b_V,
        w_V,
        ap_return
);

parameter    ap_ST_fsm_pp0_stage0 = 1'd1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input   ap_ce;
input  [63:0] b_V;
input  [63:0] w_V;
output  [5:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;

(* fsm_encoding = "none" *) reg   [0:0] ap_CS_fsm;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_enable_reg_pp0_iter0;
wire    ap_block_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
reg    ap_idle_pp0;
reg    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
reg    ap_block_pp0_stage0_11001;
wire   [3:0] lut16_V_1_address0;
reg    lut16_V_1_ce0;
wire   [2:0] lut16_V_1_q0;
wire   [3:0] lut16_V_1_address1;
reg    lut16_V_1_ce1;
wire   [2:0] lut16_V_1_q1;
wire   [3:0] lut16_V_1_address2;
reg    lut16_V_1_ce2;
wire   [2:0] lut16_V_1_q2;
wire   [3:0] lut16_V_1_address3;
reg    lut16_V_1_ce3;
wire   [2:0] lut16_V_1_q3;
wire   [3:0] lut16_V_1_address4;
reg    lut16_V_1_ce4;
wire   [2:0] lut16_V_1_q4;
wire   [3:0] lut16_V_1_address5;
reg    lut16_V_1_ce5;
wire   [2:0] lut16_V_1_q5;
wire   [3:0] lut16_V_1_address6;
reg    lut16_V_1_ce6;
wire   [2:0] lut16_V_1_q6;
wire   [3:0] lut16_V_1_address7;
reg    lut16_V_1_ce7;
wire   [2:0] lut16_V_1_q7;
wire   [3:0] lut16_V_1_address8;
reg    lut16_V_1_ce8;
wire   [2:0] lut16_V_1_q8;
wire   [3:0] lut16_V_1_address9;
reg    lut16_V_1_ce9;
wire   [2:0] lut16_V_1_q9;
wire   [3:0] lut16_V_1_address10;
reg    lut16_V_1_ce10;
wire   [2:0] lut16_V_1_q10;
wire   [3:0] lut16_V_1_address11;
reg    lut16_V_1_ce11;
wire   [2:0] lut16_V_1_q11;
wire   [3:0] lut16_V_1_address12;
reg    lut16_V_1_ce12;
wire   [2:0] lut16_V_1_q12;
wire   [3:0] lut16_V_1_address13;
reg    lut16_V_1_ce13;
wire   [2:0] lut16_V_1_q13;
wire   [3:0] lut16_V_1_address14;
reg    lut16_V_1_ce14;
wire   [2:0] lut16_V_1_q14;
wire   [3:0] lut16_V_1_address15;
reg    lut16_V_1_ce15;
wire   [2:0] lut16_V_1_q15;
reg    ap_block_pp0_stage0_subdone;
wire   [63:0] zext_ln16_fu_305_p1;
wire   [63:0] zext_ln16_1_fu_320_p1;
wire   [63:0] zext_ln17_fu_335_p1;
wire   [63:0] zext_ln17_1_fu_350_p1;
wire   [63:0] zext_ln18_fu_365_p1;
wire   [63:0] zext_ln18_1_fu_380_p1;
wire   [63:0] zext_ln19_fu_395_p1;
wire   [63:0] zext_ln19_1_fu_410_p1;
wire   [63:0] zext_ln20_fu_425_p1;
wire   [63:0] zext_ln20_1_fu_440_p1;
wire   [63:0] zext_ln21_fu_455_p1;
wire   [63:0] zext_ln21_1_fu_470_p1;
wire   [63:0] zext_ln22_fu_485_p1;
wire   [63:0] zext_ln22_1_fu_500_p1;
wire   [63:0] zext_ln23_fu_515_p1;
wire   [63:0] zext_ln23_1_fu_530_p1;
wire   [63:0] xor_ln769_fu_289_p2;
wire   [63:0] r_V_fu_295_p2;
wire   [3:0] trunc_ln681_fu_301_p1;
wire   [3:0] p_Result_1_fu_310_p4;
wire   [3:0] p_Result_s_fu_325_p4;
wire   [3:0] p_Result_2_fu_340_p4;
wire   [3:0] p_Result_3_fu_355_p4;
wire   [3:0] p_Result_4_fu_370_p4;
wire   [3:0] p_Result_5_fu_385_p4;
wire   [3:0] p_Result_6_fu_400_p4;
wire   [3:0] p_Result_7_fu_415_p4;
wire   [3:0] p_Result_8_fu_430_p4;
wire   [3:0] p_Result_9_fu_445_p4;
wire   [3:0] p_Result_10_fu_460_p4;
wire   [3:0] p_Result_11_fu_475_p4;
wire   [3:0] p_Result_12_fu_490_p4;
wire   [3:0] p_Result_13_fu_505_p4;
wire   [3:0] p_Result_14_fu_520_p4;
wire   [3:0] zext_ln215_1_fu_539_p1;
wire   [3:0] zext_ln215_fu_535_p1;
wire   [3:0] zext_ln215_3_fu_553_p1;
wire   [3:0] zext_ln215_2_fu_549_p1;
wire   [3:0] zext_ln215_5_fu_567_p1;
wire   [3:0] zext_ln215_4_fu_563_p1;
wire   [3:0] zext_ln215_7_fu_581_p1;
wire   [3:0] zext_ln215_6_fu_577_p1;
wire   [3:0] zext_ln215_9_fu_595_p1;
wire   [3:0] zext_ln215_8_fu_591_p1;
wire   [3:0] zext_ln215_11_fu_609_p1;
wire   [3:0] zext_ln215_10_fu_605_p1;
wire   [3:0] zext_ln215_13_fu_623_p1;
wire   [3:0] zext_ln215_12_fu_619_p1;
wire   [3:0] zext_ln215_15_fu_637_p1;
wire   [3:0] zext_ln215_14_fu_633_p1;
wire   [3:0] add0_V_fu_543_p2;
wire   [3:0] add1_V_fu_557_p2;
wire  signed [4:0] rhs_V_fu_651_p1;
wire  signed [4:0] lhs_V_fu_647_p1;
wire   [3:0] add2_V_fu_571_p2;
wire   [3:0] add3_V_fu_585_p2;
wire  signed [4:0] rhs_V_3_fu_665_p1;
wire  signed [4:0] lhs_V_4_fu_661_p1;
wire   [3:0] add4_V_fu_599_p2;
wire   [3:0] add5_V_fu_613_p2;
wire  signed [4:0] rhs_V_4_fu_679_p1;
wire  signed [4:0] lhs_V_5_fu_675_p1;
wire   [3:0] add6_V_fu_627_p2;
wire   [3:0] add7_V_fu_641_p2;
wire  signed [4:0] rhs_V_5_fu_693_p1;
wire  signed [4:0] lhs_V_6_fu_689_p1;
wire   [4:0] ret_V_fu_655_p2;
wire   [4:0] ret_V_4_fu_669_p2;
wire   [4:0] ret_V_5_fu_683_p2;
wire   [4:0] ret_V_6_fu_697_p2;
wire  signed [5:0] rhs_V_6_fu_707_p1;
wire  signed [5:0] lhs_V_7_fu_703_p1;
wire  signed [5:0] rhs_V_7_fu_715_p1;
wire  signed [5:0] lhs_V_8_fu_711_p1;
wire   [5:0] add_ln214_1_fu_719_p2;
wire   [5:0] add_ln214_2_fu_725_p2;
reg   [0:0] ap_NS_fsm;
reg    ap_idle_pp0_0to0;
reg    ap_reset_idle_pp0;
reg    ap_reset_start_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 ap_CS_fsm = 1'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
end

compute_engine_64eOg #(
    .DataWidth( 3 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
lut16_V_1_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(lut16_V_1_address0),
    .ce0(lut16_V_1_ce0),
    .q0(lut16_V_1_q0),
    .address1(lut16_V_1_address1),
    .ce1(lut16_V_1_ce1),
    .q1(lut16_V_1_q1),
    .address2(lut16_V_1_address2),
    .ce2(lut16_V_1_ce2),
    .q2(lut16_V_1_q2),
    .address3(lut16_V_1_address3),
    .ce3(lut16_V_1_ce3),
    .q3(lut16_V_1_q3),
    .address4(lut16_V_1_address4),
    .ce4(lut16_V_1_ce4),
    .q4(lut16_V_1_q4),
    .address5(lut16_V_1_address5),
    .ce5(lut16_V_1_ce5),
    .q5(lut16_V_1_q5),
    .address6(lut16_V_1_address6),
    .ce6(lut16_V_1_ce6),
    .q6(lut16_V_1_q6),
    .address7(lut16_V_1_address7),
    .ce7(lut16_V_1_ce7),
    .q7(lut16_V_1_q7),
    .address8(lut16_V_1_address8),
    .ce8(lut16_V_1_ce8),
    .q8(lut16_V_1_q8),
    .address9(lut16_V_1_address9),
    .ce9(lut16_V_1_ce9),
    .q9(lut16_V_1_q9),
    .address10(lut16_V_1_address10),
    .ce10(lut16_V_1_ce10),
    .q10(lut16_V_1_q10),
    .address11(lut16_V_1_address11),
    .ce11(lut16_V_1_ce11),
    .q11(lut16_V_1_q11),
    .address12(lut16_V_1_address12),
    .ce12(lut16_V_1_ce12),
    .q12(lut16_V_1_q12),
    .address13(lut16_V_1_address13),
    .ce13(lut16_V_1_ce13),
    .q13(lut16_V_1_q13),
    .address14(lut16_V_1_address14),
    .ce14(lut16_V_1_ce14),
    .q14(lut16_V_1_q14),
    .address15(lut16_V_1_address15),
    .ce15(lut16_V_1_ce15),
    .q15(lut16_V_1_q15)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter1 <= ap_start;
        end
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b0 == ap_block_pp0_stage0) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | ((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (ap_idle_pp0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter0 == 1'b0)) begin
        ap_idle_pp0_0to0 = 1'b1;
    end else begin
        ap_idle_pp0_0to0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (ap_idle_pp0_0to0 == 1'b1))) begin
        ap_reset_idle_pp0 = 1'b1;
    end else begin
        ap_reset_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (ap_idle_pp0_0to0 == 1'b1))) begin
        ap_reset_start_pp0 = 1'b1;
    end else begin
        ap_reset_start_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        lut16_V_1_ce0 = 1'b1;
    end else begin
        lut16_V_1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        lut16_V_1_ce1 = 1'b1;
    end else begin
        lut16_V_1_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        lut16_V_1_ce10 = 1'b1;
    end else begin
        lut16_V_1_ce10 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        lut16_V_1_ce11 = 1'b1;
    end else begin
        lut16_V_1_ce11 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        lut16_V_1_ce12 = 1'b1;
    end else begin
        lut16_V_1_ce12 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        lut16_V_1_ce13 = 1'b1;
    end else begin
        lut16_V_1_ce13 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        lut16_V_1_ce14 = 1'b1;
    end else begin
        lut16_V_1_ce14 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        lut16_V_1_ce15 = 1'b1;
    end else begin
        lut16_V_1_ce15 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        lut16_V_1_ce2 = 1'b1;
    end else begin
        lut16_V_1_ce2 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        lut16_V_1_ce3 = 1'b1;
    end else begin
        lut16_V_1_ce3 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        lut16_V_1_ce4 = 1'b1;
    end else begin
        lut16_V_1_ce4 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        lut16_V_1_ce5 = 1'b1;
    end else begin
        lut16_V_1_ce5 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        lut16_V_1_ce6 = 1'b1;
    end else begin
        lut16_V_1_ce6 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        lut16_V_1_ce7 = 1'b1;
    end else begin
        lut16_V_1_ce7 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        lut16_V_1_ce8 = 1'b1;
    end else begin
        lut16_V_1_ce8 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        lut16_V_1_ce9 = 1'b1;
    end else begin
        lut16_V_1_ce9 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_pp0_stage0 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add0_V_fu_543_p2 = (zext_ln215_1_fu_539_p1 + zext_ln215_fu_535_p1);

assign add1_V_fu_557_p2 = (zext_ln215_3_fu_553_p1 + zext_ln215_2_fu_549_p1);

assign add2_V_fu_571_p2 = (zext_ln215_5_fu_567_p1 + zext_ln215_4_fu_563_p1);

assign add3_V_fu_585_p2 = (zext_ln215_7_fu_581_p1 + zext_ln215_6_fu_577_p1);

assign add4_V_fu_599_p2 = (zext_ln215_9_fu_595_p1 + zext_ln215_8_fu_591_p1);

assign add5_V_fu_613_p2 = (zext_ln215_11_fu_609_p1 + zext_ln215_10_fu_605_p1);

assign add6_V_fu_627_p2 = (zext_ln215_13_fu_623_p1 + zext_ln215_12_fu_619_p1);

assign add7_V_fu_641_p2 = (zext_ln215_15_fu_637_p1 + zext_ln215_14_fu_633_p1);

assign add_ln214_1_fu_719_p2 = ($signed(rhs_V_6_fu_707_p1) + $signed(lhs_V_7_fu_703_p1));

assign add_ln214_2_fu_725_p2 = ($signed(rhs_V_7_fu_715_p1) + $signed(lhs_V_8_fu_711_p1));

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd0];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_11001 = ((ap_start == 1'b0) & (ap_start == 1'b1));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = ((1'b0 == ap_ce) | ((ap_start == 1'b0) & (ap_start == 1'b1)));
end

always @ (*) begin
    ap_block_state1_pp0_stage0_iter0 = (ap_start == 1'b0);
end

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_enable_reg_pp0_iter0 = ap_start;

assign ap_return = (add_ln214_1_fu_719_p2 + add_ln214_2_fu_725_p2);

assign lhs_V_4_fu_661_p1 = $signed(add2_V_fu_571_p2);

assign lhs_V_5_fu_675_p1 = $signed(add4_V_fu_599_p2);

assign lhs_V_6_fu_689_p1 = $signed(add6_V_fu_627_p2);

assign lhs_V_7_fu_703_p1 = $signed(ret_V_fu_655_p2);

assign lhs_V_8_fu_711_p1 = $signed(ret_V_5_fu_683_p2);

assign lhs_V_fu_647_p1 = $signed(add0_V_fu_543_p2);

assign lut16_V_1_address0 = zext_ln16_fu_305_p1;

assign lut16_V_1_address1 = zext_ln16_1_fu_320_p1;

assign lut16_V_1_address10 = zext_ln21_fu_455_p1;

assign lut16_V_1_address11 = zext_ln21_1_fu_470_p1;

assign lut16_V_1_address12 = zext_ln22_fu_485_p1;

assign lut16_V_1_address13 = zext_ln22_1_fu_500_p1;

assign lut16_V_1_address14 = zext_ln23_fu_515_p1;

assign lut16_V_1_address15 = zext_ln23_1_fu_530_p1;

assign lut16_V_1_address2 = zext_ln17_fu_335_p1;

assign lut16_V_1_address3 = zext_ln17_1_fu_350_p1;

assign lut16_V_1_address4 = zext_ln18_fu_365_p1;

assign lut16_V_1_address5 = zext_ln18_1_fu_380_p1;

assign lut16_V_1_address6 = zext_ln19_fu_395_p1;

assign lut16_V_1_address7 = zext_ln19_1_fu_410_p1;

assign lut16_V_1_address8 = zext_ln20_fu_425_p1;

assign lut16_V_1_address9 = zext_ln20_1_fu_440_p1;

assign p_Result_10_fu_460_p4 = {{r_V_fu_295_p2[47:44]}};

assign p_Result_11_fu_475_p4 = {{r_V_fu_295_p2[51:48]}};

assign p_Result_12_fu_490_p4 = {{r_V_fu_295_p2[55:52]}};

assign p_Result_13_fu_505_p4 = {{r_V_fu_295_p2[59:56]}};

assign p_Result_14_fu_520_p4 = {{r_V_fu_295_p2[63:60]}};

assign p_Result_1_fu_310_p4 = {{r_V_fu_295_p2[7:4]}};

assign p_Result_2_fu_340_p4 = {{r_V_fu_295_p2[15:12]}};

assign p_Result_3_fu_355_p4 = {{r_V_fu_295_p2[19:16]}};

assign p_Result_4_fu_370_p4 = {{r_V_fu_295_p2[23:20]}};

assign p_Result_5_fu_385_p4 = {{r_V_fu_295_p2[27:24]}};

assign p_Result_6_fu_400_p4 = {{r_V_fu_295_p2[31:28]}};

assign p_Result_7_fu_415_p4 = {{r_V_fu_295_p2[35:32]}};

assign p_Result_8_fu_430_p4 = {{r_V_fu_295_p2[39:36]}};

assign p_Result_9_fu_445_p4 = {{r_V_fu_295_p2[43:40]}};

assign p_Result_s_fu_325_p4 = {{r_V_fu_295_p2[11:8]}};

assign r_V_fu_295_p2 = (xor_ln769_fu_289_p2 ^ b_V);

assign ret_V_4_fu_669_p2 = ($signed(rhs_V_3_fu_665_p1) + $signed(lhs_V_4_fu_661_p1));

assign ret_V_5_fu_683_p2 = ($signed(rhs_V_4_fu_679_p1) + $signed(lhs_V_5_fu_675_p1));

assign ret_V_6_fu_697_p2 = ($signed(rhs_V_5_fu_693_p1) + $signed(lhs_V_6_fu_689_p1));

assign ret_V_fu_655_p2 = ($signed(rhs_V_fu_651_p1) + $signed(lhs_V_fu_647_p1));

assign rhs_V_3_fu_665_p1 = $signed(add3_V_fu_585_p2);

assign rhs_V_4_fu_679_p1 = $signed(add5_V_fu_613_p2);

assign rhs_V_5_fu_693_p1 = $signed(add7_V_fu_641_p2);

assign rhs_V_6_fu_707_p1 = $signed(ret_V_4_fu_669_p2);

assign rhs_V_7_fu_715_p1 = $signed(ret_V_6_fu_697_p2);

assign rhs_V_fu_651_p1 = $signed(add1_V_fu_557_p2);

assign trunc_ln681_fu_301_p1 = r_V_fu_295_p2[3:0];

assign xor_ln769_fu_289_p2 = (w_V ^ 64'd18446744073709551615);

assign zext_ln16_1_fu_320_p1 = p_Result_1_fu_310_p4;

assign zext_ln16_fu_305_p1 = trunc_ln681_fu_301_p1;

assign zext_ln17_1_fu_350_p1 = p_Result_2_fu_340_p4;

assign zext_ln17_fu_335_p1 = p_Result_s_fu_325_p4;

assign zext_ln18_1_fu_380_p1 = p_Result_4_fu_370_p4;

assign zext_ln18_fu_365_p1 = p_Result_3_fu_355_p4;

assign zext_ln19_1_fu_410_p1 = p_Result_6_fu_400_p4;

assign zext_ln19_fu_395_p1 = p_Result_5_fu_385_p4;

assign zext_ln20_1_fu_440_p1 = p_Result_8_fu_430_p4;

assign zext_ln20_fu_425_p1 = p_Result_7_fu_415_p4;

assign zext_ln215_10_fu_605_p1 = lut16_V_1_q10;

assign zext_ln215_11_fu_609_p1 = lut16_V_1_q11;

assign zext_ln215_12_fu_619_p1 = lut16_V_1_q12;

assign zext_ln215_13_fu_623_p1 = lut16_V_1_q13;

assign zext_ln215_14_fu_633_p1 = lut16_V_1_q14;

assign zext_ln215_15_fu_637_p1 = lut16_V_1_q15;

assign zext_ln215_1_fu_539_p1 = lut16_V_1_q1;

assign zext_ln215_2_fu_549_p1 = lut16_V_1_q2;

assign zext_ln215_3_fu_553_p1 = lut16_V_1_q3;

assign zext_ln215_4_fu_563_p1 = lut16_V_1_q4;

assign zext_ln215_5_fu_567_p1 = lut16_V_1_q5;

assign zext_ln215_6_fu_577_p1 = lut16_V_1_q6;

assign zext_ln215_7_fu_581_p1 = lut16_V_1_q7;

assign zext_ln215_8_fu_591_p1 = lut16_V_1_q8;

assign zext_ln215_9_fu_595_p1 = lut16_V_1_q9;

assign zext_ln215_fu_535_p1 = lut16_V_1_q0;

assign zext_ln21_1_fu_470_p1 = p_Result_10_fu_460_p4;

assign zext_ln21_fu_455_p1 = p_Result_9_fu_445_p4;

assign zext_ln22_1_fu_500_p1 = p_Result_12_fu_490_p4;

assign zext_ln22_fu_485_p1 = p_Result_11_fu_475_p4;

assign zext_ln23_1_fu_530_p1 = p_Result_14_fu_520_p4;

assign zext_ln23_fu_515_p1 = p_Result_13_fu_505_p4;

endmodule //compute_engine_64
