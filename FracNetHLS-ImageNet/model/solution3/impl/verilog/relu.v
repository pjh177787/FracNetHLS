// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module relu (
        ap_clk,
        ap_rst,
        norm_V,
        shiftx_V,
        shifty_V,
        weight_V,
        ap_return,
        ap_ce
);


input   ap_clk;
input   ap_rst;
input  [13:0] norm_V;
input  [10:0] shiftx_V;
input  [10:0] shifty_V;
input  [10:0] weight_V;
output  [13:0] ap_return;
input   ap_ce;

reg[13:0] ap_return;

reg  signed [10:0] weight_V_read_reg_554;
wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_state3_pp0_stage0_iter2;
wire    ap_block_state4_pp0_stage0_iter3;
wire    ap_block_state5_pp0_stage0_iter4;
wire    ap_block_state6_pp0_stage0_iter5;
wire    ap_block_state7_pp0_stage0_iter6;
wire    ap_block_pp0_stage0_11001;
reg   [10:0] shifty_V_read_reg_559;
reg   [10:0] shifty_V_read_reg_559_pp0_iter1_reg;
reg   [10:0] shifty_V_read_reg_559_pp0_iter2_reg;
wire   [0:0] p_Result_s_fu_112_p3;
reg   [0:0] p_Result_s_reg_565;
wire   [13:0] tmp_V_fu_120_p2;
reg   [13:0] tmp_V_reg_571;
wire   [0:0] p_Result_1_fu_126_p3;
reg   [0:0] p_Result_1_reg_576;
wire   [13:0] select_ln388_fu_146_p3;
reg   [13:0] select_ln388_reg_582;
wire  signed [13:0] p_Val2_10_fu_175_p3;
reg  signed [13:0] p_Val2_10_reg_587;
reg  signed [13:0] p_Val2_10_reg_587_pp0_iter2_reg;
wire   [0:0] icmp_ln1494_fu_189_p2;
reg   [0:0] icmp_ln1494_reg_604;
reg   [0:0] icmp_ln1494_reg_604_pp0_iter4_reg;
reg   [0:0] p_Result_2_reg_611;
reg   [0:0] p_Result_2_reg_611_pp0_iter4_reg;
wire   [13:0] p_Val2_12_fu_226_p2;
reg   [13:0] p_Val2_12_reg_618;
reg   [13:0] p_Val2_12_reg_618_pp0_iter4_reg;
reg   [0:0] p_Result_3_reg_624;
reg   [0:0] p_Result_3_reg_624_pp0_iter4_reg;
wire  signed [24:0] grp_fu_544_p3;
reg  signed [24:0] ret_V_6_reg_631;
reg   [0:0] p_Result_4_reg_640;
reg   [0:0] p_Result_4_reg_640_pp0_iter4_reg;
reg   [0:0] tmp_reg_646;
wire   [13:0] p_Val2_16_fu_283_p2;
reg   [13:0] p_Val2_16_reg_651;
reg   [13:0] p_Val2_16_reg_651_pp0_iter5_reg;
wire   [0:0] carry_1_fu_303_p2;
reg   [0:0] carry_1_reg_657;
wire   [0:0] p_Result_6_fu_309_p3;
reg   [0:0] p_Result_6_reg_662;
wire   [0:0] Range1_all_ones_fu_341_p2;
reg   [0:0] Range1_all_ones_reg_667;
wire   [0:0] Range1_all_zeros_fu_347_p2;
reg   [0:0] Range1_all_zeros_reg_672;
wire   [0:0] and_ln781_fu_380_p2;
reg   [0:0] and_ln781_reg_677;
wire   [0:0] and_ln786_fu_386_p2;
reg   [0:0] and_ln786_reg_683;
wire   [0:0] or_ln340_23_fu_472_p2;
reg   [0:0] or_ln340_23_reg_689;
wire   [13:0] select_ln340_290_fu_513_p3;
reg   [13:0] select_ln340_290_reg_694;
wire   [0:0] and_ln340_2_fu_526_p2;
reg   [0:0] and_ln340_2_reg_699;
wire  signed [13:0] lhs_V_fu_86_p0;
wire    ap_block_pp0_stage0;
wire  signed [11:0] rhs_V_fu_90_p3;
wire  signed [14:0] lhs_V_fu_86_p1;
wire  signed [14:0] sext_ln728_fu_98_p1;
wire   [14:0] ret_V_fu_106_p2;
wire  signed [13:0] tmp_V_fu_120_p0;
wire  signed [13:0] sext_ln1192_fu_102_p1;
wire   [0:0] xor_ln786_fu_134_p2;
wire   [0:0] underflow_fu_140_p2;
wire   [0:0] xor_ln340_fu_158_p2;
wire   [0:0] xor_ln340_209_fu_154_p2;
wire   [0:0] or_ln340_21_fu_163_p2;
wire   [13:0] select_ln340_fu_168_p3;
wire  signed [11:0] rhs_V_6_fu_197_p3;
wire   [14:0] lhs_V_5_fu_194_p1;
wire  signed [14:0] sext_ln728_128_fu_204_p1;
wire   [14:0] ret_V_5_fu_212_p2;
wire  signed [13:0] sext_ln1192_128_fu_208_p1;
wire  signed [18:0] rhs_V_7_fu_239_p3;
wire   [13:0] p_Val2_15_fu_264_p4;
wire   [13:0] zext_ln415_fu_280_p1;
wire   [0:0] tmp_706_fu_289_p3;
wire   [0:0] p_Result_5_fu_273_p3;
wire   [0:0] xor_ln416_fu_297_p2;
wire   [2:0] tmp_1_fu_317_p4;
wire   [3:0] tmp_2_fu_332_p4;
wire   [0:0] tmp_708_fu_353_p3;
wire   [0:0] Range2_all_ones_fu_326_p2;
wire   [0:0] xor_ln779_fu_360_p2;
wire   [0:0] and_ln779_fu_366_p2;
wire   [0:0] deleted_ones_fu_372_p3;
wire   [0:0] xor_ln786_6_fu_397_p2;
wire   [0:0] xor_ln340_162_fu_411_p2;
wire   [0:0] xor_ln340_210_fu_407_p2;
wire   [0:0] underflow_1_fu_402_p2;
wire   [0:0] deleted_zeros_fu_392_p3;
wire   [0:0] xor_ln785_9_fu_435_p2;
wire   [0:0] or_ln785_7_fu_441_p2;
wire   [0:0] xor_ln785_10_fu_446_p2;
wire   [0:0] or_ln786_fu_457_p2;
wire   [0:0] xor_ln786_161_fu_461_p2;
wire   [0:0] underflow_2_fu_467_p2;
wire   [0:0] overflow_fu_451_p2;
wire   [0:0] or_ln340_319_fu_478_p2;
wire   [0:0] and_ln340_fu_495_p2;
wire   [13:0] select_ln388_161_fu_428_p3;
wire   [13:0] select_ln388_162_fu_488_p3;
wire   [0:0] or_ln340_fu_416_p2;
wire   [0:0] and_ln340_1_fu_508_p2;
wire   [13:0] select_ln340_162_fu_421_p3;
wire   [13:0] select_ln340_289_fu_500_p3;
wire   [0:0] or_ln340_320_fu_483_p2;
wire   [0:0] xor_ln1494_fu_521_p2;
wire   [13:0] select_ln340_163_fu_532_p3;
wire   [13:0] select_ln340_291_fu_538_p3;
reg    grp_fu_544_ce;
reg    ap_ce_reg;
reg   [13:0] norm_V_int_reg;
reg   [10:0] shiftx_V_int_reg;
reg   [10:0] shifty_V_int_reg;
reg   [10:0] weight_V_int_reg;
reg   [13:0] ap_return_int_reg;

