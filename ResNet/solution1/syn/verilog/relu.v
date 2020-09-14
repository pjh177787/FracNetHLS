// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module relu (
        ap_ready,
        norm_V,
        ap_return
);


output   ap_ready;
input  [11:0] norm_V;
output  [11:0] ap_return;

wire  signed [11:0] lhs_V_fu_70_p0;
wire  signed [12:0] lhs_V_fu_70_p1;
wire   [12:0] ret_V_fu_74_p2;
wire  signed [11:0] tmp_V_fu_88_p1;
wire   [11:0] tmp_V_fu_88_p2;
wire   [0:0] p_Result_1_fu_94_p3;
wire   [0:0] p_Result_s_fu_80_p3;
wire   [0:0] xor_ln786_fu_102_p2;
wire   [0:0] xor_ln340_fu_120_p2;
wire   [0:0] xor_ln340_1_fu_114_p2;
wire   [0:0] underflow_fu_108_p2;
wire   [0:0] or_ln340_fu_126_p2;
wire   [11:0] select_ln340_fu_132_p3;
wire   [11:0] select_ln388_fu_140_p3;
wire  signed [11:0] p_Val2_2_fu_148_p3;
wire   [10:0] trunc_ln703_fu_162_p1;
wire   [11:0] p_Val2_3_fu_166_p2;
wire   [21:0] tmp_fu_190_p3;
wire  signed [22:0] sext_ln1118_fu_198_p1;
wire  signed [22:0] r_V_fu_186_p1;
wire   [22:0] r_V_2_fu_202_p2;
wire   [19:0] trunc_ln1192_fu_208_p1;
wire   [22:0] ret_V_1_fu_212_p2;
wire   [0:0] tmp_8_fu_250_p3;
wire   [11:0] p_Val2_6_fu_232_p4;
wire   [11:0] zext_ln415_fu_258_p1;
wire   [11:0] p_Val2_7_fu_262_p2;
wire   [0:0] tmp_9_fu_268_p3;
wire   [0:0] p_Result_4_fu_242_p3;
wire   [0:0] xor_ln416_fu_276_p2;
wire   [2:0] tmp_1_fu_296_p4;
wire   [3:0] tmp_2_fu_312_p4;
wire   [0:0] carry_1_fu_282_p2;
wire   [0:0] Range1_all_ones_fu_322_p2;
wire   [0:0] Range1_all_zeros_fu_328_p2;
wire   [0:0] p_Result_2_fu_178_p3;
wire   [10:0] add_ln746_fu_172_p2;
wire   [10:0] select_ln746_fu_342_p3;
wire   [19:0] add_ln1192_1_fu_218_p2;
wire   [0:0] tmp_11_fu_354_p3;
wire   [0:0] Range2_all_ones_fu_306_p2;
wire   [0:0] xor_ln779_fu_362_p2;
wire   [0:0] and_ln779_fu_368_p2;
wire   [0:0] deleted_zeros_fu_334_p3;
wire   [0:0] p_Result_5_fu_288_p3;
wire   [0:0] xor_ln785_fu_388_p2;
wire   [0:0] p_Result_3_fu_224_p3;
wire   [0:0] or_ln785_fu_394_p2;
wire   [0:0] xor_ln785_1_fu_400_p2;
wire   [0:0] deleted_ones_fu_374_p3;
wire   [0:0] and_ln781_fu_382_p2;
wire   [0:0] and_ln786_fu_412_p2;
wire   [0:0] or_ln786_fu_418_p2;
wire   [0:0] xor_ln786_1_fu_424_p2;
wire   [0:0] underflow_1_fu_430_p2;
wire   [0:0] overflow_fu_406_p2;
wire   [0:0] or_ln340_2_fu_442_p2;
wire   [0:0] or_ln340_1_fu_436_p2;
wire   [0:0] icmp_ln1494_fu_156_p2;
wire   [11:0] zext_ln746_fu_350_p1;
wire   [11:0] select_ln388_1_fu_462_p3;
wire   [0:0] or_ln340_3_fu_448_p2;
wire   [0:0] xor_ln1494_fu_478_p2;
wire   [0:0] and_ln340_fu_484_p2;
wire   [11:0] select_ln340_2_fu_454_p3;
wire   [11:0] sel_tmp4_fu_470_p3;

