-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity compute_engine_16 is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    ap_ce : IN STD_LOGIC;
    b_V : IN STD_LOGIC_VECTOR (15 downto 0);
    w_V : IN STD_LOGIC_VECTOR (15 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (4 downto 0) );
end;


architecture behav of compute_engine_16 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_pp0_stage0 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv16_FFFF : STD_LOGIC_VECTOR (15 downto 0) := "1111111111111111";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001011";
    constant ap_const_lv32_C : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001100";
    constant ap_const_lv32_F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001111";

    signal ap_CS_fsm : STD_LOGIC_VECTOR (0 downto 0) := "1";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_pp0_stage0 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage0 : signal is "none";
    signal ap_enable_reg_pp0_iter0 : STD_LOGIC;
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal ap_enable_reg_pp0_iter1 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter2 : STD_LOGIC := '0';
    signal ap_idle_pp0 : STD_LOGIC;
    signal ap_block_state1_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state2_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_state3_pp0_stage0_iter2 : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal lut16_V_address0 : STD_LOGIC_VECTOR (3 downto 0);
    signal lut16_V_ce0 : STD_LOGIC;
    signal lut16_V_q0 : STD_LOGIC_VECTOR (2 downto 0);
    signal lut16_V_address1 : STD_LOGIC_VECTOR (3 downto 0);
    signal lut16_V_ce1 : STD_LOGIC;
    signal lut16_V_q1 : STD_LOGIC_VECTOR (2 downto 0);
    signal lut16_V_address2 : STD_LOGIC_VECTOR (3 downto 0);
    signal lut16_V_ce2 : STD_LOGIC;
    signal lut16_V_q2 : STD_LOGIC_VECTOR (2 downto 0);
    signal lut16_V_address3 : STD_LOGIC_VECTOR (3 downto 0);
    signal lut16_V_ce3 : STD_LOGIC;
    signal lut16_V_q3 : STD_LOGIC_VECTOR (2 downto 0);
    signal add0_V_fu_171_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal add0_V_reg_223 : STD_LOGIC_VECTOR (3 downto 0);
    signal add1_V_fu_185_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal add1_V_reg_228 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_block_pp0_stage0_subdone : BOOLEAN;
    signal zext_ln18_fu_113_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln18_1_fu_128_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln19_fu_143_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln19_1_fu_158_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal xor_ln769_fu_97_p2 : STD_LOGIC_VECTOR (15 downto 0);
    signal r_V_fu_103_p2 : STD_LOGIC_VECTOR (15 downto 0);
    signal trunc_ln681_fu_109_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal p_Result_s_fu_118_p4 : STD_LOGIC_VECTOR (3 downto 0);
    signal p_Result_45_fu_133_p4 : STD_LOGIC_VECTOR (3 downto 0);
    signal p_Result_46_fu_148_p4 : STD_LOGIC_VECTOR (3 downto 0);
    signal zext_ln215_fu_163_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal zext_ln215_16_fu_167_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal zext_ln215_17_fu_177_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal zext_ln215_18_fu_181_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal lhs_V_fu_191_p1 : STD_LOGIC_VECTOR (4 downto 0);
    signal rhs_V_fu_194_p1 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_idle_pp0_0to1 : STD_LOGIC;
    signal ap_reset_idle_pp0 : STD_LOGIC;
    signal ap_reset_start_pp0 : STD_LOGIC;
    signal ap_enable_pp0 : STD_LOGIC;

    component compute_engine_16eOg IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (3 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (2 downto 0);
        address1 : IN STD_LOGIC_VECTOR (3 downto 0);
        ce1 : IN STD_LOGIC;
        q1 : OUT STD_LOGIC_VECTOR (2 downto 0);
        address2 : IN STD_LOGIC_VECTOR (3 downto 0);
        ce2 : IN STD_LOGIC;
        q2 : OUT STD_LOGIC_VECTOR (2 downto 0);
        address3 : IN STD_LOGIC_VECTOR (3 downto 0);
        ce3 : IN STD_LOGIC;
        q3 : OUT STD_LOGIC_VECTOR (2 downto 0) );
    end component;



