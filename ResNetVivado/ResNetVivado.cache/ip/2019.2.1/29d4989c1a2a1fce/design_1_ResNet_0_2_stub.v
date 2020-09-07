// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2019.2.1 (win64) Build 2729669 Thu Dec  5 04:49:17 MST 2019
// Date        : Mon Aug 31 17:03:23 2020
// Host        : DESKTOP-APERTURE running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ design_1_ResNet_0_2_stub.v
// Design      : design_1_ResNet_0_2
// Purpose     : Stub declaration of top-level module interface
// Device      : xczu3eg-sbva484-1-e
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "ResNet,Vivado 2019.2.1" *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix(s_axi_AXILiteS_AWADDR, 
  s_axi_AXILiteS_AWVALID, s_axi_AXILiteS_AWREADY, s_axi_AXILiteS_WDATA, 
  s_axi_AXILiteS_WSTRB, s_axi_AXILiteS_WVALID, s_axi_AXILiteS_WREADY, 
  s_axi_AXILiteS_BRESP, s_axi_AXILiteS_BVALID, s_axi_AXILiteS_BREADY, 
  s_axi_AXILiteS_ARADDR, s_axi_AXILiteS_ARVALID, s_axi_AXILiteS_ARREADY, 
  s_axi_AXILiteS_RDATA, s_axi_AXILiteS_RRESP, s_axi_AXILiteS_RVALID, 
  s_axi_AXILiteS_RREADY, ap_clk, ap_rst_n, interrupt, m_axi_IMG_AWADDR, m_axi_IMG_AWLEN, 
  m_axi_IMG_AWSIZE, m_axi_IMG_AWBURST, m_axi_IMG_AWLOCK, m_axi_IMG_AWREGION, 
  m_axi_IMG_AWCACHE, m_axi_IMG_AWPROT, m_axi_IMG_AWQOS, m_axi_IMG_AWVALID, 
  m_axi_IMG_AWREADY, m_axi_IMG_WDATA, m_axi_IMG_WSTRB, m_axi_IMG_WLAST, m_axi_IMG_WVALID, 
  m_axi_IMG_WREADY, m_axi_IMG_BRESP, m_axi_IMG_BVALID, m_axi_IMG_BREADY, m_axi_IMG_ARADDR, 
  m_axi_IMG_ARLEN, m_axi_IMG_ARSIZE, m_axi_IMG_ARBURST, m_axi_IMG_ARLOCK, 
  m_axi_IMG_ARREGION, m_axi_IMG_ARCACHE, m_axi_IMG_ARPROT, m_axi_IMG_ARQOS, 
  m_axi_IMG_ARVALID, m_axi_IMG_ARREADY, m_axi_IMG_RDATA, m_axi_IMG_RRESP, m_axi_IMG_RLAST, 
  m_axi_IMG_RVALID, m_axi_IMG_RREADY, m_axi_BUS32_AWADDR, m_axi_BUS32_AWLEN, 
  m_axi_BUS32_AWSIZE, m_axi_BUS32_AWBURST, m_axi_BUS32_AWLOCK, m_axi_BUS32_AWREGION, 
  m_axi_BUS32_AWCACHE, m_axi_BUS32_AWPROT, m_axi_BUS32_AWQOS, m_axi_BUS32_AWVALID, 
  m_axi_BUS32_AWREADY, m_axi_BUS32_WDATA, m_axi_BUS32_WSTRB, m_axi_BUS32_WLAST, 
  m_axi_BUS32_WVALID, m_axi_BUS32_WREADY, m_axi_BUS32_BRESP, m_axi_BUS32_BVALID, 
  m_axi_BUS32_BREADY, m_axi_BUS32_ARADDR, m_axi_BUS32_ARLEN, m_axi_BUS32_ARSIZE, 
  m_axi_BUS32_ARBURST, m_axi_BUS32_ARLOCK, m_axi_BUS32_ARREGION, m_axi_BUS32_ARCACHE, 
  m_axi_BUS32_ARPROT, m_axi_BUS32_ARQOS, m_axi_BUS32_ARVALID, m_axi_BUS32_ARREADY, 
  m_axi_BUS32_RDATA, m_axi_BUS32_RRESP, m_axi_BUS32_RLAST, m_axi_BUS32_RVALID, 
  m_axi_BUS32_RREADY)
