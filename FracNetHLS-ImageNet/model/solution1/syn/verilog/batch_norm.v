// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module batch_norm (
        ap_clk,
        ap_rst,
        sum_V,
        weight_V,
        bias_V,
        ap_return,
        ap_ce
);


input   ap_clk;
input   ap_rst;
input  [7:0] sum_V;
input  [10:0] weight_V;
input  [10:0] bias_V;
output  [13:0] ap_return;
input   ap_ce;

reg[13:0] ap_return;

reg   [10:0] bias_V_read_reg_295;
wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_state3_pp0_stage0_iter2;
wire    ap_block_pp0_stage0_11001;
reg   [10:0] bias_V_read_reg_295_pp0_iter1_reg;
wire  signed [18:0] r_V_4_fu_286_p2;
reg  signed [18:0] r_V_4_reg_300;
reg   [0:0] p_Result_s_reg_305;
wire   [12:0] trunc_ln731_fu_75_p1;
reg   [12:0] trunc_ln731_reg_311;
reg   [0:0] p_Result_7_reg_316;
wire  signed [13:0] p_Val2_18_fu_179_p3;
reg  signed [13:0] p_Val2_18_reg_322;
wire    ap_block_pp0_stage0;
wire   [5:0] p_Result_s_52_fu_92_p4;
wire   [0:0] icmp_ln785_fu_101_p2;
wire   [0:0] or_ln785_fu_107_p2;
wire   [0:0] xor_ln785_fu_112_p2;
wire   [0:0] icmp_ln786_fu_128_p2;
wire   [0:0] xor_ln786_fu_123_p2;
wire   [0:0] or_ln786_fu_134_p2;
wire   [0:0] underflow_fu_140_p2;
wire   [0:0] overflow_fu_117_p2;
wire   [0:0] xor_ln340_fu_151_p2;
wire   [0:0] or_ln340_fu_145_p2;
wire   [13:0] sw_V_fu_85_p3;
wire   [0:0] or_ln340_35_fu_157_p2;
wire   [13:0] select_ln340_fu_163_p3;
wire   [13:0] select_ln388_fu_171_p3;
wire  signed [11:0] rhs_V_fu_190_p3;
wire  signed [14:0] lhs_V_fu_187_p1;
wire  signed [14:0] sext_ln728_fu_197_p1;
wire   [14:0] ret_V_fu_205_p2;
wire  signed [13:0] sext_ln1192_fu_201_p1;
wire   [13:0] p_Val2_20_fu_219_p2;
wire   [0:0] p_Result_9_fu_224_p3;
wire   [0:0] p_Result_8_fu_211_p3;
wire   [0:0] xor_ln786_9_fu_232_p2;
wire   [0:0] xor_ln340_174_fu_250_p2;
wire   [0:0] xor_ln340_316_fu_244_p2;
wire   [0:0] underflow_3_fu_238_p2;
wire   [0:0] or_ln340_444_fu_256_p2;
wire   [13:0] select_ln340_492_fu_262_p3;
wire   [13:0] select_ln388_173_fu_270_p3;
wire   [7:0] r_V_4_fu_286_p0;
wire   [13:0] select_ln340_525_fu_278_p3;
reg    ap_ce_reg;
reg   [7:0] sum_V_int_reg;
reg  signed [10:0] weight_V_int_reg;
reg   [10:0] bias_V_int_reg;
reg   [13:0] ap_return_int_reg;
wire   [18:0] r_V_4_fu_286_p00;

FracNet_mul_mul_8fYi #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 8 ),
    .din1_WIDTH( 11 ),
    .dout_WIDTH( 19 ))
FracNet_mul_mul_8fYi_U25(
    .din0(r_V_4_fu_286_p0),
    .din1(weight_V_int_reg),
    .dout(r_V_4_fu_286_p2)
);