FracNet_mac_muladmb6 #(
    .ID( 1 ),
    .NUM_STAGE( 3 ),
    .din0_WIDTH( 11 ),
    .din1_WIDTH( 14 ),
    .din2_WIDTH( 19 ),
    .dout_WIDTH( 25 ))
FracNet_mac_muladmb6_U555(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(weight_V_read_reg_554),
    .din1(p_Val2_10_fu_175_p3),
    .din2(rhs_V_7_fu_239_p3),
    .ce(grp_fu_544_ce),
    .dout(grp_fu_544_p3)
);

always @ (posedge ap_clk) begin
    ap_ce_reg <= ap_ce;
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_ce_reg) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        Range1_all_ones_reg_667 <= Range1_all_ones_fu_341_p2;
        Range1_all_zeros_reg_672 <= Range1_all_zeros_fu_347_p2;
        and_ln340_2_reg_699 <= and_ln340_2_fu_526_p2;
        and_ln781_reg_677 <= and_ln781_fu_380_p2;
        and_ln786_reg_683 <= and_ln786_fu_386_p2;
        carry_1_reg_657 <= carry_1_fu_303_p2;
        icmp_ln1494_reg_604 <= icmp_ln1494_fu_189_p2;
        icmp_ln1494_reg_604_pp0_iter4_reg <= icmp_ln1494_reg_604;
        or_ln340_23_reg_689 <= or_ln340_23_fu_472_p2;
        p_Result_1_reg_576 <= tmp_V_fu_120_p2[32'd13];
        p_Result_2_reg_611 <= ret_V_5_fu_212_p2[32'd14];
        p_Result_2_reg_611_pp0_iter4_reg <= p_Result_2_reg_611;
        p_Result_3_reg_624 <= p_Val2_12_fu_226_p2[32'd13];
        p_Result_3_reg_624_pp0_iter4_reg <= p_Result_3_reg_624;
        p_Result_4_reg_640 <= grp_fu_544_p3[32'd24];
        p_Result_4_reg_640_pp0_iter4_reg <= p_Result_4_reg_640;
        p_Result_6_reg_662 <= p_Val2_16_fu_283_p2[32'd13];
        p_Result_s_reg_565 <= ret_V_fu_106_p2[32'd14];
        p_Val2_10_reg_587 <= p_Val2_10_fu_175_p3;
        p_Val2_10_reg_587_pp0_iter2_reg <= p_Val2_10_reg_587;
        p_Val2_12_reg_618 <= p_Val2_12_fu_226_p2;
        p_Val2_12_reg_618_pp0_iter4_reg <= p_Val2_12_reg_618;
        p_Val2_16_reg_651 <= p_Val2_16_fu_283_p2;
        p_Val2_16_reg_651_pp0_iter5_reg <= p_Val2_16_reg_651;
        ret_V_6_reg_631 <= grp_fu_544_p3;
        select_ln340_290_reg_694 <= select_ln340_290_fu_513_p3;
        select_ln388_reg_582 <= select_ln388_fu_146_p3;
        shifty_V_read_reg_559 <= shifty_V_int_reg;
        shifty_V_read_reg_559_pp0_iter1_reg <= shifty_V_read_reg_559;
        shifty_V_read_reg_559_pp0_iter2_reg <= shifty_V_read_reg_559_pp0_iter1_reg;
        tmp_V_reg_571 <= tmp_V_fu_120_p2;
        tmp_reg_646 <= grp_fu_544_p3[32'd6];
        weight_V_read_reg_554 <= weight_V_int_reg;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_ce_reg)) begin
        ap_return_int_reg <= select_ln340_291_fu_538_p3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_ce)) begin
        norm_V_int_reg <= norm_V;
        shiftx_V_int_reg <= shiftx_V;
        shifty_V_int_reg <= shifty_V;
        weight_V_int_reg <= weight_V;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return = ap_return_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return = select_ln340_291_fu_538_p3;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_ce_reg))) begin
        grp_fu_544_ce = 1'b1;
    end else begin
        grp_fu_544_ce = 1'b0;
    end
