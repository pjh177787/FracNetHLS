// (c) Copyright 1995-2020 Xilinx, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// DO NOT MODIFY THIS FILE.


// IP VLNV: xilinx.com:hls:ResNet:1.0
// IP Revision: 2009061424

(* X_CORE_INFO = "ResNet,Vivado 2019.2.1" *)
(* CHECK_LICENSE_TYPE = "design_1_ResNet_0_5,ResNet,{}" *)
(* CORE_GENERATION_INFO = "design_1_ResNet_0_5,ResNet,{x_ipProduct=Vivado 2019.2.1,x_ipVendor=xilinx.com,x_ipLibrary=hls,x_ipName=ResNet,x_ipVersion=1.0,x_ipCoreRevision=2009061424,x_ipLanguage=VERILOG,x_ipSimLanguage=MIXED,C_S_AXI_AXILITES_ADDR_WIDTH=5,C_S_AXI_AXILITES_DATA_WIDTH=32,C_M_AXI_IMG_ID_WIDTH=1,C_M_AXI_IMG_ADDR_WIDTH=32,C_M_AXI_IMG_DATA_WIDTH=32,C_M_AXI_IMG_AWUSER_WIDTH=1,C_M_AXI_IMG_ARUSER_WIDTH=1,C_M_AXI_IMG_WUSER_WIDTH=1,C_M_AXI_IMG_RUSER_WIDTH=1,C_M_AXI_IMG_BUSER_WIDTH=1,C_M_AXI_IMG_USER_VALUE=0x00000000,C\
_M_AXI_IMG_PROT_VALUE=000,C_M_AXI_IMG_CACHE_VALUE=0011,C_M_AXI_BUS32_ID_WIDTH=1,C_M_AXI_BUS32_ADDR_WIDTH=32,C_M_AXI_BUS32_DATA_WIDTH=32,C_M_AXI_BUS32_AWUSER_WIDTH=1,C_M_AXI_BUS32_ARUSER_WIDTH=1,C_M_AXI_BUS32_WUSER_WIDTH=1,C_M_AXI_BUS32_RUSER_WIDTH=1,C_M_AXI_BUS32_BUSER_WIDTH=1,C_M_AXI_BUS32_USER_VALUE=0x00000000,C_M_AXI_BUS32_PROT_VALUE=000,C_M_AXI_BUS32_CACHE_VALUE=0011}" *)
(* IP_DEFINITION_SOURCE = "HLS" *)
(* DowngradeIPIdentifiedWarnings = "yes" *)
module design_1_ResNet_0_5 (
  s_axi_AXILiteS_AWADDR,
  s_axi_AXILiteS_AWVALID,
  s_axi_AXILiteS_AWREADY,
  s_axi_AXILiteS_WDATA,
  s_axi_AXILiteS_WSTRB,
  s_axi_AXILiteS_WVALID,
  s_axi_AXILiteS_WREADY,
  s_axi_AXILiteS_BRESP,
  s_axi_AXILiteS_BVALID,
  s_axi_AXILiteS_BREADY,
  s_axi_AXILiteS_ARADDR,
  s_axi_AXILiteS_ARVALID,
  s_axi_AXILiteS_ARREADY,
  s_axi_AXILiteS_RDATA,
  s_axi_AXILiteS_RRESP,
  s_axi_AXILiteS_RVALID,
  s_axi_AXILiteS_RREADY,
  ap_clk,
  ap_rst_n,
  interrupt,
  m_axi_IMG_AWADDR,
  m_axi_IMG_AWLEN,
  m_axi_IMG_AWSIZE,
  m_axi_IMG_AWBURST,
  m_axi_IMG_AWLOCK,
  m_axi_IMG_AWREGION,
  m_axi_IMG_AWCACHE,
  m_axi_IMG_AWPROT,
  m_axi_IMG_AWQOS,
  m_axi_IMG_AWVALID,
  m_axi_IMG_AWREADY,
  m_axi_IMG_WDATA,
  m_axi_IMG_WSTRB,
  m_axi_IMG_WLAST,
  m_axi_IMG_WVALID,
  m_axi_IMG_WREADY,
  m_axi_IMG_BRESP,
  m_axi_IMG_BVALID,
  m_axi_IMG_BREADY,
  m_axi_IMG_ARADDR,
  m_axi_IMG_ARLEN,
  m_axi_IMG_ARSIZE,
  m_axi_IMG_ARBURST,
  m_axi_IMG_ARLOCK,
  m_axi_IMG_ARREGION,
  m_axi_IMG_ARCACHE,
  m_axi_IMG_ARPROT,
  m_axi_IMG_ARQOS,
  m_axi_IMG_ARVALID,
  m_axi_IMG_ARREADY,
  m_axi_IMG_RDATA,
  m_axi_IMG_RRESP,
  m_axi_IMG_RLAST,
  m_axi_IMG_RVALID,
  m_axi_IMG_RREADY,
  m_axi_BUS32_AWADDR,
  m_axi_BUS32_AWLEN,
  m_axi_BUS32_AWSIZE,
  m_axi_BUS32_AWBURST,
  m_axi_BUS32_AWLOCK,
  m_axi_BUS32_AWREGION,
  m_axi_BUS32_AWCACHE,
  m_axi_BUS32_AWPROT,
  m_axi_BUS32_AWQOS,
  m_axi_BUS32_AWVALID,
  m_axi_BUS32_AWREADY,
  m_axi_BUS32_WDATA,
  m_axi_BUS32_WSTRB,
  m_axi_BUS32_WLAST,
  m_axi_BUS32_WVALID,
  m_axi_BUS32_WREADY,
  m_axi_BUS32_BRESP,
  m_axi_BUS32_BVALID,
  m_axi_BUS32_BREADY,
  m_axi_BUS32_ARADDR,
  m_axi_BUS32_ARLEN,
  m_axi_BUS32_ARSIZE,
  m_axi_BUS32_ARBURST,
  m_axi_BUS32_ARLOCK,
  m_axi_BUS32_ARREGION,
  m_axi_BUS32_ARCACHE,
  m_axi_BUS32_ARPROT,
  m_axi_BUS32_ARQOS,
  m_axi_BUS32_ARVALID,
  m_axi_BUS32_ARREADY,
  m_axi_BUS32_RDATA,
  m_axi_BUS32_RRESP,
  m_axi_BUS32_RLAST,
  m_axi_BUS32_RVALID,
  m_axi_BUS32_RREADY
);

