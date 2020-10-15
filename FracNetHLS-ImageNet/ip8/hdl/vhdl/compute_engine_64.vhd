-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity compute_engine_64 is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    b_V : IN STD_LOGIC_VECTOR (63 downto 0);
    w_V : IN STD_LOGIC_VECTOR (63 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (5 downto 0) );
end;


architecture behav of compute_engine_64 is 
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv64_FFFFFFFFFFFFFFFF : STD_LOGIC_VECTOR (63 downto 0) := "1111111111111111111111111111111111111111111111111111111111111111";
    constant ap_const_lv32_AAAAAAAA : STD_LOGIC_VECTOR (31 downto 0) := "10101010101010101010101010101010";
    constant ap_const_lv32_1F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011111";
    constant ap_const_lv32_1D : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011101";
    constant ap_const_lv32_1B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011011";
    constant ap_const_lv32_19 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011001";
    constant ap_const_lv32_17 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010111";
    constant ap_const_lv32_15 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010101";
    constant ap_const_lv32_13 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010011";
    constant ap_const_lv32_11 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010001";
    constant ap_const_lv32_F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001111";
    constant ap_const_lv32_D : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001101";
    constant ap_const_lv32_B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001011";
    constant ap_const_lv32_9 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001001";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_1C : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011100";
    constant ap_const_lv32_18 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011000";
    constant ap_const_lv32_14 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010100";
    constant ap_const_lv32_10 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010000";
    constant ap_const_lv32_C : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001100";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_1E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011110";
    constant ap_const_lv32_1A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011010";
    constant ap_const_lv32_16 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010110";
    constant ap_const_lv32_12 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010010";
    constant ap_const_lv32_E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001110";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';

    signal trunc_ln1355_fu_356_p1 : STD_LOGIC_VECTOR (1 downto 0);
    signal trunc_ln1355_reg_810 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_block_state1_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state2_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal tmp_137_fu_370_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_137_reg_816 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_138_fu_380_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_138_reg_821 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_139_fu_390_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_139_reg_826 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_140_fu_400_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_140_reg_831 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_141_fu_410_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_141_reg_836 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_142_fu_420_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_142_reg_841 : STD_LOGIC_VECTOR (1 downto 0);
    signal trunc_ln1355_1_fu_468_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal trunc_ln1355_1_reg_846 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_144_fu_488_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_144_reg_852 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_145_fu_498_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_145_reg_857 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_146_fu_508_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_146_reg_862 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_147_fu_518_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_147_reg_867 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_148_fu_528_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_148_reg_872 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_149_fu_538_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_149_reg_877 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_150_reg_882 : STD_LOGIC_VECTOR (26 downto 0);
    signal trunc_ln_reg_887 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal trunc_ln769_fu_120_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal xor_ln769_fu_124_p2 : STD_LOGIC_VECTOR (63 downto 0);
    signal trunc_ln769_1_fu_130_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal xor_ln769_1_fu_134_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal xor_ln769_3_fu_146_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_fu_152_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_556_fu_160_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_557_fu_168_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_558_fu_176_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_559_fu_184_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_560_fu_192_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_561_fu_200_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_562_fu_208_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_563_fu_216_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_564_fu_224_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_565_fu_232_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_566_fu_240_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_567_fu_248_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_568_fu_256_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_569_fu_264_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_570_fu_272_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal ret_V_fu_280_p32 : STD_LOGIC_VECTOR (30 downto 0);
    signal r_V_2_fu_140_p2 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln1355_fu_346_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal x_V_4_fu_350_p2 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_s_fu_360_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal ret_V_5_fu_430_p16 : STD_LOGIC_VECTOR (29 downto 0);
    signal tmp_143_fu_478_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal ret_V_6_fu_548_p16 : STD_LOGIC_VECTOR (29 downto 0);
    signal zext_ln1355_2_fu_582_p1 : STD_LOGIC_VECTOR (30 downto 0);
    signal zext_ln1355_1_fu_464_p1 : STD_LOGIC_VECTOR (30 downto 0);
    signal x_V_fu_592_p2 : STD_LOGIC_VECTOR (30 downto 0);
    signal add_ln209_1_fu_586_p2 : STD_LOGIC_VECTOR (29 downto 0);
    signal trunc_ln209_2_fu_649_p15 : STD_LOGIC_VECTOR (27 downto 0);
    signal trunc_ln209_1_fu_624_p15 : STD_LOGIC_VECTOR (27 downto 0);
    signal zext_ln209_2_fu_680_p1 : STD_LOGIC_VECTOR (27 downto 0);
    signal add_ln209_2_fu_674_p2 : STD_LOGIC_VECTOR (27 downto 0);
    signal zext_ln209_1_fu_621_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal zext_ln209_fu_618_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal add_ln209_4_fu_689_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal add_ln209_fu_683_p2 : STD_LOGIC_VECTOR (27 downto 0);
    signal tmp_151_fu_700_p4 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_152_fu_710_p4 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_153_fu_720_p4 : STD_LOGIC_VECTOR (3 downto 0);
    signal trunc_ln209_fu_730_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal r_V_4_fu_752_p6 : STD_LOGIC_VECTOR (19 downto 0);
    signal add_ln209_3_fu_694_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal x_V_3_fu_734_p8 : STD_LOGIC_VECTOR (27 downto 0);
    signal r_V_fu_766_p1 : STD_LOGIC_VECTOR (27 downto 0);
    signal add_ln700_fu_782_p2 : STD_LOGIC_VECTOR (27 downto 0);
    signal zext_ln700_fu_770_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal trunc_ln1_fu_774_p3 : STD_LOGIC_VECTOR (5 downto 0);
    signal add_ln214_1_fu_798_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal trunc_ln700_1_fu_788_p4 : STD_LOGIC_VECTOR (5 downto 0);


