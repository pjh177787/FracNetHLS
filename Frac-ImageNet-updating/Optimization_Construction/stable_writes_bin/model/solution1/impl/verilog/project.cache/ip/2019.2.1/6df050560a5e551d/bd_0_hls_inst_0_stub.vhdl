-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.2.1 (win64) Build 2729669 Thu Dec  5 04:49:17 MST 2019
-- Date        : Sun Dec 13 06:56:30 2020
-- Host        : DESKTOP-APERTURE running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
--               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ bd_0_hls_inst_0_stub.vhdl
-- Design      : bd_0_hls_inst_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xczu3eg-sbva484-1-e
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  Port ( 
    s_axi_CTRL_AWADDR : in STD_LOGIC_VECTOR ( 5 downto 0 );
    s_axi_CTRL_AWVALID : in STD_LOGIC;
    s_axi_CTRL_AWREADY : out STD_LOGIC;
    s_axi_CTRL_WDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_CTRL_WSTRB : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axi_CTRL_WVALID : in STD_LOGIC;
    s_axi_CTRL_WREADY : out STD_LOGIC;
    s_axi_CTRL_BRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_CTRL_BVALID : out STD_LOGIC;
    s_axi_CTRL_BREADY : in STD_LOGIC;
    s_axi_CTRL_ARADDR : in STD_LOGIC_VECTOR ( 5 downto 0 );
    s_axi_CTRL_ARVALID : in STD_LOGIC;
    s_axi_CTRL_ARREADY : out STD_LOGIC;
    s_axi_CTRL_RDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_CTRL_RRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_CTRL_RVALID : out STD_LOGIC;
    s_axi_CTRL_RREADY : in STD_LOGIC;
    ap_clk : in STD_LOGIC;
    ap_rst_n : in STD_LOGIC;
    interrupt : out STD_LOGIC;
    m_axi_BUS32_AWADDR : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_BUS32_AWLEN : out STD_LOGIC_VECTOR ( 7 downto 0 );
    m_axi_BUS32_AWSIZE : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_BUS32_AWBURST : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_BUS32_AWLOCK : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_BUS32_AWREGION : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_BUS32_AWCACHE : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_BUS32_AWPROT : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_BUS32_AWQOS : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_BUS32_AWVALID : out STD_LOGIC;
    m_axi_BUS32_AWREADY : in STD_LOGIC;
    m_axi_BUS32_WDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_BUS32_WSTRB : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_BUS32_WLAST : out STD_LOGIC;
    m_axi_BUS32_WVALID : out STD_LOGIC;
    m_axi_BUS32_WREADY : in STD_LOGIC;
    m_axi_BUS32_BRESP : in STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_BUS32_BVALID : in STD_LOGIC;
    m_axi_BUS32_BREADY : out STD_LOGIC;
    m_axi_BUS32_ARADDR : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_BUS32_ARLEN : out STD_LOGIC_VECTOR ( 7 downto 0 );
    m_axi_BUS32_ARSIZE : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_BUS32_ARBURST : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_BUS32_ARLOCK : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_BUS32_ARREGION : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_BUS32_ARCACHE : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_BUS32_ARPROT : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_BUS32_ARQOS : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_BUS32_ARVALID : out STD_LOGIC;
    m_axi_BUS32_ARREADY : in STD_LOGIC;
    m_axi_BUS32_RDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_BUS32_RRESP : in STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_BUS32_RLAST : in STD_LOGIC;
    m_axi_BUS32_RVALID : in STD_LOGIC;
    m_axi_BUS32_RREADY : out STD_LOGIC;
    m_axi_BUS512_AWADDR : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_BUS512_AWLEN : out STD_LOGIC_VECTOR ( 7 downto 0 );
    m_axi_BUS512_AWSIZE : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_BUS512_AWBURST : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_BUS512_AWLOCK : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_BUS512_AWREGION : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_BUS512_AWCACHE : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_BUS512_AWPROT : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_BUS512_AWQOS : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_BUS512_AWVALID : out STD_LOGIC;
    m_axi_BUS512_AWREADY : in STD_LOGIC;
    m_axi_BUS512_WDATA : out STD_LOGIC_VECTOR ( 511 downto 0 );
    m_axi_BUS512_WSTRB : out STD_LOGIC_VECTOR ( 63 downto 0 );
    m_axi_BUS512_WLAST : out STD_LOGIC;
    m_axi_BUS512_WVALID : out STD_LOGIC;
    m_axi_BUS512_WREADY : in STD_LOGIC;
    m_axi_BUS512_BRESP : in STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_BUS512_BVALID : in STD_LOGIC;
    m_axi_BUS512_BREADY : out STD_LOGIC;
    m_axi_BUS512_ARADDR : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_BUS512_ARLEN : out STD_LOGIC_VECTOR ( 7 downto 0 );
    m_axi_BUS512_ARSIZE : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_BUS512_ARBURST : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_BUS512_ARLOCK : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_BUS512_ARREGION : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_BUS512_ARCACHE : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_BUS512_ARPROT : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_BUS512_ARQOS : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_BUS512_ARVALID : out STD_LOGIC;
    m_axi_BUS512_ARREADY : in STD_LOGIC;
    m_axi_BUS512_RDATA : in STD_LOGIC_VECTOR ( 511 downto 0 );
    m_axi_BUS512_RRESP : in STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_BUS512_RLAST : in STD_LOGIC;
    m_axi_BUS512_RVALID : in STD_LOGIC;
    m_axi_BUS512_RREADY : out STD_LOGIC;
    m_axi_DDR512_AWADDR : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DDR512_AWLEN : out STD_LOGIC_VECTOR ( 7 downto 0 );
    m_axi_DDR512_AWSIZE : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DDR512_AWBURST : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DDR512_AWLOCK : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DDR512_AWREGION : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DDR512_AWCACHE : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DDR512_AWPROT : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DDR512_AWQOS : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DDR512_AWVALID : out STD_LOGIC;
    m_axi_DDR512_AWREADY : in STD_LOGIC;
    m_axi_DDR512_WDATA : out STD_LOGIC_VECTOR ( 511 downto 0 );
    m_axi_DDR512_WSTRB : out STD_LOGIC_VECTOR ( 63 downto 0 );
    m_axi_DDR512_WLAST : out STD_LOGIC;
    m_axi_DDR512_WVALID : out STD_LOGIC;
    m_axi_DDR512_WREADY : in STD_LOGIC;
    m_axi_DDR512_BRESP : in STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DDR512_BVALID : in STD_LOGIC;
    m_axi_DDR512_BREADY : out STD_LOGIC;
    m_axi_DDR512_ARADDR : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DDR512_ARLEN : out STD_LOGIC_VECTOR ( 7 downto 0 );
    m_axi_DDR512_ARSIZE : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DDR512_ARBURST : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DDR512_ARLOCK : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DDR512_ARREGION : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DDR512_ARCACHE : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DDR512_ARPROT : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DDR512_ARQOS : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DDR512_ARVALID : out STD_LOGIC;
    m_axi_DDR512_ARREADY : in STD_LOGIC;
    m_axi_DDR512_RDATA : in STD_LOGIC_VECTOR ( 511 downto 0 );
    m_axi_DDR512_RRESP : in STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DDR512_RLAST : in STD_LOGIC;
    m_axi_DDR512_RVALID : in STD_LOGIC;
    m_axi_DDR512_RREADY : out STD_LOGIC
  );

