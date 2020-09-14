#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst_n", 1, hls_in, -1, "", "", 1),
	Port_Property("m_axi_IMG_AWVALID", 1, hls_out, 0, "m_axi", "VALID", 1),
	Port_Property("m_axi_IMG_AWREADY", 1, hls_in, 0, "m_axi", "READY", 1),
	Port_Property("m_axi_IMG_AWADDR", 32, hls_out, 0, "m_axi", "ADDR", 1),
	Port_Property("m_axi_IMG_AWID", 1, hls_out, 0, "m_axi", "ID", 1),
	Port_Property("m_axi_IMG_AWLEN", 8, hls_out, 0, "m_axi", "LEN", 1),
	Port_Property("m_axi_IMG_AWSIZE", 3, hls_out, 0, "m_axi", "SIZE", 1),
	Port_Property("m_axi_IMG_AWBURST", 2, hls_out, 0, "m_axi", "BURST", 1),
	Port_Property("m_axi_IMG_AWLOCK", 2, hls_out, 0, "m_axi", "LOCK", 1),
	Port_Property("m_axi_IMG_AWCACHE", 4, hls_out, 0, "m_axi", "CACHE", 1),
	Port_Property("m_axi_IMG_AWPROT", 3, hls_out, 0, "m_axi", "PROT", 1),
	Port_Property("m_axi_IMG_AWQOS", 4, hls_out, 0, "m_axi", "QOS", 1),
	Port_Property("m_axi_IMG_AWREGION", 4, hls_out, 0, "m_axi", "REGION", 1),
	Port_Property("m_axi_IMG_AWUSER", 1, hls_out, 0, "m_axi", "USER", 1),
	Port_Property("m_axi_IMG_WVALID", 1, hls_out, 0, "m_axi", "VALID", 1),
	Port_Property("m_axi_IMG_WREADY", 1, hls_in, 0, "m_axi", "READY", 1),
	Port_Property("m_axi_IMG_WDATA", 32, hls_out, 0, "m_axi", "DATA", 1),
	Port_Property("m_axi_IMG_WSTRB", 4, hls_out, 0, "m_axi", "STRB", 1),
	Port_Property("m_axi_IMG_WLAST", 1, hls_out, 0, "m_axi", "LAST", 1),
	Port_Property("m_axi_IMG_WID", 1, hls_out, 0, "m_axi", "ID", 1),
	Port_Property("m_axi_IMG_WUSER", 1, hls_out, 0, "m_axi", "USER", 1),
	Port_Property("m_axi_IMG_ARVALID", 1, hls_out, 0, "m_axi", "VALID", 1),
	Port_Property("m_axi_IMG_ARREADY", 1, hls_in, 0, "m_axi", "READY", 1),
	Port_Property("m_axi_IMG_ARADDR", 32, hls_out, 0, "m_axi", "ADDR", 1),
	Port_Property("m_axi_IMG_ARID", 1, hls_out, 0, "m_axi", "ID", 1),
	Port_Property("m_axi_IMG_ARLEN", 8, hls_out, 0, "m_axi", "LEN", 1),
	Port_Property("m_axi_IMG_ARSIZE", 3, hls_out, 0, "m_axi", "SIZE", 1),
	Port_Property("m_axi_IMG_ARBURST", 2, hls_out, 0, "m_axi", "BURST", 1),
	Port_Property("m_axi_IMG_ARLOCK", 2, hls_out, 0, "m_axi", "LOCK", 1),
	Port_Property("m_axi_IMG_ARCACHE", 4, hls_out, 0, "m_axi", "CACHE", 1),
	Port_Property("m_axi_IMG_ARPROT", 3, hls_out, 0, "m_axi", "PROT", 1),
	Port_Property("m_axi_IMG_ARQOS", 4, hls_out, 0, "m_axi", "QOS", 1),
	Port_Property("m_axi_IMG_ARREGION", 4, hls_out, 0, "m_axi", "REGION", 1),
	Port_Property("m_axi_IMG_ARUSER", 1, hls_out, 0, "m_axi", "USER", 1),
	Port_Property("m_axi_IMG_RVALID", 1, hls_in, 0, "m_axi", "VALID", 1),
	Port_Property("m_axi_IMG_RREADY", 1, hls_out, 0, "m_axi", "READY", 1),
	Port_Property("m_axi_IMG_RDATA", 32, hls_in, 0, "m_axi", "DATA", 1),
	Port_Property("m_axi_IMG_RLAST", 1, hls_in, 0, "m_axi", "LAST", 1),
	Port_Property("m_axi_IMG_RID", 1, hls_in, 0, "m_axi", "ID", 1),
	Port_Property("m_axi_IMG_RUSER", 1, hls_in, 0, "m_axi", "USER", 1),
	Port_Property("m_axi_IMG_RRESP", 2, hls_in, 0, "m_axi", "RESP", 1),
	Port_Property("m_axi_IMG_BVALID", 1, hls_in, 0, "m_axi", "VALID", 1),
	Port_Property("m_axi_IMG_BREADY", 1, hls_out, 0, "m_axi", "READY", 1),
	Port_Property("m_axi_IMG_BRESP", 2, hls_in, 0, "m_axi", "RESP", 1),
	Port_Property("m_axi_IMG_BID", 1, hls_in, 0, "m_axi", "ID", 1),
	Port_Property("m_axi_IMG_BUSER", 1, hls_in, 0, "m_axi", "USER", 1),
	Port_Property("m_axi_BUS512_AWVALID", 1, hls_out, 1, "m_axi", "VALID", 1),
	Port_Property("m_axi_BUS512_AWREADY", 1, hls_in, 1, "m_axi", "READY", 1),
	Port_Property("m_axi_BUS512_AWADDR", 32, hls_out, 1, "m_axi", "ADDR", 1),
	Port_Property("m_axi_BUS512_AWID", 1, hls_out, 1, "m_axi", "ID", 1),
	Port_Property("m_axi_BUS512_AWLEN", 8, hls_out, 1, "m_axi", "LEN", 1),
	Port_Property("m_axi_BUS512_AWSIZE", 3, hls_out, 1, "m_axi", "SIZE", 1),
	Port_Property("m_axi_BUS512_AWBURST", 2, hls_out, 1, "m_axi", "BURST", 1),
	Port_Property("m_axi_BUS512_AWLOCK", 2, hls_out, 1, "m_axi", "LOCK", 1),
	Port_Property("m_axi_BUS512_AWCACHE", 4, hls_out, 1, "m_axi", "CACHE", 1),
	Port_Property("m_axi_BUS512_AWPROT", 3, hls_out, 1, "m_axi", "PROT", 1),
	Port_Property("m_axi_BUS512_AWQOS", 4, hls_out, 1, "m_axi", "QOS", 1),
	Port_Property("m_axi_BUS512_AWREGION", 4, hls_out, 1, "m_axi", "REGION", 1),
	Port_Property("m_axi_BUS512_AWUSER", 1, hls_out, 1, "m_axi", "USER", 1),
	Port_Property("m_axi_BUS512_WVALID", 1, hls_out, 1, "m_axi", "VALID", 1),
	Port_Property("m_axi_BUS512_WREADY", 1, hls_in, 1, "m_axi", "READY", 1),
	Port_Property("m_axi_BUS512_WDATA", 512, hls_out, 1, "m_axi", "DATA", 1),
	Port_Property("m_axi_BUS512_WSTRB", 64, hls_out, 1, "m_axi", "STRB", 1),
	Port_Property("m_axi_BUS512_WLAST", 1, hls_out, 1, "m_axi", "LAST", 1),
	Port_Property("m_axi_BUS512_WID", 1, hls_out, 1, "m_axi", "ID", 1),
	Port_Property("m_axi_BUS512_WUSER", 1, hls_out, 1, "m_axi", "USER", 1),
	Port_Property("m_axi_BUS512_ARVALID", 1, hls_out, 1, "m_axi", "VALID", 1),
	Port_Property("m_axi_BUS512_ARREADY", 1, hls_in, 1, "m_axi", "READY", 1),
	Port_Property("m_axi_BUS512_ARADDR", 32, hls_out, 1, "m_axi", "ADDR", 1),
	Port_Property("m_axi_BUS512_ARID", 1, hls_out, 1, "m_axi", "ID", 1),
	Port_Property("m_axi_BUS512_ARLEN", 8, hls_out, 1, "m_axi", "LEN", 1),
	Port_Property("m_axi_BUS512_ARSIZE", 3, hls_out, 1, "m_axi", "SIZE", 1),
	Port_Property("m_axi_BUS512_ARBURST", 2, hls_out, 1, "m_axi", "BURST", 1),
	Port_Property("m_axi_BUS512_ARLOCK", 2, hls_out, 1, "m_axi", "LOCK", 1),
	Port_Property("m_axi_BUS512_ARCACHE", 4, hls_out, 1, "m_axi", "CACHE", 1),
	Port_Property("m_axi_BUS512_ARPROT", 3, hls_out, 1, "m_axi", "PROT", 1),
	Port_Property("m_axi_BUS512_ARQOS", 4, hls_out, 1, "m_axi", "QOS", 1),
	Port_Property("m_axi_BUS512_ARREGION", 4, hls_out, 1, "m_axi", "REGION", 1),
	Port_Property("m_axi_BUS512_ARUSER", 1, hls_out, 1, "m_axi", "USER", 1),
	Port_Property("m_axi_BUS512_RVALID", 1, hls_in, 1, "m_axi", "VALID", 1),
	Port_Property("m_axi_BUS512_RREADY", 1, hls_out, 1, "m_axi", "READY", 1),
	Port_Property("m_axi_BUS512_RDATA", 512, hls_in, 1, "m_axi", "DATA", 1),
	Port_Property("m_axi_BUS512_RLAST", 1, hls_in, 1, "m_axi", "LAST", 1),
	Port_Property("m_axi_BUS512_RID", 1, hls_in, 1, "m_axi", "ID", 1),
	Port_Property("m_axi_BUS512_RUSER", 1, hls_in, 1, "m_axi", "USER", 1),
	Port_Property("m_axi_BUS512_RRESP", 2, hls_in, 1, "m_axi", "RESP", 1),
	Port_Property("m_axi_BUS512_BVALID", 1, hls_in, 1, "m_axi", "VALID", 1),
	Port_Property("m_axi_BUS512_BREADY", 1, hls_out, 1, "m_axi", "READY", 1),
	Port_Property("m_axi_BUS512_BRESP", 2, hls_in, 1, "m_axi", "RESP", 1),
	Port_Property("m_axi_BUS512_BID", 1, hls_in, 1, "m_axi", "ID", 1),
	Port_Property("m_axi_BUS512_BUSER", 1, hls_in, 1, "m_axi", "USER", 1),
	Port_Property("m_axi_DDR512_AWVALID", 1, hls_out, 2, "m_axi", "VALID", 1),
	Port_Property("m_axi_DDR512_AWREADY", 1, hls_in, 2, "m_axi", "READY", 1),
	Port_Property("m_axi_DDR512_AWADDR", 32, hls_out, 2, "m_axi", "ADDR", 1),
	Port_Property("m_axi_DDR512_AWID", 1, hls_out, 2, "m_axi", "ID", 1),
	Port_Property("m_axi_DDR512_AWLEN", 8, hls_out, 2, "m_axi", "LEN", 1),
	Port_Property("m_axi_DDR512_AWSIZE", 3, hls_out, 2, "m_axi", "SIZE", 1),
	Port_Property("m_axi_DDR512_AWBURST", 2, hls_out, 2, "m_axi", "BURST", 1),
	Port_Property("m_axi_DDR512_AWLOCK", 2, hls_out, 2, "m_axi", "LOCK", 1),
	Port_Property("m_axi_DDR512_AWCACHE", 4, hls_out, 2, "m_axi", "CACHE", 1),
	Port_Property("m_axi_DDR512_AWPROT", 3, hls_out, 2, "m_axi", "PROT", 1),
	Port_Property("m_axi_DDR512_AWQOS", 4, hls_out, 2, "m_axi", "QOS", 1),
	Port_Property("m_axi_DDR512_AWREGION", 4, hls_out, 2, "m_axi", "REGION", 1),
	Port_Property("m_axi_DDR512_AWUSER", 1, hls_out, 2, "m_axi", "USER", 1),
	Port_Property("m_axi_DDR512_WVALID", 1, hls_out, 2, "m_axi", "VALID", 1),
	Port_Property("m_axi_DDR512_WREADY", 1, hls_in, 2, "m_axi", "READY", 1),
	Port_Property("m_axi_DDR512_WDATA", 512, hls_out, 2, "m_axi", "DATA", 1),
	Port_Property("m_axi_DDR512_WSTRB", 64, hls_out, 2, "m_axi", "STRB", 1),
	Port_Property("m_axi_DDR512_WLAST", 1, hls_out, 2, "m_axi", "LAST", 1),
	Port_Property("m_axi_DDR512_WID", 1, hls_out, 2, "m_axi", "ID", 1),
	Port_Property("m_axi_DDR512_WUSER", 1, hls_out, 2, "m_axi", "USER", 1),
	Port_Property("m_axi_DDR512_ARVALID", 1, hls_out, 2, "m_axi", "VALID", 1),
	Port_Property("m_axi_DDR512_ARREADY", 1, hls_in, 2, "m_axi", "READY", 1),
	Port_Property("m_axi_DDR512_ARADDR", 32, hls_out, 2, "m_axi", "ADDR", 1),
	Port_Property("m_axi_DDR512_ARID", 1, hls_out, 2, "m_axi", "ID", 1),
	Port_Property("m_axi_DDR512_ARLEN", 8, hls_out, 2, "m_axi", "LEN", 1),
	Port_Property("m_axi_DDR512_ARSIZE", 3, hls_out, 2, "m_axi", "SIZE", 1),
	Port_Property("m_axi_DDR512_ARBURST", 2, hls_out, 2, "m_axi", "BURST", 1),
	Port_Property("m_axi_DDR512_ARLOCK", 2, hls_out, 2, "m_axi", "LOCK", 1),
	Port_Property("m_axi_DDR512_ARCACHE", 4, hls_out, 2, "m_axi", "CACHE", 1),
	Port_Property("m_axi_DDR512_ARPROT", 3, hls_out, 2, "m_axi", "PROT", 1),
	Port_Property("m_axi_DDR512_ARQOS", 4, hls_out, 2, "m_axi", "QOS", 1),
	Port_Property("m_axi_DDR512_ARREGION", 4, hls_out, 2, "m_axi", "REGION", 1),
	Port_Property("m_axi_DDR512_ARUSER", 1, hls_out, 2, "m_axi", "USER", 1),
	Port_Property("m_axi_DDR512_RVALID", 1, hls_in, 2, "m_axi", "VALID", 1),
	Port_Property("m_axi_DDR512_RREADY", 1, hls_out, 2, "m_axi", "READY", 1),
	Port_Property("m_axi_DDR512_RDATA", 512, hls_in, 2, "m_axi", "DATA", 1),
	Port_Property("m_axi_DDR512_RLAST", 1, hls_in, 2, "m_axi", "LAST", 1),
	Port_Property("m_axi_DDR512_RID", 1, hls_in, 2, "m_axi", "ID", 1),
	Port_Property("m_axi_DDR512_RUSER", 1, hls_in, 2, "m_axi", "USER", 1),
	Port_Property("m_axi_DDR512_RRESP", 2, hls_in, 2, "m_axi", "RESP", 1),
	Port_Property("m_axi_DDR512_BVALID", 1, hls_in, 2, "m_axi", "VALID", 1),
	Port_Property("m_axi_DDR512_BREADY", 1, hls_out, 2, "m_axi", "READY", 1),
	Port_Property("m_axi_DDR512_BRESP", 2, hls_in, 2, "m_axi", "RESP", 1),
	Port_Property("m_axi_DDR512_BID", 1, hls_in, 2, "m_axi", "ID", 1),
	Port_Property("m_axi_DDR512_BUSER", 1, hls_in, 2, "m_axi", "USER", 1),
	Port_Property("m_axi_BUS32_AWVALID", 1, hls_out, 3, "m_axi", "VALID", 1),
	Port_Property("m_axi_BUS32_AWREADY", 1, hls_in, 3, "m_axi", "READY", 1),
	Port_Property("m_axi_BUS32_AWADDR", 32, hls_out, 3, "m_axi", "ADDR", 1),
	Port_Property("m_axi_BUS32_AWID", 1, hls_out, 3, "m_axi", "ID", 1),
	Port_Property("m_axi_BUS32_AWLEN", 8, hls_out, 3, "m_axi", "LEN", 1),
	Port_Property("m_axi_BUS32_AWSIZE", 3, hls_out, 3, "m_axi", "SIZE", 1),
	Port_Property("m_axi_BUS32_AWBURST", 2, hls_out, 3, "m_axi", "BURST", 1),
	Port_Property("m_axi_BUS32_AWLOCK", 2, hls_out, 3, "m_axi", "LOCK", 1),
	Port_Property("m_axi_BUS32_AWCACHE", 4, hls_out, 3, "m_axi", "CACHE", 1),
	Port_Property("m_axi_BUS32_AWPROT", 3, hls_out, 3, "m_axi", "PROT", 1),
	Port_Property("m_axi_BUS32_AWQOS", 4, hls_out, 3, "m_axi", "QOS", 1),
	Port_Property("m_axi_BUS32_AWREGION", 4, hls_out, 3, "m_axi", "REGION", 1),
	Port_Property("m_axi_BUS32_AWUSER", 1, hls_out, 3, "m_axi", "USER", 1),
	Port_Property("m_axi_BUS32_WVALID", 1, hls_out, 3, "m_axi", "VALID", 1),
	Port_Property("m_axi_BUS32_WREADY", 1, hls_in, 3, "m_axi", "READY", 1),
	Port_Property("m_axi_BUS32_WDATA", 32, hls_out, 3, "m_axi", "DATA", 1),
	Port_Property("m_axi_BUS32_WSTRB", 4, hls_out, 3, "m_axi", "STRB", 1),
	Port_Property("m_axi_BUS32_WLAST", 1, hls_out, 3, "m_axi", "LAST", 1),
	Port_Property("m_axi_BUS32_WID", 1, hls_out, 3, "m_axi", "ID", 1),
	Port_Property("m_axi_BUS32_WUSER", 1, hls_out, 3, "m_axi", "USER", 1),
	Port_Property("m_axi_BUS32_ARVALID", 1, hls_out, 3, "m_axi", "VALID", 1),
	Port_Property("m_axi_BUS32_ARREADY", 1, hls_in, 3, "m_axi", "READY", 1),
	Port_Property("m_axi_BUS32_ARADDR", 32, hls_out, 3, "m_axi", "ADDR", 1),
	Port_Property("m_axi_BUS32_ARID", 1, hls_out, 3, "m_axi", "ID", 1),
	Port_Property("m_axi_BUS32_ARLEN", 8, hls_out, 3, "m_axi", "LEN", 1),
	Port_Property("m_axi_BUS32_ARSIZE", 3, hls_out, 3, "m_axi", "SIZE", 1),
	Port_Property("m_axi_BUS32_ARBURST", 2, hls_out, 3, "m_axi", "BURST", 1),
	Port_Property("m_axi_BUS32_ARLOCK", 2, hls_out, 3, "m_axi", "LOCK", 1),
	Port_Property("m_axi_BUS32_ARCACHE", 4, hls_out, 3, "m_axi", "CACHE", 1),
	Port_Property("m_axi_BUS32_ARPROT", 3, hls_out, 3, "m_axi", "PROT", 1),
	Port_Property("m_axi_BUS32_ARQOS", 4, hls_out, 3, "m_axi", "QOS", 1),
	Port_Property("m_axi_BUS32_ARREGION", 4, hls_out, 3, "m_axi", "REGION", 1),
	Port_Property("m_axi_BUS32_ARUSER", 1, hls_out, 3, "m_axi", "USER", 1),
	Port_Property("m_axi_BUS32_RVALID", 1, hls_in, 3, "m_axi", "VALID", 1),
	Port_Property("m_axi_BUS32_RREADY", 1, hls_out, 3, "m_axi", "READY", 1),
	Port_Property("m_axi_BUS32_RDATA", 32, hls_in, 3, "m_axi", "DATA", 1),
	Port_Property("m_axi_BUS32_RLAST", 1, hls_in, 3, "m_axi", "LAST", 1),
	Port_Property("m_axi_BUS32_RID", 1, hls_in, 3, "m_axi", "ID", 1),
	Port_Property("m_axi_BUS32_RUSER", 1, hls_in, 3, "m_axi", "USER", 1),
	Port_Property("m_axi_BUS32_RRESP", 2, hls_in, 3, "m_axi", "RESP", 1),
	Port_Property("m_axi_BUS32_BVALID", 1, hls_in, 3, "m_axi", "VALID", 1),
	Port_Property("m_axi_BUS32_BREADY", 1, hls_out, 3, "m_axi", "READY", 1),
	Port_Property("m_axi_BUS32_BRESP", 2, hls_in, 3, "m_axi", "RESP", 1),
	Port_Property("m_axi_BUS32_BID", 1, hls_in, 3, "m_axi", "ID", 1),
	Port_Property("m_axi_BUS32_BUSER", 1, hls_in, 3, "m_axi", "USER", 1),
	Port_Property("s_axi_AXILiteS_AWVALID", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_AWREADY", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_AWADDR", 7, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_WVALID", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_WREADY", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_WDATA", 32, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_WSTRB", 4, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_ARVALID", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_ARREADY", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_ARADDR", 7, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_RVALID", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_RREADY", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_RDATA", 32, hls_out, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_RRESP", 2, hls_out, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_BVALID", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_BREADY", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_BRESP", 2, hls_out, -1, "", "", 1),
	Port_Property("interrupt", 1, hls_out, -1, "", "", 1),
};
const char* HLS_Design_Meta::dut_name = "FracNet";