begin
    lut16_V_U : component compute_engine_16eOg
    generic map (
        DataWidth => 3,
        AddressRange => 16,
        AddressWidth => 4)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => lut16_V_address0,
        ce0 => lut16_V_ce0,
        q0 => lut16_V_q0,
        address1 => lut16_V_address1,
        ce1 => lut16_V_ce1,
        q1 => lut16_V_q1,
        address2 => lut16_V_address2,
        ce2 => lut16_V_ce2,
        q2 => lut16_V_q2,
        address3 => lut16_V_address3,
        ce3 => lut16_V_ce3,
        q3 => lut16_V_q3);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter1_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
            else
                if (((ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
                    ap_enable_reg_pp0_iter1 <= ap_start;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter2_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter2 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
                end if; 
            end if;
        end if;
    end process;

    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_ce) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                add0_V_reg_223 <= add0_V_fu_171_p2;
                add1_V_reg_228 <= add1_V_fu_185_p2;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_CS_fsm, ap_block_pp0_stage0_subdone, ap_reset_idle_pp0, ap_reset_start_pp0)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_pp0_stage0 => 
                ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
            when others =>  
                ap_NS_fsm <= "X";
        end case;
    end process;
    add0_V_fu_171_p2 <= std_logic_vector(unsigned(zext_ln215_fu_163_p1) + unsigned(zext_ln215_16_fu_167_p1));
    add1_V_fu_185_p2 <= std_logic_vector(unsigned(zext_ln215_17_fu_177_p1) + unsigned(zext_ln215_18_fu_181_p1));
    ap_CS_fsm_pp0_stage0 <= ap_CS_fsm(0);
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_block_pp0_stage0_11001_assign_proc : process(ap_start)
    begin
                ap_block_pp0_stage0_11001 <= ((ap_start = ap_const_logic_0) and (ap_start = ap_const_logic_1));
    end process;


    ap_block_pp0_stage0_subdone_assign_proc : process(ap_start, ap_ce)
    begin
                ap_block_pp0_stage0_subdone <= ((ap_const_logic_0 = ap_ce) or ((ap_start = ap_const_logic_0) and (ap_start = ap_const_logic_1)));
    end process;


    ap_block_state1_pp0_stage0_iter0_assign_proc : process(ap_start)
    begin
                ap_block_state1_pp0_stage0_iter0 <= (ap_start = ap_const_logic_0);
    end process;

        ap_block_state2_pp0_stage0_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state3_pp0_stage0_iter2 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0, ap_enable_reg_pp0_iter2, ap_block_pp0_stage0_11001, ap_ce)
    begin
        if ((((ap_start = ap_const_logic_0) and (ap_const_boolean_0 = ap_block_pp0_stage0) and (ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0)) or ((ap_const_logic_1 = ap_ce) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter2 = ap_const_logic_1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;

    ap_enable_pp0 <= (ap_idle_pp0 xor ap_const_logic_1);
    ap_enable_reg_pp0_iter0 <= ap_start;

    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_idle_pp0)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_idle_pp0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_assign_proc : process(ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter2)
    begin
        if (((ap_enable_reg_pp0_iter2 = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_0))) then 
            ap_idle_pp0 <= ap_const_logic_1;
        else 
            ap_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_0to1_assign_proc : process(ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_enable_reg_pp0_iter1 = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_0))) then 
            ap_idle_pp0_0to1 <= ap_const_logic_1;
        else 
            ap_idle_pp0_0to1 <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_ce)
    begin
        if (((ap_const_logic_1 = ap_ce) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    ap_reset_idle_pp0_assign_proc : process(ap_start, ap_idle_pp0_0to1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_idle_pp0_0to1 = ap_const_logic_1))) then 
            ap_reset_idle_pp0 <= ap_const_logic_1;
        else 
            ap_reset_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_reset_start_pp0_assign_proc : process(ap_start, ap_idle_pp0_0to1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_idle_pp0_0to1 = ap_const_logic_1))) then 
            ap_reset_start_pp0 <= ap_const_logic_1;
        else 
            ap_reset_start_pp0 <= ap_const_logic_0;
        end if; 
    end process;

    ap_return <= std_logic_vector(signed(lhs_V_fu_191_p1) + signed(rhs_V_fu_194_p1));
        lhs_V_fu_191_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(add0_V_reg_223),5));

    lut16_V_address0 <= zext_ln18_fu_113_p1(4 - 1 downto 0);
    lut16_V_address1 <= zext_ln18_1_fu_128_p1(4 - 1 downto 0);
    lut16_V_address2 <= zext_ln19_fu_143_p1(4 - 1 downto 0);
    lut16_V_address3 <= zext_ln19_1_fu_158_p1(4 - 1 downto 0);

    lut16_V_ce0_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_ce)
    begin
        if (((ap_const_logic_1 = ap_ce) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            lut16_V_ce0 <= ap_const_logic_1;
        else 
            lut16_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    lut16_V_ce1_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_ce)
    begin
        if (((ap_const_logic_1 = ap_ce) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            lut16_V_ce1 <= ap_const_logic_1;
        else 
            lut16_V_ce1 <= ap_const_logic_0;
        end if; 
    end process;


    lut16_V_ce2_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_ce)
    begin
        if (((ap_const_logic_1 = ap_ce) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            lut16_V_ce2 <= ap_const_logic_1;
        else 
            lut16_V_ce2 <= ap_const_logic_0;
        end if; 
    end process;


    lut16_V_ce3_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_ce)
    begin
        if (((ap_const_logic_1 = ap_ce) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            lut16_V_ce3 <= ap_const_logic_1;
        else 
            lut16_V_ce3 <= ap_const_logic_0;
        end if; 
    end process;

    p_Result_45_fu_133_p4 <= r_V_fu_103_p2(11 downto 8);
    p_Result_46_fu_148_p4 <= r_V_fu_103_p2(15 downto 12);
    p_Result_s_fu_118_p4 <= r_V_fu_103_p2(7 downto 4);
    r_V_fu_103_p2 <= (xor_ln769_fu_97_p2 xor b_V);
        rhs_V_fu_194_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(add1_V_reg_228),5));

    trunc_ln681_fu_109_p1 <= r_V_fu_103_p2(4 - 1 downto 0);
    xor_ln769_fu_97_p2 <= (w_V xor ap_const_lv16_FFFF);
    zext_ln18_1_fu_128_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_Result_s_fu_118_p4),64));
    zext_ln18_fu_113_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(trunc_ln681_fu_109_p1),64));
    zext_ln19_1_fu_158_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_Result_46_fu_148_p4),64));
    zext_ln19_fu_143_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_Result_45_fu_133_p4),64));
    zext_ln215_16_fu_167_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(lut16_V_q1),4));
    zext_ln215_17_fu_177_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(lut16_V_q2),4));
    zext_ln215_18_fu_181_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(lut16_V_q3),4));
    zext_ln215_fu_163_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(lut16_V_q0),4));
end behav;