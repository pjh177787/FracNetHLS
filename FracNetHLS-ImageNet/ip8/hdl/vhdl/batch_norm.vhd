-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity batch_norm is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    sum_V : IN STD_LOGIC_VECTOR (5 downto 0);
    weight_V : IN STD_LOGIC_VECTOR (9 downto 0);
    bias_V : IN STD_LOGIC_VECTOR (9 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (13 downto 0);
    ap_ce : IN STD_LOGIC );
end;


architecture behav of batch_norm is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_C : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001100";
    constant ap_const_lv32_D : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001101";
    constant ap_const_lv32_11 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010001";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv14_1FFF : STD_LOGIC_VECTOR (13 downto 0) := "01111111111111";

    signal bias_V_read_reg_130 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_block_state1_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state2_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal r_V_fu_123_p2 : STD_LOGIC_VECTOR (17 downto 0);
    signal r_V_reg_136 : STD_LOGIC_VECTOR (17 downto 0);
    signal trunc_ln731_fu_58_p1 : STD_LOGIC_VECTOR (12 downto 0);
    signal trunc_ln731_reg_141 : STD_LOGIC_VECTOR (12 downto 0);
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal sum_V_cast_fu_46_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal zext_ln1192_fu_61_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal zext_ln731_fu_69_p1 : STD_LOGIC_VECTOR (12 downto 0);
    signal add_ln731_fu_72_p2 : STD_LOGIC_VECTOR (12 downto 0);
    signal ret_V_fu_64_p2 : STD_LOGIC_VECTOR (17 downto 0);
    attribute use_dsp48 : string;
    attribute use_dsp48 of ret_V_fu_64_p2 : signal is "no";
    signal tmp_fu_93_p4 : STD_LOGIC_VECTOR (4 downto 0);
    signal p_Result_s_fu_85_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln785_fu_103_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal overflow_fu_109_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_Val2_12_fu_77_p3 : STD_LOGIC_VECTOR (13 downto 0);
    signal r_V_fu_123_p0 : STD_LOGIC_VECTOR (7 downto 0);
    signal r_V_fu_123_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal select_ln340_fu_115_p3 : STD_LOGIC_VECTOR (13 downto 0);
    signal ap_ce_reg : STD_LOGIC;
    signal ap_return_int_reg : STD_LOGIC_VECTOR (13 downto 0);
    signal r_V_fu_123_p00 : STD_LOGIC_VECTOR (17 downto 0);
    signal r_V_fu_123_p10 : STD_LOGIC_VECTOR (17 downto 0);

    component FracNet_mul_mul_8kbM IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (7 downto 0);
        din1 : IN STD_LOGIC_VECTOR (9 downto 0);
        dout : OUT STD_LOGIC_VECTOR (17 downto 0) );
    end component;



begin
    FracNet_mul_mul_8kbM_U491 : component FracNet_mul_mul_8kbM
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 8,
        din1_WIDTH => 10,
        dout_WIDTH => 18)
    port map (
        din0 => r_V_fu_123_p0,
        din1 => r_V_fu_123_p1,
        dout => r_V_fu_123_p2);





    ap_ce_reg_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            ap_ce_reg <= ap_ce;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_ce_reg)) then
                ap_return_int_reg <= select_ln340_fu_115_p3;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then
                bias_V_read_reg_130 <= bias_V;
                r_V_reg_136 <= r_V_fu_123_p2;
                trunc_ln731_reg_141 <= trunc_ln731_fu_58_p1;
            end if;
        end if;
    end process;
    add_ln731_fu_72_p2 <= std_logic_vector(unsigned(zext_ln731_fu_69_p1) + unsigned(trunc_ln731_reg_141));
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage0_11001 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state1_pp0_stage0_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state2_pp0_stage0_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_return_assign_proc : process(select_ln340_fu_115_p3, ap_ce_reg, ap_return_int_reg)
    begin
        if ((ap_const_logic_0 = ap_ce_reg)) then 
            ap_return <= ap_return_int_reg;
        elsif ((ap_const_logic_1 = ap_ce_reg)) then 
            ap_return <= select_ln340_fu_115_p3;
        end if; 
    end process;

    icmp_ln785_fu_103_p2 <= "0" when (tmp_fu_93_p4 = ap_const_lv5_0) else "1";
    overflow_fu_109_p2 <= (p_Result_s_fu_85_p3 or icmp_ln785_fu_103_p2);
    p_Result_s_fu_85_p3 <= add_ln731_fu_72_p2(12 downto 12);
    p_Val2_12_fu_77_p3 <= (add_ln731_fu_72_p2 & ap_const_lv1_0);
    r_V_fu_123_p0 <= r_V_fu_123_p00(8 - 1 downto 0);
    r_V_fu_123_p00 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(sum_V_cast_fu_46_p1),18));
    r_V_fu_123_p1 <= r_V_fu_123_p10(10 - 1 downto 0);
    r_V_fu_123_p10 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(weight_V),18));
    ret_V_fu_64_p2 <= std_logic_vector(unsigned(zext_ln1192_fu_61_p1) + unsigned(r_V_reg_136));
    select_ln340_fu_115_p3 <= 
        ap_const_lv14_1FFF when (overflow_fu_109_p2(0) = '1') else 
        p_Val2_12_fu_77_p3;
        sum_V_cast_fu_46_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(sum_V),8));

    tmp_fu_93_p4 <= ret_V_fu_64_p2(17 downto 13);
    trunc_ln731_fu_58_p1 <= r_V_fu_123_p2(13 - 1 downto 0);
    zext_ln1192_fu_61_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(bias_V_read_reg_130),18));
    zext_ln731_fu_69_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(bias_V_read_reg_130),13));
end behav;
