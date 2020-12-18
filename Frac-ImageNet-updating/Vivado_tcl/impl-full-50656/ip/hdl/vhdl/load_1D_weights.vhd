-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity load_1D_weights is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    m_axi_weights_all_V_AWVALID : OUT STD_LOGIC;
    m_axi_weights_all_V_AWREADY : IN STD_LOGIC;
    m_axi_weights_all_V_AWADDR : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_weights_all_V_AWID : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_weights_all_V_AWLEN : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_weights_all_V_AWSIZE : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_weights_all_V_AWBURST : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_weights_all_V_AWLOCK : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_weights_all_V_AWCACHE : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_weights_all_V_AWPROT : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_weights_all_V_AWQOS : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_weights_all_V_AWREGION : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_weights_all_V_AWUSER : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_weights_all_V_WVALID : OUT STD_LOGIC;
    m_axi_weights_all_V_WREADY : IN STD_LOGIC;
    m_axi_weights_all_V_WDATA : OUT STD_LOGIC_VECTOR (511 downto 0);
    m_axi_weights_all_V_WSTRB : OUT STD_LOGIC_VECTOR (63 downto 0);
    m_axi_weights_all_V_WLAST : OUT STD_LOGIC;
    m_axi_weights_all_V_WID : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_weights_all_V_WUSER : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_weights_all_V_ARVALID : OUT STD_LOGIC;
    m_axi_weights_all_V_ARREADY : IN STD_LOGIC;
    m_axi_weights_all_V_ARADDR : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_weights_all_V_ARID : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_weights_all_V_ARLEN : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_weights_all_V_ARSIZE : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_weights_all_V_ARBURST : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_weights_all_V_ARLOCK : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_weights_all_V_ARCACHE : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_weights_all_V_ARPROT : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_weights_all_V_ARQOS : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_weights_all_V_ARREGION : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_weights_all_V_ARUSER : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_weights_all_V_RVALID : IN STD_LOGIC;
    m_axi_weights_all_V_RREADY : OUT STD_LOGIC;
    m_axi_weights_all_V_RDATA : IN STD_LOGIC_VECTOR (511 downto 0);
    m_axi_weights_all_V_RLAST : IN STD_LOGIC;
    m_axi_weights_all_V_RID : IN STD_LOGIC_VECTOR (0 downto 0);
    m_axi_weights_all_V_RUSER : IN STD_LOGIC_VECTOR (0 downto 0);
    m_axi_weights_all_V_RRESP : IN STD_LOGIC_VECTOR (1 downto 0);
    m_axi_weights_all_V_BVALID : IN STD_LOGIC;
    m_axi_weights_all_V_BREADY : OUT STD_LOGIC;
    m_axi_weights_all_V_BRESP : IN STD_LOGIC_VECTOR (1 downto 0);
    m_axi_weights_all_V_BID : IN STD_LOGIC_VECTOR (0 downto 0);
    m_axi_weights_all_V_BUSER : IN STD_LOGIC_VECTOR (0 downto 0);
    weights_all_V_offset : IN STD_LOGIC_VECTOR (25 downto 0);
    weights_all_ptr : IN STD_LOGIC_VECTOR (12 downto 0);
    ap_return_0 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_1 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_2 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_3 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_4 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_5 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_6 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_7 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_8 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_9 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_10 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_11 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_12 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_13 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_14 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_15 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_16 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_17 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_18 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_19 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_20 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_21 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_22 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_23 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_24 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_25 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_26 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_27 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_28 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_29 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_30 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_31 : OUT STD_LOGIC_VECTOR (15 downto 0) );
end;