always @ (posedge ap_clk) begin
    ap_ce_reg <= ap_ce;
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_ce_reg)) begin
        ap_return_int_reg <= select_ln340_525_fu_278_p3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_ce)) begin
        bias_V_int_reg <= bias_V;
        sum_V_int_reg <= sum_V;
        weight_V_int_reg <= weight_V;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_ce_reg))) begin
        bias_V_read_reg_295 <= bias_V_int_reg;
        bias_V_read_reg_295_pp0_iter1_reg <= bias_V_read_reg_295;
        p_Result_7_reg_316 <= r_V_4_fu_286_p2[32'd12];
        p_Result_s_reg_305 <= r_V_4_fu_286_p2[32'd18];
        p_Val2_18_reg_322 <= p_Val2_18_fu_179_p3;
        r_V_4_reg_300 <= r_V_4_fu_286_p2;
        trunc_ln731_reg_311 <= trunc_ln731_fu_75_p1;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return = ap_return_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return = select_ln340_525_fu_278_p3;
    end
end

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign icmp_ln785_fu_101_p2 = ((p_Result_s_52_fu_92_p4 != 6'd0) ? 1'b1 : 1'b0);

assign icmp_ln786_fu_128_p2 = ((p_Result_s_52_fu_92_p4 != 6'd63) ? 1'b1 : 1'b0);

assign lhs_V_fu_187_p1 = p_Val2_18_reg_322;

assign or_ln340_35_fu_157_p2 = (xor_ln340_fu_151_p2 | overflow_fu_117_p2);

assign or_ln340_444_fu_256_p2 = (xor_ln340_174_fu_250_p2 | p_Result_9_fu_224_p3);

assign or_ln340_fu_145_p2 = (underflow_fu_140_p2 | overflow_fu_117_p2);

assign or_ln785_fu_107_p2 = (p_Result_7_reg_316 | icmp_ln785_fu_101_p2);

assign or_ln786_fu_134_p2 = (xor_ln786_fu_123_p2 | icmp_ln786_fu_128_p2);

assign overflow_fu_117_p2 = (xor_ln785_fu_112_p2 & or_ln785_fu_107_p2);

assign p_Result_8_fu_211_p3 = ret_V_fu_205_p2[32'd14];

assign p_Result_9_fu_224_p3 = p_Val2_20_fu_219_p2[32'd13];

assign p_Result_s_52_fu_92_p4 = {{r_V_4_reg_300[18:13]}};

assign p_Val2_18_fu_179_p3 = ((or_ln340_35_fu_157_p2[0:0] === 1'b1) ? select_ln340_fu_163_p3 : select_ln388_fu_171_p3);

assign p_Val2_20_fu_219_p2 = ($signed(sext_ln1192_fu_201_p1) + $signed(p_Val2_18_reg_322));

assign r_V_4_fu_286_p0 = r_V_4_fu_286_p00;

assign r_V_4_fu_286_p00 = sum_V_int_reg;

assign ret_V_fu_205_p2 = ($signed(lhs_V_fu_187_p1) + $signed(sext_ln728_fu_197_p1));

assign rhs_V_fu_190_p3 = {{bias_V_read_reg_295_pp0_iter1_reg}, {1'd0}};

assign select_ln340_492_fu_262_p3 = ((xor_ln340_316_fu_244_p2[0:0] === 1'b1) ? 14'd8191 : p_Val2_20_fu_219_p2);

assign select_ln340_525_fu_278_p3 = ((or_ln340_444_fu_256_p2[0:0] === 1'b1) ? select_ln340_492_fu_262_p3 : select_ln388_173_fu_270_p3);

assign select_ln340_fu_163_p3 = ((or_ln340_fu_145_p2[0:0] === 1'b1) ? 14'd8191 : sw_V_fu_85_p3);

assign select_ln388_173_fu_270_p3 = ((underflow_3_fu_238_p2[0:0] === 1'b1) ? 14'd8192 : p_Val2_20_fu_219_p2);

assign select_ln388_fu_171_p3 = ((underflow_fu_140_p2[0:0] === 1'b1) ? 14'd8192 : sw_V_fu_85_p3);

assign sext_ln1192_fu_201_p1 = rhs_V_fu_190_p3;

assign sext_ln728_fu_197_p1 = rhs_V_fu_190_p3;

assign sw_V_fu_85_p3 = {{trunc_ln731_reg_311}, {1'd0}};

assign trunc_ln731_fu_75_p1 = r_V_4_fu_286_p2[12:0];

assign underflow_3_fu_238_p2 = (xor_ln786_9_fu_232_p2 & p_Result_8_fu_211_p3);

assign underflow_fu_140_p2 = (p_Result_s_reg_305 & or_ln786_fu_134_p2);

assign xor_ln340_174_fu_250_p2 = (p_Result_8_fu_211_p3 ^ 1'd1);

assign xor_ln340_316_fu_244_p2 = (p_Result_9_fu_224_p3 ^ p_Result_8_fu_211_p3);

assign xor_ln340_fu_151_p2 = (underflow_fu_140_p2 ^ 1'd1);

assign xor_ln785_fu_112_p2 = (p_Result_s_reg_305 ^ 1'd1);

assign xor_ln786_9_fu_232_p2 = (p_Result_9_fu_224_p3 ^ 1'd1);

assign xor_ln786_fu_123_p2 = (p_Result_7_reg_316 ^ 1'd1);

endmodule //batch_norm