begin



    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_boolean_0 = ap_block_pp0_stage0_11001)) then
                tmp_137_reg_816 <= x_V_4_fu_350_p2(25 downto 24);
                tmp_138_reg_821 <= x_V_4_fu_350_p2(21 downto 20);
                tmp_139_reg_826 <= x_V_4_fu_350_p2(17 downto 16);
                tmp_140_reg_831 <= x_V_4_fu_350_p2(13 downto 12);
                tmp_141_reg_836 <= x_V_4_fu_350_p2(9 downto 8);
                tmp_142_reg_841 <= x_V_4_fu_350_p2(5 downto 4);
                tmp_144_reg_852 <= x_V_4_fu_350_p2(27 downto 26);
                tmp_145_reg_857 <= x_V_4_fu_350_p2(23 downto 22);
                tmp_146_reg_862 <= x_V_4_fu_350_p2(19 downto 18);
                tmp_147_reg_867 <= x_V_4_fu_350_p2(15 downto 14);
                tmp_148_reg_872 <= x_V_4_fu_350_p2(11 downto 10);
                tmp_149_reg_877 <= x_V_4_fu_350_p2(7 downto 6);
                tmp_150_reg_882 <= x_V_fu_592_p2(30 downto 4);
                trunc_ln1355_1_reg_846 <= x_V_4_fu_350_p2(3 downto 2);
                trunc_ln1355_reg_810 <= trunc_ln1355_fu_356_p1;
                trunc_ln_reg_887 <= add_ln209_1_fu_586_p2(7 downto 4);
            end if;
        end if;
    end process;
    add_ln209_1_fu_586_p2 <= std_logic_vector(unsigned(ret_V_5_fu_430_p16) + unsigned(ret_V_6_fu_548_p16));
    add_ln209_2_fu_674_p2 <= std_logic_vector(unsigned(trunc_ln209_2_fu_649_p15) + unsigned(trunc_ln209_1_fu_624_p15));
    add_ln209_3_fu_694_p2 <= std_logic_vector(unsigned(zext_ln209_fu_618_p1) + unsigned(add_ln209_4_fu_689_p2));
    add_ln209_4_fu_689_p2 <= std_logic_vector(unsigned(trunc_ln_reg_887) + unsigned(zext_ln209_1_fu_621_p1));
    add_ln209_fu_683_p2 <= std_logic_vector(unsigned(zext_ln209_2_fu_680_p1) + unsigned(add_ln209_2_fu_674_p2));
    add_ln214_1_fu_798_p2 <= std_logic_vector(unsigned(zext_ln700_fu_770_p1) + unsigned(trunc_ln1_fu_774_p3));
    add_ln700_fu_782_p2 <= std_logic_vector(unsigned(x_V_3_fu_734_p8) + unsigned(r_V_fu_766_p1));
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage0_11001 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state1_pp0_stage0_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state2_pp0_stage0_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));
    ap_return <= std_logic_vector(unsigned(add_ln214_1_fu_798_p2) + unsigned(trunc_ln700_1_fu_788_p4));
    r_V_2_fu_140_p2 <= (xor_ln769_fu_124_p2 xor b_V);
    r_V_4_fu_752_p6 <= ((((tmp_151_fu_700_p4 & ap_const_lv4_0) & tmp_152_fu_710_p4) & ap_const_lv4_0) & tmp_153_fu_720_p4);
    r_V_fu_766_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(r_V_4_fu_752_p6),28));
    ret_V_5_fu_430_p16 <= ((((((((((((((tmp_s_fu_360_p4 & ap_const_lv2_0) & tmp_137_fu_370_p4) & ap_const_lv2_0) & tmp_138_fu_380_p4) & ap_const_lv2_0) & tmp_139_fu_390_p4) & ap_const_lv2_0) & tmp_140_fu_400_p4) & ap_const_lv2_0) & tmp_141_fu_410_p4) & ap_const_lv2_0) & tmp_142_fu_420_p4) & ap_const_lv2_0) & trunc_ln1355_fu_356_p1);
    ret_V_6_fu_548_p16 <= ((((((((((((((tmp_143_fu_478_p4 & ap_const_lv2_0) & tmp_144_fu_488_p4) & ap_const_lv2_0) & tmp_145_fu_498_p4) & ap_const_lv2_0) & tmp_146_fu_508_p4) & ap_const_lv2_0) & tmp_147_fu_518_p4) & ap_const_lv2_0) & tmp_148_fu_528_p4) & ap_const_lv2_0) & tmp_149_fu_538_p4) & ap_const_lv2_0) & trunc_ln1355_1_fu_468_p4);
    ret_V_fu_280_p32 <= ((((((((((((((((((((((((((((((tmp_fu_152_p3 & ap_const_lv1_0) & tmp_556_fu_160_p3) & ap_const_lv1_0) & tmp_557_fu_168_p3) & ap_const_lv1_0) & tmp_558_fu_176_p3) & ap_const_lv1_0) & tmp_559_fu_184_p3) & ap_const_lv1_0) & tmp_560_fu_192_p3) & ap_const_lv1_0) & tmp_561_fu_200_p3) & ap_const_lv1_0) & tmp_562_fu_208_p3) & ap_const_lv1_0) & tmp_563_fu_216_p3) & ap_const_lv1_0) & tmp_564_fu_224_p3) & ap_const_lv1_0) & tmp_565_fu_232_p3) & ap_const_lv1_0) & tmp_566_fu_240_p3) & ap_const_lv1_0) & tmp_567_fu_248_p3) & ap_const_lv1_0) & tmp_568_fu_256_p3) & ap_const_lv1_0) & tmp_569_fu_264_p3) & ap_const_lv1_0) & tmp_570_fu_272_p3);
    tmp_137_fu_370_p4 <= x_V_4_fu_350_p2(25 downto 24);
    tmp_138_fu_380_p4 <= x_V_4_fu_350_p2(21 downto 20);
    tmp_139_fu_390_p4 <= x_V_4_fu_350_p2(17 downto 16);
    tmp_140_fu_400_p4 <= x_V_4_fu_350_p2(13 downto 12);
    tmp_141_fu_410_p4 <= x_V_4_fu_350_p2(9 downto 8);
    tmp_142_fu_420_p4 <= x_V_4_fu_350_p2(5 downto 4);
    tmp_143_fu_478_p4 <= x_V_4_fu_350_p2(31 downto 30);
    tmp_144_fu_488_p4 <= x_V_4_fu_350_p2(27 downto 26);
    tmp_145_fu_498_p4 <= x_V_4_fu_350_p2(23 downto 22);
    tmp_146_fu_508_p4 <= x_V_4_fu_350_p2(19 downto 18);
    tmp_147_fu_518_p4 <= x_V_4_fu_350_p2(15 downto 14);
    tmp_148_fu_528_p4 <= x_V_4_fu_350_p2(11 downto 10);
    tmp_149_fu_538_p4 <= x_V_4_fu_350_p2(7 downto 6);
    tmp_151_fu_700_p4 <= add_ln209_fu_683_p2(27 downto 24);
    tmp_152_fu_710_p4 <= add_ln209_fu_683_p2(19 downto 16);
    tmp_153_fu_720_p4 <= add_ln209_fu_683_p2(11 downto 8);
    tmp_556_fu_160_p3 <= xor_ln769_3_fu_146_p2(29 downto 29);
    tmp_557_fu_168_p3 <= xor_ln769_3_fu_146_p2(27 downto 27);
    tmp_558_fu_176_p3 <= xor_ln769_3_fu_146_p2(25 downto 25);
    tmp_559_fu_184_p3 <= xor_ln769_3_fu_146_p2(23 downto 23);
    tmp_560_fu_192_p3 <= xor_ln769_3_fu_146_p2(21 downto 21);
    tmp_561_fu_200_p3 <= xor_ln769_3_fu_146_p2(19 downto 19);
    tmp_562_fu_208_p3 <= xor_ln769_3_fu_146_p2(17 downto 17);
    tmp_563_fu_216_p3 <= xor_ln769_3_fu_146_p2(15 downto 15);
    tmp_564_fu_224_p3 <= xor_ln769_3_fu_146_p2(13 downto 13);
    tmp_565_fu_232_p3 <= xor_ln769_3_fu_146_p2(11 downto 11);
    tmp_566_fu_240_p3 <= xor_ln769_3_fu_146_p2(9 downto 9);
    tmp_567_fu_248_p3 <= xor_ln769_3_fu_146_p2(7 downto 7);
    tmp_568_fu_256_p3 <= xor_ln769_3_fu_146_p2(5 downto 5);
    tmp_569_fu_264_p3 <= xor_ln769_3_fu_146_p2(3 downto 3);
    tmp_570_fu_272_p3 <= xor_ln769_3_fu_146_p2(1 downto 1);
    tmp_fu_152_p3 <= xor_ln769_3_fu_146_p2(31 downto 31);
    tmp_s_fu_360_p4 <= x_V_4_fu_350_p2(29 downto 28);
    trunc_ln1355_1_fu_468_p4 <= x_V_4_fu_350_p2(3 downto 2);
    trunc_ln1355_fu_356_p1 <= x_V_4_fu_350_p2(2 - 1 downto 0);
    trunc_ln1_fu_774_p3 <= (ap_const_lv2_0 & tmp_153_fu_720_p4);
    trunc_ln209_1_fu_624_p15 <= (((((((((((((ap_const_lv2_0 & tmp_144_reg_852) & ap_const_lv2_0) & tmp_145_reg_857) & ap_const_lv2_0) & tmp_146_reg_862) & ap_const_lv2_0) & tmp_147_reg_867) & ap_const_lv2_0) & tmp_148_reg_872) & ap_const_lv2_0) & tmp_149_reg_877) & ap_const_lv2_0) & trunc_ln1355_1_reg_846);
    trunc_ln209_2_fu_649_p15 <= (((((((((((((ap_const_lv2_0 & tmp_137_reg_816) & ap_const_lv2_0) & tmp_138_reg_821) & ap_const_lv2_0) & tmp_139_reg_826) & ap_const_lv2_0) & tmp_140_reg_831) & ap_const_lv2_0) & tmp_141_reg_836) & ap_const_lv2_0) & tmp_142_reg_841) & ap_const_lv2_0) & trunc_ln1355_reg_810);
    trunc_ln209_fu_730_p1 <= add_ln209_fu_683_p2(4 - 1 downto 0);
    trunc_ln700_1_fu_788_p4 <= add_ln700_fu_782_p2(21 downto 16);
    trunc_ln769_1_fu_130_p1 <= b_V(32 - 1 downto 0);
    trunc_ln769_fu_120_p1 <= w_V(32 - 1 downto 0);
    x_V_3_fu_734_p8 <= ((((((tmp_151_fu_700_p4 & ap_const_lv4_0) & tmp_152_fu_710_p4) & ap_const_lv4_0) & tmp_153_fu_720_p4) & ap_const_lv4_0) & trunc_ln209_fu_730_p1);
    x_V_4_fu_350_p2 <= std_logic_vector(unsigned(r_V_2_fu_140_p2) - unsigned(zext_ln1355_fu_346_p1));
    x_V_fu_592_p2 <= std_logic_vector(unsigned(zext_ln1355_2_fu_582_p1) + unsigned(zext_ln1355_1_fu_464_p1));
    xor_ln769_1_fu_134_p2 <= (trunc_ln769_fu_120_p1 xor ap_const_lv32_AAAAAAAA);
    xor_ln769_3_fu_146_p2 <= (xor_ln769_1_fu_134_p2 xor trunc_ln769_1_fu_130_p1);
    xor_ln769_fu_124_p2 <= (w_V xor ap_const_lv64_FFFFFFFFFFFFFFFF);
    zext_ln1355_1_fu_464_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(ret_V_5_fu_430_p16),31));
    zext_ln1355_2_fu_582_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(ret_V_6_fu_548_p16),31));
    zext_ln1355_fu_346_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(ret_V_fu_280_p32),64));
    zext_ln209_1_fu_621_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(trunc_ln1355_reg_810),4));
    zext_ln209_2_fu_680_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_150_reg_882),28));
    zext_ln209_fu_618_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(trunc_ln1355_1_reg_846),4));
    zext_ln700_fu_770_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln209_3_fu_694_p2),6));
end behav;