architecture behav of load_1D_weights is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (8 downto 0) := "000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (8 downto 0) := "000000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (8 downto 0) := "000000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (8 downto 0) := "000001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (8 downto 0) := "000010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (8 downto 0) := "000100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (8 downto 0) := "001000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (8 downto 0) := "010000000";
    constant ap_ST_fsm_state9 : STD_LOGIC_VECTOR (8 downto 0) := "100000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv512_lc_1 : STD_LOGIC_VECTOR (511 downto 0) := "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
    constant ap_const_lv64_0 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_10 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010000";
    constant ap_const_lv32_1F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011111";
    constant ap_const_lv32_20 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000100000";
    constant ap_const_lv32_2F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000101111";
    constant ap_const_lv32_30 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000110000";
    constant ap_const_lv32_3F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000111111";
    constant ap_const_lv32_40 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000001000000";
    constant ap_const_lv32_4F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000001001111";
    constant ap_const_lv32_50 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000001010000";
    constant ap_const_lv32_5F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000001011111";
    constant ap_const_lv32_60 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000001100000";
    constant ap_const_lv32_6F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000001101111";
    constant ap_const_lv32_70 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000001110000";
    constant ap_const_lv32_7F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000001111111";
    constant ap_const_lv32_80 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000010000000";
    constant ap_const_lv32_8F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000010001111";
    constant ap_const_lv32_90 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000010010000";
    constant ap_const_lv32_9F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000010011111";
    constant ap_const_lv32_A0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000010100000";
    constant ap_const_lv32_AF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000010101111";
    constant ap_const_lv32_B0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000010110000";
    constant ap_const_lv32_BF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000010111111";
    constant ap_const_lv32_C0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000011000000";
    constant ap_const_lv32_CF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000011001111";
    constant ap_const_lv32_D0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000011010000";
    constant ap_const_lv32_DF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000011011111";
    constant ap_const_lv32_E0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000011100000";
    constant ap_const_lv32_EF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000011101111";
    constant ap_const_lv32_F0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000011110000";
    constant ap_const_lv32_FF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000011111111";
    constant ap_const_lv32_100 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000100000000";
    constant ap_const_lv32_10F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000100001111";
    constant ap_const_lv32_110 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000100010000";
    constant ap_const_lv32_11F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000100011111";
    constant ap_const_lv32_120 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000100100000";
    constant ap_const_lv32_12F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000100101111";
    constant ap_const_lv32_130 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000100110000";
    constant ap_const_lv32_13F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000100111111";
    constant ap_const_lv32_140 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000101000000";
    constant ap_const_lv32_14F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000101001111";
    constant ap_const_lv32_150 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000101010000";
    constant ap_const_lv32_15F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000101011111";
    constant ap_const_lv32_160 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000101100000";
    constant ap_const_lv32_16F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000101101111";
    constant ap_const_lv32_170 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000101110000";
    constant ap_const_lv32_17F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000101111111";
    constant ap_const_lv32_180 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000110000000";
    constant ap_const_lv32_18F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000110001111";
    constant ap_const_lv32_190 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000110010000";
    constant ap_const_lv32_19F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000110011111";
    constant ap_const_lv32_1A0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000110100000";
    constant ap_const_lv32_1AF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000110101111";
    constant ap_const_lv32_1B0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000110110000";
    constant ap_const_lv32_1BF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000110111111";
    constant ap_const_lv32_1C0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000111000000";
    constant ap_const_lv32_1CF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000111001111";
    constant ap_const_lv32_1D0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000111010000";
    constant ap_const_lv32_1DF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000111011111";
    constant ap_const_lv32_1E0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000111100000";
    constant ap_const_lv32_1EF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000111101111";
    constant ap_const_lv32_1F0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000111110000";
    constant ap_const_lv32_1FF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000111111111";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (8 downto 0) := "000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal weights_all_V_blk_n_AR : STD_LOGIC;
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal weights_all_V_blk_n_R : STD_LOGIC;
    signal ap_CS_fsm_state9 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state9 : signal is "none";
    signal add_ln29_fu_190_p2 : STD_LOGIC_VECTOR (26 downto 0);
    signal add_ln29_reg_712 : STD_LOGIC_VECTOR (26 downto 0);
    signal zext_ln29_2_fu_196_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln29_1_fu_186_p1 : STD_LOGIC_VECTOR (26 downto 0);
    signal zext_ln29_fu_182_p1 : STD_LOGIC_VECTOR (26 downto 0);
    signal trunc_ln647_fu_206_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (8 downto 0);


