-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity sum_engine_1 is
port (
    ap_ready : OUT STD_LOGIC;
    t0_V : IN STD_LOGIC_VECTOR (8 downto 0);
    t1_V : IN STD_LOGIC_VECTOR (8 downto 0);
    t2_V : IN STD_LOGIC_VECTOR (8 downto 0);
    t3_V : IN STD_LOGIC_VECTOR (8 downto 0);
    t4_V : IN STD_LOGIC_VECTOR (8 downto 0);
    t5_V : IN STD_LOGIC_VECTOR (8 downto 0);
    t6_V : IN STD_LOGIC_VECTOR (8 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (13 downto 0) );
end;


architecture behav of sum_engine_1 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_logic_0 : STD_LOGIC := '0';

    signal lhs_V_fu_76_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal rhs_V_fu_80_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal lhs_V_1_fu_90_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal rhs_V_1_fu_94_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal lhs_V_2_fu_104_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal rhs_V_2_fu_108_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal ret_V_2_fu_112_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal add2_V_fu_118_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal ret_V_1_fu_98_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal ret_V_fu_84_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal p_cast2_fu_130_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal sext_ln1192_fu_134_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal add_ln1192_fu_138_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_fu_144_p3 : STD_LOGIC_VECTOR (12 downto 0);
    signal rhs_V_3_fu_156_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal sext_ln728_fu_126_p1 : STD_LOGIC_VECTOR (12 downto 0);
    signal sext_ln728_1_fu_164_p1 : STD_LOGIC_VECTOR (12 downto 0);
    signal ret_V_3_fu_168_p2 : STD_LOGIC_VECTOR (12 downto 0);
    signal p_Val2_6_fu_152_p1 : STD_LOGIC_VECTOR (13 downto 0);
    signal add4_V_fu_174_p1 : STD_LOGIC_VECTOR (13 downto 0);


begin



    add2_V_fu_118_p3 <= (ret_V_2_fu_112_p2 & ap_const_lv2_0);
        add4_V_fu_174_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(ret_V_3_fu_168_p2),14));

    add_ln1192_fu_138_p2 <= std_logic_vector(signed(p_cast2_fu_130_p1) + signed(sext_ln1192_fu_134_p1));
    ap_ready <= ap_const_logic_1;
    ap_return <= std_logic_vector(signed(p_Val2_6_fu_152_p1) + signed(add4_V_fu_174_p1));
        lhs_V_1_fu_90_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(t2_V),10));

        lhs_V_2_fu_104_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(t4_V),10));

        lhs_V_fu_76_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(t0_V),10));

        p_Val2_6_fu_152_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_fu_144_p3),14));

        p_cast2_fu_130_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(ret_V_1_fu_98_p2),11));

    ret_V_1_fu_98_p2 <= std_logic_vector(signed(lhs_V_1_fu_90_p1) + signed(rhs_V_1_fu_94_p1));
    ret_V_2_fu_112_p2 <= std_logic_vector(signed(lhs_V_2_fu_104_p1) + signed(rhs_V_2_fu_108_p1));
    ret_V_3_fu_168_p2 <= std_logic_vector(signed(sext_ln728_fu_126_p1) + signed(sext_ln728_1_fu_164_p1));
    ret_V_fu_84_p2 <= std_logic_vector(signed(lhs_V_fu_76_p1) + signed(rhs_V_fu_80_p1));
        rhs_V_1_fu_94_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(t3_V),10));

        rhs_V_2_fu_108_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(t5_V),10));

    rhs_V_3_fu_156_p3 <= (t6_V & ap_const_lv2_0);
        rhs_V_fu_80_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(t1_V),10));

        sext_ln1192_fu_134_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(ret_V_fu_84_p2),11));

        sext_ln728_1_fu_164_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(rhs_V_3_fu_156_p3),13));

        sext_ln728_fu_126_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(add2_V_fu_118_p3),13));

    tmp_fu_144_p3 <= (add_ln1192_fu_138_p2 & ap_const_lv2_0);
end behav;