(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS AWADDR" *)
input wire [4 : 0] s_axi_AXILiteS_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS AWVALID" *)
input wire s_axi_AXILiteS_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS AWREADY" *)
output wire s_axi_AXILiteS_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS WDATA" *)
input wire [31 : 0] s_axi_AXILiteS_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS WSTRB" *)
input wire [3 : 0] s_axi_AXILiteS_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS WVALID" *)
input wire s_axi_AXILiteS_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS WREADY" *)
output wire s_axi_AXILiteS_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS BRESP" *)
output wire [1 : 0] s_axi_AXILiteS_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS BVALID" *)
output wire s_axi_AXILiteS_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS BREADY" *)
input wire s_axi_AXILiteS_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS ARADDR" *)
input wire [4 : 0] s_axi_AXILiteS_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS ARVALID" *)
input wire s_axi_AXILiteS_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS ARREADY" *)
output wire s_axi_AXILiteS_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS RDATA" *)
output wire [31 : 0] s_axi_AXILiteS_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS RRESP" *)
output wire [1 : 0] s_axi_AXILiteS_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS RVALID" *)
output wire s_axi_AXILiteS_RVALID;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME s_axi_AXILiteS, ADDR_WIDTH 5, DATA_WIDTH 32, PROTOCOL AXI4LITE, READ_WRITE_MODE READ_WRITE, FREQ_HZ 199998001, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN design_1_zynq_ultra_ps_e_0_3_pl_clk0, NUM_READ_THR\
EADS 4, NUM_WRITE_THREADS 4, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS RREADY" *)
input wire s_axi_AXILiteS_RREADY;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_clk, ASSOCIATED_BUSIF s_axi_AXILiteS:m_axi_IMG:m_axi_BUS32, ASSOCIATED_RESET ap_rst_n, FREQ_HZ 199998001, PHASE 0.000, CLK_DOMAIN design_1_zynq_ultra_ps_e_0_3_pl_clk0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *)
input wire ap_clk;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_rst_n, POLARITY ACTIVE_LOW, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst_n RST" *)
input wire ap_rst_n;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME interrupt, SENSITIVITY LEVEL_HIGH, PortWidth 1" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:interrupt:1.0 interrupt INTERRUPT" *)
output wire interrupt;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG AWADDR" *)
output wire [31 : 0] m_axi_IMG_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG AWLEN" *)
output wire [7 : 0] m_axi_IMG_AWLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG AWSIZE" *)
output wire [2 : 0] m_axi_IMG_AWSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG AWBURST" *)
output wire [1 : 0] m_axi_IMG_AWBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG AWLOCK" *)
output wire [1 : 0] m_axi_IMG_AWLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG AWREGION" *)
output wire [3 : 0] m_axi_IMG_AWREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG AWCACHE" *)
output wire [3 : 0] m_axi_IMG_AWCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG AWPROT" *)
output wire [2 : 0] m_axi_IMG_AWPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG AWQOS" *)
output wire [3 : 0] m_axi_IMG_AWQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG AWVALID" *)
output wire m_axi_IMG_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG AWREADY" *)
input wire m_axi_IMG_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG WDATA" *)
output wire [31 : 0] m_axi_IMG_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG WSTRB" *)
output wire [3 : 0] m_axi_IMG_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG WLAST" *)
output wire m_axi_IMG_WLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG WVALID" *)
output wire m_axi_IMG_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG WREADY" *)
input wire m_axi_IMG_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG BRESP" *)
input wire [1 : 0] m_axi_IMG_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG BVALID" *)
input wire m_axi_IMG_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG BREADY" *)
output wire m_axi_IMG_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG ARADDR" *)
output wire [31 : 0] m_axi_IMG_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG ARLEN" *)
output wire [7 : 0] m_axi_IMG_ARLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG ARSIZE" *)
output wire [2 : 0] m_axi_IMG_ARSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG ARBURST" *)
output wire [1 : 0] m_axi_IMG_ARBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG ARLOCK" *)
output wire [1 : 0] m_axi_IMG_ARLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG ARREGION" *)
output wire [3 : 0] m_axi_IMG_ARREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG ARCACHE" *)
output wire [3 : 0] m_axi_IMG_ARCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG ARPROT" *)
output wire [2 : 0] m_axi_IMG_ARPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG ARQOS" *)
output wire [3 : 0] m_axi_IMG_ARQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG ARVALID" *)
output wire m_axi_IMG_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG ARREADY" *)
input wire m_axi_IMG_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG RDATA" *)
input wire [31 : 0] m_axi_IMG_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG RRESP" *)
input wire [1 : 0] m_axi_IMG_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG RLAST" *)
input wire m_axi_IMG_RLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG RVALID" *)
input wire m_axi_IMG_RVALID;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME m_axi_IMG, ADDR_WIDTH 32, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 16, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 32, FREQ_HZ 199998001, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CLK_DOMAIN d\
esign_1_zynq_ultra_ps_e_0_3_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_IMG RREADY" *)
output wire m_axi_IMG_RREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 AWADDR" *)
output wire [31 : 0] m_axi_BUS32_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 AWLEN" *)
output wire [7 : 0] m_axi_BUS32_AWLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 AWSIZE" *)
output wire [2 : 0] m_axi_BUS32_AWSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 AWBURST" *)
output wire [1 : 0] m_axi_BUS32_AWBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 AWLOCK" *)
output wire [1 : 0] m_axi_BUS32_AWLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 AWREGION" *)
output wire [3 : 0] m_axi_BUS32_AWREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 AWCACHE" *)
output wire [3 : 0] m_axi_BUS32_AWCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 AWPROT" *)
output wire [2 : 0] m_axi_BUS32_AWPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 AWQOS" *)
output wire [3 : 0] m_axi_BUS32_AWQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 AWVALID" *)
output wire m_axi_BUS32_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 AWREADY" *)
input wire m_axi_BUS32_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 WDATA" *)
output wire [31 : 0] m_axi_BUS32_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 WSTRB" *)
output wire [3 : 0] m_axi_BUS32_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 WLAST" *)
output wire m_axi_BUS32_WLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 WVALID" *)
output wire m_axi_BUS32_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 WREADY" *)
input wire m_axi_BUS32_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 BRESP" *)
input wire [1 : 0] m_axi_BUS32_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 BVALID" *)
input wire m_axi_BUS32_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 BREADY" *)
output wire m_axi_BUS32_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 ARADDR" *)
output wire [31 : 0] m_axi_BUS32_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 ARLEN" *)
output wire [7 : 0] m_axi_BUS32_ARLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 ARSIZE" *)
output wire [2 : 0] m_axi_BUS32_ARSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 ARBURST" *)
output wire [1 : 0] m_axi_BUS32_ARBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 ARLOCK" *)
output wire [1 : 0] m_axi_BUS32_ARLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 ARREGION" *)
output wire [3 : 0] m_axi_BUS32_ARREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 ARCACHE" *)
output wire [3 : 0] m_axi_BUS32_ARCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 ARPROT" *)
output wire [2 : 0] m_axi_BUS32_ARPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 ARQOS" *)
output wire [3 : 0] m_axi_BUS32_ARQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 ARVALID" *)
output wire m_axi_BUS32_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 ARREADY" *)
input wire m_axi_BUS32_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 RDATA" *)
input wire [31 : 0] m_axi_BUS32_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 RRESP" *)
input wire [1 : 0] m_axi_BUS32_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 RLAST" *)
input wire m_axi_BUS32_RLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 RVALID" *)
input wire m_axi_BUS32_RVALID;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME m_axi_BUS32, ADDR_WIDTH 32, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 16, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 32, FREQ_HZ 199998001, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CLK_DOMAIN\
 design_1_zynq_ultra_ps_e_0_3_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 RREADY" *)