begin




    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;

    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                add_ln29_reg_712 <= add_ln29_fu_190_p2;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, m_axi_weights_all_V_ARREADY, m_axi_weights_all_V_RVALID, ap_CS_fsm_state2, ap_CS_fsm_state9)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((m_axi_weights_all_V_ARREADY = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state2;
                end if;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state6;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state7;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state8;
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_state9;
            when ap_ST_fsm_state9 => 
                if (((m_axi_weights_all_V_RVALID = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state9))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state9;
                end if;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXX";
        end case;
    end process;
    add_ln29_fu_190_p2 <= std_logic_vector(unsigned(zext_ln29_1_fu_186_p1) + unsigned(zext_ln29_fu_182_p1));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state9 <= ap_CS_fsm(8);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, m_axi_weights_all_V_RVALID, ap_CS_fsm_state9)
    begin
        if ((((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)) or ((m_axi_weights_all_V_RVALID = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state9)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(m_axi_weights_all_V_RVALID, ap_CS_fsm_state9)
    begin
        if (((m_axi_weights_all_V_RVALID = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state9))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    ap_return_0 <= trunc_ln647_fu_206_p1;
    ap_return_1 <= m_axi_weights_all_V_RDATA(31 downto 16);
    ap_return_10 <= m_axi_weights_all_V_RDATA(175 downto 160);
    ap_return_11 <= m_axi_weights_all_V_RDATA(191 downto 176);
    ap_return_12 <= m_axi_weights_all_V_RDATA(207 downto 192);
    ap_return_13 <= m_axi_weights_all_V_RDATA(223 downto 208);
    ap_return_14 <= m_axi_weights_all_V_RDATA(239 downto 224);
    ap_return_15 <= m_axi_weights_all_V_RDATA(255 downto 240);
    ap_return_16 <= m_axi_weights_all_V_RDATA(271 downto 256);
    ap_return_17 <= m_axi_weights_all_V_RDATA(287 downto 272);
    ap_return_18 <= m_axi_weights_all_V_RDATA(303 downto 288);
    ap_return_19 <= m_axi_weights_all_V_RDATA(319 downto 304);
    ap_return_2 <= m_axi_weights_all_V_RDATA(47 downto 32);
    ap_return_20 <= m_axi_weights_all_V_RDATA(335 downto 320);
    ap_return_21 <= m_axi_weights_all_V_RDATA(351 downto 336);
    ap_return_22 <= m_axi_weights_all_V_RDATA(367 downto 352);
    ap_return_23 <= m_axi_weights_all_V_RDATA(383 downto 368);
    ap_return_24 <= m_axi_weights_all_V_RDATA(399 downto 384);
    ap_return_25 <= m_axi_weights_all_V_RDATA(415 downto 400);
    ap_return_26 <= m_axi_weights_all_V_RDATA(431 downto 416);
    ap_return_27 <= m_axi_weights_all_V_RDATA(447 downto 432);
    ap_return_28 <= m_axi_weights_all_V_RDATA(463 downto 448);
    ap_return_29 <= m_axi_weights_all_V_RDATA(479 downto 464);
    ap_return_3 <= m_axi_weights_all_V_RDATA(63 downto 48);
    ap_return_30 <= m_axi_weights_all_V_RDATA(495 downto 480);
    ap_return_31 <= m_axi_weights_all_V_RDATA(511 downto 496);
    ap_return_4 <= m_axi_weights_all_V_RDATA(79 downto 64);
    ap_return_5 <= m_axi_weights_all_V_RDATA(95 downto 80);
    ap_return_6 <= m_axi_weights_all_V_RDATA(111 downto 96);
    ap_return_7 <= m_axi_weights_all_V_RDATA(127 downto 112);
    ap_return_8 <= m_axi_weights_all_V_RDATA(143 downto 128);
    ap_return_9 <= m_axi_weights_all_V_RDATA(159 downto 144);
    m_axi_weights_all_V_ARADDR <= zext_ln29_2_fu_196_p1(32 - 1 downto 0);
    m_axi_weights_all_V_ARBURST <= ap_const_lv2_0;
    m_axi_weights_all_V_ARCACHE <= ap_const_lv4_0;
    m_axi_weights_all_V_ARID <= ap_const_lv1_0;
    m_axi_weights_all_V_ARLEN <= ap_const_lv32_1;
    m_axi_weights_all_V_ARLOCK <= ap_const_lv2_0;
    m_axi_weights_all_V_ARPROT <= ap_const_lv3_0;
    m_axi_weights_all_V_ARQOS <= ap_const_lv4_0;
    m_axi_weights_all_V_ARREGION <= ap_const_lv4_0;
    m_axi_weights_all_V_ARSIZE <= ap_const_lv3_0;
    m_axi_weights_all_V_ARUSER <= ap_const_lv1_0;

    m_axi_weights_all_V_ARVALID_assign_proc : process(m_axi_weights_all_V_ARREADY, ap_CS_fsm_state2)
    begin
        if (((m_axi_weights_all_V_ARREADY = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            m_axi_weights_all_V_ARVALID <= ap_const_logic_1;
        else 
            m_axi_weights_all_V_ARVALID <= ap_const_logic_0;
        end if; 
    end process;

    m_axi_weights_all_V_AWADDR <= ap_const_lv32_0;
    m_axi_weights_all_V_AWBURST <= ap_const_lv2_0;
    m_axi_weights_all_V_AWCACHE <= ap_const_lv4_0;
    m_axi_weights_all_V_AWID <= ap_const_lv1_0;
    m_axi_weights_all_V_AWLEN <= ap_const_lv32_0;
    m_axi_weights_all_V_AWLOCK <= ap_const_lv2_0;
    m_axi_weights_all_V_AWPROT <= ap_const_lv3_0;
    m_axi_weights_all_V_AWQOS <= ap_const_lv4_0;
    m_axi_weights_all_V_AWREGION <= ap_const_lv4_0;
    m_axi_weights_all_V_AWSIZE <= ap_const_lv3_0;
    m_axi_weights_all_V_AWUSER <= ap_const_lv1_0;
    m_axi_weights_all_V_AWVALID <= ap_const_logic_0;
    m_axi_weights_all_V_BREADY <= ap_const_logic_0;

    m_axi_weights_all_V_RREADY_assign_proc : process(m_axi_weights_all_V_RVALID, ap_CS_fsm_state9)
    begin
        if (((m_axi_weights_all_V_RVALID = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state9))) then 
            m_axi_weights_all_V_RREADY <= ap_const_logic_1;
        else 
            m_axi_weights_all_V_RREADY <= ap_const_logic_0;
        end if; 
    end process;

    m_axi_weights_all_V_WDATA <= ap_const_lv512_lc_1;
    m_axi_weights_all_V_WID <= ap_const_lv1_0;
    m_axi_weights_all_V_WLAST <= ap_const_logic_0;
    m_axi_weights_all_V_WSTRB <= ap_const_lv64_0;
    m_axi_weights_all_V_WUSER <= ap_const_lv1_0;
    m_axi_weights_all_V_WVALID <= ap_const_logic_0;
    trunc_ln647_fu_206_p1 <= m_axi_weights_all_V_RDATA(16 - 1 downto 0);

    weights_all_V_blk_n_AR_assign_proc : process(m_axi_weights_all_V_ARREADY, ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            weights_all_V_blk_n_AR <= m_axi_weights_all_V_ARREADY;
        else 
            weights_all_V_blk_n_AR <= ap_const_logic_1;
        end if; 
    end process;


    weights_all_V_blk_n_R_assign_proc : process(m_axi_weights_all_V_RVALID, ap_CS_fsm_state9)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            weights_all_V_blk_n_R <= m_axi_weights_all_V_RVALID;
        else 
            weights_all_V_blk_n_R <= ap_const_logic_1;
        end if; 
    end process;

    zext_ln29_1_fu_186_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(weights_all_V_offset),27));
    zext_ln29_2_fu_196_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln29_reg_712),64));
    zext_ln29_fu_182_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(weights_all_ptr),27));
end behav;