assign Range1_all_ones_fu_322_p2 = ((tmp_2_fu_312_p4 == 4'd15) ? 1'b1 : 1'b0);

assign Range1_all_zeros_fu_328_p2 = ((tmp_2_fu_312_p4 == 4'd0) ? 1'b1 : 1'b0);

assign Range2_all_ones_fu_306_p2 = ((tmp_1_fu_296_p4 == 3'd7) ? 1'b1 : 1'b0);

assign add_ln1192_1_fu_218_p2 = (20'd261888 + trunc_ln1192_fu_208_p1);

assign add_ln746_fu_172_p2 = ($signed(11'd2046) + $signed(trunc_ln703_fu_162_p1));

assign and_ln340_fu_484_p2 = (xor_ln1494_fu_478_p2 & or_ln340_3_fu_448_p2);

assign and_ln779_fu_368_p2 = (xor_ln779_fu_362_p2 & Range2_all_ones_fu_306_p2);

assign and_ln781_fu_382_p2 = (carry_1_fu_282_p2 & Range1_all_ones_fu_322_p2);

assign and_ln786_fu_412_p2 = (p_Result_5_fu_288_p3 & deleted_ones_fu_374_p3);

assign ap_ready = 1'b1;

assign ap_return = ((and_ln340_fu_484_p2[0:0] === 1'b1) ? select_ln340_2_fu_454_p3 : sel_tmp4_fu_470_p3);

assign carry_1_fu_282_p2 = (xor_ln416_fu_276_p2 & p_Result_4_fu_242_p3);

assign deleted_ones_fu_374_p3 = ((carry_1_fu_282_p2[0:0] === 1'b1) ? and_ln779_fu_368_p2 : Range1_all_ones_fu_322_p2);

assign deleted_zeros_fu_334_p3 = ((carry_1_fu_282_p2[0:0] === 1'b1) ? Range1_all_ones_fu_322_p2 : Range1_all_zeros_fu_328_p2);

assign icmp_ln1494_fu_156_p2 = (($signed(p_Val2_2_fu_148_p3) > $signed(12'd0)) ? 1'b1 : 1'b0);

assign lhs_V_fu_70_p0 = norm_V;

assign lhs_V_fu_70_p1 = lhs_V_fu_70_p0;

assign or_ln340_1_fu_436_p2 = (underflow_1_fu_430_p2 | overflow_fu_406_p2);

assign or_ln340_2_fu_442_p2 = (xor_ln785_1_fu_400_p2 | and_ln786_fu_412_p2);

assign or_ln340_3_fu_448_p2 = (or_ln340_2_fu_442_p2 | and_ln781_fu_382_p2);

assign or_ln340_fu_126_p2 = (xor_ln340_fu_120_p2 | p_Result_1_fu_94_p3);

assign or_ln785_fu_394_p2 = (xor_ln785_fu_388_p2 | p_Result_5_fu_288_p3);

assign or_ln786_fu_418_p2 = (and_ln786_fu_412_p2 | and_ln781_fu_382_p2);

assign overflow_fu_406_p2 = (xor_ln785_1_fu_400_p2 & or_ln785_fu_394_p2);

assign p_Result_1_fu_94_p3 = tmp_V_fu_88_p2[32'd11];

assign p_Result_2_fu_178_p3 = p_Val2_3_fu_166_p2[32'd11];

assign p_Result_3_fu_224_p3 = ret_V_1_fu_212_p2[32'd22];

assign p_Result_4_fu_242_p3 = ret_V_1_fu_212_p2[32'd18];

assign p_Result_5_fu_288_p3 = p_Val2_7_fu_262_p2[32'd11];

assign p_Result_s_fu_80_p3 = ret_V_fu_74_p2[32'd12];

assign p_Val2_2_fu_148_p3 = ((or_ln340_fu_126_p2[0:0] === 1'b1) ? select_ln340_fu_132_p3 : select_ln388_fu_140_p3);

assign p_Val2_3_fu_166_p2 = ($signed(12'd2046) + $signed(p_Val2_2_fu_148_p3));

assign p_Val2_6_fu_232_p4 = {{ret_V_1_fu_212_p2[18:7]}};

assign p_Val2_7_fu_262_p2 = (p_Val2_6_fu_232_p4 + zext_ln415_fu_258_p1);

assign r_V_2_fu_202_p2 = ($signed(sext_ln1118_fu_198_p1) - $signed(r_V_fu_186_p1));

assign r_V_fu_186_p1 = p_Val2_2_fu_148_p3;

assign ret_V_1_fu_212_p2 = (23'd261888 + r_V_2_fu_202_p2);

assign ret_V_fu_74_p2 = ($signed(13'd2046) + $signed(lhs_V_fu_70_p1));

assign sel_tmp4_fu_470_p3 = ((icmp_ln1494_fu_156_p2[0:0] === 1'b1) ? zext_ln746_fu_350_p1 : select_ln388_1_fu_462_p3);

assign select_ln340_2_fu_454_p3 = ((or_ln340_1_fu_436_p2[0:0] === 1'b1) ? 12'd2047 : p_Val2_7_fu_262_p2);

assign select_ln340_fu_132_p3 = ((xor_ln340_1_fu_114_p2[0:0] === 1'b1) ? 12'd2047 : tmp_V_fu_88_p2);

assign select_ln388_1_fu_462_p3 = ((underflow_1_fu_430_p2[0:0] === 1'b1) ? 12'd2048 : p_Val2_7_fu_262_p2);

assign select_ln388_fu_140_p3 = ((underflow_fu_108_p2[0:0] === 1'b1) ? 12'd2048 : tmp_V_fu_88_p2);

assign select_ln746_fu_342_p3 = ((p_Result_2_fu_178_p3[0:0] === 1'b1) ? 11'd2047 : add_ln746_fu_172_p2);

assign sext_ln1118_fu_198_p1 = $signed(tmp_fu_190_p3);

assign tmp_11_fu_354_p3 = add_ln1192_1_fu_218_p2[32'd19];

assign tmp_1_fu_296_p4 = {{ret_V_1_fu_212_p2[22:20]}};

assign tmp_2_fu_312_p4 = {{ret_V_1_fu_212_p2[22:19]}};

assign tmp_8_fu_250_p3 = ret_V_1_fu_212_p2[32'd6];

assign tmp_9_fu_268_p3 = p_Val2_7_fu_262_p2[32'd11];

assign tmp_V_fu_88_p1 = norm_V;

assign tmp_V_fu_88_p2 = ($signed(12'd2046) + $signed(tmp_V_fu_88_p1));

assign tmp_fu_190_p3 = {{p_Val2_2_fu_148_p3}, {10'd0}};

assign trunc_ln1192_fu_208_p1 = r_V_2_fu_202_p2[19:0];

assign trunc_ln703_fu_162_p1 = p_Val2_2_fu_148_p3[10:0];

assign underflow_1_fu_430_p2 = (xor_ln786_1_fu_424_p2 & p_Result_3_fu_224_p3);

assign underflow_fu_108_p2 = (xor_ln786_fu_102_p2 & p_Result_s_fu_80_p3);

assign xor_ln1494_fu_478_p2 = (icmp_ln1494_fu_156_p2 ^ 1'd1);

assign xor_ln340_1_fu_114_p2 = (p_Result_s_fu_80_p3 ^ p_Result_1_fu_94_p3);

assign xor_ln340_fu_120_p2 = (p_Result_s_fu_80_p3 ^ 1'd1);

assign xor_ln416_fu_276_p2 = (tmp_9_fu_268_p3 ^ 1'd1);

assign xor_ln779_fu_362_p2 = (tmp_11_fu_354_p3 ^ 1'd1);

assign xor_ln785_1_fu_400_p2 = (p_Result_3_fu_224_p3 ^ 1'd1);

assign xor_ln785_fu_388_p2 = (deleted_zeros_fu_334_p3 ^ 1'd1);

assign xor_ln786_1_fu_424_p2 = (or_ln786_fu_418_p2 ^ 1'd1);

assign xor_ln786_fu_102_p2 = (p_Result_1_fu_94_p3 ^ 1'd1);

assign zext_ln415_fu_258_p1 = tmp_8_fu_250_p3;

assign zext_ln746_fu_350_p1 = select_ln746_fu_342_p3;

endmodule //relu