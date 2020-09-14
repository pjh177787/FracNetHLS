// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module batch_norm (
        ap_ready,
        sum_V,
        ap_return
);


output   ap_ready;
input  [7:0] sum_V;
output  [11:0] ap_return;

wire   [17:0] tmp_s_fu_40_p3;
wire   [18:0] zext_ln1118_fu_48_p1;
wire   [18:0] r_V_fu_36_p1;
wire   [18:0] r_V_9_fu_52_p2;
wire   [17:0] trunc_ln703_fu_58_p1;
wire   [10:0] trunc_ln731_fu_68_p1;
wire   [10:0] add_ln731_fu_72_p2;
wire   [17:0] ret_V_fu_62_p2;
wire   [6:0] tmp_fu_94_p4;
wire   [0:0] p_Result_s_fu_86_p3;
wire   [0:0] icmp_ln785_fu_104_p2;
wire   [0:0] or_ln785_fu_110_p2;
wire   [11:0] p_Val2_23_fu_78_p3;

assign add_ln731_fu_72_p2 = (11'd1023 + trunc_ln731_fu_68_p1);

assign ap_ready = 1'b1;

assign ap_return = ((or_ln785_fu_110_p2[0:0] === 1'b1) ? 12'd2047 : p_Val2_23_fu_78_p3);

assign icmp_ln785_fu_104_p2 = ((tmp_fu_94_p4 != 7'd0) ? 1'b1 : 1'b0);

assign or_ln785_fu_110_p2 = (p_Result_s_fu_86_p3 | icmp_ln785_fu_104_p2);

assign p_Result_s_fu_86_p3 = add_ln731_fu_72_p2[32'd10];

assign p_Val2_23_fu_78_p3 = {{add_ln731_fu_72_p2}, {1'd0}};

assign r_V_9_fu_52_p2 = (zext_ln1118_fu_48_p1 - r_V_fu_36_p1);

assign r_V_fu_36_p1 = sum_V;

assign ret_V_fu_62_p2 = (18'd1023 + trunc_ln703_fu_58_p1);

assign tmp_fu_94_p4 = {{ret_V_fu_62_p2[17:11]}};

assign tmp_s_fu_40_p3 = {{sum_V}, {10'd0}};

assign trunc_ln703_fu_58_p1 = r_V_9_fu_52_p2[17:0];

assign trunc_ln731_fu_68_p1 = r_V_9_fu_52_p2[10:0];

assign zext_ln1118_fu_48_p1 = tmp_s_fu_40_p3;

endmodule //batch_norm