end

assign Range1_all_ones_fu_341_p2 = ((tmp_2_fu_332_p4 == 4'd15) ? 1'b1 : 1'b0);

assign Range1_all_zeros_fu_347_p2 = ((tmp_2_fu_332_p4 == 4'd0) ? 1'b1 : 1'b0);

assign Range2_all_ones_fu_326_p2 = ((tmp_1_fu_317_p4 == 3'd7) ? 1'b1 : 1'b0);

assign and_ln340_1_fu_508_p2 = (or_ln340_fu_416_p2 & icmp_ln1494_reg_604_pp0_iter4_reg);

assign and_ln340_2_fu_526_p2 = (xor_ln1494_fu_521_p2 & or_ln340_320_fu_483_p2);

assign and_ln340_fu_495_p2 = (underflow_1_fu_402_p2 & icmp_ln1494_reg_604_pp0_iter4_reg);

assign and_ln779_fu_366_p2 = (xor_ln779_fu_360_p2 & Range2_all_ones_fu_326_p2);

assign and_ln781_fu_380_p2 = (carry_1_fu_303_p2 & Range1_all_ones_fu_341_p2);

assign and_ln786_fu_386_p2 = (p_Result_6_fu_309_p3 & deleted_ones_fu_372_p3);

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter5 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter6 = ~(1'b1 == 1'b1);

assign carry_1_fu_303_p2 = (xor_ln416_fu_297_p2 & p_Result_5_fu_273_p3);

assign deleted_ones_fu_372_p3 = ((carry_1_fu_303_p2[0:0] === 1'b1) ? and_ln779_fu_366_p2 : Range1_all_ones_fu_341_p2);

assign deleted_zeros_fu_392_p3 = ((carry_1_reg_657[0:0] === 1'b1) ? Range1_all_ones_reg_667 : Range1_all_zeros_reg_672);

assign icmp_ln1494_fu_189_p2 = (($signed(p_Val2_10_reg_587_pp0_iter2_reg) > $signed(14'd0)) ? 1'b1 : 1'b0);

assign lhs_V_5_fu_194_p1 = $unsigned(p_Val2_10_reg_587_pp0_iter2_reg);

assign lhs_V_fu_86_p0 = norm_V_int_reg;

assign lhs_V_fu_86_p1 = lhs_V_fu_86_p0;

assign or_ln340_21_fu_163_p2 = (xor_ln340_fu_158_p2 | p_Result_1_reg_576);

assign or_ln340_23_fu_472_p2 = (underflow_2_fu_467_p2 | overflow_fu_451_p2);

assign or_ln340_319_fu_478_p2 = (xor_ln785_10_fu_446_p2 | and_ln786_reg_683);

assign or_ln340_320_fu_483_p2 = (or_ln340_319_fu_478_p2 | and_ln781_reg_677);

assign or_ln340_fu_416_p2 = (xor_ln340_162_fu_411_p2 | p_Result_3_reg_624_pp0_iter4_reg);

assign or_ln785_7_fu_441_p2 = (xor_ln785_9_fu_435_p2 | p_Result_6_reg_662);

assign or_ln786_fu_457_p2 = (and_ln786_reg_683 | and_ln781_reg_677);

assign overflow_fu_451_p2 = (xor_ln785_10_fu_446_p2 & or_ln785_7_fu_441_p2);

assign p_Result_1_fu_126_p3 = tmp_V_fu_120_p2[32'd13];

assign p_Result_5_fu_273_p3 = ret_V_6_reg_631[32'd20];

assign p_Result_6_fu_309_p3 = p_Val2_16_fu_283_p2[32'd13];

assign p_Result_s_fu_112_p3 = ret_V_fu_106_p2[32'd14];

assign p_Val2_10_fu_175_p3 = ((or_ln340_21_fu_163_p2[0:0] === 1'b1) ? select_ln340_fu_168_p3 : select_ln388_reg_582);

assign p_Val2_12_fu_226_p2 = ($signed(sext_ln1192_128_fu_208_p1) + $signed(p_Val2_10_reg_587_pp0_iter2_reg));

assign p_Val2_15_fu_264_p4 = {{ret_V_6_reg_631[20:7]}};

assign p_Val2_16_fu_283_p2 = (p_Val2_15_fu_264_p4 + zext_ln415_fu_280_p1);

assign ret_V_5_fu_212_p2 = ($signed(lhs_V_5_fu_194_p1) + $signed(sext_ln728_128_fu_204_p1));

assign ret_V_fu_106_p2 = ($signed(lhs_V_fu_86_p1) + $signed(sext_ln728_fu_98_p1));

assign rhs_V_6_fu_197_p3 = {{shifty_V_read_reg_559_pp0_iter2_reg}, {1'd0}};

assign rhs_V_7_fu_239_p3 = {{shifty_V_read_reg_559_pp0_iter2_reg}, {8'd0}};

assign rhs_V_fu_90_p3 = {{shiftx_V_int_reg}, {1'd0}};

assign select_ln340_162_fu_421_p3 = ((xor_ln340_210_fu_407_p2[0:0] === 1'b1) ? 14'd8191 : p_Val2_12_reg_618_pp0_iter4_reg);

assign select_ln340_163_fu_532_p3 = ((or_ln340_23_reg_689[0:0] === 1'b1) ? 14'd8191 : p_Val2_16_reg_651_pp0_iter5_reg);

assign select_ln340_289_fu_500_p3 = ((and_ln340_fu_495_p2[0:0] === 1'b1) ? select_ln388_161_fu_428_p3 : select_ln388_162_fu_488_p3);

assign select_ln340_290_fu_513_p3 = ((and_ln340_1_fu_508_p2[0:0] === 1'b1) ? select_ln340_162_fu_421_p3 : select_ln340_289_fu_500_p3);

assign select_ln340_291_fu_538_p3 = ((and_ln340_2_reg_699[0:0] === 1'b1) ? select_ln340_163_fu_532_p3 : select_ln340_290_reg_694);

assign select_ln340_fu_168_p3 = ((xor_ln340_209_fu_154_p2[0:0] === 1'b1) ? 14'd8191 : tmp_V_reg_571);

assign select_ln388_161_fu_428_p3 = ((underflow_1_fu_402_p2[0:0] === 1'b1) ? 14'd8192 : p_Val2_12_reg_618_pp0_iter4_reg);

assign select_ln388_162_fu_488_p3 = ((underflow_2_fu_467_p2[0:0] === 1'b1) ? 14'd8192 : p_Val2_16_reg_651);

assign select_ln388_fu_146_p3 = ((underflow_fu_140_p2[0:0] === 1'b1) ? 14'd8192 : tmp_V_fu_120_p2);

assign sext_ln1192_128_fu_208_p1 = rhs_V_6_fu_197_p3;

assign sext_ln1192_fu_102_p1 = rhs_V_fu_90_p3;

assign sext_ln728_128_fu_204_p1 = rhs_V_6_fu_197_p3;

assign sext_ln728_fu_98_p1 = rhs_V_fu_90_p3;

assign tmp_1_fu_317_p4 = {{ret_V_6_reg_631[24:22]}};

assign tmp_2_fu_332_p4 = {{ret_V_6_reg_631[24:21]}};

assign tmp_706_fu_289_p3 = p_Val2_16_fu_283_p2[32'd13];

assign tmp_708_fu_353_p3 = ret_V_6_reg_631[32'd21];

assign tmp_V_fu_120_p0 = norm_V_int_reg;

assign tmp_V_fu_120_p2 = ($signed(tmp_V_fu_120_p0) + $signed(sext_ln1192_fu_102_p1));

assign underflow_1_fu_402_p2 = (xor_ln786_6_fu_397_p2 & p_Result_2_reg_611_pp0_iter4_reg);

assign underflow_2_fu_467_p2 = (xor_ln786_161_fu_461_p2 & p_Result_4_reg_640_pp0_iter4_reg);

assign underflow_fu_140_p2 = (xor_ln786_fu_134_p2 & p_Result_s_fu_112_p3);

assign xor_ln1494_fu_521_p2 = (icmp_ln1494_reg_604_pp0_iter4_reg ^ 1'd1);

assign xor_ln340_162_fu_411_p2 = (p_Result_2_reg_611_pp0_iter4_reg ^ 1'd1);

assign xor_ln340_209_fu_154_p2 = (p_Result_s_reg_565 ^ p_Result_1_reg_576);

assign xor_ln340_210_fu_407_p2 = (p_Result_3_reg_624_pp0_iter4_reg ^ p_Result_2_reg_611_pp0_iter4_reg);

assign xor_ln340_fu_158_p2 = (p_Result_s_reg_565 ^ 1'd1);

assign xor_ln416_fu_297_p2 = (tmp_706_fu_289_p3 ^ 1'd1);

assign xor_ln779_fu_360_p2 = (tmp_708_fu_353_p3 ^ 1'd1);

assign xor_ln785_10_fu_446_p2 = (p_Result_4_reg_640_pp0_iter4_reg ^ 1'd1);

assign xor_ln785_9_fu_435_p2 = (deleted_zeros_fu_392_p3 ^ 1'd1);

assign xor_ln786_161_fu_461_p2 = (or_ln786_fu_457_p2 ^ 1'd1);

assign xor_ln786_6_fu_397_p2 = (p_Result_3_reg_624_pp0_iter4_reg ^ 1'd1);

assign xor_ln786_fu_134_p2 = (p_Result_1_fu_126_p3 ^ 1'd1);

assign zext_ln415_fu_280_p1 = tmp_reg_646;

endmodule //relu