end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix;

architecture stub of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "s_axi_CTRL_AWADDR[5:0],s_axi_CTRL_AWVALID,s_axi_CTRL_AWREADY,s_axi_CTRL_WDATA[31:0],s_axi_CTRL_WSTRB[3:0],s_axi_CTRL_WVALID,s_axi_CTRL_WREADY,s_axi_CTRL_BRESP[1:0],s_axi_CTRL_BVALID,s_axi_CTRL_BREADY,s_axi_CTRL_ARADDR[5:0],s_axi_CTRL_ARVALID,s_axi_CTRL_ARREADY,s_axi_CTRL_RDATA[31:0],s_axi_CTRL_RRESP[1:0],s_axi_CTRL_RVALID,s_axi_CTRL_RREADY,ap_clk,ap_rst_n,interrupt,m_axi_BUS32_AWADDR[31:0],m_axi_BUS32_AWLEN[7:0],m_axi_BUS32_AWSIZE[2:0],m_axi_BUS32_AWBURST[1:0],m_axi_BUS32_AWLOCK[1:0],m_axi_BUS32_AWREGION[3:0],m_axi_BUS32_AWCACHE[3:0],m_axi_BUS32_AWPROT[2:0],m_axi_BUS32_AWQOS[3:0],m_axi_BUS32_AWVALID,m_axi_BUS32_AWREADY,m_axi_BUS32_WDATA[31:0],m_axi_BUS32_WSTRB[3:0],m_axi_BUS32_WLAST,m_axi_BUS32_WVALID,m_axi_BUS32_WREADY,m_axi_BUS32_BRESP[1:0],m_axi_BUS32_BVALID,m_axi_BUS32_BREADY,m_axi_BUS32_ARADDR[31:0],m_axi_BUS32_ARLEN[7:0],m_axi_BUS32_ARSIZE[2:0],m_axi_BUS32_ARBURST[1:0],m_axi_BUS32_ARLOCK[1:0],m_axi_BUS32_ARREGION[3:0],m_axi_BUS32_ARCACHE[3:0],m_axi_BUS32_ARPROT[2:0],m_axi_BUS32_ARQOS[3:0],m_axi_BUS32_ARVALID,m_axi_BUS32_ARREADY,m_axi_BUS32_RDATA[31:0],m_axi_BUS32_RRESP[1:0],m_axi_BUS32_RLAST,m_axi_BUS32_RVALID,m_axi_BUS32_RREADY,m_axi_BUS512_AWADDR[31:0],m_axi_BUS512_AWLEN[7:0],m_axi_BUS512_AWSIZE[2:0],m_axi_BUS512_AWBURST[1:0],m_axi_BUS512_AWLOCK[1:0],m_axi_BUS512_AWREGION[3:0],m_axi_BUS512_AWCACHE[3:0],m_axi_BUS512_AWPROT[2:0],m_axi_BUS512_AWQOS[3:0],m_axi_BUS512_AWVALID,m_axi_BUS512_AWREADY,m_axi_BUS512_WDATA[511:0],m_axi_BUS512_WSTRB[63:0],m_axi_BUS512_WLAST,m_axi_BUS512_WVALID,m_axi_BUS512_WREADY,m_axi_BUS512_BRESP[1:0],m_axi_BUS512_BVALID,m_axi_BUS512_BREADY,m_axi_BUS512_ARADDR[31:0],m_axi_BUS512_ARLEN[7:0],m_axi_BUS512_ARSIZE[2:0],m_axi_BUS512_ARBURST[1:0],m_axi_BUS512_ARLOCK[1:0],m_axi_BUS512_ARREGION[3:0],m_axi_BUS512_ARCACHE[3:0],m_axi_BUS512_ARPROT[2:0],m_axi_BUS512_ARQOS[3:0],m_axi_BUS512_ARVALID,m_axi_BUS512_ARREADY,m_axi_BUS512_RDATA[511:0],m_axi_BUS512_RRESP[1:0],m_axi_BUS512_RLAST,m_axi_BUS512_RVALID,m_axi_BUS512_RREADY,m_axi_DDR512_AWADDR[31:0],m_axi_DDR512_AWLEN[7:0],m_axi_DDR512_AWSIZE[2:0],m_axi_DDR512_AWBURST[1:0],m_axi_DDR512_AWLOCK[1:0],m_axi_DDR512_AWREGION[3:0],m_axi_DDR512_AWCACHE[3:0],m_axi_DDR512_AWPROT[2:0],m_axi_DDR512_AWQOS[3:0],m_axi_DDR512_AWVALID,m_axi_DDR512_AWREADY,m_axi_DDR512_WDATA[511:0],m_axi_DDR512_WSTRB[63:0],m_axi_DDR512_WLAST,m_axi_DDR512_WVALID,m_axi_DDR512_WREADY,m_axi_DDR512_BRESP[1:0],m_axi_DDR512_BVALID,m_axi_DDR512_BREADY,m_axi_DDR512_ARADDR[31:0],m_axi_DDR512_ARLEN[7:0],m_axi_DDR512_ARSIZE[2:0],m_axi_DDR512_ARBURST[1:0],m_axi_DDR512_ARLOCK[1:0],m_axi_DDR512_ARREGION[3:0],m_axi_DDR512_ARCACHE[3:0],m_axi_DDR512_ARPROT[2:0],m_axi_DDR512_ARQOS[3:0],m_axi_DDR512_ARVALID,m_axi_DDR512_ARREADY,m_axi_DDR512_RDATA[511:0],m_axi_DDR512_RRESP[1:0],m_axi_DDR512_RLAST,m_axi_DDR512_RVALID,m_axi_DDR512_RREADY";
attribute X_CORE_INFO : string;
attribute X_CORE_INFO of stub : architecture is "FracNet,Vivado 2019.2.1";
begin
end;
