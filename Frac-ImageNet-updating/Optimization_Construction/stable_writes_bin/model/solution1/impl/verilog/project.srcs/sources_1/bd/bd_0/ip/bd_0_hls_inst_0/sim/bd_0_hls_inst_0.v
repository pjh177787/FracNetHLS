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


// IP VLNV: xilinx.com:hls:FracNet:1.0
// IP Revision: 2012130641

`timescale 1ns/1ps

(* IP_DEFINITION_SOURCE = "HLS" *)
(* DowngradeIPIdentifiedWarnings = "yes" *)
module bd_0_hls_inst_0 (
  s_axi_CTRL_AWADDR,
  s_axi_CTRL_AWVALID,
  s_axi_CTRL_AWREADY,
  s_axi_CTRL_WDATA,
  s_axi_CTRL_WSTRB,
  s_axi_CTRL_WVALID,
  s_axi_CTRL_WREADY,
  s_axi_CTRL_BRESP,
  s_axi_CTRL_BVALID,
  s_axi_CTRL_BREADY,
  s_axi_CTRL_ARADDR,
  s_axi_CTRL_ARVALID,
  s_axi_CTRL_ARREADY,
  s_axi_CTRL_RDATA,
  s_axi_CTRL_RRESP,
  s_axi_CTRL_RVALID,
  s_axi_CTRL_RREADY,
  ap_clk,
  ap_rst_n,
  interrupt,
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
  m_axi_BUS32_RREADY,
  m_axi_BUS512_AWADDR,
  m_axi_BUS512_AWLEN,
  m_axi_BUS512_AWSIZE,
  m_axi_BUS512_AWBURST,
  m_axi_BUS512_AWLOCK,
  m_axi_BUS512_AWREGION,
  m_axi_BUS512_AWCACHE,
  m_axi_BUS512_AWPROT,
  m_axi_BUS512_AWQOS,
  m_axi_BUS512_AWVALID,
  m_axi_BUS512_AWREADY,
  m_axi_BUS512_WDATA,
  m_axi_BUS512_WSTRB,
  m_axi_BUS512_WLAST,
  m_axi_BUS512_WVALID,
  m_axi_BUS512_WREADY,
  m_axi_BUS512_BRESP,
  m_axi_BUS512_BVALID,
  m_axi_BUS512_BREADY,
  m_axi_BUS512_ARADDR,
  m_axi_BUS512_ARLEN,
  m_axi_BUS512_ARSIZE,
  m_axi_BUS512_ARBURST,
  m_axi_BUS512_ARLOCK,
  m_axi_BUS512_ARREGION,
  m_axi_BUS512_ARCACHE,
  m_axi_BUS512_ARPROT,
  m_axi_BUS512_ARQOS,
  m_axi_BUS512_ARVALID,
  m_axi_BUS512_ARREADY,
  m_axi_BUS512_RDATA,
  m_axi_BUS512_RRESP,
  m_axi_BUS512_RLAST,
  m_axi_BUS512_RVALID,
  m_axi_BUS512_RREADY,
  m_axi_DDR512_AWADDR,
  m_axi_DDR512_AWLEN,
  m_axi_DDR512_AWSIZE,
  m_axi_DDR512_AWBURST,
  m_axi_DDR512_AWLOCK,
  m_axi_DDR512_AWREGION,
  m_axi_DDR512_AWCACHE,
  m_axi_DDR512_AWPROT,
  m_axi_DDR512_AWQOS,
  m_axi_DDR512_AWVALID,
  m_axi_DDR512_AWREADY,
  m_axi_DDR512_WDATA,
  m_axi_DDR512_WSTRB,
  m_axi_DDR512_WLAST,
  m_axi_DDR512_WVALID,
  m_axi_DDR512_WREADY,
  m_axi_DDR512_BRESP,
  m_axi_DDR512_BVALID,
  m_axi_DDR512_BREADY,
  m_axi_DDR512_ARADDR,
  m_axi_DDR512_ARLEN,
  m_axi_DDR512_ARSIZE,
  m_axi_DDR512_ARBURST,
  m_axi_DDR512_ARLOCK,
  m_axi_DDR512_ARREGION,
  m_axi_DDR512_ARCACHE,
  m_axi_DDR512_ARPROT,
  m_axi_DDR512_ARQOS,
  m_axi_DDR512_ARVALID,
  m_axi_DDR512_ARREADY,
  m_axi_DDR512_RDATA,
  m_axi_DDR512_RRESP,
  m_axi_DDR512_RLAST,
  m_axi_DDR512_RVALID,
  m_axi_DDR512_RREADY
);

(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL AWADDR" *)
input wire [5 : 0] s_axi_CTRL_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL AWVALID" *)
input wire s_axi_CTRL_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL AWREADY" *)
output wire s_axi_CTRL_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL WDATA" *)
input wire [31 : 0] s_axi_CTRL_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL WSTRB" *)
input wire [3 : 0] s_axi_CTRL_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL WVALID" *)
input wire s_axi_CTRL_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL WREADY" *)
output wire s_axi_CTRL_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL BRESP" *)
output wire [1 : 0] s_axi_CTRL_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL BVALID" *)
output wire s_axi_CTRL_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL BREADY" *)
input wire s_axi_CTRL_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL ARADDR" *)
input wire [5 : 0] s_axi_CTRL_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL ARVALID" *)
input wire s_axi_CTRL_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL ARREADY" *)
output wire s_axi_CTRL_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL RDATA" *)
output wire [31 : 0] s_axi_CTRL_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL RRESP" *)
output wire [1 : 0] s_axi_CTRL_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL RVALID" *)
output wire s_axi_CTRL_RVALID;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME s_axi_CTRL, ADDR_WIDTH 6, DATA_WIDTH 32, PROTOCOL AXI4LITE, READ_WRITE_MODE READ_WRITE, FREQ_HZ 250000000.0, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN bd_0_ap_clk_0, NUM_READ_THREADS 1, NUM_WRITE_THREADS\
 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL RREADY" *)
input wire s_axi_CTRL_RREADY;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_clk, ASSOCIATED_BUSIF s_axi_CTRL:m_axi_BUS32:m_axi_BUS512:m_axi_DDR512, ASSOCIATED_RESET ap_rst_n, FREQ_HZ 250000000.0, PHASE 0.000, CLK_DOMAIN bd_0_ap_clk_0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *)
input wire ap_clk;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_rst_n, POLARITY ACTIVE_LOW, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst_n RST" *)
input wire ap_rst_n;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME interrupt, SENSITIVITY LEVEL_HIGH, PortWidth 1" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:interrupt:1.0 interrupt INTERRUPT" *)
output wire interrupt;
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
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME m_axi_BUS32, ADDR_WIDTH 32, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 16, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 32, FREQ_HZ 250000000.0, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CLK_DOMA\
IN bd_0_ap_clk_0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 RREADY" *)
output wire m_axi_BUS32_RREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 AWADDR" *)
output wire [31 : 0] m_axi_BUS512_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 AWLEN" *)
output wire [7 : 0] m_axi_BUS512_AWLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 AWSIZE" *)
output wire [2 : 0] m_axi_BUS512_AWSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 AWBURST" *)
output wire [1 : 0] m_axi_BUS512_AWBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 AWLOCK" *)
output wire [1 : 0] m_axi_BUS512_AWLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 AWREGION" *)
output wire [3 : 0] m_axi_BUS512_AWREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 AWCACHE" *)
output wire [3 : 0] m_axi_BUS512_AWCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 AWPROT" *)
output wire [2 : 0] m_axi_BUS512_AWPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 AWQOS" *)
output wire [3 : 0] m_axi_BUS512_AWQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 AWVALID" *)
output wire m_axi_BUS512_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 AWREADY" *)
input wire m_axi_BUS512_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 WDATA" *)
output wire [511 : 0] m_axi_BUS512_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 WSTRB" *)
output wire [63 : 0] m_axi_BUS512_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 WLAST" *)
output wire m_axi_BUS512_WLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 WVALID" *)
output wire m_axi_BUS512_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 WREADY" *)
input wire m_axi_BUS512_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 BRESP" *)
input wire [1 : 0] m_axi_BUS512_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 BVALID" *)
input wire m_axi_BUS512_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 BREADY" *)
output wire m_axi_BUS512_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 ARADDR" *)
output wire [31 : 0] m_axi_BUS512_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 ARLEN" *)
output wire [7 : 0] m_axi_BUS512_ARLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 ARSIZE" *)
output wire [2 : 0] m_axi_BUS512_ARSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 ARBURST" *)
output wire [1 : 0] m_axi_BUS512_ARBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 ARLOCK" *)
output wire [1 : 0] m_axi_BUS512_ARLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 ARREGION" *)
output wire [3 : 0] m_axi_BUS512_ARREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 ARCACHE" *)
output wire [3 : 0] m_axi_BUS512_ARCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 ARPROT" *)
output wire [2 : 0] m_axi_BUS512_ARPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 ARQOS" *)
output wire [3 : 0] m_axi_BUS512_ARQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 ARVALID" *)
output wire m_axi_BUS512_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 ARREADY" *)
input wire m_axi_BUS512_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 RDATA" *)
input wire [511 : 0] m_axi_BUS512_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 RRESP" *)
input wire [1 : 0] m_axi_BUS512_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 RLAST" *)
input wire m_axi_BUS512_RLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 RVALID" *)
input wire m_axi_BUS512_RVALID;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME m_axi_BUS512, ADDR_WIDTH 32, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 16, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 512, FREQ_HZ 250000000.0, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CLK_DO\
MAIN bd_0_ap_clk_0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 RREADY" *)
output wire m_axi_BUS512_RREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 AWADDR" *)
output wire [31 : 0] m_axi_DDR512_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 AWLEN" *)
output wire [7 : 0] m_axi_DDR512_AWLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 AWSIZE" *)
output wire [2 : 0] m_axi_DDR512_AWSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 AWBURST" *)
output wire [1 : 0] m_axi_DDR512_AWBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 AWLOCK" *)
output wire [1 : 0] m_axi_DDR512_AWLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 AWREGION" *)
output wire [3 : 0] m_axi_DDR512_AWREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 AWCACHE" *)
output wire [3 : 0] m_axi_DDR512_AWCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 AWPROT" *)
output wire [2 : 0] m_axi_DDR512_AWPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 AWQOS" *)
output wire [3 : 0] m_axi_DDR512_AWQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 AWVALID" *)
output wire m_axi_DDR512_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 AWREADY" *)
input wire m_axi_DDR512_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 WDATA" *)
output wire [511 : 0] m_axi_DDR512_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 WSTRB" *)
output wire [63 : 0] m_axi_DDR512_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 WLAST" *)
output wire m_axi_DDR512_WLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 WVALID" *)
output wire m_axi_DDR512_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 WREADY" *)
input wire m_axi_DDR512_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 BRESP" *)
input wire [1 : 0] m_axi_DDR512_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 BVALID" *)
input wire m_axi_DDR512_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 BREADY" *)
output wire m_axi_DDR512_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 ARADDR" *)
output wire [31 : 0] m_axi_DDR512_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 ARLEN" *)
output wire [7 : 0] m_axi_DDR512_ARLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 ARSIZE" *)
output wire [2 : 0] m_axi_DDR512_ARSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 ARBURST" *)
output wire [1 : 0] m_axi_DDR512_ARBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 ARLOCK" *)
output wire [1 : 0] m_axi_DDR512_ARLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 ARREGION" *)
output wire [3 : 0] m_axi_DDR512_ARREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 ARCACHE" *)
output wire [3 : 0] m_axi_DDR512_ARCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 ARPROT" *)
output wire [2 : 0] m_axi_DDR512_ARPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 ARQOS" *)
output wire [3 : 0] m_axi_DDR512_ARQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 ARVALID" *)
output wire m_axi_DDR512_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 ARREADY" *)
input wire m_axi_DDR512_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 RDATA" *)
input wire [511 : 0] m_axi_DDR512_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 RRESP" *)
input wire [1 : 0] m_axi_DDR512_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 RLAST" *)
input wire m_axi_DDR512_RLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 RVALID" *)
input wire m_axi_DDR512_RVALID;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME m_axi_DDR512, ADDR_WIDTH 32, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 16, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 512, FREQ_HZ 250000000.0, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CLK_DO\
MAIN bd_0_ap_clk_0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 RREADY" *)
output wire m_axi_DDR512_RREADY;

  FracNet #(
    .C_S_AXI_CTRL_ADDR_WIDTH(6),
    .C_S_AXI_CTRL_DATA_WIDTH(32),
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
    .C_M_AXI_BUS32_CACHE_VALUE('B0011),
    .C_M_AXI_BUS512_ID_WIDTH(1),
    .C_M_AXI_BUS512_ADDR_WIDTH(32),
    .C_M_AXI_BUS512_DATA_WIDTH(512),
    .C_M_AXI_BUS512_AWUSER_WIDTH(1),
    .C_M_AXI_BUS512_ARUSER_WIDTH(1),
    .C_M_AXI_BUS512_WUSER_WIDTH(1),
    .C_M_AXI_BUS512_RUSER_WIDTH(1),
    .C_M_AXI_BUS512_BUSER_WIDTH(1),
    .C_M_AXI_BUS512_USER_VALUE('H00000000),
    .C_M_AXI_BUS512_PROT_VALUE('B000),
    .C_M_AXI_BUS512_CACHE_VALUE('B0011),
    .C_M_AXI_DDR512_ID_WIDTH(1),
    .C_M_AXI_DDR512_ADDR_WIDTH(32),
    .C_M_AXI_DDR512_DATA_WIDTH(512),
    .C_M_AXI_DDR512_AWUSER_WIDTH(1),
    .C_M_AXI_DDR512_ARUSER_WIDTH(1),
    .C_M_AXI_DDR512_WUSER_WIDTH(1),
    .C_M_AXI_DDR512_RUSER_WIDTH(1),
    .C_M_AXI_DDR512_BUSER_WIDTH(1),
    .C_M_AXI_DDR512_USER_VALUE('H00000000),
    .C_M_AXI_DDR512_PROT_VALUE('B000),
    .C_M_AXI_DDR512_CACHE_VALUE('B0011)
  ) inst (
    .s_axi_CTRL_AWADDR(s_axi_CTRL_AWADDR),
    .s_axi_CTRL_AWVALID(s_axi_CTRL_AWVALID),
    .s_axi_CTRL_AWREADY(s_axi_CTRL_AWREADY),
    .s_axi_CTRL_WDATA(s_axi_CTRL_WDATA),
    .s_axi_CTRL_WSTRB(s_axi_CTRL_WSTRB),
    .s_axi_CTRL_WVALID(s_axi_CTRL_WVALID),
    .s_axi_CTRL_WREADY(s_axi_CTRL_WREADY),
    .s_axi_CTRL_BRESP(s_axi_CTRL_BRESP),
    .s_axi_CTRL_BVALID(s_axi_CTRL_BVALID),
    .s_axi_CTRL_BREADY(s_axi_CTRL_BREADY),
    .s_axi_CTRL_ARADDR(s_axi_CTRL_ARADDR),
    .s_axi_CTRL_ARVALID(s_axi_CTRL_ARVALID),
    .s_axi_CTRL_ARREADY(s_axi_CTRL_ARREADY),
    .s_axi_CTRL_RDATA(s_axi_CTRL_RDATA),
    .s_axi_CTRL_RRESP(s_axi_CTRL_RRESP),
    .s_axi_CTRL_RVALID(s_axi_CTRL_RVALID),
    .s_axi_CTRL_RREADY(s_axi_CTRL_RREADY),
    .ap_clk(ap_clk),
    .ap_rst_n(ap_rst_n),
    .interrupt(interrupt),
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
    .m_axi_BUS32_RREADY(m_axi_BUS32_RREADY),
    .m_axi_BUS512_AWID(),
    .m_axi_BUS512_AWADDR(m_axi_BUS512_AWADDR),
    .m_axi_BUS512_AWLEN(m_axi_BUS512_AWLEN),
    .m_axi_BUS512_AWSIZE(m_axi_BUS512_AWSIZE),
    .m_axi_BUS512_AWBURST(m_axi_BUS512_AWBURST),
    .m_axi_BUS512_AWLOCK(m_axi_BUS512_AWLOCK),
    .m_axi_BUS512_AWREGION(m_axi_BUS512_AWREGION),
    .m_axi_BUS512_AWCACHE(m_axi_BUS512_AWCACHE),
    .m_axi_BUS512_AWPROT(m_axi_BUS512_AWPROT),
    .m_axi_BUS512_AWQOS(m_axi_BUS512_AWQOS),
    .m_axi_BUS512_AWUSER(),
    .m_axi_BUS512_AWVALID(m_axi_BUS512_AWVALID),
    .m_axi_BUS512_AWREADY(m_axi_BUS512_AWREADY),
    .m_axi_BUS512_WID(),
    .m_axi_BUS512_WDATA(m_axi_BUS512_WDATA),
    .m_axi_BUS512_WSTRB(m_axi_BUS512_WSTRB),
    .m_axi_BUS512_WLAST(m_axi_BUS512_WLAST),
    .m_axi_BUS512_WUSER(),
    .m_axi_BUS512_WVALID(m_axi_BUS512_WVALID),
    .m_axi_BUS512_WREADY(m_axi_BUS512_WREADY),
    .m_axi_BUS512_BID(1'B0),
    .m_axi_BUS512_BRESP(m_axi_BUS512_BRESP),
    .m_axi_BUS512_BUSER(1'B0),
    .m_axi_BUS512_BVALID(m_axi_BUS512_BVALID),
    .m_axi_BUS512_BREADY(m_axi_BUS512_BREADY),
    .m_axi_BUS512_ARID(),
    .m_axi_BUS512_ARADDR(m_axi_BUS512_ARADDR),
    .m_axi_BUS512_ARLEN(m_axi_BUS512_ARLEN),
    .m_axi_BUS512_ARSIZE(m_axi_BUS512_ARSIZE),
    .m_axi_BUS512_ARBURST(m_axi_BUS512_ARBURST),
    .m_axi_BUS512_ARLOCK(m_axi_BUS512_ARLOCK),
    .m_axi_BUS512_ARREGION(m_axi_BUS512_ARREGION),
    .m_axi_BUS512_ARCACHE(m_axi_BUS512_ARCACHE),
    .m_axi_BUS512_ARPROT(m_axi_BUS512_ARPROT),
    .m_axi_BUS512_ARQOS(m_axi_BUS512_ARQOS),
    .m_axi_BUS512_ARUSER(),
    .m_axi_BUS512_ARVALID(m_axi_BUS512_ARVALID),
    .m_axi_BUS512_ARREADY(m_axi_BUS512_ARREADY),
    .m_axi_BUS512_RID(1'B0),
    .m_axi_BUS512_RDATA(m_axi_BUS512_RDATA),
    .m_axi_BUS512_RRESP(m_axi_BUS512_RRESP),
    .m_axi_BUS512_RLAST(m_axi_BUS512_RLAST),
    .m_axi_BUS512_RUSER(1'B0),
    .m_axi_BUS512_RVALID(m_axi_BUS512_RVALID),
    .m_axi_BUS512_RREADY(m_axi_BUS512_RREADY),
    .m_axi_DDR512_AWID(),
    .m_axi_DDR512_AWADDR(m_axi_DDR512_AWADDR),
    .m_axi_DDR512_AWLEN(m_axi_DDR512_AWLEN),
    .m_axi_DDR512_AWSIZE(m_axi_DDR512_AWSIZE),
    .m_axi_DDR512_AWBURST(m_axi_DDR512_AWBURST),
    .m_axi_DDR512_AWLOCK(m_axi_DDR512_AWLOCK),
    .m_axi_DDR512_AWREGION(m_axi_DDR512_AWREGION),
    .m_axi_DDR512_AWCACHE(m_axi_DDR512_AWCACHE),
    .m_axi_DDR512_AWPROT(m_axi_DDR512_AWPROT),
    .m_axi_DDR512_AWQOS(m_axi_DDR512_AWQOS),
    .m_axi_DDR512_AWUSER(),
    .m_axi_DDR512_AWVALID(m_axi_DDR512_AWVALID),
    .m_axi_DDR512_AWREADY(m_axi_DDR512_AWREADY),
    .m_axi_DDR512_WID(),
    .m_axi_DDR512_WDATA(m_axi_DDR512_WDATA),
    .m_axi_DDR512_WSTRB(m_axi_DDR512_WSTRB),
    .m_axi_DDR512_WLAST(m_axi_DDR512_WLAST),
    .m_axi_DDR512_WUSER(),
    .m_axi_DDR512_WVALID(m_axi_DDR512_WVALID),
    .m_axi_DDR512_WREADY(m_axi_DDR512_WREADY),
    .m_axi_DDR512_BID(1'B0),
    .m_axi_DDR512_BRESP(m_axi_DDR512_BRESP),
    .m_axi_DDR512_BUSER(1'B0),
    .m_axi_DDR512_BVALID(m_axi_DDR512_BVALID),
    .m_axi_DDR512_BREADY(m_axi_DDR512_BREADY),
    .m_axi_DDR512_ARID(),
    .m_axi_DDR512_ARADDR(m_axi_DDR512_ARADDR),
    .m_axi_DDR512_ARLEN(m_axi_DDR512_ARLEN),
    .m_axi_DDR512_ARSIZE(m_axi_DDR512_ARSIZE),
    .m_axi_DDR512_ARBURST(m_axi_DDR512_ARBURST),
    .m_axi_DDR512_ARLOCK(m_axi_DDR512_ARLOCK),
    .m_axi_DDR512_ARREGION(m_axi_DDR512_ARREGION),
    .m_axi_DDR512_ARCACHE(m_axi_DDR512_ARCACHE),
    .m_axi_DDR512_ARPROT(m_axi_DDR512_ARPROT),
    .m_axi_DDR512_ARQOS(m_axi_DDR512_ARQOS),
    .m_axi_DDR512_ARUSER(),
    .m_axi_DDR512_ARVALID(m_axi_DDR512_ARVALID),
    .m_axi_DDR512_ARREADY(m_axi_DDR512_ARREADY),
    .m_axi_DDR512_RID(1'B0),
    .m_axi_DDR512_RDATA(m_axi_DDR512_RDATA),
    .m_axi_DDR512_RRESP(m_axi_DDR512_RRESP),
    .m_axi_DDR512_RLAST(m_axi_DDR512_RLAST),
    .m_axi_DDR512_RUSER(1'B0),
    .m_axi_DDR512_RVALID(m_axi_DDR512_RVALID),
    .m_axi_DDR512_RREADY(m_axi_DDR512_RREADY)
  );
endmodule