output wire m_axi_BUS32_RREADY;

  ResNet #(
    .C_S_AXI_AXILITES_ADDR_WIDTH(5),
    .C_S_AXI_AXILITES_DATA_WIDTH(32),
    .C_M_AXI_IMG_ID_WIDTH(1),
    .C_M_AXI_IMG_ADDR_WIDTH(32),
    .C_M_AXI_IMG_DATA_WIDTH(32),
    .C_M_AXI_IMG_AWUSER_WIDTH(1),
    .C_M_AXI_IMG_ARUSER_WIDTH(1),
    .C_M_AXI_IMG_WUSER_WIDTH(1),
    .C_M_AXI_IMG_RUSER_WIDTH(1),
    .C_M_AXI_IMG_BUSER_WIDTH(1),
    .C_M_AXI_IMG_USER_VALUE('H00000000),
    .C_M_AXI_IMG_PROT_VALUE('B000),
    .C_M_AXI_IMG_CACHE_VALUE('B0011),
    .C_M_AXI_BUS32_ID_WIDTH(1),
    .C_M_AXI_BUS32_ADDR_WIDTH(32),
    .C_M_AXI_BUS32_DATA_WIDTH(32),
    .C_M_AXI_BUS32_AWUSER_WIDTH(1),
    .C_M_AXI_BUS32_ARUSER_WIDTH(1),
    .C_M_AXI_BUS32_WUSER_WIDTH(1),
    .C_M_AXI_BUS32_RUSER_WIDTH(1),
    .C_M_AXI_BUS32_BUSER_WIDTH(1),
    .C_M_AXI_BUS32_USER_VALUE('H00000000),
    .C_M_AXI_BUS32_PROT_VALUE('B000),
    .C_M_AXI_BUS32_CACHE_VALUE('B0011)
  ) inst (
    .s_axi_AXILiteS_AWADDR(s_axi_AXILiteS_AWADDR),
    .s_axi_AXILiteS_AWVALID(s_axi_AXILiteS_AWVALID),
    .s_axi_AXILiteS_AWREADY(s_axi_AXILiteS_AWREADY),
    .s_axi_AXILiteS_WDATA(s_axi_AXILiteS_WDATA),
    .s_axi_AXILiteS_WSTRB(s_axi_AXILiteS_WSTRB),
    .s_axi_AXILiteS_WVALID(s_axi_AXILiteS_WVALID),
    .s_axi_AXILiteS_WREADY(s_axi_AXILiteS_WREADY),
    .s_axi_AXILiteS_BRESP(s_axi_AXILiteS_BRESP),
    .s_axi_AXILiteS_BVALID(s_axi_AXILiteS_BVALID),
    .s_axi_AXILiteS_BREADY(s_axi_AXILiteS_BREADY),
    .s_axi_AXILiteS_ARADDR(s_axi_AXILiteS_ARADDR),
    .s_axi_AXILiteS_ARVALID(s_axi_AXILiteS_ARVALID),
    .s_axi_AXILiteS_ARREADY(s_axi_AXILiteS_ARREADY),
    .s_axi_AXILiteS_RDATA(s_axi_AXILiteS_RDATA),
    .s_axi_AXILiteS_RRESP(s_axi_AXILiteS_RRESP),
    .s_axi_AXILiteS_RVALID(s_axi_AXILiteS_RVALID),
    .s_axi_AXILiteS_RREADY(s_axi_AXILiteS_RREADY),
    .ap_clk(ap_clk),
    .ap_rst_n(ap_rst_n),
    .interrupt(interrupt),
    .m_axi_IMG_AWID(),
    .m_axi_IMG_AWADDR(m_axi_IMG_AWADDR),
    .m_axi_IMG_AWLEN(m_axi_IMG_AWLEN),
    .m_axi_IMG_AWSIZE(m_axi_IMG_AWSIZE),
    .m_axi_IMG_AWBURST(m_axi_IMG_AWBURST),
    .m_axi_IMG_AWLOCK(m_axi_IMG_AWLOCK),
    .m_axi_IMG_AWREGION(m_axi_IMG_AWREGION),
    .m_axi_IMG_AWCACHE(m_axi_IMG_AWCACHE),
    .m_axi_IMG_AWPROT(m_axi_IMG_AWPROT),
    .m_axi_IMG_AWQOS(m_axi_IMG_AWQOS),
    .m_axi_IMG_AWUSER(),
    .m_axi_IMG_AWVALID(m_axi_IMG_AWVALID),
    .m_axi_IMG_AWREADY(m_axi_IMG_AWREADY),
    .m_axi_IMG_WID(),
    .m_axi_IMG_WDATA(m_axi_IMG_WDATA),
    .m_axi_IMG_WSTRB(m_axi_IMG_WSTRB),
    .m_axi_IMG_WLAST(m_axi_IMG_WLAST),
    .m_axi_IMG_WUSER(),
    .m_axi_IMG_WVALID(m_axi_IMG_WVALID),
    .m_axi_IMG_WREADY(m_axi_IMG_WREADY),
    .m_axi_IMG_BID(1'B0),
    .m_axi_IMG_BRESP(m_axi_IMG_BRESP),
    .m_axi_IMG_BUSER(1'B0),
    .m_axi_IMG_BVALID(m_axi_IMG_BVALID),
    .m_axi_IMG_BREADY(m_axi_IMG_BREADY),
    .m_axi_IMG_ARID(),
    .m_axi_IMG_ARADDR(m_axi_IMG_ARADDR),
    .m_axi_IMG_ARLEN(m_axi_IMG_ARLEN),
    .m_axi_IMG_ARSIZE(m_axi_IMG_ARSIZE),
    .m_axi_IMG_ARBURST(m_axi_IMG_ARBURST),
    .m_axi_IMG_ARLOCK(m_axi_IMG_ARLOCK),
    .m_axi_IMG_ARREGION(m_axi_IMG_ARREGION),
    .m_axi_IMG_ARCACHE(m_axi_IMG_ARCACHE),
    .m_axi_IMG_ARPROT(m_axi_IMG_ARPROT),
    .m_axi_IMG_ARQOS(m_axi_IMG_ARQOS),
    .m_axi_IMG_ARUSER(),
    .m_axi_IMG_ARVALID(m_axi_IMG_ARVALID),
    .m_axi_IMG_ARREADY(m_axi_IMG_ARREADY),
    .m_axi_IMG_RID(1'B0),
    .m_axi_IMG_RDATA(m_axi_IMG_RDATA),
    .m_axi_IMG_RRESP(m_axi_IMG_RRESP),
    .m_axi_IMG_RLAST(m_axi_IMG_RLAST),
    .m_axi_IMG_RUSER(1'B0),
    .m_axi_IMG_RVALID(m_axi_IMG_RVALID),
    .m_axi_IMG_RREADY(m_axi_IMG_RREADY),
    .m_axi_BUS32_AWID(),
    .m_axi_BUS32_AWADDR(m_axi_BUS32_AWADDR),
    .m_axi_BUS32_AWLEN(m_axi_BUS32_AWLEN),
    .m_axi_BUS32_AWSIZE(m_axi_BUS32_AWSIZE),
    .m_axi_BUS32_AWBURST(m_axi_BUS32_AWBURST),
    .m_axi_BUS32_AWLOCK(m_axi_BUS32_AWLOCK),
    .m_axi_BUS32_AWREGION(m_axi_BUS32_AWREGION),
    .m_axi_BUS32_AWCACHE(m_axi_BUS32_AWCACHE),
    .m_axi_BUS32_AWPROT(m_axi_BUS32_AWPROT),
    .m_axi_BUS32_AWQOS(m_axi_BUS32_AWQOS),
    .m_axi_BUS32_AWUSER(),
    .m_axi_BUS32_AWVALID(m_axi_BUS32_AWVALID),
    .m_axi_BUS32_AWREADY(m_axi_BUS32_AWREADY),
    .m_axi_BUS32_WID(),
    .m_axi_BUS32_WDATA(m_axi_BUS32_WDATA),
    .m_axi_BUS32_WSTRB(m_axi_BUS32_WSTRB),
    .m_axi_BUS32_WLAST(m_axi_BUS32_WLAST),
    .m_axi_BUS32_WUSER(),
    .m_axi_BUS32_WVALID(m_axi_BUS32_WVALID),
    .m_axi_BUS32_WREADY(m_axi_BUS32_WREADY),
    .m_axi_BUS32_BID(1'B0),
    .m_axi_BUS32_BRESP(m_axi_BUS32_BRESP),
    .m_axi_BUS32_BUSER(1'B0),
    .m_axi_BUS32_BVALID(m_axi_BUS32_BVALID),
    .m_axi_BUS32_BREADY(m_axi_BUS32_BREADY),
    .m_axi_BUS32_ARID(),
    .m_axi_BUS32_ARADDR(m_axi_BUS32_ARADDR),
    .m_axi_BUS32_ARLEN(m_axi_BUS32_ARLEN),
    .m_axi_BUS32_ARSIZE(m_axi_BUS32_ARSIZE),
    .m_axi_BUS32_ARBURST(m_axi_BUS32_ARBURST),
    .m_axi_BUS32_ARLOCK(m_axi_BUS32_ARLOCK),
    .m_axi_BUS32_ARREGION(m_axi_BUS32_ARREGION),
    .m_axi_BUS32_ARCACHE(m_axi_BUS32_ARCACHE),
    .m_axi_BUS32_ARPROT(m_axi_BUS32_ARPROT),
    .m_axi_BUS32_ARQOS(m_axi_BUS32_ARQOS),
    .m_axi_BUS32_ARUSER(),
    .m_axi_BUS32_ARVALID(m_axi_BUS32_ARVALID),
    .m_axi_BUS32_ARREADY(m_axi_BUS32_ARREADY),
    .m_axi_BUS32_RID(1'B0),
    .m_axi_BUS32_RDATA(m_axi_BUS32_RDATA),
    .m_axi_BUS32_RRESP(m_axi_BUS32_RRESP),
    .m_axi_BUS32_RLAST(m_axi_BUS32_RLAST),
    .m_axi_BUS32_RUSER(1'B0),
    .m_axi_BUS32_RVALID(m_axi_BUS32_RVALID),
    .m_axi_BUS32_RREADY(m_axi_BUS32_RREADY)
  );
endmodule