/* synthesis syn_black_box black_box_pad_pin="s_axi_AXILiteS_AWADDR[6:0],s_axi_AXILiteS_AWVALID,s_axi_AXILiteS_AWREADY,s_axi_AXILiteS_WDATA[31:0],s_axi_AXILiteS_WSTRB[3:0],s_axi_AXILiteS_WVALID,s_axi_AXILiteS_WREADY,s_axi_AXILiteS_BRESP[1:0],s_axi_AXILiteS_BVALID,s_axi_AXILiteS_BREADY,s_axi_AXILiteS_ARADDR[6:0],s_axi_AXILiteS_ARVALID,s_axi_AXILiteS_ARREADY,s_axi_AXILiteS_RDATA[31:0],s_axi_AXILiteS_RRESP[1:0],s_axi_AXILiteS_RVALID,s_axi_AXILiteS_RREADY,ap_clk,ap_rst_n,interrupt,m_axi_IMG_AWADDR[31:0],m_axi_IMG_AWLEN[7:0],m_axi_IMG_AWSIZE[2:0],m_axi_IMG_AWBURST[1:0],m_axi_IMG_AWLOCK[1:0],m_axi_IMG_AWREGION[3:0],m_axi_IMG_AWCACHE[3:0],m_axi_IMG_AWPROT[2:0],m_axi_IMG_AWQOS[3:0],m_axi_IMG_AWVALID,m_axi_IMG_AWREADY,m_axi_IMG_WDATA[31:0],m_axi_IMG_WSTRB[3:0],m_axi_IMG_WLAST,m_axi_IMG_WVALID,m_axi_IMG_WREADY,m_axi_IMG_BRESP[1:0],m_axi_IMG_BVALID,m_axi_IMG_BREADY,m_axi_IMG_ARADDR[31:0],m_axi_IMG_ARLEN[7:0],m_axi_IMG_ARSIZE[2:0],m_axi_IMG_ARBURST[1:0],m_axi_IMG_ARLOCK[1:0],m_axi_IMG_ARREGION[3:0],m_axi_IMG_ARCACHE[3:0],m_axi_IMG_ARPROT[2:0],m_axi_IMG_ARQOS[3:0],m_axi_IMG_ARVALID,m_axi_IMG_ARREADY,m_axi_IMG_RDATA[31:0],m_axi_IMG_RRESP[1:0],m_axi_IMG_RLAST,m_axi_IMG_RVALID,m_axi_IMG_RREADY,m_axi_BUS32_AWADDR[31:0],m_axi_BUS32_AWLEN[7:0],m_axi_BUS32_AWSIZE[2:0],m_axi_BUS32_AWBURST[1:0],m_axi_BUS32_AWLOCK[1:0],m_axi_BUS32_AWREGION[3:0],m_axi_BUS32_AWCACHE[3:0],m_axi_BUS32_AWPROT[2:0],m_axi_BUS32_AWQOS[3:0],m_axi_BUS32_AWVALID,m_axi_BUS32_AWREADY,m_axi_BUS32_WDATA[31:0],m_axi_BUS32_WSTRB[3:0],m_axi_BUS32_WLAST,m_axi_BUS32_WVALID,m_axi_BUS32_WREADY,m_axi_BUS32_BRESP[1:0],m_axi_BUS32_BVALID,m_axi_BUS32_BREADY,m_axi_BUS32_ARADDR[31:0],m_axi_BUS32_ARLEN[7:0],m_axi_BUS32_ARSIZE[2:0],m_axi_BUS32_ARBURST[1:0],m_axi_BUS32_ARLOCK[1:0],m_axi_BUS32_ARREGION[3:0],m_axi_BUS32_ARCACHE[3:0],m_axi_BUS32_ARPROT[2:0],m_axi_BUS32_ARQOS[3:0],m_axi_BUS32_ARVALID,m_axi_BUS32_ARREADY,m_axi_BUS32_RDATA[31:0],m_axi_BUS32_RRESP[1:0],m_axi_BUS32_RLAST,m_axi_BUS32_RVALID,m_axi_BUS32_RREADY" */;
  input [6:0]s_axi_AXILiteS_AWADDR;
  input s_axi_AXILiteS_AWVALID;
  output s_axi_AXILiteS_AWREADY;
  input [31:0]s_axi_AXILiteS_WDATA;
  input [3:0]s_axi_AXILiteS_WSTRB;
  input s_axi_AXILiteS_WVALID;
  output s_axi_AXILiteS_WREADY;
  output [1:0]s_axi_AXILiteS_BRESP;
  output s_axi_AXILiteS_BVALID;
  input s_axi_AXILiteS_BREADY;
  input [6:0]s_axi_AXILiteS_ARADDR;
  input s_axi_AXILiteS_ARVALID;
  output s_axi_AXILiteS_ARREADY;
  output [31:0]s_axi_AXILiteS_RDATA;
  output [1:0]s_axi_AXILiteS_RRESP;
  output s_axi_AXILiteS_RVALID;
  input s_axi_AXILiteS_RREADY;
  input ap_clk;
  input ap_rst_n;
  output interrupt;
  output [31:0]m_axi_IMG_AWADDR;
  output [7:0]m_axi_IMG_AWLEN;
  output [2:0]m_axi_IMG_AWSIZE;
  output [1:0]m_axi_IMG_AWBURST;
  output [1:0]m_axi_IMG_AWLOCK;
  output [3:0]m_axi_IMG_AWREGION;
  output [3:0]m_axi_IMG_AWCACHE;
  output [2:0]m_axi_IMG_AWPROT;
  output [3:0]m_axi_IMG_AWQOS;
  output m_axi_IMG_AWVALID;
  input m_axi_IMG_AWREADY;
  output [31:0]m_axi_IMG_WDATA;
  output [3:0]m_axi_IMG_WSTRB;
  output m_axi_IMG_WLAST;
  output m_axi_IMG_WVALID;
  input m_axi_IMG_WREADY;
  input [1:0]m_axi_IMG_BRESP;
  input m_axi_IMG_BVALID;
  output m_axi_IMG_BREADY;
  output [31:0]m_axi_IMG_ARADDR;
  output [7:0]m_axi_IMG_ARLEN;
  output [2:0]m_axi_IMG_ARSIZE;
  output [1:0]m_axi_IMG_ARBURST;
  output [1:0]m_axi_IMG_ARLOCK;
  output [3:0]m_axi_IMG_ARREGION;
  output [3:0]m_axi_IMG_ARCACHE;
  output [2:0]m_axi_IMG_ARPROT;
  output [3:0]m_axi_IMG_ARQOS;
  output m_axi_IMG_ARVALID;
  input m_axi_IMG_ARREADY;
  input [31:0]m_axi_IMG_RDATA;
  input [1:0]m_axi_IMG_RRESP;
  input m_axi_IMG_RLAST;
  input m_axi_IMG_RVALID;
  output m_axi_IMG_RREADY;
  output [31:0]m_axi_BUS32_AWADDR;
  output [7:0]m_axi_BUS32_AWLEN;
  output [2:0]m_axi_BUS32_AWSIZE;
  output [1:0]m_axi_BUS32_AWBURST;
  output [1:0]m_axi_BUS32_AWLOCK;
  output [3:0]m_axi_BUS32_AWREGION;
  output [3:0]m_axi_BUS32_AWCACHE;
  output [2:0]m_axi_BUS32_AWPROT;
  output [3:0]m_axi_BUS32_AWQOS;
  output m_axi_BUS32_AWVALID;
  input m_axi_BUS32_AWREADY;
  output [31:0]m_axi_BUS32_WDATA;
  output [3:0]m_axi_BUS32_WSTRB;
  output m_axi_BUS32_WLAST;
  output m_axi_BUS32_WVALID;
  input m_axi_BUS32_WREADY;
  input [1:0]m_axi_BUS32_BRESP;
  input m_axi_BUS32_BVALID;
  output m_axi_BUS32_BREADY;
  output [31:0]m_axi_BUS32_ARADDR;
  output [7:0]m_axi_BUS32_ARLEN;
  output [2:0]m_axi_BUS32_ARSIZE;
  output [1:0]m_axi_BUS32_ARBURST;
  output [1:0]m_axi_BUS32_ARLOCK;
  output [3:0]m_axi_BUS32_ARREGION;
  output [3:0]m_axi_BUS32_ARCACHE;
  output [2:0]m_axi_BUS32_ARPROT;
  output [3:0]m_axi_BUS32_ARQOS;
  output m_axi_BUS32_ARVALID;
  input m_axi_BUS32_ARREADY;
  input [31:0]m_axi_BUS32_RDATA;
  input [1:0]m_axi_BUS32_RRESP;
  input m_axi_BUS32_RLAST;
  input m_axi_BUS32_RVALID;
  output m_axi_BUS32_RREADY;
endmodule
