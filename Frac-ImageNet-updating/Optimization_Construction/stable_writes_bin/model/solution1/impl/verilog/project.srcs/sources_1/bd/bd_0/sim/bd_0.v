//Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2019.2.1 (win64) Build 2729669 Thu Dec  5 04:49:17 MST 2019
//Date        : Sun Dec 13 06:42:35 2020
//Host        : DESKTOP-APERTURE running 64-bit major release  (build 9200)
//Command     : generate_target bd_0.bd
//Design      : bd_0
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CORE_GENERATION_INFO = "bd_0,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=bd_0,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=1,numReposBlks=1,numNonXlnxBlks=0,numHierBlks=0,maxHierDepth=0,numSysgenBlks=0,numHlsBlks=1,numHdlrefBlks=0,numPkgbdBlks=0,bdsource=USER,synth_mode=OOC_per_IP}" *) (* HW_HANDOFF = "bd_0.hwdef" *) 
module bd_0
   (ap_clk,
    ap_rst_n,
    interrupt,
    m_axi_BUS32_araddr,
    m_axi_BUS32_arburst,
    m_axi_BUS32_arcache,
    m_axi_BUS32_arlen,
    m_axi_BUS32_arlock,
    m_axi_BUS32_arprot,
    m_axi_BUS32_arqos,
    m_axi_BUS32_arready,
    m_axi_BUS32_arregion,
    m_axi_BUS32_arsize,
    m_axi_BUS32_arvalid,
    m_axi_BUS32_awaddr,
    m_axi_BUS32_awburst,
    m_axi_BUS32_awcache,
    m_axi_BUS32_awlen,
    m_axi_BUS32_awlock,
    m_axi_BUS32_awprot,
    m_axi_BUS32_awqos,
    m_axi_BUS32_awready,
    m_axi_BUS32_awregion,
    m_axi_BUS32_awsize,
    m_axi_BUS32_awvalid,
    m_axi_BUS32_bready,
    m_axi_BUS32_bresp,
    m_axi_BUS32_bvalid,
    m_axi_BUS32_rdata,
    m_axi_BUS32_rlast,
    m_axi_BUS32_rready,
    m_axi_BUS32_rresp,
    m_axi_BUS32_rvalid,
    m_axi_BUS32_wdata,
    m_axi_BUS32_wlast,
    m_axi_BUS32_wready,
    m_axi_BUS32_wstrb,
    m_axi_BUS32_wvalid,
    m_axi_BUS512_araddr,
    m_axi_BUS512_arburst,
    m_axi_BUS512_arcache,
    m_axi_BUS512_arlen,
    m_axi_BUS512_arlock,
    m_axi_BUS512_arprot,
    m_axi_BUS512_arqos,
    m_axi_BUS512_arready,
    m_axi_BUS512_arregion,
    m_axi_BUS512_arsize,
    m_axi_BUS512_arvalid,
    m_axi_BUS512_awaddr,
    m_axi_BUS512_awburst,
    m_axi_BUS512_awcache,
    m_axi_BUS512_awlen,
    m_axi_BUS512_awlock,
    m_axi_BUS512_awprot,
    m_axi_BUS512_awqos,
    m_axi_BUS512_awready,
    m_axi_BUS512_awregion,
    m_axi_BUS512_awsize,
    m_axi_BUS512_awvalid,
    m_axi_BUS512_bready,
    m_axi_BUS512_bresp,
    m_axi_BUS512_bvalid,
    m_axi_BUS512_rdata,
    m_axi_BUS512_rlast,
    m_axi_BUS512_rready,
    m_axi_BUS512_rresp,
    m_axi_BUS512_rvalid,
    m_axi_BUS512_wdata,
    m_axi_BUS512_wlast,
    m_axi_BUS512_wready,
    m_axi_BUS512_wstrb,
    m_axi_BUS512_wvalid,
    m_axi_DDR512_araddr,
    m_axi_DDR512_arburst,
    m_axi_DDR512_arcache,
    m_axi_DDR512_arlen,
    m_axi_DDR512_arlock,
    m_axi_DDR512_arprot,
    m_axi_DDR512_arqos,
    m_axi_DDR512_arready,
    m_axi_DDR512_arregion,
    m_axi_DDR512_arsize,
    m_axi_DDR512_arvalid,
    m_axi_DDR512_awaddr,
    m_axi_DDR512_awburst,
    m_axi_DDR512_awcache,
    m_axi_DDR512_awlen,
    m_axi_DDR512_awlock,
    m_axi_DDR512_awprot,
    m_axi_DDR512_awqos,
    m_axi_DDR512_awready,
    m_axi_DDR512_awregion,
    m_axi_DDR512_awsize,
    m_axi_DDR512_awvalid,
    m_axi_DDR512_bready,
    m_axi_DDR512_bresp,
    m_axi_DDR512_bvalid,
    m_axi_DDR512_rdata,
    m_axi_DDR512_rlast,
    m_axi_DDR512_rready,
    m_axi_DDR512_rresp,
    m_axi_DDR512_rvalid,
    m_axi_DDR512_wdata,
    m_axi_DDR512_wlast,
    m_axi_DDR512_wready,
    m_axi_DDR512_wstrb,
    m_axi_DDR512_wvalid,
    s_axi_CTRL_araddr,
    s_axi_CTRL_arready,
    s_axi_CTRL_arvalid,
    s_axi_CTRL_awaddr,
    s_axi_CTRL_awready,
    s_axi_CTRL_awvalid,
    s_axi_CTRL_bready,
    s_axi_CTRL_bresp,
    s_axi_CTRL_bvalid,
    s_axi_CTRL_rdata,
    s_axi_CTRL_rready,
    s_axi_CTRL_rresp,
    s_axi_CTRL_rvalid,
    s_axi_CTRL_wdata,
    s_axi_CTRL_wready,
    s_axi_CTRL_wstrb,
    s_axi_CTRL_wvalid);
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 CLK.AP_CLK CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME CLK.AP_CLK, ASSOCIATED_BUSIF m_axi_BUS32:m_axi_BUS512:m_axi_DDR512:s_axi_CTRL, ASSOCIATED_RESET ap_rst_n, CLK_DOMAIN bd_0_ap_clk_0, FREQ_HZ 250000000.0, INSERT_VIP 0, PHASE 0.000" *) input ap_clk;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.AP_RST_N RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.AP_RST_N, INSERT_VIP 0, POLARITY ACTIVE_LOW" *) input ap_rst_n;
  (* X_INTERFACE_INFO = "xilinx.com:signal:interrupt:1.0 INTR.INTERRUPT INTERRUPT" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME INTR.INTERRUPT, PortWidth 1, SENSITIVITY LEVEL_HIGH" *) output interrupt;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME m_axi_BUS32, ADDR_WIDTH 32, ARUSER_WIDTH 0, AWUSER_WIDTH 0, BUSER_WIDTH 0, CLK_DOMAIN bd_0_ap_clk_0, DATA_WIDTH 32, FREQ_HZ 250000000.0, HAS_BRESP 1, HAS_BURST 0, HAS_CACHE 1, HAS_LOCK 1, HAS_PROT 1, HAS_QOS 1, HAS_REGION 1, HAS_RRESP 1, HAS_WSTRB 1, ID_WIDTH 0, INSERT_VIP 0, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_READ_THREADS 1, NUM_WRITE_OUTSTANDING 16, NUM_WRITE_THREADS 1, PHASE 0.000, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, RUSER_BITS_PER_BYTE 0, RUSER_WIDTH 0, SUPPORTS_NARROW_BURST 0, WUSER_BITS_PER_BYTE 0, WUSER_WIDTH 0" *) output [31:0]m_axi_BUS32_araddr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output [1:0]m_axi_BUS32_arburst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output [3:0]m_axi_BUS32_arcache;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output [7:0]m_axi_BUS32_arlen;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output [1:0]m_axi_BUS32_arlock;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output [2:0]m_axi_BUS32_arprot;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output [3:0]m_axi_BUS32_arqos;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) input m_axi_BUS32_arready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output [3:0]m_axi_BUS32_arregion;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output [2:0]m_axi_BUS32_arsize;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output m_axi_BUS32_arvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output [31:0]m_axi_BUS32_awaddr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output [1:0]m_axi_BUS32_awburst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output [3:0]m_axi_BUS32_awcache;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output [7:0]m_axi_BUS32_awlen;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output [1:0]m_axi_BUS32_awlock;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output [2:0]m_axi_BUS32_awprot;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output [3:0]m_axi_BUS32_awqos;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) input m_axi_BUS32_awready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output [3:0]m_axi_BUS32_awregion;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output [2:0]m_axi_BUS32_awsize;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output m_axi_BUS32_awvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output m_axi_BUS32_bready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) input [1:0]m_axi_BUS32_bresp;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) input m_axi_BUS32_bvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) input [31:0]m_axi_BUS32_rdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) input m_axi_BUS32_rlast;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output m_axi_BUS32_rready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) input [1:0]m_axi_BUS32_rresp;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) input m_axi_BUS32_rvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output [31:0]m_axi_BUS32_wdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output m_axi_BUS32_wlast;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) input m_axi_BUS32_wready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output [3:0]m_axi_BUS32_wstrb;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS32 " *) output m_axi_BUS32_wvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME m_axi_BUS512, ADDR_WIDTH 32, ARUSER_WIDTH 0, AWUSER_WIDTH 0, BUSER_WIDTH 0, CLK_DOMAIN bd_0_ap_clk_0, DATA_WIDTH 512, FREQ_HZ 250000000.0, HAS_BRESP 1, HAS_BURST 0, HAS_CACHE 1, HAS_LOCK 1, HAS_PROT 1, HAS_QOS 1, HAS_REGION 1, HAS_RRESP 1, HAS_WSTRB 1, ID_WIDTH 0, INSERT_VIP 0, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_READ_THREADS 1, NUM_WRITE_OUTSTANDING 16, NUM_WRITE_THREADS 1, PHASE 0.000, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, RUSER_BITS_PER_BYTE 0, RUSER_WIDTH 0, SUPPORTS_NARROW_BURST 0, WUSER_BITS_PER_BYTE 0, WUSER_WIDTH 0" *) output [31:0]m_axi_BUS512_araddr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output [1:0]m_axi_BUS512_arburst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output [3:0]m_axi_BUS512_arcache;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output [7:0]m_axi_BUS512_arlen;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output [1:0]m_axi_BUS512_arlock;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output [2:0]m_axi_BUS512_arprot;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output [3:0]m_axi_BUS512_arqos;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) input m_axi_BUS512_arready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output [3:0]m_axi_BUS512_arregion;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output [2:0]m_axi_BUS512_arsize;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output m_axi_BUS512_arvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output [31:0]m_axi_BUS512_awaddr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output [1:0]m_axi_BUS512_awburst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output [3:0]m_axi_BUS512_awcache;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output [7:0]m_axi_BUS512_awlen;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output [1:0]m_axi_BUS512_awlock;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output [2:0]m_axi_BUS512_awprot;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output [3:0]m_axi_BUS512_awqos;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) input m_axi_BUS512_awready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output [3:0]m_axi_BUS512_awregion;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output [2:0]m_axi_BUS512_awsize;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output m_axi_BUS512_awvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output m_axi_BUS512_bready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) input [1:0]m_axi_BUS512_bresp;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) input m_axi_BUS512_bvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) input [511:0]m_axi_BUS512_rdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) input m_axi_BUS512_rlast;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output m_axi_BUS512_rready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) input [1:0]m_axi_BUS512_rresp;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) input m_axi_BUS512_rvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output [511:0]m_axi_BUS512_wdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output m_axi_BUS512_wlast;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) input m_axi_BUS512_wready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output [63:0]m_axi_BUS512_wstrb;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_BUS512 " *) output m_axi_BUS512_wvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME m_axi_DDR512, ADDR_WIDTH 32, ARUSER_WIDTH 0, AWUSER_WIDTH 0, BUSER_WIDTH 0, CLK_DOMAIN bd_0_ap_clk_0, DATA_WIDTH 512, FREQ_HZ 250000000.0, HAS_BRESP 1, HAS_BURST 0, HAS_CACHE 1, HAS_LOCK 1, HAS_PROT 1, HAS_QOS 1, HAS_REGION 1, HAS_RRESP 1, HAS_WSTRB 1, ID_WIDTH 0, INSERT_VIP 0, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_READ_THREADS 1, NUM_WRITE_OUTSTANDING 16, NUM_WRITE_THREADS 1, PHASE 0.000, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, RUSER_BITS_PER_BYTE 0, RUSER_WIDTH 0, SUPPORTS_NARROW_BURST 0, WUSER_BITS_PER_BYTE 0, WUSER_WIDTH 0" *) output [31:0]m_axi_DDR512_araddr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output [1:0]m_axi_DDR512_arburst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output [3:0]m_axi_DDR512_arcache;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output [7:0]m_axi_DDR512_arlen;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output [1:0]m_axi_DDR512_arlock;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output [2:0]m_axi_DDR512_arprot;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output [3:0]m_axi_DDR512_arqos;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) input m_axi_DDR512_arready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output [3:0]m_axi_DDR512_arregion;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output [2:0]m_axi_DDR512_arsize;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output m_axi_DDR512_arvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output [31:0]m_axi_DDR512_awaddr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output [1:0]m_axi_DDR512_awburst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output [3:0]m_axi_DDR512_awcache;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output [7:0]m_axi_DDR512_awlen;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output [1:0]m_axi_DDR512_awlock;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output [2:0]m_axi_DDR512_awprot;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output [3:0]m_axi_DDR512_awqos;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) input m_axi_DDR512_awready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output [3:0]m_axi_DDR512_awregion;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output [2:0]m_axi_DDR512_awsize;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output m_axi_DDR512_awvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output m_axi_DDR512_bready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) input [1:0]m_axi_DDR512_bresp;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) input m_axi_DDR512_bvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) input [511:0]m_axi_DDR512_rdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) input m_axi_DDR512_rlast;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output m_axi_DDR512_rready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) input [1:0]m_axi_DDR512_rresp;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) input m_axi_DDR512_rvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output [511:0]m_axi_DDR512_wdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output m_axi_DDR512_wlast;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) input m_axi_DDR512_wready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output [63:0]m_axi_DDR512_wstrb;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DDR512 " *) output m_axi_DDR512_wvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL " *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME s_axi_CTRL, ADDR_WIDTH 12, ARUSER_WIDTH 0, AWUSER_WIDTH 0, BUSER_WIDTH 0, CLK_DOMAIN bd_0_ap_clk_0, DATA_WIDTH 32, FREQ_HZ 250000000.0, HAS_BRESP 1, HAS_BURST 0, HAS_CACHE 0, HAS_LOCK 0, HAS_PROT 0, HAS_QOS 0, HAS_REGION 0, HAS_RRESP 1, HAS_WSTRB 1, ID_WIDTH 0, INSERT_VIP 0, MAX_BURST_LENGTH 1, NUM_READ_OUTSTANDING 1, NUM_READ_THREADS 1, NUM_WRITE_OUTSTANDING 1, NUM_WRITE_THREADS 1, PHASE 0.000, PROTOCOL AXI4LITE, READ_WRITE_MODE READ_WRITE, RUSER_BITS_PER_BYTE 0, RUSER_WIDTH 0, SUPPORTS_NARROW_BURST 0, WUSER_BITS_PER_BYTE 0, WUSER_WIDTH 0" *) input [5:0]s_axi_CTRL_araddr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL " *) output s_axi_CTRL_arready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL " *) input s_axi_CTRL_arvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL " *) input [5:0]s_axi_CTRL_awaddr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL " *) output s_axi_CTRL_awready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL " *) input s_axi_CTRL_awvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL " *) input s_axi_CTRL_bready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL " *) output [1:0]s_axi_CTRL_bresp;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL " *) output s_axi_CTRL_bvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL " *) output [31:0]s_axi_CTRL_rdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL " *) input s_axi_CTRL_rready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL " *) output [1:0]s_axi_CTRL_rresp;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL " *) output s_axi_CTRL_rvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL " *) input [31:0]s_axi_CTRL_wdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL " *) output s_axi_CTRL_wready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL " *) input [3:0]s_axi_CTRL_wstrb;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTRL " *) input s_axi_CTRL_wvalid;

  wire ap_clk_0_1;
  wire ap_rst_n_0_1;
  wire hls_inst_interrupt;
  wire [31:0]hls_inst_m_axi_BUS32_ARADDR;
  wire [1:0]hls_inst_m_axi_BUS32_ARBURST;
  wire [3:0]hls_inst_m_axi_BUS32_ARCACHE;
  wire [7:0]hls_inst_m_axi_BUS32_ARLEN;
  wire [1:0]hls_inst_m_axi_BUS32_ARLOCK;
  wire [2:0]hls_inst_m_axi_BUS32_ARPROT;
  wire [3:0]hls_inst_m_axi_BUS32_ARQOS;
  wire hls_inst_m_axi_BUS32_ARREADY;
  wire [3:0]hls_inst_m_axi_BUS32_ARREGION;
  wire [2:0]hls_inst_m_axi_BUS32_ARSIZE;
  wire hls_inst_m_axi_BUS32_ARVALID;
  wire [31:0]hls_inst_m_axi_BUS32_AWADDR;
  wire [1:0]hls_inst_m_axi_BUS32_AWBURST;
  wire [3:0]hls_inst_m_axi_BUS32_AWCACHE;
  wire [7:0]hls_inst_m_axi_BUS32_AWLEN;
  wire [1:0]hls_inst_m_axi_BUS32_AWLOCK;
  wire [2:0]hls_inst_m_axi_BUS32_AWPROT;
  wire [3:0]hls_inst_m_axi_BUS32_AWQOS;
  wire hls_inst_m_axi_BUS32_AWREADY;
  wire [3:0]hls_inst_m_axi_BUS32_AWREGION;
  wire [2:0]hls_inst_m_axi_BUS32_AWSIZE;
  wire hls_inst_m_axi_BUS32_AWVALID;
  wire hls_inst_m_axi_BUS32_BREADY;
  wire [1:0]hls_inst_m_axi_BUS32_BRESP;
  wire hls_inst_m_axi_BUS32_BVALID;
  wire [31:0]hls_inst_m_axi_BUS32_RDATA;
  wire hls_inst_m_axi_BUS32_RLAST;
  wire hls_inst_m_axi_BUS32_RREADY;
  wire [1:0]hls_inst_m_axi_BUS32_RRESP;
  wire hls_inst_m_axi_BUS32_RVALID;
  wire [31:0]hls_inst_m_axi_BUS32_WDATA;
  wire hls_inst_m_axi_BUS32_WLAST;
  wire hls_inst_m_axi_BUS32_WREADY;
  wire [3:0]hls_inst_m_axi_BUS32_WSTRB;
  wire hls_inst_m_axi_BUS32_WVALID;
  wire [31:0]hls_inst_m_axi_BUS512_ARADDR;
  wire [1:0]hls_inst_m_axi_BUS512_ARBURST;
  wire [3:0]hls_inst_m_axi_BUS512_ARCACHE;
  wire [7:0]hls_inst_m_axi_BUS512_ARLEN;
  wire [1:0]hls_inst_m_axi_BUS512_ARLOCK;
  wire [2:0]hls_inst_m_axi_BUS512_ARPROT;
  wire [3:0]hls_inst_m_axi_BUS512_ARQOS;
  wire hls_inst_m_axi_BUS512_ARREADY;
  wire [3:0]hls_inst_m_axi_BUS512_ARREGION;
  wire [2:0]hls_inst_m_axi_BUS512_ARSIZE;
  wire hls_inst_m_axi_BUS512_ARVALID;
  wire [31:0]hls_inst_m_axi_BUS512_AWADDR;
  wire [1:0]hls_inst_m_axi_BUS512_AWBURST;
  wire [3:0]hls_inst_m_axi_BUS512_AWCACHE;
  wire [7:0]hls_inst_m_axi_BUS512_AWLEN;
  wire [1:0]hls_inst_m_axi_BUS512_AWLOCK;
  wire [2:0]hls_inst_m_axi_BUS512_AWPROT;
  wire [3:0]hls_inst_m_axi_BUS512_AWQOS;
  wire hls_inst_m_axi_BUS512_AWREADY;
  wire [3:0]hls_inst_m_axi_BUS512_AWREGION;
  wire [2:0]hls_inst_m_axi_BUS512_AWSIZE;
  wire hls_inst_m_axi_BUS512_AWVALID;
  wire hls_inst_m_axi_BUS512_BREADY;
  wire [1:0]hls_inst_m_axi_BUS512_BRESP;
  wire hls_inst_m_axi_BUS512_BVALID;
  wire [511:0]hls_inst_m_axi_BUS512_RDATA;
  wire hls_inst_m_axi_BUS512_RLAST;
  wire hls_inst_m_axi_BUS512_RREADY;
  wire [1:0]hls_inst_m_axi_BUS512_RRESP;
  wire hls_inst_m_axi_BUS512_RVALID;
  wire [511:0]hls_inst_m_axi_BUS512_WDATA;
  wire hls_inst_m_axi_BUS512_WLAST;
  wire hls_inst_m_axi_BUS512_WREADY;
  wire [63:0]hls_inst_m_axi_BUS512_WSTRB;
  wire hls_inst_m_axi_BUS512_WVALID;
  wire [31:0]hls_inst_m_axi_DDR512_ARADDR;
  wire [1:0]hls_inst_m_axi_DDR512_ARBURST;
  wire [3:0]hls_inst_m_axi_DDR512_ARCACHE;
  wire [7:0]hls_inst_m_axi_DDR512_ARLEN;
  wire [1:0]hls_inst_m_axi_DDR512_ARLOCK;
  wire [2:0]hls_inst_m_axi_DDR512_ARPROT;
  wire [3:0]hls_inst_m_axi_DDR512_ARQOS;
  wire hls_inst_m_axi_DDR512_ARREADY;
  wire [3:0]hls_inst_m_axi_DDR512_ARREGION;
  wire [2:0]hls_inst_m_axi_DDR512_ARSIZE;
  wire hls_inst_m_axi_DDR512_ARVALID;
  wire [31:0]hls_inst_m_axi_DDR512_AWADDR;
  wire [1:0]hls_inst_m_axi_DDR512_AWBURST;
  wire [3:0]hls_inst_m_axi_DDR512_AWCACHE;
  wire [7:0]hls_inst_m_axi_DDR512_AWLEN;
  wire [1:0]hls_inst_m_axi_DDR512_AWLOCK;
  wire [2:0]hls_inst_m_axi_DDR512_AWPROT;
  wire [3:0]hls_inst_m_axi_DDR512_AWQOS;
  wire hls_inst_m_axi_DDR512_AWREADY;
  wire [3:0]hls_inst_m_axi_DDR512_AWREGION;
  wire [2:0]hls_inst_m_axi_DDR512_AWSIZE;
  wire hls_inst_m_axi_DDR512_AWVALID;
  wire hls_inst_m_axi_DDR512_BREADY;
  wire [1:0]hls_inst_m_axi_DDR512_BRESP;
  wire hls_inst_m_axi_DDR512_BVALID;
  wire [511:0]hls_inst_m_axi_DDR512_RDATA;
  wire hls_inst_m_axi_DDR512_RLAST;
  wire hls_inst_m_axi_DDR512_RREADY;
  wire [1:0]hls_inst_m_axi_DDR512_RRESP;
  wire hls_inst_m_axi_DDR512_RVALID;
  wire [511:0]hls_inst_m_axi_DDR512_WDATA;
  wire hls_inst_m_axi_DDR512_WLAST;
  wire hls_inst_m_axi_DDR512_WREADY;
  wire [63:0]hls_inst_m_axi_DDR512_WSTRB;
  wire hls_inst_m_axi_DDR512_WVALID;
  wire [5:0]s_axi_CTRL_0_1_ARADDR;
  wire s_axi_CTRL_0_1_ARREADY;
  wire s_axi_CTRL_0_1_ARVALID;
  wire [5:0]s_axi_CTRL_0_1_AWADDR;
  wire s_axi_CTRL_0_1_AWREADY;
  wire s_axi_CTRL_0_1_AWVALID;
  wire s_axi_CTRL_0_1_BREADY;
  wire [1:0]s_axi_CTRL_0_1_BRESP;
  wire s_axi_CTRL_0_1_BVALID;
  wire [31:0]s_axi_CTRL_0_1_RDATA;
  wire s_axi_CTRL_0_1_RREADY;
  wire [1:0]s_axi_CTRL_0_1_RRESP;
  wire s_axi_CTRL_0_1_RVALID;
  wire [31:0]s_axi_CTRL_0_1_WDATA;
  wire s_axi_CTRL_0_1_WREADY;
  wire [3:0]s_axi_CTRL_0_1_WSTRB;
  wire s_axi_CTRL_0_1_WVALID;

  assign ap_clk_0_1 = ap_clk;
  assign ap_rst_n_0_1 = ap_rst_n;
  assign hls_inst_m_axi_BUS32_ARREADY = m_axi_BUS32_arready;
  assign hls_inst_m_axi_BUS32_AWREADY = m_axi_BUS32_awready;
  assign hls_inst_m_axi_BUS32_BRESP = m_axi_BUS32_bresp[1:0];
  assign hls_inst_m_axi_BUS32_BVALID = m_axi_BUS32_bvalid;
  assign hls_inst_m_axi_BUS32_RDATA = m_axi_BUS32_rdata[31:0];
  assign hls_inst_m_axi_BUS32_RLAST = m_axi_BUS32_rlast;
  assign hls_inst_m_axi_BUS32_RRESP = m_axi_BUS32_rresp[1:0];
  assign hls_inst_m_axi_BUS32_RVALID = m_axi_BUS32_rvalid;
  assign hls_inst_m_axi_BUS32_WREADY = m_axi_BUS32_wready;
  assign hls_inst_m_axi_BUS512_ARREADY = m_axi_BUS512_arready;
  assign hls_inst_m_axi_BUS512_AWREADY = m_axi_BUS512_awready;
  assign hls_inst_m_axi_BUS512_BRESP = m_axi_BUS512_bresp[1:0];
  assign hls_inst_m_axi_BUS512_BVALID = m_axi_BUS512_bvalid;
  assign hls_inst_m_axi_BUS512_RDATA = m_axi_BUS512_rdata[511:0];
  assign hls_inst_m_axi_BUS512_RLAST = m_axi_BUS512_rlast;
  assign hls_inst_m_axi_BUS512_RRESP = m_axi_BUS512_rresp[1:0];
  assign hls_inst_m_axi_BUS512_RVALID = m_axi_BUS512_rvalid;
  assign hls_inst_m_axi_BUS512_WREADY = m_axi_BUS512_wready;
  assign hls_inst_m_axi_DDR512_ARREADY = m_axi_DDR512_arready;
  assign hls_inst_m_axi_DDR512_AWREADY = m_axi_DDR512_awready;
  assign hls_inst_m_axi_DDR512_BRESP = m_axi_DDR512_bresp[1:0];
  assign hls_inst_m_axi_DDR512_BVALID = m_axi_DDR512_bvalid;
  assign hls_inst_m_axi_DDR512_RDATA = m_axi_DDR512_rdata[511:0];
  assign hls_inst_m_axi_DDR512_RLAST = m_axi_DDR512_rlast;
  assign hls_inst_m_axi_DDR512_RRESP = m_axi_DDR512_rresp[1:0];
  assign hls_inst_m_axi_DDR512_RVALID = m_axi_DDR512_rvalid;
  assign hls_inst_m_axi_DDR512_WREADY = m_axi_DDR512_wready;
  assign interrupt = hls_inst_interrupt;
  assign m_axi_BUS32_araddr[31:0] = hls_inst_m_axi_BUS32_ARADDR;
  assign m_axi_BUS32_arburst[1:0] = hls_inst_m_axi_BUS32_ARBURST;
  assign m_axi_BUS32_arcache[3:0] = hls_inst_m_axi_BUS32_ARCACHE;
  assign m_axi_BUS32_arlen[7:0] = hls_inst_m_axi_BUS32_ARLEN;
  assign m_axi_BUS32_arlock[1:0] = hls_inst_m_axi_BUS32_ARLOCK;
  assign m_axi_BUS32_arprot[2:0] = hls_inst_m_axi_BUS32_ARPROT;
  assign m_axi_BUS32_arqos[3:0] = hls_inst_m_axi_BUS32_ARQOS;
  assign m_axi_BUS32_arregion[3:0] = hls_inst_m_axi_BUS32_ARREGION;
  assign m_axi_BUS32_arsize[2:0] = hls_inst_m_axi_BUS32_ARSIZE;
  assign m_axi_BUS32_arvalid = hls_inst_m_axi_BUS32_ARVALID;
  assign m_axi_BUS32_awaddr[31:0] = hls_inst_m_axi_BUS32_AWADDR;
  assign m_axi_BUS32_awburst[1:0] = hls_inst_m_axi_BUS32_AWBURST;
  assign m_axi_BUS32_awcache[3:0] = hls_inst_m_axi_BUS32_AWCACHE;
  assign m_axi_BUS32_awlen[7:0] = hls_inst_m_axi_BUS32_AWLEN;
  assign m_axi_BUS32_awlock[1:0] = hls_inst_m_axi_BUS32_AWLOCK;
  assign m_axi_BUS32_awprot[2:0] = hls_inst_m_axi_BUS32_AWPROT;
  assign m_axi_BUS32_awqos[3:0] = hls_inst_m_axi_BUS32_AWQOS;
  assign m_axi_BUS32_awregion[3:0] = hls_inst_m_axi_BUS32_AWREGION;
  assign m_axi_BUS32_awsize[2:0] = hls_inst_m_axi_BUS32_AWSIZE;
  assign m_axi_BUS32_awvalid = hls_inst_m_axi_BUS32_AWVALID;
  assign m_axi_BUS32_bready = hls_inst_m_axi_BUS32_BREADY;
  assign m_axi_BUS32_rready = hls_inst_m_axi_BUS32_RREADY;
  assign m_axi_BUS32_wdata[31:0] = hls_inst_m_axi_BUS32_WDATA;
  assign m_axi_BUS32_wlast = hls_inst_m_axi_BUS32_WLAST;
  assign m_axi_BUS32_wstrb[3:0] = hls_inst_m_axi_BUS32_WSTRB;
  assign m_axi_BUS32_wvalid = hls_inst_m_axi_BUS32_WVALID;
  assign m_axi_BUS512_araddr[31:0] = hls_inst_m_axi_BUS512_ARADDR;
  assign m_axi_BUS512_arburst[1:0] = hls_inst_m_axi_BUS512_ARBURST;
  assign m_axi_BUS512_arcache[3:0] = hls_inst_m_axi_BUS512_ARCACHE;
  assign m_axi_BUS512_arlen[7:0] = hls_inst_m_axi_BUS512_ARLEN;
  assign m_axi_BUS512_arlock[1:0] = hls_inst_m_axi_BUS512_ARLOCK;
  assign m_axi_BUS512_arprot[2:0] = hls_inst_m_axi_BUS512_ARPROT;
  assign m_axi_BUS512_arqos[3:0] = hls_inst_m_axi_BUS512_ARQOS;
  assign m_axi_BUS512_arregion[3:0] = hls_inst_m_axi_BUS512_ARREGION;
  assign m_axi_BUS512_arsize[2:0] = hls_inst_m_axi_BUS512_ARSIZE;
  assign m_axi_BUS512_arvalid = hls_inst_m_axi_BUS512_ARVALID;
  assign m_axi_BUS512_awaddr[31:0] = hls_inst_m_axi_BUS512_AWADDR;
  assign m_axi_BUS512_awburst[1:0] = hls_inst_m_axi_BUS512_AWBURST;
  assign m_axi_BUS512_awcache[3:0] = hls_inst_m_axi_BUS512_AWCACHE;
  assign m_axi_BUS512_awlen[7:0] = hls_inst_m_axi_BUS512_AWLEN;
  assign m_axi_BUS512_awlock[1:0] = hls_inst_m_axi_BUS512_AWLOCK;
  assign m_axi_BUS512_awprot[2:0] = hls_inst_m_axi_BUS512_AWPROT;
  assign m_axi_BUS512_awqos[3:0] = hls_inst_m_axi_BUS512_AWQOS;
  assign m_axi_BUS512_awregion[3:0] = hls_inst_m_axi_BUS512_AWREGION;
  assign m_axi_BUS512_awsize[2:0] = hls_inst_m_axi_BUS512_AWSIZE;
  assign m_axi_BUS512_awvalid = hls_inst_m_axi_BUS512_AWVALID;
  assign m_axi_BUS512_bready = hls_inst_m_axi_BUS512_BREADY;
  assign m_axi_BUS512_rready = hls_inst_m_axi_BUS512_RREADY;
  assign m_axi_BUS512_wdata[511:0] = hls_inst_m_axi_BUS512_WDATA;
  assign m_axi_BUS512_wlast = hls_inst_m_axi_BUS512_WLAST;
  assign m_axi_BUS512_wstrb[63:0] = hls_inst_m_axi_BUS512_WSTRB;
  assign m_axi_BUS512_wvalid = hls_inst_m_axi_BUS512_WVALID;
  assign m_axi_DDR512_araddr[31:0] = hls_inst_m_axi_DDR512_ARADDR;
  assign m_axi_DDR512_arburst[1:0] = hls_inst_m_axi_DDR512_ARBURST;
  assign m_axi_DDR512_arcache[3:0] = hls_inst_m_axi_DDR512_ARCACHE;
  assign m_axi_DDR512_arlen[7:0] = hls_inst_m_axi_DDR512_ARLEN;
  assign m_axi_DDR512_arlock[1:0] = hls_inst_m_axi_DDR512_ARLOCK;
  assign m_axi_DDR512_arprot[2:0] = hls_inst_m_axi_DDR512_ARPROT;
  assign m_axi_DDR512_arqos[3:0] = hls_inst_m_axi_DDR512_ARQOS;
  assign m_axi_DDR512_arregion[3:0] = hls_inst_m_axi_DDR512_ARREGION;
  assign m_axi_DDR512_arsize[2:0] = hls_inst_m_axi_DDR512_ARSIZE;
  assign m_axi_DDR512_arvalid = hls_inst_m_axi_DDR512_ARVALID;
  assign m_axi_DDR512_awaddr[31:0] = hls_inst_m_axi_DDR512_AWADDR;
  assign m_axi_DDR512_awburst[1:0] = hls_inst_m_axi_DDR512_AWBURST;
  assign m_axi_DDR512_awcache[3:0] = hls_inst_m_axi_DDR512_AWCACHE;
  assign m_axi_DDR512_awlen[7:0] = hls_inst_m_axi_DDR512_AWLEN;
  assign m_axi_DDR512_awlock[1:0] = hls_inst_m_axi_DDR512_AWLOCK;
  assign m_axi_DDR512_awprot[2:0] = hls_inst_m_axi_DDR512_AWPROT;
  assign m_axi_DDR512_awqos[3:0] = hls_inst_m_axi_DDR512_AWQOS;
  assign m_axi_DDR512_awregion[3:0] = hls_inst_m_axi_DDR512_AWREGION;
  assign m_axi_DDR512_awsize[2:0] = hls_inst_m_axi_DDR512_AWSIZE;
  assign m_axi_DDR512_awvalid = hls_inst_m_axi_DDR512_AWVALID;
  assign m_axi_DDR512_bready = hls_inst_m_axi_DDR512_BREADY;
  assign m_axi_DDR512_rready = hls_inst_m_axi_DDR512_RREADY;
  assign m_axi_DDR512_wdata[511:0] = hls_inst_m_axi_DDR512_WDATA;
  assign m_axi_DDR512_wlast = hls_inst_m_axi_DDR512_WLAST;
  assign m_axi_DDR512_wstrb[63:0] = hls_inst_m_axi_DDR512_WSTRB;
  assign m_axi_DDR512_wvalid = hls_inst_m_axi_DDR512_WVALID;
  assign s_axi_CTRL_0_1_ARADDR = s_axi_CTRL_araddr[5:0];
  assign s_axi_CTRL_0_1_ARVALID = s_axi_CTRL_arvalid;
  assign s_axi_CTRL_0_1_AWADDR = s_axi_CTRL_awaddr[5:0];
  assign s_axi_CTRL_0_1_AWVALID = s_axi_CTRL_awvalid;
  assign s_axi_CTRL_0_1_BREADY = s_axi_CTRL_bready;
  assign s_axi_CTRL_0_1_RREADY = s_axi_CTRL_rready;
  assign s_axi_CTRL_0_1_WDATA = s_axi_CTRL_wdata[31:0];
  assign s_axi_CTRL_0_1_WSTRB = s_axi_CTRL_wstrb[3:0];
  assign s_axi_CTRL_0_1_WVALID = s_axi_CTRL_wvalid;
  assign s_axi_CTRL_arready = s_axi_CTRL_0_1_ARREADY;
  assign s_axi_CTRL_awready = s_axi_CTRL_0_1_AWREADY;
  assign s_axi_CTRL_bresp[1:0] = s_axi_CTRL_0_1_BRESP;
  assign s_axi_CTRL_bvalid = s_axi_CTRL_0_1_BVALID;
  assign s_axi_CTRL_rdata[31:0] = s_axi_CTRL_0_1_RDATA;
  assign s_axi_CTRL_rresp[1:0] = s_axi_CTRL_0_1_RRESP;
  assign s_axi_CTRL_rvalid = s_axi_CTRL_0_1_RVALID;
  assign s_axi_CTRL_wready = s_axi_CTRL_0_1_WREADY;
  bd_0_hls_inst_0 hls_inst
       (.ap_clk(ap_clk_0_1),
        .ap_rst_n(ap_rst_n_0_1),
        .interrupt(hls_inst_interrupt),
        .m_axi_BUS32_ARADDR(hls_inst_m_axi_BUS32_ARADDR),
        .m_axi_BUS32_ARBURST(hls_inst_m_axi_BUS32_ARBURST),
        .m_axi_BUS32_ARCACHE(hls_inst_m_axi_BUS32_ARCACHE),
        .m_axi_BUS32_ARLEN(hls_inst_m_axi_BUS32_ARLEN),
        .m_axi_BUS32_ARLOCK(hls_inst_m_axi_BUS32_ARLOCK),
        .m_axi_BUS32_ARPROT(hls_inst_m_axi_BUS32_ARPROT),
        .m_axi_BUS32_ARQOS(hls_inst_m_axi_BUS32_ARQOS),
        .m_axi_BUS32_ARREADY(hls_inst_m_axi_BUS32_ARREADY),
        .m_axi_BUS32_ARREGION(hls_inst_m_axi_BUS32_ARREGION),
        .m_axi_BUS32_ARSIZE(hls_inst_m_axi_BUS32_ARSIZE),
        .m_axi_BUS32_ARVALID(hls_inst_m_axi_BUS32_ARVALID),
        .m_axi_BUS32_AWADDR(hls_inst_m_axi_BUS32_AWADDR),
        .m_axi_BUS32_AWBURST(hls_inst_m_axi_BUS32_AWBURST),
        .m_axi_BUS32_AWCACHE(hls_inst_m_axi_BUS32_AWCACHE),
        .m_axi_BUS32_AWLEN(hls_inst_m_axi_BUS32_AWLEN),
        .m_axi_BUS32_AWLOCK(hls_inst_m_axi_BUS32_AWLOCK),
        .m_axi_BUS32_AWPROT(hls_inst_m_axi_BUS32_AWPROT),
        .m_axi_BUS32_AWQOS(hls_inst_m_axi_BUS32_AWQOS),
        .m_axi_BUS32_AWREADY(hls_inst_m_axi_BUS32_AWREADY),
        .m_axi_BUS32_AWREGION(hls_inst_m_axi_BUS32_AWREGION),
        .m_axi_BUS32_AWSIZE(hls_inst_m_axi_BUS32_AWSIZE),
        .m_axi_BUS32_AWVALID(hls_inst_m_axi_BUS32_AWVALID),
        .m_axi_BUS32_BREADY(hls_inst_m_axi_BUS32_BREADY),
        .m_axi_BUS32_BRESP(hls_inst_m_axi_BUS32_BRESP),
        .m_axi_BUS32_BVALID(hls_inst_m_axi_BUS32_BVALID),
        .m_axi_BUS32_RDATA(hls_inst_m_axi_BUS32_RDATA),
        .m_axi_BUS32_RLAST(hls_inst_m_axi_BUS32_RLAST),
        .m_axi_BUS32_RREADY(hls_inst_m_axi_BUS32_RREADY),
        .m_axi_BUS32_RRESP(hls_inst_m_axi_BUS32_RRESP),
        .m_axi_BUS32_RVALID(hls_inst_m_axi_BUS32_RVALID),
        .m_axi_BUS32_WDATA(hls_inst_m_axi_BUS32_WDATA),
        .m_axi_BUS32_WLAST(hls_inst_m_axi_BUS32_WLAST),
        .m_axi_BUS32_WREADY(hls_inst_m_axi_BUS32_WREADY),
        .m_axi_BUS32_WSTRB(hls_inst_m_axi_BUS32_WSTRB),
        .m_axi_BUS32_WVALID(hls_inst_m_axi_BUS32_WVALID),
        .m_axi_BUS512_ARADDR(hls_inst_m_axi_BUS512_ARADDR),
        .m_axi_BUS512_ARBURST(hls_inst_m_axi_BUS512_ARBURST),
        .m_axi_BUS512_ARCACHE(hls_inst_m_axi_BUS512_ARCACHE),
        .m_axi_BUS512_ARLEN(hls_inst_m_axi_BUS512_ARLEN),
        .m_axi_BUS512_ARLOCK(hls_inst_m_axi_BUS512_ARLOCK),
        .m_axi_BUS512_ARPROT(hls_inst_m_axi_BUS512_ARPROT),
        .m_axi_BUS512_ARQOS(hls_inst_m_axi_BUS512_ARQOS),
        .m_axi_BUS512_ARREADY(hls_inst_m_axi_BUS512_ARREADY),
        .m_axi_BUS512_ARREGION(hls_inst_m_axi_BUS512_ARREGION),
        .m_axi_BUS512_ARSIZE(hls_inst_m_axi_BUS512_ARSIZE),
        .m_axi_BUS512_ARVALID(hls_inst_m_axi_BUS512_ARVALID),
        .m_axi_BUS512_AWADDR(hls_inst_m_axi_BUS512_AWADDR),
        .m_axi_BUS512_AWBURST(hls_inst_m_axi_BUS512_AWBURST),
        .m_axi_BUS512_AWCACHE(hls_inst_m_axi_BUS512_AWCACHE),
        .m_axi_BUS512_AWLEN(hls_inst_m_axi_BUS512_AWLEN),
        .m_axi_BUS512_AWLOCK(hls_inst_m_axi_BUS512_AWLOCK),
        .m_axi_BUS512_AWPROT(hls_inst_m_axi_BUS512_AWPROT),
        .m_axi_BUS512_AWQOS(hls_inst_m_axi_BUS512_AWQOS),
        .m_axi_BUS512_AWREADY(hls_inst_m_axi_BUS512_AWREADY),
        .m_axi_BUS512_AWREGION(hls_inst_m_axi_BUS512_AWREGION),
        .m_axi_BUS512_AWSIZE(hls_inst_m_axi_BUS512_AWSIZE),
        .m_axi_BUS512_AWVALID(hls_inst_m_axi_BUS512_AWVALID),
        .m_axi_BUS512_BREADY(hls_inst_m_axi_BUS512_BREADY),
        .m_axi_BUS512_BRESP(hls_inst_m_axi_BUS512_BRESP),
        .m_axi_BUS512_BVALID(hls_inst_m_axi_BUS512_BVALID),
        .m_axi_BUS512_RDATA(hls_inst_m_axi_BUS512_RDATA),
        .m_axi_BUS512_RLAST(hls_inst_m_axi_BUS512_RLAST),
        .m_axi_BUS512_RREADY(hls_inst_m_axi_BUS512_RREADY),
        .m_axi_BUS512_RRESP(hls_inst_m_axi_BUS512_RRESP),
        .m_axi_BUS512_RVALID(hls_inst_m_axi_BUS512_RVALID),
        .m_axi_BUS512_WDATA(hls_inst_m_axi_BUS512_WDATA),
        .m_axi_BUS512_WLAST(hls_inst_m_axi_BUS512_WLAST),
        .m_axi_BUS512_WREADY(hls_inst_m_axi_BUS512_WREADY),
        .m_axi_BUS512_WSTRB(hls_inst_m_axi_BUS512_WSTRB),
        .m_axi_BUS512_WVALID(hls_inst_m_axi_BUS512_WVALID),
        .m_axi_DDR512_ARADDR(hls_inst_m_axi_DDR512_ARADDR),
        .m_axi_DDR512_ARBURST(hls_inst_m_axi_DDR512_ARBURST),
        .m_axi_DDR512_ARCACHE(hls_inst_m_axi_DDR512_ARCACHE),
        .m_axi_DDR512_ARLEN(hls_inst_m_axi_DDR512_ARLEN),
        .m_axi_DDR512_ARLOCK(hls_inst_m_axi_DDR512_ARLOCK),
        .m_axi_DDR512_ARPROT(hls_inst_m_axi_DDR512_ARPROT),
        .m_axi_DDR512_ARQOS(hls_inst_m_axi_DDR512_ARQOS),
        .m_axi_DDR512_ARREADY(hls_inst_m_axi_DDR512_ARREADY),
        .m_axi_DDR512_ARREGION(hls_inst_m_axi_DDR512_ARREGION),
        .m_axi_DDR512_ARSIZE(hls_inst_m_axi_DDR512_ARSIZE),
        .m_axi_DDR512_ARVALID(hls_inst_m_axi_DDR512_ARVALID),
        .m_axi_DDR512_AWADDR(hls_inst_m_axi_DDR512_AWADDR),
        .m_axi_DDR512_AWBURST(hls_inst_m_axi_DDR512_AWBURST),
        .m_axi_DDR512_AWCACHE(hls_inst_m_axi_DDR512_AWCACHE),
        .m_axi_DDR512_AWLEN(hls_inst_m_axi_DDR512_AWLEN),
        .m_axi_DDR512_AWLOCK(hls_inst_m_axi_DDR512_AWLOCK),
        .m_axi_DDR512_AWPROT(hls_inst_m_axi_DDR512_AWPROT),
        .m_axi_DDR512_AWQOS(hls_inst_m_axi_DDR512_AWQOS),
        .m_axi_DDR512_AWREADY(hls_inst_m_axi_DDR512_AWREADY),
        .m_axi_DDR512_AWREGION(hls_inst_m_axi_DDR512_AWREGION),
        .m_axi_DDR512_AWSIZE(hls_inst_m_axi_DDR512_AWSIZE),
        .m_axi_DDR512_AWVALID(hls_inst_m_axi_DDR512_AWVALID),
        .m_axi_DDR512_BREADY(hls_inst_m_axi_DDR512_BREADY),
        .m_axi_DDR512_BRESP(hls_inst_m_axi_DDR512_BRESP),
        .m_axi_DDR512_BVALID(hls_inst_m_axi_DDR512_BVALID),
        .m_axi_DDR512_RDATA(hls_inst_m_axi_DDR512_RDATA),
        .m_axi_DDR512_RLAST(hls_inst_m_axi_DDR512_RLAST),
        .m_axi_DDR512_RREADY(hls_inst_m_axi_DDR512_RREADY),
        .m_axi_DDR512_RRESP(hls_inst_m_axi_DDR512_RRESP),
        .m_axi_DDR512_RVALID(hls_inst_m_axi_DDR512_RVALID),
        .m_axi_DDR512_WDATA(hls_inst_m_axi_DDR512_WDATA),
        .m_axi_DDR512_WLAST(hls_inst_m_axi_DDR512_WLAST),
        .m_axi_DDR512_WREADY(hls_inst_m_axi_DDR512_WREADY),
        .m_axi_DDR512_WSTRB(hls_inst_m_axi_DDR512_WSTRB),
        .m_axi_DDR512_WVALID(hls_inst_m_axi_DDR512_WVALID),
        .s_axi_CTRL_ARADDR(s_axi_CTRL_0_1_ARADDR),
        .s_axi_CTRL_ARREADY(s_axi_CTRL_0_1_ARREADY),
        .s_axi_CTRL_ARVALID(s_axi_CTRL_0_1_ARVALID),
        .s_axi_CTRL_AWADDR(s_axi_CTRL_0_1_AWADDR),
        .s_axi_CTRL_AWREADY(s_axi_CTRL_0_1_AWREADY),
        .s_axi_CTRL_AWVALID(s_axi_CTRL_0_1_AWVALID),
        .s_axi_CTRL_BREADY(s_axi_CTRL_0_1_BREADY),
        .s_axi_CTRL_BRESP(s_axi_CTRL_0_1_BRESP),
        .s_axi_CTRL_BVALID(s_axi_CTRL_0_1_BVALID),
        .s_axi_CTRL_RDATA(s_axi_CTRL_0_1_RDATA),
        .s_axi_CTRL_RREADY(s_axi_CTRL_0_1_RREADY),
        .s_axi_CTRL_RRESP(s_axi_CTRL_0_1_RRESP),
        .s_axi_CTRL_RVALID(s_axi_CTRL_0_1_RVALID),
        .s_axi_CTRL_WDATA(s_axi_CTRL_0_1_WDATA),
        .s_axi_CTRL_WREADY(s_axi_CTRL_0_1_WREADY),
        .s_axi_CTRL_WSTRB(s_axi_CTRL_0_1_WSTRB),
        .s_axi_CTRL_WVALID(s_axi_CTRL_0_1_WVALID));
endmodule
