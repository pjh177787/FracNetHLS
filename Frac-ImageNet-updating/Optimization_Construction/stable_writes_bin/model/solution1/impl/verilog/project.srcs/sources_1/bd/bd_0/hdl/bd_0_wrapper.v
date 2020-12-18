//Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2019.2.1 (win64) Build 2729669 Thu Dec  5 04:49:17 MST 2019
//Date        : Sun Dec 13 06:42:35 2020
//Host        : DESKTOP-APERTURE running 64-bit major release  (build 9200)
//Command     : generate_target bd_0_wrapper.bd
//Design      : bd_0_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module bd_0_wrapper
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
  input ap_clk;
  input ap_rst_n;
  output interrupt;
  output [31:0]m_axi_BUS32_araddr;
  output [1:0]m_axi_BUS32_arburst;
  output [3:0]m_axi_BUS32_arcache;
  output [7:0]m_axi_BUS32_arlen;
  output [1:0]m_axi_BUS32_arlock;
  output [2:0]m_axi_BUS32_arprot;
  output [3:0]m_axi_BUS32_arqos;
  input m_axi_BUS32_arready;
  output [3:0]m_axi_BUS32_arregion;
  output [2:0]m_axi_BUS32_arsize;
  output m_axi_BUS32_arvalid;
  output [31:0]m_axi_BUS32_awaddr;
  output [1:0]m_axi_BUS32_awburst;
  output [3:0]m_axi_BUS32_awcache;
  output [7:0]m_axi_BUS32_awlen;
  output [1:0]m_axi_BUS32_awlock;
  output [2:0]m_axi_BUS32_awprot;
  output [3:0]m_axi_BUS32_awqos;
  input m_axi_BUS32_awready;
  output [3:0]m_axi_BUS32_awregion;
  output [2:0]m_axi_BUS32_awsize;
  output m_axi_BUS32_awvalid;
  output m_axi_BUS32_bready;
  input [1:0]m_axi_BUS32_bresp;
  input m_axi_BUS32_bvalid;
  input [31:0]m_axi_BUS32_rdata;
  input m_axi_BUS32_rlast;
  output m_axi_BUS32_rready;
  input [1:0]m_axi_BUS32_rresp;
  input m_axi_BUS32_rvalid;
  output [31:0]m_axi_BUS32_wdata;
  output m_axi_BUS32_wlast;
  input m_axi_BUS32_wready;
  output [3:0]m_axi_BUS32_wstrb;
  output m_axi_BUS32_wvalid;
  output [31:0]m_axi_BUS512_araddr;
  output [1:0]m_axi_BUS512_arburst;
  output [3:0]m_axi_BUS512_arcache;
  output [7:0]m_axi_BUS512_arlen;
  output [1:0]m_axi_BUS512_arlock;
  output [2:0]m_axi_BUS512_arprot;
  output [3:0]m_axi_BUS512_arqos;
  input m_axi_BUS512_arready;
  output [3:0]m_axi_BUS512_arregion;
  output [2:0]m_axi_BUS512_arsize;
  output m_axi_BUS512_arvalid;
  output [31:0]m_axi_BUS512_awaddr;
  output [1:0]m_axi_BUS512_awburst;
  output [3:0]m_axi_BUS512_awcache;
  output [7:0]m_axi_BUS512_awlen;
  output [1:0]m_axi_BUS512_awlock;
  output [2:0]m_axi_BUS512_awprot;
  output [3:0]m_axi_BUS512_awqos;
  input m_axi_BUS512_awready;
  output [3:0]m_axi_BUS512_awregion;
  output [2:0]m_axi_BUS512_awsize;
  output m_axi_BUS512_awvalid;
  output m_axi_BUS512_bready;
  input [1:0]m_axi_BUS512_bresp;
  input m_axi_BUS512_bvalid;
  input [511:0]m_axi_BUS512_rdata;
  input m_axi_BUS512_rlast;
  output m_axi_BUS512_rready;
  input [1:0]m_axi_BUS512_rresp;
  input m_axi_BUS512_rvalid;
  output [511:0]m_axi_BUS512_wdata;
  output m_axi_BUS512_wlast;
  input m_axi_BUS512_wready;
  output [63:0]m_axi_BUS512_wstrb;
  output m_axi_BUS512_wvalid;
  output [31:0]m_axi_DDR512_araddr;
  output [1:0]m_axi_DDR512_arburst;
  output [3:0]m_axi_DDR512_arcache;
  output [7:0]m_axi_DDR512_arlen;
  output [1:0]m_axi_DDR512_arlock;
  output [2:0]m_axi_DDR512_arprot;
  output [3:0]m_axi_DDR512_arqos;
  input m_axi_DDR512_arready;
  output [3:0]m_axi_DDR512_arregion;
  output [2:0]m_axi_DDR512_arsize;
  output m_axi_DDR512_arvalid;
  output [31:0]m_axi_DDR512_awaddr;
  output [1:0]m_axi_DDR512_awburst;
  output [3:0]m_axi_DDR512_awcache;
  output [7:0]m_axi_DDR512_awlen;
  output [1:0]m_axi_DDR512_awlock;
  output [2:0]m_axi_DDR512_awprot;
  output [3:0]m_axi_DDR512_awqos;
  input m_axi_DDR512_awready;
  output [3:0]m_axi_DDR512_awregion;
  output [2:0]m_axi_DDR512_awsize;
  output m_axi_DDR512_awvalid;
  output m_axi_DDR512_bready;
  input [1:0]m_axi_DDR512_bresp;
  input m_axi_DDR512_bvalid;
  input [511:0]m_axi_DDR512_rdata;
  input m_axi_DDR512_rlast;
  output m_axi_DDR512_rready;
  input [1:0]m_axi_DDR512_rresp;
  input m_axi_DDR512_rvalid;
  output [511:0]m_axi_DDR512_wdata;
  output m_axi_DDR512_wlast;
  input m_axi_DDR512_wready;
  output [63:0]m_axi_DDR512_wstrb;
  output m_axi_DDR512_wvalid;
  input [5:0]s_axi_CTRL_araddr;
  output s_axi_CTRL_arready;
  input s_axi_CTRL_arvalid;
  input [5:0]s_axi_CTRL_awaddr;
  output s_axi_CTRL_awready;
  input s_axi_CTRL_awvalid;
  input s_axi_CTRL_bready;
  output [1:0]s_axi_CTRL_bresp;
  output s_axi_CTRL_bvalid;
  output [31:0]s_axi_CTRL_rdata;
  input s_axi_CTRL_rready;
  output [1:0]s_axi_CTRL_rresp;
  output s_axi_CTRL_rvalid;
  input [31:0]s_axi_CTRL_wdata;
  output s_axi_CTRL_wready;
  input [3:0]s_axi_CTRL_wstrb;
  input s_axi_CTRL_wvalid;

  wire ap_clk;
  wire ap_rst_n;
  wire interrupt;
  wire [31:0]m_axi_BUS32_araddr;
  wire [1:0]m_axi_BUS32_arburst;
  wire [3:0]m_axi_BUS32_arcache;
  wire [7:0]m_axi_BUS32_arlen;
  wire [1:0]m_axi_BUS32_arlock;
  wire [2:0]m_axi_BUS32_arprot;
  wire [3:0]m_axi_BUS32_arqos;
  wire m_axi_BUS32_arready;
  wire [3:0]m_axi_BUS32_arregion;
  wire [2:0]m_axi_BUS32_arsize;
  wire m_axi_BUS32_arvalid;
  wire [31:0]m_axi_BUS32_awaddr;
  wire [1:0]m_axi_BUS32_awburst;
  wire [3:0]m_axi_BUS32_awcache;
  wire [7:0]m_axi_BUS32_awlen;
  wire [1:0]m_axi_BUS32_awlock;
  wire [2:0]m_axi_BUS32_awprot;
  wire [3:0]m_axi_BUS32_awqos;
  wire m_axi_BUS32_awready;
  wire [3:0]m_axi_BUS32_awregion;
  wire [2:0]m_axi_BUS32_awsize;
  wire m_axi_BUS32_awvalid;
  wire m_axi_BUS32_bready;
  wire [1:0]m_axi_BUS32_bresp;
  wire m_axi_BUS32_bvalid;
  wire [31:0]m_axi_BUS32_rdata;
  wire m_axi_BUS32_rlast;
  wire m_axi_BUS32_rready;
  wire [1:0]m_axi_BUS32_rresp;
  wire m_axi_BUS32_rvalid;
  wire [31:0]m_axi_BUS32_wdata;
  wire m_axi_BUS32_wlast;
  wire m_axi_BUS32_wready;
  wire [3:0]m_axi_BUS32_wstrb;
  wire m_axi_BUS32_wvalid;
  wire [31:0]m_axi_BUS512_araddr;
  wire [1:0]m_axi_BUS512_arburst;
  wire [3:0]m_axi_BUS512_arcache;
  wire [7:0]m_axi_BUS512_arlen;
  wire [1:0]m_axi_BUS512_arlock;
  wire [2:0]m_axi_BUS512_arprot;
  wire [3:0]m_axi_BUS512_arqos;
  wire m_axi_BUS512_arready;
  wire [3:0]m_axi_BUS512_arregion;
  wire [2:0]m_axi_BUS512_arsize;
  wire m_axi_BUS512_arvalid;
  wire [31:0]m_axi_BUS512_awaddr;
  wire [1:0]m_axi_BUS512_awburst;
  wire [3:0]m_axi_BUS512_awcache;
  wire [7:0]m_axi_BUS512_awlen;
  wire [1:0]m_axi_BUS512_awlock;
  wire [2:0]m_axi_BUS512_awprot;
  wire [3:0]m_axi_BUS512_awqos;
  wire m_axi_BUS512_awready;
  wire [3:0]m_axi_BUS512_awregion;
  wire [2:0]m_axi_BUS512_awsize;
  wire m_axi_BUS512_awvalid;
  wire m_axi_BUS512_bready;
  wire [1:0]m_axi_BUS512_bresp;
  wire m_axi_BUS512_bvalid;
  wire [511:0]m_axi_BUS512_rdata;
  wire m_axi_BUS512_rlast;
  wire m_axi_BUS512_rready;
  wire [1:0]m_axi_BUS512_rresp;
  wire m_axi_BUS512_rvalid;
  wire [511:0]m_axi_BUS512_wdata;
  wire m_axi_BUS512_wlast;
  wire m_axi_BUS512_wready;
  wire [63:0]m_axi_BUS512_wstrb;
  wire m_axi_BUS512_wvalid;
  wire [31:0]m_axi_DDR512_araddr;
  wire [1:0]m_axi_DDR512_arburst;
  wire [3:0]m_axi_DDR512_arcache;
  wire [7:0]m_axi_DDR512_arlen;
  wire [1:0]m_axi_DDR512_arlock;
  wire [2:0]m_axi_DDR512_arprot;
  wire [3:0]m_axi_DDR512_arqos;
  wire m_axi_DDR512_arready;
  wire [3:0]m_axi_DDR512_arregion;
  wire [2:0]m_axi_DDR512_arsize;
  wire m_axi_DDR512_arvalid;
  wire [31:0]m_axi_DDR512_awaddr;
  wire [1:0]m_axi_DDR512_awburst;
  wire [3:0]m_axi_DDR512_awcache;
  wire [7:0]m_axi_DDR512_awlen;
  wire [1:0]m_axi_DDR512_awlock;
  wire [2:0]m_axi_DDR512_awprot;
  wire [3:0]m_axi_DDR512_awqos;
  wire m_axi_DDR512_awready;
  wire [3:0]m_axi_DDR512_awregion;
  wire [2:0]m_axi_DDR512_awsize;
  wire m_axi_DDR512_awvalid;
  wire m_axi_DDR512_bready;
  wire [1:0]m_axi_DDR512_bresp;
  wire m_axi_DDR512_bvalid;
  wire [511:0]m_axi_DDR512_rdata;
  wire m_axi_DDR512_rlast;
  wire m_axi_DDR512_rready;
  wire [1:0]m_axi_DDR512_rresp;
  wire m_axi_DDR512_rvalid;
  wire [511:0]m_axi_DDR512_wdata;
  wire m_axi_DDR512_wlast;
  wire m_axi_DDR512_wready;
  wire [63:0]m_axi_DDR512_wstrb;
  wire m_axi_DDR512_wvalid;
  wire [5:0]s_axi_CTRL_araddr;
  wire s_axi_CTRL_arready;
  wire s_axi_CTRL_arvalid;
  wire [5:0]s_axi_CTRL_awaddr;
  wire s_axi_CTRL_awready;
  wire s_axi_CTRL_awvalid;
  wire s_axi_CTRL_bready;
  wire [1:0]s_axi_CTRL_bresp;
  wire s_axi_CTRL_bvalid;
  wire [31:0]s_axi_CTRL_rdata;
  wire s_axi_CTRL_rready;
  wire [1:0]s_axi_CTRL_rresp;
  wire s_axi_CTRL_rvalid;
  wire [31:0]s_axi_CTRL_wdata;
  wire s_axi_CTRL_wready;
  wire [3:0]s_axi_CTRL_wstrb;
  wire s_axi_CTRL_wvalid;

  bd_0 bd_0_i
       (.ap_clk(ap_clk),
        .ap_rst_n(ap_rst_n),
        .interrupt(interrupt),
        .m_axi_BUS32_araddr(m_axi_BUS32_araddr),
        .m_axi_BUS32_arburst(m_axi_BUS32_arburst),
        .m_axi_BUS32_arcache(m_axi_BUS32_arcache),
        .m_axi_BUS32_arlen(m_axi_BUS32_arlen),
        .m_axi_BUS32_arlock(m_axi_BUS32_arlock),
        .m_axi_BUS32_arprot(m_axi_BUS32_arprot),
        .m_axi_BUS32_arqos(m_axi_BUS32_arqos),
        .m_axi_BUS32_arready(m_axi_BUS32_arready),
        .m_axi_BUS32_arregion(m_axi_BUS32_arregion),
        .m_axi_BUS32_arsize(m_axi_BUS32_arsize),
        .m_axi_BUS32_arvalid(m_axi_BUS32_arvalid),
        .m_axi_BUS32_awaddr(m_axi_BUS32_awaddr),
        .m_axi_BUS32_awburst(m_axi_BUS32_awburst),
        .m_axi_BUS32_awcache(m_axi_BUS32_awcache),
        .m_axi_BUS32_awlen(m_axi_BUS32_awlen),
        .m_axi_BUS32_awlock(m_axi_BUS32_awlock),
        .m_axi_BUS32_awprot(m_axi_BUS32_awprot),
        .m_axi_BUS32_awqos(m_axi_BUS32_awqos),
        .m_axi_BUS32_awready(m_axi_BUS32_awready),
        .m_axi_BUS32_awregion(m_axi_BUS32_awregion),
        .m_axi_BUS32_awsize(m_axi_BUS32_awsize),
        .m_axi_BUS32_awvalid(m_axi_BUS32_awvalid),
        .m_axi_BUS32_bready(m_axi_BUS32_bready),
        .m_axi_BUS32_bresp(m_axi_BUS32_bresp),
        .m_axi_BUS32_bvalid(m_axi_BUS32_bvalid),
        .m_axi_BUS32_rdata(m_axi_BUS32_rdata),
        .m_axi_BUS32_rlast(m_axi_BUS32_rlast),
        .m_axi_BUS32_rready(m_axi_BUS32_rready),
        .m_axi_BUS32_rresp(m_axi_BUS32_rresp),
        .m_axi_BUS32_rvalid(m_axi_BUS32_rvalid),
        .m_axi_BUS32_wdata(m_axi_BUS32_wdata),
        .m_axi_BUS32_wlast(m_axi_BUS32_wlast),
        .m_axi_BUS32_wready(m_axi_BUS32_wready),
        .m_axi_BUS32_wstrb(m_axi_BUS32_wstrb),
        .m_axi_BUS32_wvalid(m_axi_BUS32_wvalid),
        .m_axi_BUS512_araddr(m_axi_BUS512_araddr),
        .m_axi_BUS512_arburst(m_axi_BUS512_arburst),
        .m_axi_BUS512_arcache(m_axi_BUS512_arcache),
        .m_axi_BUS512_arlen(m_axi_BUS512_arlen),
        .m_axi_BUS512_arlock(m_axi_BUS512_arlock),
        .m_axi_BUS512_arprot(m_axi_BUS512_arprot),
        .m_axi_BUS512_arqos(m_axi_BUS512_arqos),
        .m_axi_BUS512_arready(m_axi_BUS512_arready),
        .m_axi_BUS512_arregion(m_axi_BUS512_arregion),
        .m_axi_BUS512_arsize(m_axi_BUS512_arsize),
        .m_axi_BUS512_arvalid(m_axi_BUS512_arvalid),
        .m_axi_BUS512_awaddr(m_axi_BUS512_awaddr),
        .m_axi_BUS512_awburst(m_axi_BUS512_awburst),
        .m_axi_BUS512_awcache(m_axi_BUS512_awcache),
        .m_axi_BUS512_awlen(m_axi_BUS512_awlen),
        .m_axi_BUS512_awlock(m_axi_BUS512_awlock),
        .m_axi_BUS512_awprot(m_axi_BUS512_awprot),
        .m_axi_BUS512_awqos(m_axi_BUS512_awqos),
        .m_axi_BUS512_awready(m_axi_BUS512_awready),
        .m_axi_BUS512_awregion(m_axi_BUS512_awregion),
        .m_axi_BUS512_awsize(m_axi_BUS512_awsize),
        .m_axi_BUS512_awvalid(m_axi_BUS512_awvalid),
        .m_axi_BUS512_bready(m_axi_BUS512_bready),
        .m_axi_BUS512_bresp(m_axi_BUS512_bresp),
        .m_axi_BUS512_bvalid(m_axi_BUS512_bvalid),
        .m_axi_BUS512_rdata(m_axi_BUS512_rdata),
        .m_axi_BUS512_rlast(m_axi_BUS512_rlast),
        .m_axi_BUS512_rready(m_axi_BUS512_rready),
        .m_axi_BUS512_rresp(m_axi_BUS512_rresp),
        .m_axi_BUS512_rvalid(m_axi_BUS512_rvalid),
        .m_axi_BUS512_wdata(m_axi_BUS512_wdata),
        .m_axi_BUS512_wlast(m_axi_BUS512_wlast),
        .m_axi_BUS512_wready(m_axi_BUS512_wready),
        .m_axi_BUS512_wstrb(m_axi_BUS512_wstrb),
        .m_axi_BUS512_wvalid(m_axi_BUS512_wvalid),
        .m_axi_DDR512_araddr(m_axi_DDR512_araddr),
        .m_axi_DDR512_arburst(m_axi_DDR512_arburst),
        .m_axi_DDR512_arcache(m_axi_DDR512_arcache),
        .m_axi_DDR512_arlen(m_axi_DDR512_arlen),
        .m_axi_DDR512_arlock(m_axi_DDR512_arlock),
        .m_axi_DDR512_arprot(m_axi_DDR512_arprot),
        .m_axi_DDR512_arqos(m_axi_DDR512_arqos),
        .m_axi_DDR512_arready(m_axi_DDR512_arready),
        .m_axi_DDR512_arregion(m_axi_DDR512_arregion),
        .m_axi_DDR512_arsize(m_axi_DDR512_arsize),
        .m_axi_DDR512_arvalid(m_axi_DDR512_arvalid),
        .m_axi_DDR512_awaddr(m_axi_DDR512_awaddr),
        .m_axi_DDR512_awburst(m_axi_DDR512_awburst),
        .m_axi_DDR512_awcache(m_axi_DDR512_awcache),
        .m_axi_DDR512_awlen(m_axi_DDR512_awlen),
        .m_axi_DDR512_awlock(m_axi_DDR512_awlock),
        .m_axi_DDR512_awprot(m_axi_DDR512_awprot),
        .m_axi_DDR512_awqos(m_axi_DDR512_awqos),
        .m_axi_DDR512_awready(m_axi_DDR512_awready),
        .m_axi_DDR512_awregion(m_axi_DDR512_awregion),
        .m_axi_DDR512_awsize(m_axi_DDR512_awsize),
        .m_axi_DDR512_awvalid(m_axi_DDR512_awvalid),
        .m_axi_DDR512_bready(m_axi_DDR512_bready),
        .m_axi_DDR512_bresp(m_axi_DDR512_bresp),
        .m_axi_DDR512_bvalid(m_axi_DDR512_bvalid),
        .m_axi_DDR512_rdata(m_axi_DDR512_rdata),
        .m_axi_DDR512_rlast(m_axi_DDR512_rlast),
        .m_axi_DDR512_rready(m_axi_DDR512_rready),
        .m_axi_DDR512_rresp(m_axi_DDR512_rresp),
        .m_axi_DDR512_rvalid(m_axi_DDR512_rvalid),
        .m_axi_DDR512_wdata(m_axi_DDR512_wdata),
        .m_axi_DDR512_wlast(m_axi_DDR512_wlast),
        .m_axi_DDR512_wready(m_axi_DDR512_wready),
        .m_axi_DDR512_wstrb(m_axi_DDR512_wstrb),
        .m_axi_DDR512_wvalid(m_axi_DDR512_wvalid),
        .s_axi_CTRL_araddr(s_axi_CTRL_araddr),
        .s_axi_CTRL_arready(s_axi_CTRL_arready),
        .s_axi_CTRL_arvalid(s_axi_CTRL_arvalid),
        .s_axi_CTRL_awaddr(s_axi_CTRL_awaddr),
        .s_axi_CTRL_awready(s_axi_CTRL_awready),
        .s_axi_CTRL_awvalid(s_axi_CTRL_awvalid),
        .s_axi_CTRL_bready(s_axi_CTRL_bready),
        .s_axi_CTRL_bresp(s_axi_CTRL_bresp),
        .s_axi_CTRL_bvalid(s_axi_CTRL_bvalid),
        .s_axi_CTRL_rdata(s_axi_CTRL_rdata),
        .s_axi_CTRL_rready(s_axi_CTRL_rready),
        .s_axi_CTRL_rresp(s_axi_CTRL_rresp),
        .s_axi_CTRL_rvalid(s_axi_CTRL_rvalid),
        .s_axi_CTRL_wdata(s_axi_CTRL_wdata),
        .s_axi_CTRL_wready(s_axi_CTRL_wready),
        .s_axi_CTRL_wstrb(s_axi_CTRL_wstrb),
        .s_axi_CTRL_wvalid(s_axi_CTRL_wvalid));
endmodule
