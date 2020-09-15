set moduleName FracNet
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {FracNet}
set C_modelType { void 0 }
set C_modelArgList {
	{ IMG int 16 regular {axi_master 0}  }
	{ BUS512 int 512 regular {axi_master 0}  }
	{ DDR512 int 512 regular {axi_master 2}  }
	{ BUS32 float 32 regular {axi_master 2}  }
	{ image_thermo_V int 32 regular {axi_slave 0}  }
	{ conv_weight_1x1_all_V int 32 regular {axi_slave 0}  }
	{ conv_weight_3x3_all_V int 32 regular {axi_slave 0}  }
	{ weights_all_V int 32 regular {axi_slave 0}  }
	{ linear_weight_all_V int 32 regular {axi_slave 0}  }
	{ linear_bias_all_V int 32 regular {axi_slave 0}  }
	{ DDR_buff_merge_V int 32 regular {axi_slave 0}  }
	{ out_r int 32 regular {axi_slave 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "IMG", "interface" : "axi_master", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "image_thermo.V","cData": "uint16","bit_use": { "low": 0,"up": 15},"offset": { "type": "dynamic","port_name": "image_thermo_V","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 306455,"step" : 1}]}]}]} , 
 	{ "Name" : "BUS512", "interface" : "axi_master", "bitwidth" : 512, "direction" : "READONLY", "bitSlice":[{"low":0,"up":511,"cElement": [{"cName": "conv_weight_1x1_all.V","cData": "uint512","bit_use": { "low": 0,"up": 511},"offset": { "type": "dynamic","port_name": "conv_weight_1x1_all_V","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 999,"step" : 1}]},{"cName": "conv_weight_3x3_all.V","cData": "uint512","bit_use": { "low": 0,"up": 511},"offset": { "type": "dynamic","port_name": "conv_weight_3x3_all_V","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 999,"step" : 1},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]},{"cName": "weights_all.V","cData": "uint512","bit_use": { "low": 0,"up": 511},"offset": { "type": "dynamic","port_name": "weights_all_V","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 9999,"step" : 1}]},{"cName": "linear_weight_all.V","cData": "uint512","bit_use": { "low": 0,"up": 511},"offset": { "type": "dynamic","port_name": "linear_weight_all_V","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 15999,"step" : 1},{"low" : 0,"up" : 1,"step" : 1}]},{"cName": "linear_bias_all.V","cData": "uint512","bit_use": { "low": 0,"up": 511},"offset": { "type": "dynamic","port_name": "linear_bias_all_V","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 99,"step" : 1}]}]}]} , 
 	{ "Name" : "DDR512", "interface" : "axi_master", "bitwidth" : 512, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":511,"cElement": [{"cName": "DDR_buff_merge.V","cData": "uint512","bit_use": { "low": 0,"up": 511},"offset": { "type": "dynamic","port_name": "DDR_buff_merge_V","bundle": "AXILiteS"},"direction": "READWRITE","cArray": [{"low" : 0,"up" : 861183,"step" : 1}]}]}]} , 
 	{ "Name" : "BUS32", "interface" : "axi_master", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out","cData": "float","bit_use": { "low": 0,"up": 31},"offset": { "type": "dynamic","port_name": "out_r","bundle": "AXILiteS"},"direction": "READWRITE","cArray": [{"low" : 0,"up" : 999,"step" : 1}]}]}]} , 
 	{ "Name" : "image_thermo_V", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":16}, "offset_end" : {"in":23}} , 
 	{ "Name" : "conv_weight_1x1_all_V", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":24}, "offset_end" : {"in":31}} , 
 	{ "Name" : "conv_weight_3x3_all_V", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":32}, "offset_end" : {"in":39}} , 
 	{ "Name" : "weights_all_V", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":40}, "offset_end" : {"in":47}} , 
 	{ "Name" : "linear_weight_all_V", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":48}, "offset_end" : {"in":55}} , 
 	{ "Name" : "linear_bias_all_V", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":56}, "offset_end" : {"in":63}} , 
 	{ "Name" : "DDR_buff_merge_V", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":64}, "offset_end" : {"in":71}} , 
 	{ "Name" : "out_r", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":72}, "offset_end" : {"in":79}} ]}
# RTL Port declarations: 
set portNum 200
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ m_axi_IMG_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_IMG_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_IMG_AWADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_IMG_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_IMG_AWLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_IMG_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_IMG_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_IMG_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_IMG_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_IMG_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_IMG_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_IMG_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_IMG_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_IMG_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_IMG_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_IMG_WDATA sc_out sc_lv 32 signal 0 } 
	{ m_axi_IMG_WSTRB sc_out sc_lv 4 signal 0 } 
	{ m_axi_IMG_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_IMG_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_IMG_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_IMG_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_IMG_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_IMG_ARADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_IMG_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_IMG_ARLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_IMG_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_IMG_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_IMG_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_IMG_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_IMG_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_IMG_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_IMG_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_IMG_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_IMG_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_IMG_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_IMG_RDATA sc_in sc_lv 32 signal 0 } 
	{ m_axi_IMG_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_IMG_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_IMG_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_IMG_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_IMG_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_IMG_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_IMG_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_IMG_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_IMG_BUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_BUS512_AWVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_BUS512_AWREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_BUS512_AWADDR sc_out sc_lv 32 signal 1 } 
	{ m_axi_BUS512_AWID sc_out sc_lv 1 signal 1 } 
	{ m_axi_BUS512_AWLEN sc_out sc_lv 8 signal 1 } 
	{ m_axi_BUS512_AWSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_BUS512_AWBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_BUS512_AWLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_BUS512_AWCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_BUS512_AWPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_BUS512_AWQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_BUS512_AWREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_BUS512_AWUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_BUS512_WVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_BUS512_WREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_BUS512_WDATA sc_out sc_lv 512 signal 1 } 
	{ m_axi_BUS512_WSTRB sc_out sc_lv 64 signal 1 } 
	{ m_axi_BUS512_WLAST sc_out sc_logic 1 signal 1 } 
	{ m_axi_BUS512_WID sc_out sc_lv 1 signal 1 } 
	{ m_axi_BUS512_WUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_BUS512_ARVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_BUS512_ARREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_BUS512_ARADDR sc_out sc_lv 32 signal 1 } 
	{ m_axi_BUS512_ARID sc_out sc_lv 1 signal 1 } 
	{ m_axi_BUS512_ARLEN sc_out sc_lv 8 signal 1 } 
	{ m_axi_BUS512_ARSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_BUS512_ARBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_BUS512_ARLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_BUS512_ARCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_BUS512_ARPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_BUS512_ARQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_BUS512_ARREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_BUS512_ARUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_BUS512_RVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_BUS512_RREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_BUS512_RDATA sc_in sc_lv 512 signal 1 } 
	{ m_axi_BUS512_RLAST sc_in sc_logic 1 signal 1 } 
	{ m_axi_BUS512_RID sc_in sc_lv 1 signal 1 } 
	{ m_axi_BUS512_RUSER sc_in sc_lv 1 signal 1 } 
	{ m_axi_BUS512_RRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_BUS512_BVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_BUS512_BREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_BUS512_BRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_BUS512_BID sc_in sc_lv 1 signal 1 } 
	{ m_axi_BUS512_BUSER sc_in sc_lv 1 signal 1 } 
	{ m_axi_DDR512_AWVALID sc_out sc_logic 1 signal 2 } 
	{ m_axi_DDR512_AWREADY sc_in sc_logic 1 signal 2 } 
	{ m_axi_DDR512_AWADDR sc_out sc_lv 32 signal 2 } 
	{ m_axi_DDR512_AWID sc_out sc_lv 1 signal 2 } 
	{ m_axi_DDR512_AWLEN sc_out sc_lv 8 signal 2 } 
	{ m_axi_DDR512_AWSIZE sc_out sc_lv 3 signal 2 } 
	{ m_axi_DDR512_AWBURST sc_out sc_lv 2 signal 2 } 
	{ m_axi_DDR512_AWLOCK sc_out sc_lv 2 signal 2 } 
	{ m_axi_DDR512_AWCACHE sc_out sc_lv 4 signal 2 } 
	{ m_axi_DDR512_AWPROT sc_out sc_lv 3 signal 2 } 
	{ m_axi_DDR512_AWQOS sc_out sc_lv 4 signal 2 } 
	{ m_axi_DDR512_AWREGION sc_out sc_lv 4 signal 2 } 
	{ m_axi_DDR512_AWUSER sc_out sc_lv 1 signal 2 } 
	{ m_axi_DDR512_WVALID sc_out sc_logic 1 signal 2 } 
	{ m_axi_DDR512_WREADY sc_in sc_logic 1 signal 2 } 
	{ m_axi_DDR512_WDATA sc_out sc_lv 512 signal 2 } 
	{ m_axi_DDR512_WSTRB sc_out sc_lv 64 signal 2 } 
	{ m_axi_DDR512_WLAST sc_out sc_logic 1 signal 2 } 
	{ m_axi_DDR512_WID sc_out sc_lv 1 signal 2 } 
	{ m_axi_DDR512_WUSER sc_out sc_lv 1 signal 2 } 
	{ m_axi_DDR512_ARVALID sc_out sc_logic 1 signal 2 } 
	{ m_axi_DDR512_ARREADY sc_in sc_logic 1 signal 2 } 
	{ m_axi_DDR512_ARADDR sc_out sc_lv 32 signal 2 } 
	{ m_axi_DDR512_ARID sc_out sc_lv 1 signal 2 } 
	{ m_axi_DDR512_ARLEN sc_out sc_lv 8 signal 2 } 
	{ m_axi_DDR512_ARSIZE sc_out sc_lv 3 signal 2 } 
	{ m_axi_DDR512_ARBURST sc_out sc_lv 2 signal 2 } 
	{ m_axi_DDR512_ARLOCK sc_out sc_lv 2 signal 2 } 
	{ m_axi_DDR512_ARCACHE sc_out sc_lv 4 signal 2 } 
	{ m_axi_DDR512_ARPROT sc_out sc_lv 3 signal 2 } 
	{ m_axi_DDR512_ARQOS sc_out sc_lv 4 signal 2 } 
	{ m_axi_DDR512_ARREGION sc_out sc_lv 4 signal 2 } 
	{ m_axi_DDR512_ARUSER sc_out sc_lv 1 signal 2 } 
	{ m_axi_DDR512_RVALID sc_in sc_logic 1 signal 2 } 
	{ m_axi_DDR512_RREADY sc_out sc_logic 1 signal 2 } 
	{ m_axi_DDR512_RDATA sc_in sc_lv 512 signal 2 } 
	{ m_axi_DDR512_RLAST sc_in sc_logic 1 signal 2 } 
	{ m_axi_DDR512_RID sc_in sc_lv 1 signal 2 } 
	{ m_axi_DDR512_RUSER sc_in sc_lv 1 signal 2 } 
	{ m_axi_DDR512_RRESP sc_in sc_lv 2 signal 2 } 
	{ m_axi_DDR512_BVALID sc_in sc_logic 1 signal 2 } 
	{ m_axi_DDR512_BREADY sc_out sc_logic 1 signal 2 } 
	{ m_axi_DDR512_BRESP sc_in sc_lv 2 signal 2 } 
	{ m_axi_DDR512_BID sc_in sc_lv 1 signal 2 } 
	{ m_axi_DDR512_BUSER sc_in sc_lv 1 signal 2 } 
	{ m_axi_BUS32_AWVALID sc_out sc_logic 1 signal 3 } 
	{ m_axi_BUS32_AWREADY sc_in sc_logic 1 signal 3 } 
	{ m_axi_BUS32_AWADDR sc_out sc_lv 32 signal 3 } 
	{ m_axi_BUS32_AWID sc_out sc_lv 1 signal 3 } 
	{ m_axi_BUS32_AWLEN sc_out sc_lv 8 signal 3 } 
	{ m_axi_BUS32_AWSIZE sc_out sc_lv 3 signal 3 } 
	{ m_axi_BUS32_AWBURST sc_out sc_lv 2 signal 3 } 
	{ m_axi_BUS32_AWLOCK sc_out sc_lv 2 signal 3 } 
	{ m_axi_BUS32_AWCACHE sc_out sc_lv 4 signal 3 } 
	{ m_axi_BUS32_AWPROT sc_out sc_lv 3 signal 3 } 
	{ m_axi_BUS32_AWQOS sc_out sc_lv 4 signal 3 } 
	{ m_axi_BUS32_AWREGION sc_out sc_lv 4 signal 3 } 
	{ m_axi_BUS32_AWUSER sc_out sc_lv 1 signal 3 } 
	{ m_axi_BUS32_WVALID sc_out sc_logic 1 signal 3 } 
	{ m_axi_BUS32_WREADY sc_in sc_logic 1 signal 3 } 
	{ m_axi_BUS32_WDATA sc_out sc_lv 32 signal 3 } 
	{ m_axi_BUS32_WSTRB sc_out sc_lv 4 signal 3 } 
	{ m_axi_BUS32_WLAST sc_out sc_logic 1 signal 3 } 
	{ m_axi_BUS32_WID sc_out sc_lv 1 signal 3 } 
	{ m_axi_BUS32_WUSER sc_out sc_lv 1 signal 3 } 
	{ m_axi_BUS32_ARVALID sc_out sc_logic 1 signal 3 } 
	{ m_axi_BUS32_ARREADY sc_in sc_logic 1 signal 3 } 
	{ m_axi_BUS32_ARADDR sc_out sc_lv 32 signal 3 } 
	{ m_axi_BUS32_ARID sc_out sc_lv 1 signal 3 } 
	{ m_axi_BUS32_ARLEN sc_out sc_lv 8 signal 3 } 
	{ m_axi_BUS32_ARSIZE sc_out sc_lv 3 signal 3 } 
	{ m_axi_BUS32_ARBURST sc_out sc_lv 2 signal 3 } 
	{ m_axi_BUS32_ARLOCK sc_out sc_lv 2 signal 3 } 
	{ m_axi_BUS32_ARCACHE sc_out sc_lv 4 signal 3 } 
	{ m_axi_BUS32_ARPROT sc_out sc_lv 3 signal 3 } 
	{ m_axi_BUS32_ARQOS sc_out sc_lv 4 signal 3 } 
	{ m_axi_BUS32_ARREGION sc_out sc_lv 4 signal 3 } 
	{ m_axi_BUS32_ARUSER sc_out sc_lv 1 signal 3 } 
	{ m_axi_BUS32_RVALID sc_in sc_logic 1 signal 3 } 
	{ m_axi_BUS32_RREADY sc_out sc_logic 1 signal 3 } 
	{ m_axi_BUS32_RDATA sc_in sc_lv 32 signal 3 } 
	{ m_axi_BUS32_RLAST sc_in sc_logic 1 signal 3 } 
	{ m_axi_BUS32_RID sc_in sc_lv 1 signal 3 } 
	{ m_axi_BUS32_RUSER sc_in sc_lv 1 signal 3 } 
	{ m_axi_BUS32_RRESP sc_in sc_lv 2 signal 3 } 
	{ m_axi_BUS32_BVALID sc_in sc_logic 1 signal 3 } 
	{ m_axi_BUS32_BREADY sc_out sc_logic 1 signal 3 } 
	{ m_axi_BUS32_BRESP sc_in sc_lv 2 signal 3 } 
	{ m_axi_BUS32_BID sc_in sc_lv 1 signal 3 } 
	{ m_axi_BUS32_BUSER sc_in sc_lv 1 signal 3 } 
	{ s_axi_AXILiteS_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_AWADDR sc_in sc_lv 7 signal -1 } 
	{ s_axi_AXILiteS_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_AXILiteS_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_AXILiteS_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_ARADDR sc_in sc_lv 7 signal -1 } 
	{ s_axi_AXILiteS_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_AXILiteS_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_AXILiteS_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_AXILiteS_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWADDR" },"address":[{"name":"FracNet","role":"start","value":"0","valid_bit":"0"},{"name":"FracNet","role":"continue","value":"0","valid_bit":"4"},{"name":"FracNet","role":"auto_start","value":"0","valid_bit":"7"},{"name":"image_thermo_V","role":"data","value":"16"},{"name":"conv_weight_1x1_all_V","role":"data","value":"24"},{"name":"conv_weight_3x3_all_V","role":"data","value":"32"},{"name":"weights_all_V","role":"data","value":"40"},{"name":"linear_weight_all_V","role":"data","value":"48"},{"name":"linear_bias_all_V","role":"data","value":"56"},{"name":"DDR_buff_merge_V","role":"data","value":"64"},{"name":"out_r","role":"data","value":"72"}] },
	{ "name": "s_axi_AXILiteS_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWVALID" } },
	{ "name": "s_axi_AXILiteS_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWREADY" } },
	{ "name": "s_axi_AXILiteS_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WVALID" } },
	{ "name": "s_axi_AXILiteS_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WREADY" } },
	{ "name": "s_axi_AXILiteS_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WDATA" } },
	{ "name": "s_axi_AXILiteS_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WSTRB" } },
	{ "name": "s_axi_AXILiteS_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARADDR" },"address":[{"name":"FracNet","role":"start","value":"0","valid_bit":"0"},{"name":"FracNet","role":"done","value":"0","valid_bit":"1"},{"name":"FracNet","role":"idle","value":"0","valid_bit":"2"},{"name":"FracNet","role":"ready","value":"0","valid_bit":"3"},{"name":"FracNet","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_AXILiteS_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARVALID" } },
	{ "name": "s_axi_AXILiteS_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARREADY" } },
	{ "name": "s_axi_AXILiteS_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RVALID" } },
	{ "name": "s_axi_AXILiteS_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RREADY" } },
	{ "name": "s_axi_AXILiteS_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RDATA" } },
	{ "name": "s_axi_AXILiteS_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RRESP" } },
	{ "name": "s_axi_AXILiteS_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "BVALID" } },
	{ "name": "s_axi_AXILiteS_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "BREADY" } },
	{ "name": "s_axi_AXILiteS_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "AXILiteS", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "interrupt" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "m_axi_IMG_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IMG", "role": "AWVALID" }} , 
 	{ "name": "m_axi_IMG_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IMG", "role": "AWREADY" }} , 
 	{ "name": "m_axi_IMG_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "IMG", "role": "AWADDR" }} , 
 	{ "name": "m_axi_IMG_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "IMG", "role": "AWID" }} , 
 	{ "name": "m_axi_IMG_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "IMG", "role": "AWLEN" }} , 
 	{ "name": "m_axi_IMG_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "IMG", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_IMG_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "IMG", "role": "AWBURST" }} , 
 	{ "name": "m_axi_IMG_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "IMG", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_IMG_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "IMG", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_IMG_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "IMG", "role": "AWPROT" }} , 
 	{ "name": "m_axi_IMG_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "IMG", "role": "AWQOS" }} , 
 	{ "name": "m_axi_IMG_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "IMG", "role": "AWREGION" }} , 
 	{ "name": "m_axi_IMG_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "IMG", "role": "AWUSER" }} , 
 	{ "name": "m_axi_IMG_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IMG", "role": "WVALID" }} , 
 	{ "name": "m_axi_IMG_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IMG", "role": "WREADY" }} , 
 	{ "name": "m_axi_IMG_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "IMG", "role": "WDATA" }} , 
 	{ "name": "m_axi_IMG_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "IMG", "role": "WSTRB" }} , 
 	{ "name": "m_axi_IMG_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IMG", "role": "WLAST" }} , 
 	{ "name": "m_axi_IMG_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "IMG", "role": "WID" }} , 
 	{ "name": "m_axi_IMG_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "IMG", "role": "WUSER" }} , 
 	{ "name": "m_axi_IMG_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IMG", "role": "ARVALID" }} , 
 	{ "name": "m_axi_IMG_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IMG", "role": "ARREADY" }} , 
 	{ "name": "m_axi_IMG_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "IMG", "role": "ARADDR" }} , 
 	{ "name": "m_axi_IMG_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "IMG", "role": "ARID" }} , 
 	{ "name": "m_axi_IMG_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "IMG", "role": "ARLEN" }} , 
 	{ "name": "m_axi_IMG_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "IMG", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_IMG_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "IMG", "role": "ARBURST" }} , 
 	{ "name": "m_axi_IMG_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "IMG", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_IMG_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "IMG", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_IMG_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "IMG", "role": "ARPROT" }} , 
 	{ "name": "m_axi_IMG_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "IMG", "role": "ARQOS" }} , 
 	{ "name": "m_axi_IMG_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "IMG", "role": "ARREGION" }} , 
 	{ "name": "m_axi_IMG_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "IMG", "role": "ARUSER" }} , 
 	{ "name": "m_axi_IMG_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IMG", "role": "RVALID" }} , 
 	{ "name": "m_axi_IMG_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IMG", "role": "RREADY" }} , 
 	{ "name": "m_axi_IMG_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "IMG", "role": "RDATA" }} , 
 	{ "name": "m_axi_IMG_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IMG", "role": "RLAST" }} , 
 	{ "name": "m_axi_IMG_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "IMG", "role": "RID" }} , 
 	{ "name": "m_axi_IMG_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "IMG", "role": "RUSER" }} , 
 	{ "name": "m_axi_IMG_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "IMG", "role": "RRESP" }} , 
 	{ "name": "m_axi_IMG_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IMG", "role": "BVALID" }} , 
 	{ "name": "m_axi_IMG_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IMG", "role": "BREADY" }} , 
 	{ "name": "m_axi_IMG_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "IMG", "role": "BRESP" }} , 
 	{ "name": "m_axi_IMG_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "IMG", "role": "BID" }} , 
 	{ "name": "m_axi_IMG_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "IMG", "role": "BUSER" }} , 
 	{ "name": "m_axi_BUS512_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS512", "role": "AWVALID" }} , 
 	{ "name": "m_axi_BUS512_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS512", "role": "AWREADY" }} , 
 	{ "name": "m_axi_BUS512_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BUS512", "role": "AWADDR" }} , 
 	{ "name": "m_axi_BUS512_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS512", "role": "AWID" }} , 
 	{ "name": "m_axi_BUS512_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "BUS512", "role": "AWLEN" }} , 
 	{ "name": "m_axi_BUS512_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "BUS512", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_BUS512_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "BUS512", "role": "AWBURST" }} , 
 	{ "name": "m_axi_BUS512_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "BUS512", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_BUS512_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "BUS512", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_BUS512_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "BUS512", "role": "AWPROT" }} , 
 	{ "name": "m_axi_BUS512_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "BUS512", "role": "AWQOS" }} , 
 	{ "name": "m_axi_BUS512_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "BUS512", "role": "AWREGION" }} , 
 	{ "name": "m_axi_BUS512_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS512", "role": "AWUSER" }} , 
 	{ "name": "m_axi_BUS512_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS512", "role": "WVALID" }} , 
 	{ "name": "m_axi_BUS512_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS512", "role": "WREADY" }} , 
 	{ "name": "m_axi_BUS512_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "BUS512", "role": "WDATA" }} , 
 	{ "name": "m_axi_BUS512_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "BUS512", "role": "WSTRB" }} , 
 	{ "name": "m_axi_BUS512_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS512", "role": "WLAST" }} , 
 	{ "name": "m_axi_BUS512_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS512", "role": "WID" }} , 
 	{ "name": "m_axi_BUS512_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS512", "role": "WUSER" }} , 
 	{ "name": "m_axi_BUS512_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS512", "role": "ARVALID" }} , 
 	{ "name": "m_axi_BUS512_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS512", "role": "ARREADY" }} , 
 	{ "name": "m_axi_BUS512_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BUS512", "role": "ARADDR" }} , 
 	{ "name": "m_axi_BUS512_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS512", "role": "ARID" }} , 
 	{ "name": "m_axi_BUS512_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "BUS512", "role": "ARLEN" }} , 
 	{ "name": "m_axi_BUS512_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "BUS512", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_BUS512_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "BUS512", "role": "ARBURST" }} , 
 	{ "name": "m_axi_BUS512_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "BUS512", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_BUS512_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "BUS512", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_BUS512_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "BUS512", "role": "ARPROT" }} , 
 	{ "name": "m_axi_BUS512_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "BUS512", "role": "ARQOS" }} , 
 	{ "name": "m_axi_BUS512_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "BUS512", "role": "ARREGION" }} , 
 	{ "name": "m_axi_BUS512_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS512", "role": "ARUSER" }} , 
 	{ "name": "m_axi_BUS512_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS512", "role": "RVALID" }} , 
 	{ "name": "m_axi_BUS512_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS512", "role": "RREADY" }} , 
 	{ "name": "m_axi_BUS512_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "BUS512", "role": "RDATA" }} , 
 	{ "name": "m_axi_BUS512_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS512", "role": "RLAST" }} , 
 	{ "name": "m_axi_BUS512_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS512", "role": "RID" }} , 
 	{ "name": "m_axi_BUS512_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS512", "role": "RUSER" }} , 
 	{ "name": "m_axi_BUS512_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "BUS512", "role": "RRESP" }} , 
 	{ "name": "m_axi_BUS512_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS512", "role": "BVALID" }} , 
 	{ "name": "m_axi_BUS512_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS512", "role": "BREADY" }} , 
 	{ "name": "m_axi_BUS512_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "BUS512", "role": "BRESP" }} , 
 	{ "name": "m_axi_BUS512_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS512", "role": "BID" }} , 
 	{ "name": "m_axi_BUS512_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS512", "role": "BUSER" }} , 
 	{ "name": "m_axi_DDR512_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR512", "role": "AWVALID" }} , 
 	{ "name": "m_axi_DDR512_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR512", "role": "AWREADY" }} , 
 	{ "name": "m_axi_DDR512_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "DDR512", "role": "AWADDR" }} , 
 	{ "name": "m_axi_DDR512_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR512", "role": "AWID" }} , 
 	{ "name": "m_axi_DDR512_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "DDR512", "role": "AWLEN" }} , 
 	{ "name": "m_axi_DDR512_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "DDR512", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_DDR512_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DDR512", "role": "AWBURST" }} , 
 	{ "name": "m_axi_DDR512_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DDR512", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_DDR512_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DDR512", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_DDR512_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "DDR512", "role": "AWPROT" }} , 
 	{ "name": "m_axi_DDR512_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DDR512", "role": "AWQOS" }} , 
 	{ "name": "m_axi_DDR512_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DDR512", "role": "AWREGION" }} , 
 	{ "name": "m_axi_DDR512_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR512", "role": "AWUSER" }} , 
 	{ "name": "m_axi_DDR512_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR512", "role": "WVALID" }} , 
 	{ "name": "m_axi_DDR512_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR512", "role": "WREADY" }} , 
 	{ "name": "m_axi_DDR512_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "DDR512", "role": "WDATA" }} , 
 	{ "name": "m_axi_DDR512_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "DDR512", "role": "WSTRB" }} , 
 	{ "name": "m_axi_DDR512_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR512", "role": "WLAST" }} , 
 	{ "name": "m_axi_DDR512_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR512", "role": "WID" }} , 
 	{ "name": "m_axi_DDR512_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR512", "role": "WUSER" }} , 
 	{ "name": "m_axi_DDR512_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR512", "role": "ARVALID" }} , 
 	{ "name": "m_axi_DDR512_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR512", "role": "ARREADY" }} , 
 	{ "name": "m_axi_DDR512_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "DDR512", "role": "ARADDR" }} , 
 	{ "name": "m_axi_DDR512_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR512", "role": "ARID" }} , 
 	{ "name": "m_axi_DDR512_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "DDR512", "role": "ARLEN" }} , 
 	{ "name": "m_axi_DDR512_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "DDR512", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_DDR512_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DDR512", "role": "ARBURST" }} , 
 	{ "name": "m_axi_DDR512_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DDR512", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_DDR512_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DDR512", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_DDR512_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "DDR512", "role": "ARPROT" }} , 
 	{ "name": "m_axi_DDR512_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DDR512", "role": "ARQOS" }} , 
 	{ "name": "m_axi_DDR512_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DDR512", "role": "ARREGION" }} , 
 	{ "name": "m_axi_DDR512_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR512", "role": "ARUSER" }} , 
 	{ "name": "m_axi_DDR512_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR512", "role": "RVALID" }} , 
 	{ "name": "m_axi_DDR512_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR512", "role": "RREADY" }} , 
 	{ "name": "m_axi_DDR512_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "DDR512", "role": "RDATA" }} , 
 	{ "name": "m_axi_DDR512_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR512", "role": "RLAST" }} , 
 	{ "name": "m_axi_DDR512_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR512", "role": "RID" }} , 
 	{ "name": "m_axi_DDR512_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR512", "role": "RUSER" }} , 
 	{ "name": "m_axi_DDR512_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DDR512", "role": "RRESP" }} , 
 	{ "name": "m_axi_DDR512_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR512", "role": "BVALID" }} , 
 	{ "name": "m_axi_DDR512_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR512", "role": "BREADY" }} , 
 	{ "name": "m_axi_DDR512_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DDR512", "role": "BRESP" }} , 
 	{ "name": "m_axi_DDR512_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR512", "role": "BID" }} , 
 	{ "name": "m_axi_DDR512_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR512", "role": "BUSER" }} , 
 	{ "name": "m_axi_BUS32_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS32", "role": "AWVALID" }} , 
 	{ "name": "m_axi_BUS32_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS32", "role": "AWREADY" }} , 
 	{ "name": "m_axi_BUS32_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BUS32", "role": "AWADDR" }} , 
 	{ "name": "m_axi_BUS32_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS32", "role": "AWID" }} , 
 	{ "name": "m_axi_BUS32_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "BUS32", "role": "AWLEN" }} , 
 	{ "name": "m_axi_BUS32_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "BUS32", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_BUS32_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "BUS32", "role": "AWBURST" }} , 
 	{ "name": "m_axi_BUS32_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "BUS32", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_BUS32_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "BUS32", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_BUS32_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "BUS32", "role": "AWPROT" }} , 
 	{ "name": "m_axi_BUS32_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "BUS32", "role": "AWQOS" }} , 
 	{ "name": "m_axi_BUS32_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "BUS32", "role": "AWREGION" }} , 
 	{ "name": "m_axi_BUS32_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS32", "role": "AWUSER" }} , 
 	{ "name": "m_axi_BUS32_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS32", "role": "WVALID" }} , 
 	{ "name": "m_axi_BUS32_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS32", "role": "WREADY" }} , 
 	{ "name": "m_axi_BUS32_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BUS32", "role": "WDATA" }} , 
 	{ "name": "m_axi_BUS32_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "BUS32", "role": "WSTRB" }} , 
 	{ "name": "m_axi_BUS32_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS32", "role": "WLAST" }} , 
 	{ "name": "m_axi_BUS32_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS32", "role": "WID" }} , 
 	{ "name": "m_axi_BUS32_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS32", "role": "WUSER" }} , 
 	{ "name": "m_axi_BUS32_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS32", "role": "ARVALID" }} , 
 	{ "name": "m_axi_BUS32_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS32", "role": "ARREADY" }} , 
 	{ "name": "m_axi_BUS32_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BUS32", "role": "ARADDR" }} , 
 	{ "name": "m_axi_BUS32_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS32", "role": "ARID" }} , 
 	{ "name": "m_axi_BUS32_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "BUS32", "role": "ARLEN" }} , 
 	{ "name": "m_axi_BUS32_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "BUS32", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_BUS32_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "BUS32", "role": "ARBURST" }} , 
 	{ "name": "m_axi_BUS32_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "BUS32", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_BUS32_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "BUS32", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_BUS32_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "BUS32", "role": "ARPROT" }} , 
 	{ "name": "m_axi_BUS32_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "BUS32", "role": "ARQOS" }} , 
 	{ "name": "m_axi_BUS32_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "BUS32", "role": "ARREGION" }} , 
 	{ "name": "m_axi_BUS32_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS32", "role": "ARUSER" }} , 
 	{ "name": "m_axi_BUS32_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS32", "role": "RVALID" }} , 
 	{ "name": "m_axi_BUS32_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS32", "role": "RREADY" }} , 
 	{ "name": "m_axi_BUS32_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BUS32", "role": "RDATA" }} , 
 	{ "name": "m_axi_BUS32_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS32", "role": "RLAST" }} , 
 	{ "name": "m_axi_BUS32_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS32", "role": "RID" }} , 
 	{ "name": "m_axi_BUS32_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS32", "role": "RUSER" }} , 
 	{ "name": "m_axi_BUS32_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "BUS32", "role": "RRESP" }} , 
 	{ "name": "m_axi_BUS32_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS32", "role": "BVALID" }} , 
 	{ "name": "m_axi_BUS32_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS32", "role": "BREADY" }} , 
 	{ "name": "m_axi_BUS32_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "BUS32", "role": "BRESP" }} , 
 	{ "name": "m_axi_BUS32_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS32", "role": "BID" }} , 
 	{ "name": "m_axi_BUS32_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "BUS32", "role": "BUSER" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162", "163", "164", "165", "166", "167", "168", "169", "170", "171", "172", "173", "174", "175", "176", "177", "178", "179", "180", "181", "182", "183", "184", "185", "186", "187", "188", "189", "190", "191", "192", "193", "194", "195", "196", "197", "198", "199", "200", "201", "202", "203", "204", "205", "206", "207", "208", "209", "210", "211", "212", "213", "214", "215", "216", "217", "218", "219", "220", "221", "222", "223", "224", "225", "226", "227", "228", "229", "230", "231", "232", "233", "234", "235", "236", "237", "238", "239", "240", "241", "242", "243", "244", "245", "246", "247", "248", "249", "250", "251", "252", "253", "254", "255", "256", "257", "258", "259", "260", "261", "262", "263", "264", "265", "266", "267", "268", "269", "270", "271", "272", "273", "274", "275", "276", "277", "278", "279", "280", "281", "282", "283", "284", "285", "286", "287", "288", "289", "290", "291", "292", "293", "294", "295", "296", "297", "298", "299", "300", "301", "302", "303", "304", "305", "306", "307", "308", "309", "310", "311", "312", "313", "314", "315", "316", "317", "318", "319", "320", "321", "322", "323", "324", "325", "326", "327", "328", "329", "330", "331", "332", "333", "334", "335", "336", "337", "338", "339", "340", "341", "342", "343", "344", "345", "346", "347", "348", "349", "350", "351", "352", "353", "354", "355", "356", "357", "358", "359", "360", "361", "362", "363", "364", "365", "366", "367", "368", "369", "370", "371", "372", "373", "374", "375", "376", "377", "378", "379", "380", "381", "382", "383", "384", "385", "386", "387", "388", "389", "390", "391", "392", "393", "394", "395", "396", "397", "398", "399", "400", "401", "402", "540", "700", "737", "780", "801", "835", "837", "839", "841", "843", "847", "849", "851", "853", "855", "859", "860"],
		"CDFG" : "FracNet",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "3622103", "EstimateLatencyMax" : "4852231",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state19", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_biconv16_fu_8015"},
			{"State" : "ap_ST_fsm_state23", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_biconv16_fu_8015"},
			{"State" : "ap_ST_fsm_state35", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1bit_fu_8494"},
			{"State" : "ap_ST_fsm_state53", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1bit_fu_8494"},
			{"State" : "ap_ST_fsm_state73", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1bit_fu_8494"},
			{"State" : "ap_ST_fsm_state93", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1bit_fu_8494"},
			{"State" : "ap_ST_fsm_state113", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1bit_fu_8494"},
			{"State" : "ap_ST_fsm_state133", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1bit_fu_8494"},
			{"State" : "ap_ST_fsm_state153", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1bit_fu_8494"},
			{"State" : "ap_ST_fsm_state173", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1bit_fu_8494"},
			{"State" : "ap_ST_fsm_state193", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1bit_fu_8494"},
			{"State" : "ap_ST_fsm_state213", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1bit_fu_8494"},
			{"State" : "ap_ST_fsm_state233", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1bit_fu_8494"},
			{"State" : "ap_ST_fsm_state250", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1bit_fu_8494"},
			{"State" : "ap_ST_fsm_state264", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1bit_fu_8494"},
			{"State" : "ap_ST_fsm_state37", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_fu_9482"},
			{"State" : "ap_ST_fsm_state46", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_fu_9482"},
			{"State" : "ap_ST_fsm_state64", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_fu_9482"},
			{"State" : "ap_ST_fsm_state74", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_fu_9482"},
			{"State" : "ap_ST_fsm_state84", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_fu_9482"},
			{"State" : "ap_ST_fsm_state104", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_fu_9482"},
			{"State" : "ap_ST_fsm_state114", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_fu_9482"},
			{"State" : "ap_ST_fsm_state124", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_fu_9482"},
			{"State" : "ap_ST_fsm_state144", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_fu_9482"},
			{"State" : "ap_ST_fsm_state154", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_fu_9482"},
			{"State" : "ap_ST_fsm_state164", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_fu_9482"},
			{"State" : "ap_ST_fsm_state174", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_fu_9482"},
			{"State" : "ap_ST_fsm_state184", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_fu_9482"},
			{"State" : "ap_ST_fsm_state194", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_fu_9482"},
			{"State" : "ap_ST_fsm_state204", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_fu_9482"},
			{"State" : "ap_ST_fsm_state214", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_fu_9482"},
			{"State" : "ap_ST_fsm_state224", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_fu_9482"},
			{"State" : "ap_ST_fsm_state234", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_fu_9482"},
			{"State" : "ap_ST_fsm_state244", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_fu_9482"},
			{"State" : "ap_ST_fsm_state265", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_fu_9482"},
			{"State" : "ap_ST_fsm_state272", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_fu_9482"},
			{"State" : "ap_ST_fsm_state44", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350"},
			{"State" : "ap_ST_fsm_state62", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350"},
			{"State" : "ap_ST_fsm_state83", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350"},
			{"State" : "ap_ST_fsm_state103", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350"},
			{"State" : "ap_ST_fsm_state123", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350"},
			{"State" : "ap_ST_fsm_state143", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350"},
			{"State" : "ap_ST_fsm_state163", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350"},
			{"State" : "ap_ST_fsm_state183", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350"},
			{"State" : "ap_ST_fsm_state203", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350"},
			{"State" : "ap_ST_fsm_state223", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350"},
			{"State" : "ap_ST_fsm_state243", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350"},
			{"State" : "ap_ST_fsm_state257", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350"},
			{"State" : "ap_ST_fsm_state271", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350"},
			{"State" : "ap_ST_fsm_state332", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_matmul_fu_11324"},
			{"State" : "ap_ST_fsm_state55", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_s_fu_12639"},
			{"State" : "ap_ST_fsm_state94", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_s_fu_12639"},
			{"State" : "ap_ST_fsm_state134", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_s_fu_12639"},
			{"State" : "ap_ST_fsm_state251", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_s_fu_12639"},
			{"State" : "ap_ST_fsm_state258", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_bufs_organize_s_fu_12639"},
			{"State" : "ap_ST_fsm_state30", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_3x3_all_fu_13038"},
			{"State" : "ap_ST_fsm_state48", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_3x3_all_fu_13038"},
			{"State" : "ap_ST_fsm_state66", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_3x3_all_fu_13038"},
			{"State" : "ap_ST_fsm_state86", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_3x3_all_fu_13038"},
			{"State" : "ap_ST_fsm_state106", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_3x3_all_fu_13038"},
			{"State" : "ap_ST_fsm_state126", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_3x3_all_fu_13038"},
			{"State" : "ap_ST_fsm_state146", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_3x3_all_fu_13038"},
			{"State" : "ap_ST_fsm_state166", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_3x3_all_fu_13038"},
			{"State" : "ap_ST_fsm_state186", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_3x3_all_fu_13038"},
			{"State" : "ap_ST_fsm_state206", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_3x3_all_fu_13038"},
			{"State" : "ap_ST_fsm_state226", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_3x3_all_fu_13038"},
			{"State" : "ap_ST_fsm_state246", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_3x3_all_fu_13038"},
			{"State" : "ap_ST_fsm_state260", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_3x3_all_fu_13038"},
			{"State" : "ap_ST_fsm_state39", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_1x1_all_fu_13434"},
			{"State" : "ap_ST_fsm_state57", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_1x1_all_fu_13434"},
			{"State" : "ap_ST_fsm_state76", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_1x1_all_fu_13434"},
			{"State" : "ap_ST_fsm_state96", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_1x1_all_fu_13434"},
			{"State" : "ap_ST_fsm_state116", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_1x1_all_fu_13434"},
			{"State" : "ap_ST_fsm_state136", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_1x1_all_fu_13434"},
			{"State" : "ap_ST_fsm_state156", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_1x1_all_fu_13434"},
			{"State" : "ap_ST_fsm_state176", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_1x1_all_fu_13434"},
			{"State" : "ap_ST_fsm_state196", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_1x1_all_fu_13434"},
			{"State" : "ap_ST_fsm_state216", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_1x1_all_fu_13434"},
			{"State" : "ap_ST_fsm_state236", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_1x1_all_fu_13434"},
			{"State" : "ap_ST_fsm_state253", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_1x1_all_fu_13434"},
			{"State" : "ap_ST_fsm_state267", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weights_1x1_all_fu_13434"},
			{"State" : "ap_ST_fsm_state25", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_copy_input_layer_buf_fu_13833"},
			{"State" : "ap_ST_fsm_state33", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state42", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state51", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state60", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state71", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state81", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state91", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state101", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state111", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state121", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state131", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state141", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state151", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state161", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state171", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state181", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state191", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state201", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state211", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state221", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state231", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state241", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state248", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state255", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state262", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state269", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906"},
			{"State" : "ap_ST_fsm_state33", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state42", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state51", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state60", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state69", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state79", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state89", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state99", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state109", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state119", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state129", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state139", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state149", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state159", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state169", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state179", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state189", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state199", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state209", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state219", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state229", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state239", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state246", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state253", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state260", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state267", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state274", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state292", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_buf_from_DDR_fu_14064"},
			{"State" : "ap_ST_fsm_state276", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14148"},
			{"State" : "ap_ST_fsm_state277", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14148"},
			{"State" : "ap_ST_fsm_state278", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14148"},
			{"State" : "ap_ST_fsm_state279", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14148"},
			{"State" : "ap_ST_fsm_state280", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14148"},
			{"State" : "ap_ST_fsm_state281", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14148"},
			{"State" : "ap_ST_fsm_state282", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14148"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14148"},
			{"State" : "ap_ST_fsm_state284", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14148"},
			{"State" : "ap_ST_fsm_state285", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14148"},
			{"State" : "ap_ST_fsm_state286", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14148"},
			{"State" : "ap_ST_fsm_state287", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14148"},
			{"State" : "ap_ST_fsm_state288", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14148"},
			{"State" : "ap_ST_fsm_state289", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14148"},
			{"State" : "ap_ST_fsm_state290", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14148"},
			{"State" : "ap_ST_fsm_state276", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14154"},
			{"State" : "ap_ST_fsm_state277", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14154"},
			{"State" : "ap_ST_fsm_state278", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14154"},
			{"State" : "ap_ST_fsm_state279", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14154"},
			{"State" : "ap_ST_fsm_state280", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14154"},
			{"State" : "ap_ST_fsm_state281", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14154"},
			{"State" : "ap_ST_fsm_state282", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14154"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14154"},
			{"State" : "ap_ST_fsm_state284", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14154"},
			{"State" : "ap_ST_fsm_state285", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14154"},
			{"State" : "ap_ST_fsm_state286", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14154"},
			{"State" : "ap_ST_fsm_state287", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14154"},
			{"State" : "ap_ST_fsm_state288", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14154"},
			{"State" : "ap_ST_fsm_state289", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14154"},
			{"State" : "ap_ST_fsm_state290", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14154"},
			{"State" : "ap_ST_fsm_state290", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14188"},
			{"State" : "ap_ST_fsm_state290", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_7x7_1_fu_14194"},
			{"State" : "ap_ST_fsm_state14", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_input_fu_14200"},
			{"State" : "ap_ST_fsm_state22", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_input_fu_14200"},
			{"State" : "ap_ST_fsm_state24", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_input_fu_14200"},
			{"State" : "ap_ST_fsm_state19", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_input_fu_14200"},
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_input_fu_14200"}],
		"Port" : [
			{"Name" : "IMG", "Type" : "MAXI", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "855", "SubInstance" : "grp_load_input_fu_14200", "Port" : "img_V"}]},
			{"Name" : "BUS512", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "BUS512_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "BUS512_blk_n_R", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "conv_weight_3x3_all_V"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "conv_weight_1x1_all_V"}]},
			{"Name" : "DDR512", "Type" : "MAXI", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "ddr_ptr_V"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "ddr_ptr_V"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "dest_V"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "src_V"}]},
			{"Name" : "BUS32", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "BUS32_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "BUS32_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "BUS32_blk_n_R", "Type" : "RtlSignal"},
					{"Name" : "BUS32_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "BUS32_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "image_thermo_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_weight_1x1_all_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_weight_3x3_all_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_all_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "linear_weight_all_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "linear_bias_all_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "DDR_buff_merge_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "out_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "lut16_V_1"}]},
			{"Name" : "bn_weight_buf_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_0"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_0"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_0"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_0"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V"}]},
			{"Name" : "bn_weight_buf_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_1"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_1"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_1"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V71"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V71"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_1"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V32"}]},
			{"Name" : "bn_weight_buf_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_2"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_2"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_2"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V72"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V72"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_2"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V33"}]},
			{"Name" : "bn_weight_buf_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_3"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_3"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_3"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V73"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V73"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_3"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V34"}]},
			{"Name" : "bn_weight_buf_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_4"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_4"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_4"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V74"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V74"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_4"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V35"}]},
			{"Name" : "bn_weight_buf_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_5"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_5"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_5"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V75"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V75"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_5"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V36"}]},
			{"Name" : "bn_weight_buf_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_6"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_6"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_6"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V76"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V76"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_6"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V37"}]},
			{"Name" : "bn_weight_buf_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_7"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_7"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_7"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V77"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V77"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_7"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V38"}]},
			{"Name" : "bn_weight_buf_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_8"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_8"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_8"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V78"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V78"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_8"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V39"}]},
			{"Name" : "bn_weight_buf_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_9"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_9"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_9"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V79"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V79"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_9"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V40"}]},
			{"Name" : "bn_weight_buf_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_10"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_10"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_10"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V80"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V80"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_10"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V41"}]},
			{"Name" : "bn_weight_buf_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_11"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_11"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_11"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V81"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V81"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_11"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V42"}]},
			{"Name" : "bn_weight_buf_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_12"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_12"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_12"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V82"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V82"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_12"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V43"}]},
			{"Name" : "bn_weight_buf_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_13"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_13"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_13"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V83"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V83"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_13"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V44"}]},
			{"Name" : "bn_weight_buf_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_14"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_14"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_14"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V84"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V84"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_14"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V45"}]},
			{"Name" : "bn_weight_buf_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_15"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_15"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_15"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V85"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V85"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_15"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V46"}]},
			{"Name" : "bn_weight_buf_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_16"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_16"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_16"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V86"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V86"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_16"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V47"}]},
			{"Name" : "bn_weight_buf_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_17"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_17"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_17"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V87"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V87"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_17"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V48"}]},
			{"Name" : "bn_weight_buf_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_18"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_18"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_18"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V88"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V88"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_18"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V49"}]},
			{"Name" : "bn_weight_buf_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_19"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_19"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_19"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V89"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V89"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_19"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V50"}]},
			{"Name" : "bn_weight_buf_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_20"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_20"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_20"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V90"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V90"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_20"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V51"}]},
			{"Name" : "bn_weight_buf_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_21"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_21"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_21"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V91"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V91"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_21"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V52"}]},
			{"Name" : "bn_weight_buf_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_22"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_22"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_22"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V92"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V92"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_22"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V53"}]},
			{"Name" : "bn_weight_buf_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_23"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_23"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_23"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V93"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V93"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_23"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V54"}]},
			{"Name" : "bn_weight_buf_V_24", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_24"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_24"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_24"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V94"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V94"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_24"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V55"}]},
			{"Name" : "bn_weight_buf_V_25", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_25"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_25"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_25"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V95"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V95"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_25"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V56"}]},
			{"Name" : "bn_weight_buf_V_26", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_26"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_26"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_26"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V96"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V96"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_26"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V57"}]},
			{"Name" : "bn_weight_buf_V_27", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_27"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_27"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_27"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V97"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V97"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_27"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V58"}]},
			{"Name" : "bn_weight_buf_V_28", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_28"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_28"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_28"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V98"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V98"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_28"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V59"}]},
			{"Name" : "bn_weight_buf_V_29", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_29"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_29"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_29"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V99"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V99"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_29"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V60"}]},
			{"Name" : "bn_weight_buf_V_30", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_30"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_30"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_30"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V100"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V100"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_30"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V61"}]},
			{"Name" : "bn_weight_buf_V_31", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_weight_buf_V_31"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_weight_buf_V_31"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_weight_buf_V_31"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_weights_V101"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_weights_V101"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_weight_buf_V_31"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_weight_V62"}]},
			{"Name" : "bn_bias_buf_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_0"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_0"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_0"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_0"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V"}]},
			{"Name" : "bn_bias_buf_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_1"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_1"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_1"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V102"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V102"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_1"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V63"}]},
			{"Name" : "bn_bias_buf_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_2"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_2"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_2"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V103"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V103"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_2"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V64"}]},
			{"Name" : "bn_bias_buf_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_3"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_3"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_3"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V104"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V104"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_3"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V65"}]},
			{"Name" : "bn_bias_buf_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_4"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_4"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_4"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V105"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V105"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_4"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V66"}]},
			{"Name" : "bn_bias_buf_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_5"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_5"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_5"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V106"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V106"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_5"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V67"}]},
			{"Name" : "bn_bias_buf_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_6"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_6"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_6"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V107"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V107"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_6"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V68"}]},
			{"Name" : "bn_bias_buf_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_7"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_7"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_7"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V108"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V108"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_7"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V69"}]},
			{"Name" : "bn_bias_buf_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_8"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_8"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_8"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V109"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V109"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_8"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V70"}]},
			{"Name" : "bn_bias_buf_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_9"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_9"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_9"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V110"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V110"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_9"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V71"}]},
			{"Name" : "bn_bias_buf_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_10"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_10"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_10"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V111"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V111"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_10"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V72"}]},
			{"Name" : "bn_bias_buf_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_11"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_11"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_11"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V112"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V112"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_11"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V73"}]},
			{"Name" : "bn_bias_buf_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_12"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_12"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_12"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V113"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V113"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_12"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V74"}]},
			{"Name" : "bn_bias_buf_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_13"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_13"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_13"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V114"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V114"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_13"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V75"}]},
			{"Name" : "bn_bias_buf_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_14"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_14"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_14"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V115"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V115"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_14"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V76"}]},
			{"Name" : "bn_bias_buf_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_15"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_15"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_15"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V116"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V116"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_15"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V77"}]},
			{"Name" : "bn_bias_buf_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_16"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_16"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_16"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V117"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V117"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_16"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V78"}]},
			{"Name" : "bn_bias_buf_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_17"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_17"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_17"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V118"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V118"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_17"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V79"}]},
			{"Name" : "bn_bias_buf_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_18"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_18"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_18"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V119"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V119"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_18"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V80"}]},
			{"Name" : "bn_bias_buf_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_19"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_19"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_19"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V120"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V120"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_19"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V81"}]},
			{"Name" : "bn_bias_buf_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_20"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_20"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_20"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V121"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V121"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_20"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V82"}]},
			{"Name" : "bn_bias_buf_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_21"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_21"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_21"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V122"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V122"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_21"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V83"}]},
			{"Name" : "bn_bias_buf_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_22"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_22"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_22"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V123"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V123"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_22"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V84"}]},
			{"Name" : "bn_bias_buf_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_23"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_23"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_23"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V124"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V124"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_23"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V85"}]},
			{"Name" : "bn_bias_buf_V_24", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_24"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_24"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_24"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V125"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V125"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_24"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V86"}]},
			{"Name" : "bn_bias_buf_V_25", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_25"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_25"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_25"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V126"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V126"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_25"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V87"}]},
			{"Name" : "bn_bias_buf_V_26", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_26"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_26"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_26"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V127"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V127"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_26"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V88"}]},
			{"Name" : "bn_bias_buf_V_27", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_27"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_27"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_27"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V128"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V128"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_27"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V89"}]},
			{"Name" : "bn_bias_buf_V_28", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_28"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_28"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_28"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V129"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V129"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_28"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V90"}]},
			{"Name" : "bn_bias_buf_V_29", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_29"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_29"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_29"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V130"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V130"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_29"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V91"}]},
			{"Name" : "bn_bias_buf_V_30", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_30"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_30"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_30"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V131"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V131"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_30"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V92"}]},
			{"Name" : "bn_bias_buf_V_31", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "bn_bias_buf_V_31"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "bn_bias_buf_V_31"},
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "bn_bias_buf_V_31"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bn_bias_V132"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bn_bias_V132"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "bn_bias_buf_V_31"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "bn_bias_V93"}]},
			{"Name" : "FM_buf_acc0_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_0"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_0"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_0"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_0_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_0_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_0_V"}]},
			{"Name" : "FM_buf_acc0_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_1"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_1"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_1"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_1_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_1_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_1_V"}]},
			{"Name" : "FM_buf_acc0_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_2"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_2"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_2"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_2_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_2_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_2_V"}]},
			{"Name" : "FM_buf_acc0_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_3"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_3"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_3"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_3_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_3_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_3_V"}]},
			{"Name" : "FM_buf_acc0_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_4"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_4"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_4"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_4_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_4_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_4_V"}]},
			{"Name" : "FM_buf_acc0_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_5"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_5"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_5"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_5_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_5_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_5_V"}]},
			{"Name" : "FM_buf_acc0_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_6"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_6"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_6"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_6_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_6_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_6_V"}]},
			{"Name" : "FM_buf_acc0_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_7"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_7"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_7"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_7_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_7_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_7_V"}]},
			{"Name" : "FM_buf_acc0_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_8"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_8"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_8"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_8_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_8_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_8_V"}]},
			{"Name" : "FM_buf_acc0_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_9"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_9"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_9"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_9_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_9_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_9_V"}]},
			{"Name" : "FM_buf_acc0_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_10"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_10"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_10"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_10_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_10_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_10_V"}]},
			{"Name" : "FM_buf_acc0_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_11"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_11"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_11"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_11_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_11_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_11_V"}]},
			{"Name" : "FM_buf_acc0_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_12"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_12"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_12"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_12_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_12_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_12_V"}]},
			{"Name" : "FM_buf_acc0_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_13"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_13"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_13"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_13_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_13_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_13_V"}]},
			{"Name" : "FM_buf_acc0_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_14"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_14"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_14"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_14_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_14_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_14_V"}]},
			{"Name" : "FM_buf_acc0_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_15"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_15"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_15"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_15_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_15_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_15_V"}]},
			{"Name" : "FM_buf_acc0_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_16"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_16"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_16"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_16_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_16_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_16_V"}]},
			{"Name" : "FM_buf_acc0_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_17"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_17"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_17"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_17_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_17_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_17_V"}]},
			{"Name" : "FM_buf_acc0_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_18"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_18"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_18"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_18_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_18_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_18_V"}]},
			{"Name" : "FM_buf_acc0_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_19"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_19"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_19"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_19_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_19_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_19_V"}]},
			{"Name" : "FM_buf_acc0_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_20"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_20"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_20"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_20_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_20_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_20_V"}]},
			{"Name" : "FM_buf_acc0_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_21"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_21"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_21"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_21_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_21_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_21_V"}]},
			{"Name" : "FM_buf_acc0_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_22"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_22"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_22"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_22_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_22_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_22_V"}]},
			{"Name" : "FM_buf_acc0_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_23"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_23"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_23"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_23_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_23_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_23_V"}]},
			{"Name" : "FM_buf_acc0_V_24", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_24"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_24"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_24"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_24_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_24_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_24_V"}]},
			{"Name" : "FM_buf_acc0_V_25", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_25"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_25"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_25"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_25_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_25_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_25_V"}]},
			{"Name" : "FM_buf_acc0_V_26", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_26"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_26"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_26"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_26_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_26_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_26_V"}]},
			{"Name" : "FM_buf_acc0_V_27", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_27"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_27"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_27"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_27_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_27_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_27_V"}]},
			{"Name" : "FM_buf_acc0_V_28", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_28"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_28"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_28"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_28_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_28_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_28_V"}]},
			{"Name" : "FM_buf_acc0_V_29", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_29"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_29"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_29"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_29_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_29_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_29_V"}]},
			{"Name" : "FM_buf_acc0_V_30", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_30"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_30"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_30"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_30_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_30_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_30_V"}]},
			{"Name" : "FM_buf_acc0_V_31", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf_acc0_V_31"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf_acc0_V_31"},
					{"ID" : "839", "SubInstance" : "grp_copy_input_layer_buf_fu_13833", "Port" : "FM_buf_acc0_V_31"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "top_31_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "top_31_V"},
					{"ID" : "402", "SubInstance" : "grp_biconv16_fu_8015", "Port" : "top_31_V"}]},
			{"Name" : "pg_buf_all_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_0"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_0"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_0"}]},
			{"Name" : "pg_buf_all_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_1"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_1"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_1"}]},
			{"Name" : "pg_buf_all_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_2"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_2"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_2"}]},
			{"Name" : "pg_buf_all_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_3"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_3"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_3"}]},
			{"Name" : "pg_buf_all_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_4"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_4"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_4"}]},
			{"Name" : "pg_buf_all_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_5"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_5"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_5"}]},
			{"Name" : "pg_buf_all_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_6"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_6"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_6"}]},
			{"Name" : "pg_buf_all_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_7"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_7"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_7"}]},
			{"Name" : "pg_buf_all_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_8"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_8"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_8"}]},
			{"Name" : "pg_buf_all_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_9"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_9"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_9"}]},
			{"Name" : "pg_buf_all_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_10"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_10"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_10"}]},
			{"Name" : "pg_buf_all_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_11"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_11"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_11"}]},
			{"Name" : "pg_buf_all_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_12"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_12"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_12"}]},
			{"Name" : "pg_buf_all_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_13"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_13"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_13"}]},
			{"Name" : "pg_buf_all_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_14"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_14"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_14"}]},
			{"Name" : "pg_buf_all_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_15"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_15"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_15"}]},
			{"Name" : "pg_buf_all_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_16"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_16"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_16"}]},
			{"Name" : "pg_buf_all_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_17"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_17"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_17"}]},
			{"Name" : "pg_buf_all_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_18"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_18"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_18"}]},
			{"Name" : "pg_buf_all_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_19"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_19"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_19"}]},
			{"Name" : "pg_buf_all_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_20"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_20"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_20"}]},
			{"Name" : "pg_buf_all_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_21"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_21"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_21"}]},
			{"Name" : "pg_buf_all_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_22"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_22"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_22"}]},
			{"Name" : "pg_buf_all_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_23"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_23"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_23"}]},
			{"Name" : "pg_buf_all_V_24", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_24"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_24"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_24"}]},
			{"Name" : "pg_buf_all_V_25", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_25"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_25"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_25"}]},
			{"Name" : "pg_buf_all_V_26", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_26"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_26"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_26"}]},
			{"Name" : "pg_buf_all_V_27", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_27"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_27"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_27"}]},
			{"Name" : "pg_buf_all_V_28", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_28"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_28"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_28"}]},
			{"Name" : "pg_buf_all_V_29", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_29"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_29"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_29"}]},
			{"Name" : "pg_buf_all_V_30", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_30"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_30"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_30"}]},
			{"Name" : "pg_buf_all_V_31", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_31"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_31"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_31"}]},
			{"Name" : "weight_buf_3x3_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_0"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_0"}]},
			{"Name" : "weight_buf_3x3_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_1"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_1"}]},
			{"Name" : "weight_buf_3x3_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_2"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_2"}]},
			{"Name" : "weight_buf_3x3_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_3"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_3"}]},
			{"Name" : "weight_buf_3x3_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_4"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_4"}]},
			{"Name" : "weight_buf_3x3_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_5"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_5"}]},
			{"Name" : "weight_buf_3x3_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_6"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_6"}]},
			{"Name" : "weight_buf_3x3_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_7"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_7"}]},
			{"Name" : "weight_buf_3x3_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_8"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_8"}]},
			{"Name" : "weight_buf_3x3_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_9"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_9"}]},
			{"Name" : "weight_buf_3x3_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_10"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_10"}]},
			{"Name" : "weight_buf_3x3_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_11"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_11"}]},
			{"Name" : "weight_buf_3x3_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_12"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_12"}]},
			{"Name" : "weight_buf_3x3_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_13"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_13"}]},
			{"Name" : "weight_buf_3x3_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_14"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_14"}]},
			{"Name" : "weight_buf_3x3_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_15"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_15"}]},
			{"Name" : "weight_buf_3x3_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_16"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_16"}]},
			{"Name" : "weight_buf_3x3_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_17"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_17"}]},
			{"Name" : "weight_buf_3x3_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_18"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_18"}]},
			{"Name" : "weight_buf_3x3_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_19"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_19"}]},
			{"Name" : "weight_buf_3x3_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_20"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_20"}]},
			{"Name" : "weight_buf_3x3_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_21"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_21"}]},
			{"Name" : "weight_buf_3x3_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_22"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_22"}]},
			{"Name" : "weight_buf_3x3_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_23"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_23"}]},
			{"Name" : "weight_buf_3x3_V_24", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_24"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_24"}]},
			{"Name" : "weight_buf_3x3_V_25", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_25"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_25"}]},
			{"Name" : "weight_buf_3x3_V_26", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_26"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_26"}]},
			{"Name" : "weight_buf_3x3_V_27", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_27"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_27"}]},
			{"Name" : "weight_buf_3x3_V_28", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_28"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_28"}]},
			{"Name" : "weight_buf_3x3_V_29", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_29"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_29"}]},
			{"Name" : "weight_buf_3x3_V_30", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_30"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_30"}]},
			{"Name" : "weight_buf_3x3_V_31", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "weight_buf_3x3_V_31"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "weight_buf_3x3_V_31"}]},
			{"Name" : "relu_shiftx_buf_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_0"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_0"}]},
			{"Name" : "relu_shifty_buf_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_0"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_0"}]},
			{"Name" : "relu_weight_buf_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_0"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_0"}]},
			{"Name" : "relu_shiftx_buf_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_1"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V133"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V133"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_1"}]},
			{"Name" : "relu_shifty_buf_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_1"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V164"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V164"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_1"}]},
			{"Name" : "relu_weight_buf_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_1"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V195"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V195"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_1"}]},
			{"Name" : "relu_shiftx_buf_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_2"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V134"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V134"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_2"}]},
			{"Name" : "relu_shifty_buf_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_2"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V165"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V165"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_2"}]},
			{"Name" : "relu_weight_buf_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_2"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V196"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V196"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_2"}]},
			{"Name" : "relu_shiftx_buf_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_3"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V135"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V135"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_3"}]},
			{"Name" : "relu_shifty_buf_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_3"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V166"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V166"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_3"}]},
			{"Name" : "relu_weight_buf_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_3"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V197"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V197"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_3"}]},
			{"Name" : "relu_shiftx_buf_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_4"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V136"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V136"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_4"}]},
			{"Name" : "relu_shifty_buf_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_4"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V167"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V167"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_4"}]},
			{"Name" : "relu_weight_buf_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_4"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V198"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V198"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_4"}]},
			{"Name" : "relu_shiftx_buf_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_5"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V137"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V137"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_5"}]},
			{"Name" : "relu_shifty_buf_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_5"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V168"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V168"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_5"}]},
			{"Name" : "relu_weight_buf_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_5"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V199"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V199"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_5"}]},
			{"Name" : "relu_shiftx_buf_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_6"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V138"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V138"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_6"}]},
			{"Name" : "relu_shifty_buf_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_6"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V169"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V169"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_6"}]},
			{"Name" : "relu_weight_buf_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_6"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V200"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V200"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_6"}]},
			{"Name" : "relu_shiftx_buf_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_7"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V139"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V139"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_7"}]},
			{"Name" : "relu_shifty_buf_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_7"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V170"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V170"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_7"}]},
			{"Name" : "relu_weight_buf_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_7"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V201"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V201"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_7"}]},
			{"Name" : "relu_shiftx_buf_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_8"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V140"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V140"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_8"}]},
			{"Name" : "relu_shifty_buf_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_8"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V171"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V171"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_8"}]},
			{"Name" : "relu_weight_buf_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_8"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V202"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V202"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_8"}]},
			{"Name" : "relu_shiftx_buf_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_9"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V141"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V141"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_9"}]},
			{"Name" : "relu_shifty_buf_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_9"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V172"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V172"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_9"}]},
			{"Name" : "relu_weight_buf_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_9"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V203"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V203"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_9"}]},
			{"Name" : "relu_shiftx_buf_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_10"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V142"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V142"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_10"}]},
			{"Name" : "relu_shifty_buf_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_10"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V173"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V173"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_10"}]},
			{"Name" : "relu_weight_buf_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_10"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V204"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V204"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_10"}]},
			{"Name" : "relu_shiftx_buf_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_11"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V143"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V143"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_11"}]},
			{"Name" : "relu_shifty_buf_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_11"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V174"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V174"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_11"}]},
			{"Name" : "relu_weight_buf_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_11"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V205"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V205"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_11"}]},
			{"Name" : "relu_shiftx_buf_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_12"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V144"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V144"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_12"}]},
			{"Name" : "relu_shifty_buf_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_12"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V175"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V175"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_12"}]},
			{"Name" : "relu_weight_buf_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_12"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V206"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V206"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_12"}]},
			{"Name" : "relu_shiftx_buf_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_13"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V145"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V145"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_13"}]},
			{"Name" : "relu_shifty_buf_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_13"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V176"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V176"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_13"}]},
			{"Name" : "relu_weight_buf_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_13"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V207"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V207"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_13"}]},
			{"Name" : "relu_shiftx_buf_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_14"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V146"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V146"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_14"}]},
			{"Name" : "relu_shifty_buf_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_14"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V177"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V177"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_14"}]},
			{"Name" : "relu_weight_buf_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_14"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V208"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V208"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_14"}]},
			{"Name" : "relu_shiftx_buf_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_15"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V147"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V147"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_15"}]},
			{"Name" : "relu_shifty_buf_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_15"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V178"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V178"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_15"}]},
			{"Name" : "relu_weight_buf_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_15"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V209"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V209"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_15"}]},
			{"Name" : "relu_shiftx_buf_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_16"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V148"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V148"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_16"}]},
			{"Name" : "relu_shifty_buf_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_16"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V179"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V179"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_16"}]},
			{"Name" : "relu_weight_buf_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_16"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V210"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V210"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_16"}]},
			{"Name" : "relu_shiftx_buf_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_17"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V149"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V149"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_17"}]},
			{"Name" : "relu_shifty_buf_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_17"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V180"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V180"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_17"}]},
			{"Name" : "relu_weight_buf_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_17"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V211"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V211"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_17"}]},
			{"Name" : "relu_shiftx_buf_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_18"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V150"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V150"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_18"}]},
			{"Name" : "relu_shifty_buf_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_18"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V181"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V181"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_18"}]},
			{"Name" : "relu_weight_buf_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_18"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V212"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V212"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_18"}]},
			{"Name" : "relu_shiftx_buf_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_19"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V151"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V151"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_19"}]},
			{"Name" : "relu_shifty_buf_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_19"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V182"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V182"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_19"}]},
			{"Name" : "relu_weight_buf_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_19"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V213"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V213"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_19"}]},
			{"Name" : "relu_shiftx_buf_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_20"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V152"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V152"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_20"}]},
			{"Name" : "relu_shifty_buf_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_20"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V183"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V183"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_20"}]},
			{"Name" : "relu_weight_buf_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_20"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V214"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V214"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_20"}]},
			{"Name" : "relu_shiftx_buf_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_21"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V153"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V153"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_21"}]},
			{"Name" : "relu_shifty_buf_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_21"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V184"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V184"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_21"}]},
			{"Name" : "relu_weight_buf_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_21"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V215"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V215"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_21"}]},
			{"Name" : "relu_shiftx_buf_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_22"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V154"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V154"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_22"}]},
			{"Name" : "relu_shifty_buf_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_22"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V185"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V185"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_22"}]},
			{"Name" : "relu_weight_buf_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_22"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V216"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V216"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_22"}]},
			{"Name" : "relu_shiftx_buf_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_23"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V155"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V155"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_23"}]},
			{"Name" : "relu_shifty_buf_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_23"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V186"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V186"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_23"}]},
			{"Name" : "relu_weight_buf_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_23"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V217"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V217"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_23"}]},
			{"Name" : "relu_shiftx_buf_V_24", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_24"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V156"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V156"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_24"}]},
			{"Name" : "relu_shifty_buf_V_24", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_24"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V187"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V187"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_24"}]},
			{"Name" : "relu_weight_buf_V_24", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_24"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V218"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V218"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_24"}]},
			{"Name" : "relu_shiftx_buf_V_25", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_25"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V157"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V157"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_25"}]},
			{"Name" : "relu_shifty_buf_V_25", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_25"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V188"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V188"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_25"}]},
			{"Name" : "relu_weight_buf_V_25", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_25"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V219"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V219"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_25"}]},
			{"Name" : "relu_shiftx_buf_V_26", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_26"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V158"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V158"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_26"}]},
			{"Name" : "relu_shifty_buf_V_26", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_26"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V189"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V189"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_26"}]},
			{"Name" : "relu_weight_buf_V_26", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_26"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V220"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V220"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_26"}]},
			{"Name" : "relu_shiftx_buf_V_27", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_27"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V159"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V159"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_27"}]},
			{"Name" : "relu_shifty_buf_V_27", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_27"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V190"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V190"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_27"}]},
			{"Name" : "relu_weight_buf_V_27", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_27"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V221"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V221"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_27"}]},
			{"Name" : "relu_shiftx_buf_V_28", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_28"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V160"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V160"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_28"}]},
			{"Name" : "relu_shifty_buf_V_28", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_28"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V191"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V191"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_28"}]},
			{"Name" : "relu_weight_buf_V_28", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_28"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V222"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V222"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_28"}]},
			{"Name" : "relu_shiftx_buf_V_29", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_29"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V161"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V161"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_29"}]},
			{"Name" : "relu_shifty_buf_V_29", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_29"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V192"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V192"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_29"}]},
			{"Name" : "relu_weight_buf_V_29", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_29"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V223"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V223"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_29"}]},
			{"Name" : "relu_shiftx_buf_V_30", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_30"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V162"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V162"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_30"}]},
			{"Name" : "relu_shifty_buf_V_30", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_30"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V193"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V193"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_30"}]},
			{"Name" : "relu_weight_buf_V_30", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_30"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V224"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V224"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_30"}]},
			{"Name" : "relu_shiftx_buf_V_31", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shiftx_buf_V_31"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shiftx_V163"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shiftx_V163"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shiftx_buf_V_31"}]},
			{"Name" : "relu_shifty_buf_V_31", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_shifty_buf_V_31"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_shifty_V194"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_shifty_V194"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_shifty_buf_V_31"}]},
			{"Name" : "relu_weight_buf_V_31", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "835", "SubInstance" : "grp_load_weights_3x3_all_fu_13038", "Port" : "relu_weight_buf_V_31"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "relu_weights_V225"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "relu_weights_V225"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "relu_weight_buf_V_31"}]},
			{"Name" : "FM_buf0_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_0"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_0"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_0_V"},
					{"ID" : "847", "SubInstance" : "grp_avgpool_7x7_1_fu_14148", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_1"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_1"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_1_V"},
					{"ID" : "849", "SubInstance" : "grp_avgpool_7x7_1_fu_14154", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_2"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_2"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_2_V"},
					{"ID" : "847", "SubInstance" : "grp_avgpool_7x7_1_fu_14148", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_3"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_3"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_3_V"},
					{"ID" : "849", "SubInstance" : "grp_avgpool_7x7_1_fu_14154", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_4"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_4"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_4_V"},
					{"ID" : "847", "SubInstance" : "grp_avgpool_7x7_1_fu_14148", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_5"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_5"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_5_V"},
					{"ID" : "849", "SubInstance" : "grp_avgpool_7x7_1_fu_14154", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_6"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_6"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_6_V"},
					{"ID" : "847", "SubInstance" : "grp_avgpool_7x7_1_fu_14148", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_7"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_7"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_7_V"},
					{"ID" : "849", "SubInstance" : "grp_avgpool_7x7_1_fu_14154", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_8"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_8"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_8_V"},
					{"ID" : "847", "SubInstance" : "grp_avgpool_7x7_1_fu_14148", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_9"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_9"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_9_V"},
					{"ID" : "849", "SubInstance" : "grp_avgpool_7x7_1_fu_14154", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_10"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_10"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_10_V"},
					{"ID" : "847", "SubInstance" : "grp_avgpool_7x7_1_fu_14148", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_11"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_11"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_11_V"},
					{"ID" : "849", "SubInstance" : "grp_avgpool_7x7_1_fu_14154", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_12"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_12"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_12_V"},
					{"ID" : "847", "SubInstance" : "grp_avgpool_7x7_1_fu_14148", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_13"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_13"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_13_V"},
					{"ID" : "849", "SubInstance" : "grp_avgpool_7x7_1_fu_14154", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_14"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_14"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_14_V"},
					{"ID" : "847", "SubInstance" : "grp_avgpool_7x7_1_fu_14148", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_15"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_15"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_15_V"},
					{"ID" : "849", "SubInstance" : "grp_avgpool_7x7_1_fu_14154", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_16"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_16"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_16_V"},
					{"ID" : "847", "SubInstance" : "grp_avgpool_7x7_1_fu_14148", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_17"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_17"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_17_V"},
					{"ID" : "849", "SubInstance" : "grp_avgpool_7x7_1_fu_14154", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_18"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_18"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_18_V"},
					{"ID" : "847", "SubInstance" : "grp_avgpool_7x7_1_fu_14148", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_19"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_19"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_19_V"},
					{"ID" : "849", "SubInstance" : "grp_avgpool_7x7_1_fu_14154", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_20"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_20"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_20_V"},
					{"ID" : "847", "SubInstance" : "grp_avgpool_7x7_1_fu_14148", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_21"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_21"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_21_V"},
					{"ID" : "849", "SubInstance" : "grp_avgpool_7x7_1_fu_14154", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_22"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_22"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_22_V"},
					{"ID" : "847", "SubInstance" : "grp_avgpool_7x7_1_fu_14148", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_23"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_23"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_23_V"},
					{"ID" : "849", "SubInstance" : "grp_avgpool_7x7_1_fu_14154", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_24", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_24"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_24"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_24_V"},
					{"ID" : "847", "SubInstance" : "grp_avgpool_7x7_1_fu_14148", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_25", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_25"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_25"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_25_V"},
					{"ID" : "849", "SubInstance" : "grp_avgpool_7x7_1_fu_14154", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_26", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_26"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_26"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_26_V"},
					{"ID" : "847", "SubInstance" : "grp_avgpool_7x7_1_fu_14148", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_27", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_27"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_27"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_27_V"},
					{"ID" : "849", "SubInstance" : "grp_avgpool_7x7_1_fu_14154", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_28", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_28"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_28"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_28_V"},
					{"ID" : "847", "SubInstance" : "grp_avgpool_7x7_1_fu_14148", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_29", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_29"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_29"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_29_V"},
					{"ID" : "849", "SubInstance" : "grp_avgpool_7x7_1_fu_14154", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_30", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_30"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_30"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_30_V"},
					{"ID" : "851", "SubInstance" : "grp_avgpool_7x7_1_fu_14188", "Port" : "buf_V"}]},
			{"Name" : "FM_buf0_V_31", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "FM_buf0_V_31"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "FM_buf0_V_31"},
					{"ID" : "843", "SubInstance" : "grp_load_buf_from_DDR_fu_14064", "Port" : "dest_31_V"},
					{"ID" : "853", "SubInstance" : "grp_avgpool_7x7_1_fu_14194", "Port" : "buf_V"}]},
			{"Name" : "pg_buf_all_V_32", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_32"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_32"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_32"}]},
			{"Name" : "pg_buf_all_V_33", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_33"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_33"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_33"}]},
			{"Name" : "pg_buf_all_V_34", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_34"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_34"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_34"}]},
			{"Name" : "pg_buf_all_V_35", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_35"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_35"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_35"}]},
			{"Name" : "pg_buf_all_V_36", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_36"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_36"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_36"}]},
			{"Name" : "pg_buf_all_V_37", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_37"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_37"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_37"}]},
			{"Name" : "pg_buf_all_V_38", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_38"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_38"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_38"}]},
			{"Name" : "pg_buf_all_V_39", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_39"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_39"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_39"}]},
			{"Name" : "pg_buf_all_V_40", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_40"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_40"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_40"}]},
			{"Name" : "pg_buf_all_V_41", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_41"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_41"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_41"}]},
			{"Name" : "pg_buf_all_V_42", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_42"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_42"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_42"}]},
			{"Name" : "pg_buf_all_V_43", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_43"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_43"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_43"}]},
			{"Name" : "pg_buf_all_V_44", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_44"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_44"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_44"}]},
			{"Name" : "pg_buf_all_V_45", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_45"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_45"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_45"}]},
			{"Name" : "pg_buf_all_V_46", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_46"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_46"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_46"}]},
			{"Name" : "pg_buf_all_V_47", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_47"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_47"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_47"}]},
			{"Name" : "pg_buf_all_V_48", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_48"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_48"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_48"}]},
			{"Name" : "pg_buf_all_V_49", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_49"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_49"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_49"}]},
			{"Name" : "pg_buf_all_V_50", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_50"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_50"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_50"}]},
			{"Name" : "pg_buf_all_V_51", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_51"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_51"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_51"}]},
			{"Name" : "pg_buf_all_V_52", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_52"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_52"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_52"}]},
			{"Name" : "pg_buf_all_V_53", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_53"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_53"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_53"}]},
			{"Name" : "pg_buf_all_V_54", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_54"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_54"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_54"}]},
			{"Name" : "pg_buf_all_V_55", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_55"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_55"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_55"}]},
			{"Name" : "pg_buf_all_V_56", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_56"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_56"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_56"}]},
			{"Name" : "pg_buf_all_V_57", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_57"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_57"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_57"}]},
			{"Name" : "pg_buf_all_V_58", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_58"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_58"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_58"}]},
			{"Name" : "pg_buf_all_V_59", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_59"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_59"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_59"}]},
			{"Name" : "pg_buf_all_V_60", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_60"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_60"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_60"}]},
			{"Name" : "pg_buf_all_V_61", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_61"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_61"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_61"}]},
			{"Name" : "pg_buf_all_V_62", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_62"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_62"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_62"}]},
			{"Name" : "pg_buf_all_V_63", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_store_bufs_organize_fu_9482", "Port" : "pg_buf_all_V_63"},
					{"ID" : "801", "SubInstance" : "grp_store_bufs_organize_s_fu_12639", "Port" : "pg_buf_all_V_63"},
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf_all_V_63"}]},
			{"Name" : "pg_buf0_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf0_V_0"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bottom_0_V"}]},
			{"Name" : "pg_buf0_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf0_V_1"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bottom_1_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bottom_1_V"}]},
			{"Name" : "pg_buf0_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf0_V_2"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bottom_2_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bottom_2_V"}]},
			{"Name" : "pg_buf0_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf0_V_3"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bottom_3_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bottom_3_V"}]},
			{"Name" : "pg_buf0_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf0_V_4"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bottom_4_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bottom_4_V"}]},
			{"Name" : "pg_buf0_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf0_V_5"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bottom_5_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bottom_5_V"}]},
			{"Name" : "pg_buf0_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf0_V_6"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bottom_6_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bottom_6_V"}]},
			{"Name" : "pg_buf0_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf0_V_7"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bottom_7_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "bottom_7_V"}]},
			{"Name" : "pg_buf0_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "841", "SubInstance" : "grp_load_buf_from_buf_al_fu_13906", "Port" : "pg_buf0_V_8"},
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "bottom_8_V"}]},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "540", "SubInstance" : "grp_pgconv64_1bit_fu_8494", "Port" : "lut16_V"},
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "lut16_V"}]},
			{"Name" : "weight_buf_1x1_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_0"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_0"}]},
			{"Name" : "weight_buf_1x1_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_1"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_1"}]},
			{"Name" : "weight_buf_1x1_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_2"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_2"}]},
			{"Name" : "weight_buf_1x1_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_3"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_3"}]},
			{"Name" : "weight_buf_1x1_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_4"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_4"}]},
			{"Name" : "weight_buf_1x1_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_5"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_5"}]},
			{"Name" : "weight_buf_1x1_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_6"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_6"}]},
			{"Name" : "weight_buf_1x1_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_7"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_7"}]},
			{"Name" : "weight_buf_1x1_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_8"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_8"}]},
			{"Name" : "weight_buf_1x1_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_9"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_9"}]},
			{"Name" : "weight_buf_1x1_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_10"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_10"}]},
			{"Name" : "weight_buf_1x1_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_11"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_11"}]},
			{"Name" : "weight_buf_1x1_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_12"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_12"}]},
			{"Name" : "weight_buf_1x1_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_13"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_13"}]},
			{"Name" : "weight_buf_1x1_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_14"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_14"}]},
			{"Name" : "weight_buf_1x1_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_15"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_15"}]},
			{"Name" : "weight_buf_1x1_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_16"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_16"}]},
			{"Name" : "weight_buf_1x1_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_17"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_17"}]},
			{"Name" : "weight_buf_1x1_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_18"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_18"}]},
			{"Name" : "weight_buf_1x1_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_19"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_19"}]},
			{"Name" : "weight_buf_1x1_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_20"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_20"}]},
			{"Name" : "weight_buf_1x1_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_21"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_21"}]},
			{"Name" : "weight_buf_1x1_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_22"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_22"}]},
			{"Name" : "weight_buf_1x1_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_23"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_23"}]},
			{"Name" : "weight_buf_1x1_V_24", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_24"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_24"}]},
			{"Name" : "weight_buf_1x1_V_25", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_25"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_25"}]},
			{"Name" : "weight_buf_1x1_V_26", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_26"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_26"}]},
			{"Name" : "weight_buf_1x1_V_27", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_27"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_27"}]},
			{"Name" : "weight_buf_1x1_V_28", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_28"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_28"}]},
			{"Name" : "weight_buf_1x1_V_29", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_29"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_29"}]},
			{"Name" : "weight_buf_1x1_V_30", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_30"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_30"}]},
			{"Name" : "weight_buf_1x1_V_31", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "737", "SubInstance" : "grp_pgconv64_1x1_1bit_fu_10350", "Port" : "weight_buf_1x1_V_31"},
					{"ID" : "837", "SubInstance" : "grp_load_weights_1x1_all_fu_13434", "Port" : "weight_buf_1x1_V_31"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_1_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_2_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_3_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_4_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_5_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_6_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_7_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_8_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_9_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_10_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_11_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_12_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_13_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_14_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_15_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_16_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_17_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_18_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_19_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_20_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_21_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_22_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_23_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_24_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_25_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_26_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_27_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_28_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_29_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_30_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_weight_buf_V_31_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_0_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_1_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_2_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_3_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_4_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_5_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_6_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_7_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_8_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_9_U", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_10_U", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_11_U", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_12_U", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_13_U", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_14_U", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_15_U", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_16_U", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_17_U", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_18_U", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_19_U", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_20_U", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_21_U", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_22_U", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_23_U", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_24_U", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_25_U", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_26_U", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_27_U", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_28_U", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_29_U", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_30_U", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bn_bias_buf_V_31_U", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_0_U", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_1_U", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_2_U", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_3_U", "Parent" : "0"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_4_U", "Parent" : "0"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_5_U", "Parent" : "0"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_6_U", "Parent" : "0"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_7_U", "Parent" : "0"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_8_U", "Parent" : "0"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_9_U", "Parent" : "0"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_10_U", "Parent" : "0"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_11_U", "Parent" : "0"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_12_U", "Parent" : "0"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_13_U", "Parent" : "0"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_14_U", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_15_U", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_16_U", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_17_U", "Parent" : "0"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_18_U", "Parent" : "0"},
	{"ID" : "84", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_19_U", "Parent" : "0"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_20_U", "Parent" : "0"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_21_U", "Parent" : "0"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_22_U", "Parent" : "0"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_23_U", "Parent" : "0"},
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_24_U", "Parent" : "0"},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_25_U", "Parent" : "0"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_26_U", "Parent" : "0"},
	{"ID" : "92", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_27_U", "Parent" : "0"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_28_U", "Parent" : "0"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_29_U", "Parent" : "0"},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_30_U", "Parent" : "0"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf_acc0_V_31_U", "Parent" : "0"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_0_U", "Parent" : "0"},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_1_U", "Parent" : "0"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_2_U", "Parent" : "0"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_3_U", "Parent" : "0"},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_4_U", "Parent" : "0"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_5_U", "Parent" : "0"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_6_U", "Parent" : "0"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_7_U", "Parent" : "0"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_8_U", "Parent" : "0"},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_9_U", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_10_U", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_11_U", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_12_U", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_13_U", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_14_U", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_15_U", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_16_U", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_17_U", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_18_U", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_19_U", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_20_U", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_21_U", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_22_U", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_23_U", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_24_U", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_25_U", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_26_U", "Parent" : "0"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_27_U", "Parent" : "0"},
	{"ID" : "125", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_28_U", "Parent" : "0"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_29_U", "Parent" : "0"},
	{"ID" : "127", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_30_U", "Parent" : "0"},
	{"ID" : "128", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_31_U", "Parent" : "0"},
	{"ID" : "129", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_0_U", "Parent" : "0"},
	{"ID" : "130", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_1_U", "Parent" : "0"},
	{"ID" : "131", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_2_U", "Parent" : "0"},
	{"ID" : "132", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_3_U", "Parent" : "0"},
	{"ID" : "133", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_4_U", "Parent" : "0"},
	{"ID" : "134", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_5_U", "Parent" : "0"},
	{"ID" : "135", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_6_U", "Parent" : "0"},
	{"ID" : "136", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_7_U", "Parent" : "0"},
	{"ID" : "137", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_8_U", "Parent" : "0"},
	{"ID" : "138", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_9_U", "Parent" : "0"},
	{"ID" : "139", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_10_U", "Parent" : "0"},
	{"ID" : "140", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_11_U", "Parent" : "0"},
	{"ID" : "141", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_12_U", "Parent" : "0"},
	{"ID" : "142", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_13_U", "Parent" : "0"},
	{"ID" : "143", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_14_U", "Parent" : "0"},
	{"ID" : "144", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_15_U", "Parent" : "0"},
	{"ID" : "145", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_16_U", "Parent" : "0"},
	{"ID" : "146", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_17_U", "Parent" : "0"},
	{"ID" : "147", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_18_U", "Parent" : "0"},
	{"ID" : "148", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_19_U", "Parent" : "0"},
	{"ID" : "149", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_20_U", "Parent" : "0"},
	{"ID" : "150", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_21_U", "Parent" : "0"},
	{"ID" : "151", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_22_U", "Parent" : "0"},
	{"ID" : "152", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_23_U", "Parent" : "0"},
	{"ID" : "153", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_24_U", "Parent" : "0"},
	{"ID" : "154", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_25_U", "Parent" : "0"},
	{"ID" : "155", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_26_U", "Parent" : "0"},
	{"ID" : "156", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_27_U", "Parent" : "0"},
	{"ID" : "157", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_28_U", "Parent" : "0"},
	{"ID" : "158", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_29_U", "Parent" : "0"},
	{"ID" : "159", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_30_U", "Parent" : "0"},
	{"ID" : "160", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_3x3_V_31_U", "Parent" : "0"},
	{"ID" : "161", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_0_U", "Parent" : "0"},
	{"ID" : "162", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_0_U", "Parent" : "0"},
	{"ID" : "163", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_0_U", "Parent" : "0"},
	{"ID" : "164", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_1_U", "Parent" : "0"},
	{"ID" : "165", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_1_U", "Parent" : "0"},
	{"ID" : "166", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_1_U", "Parent" : "0"},
	{"ID" : "167", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_2_U", "Parent" : "0"},
	{"ID" : "168", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_2_U", "Parent" : "0"},
	{"ID" : "169", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_2_U", "Parent" : "0"},
	{"ID" : "170", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_3_U", "Parent" : "0"},
	{"ID" : "171", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_3_U", "Parent" : "0"},
	{"ID" : "172", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_3_U", "Parent" : "0"},
	{"ID" : "173", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_4_U", "Parent" : "0"},
	{"ID" : "174", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_4_U", "Parent" : "0"},
	{"ID" : "175", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_4_U", "Parent" : "0"},
	{"ID" : "176", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_5_U", "Parent" : "0"},
	{"ID" : "177", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_5_U", "Parent" : "0"},
	{"ID" : "178", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_5_U", "Parent" : "0"},
	{"ID" : "179", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_6_U", "Parent" : "0"},
	{"ID" : "180", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_6_U", "Parent" : "0"},
	{"ID" : "181", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_6_U", "Parent" : "0"},
	{"ID" : "182", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_7_U", "Parent" : "0"},
	{"ID" : "183", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_7_U", "Parent" : "0"},
	{"ID" : "184", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_7_U", "Parent" : "0"},
	{"ID" : "185", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_8_U", "Parent" : "0"},
	{"ID" : "186", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_8_U", "Parent" : "0"},
	{"ID" : "187", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_8_U", "Parent" : "0"},
	{"ID" : "188", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_9_U", "Parent" : "0"},
	{"ID" : "189", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_9_U", "Parent" : "0"},
	{"ID" : "190", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_9_U", "Parent" : "0"},
	{"ID" : "191", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_10_U", "Parent" : "0"},
	{"ID" : "192", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_10_U", "Parent" : "0"},
	{"ID" : "193", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_10_U", "Parent" : "0"},
	{"ID" : "194", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_11_U", "Parent" : "0"},
	{"ID" : "195", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_11_U", "Parent" : "0"},
	{"ID" : "196", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_11_U", "Parent" : "0"},
	{"ID" : "197", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_12_U", "Parent" : "0"},
	{"ID" : "198", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_12_U", "Parent" : "0"},
	{"ID" : "199", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_12_U", "Parent" : "0"},
	{"ID" : "200", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_13_U", "Parent" : "0"},
	{"ID" : "201", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_13_U", "Parent" : "0"},
	{"ID" : "202", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_13_U", "Parent" : "0"},
	{"ID" : "203", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_14_U", "Parent" : "0"},
	{"ID" : "204", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_14_U", "Parent" : "0"},
	{"ID" : "205", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_14_U", "Parent" : "0"},
	{"ID" : "206", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_15_U", "Parent" : "0"},
	{"ID" : "207", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_15_U", "Parent" : "0"},
	{"ID" : "208", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_15_U", "Parent" : "0"},
	{"ID" : "209", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_16_U", "Parent" : "0"},
	{"ID" : "210", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_16_U", "Parent" : "0"},
	{"ID" : "211", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_16_U", "Parent" : "0"},
	{"ID" : "212", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_17_U", "Parent" : "0"},
	{"ID" : "213", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_17_U", "Parent" : "0"},
	{"ID" : "214", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_17_U", "Parent" : "0"},
	{"ID" : "215", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_18_U", "Parent" : "0"},
	{"ID" : "216", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_18_U", "Parent" : "0"},
	{"ID" : "217", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_18_U", "Parent" : "0"},
	{"ID" : "218", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_19_U", "Parent" : "0"},
	{"ID" : "219", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_19_U", "Parent" : "0"},
	{"ID" : "220", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_19_U", "Parent" : "0"},
	{"ID" : "221", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_20_U", "Parent" : "0"},
	{"ID" : "222", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_20_U", "Parent" : "0"},
	{"ID" : "223", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_20_U", "Parent" : "0"},
	{"ID" : "224", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_21_U", "Parent" : "0"},
	{"ID" : "225", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_21_U", "Parent" : "0"},
	{"ID" : "226", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_21_U", "Parent" : "0"},
	{"ID" : "227", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_22_U", "Parent" : "0"},
	{"ID" : "228", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_22_U", "Parent" : "0"},
	{"ID" : "229", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_22_U", "Parent" : "0"},
	{"ID" : "230", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_23_U", "Parent" : "0"},
	{"ID" : "231", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_23_U", "Parent" : "0"},
	{"ID" : "232", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_23_U", "Parent" : "0"},
	{"ID" : "233", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_24_U", "Parent" : "0"},
	{"ID" : "234", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_24_U", "Parent" : "0"},
	{"ID" : "235", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_24_U", "Parent" : "0"},
	{"ID" : "236", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_25_U", "Parent" : "0"},
	{"ID" : "237", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_25_U", "Parent" : "0"},
	{"ID" : "238", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_25_U", "Parent" : "0"},
	{"ID" : "239", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_26_U", "Parent" : "0"},
	{"ID" : "240", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_26_U", "Parent" : "0"},
	{"ID" : "241", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_26_U", "Parent" : "0"},
	{"ID" : "242", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_27_U", "Parent" : "0"},
	{"ID" : "243", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_27_U", "Parent" : "0"},
	{"ID" : "244", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_27_U", "Parent" : "0"},
	{"ID" : "245", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_28_U", "Parent" : "0"},
	{"ID" : "246", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_28_U", "Parent" : "0"},
	{"ID" : "247", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_28_U", "Parent" : "0"},
	{"ID" : "248", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_29_U", "Parent" : "0"},
	{"ID" : "249", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_29_U", "Parent" : "0"},
	{"ID" : "250", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_29_U", "Parent" : "0"},
	{"ID" : "251", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_30_U", "Parent" : "0"},
	{"ID" : "252", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_30_U", "Parent" : "0"},
	{"ID" : "253", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_30_U", "Parent" : "0"},
	{"ID" : "254", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shiftx_buf_V_31_U", "Parent" : "0"},
	{"ID" : "255", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_shifty_buf_V_31_U", "Parent" : "0"},
	{"ID" : "256", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_weight_buf_V_31_U", "Parent" : "0"},
	{"ID" : "257", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_0_U", "Parent" : "0"},
	{"ID" : "258", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_1_U", "Parent" : "0"},
	{"ID" : "259", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_2_U", "Parent" : "0"},
	{"ID" : "260", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_3_U", "Parent" : "0"},
	{"ID" : "261", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_4_U", "Parent" : "0"},
	{"ID" : "262", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_5_U", "Parent" : "0"},
	{"ID" : "263", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_6_U", "Parent" : "0"},
	{"ID" : "264", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_7_U", "Parent" : "0"},
	{"ID" : "265", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_8_U", "Parent" : "0"},
	{"ID" : "266", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_9_U", "Parent" : "0"},
	{"ID" : "267", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_10_U", "Parent" : "0"},
	{"ID" : "268", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_11_U", "Parent" : "0"},
	{"ID" : "269", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_12_U", "Parent" : "0"},
	{"ID" : "270", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_13_U", "Parent" : "0"},
	{"ID" : "271", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_14_U", "Parent" : "0"},
	{"ID" : "272", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_15_U", "Parent" : "0"},
	{"ID" : "273", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_16_U", "Parent" : "0"},
	{"ID" : "274", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_17_U", "Parent" : "0"},
	{"ID" : "275", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_18_U", "Parent" : "0"},
	{"ID" : "276", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_19_U", "Parent" : "0"},
	{"ID" : "277", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_20_U", "Parent" : "0"},
	{"ID" : "278", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_21_U", "Parent" : "0"},
	{"ID" : "279", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_22_U", "Parent" : "0"},
	{"ID" : "280", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_23_U", "Parent" : "0"},
	{"ID" : "281", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_24_U", "Parent" : "0"},
	{"ID" : "282", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_25_U", "Parent" : "0"},
	{"ID" : "283", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_26_U", "Parent" : "0"},
	{"ID" : "284", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_27_U", "Parent" : "0"},
	{"ID" : "285", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_28_U", "Parent" : "0"},
	{"ID" : "286", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_29_U", "Parent" : "0"},
	{"ID" : "287", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_30_U", "Parent" : "0"},
	{"ID" : "288", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FM_buf0_V_31_U", "Parent" : "0"},
	{"ID" : "289", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_32_U", "Parent" : "0"},
	{"ID" : "290", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_33_U", "Parent" : "0"},
	{"ID" : "291", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_34_U", "Parent" : "0"},
	{"ID" : "292", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_35_U", "Parent" : "0"},
	{"ID" : "293", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_36_U", "Parent" : "0"},
	{"ID" : "294", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_37_U", "Parent" : "0"},
	{"ID" : "295", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_38_U", "Parent" : "0"},
	{"ID" : "296", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_39_U", "Parent" : "0"},
	{"ID" : "297", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_40_U", "Parent" : "0"},
	{"ID" : "298", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_41_U", "Parent" : "0"},
	{"ID" : "299", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_42_U", "Parent" : "0"},
	{"ID" : "300", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_43_U", "Parent" : "0"},
	{"ID" : "301", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_44_U", "Parent" : "0"},
	{"ID" : "302", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_45_U", "Parent" : "0"},
	{"ID" : "303", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_46_U", "Parent" : "0"},
	{"ID" : "304", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_47_U", "Parent" : "0"},
	{"ID" : "305", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_48_U", "Parent" : "0"},
	{"ID" : "306", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_49_U", "Parent" : "0"},
	{"ID" : "307", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_50_U", "Parent" : "0"},
	{"ID" : "308", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_51_U", "Parent" : "0"},
	{"ID" : "309", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_52_U", "Parent" : "0"},
	{"ID" : "310", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_53_U", "Parent" : "0"},
	{"ID" : "311", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_54_U", "Parent" : "0"},
	{"ID" : "312", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_55_U", "Parent" : "0"},
	{"ID" : "313", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_56_U", "Parent" : "0"},
	{"ID" : "314", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_57_U", "Parent" : "0"},
	{"ID" : "315", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_58_U", "Parent" : "0"},
	{"ID" : "316", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_59_U", "Parent" : "0"},
	{"ID" : "317", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_60_U", "Parent" : "0"},
	{"ID" : "318", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_61_U", "Parent" : "0"},
	{"ID" : "319", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_62_U", "Parent" : "0"},
	{"ID" : "320", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf_all_V_63_U", "Parent" : "0"},
	{"ID" : "321", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf0_V_0_U", "Parent" : "0"},
	{"ID" : "322", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf0_V_1_U", "Parent" : "0"},
	{"ID" : "323", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf0_V_2_U", "Parent" : "0"},
	{"ID" : "324", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf0_V_3_U", "Parent" : "0"},
	{"ID" : "325", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf0_V_4_U", "Parent" : "0"},
	{"ID" : "326", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf0_V_5_U", "Parent" : "0"},
	{"ID" : "327", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf0_V_6_U", "Parent" : "0"},
	{"ID" : "328", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf0_V_7_U", "Parent" : "0"},
	{"ID" : "329", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pg_buf0_V_8_U", "Parent" : "0"},
	{"ID" : "330", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_0_U", "Parent" : "0"},
	{"ID" : "331", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_1_U", "Parent" : "0"},
	{"ID" : "332", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_2_U", "Parent" : "0"},
	{"ID" : "333", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_3_U", "Parent" : "0"},
	{"ID" : "334", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_4_U", "Parent" : "0"},
	{"ID" : "335", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_5_U", "Parent" : "0"},
	{"ID" : "336", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_6_U", "Parent" : "0"},
	{"ID" : "337", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_7_U", "Parent" : "0"},
	{"ID" : "338", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_8_U", "Parent" : "0"},
	{"ID" : "339", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_9_U", "Parent" : "0"},
	{"ID" : "340", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_10_U", "Parent" : "0"},
	{"ID" : "341", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_11_U", "Parent" : "0"},
	{"ID" : "342", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_12_U", "Parent" : "0"},
	{"ID" : "343", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_13_U", "Parent" : "0"},
	{"ID" : "344", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_14_U", "Parent" : "0"},
	{"ID" : "345", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_15_U", "Parent" : "0"},
	{"ID" : "346", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_16_U", "Parent" : "0"},
	{"ID" : "347", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_17_U", "Parent" : "0"},
	{"ID" : "348", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_18_U", "Parent" : "0"},
	{"ID" : "349", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_19_U", "Parent" : "0"},
	{"ID" : "350", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_20_U", "Parent" : "0"},
	{"ID" : "351", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_21_U", "Parent" : "0"},
	{"ID" : "352", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_22_U", "Parent" : "0"},
	{"ID" : "353", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_23_U", "Parent" : "0"},
	{"ID" : "354", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_24_U", "Parent" : "0"},
	{"ID" : "355", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_25_U", "Parent" : "0"},
	{"ID" : "356", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_26_U", "Parent" : "0"},
	{"ID" : "357", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_27_U", "Parent" : "0"},
	{"ID" : "358", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_28_U", "Parent" : "0"},
	{"ID" : "359", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_29_U", "Parent" : "0"},
	{"ID" : "360", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_30_U", "Parent" : "0"},
	{"ID" : "361", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_1x1_V_31_U", "Parent" : "0"},
	{"ID" : "362", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_AXILiteS_s_axi_U", "Parent" : "0"},
	{"ID" : "363", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_IMG_m_axi_U", "Parent" : "0"},
	{"ID" : "364", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_BUS512_m_axi_U", "Parent" : "0"},
	{"ID" : "365", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_DDR512_m_axi_U", "Parent" : "0"},
	{"ID" : "366", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_BUS32_m_axi_U", "Parent" : "0"},
	{"ID" : "367", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_0_V_U", "Parent" : "0"},
	{"ID" : "368", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_1_V_U", "Parent" : "0"},
	{"ID" : "369", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_2_V_U", "Parent" : "0"},
	{"ID" : "370", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_3_V_U", "Parent" : "0"},
	{"ID" : "371", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_4_V_U", "Parent" : "0"},
	{"ID" : "372", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_5_V_U", "Parent" : "0"},
	{"ID" : "373", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_6_V_U", "Parent" : "0"},
	{"ID" : "374", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_7_V_U", "Parent" : "0"},
	{"ID" : "375", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_8_V_U", "Parent" : "0"},
	{"ID" : "376", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_9_V_U", "Parent" : "0"},
	{"ID" : "377", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_10_V_U", "Parent" : "0"},
	{"ID" : "378", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_11_V_U", "Parent" : "0"},
	{"ID" : "379", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_12_V_U", "Parent" : "0"},
	{"ID" : "380", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_13_V_U", "Parent" : "0"},
	{"ID" : "381", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_14_V_U", "Parent" : "0"},
	{"ID" : "382", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_15_V_U", "Parent" : "0"},
	{"ID" : "383", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_16_V_U", "Parent" : "0"},
	{"ID" : "384", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_17_V_U", "Parent" : "0"},
	{"ID" : "385", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_18_V_U", "Parent" : "0"},
	{"ID" : "386", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_19_V_U", "Parent" : "0"},
	{"ID" : "387", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_20_V_U", "Parent" : "0"},
	{"ID" : "388", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_21_V_U", "Parent" : "0"},
	{"ID" : "389", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_22_V_U", "Parent" : "0"},
	{"ID" : "390", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_23_V_U", "Parent" : "0"},
	{"ID" : "391", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_24_V_U", "Parent" : "0"},
	{"ID" : "392", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_25_V_U", "Parent" : "0"},
	{"ID" : "393", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_26_V_U", "Parent" : "0"},
	{"ID" : "394", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_27_V_U", "Parent" : "0"},
	{"ID" : "395", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_28_V_U", "Parent" : "0"},
	{"ID" : "396", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_29_V_U", "Parent" : "0"},
	{"ID" : "397", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_30_V_U", "Parent" : "0"},
	{"ID" : "398", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weights_31_V_U", "Parent" : "0"},
	{"ID" : "399", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_img0_V_U", "Parent" : "0"},
	{"ID" : "400", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_img1_V_U", "Parent" : "0"},
	{"ID" : "401", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.out_buf_V_U", "Parent" : "0"},
	{"ID" : "402", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015", "Parent" : "0", "Child" : ["403", "405", "407", "409", "411", "413", "415", "417", "418", "419", "420", "421", "422", "423", "424", "426", "428", "430", "432", "434", "436", "438", "440", "442", "444", "446", "448", "450", "452", "454", "456", "458", "460", "462", "464", "466", "468", "470", "472", "474", "476", "478", "480", "482", "484", "486", "488", "490", "492", "494", "496", "498", "500", "502", "504", "506", "508", "510", "512", "514", "516", "518", "520", "522", "524", "526", "528", "530", "532", "534", "536", "538"],
		"CDFG" : "biconv16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "95", "EstimateLatencyMax" : "95",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "bottom_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_7_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_8_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_9_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_10_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_11_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_12_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_13_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_14_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_15_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_16_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_17_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_18_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_19_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_20_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_21_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_22_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_23_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_24_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_25_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_26_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_27_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_28_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_29_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_30_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_31_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weights_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V32", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V33", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V34", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V35", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V36", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V37", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V38", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V39", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V40", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V41", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V42", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V43", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V44", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V45", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V46", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V47", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V48", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V49", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V50", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V51", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V52", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V53", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V54", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V55", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V56", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V57", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V58", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V59", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V60", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V61", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V62", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V63", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V64", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V65", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V66", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V67", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V68", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V69", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V70", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V71", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V72", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V73", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V74", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V75", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V76", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V77", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V78", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V79", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V80", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V81", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V82", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V83", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V84", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V85", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V86", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V87", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V88", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V89", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V90", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V91", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V92", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V93", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "top_0_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_1_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_2_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_3_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_4_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_5_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_6_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_7_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_8_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_9_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_10_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_11_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_12_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_13_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_14_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_15_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_16_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_17_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_18_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_19_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_20_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_21_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_22_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_23_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_24_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_25_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_26_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_27_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_28_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_29_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_30_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_31_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "428", "SubInstance" : "grp_compute_engine_16_fu_4160", "Port" : "lut16_V_1"},
					{"ID" : "424", "SubInstance" : "grp_compute_engine_16_fu_4142", "Port" : "lut16_V_1"},
					{"ID" : "430", "SubInstance" : "grp_compute_engine_16_fu_4169", "Port" : "lut16_V_1"},
					{"ID" : "436", "SubInstance" : "grp_compute_engine_16_fu_4196", "Port" : "lut16_V_1"},
					{"ID" : "432", "SubInstance" : "grp_compute_engine_16_fu_4178", "Port" : "lut16_V_1"},
					{"ID" : "426", "SubInstance" : "grp_compute_engine_16_fu_4151", "Port" : "lut16_V_1"},
					{"ID" : "434", "SubInstance" : "grp_compute_engine_16_fu_4187", "Port" : "lut16_V_1"},
					{"ID" : "442", "SubInstance" : "grp_compute_engine_16_fu_4223", "Port" : "lut16_V_1"},
					{"ID" : "444", "SubInstance" : "grp_compute_engine_16_fu_4232", "Port" : "lut16_V_1"},
					{"ID" : "446", "SubInstance" : "grp_compute_engine_16_fu_4241", "Port" : "lut16_V_1"},
					{"ID" : "438", "SubInstance" : "grp_compute_engine_16_fu_4205", "Port" : "lut16_V_1"},
					{"ID" : "440", "SubInstance" : "grp_compute_engine_16_fu_4214", "Port" : "lut16_V_1"},
					{"ID" : "484", "SubInstance" : "grp_compute_engine_16_fu_4412", "Port" : "lut16_V_1"},
					{"ID" : "534", "SubInstance" : "grp_compute_engine_16_fu_4637", "Port" : "lut16_V_1"},
					{"ID" : "490", "SubInstance" : "grp_compute_engine_16_fu_4439", "Port" : "lut16_V_1"},
					{"ID" : "454", "SubInstance" : "grp_compute_engine_16_fu_4277", "Port" : "lut16_V_1"},
					{"ID" : "512", "SubInstance" : "grp_compute_engine_16_fu_4538", "Port" : "lut16_V_1"},
					{"ID" : "528", "SubInstance" : "grp_compute_engine_16_fu_4610", "Port" : "lut16_V_1"},
					{"ID" : "456", "SubInstance" : "grp_compute_engine_16_fu_4286", "Port" : "lut16_V_1"},
					{"ID" : "474", "SubInstance" : "grp_compute_engine_16_fu_4367", "Port" : "lut16_V_1"},
					{"ID" : "508", "SubInstance" : "grp_compute_engine_16_fu_4520", "Port" : "lut16_V_1"},
					{"ID" : "460", "SubInstance" : "grp_compute_engine_16_fu_4304", "Port" : "lut16_V_1"},
					{"ID" : "486", "SubInstance" : "grp_compute_engine_16_fu_4421", "Port" : "lut16_V_1"},
					{"ID" : "450", "SubInstance" : "grp_compute_engine_16_fu_4259", "Port" : "lut16_V_1"},
					{"ID" : "448", "SubInstance" : "grp_compute_engine_16_fu_4250", "Port" : "lut16_V_1"},
					{"ID" : "518", "SubInstance" : "grp_compute_engine_16_fu_4565", "Port" : "lut16_V_1"},
					{"ID" : "492", "SubInstance" : "grp_compute_engine_16_fu_4448", "Port" : "lut16_V_1"},
					{"ID" : "502", "SubInstance" : "grp_compute_engine_16_fu_4493", "Port" : "lut16_V_1"},
					{"ID" : "498", "SubInstance" : "grp_compute_engine_16_fu_4475", "Port" : "lut16_V_1"},
					{"ID" : "524", "SubInstance" : "grp_compute_engine_16_fu_4592", "Port" : "lut16_V_1"},
					{"ID" : "526", "SubInstance" : "grp_compute_engine_16_fu_4601", "Port" : "lut16_V_1"},
					{"ID" : "476", "SubInstance" : "grp_compute_engine_16_fu_4376", "Port" : "lut16_V_1"},
					{"ID" : "520", "SubInstance" : "grp_compute_engine_16_fu_4574", "Port" : "lut16_V_1"},
					{"ID" : "452", "SubInstance" : "grp_compute_engine_16_fu_4268", "Port" : "lut16_V_1"},
					{"ID" : "478", "SubInstance" : "grp_compute_engine_16_fu_4385", "Port" : "lut16_V_1"},
					{"ID" : "466", "SubInstance" : "grp_compute_engine_16_fu_4331", "Port" : "lut16_V_1"},
					{"ID" : "488", "SubInstance" : "grp_compute_engine_16_fu_4430", "Port" : "lut16_V_1"},
					{"ID" : "472", "SubInstance" : "grp_compute_engine_16_fu_4358", "Port" : "lut16_V_1"},
					{"ID" : "494", "SubInstance" : "grp_compute_engine_16_fu_4457", "Port" : "lut16_V_1"},
					{"ID" : "500", "SubInstance" : "grp_compute_engine_16_fu_4484", "Port" : "lut16_V_1"},
					{"ID" : "468", "SubInstance" : "grp_compute_engine_16_fu_4340", "Port" : "lut16_V_1"},
					{"ID" : "504", "SubInstance" : "grp_compute_engine_16_fu_4502", "Port" : "lut16_V_1"},
					{"ID" : "516", "SubInstance" : "grp_compute_engine_16_fu_4556", "Port" : "lut16_V_1"},
					{"ID" : "522", "SubInstance" : "grp_compute_engine_16_fu_4583", "Port" : "lut16_V_1"},
					{"ID" : "530", "SubInstance" : "grp_compute_engine_16_fu_4619", "Port" : "lut16_V_1"},
					{"ID" : "532", "SubInstance" : "grp_compute_engine_16_fu_4628", "Port" : "lut16_V_1"},
					{"ID" : "480", "SubInstance" : "grp_compute_engine_16_fu_4394", "Port" : "lut16_V_1"},
					{"ID" : "538", "SubInstance" : "grp_compute_engine_16_fu_4655", "Port" : "lut16_V_1"},
					{"ID" : "470", "SubInstance" : "grp_compute_engine_16_fu_4349", "Port" : "lut16_V_1"},
					{"ID" : "496", "SubInstance" : "grp_compute_engine_16_fu_4466", "Port" : "lut16_V_1"},
					{"ID" : "506", "SubInstance" : "grp_compute_engine_16_fu_4511", "Port" : "lut16_V_1"},
					{"ID" : "510", "SubInstance" : "grp_compute_engine_16_fu_4529", "Port" : "lut16_V_1"},
					{"ID" : "536", "SubInstance" : "grp_compute_engine_16_fu_4646", "Port" : "lut16_V_1"},
					{"ID" : "482", "SubInstance" : "grp_compute_engine_16_fu_4403", "Port" : "lut16_V_1"},
					{"ID" : "514", "SubInstance" : "grp_compute_engine_16_fu_4547", "Port" : "lut16_V_1"},
					{"ID" : "458", "SubInstance" : "grp_compute_engine_16_fu_4295", "Port" : "lut16_V_1"},
					{"ID" : "462", "SubInstance" : "grp_compute_engine_16_fu_4313", "Port" : "lut16_V_1"},
					{"ID" : "464", "SubInstance" : "grp_compute_engine_16_fu_4322", "Port" : "lut16_V_1"}]}]},
	{"ID" : "403", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_batch_norm_fu_4002", "Parent" : "402", "Child" : ["404"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "404", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_batch_norm_fu_4002.FracNet_mul_mul_8fYi_U25", "Parent" : "403"},
	{"ID" : "405", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_batch_norm_fu_4009", "Parent" : "402", "Child" : ["406"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "406", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_batch_norm_fu_4009.FracNet_mul_mul_8fYi_U25", "Parent" : "405"},
	{"ID" : "407", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_batch_norm_fu_4016", "Parent" : "402", "Child" : ["408"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "408", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_batch_norm_fu_4016.FracNet_mul_mul_8fYi_U25", "Parent" : "407"},
	{"ID" : "409", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_batch_norm_fu_4023", "Parent" : "402", "Child" : ["410"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "410", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_batch_norm_fu_4023.FracNet_mul_mul_8fYi_U25", "Parent" : "409"},
	{"ID" : "411", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_batch_norm_fu_4030", "Parent" : "402", "Child" : ["412"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "412", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_batch_norm_fu_4030.FracNet_mul_mul_8fYi_U25", "Parent" : "411"},
	{"ID" : "413", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_batch_norm_fu_4037", "Parent" : "402", "Child" : ["414"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "414", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_batch_norm_fu_4037.FracNet_mul_mul_8fYi_U25", "Parent" : "413"},
	{"ID" : "415", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_batch_norm_fu_4044", "Parent" : "402", "Child" : ["416"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "416", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_batch_norm_fu_4044.FracNet_mul_mul_8fYi_U25", "Parent" : "415"},
	{"ID" : "417", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_sum_engine_fu_4051", "Parent" : "402",
		"CDFG" : "sum_engine",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "t0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "418", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_sum_engine_fu_4064", "Parent" : "402",
		"CDFG" : "sum_engine",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "t0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "419", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_sum_engine_fu_4077", "Parent" : "402",
		"CDFG" : "sum_engine",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "t0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "420", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_sum_engine_fu_4090", "Parent" : "402",
		"CDFG" : "sum_engine",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "t0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "421", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_sum_engine_fu_4103", "Parent" : "402",
		"CDFG" : "sum_engine",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "t0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "422", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_sum_engine_fu_4116", "Parent" : "402",
		"CDFG" : "sum_engine",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "t0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "423", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_sum_engine_fu_4129", "Parent" : "402",
		"CDFG" : "sum_engine",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "t0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "424", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4142", "Parent" : "402", "Child" : ["425"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "425", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4142.lut16_V_1_U", "Parent" : "424"},
	{"ID" : "426", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4151", "Parent" : "402", "Child" : ["427"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "427", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4151.lut16_V_1_U", "Parent" : "426"},
	{"ID" : "428", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4160", "Parent" : "402", "Child" : ["429"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "429", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4160.lut16_V_1_U", "Parent" : "428"},
	{"ID" : "430", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4169", "Parent" : "402", "Child" : ["431"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "431", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4169.lut16_V_1_U", "Parent" : "430"},
	{"ID" : "432", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4178", "Parent" : "402", "Child" : ["433"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "433", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4178.lut16_V_1_U", "Parent" : "432"},
	{"ID" : "434", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4187", "Parent" : "402", "Child" : ["435"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "435", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4187.lut16_V_1_U", "Parent" : "434"},
	{"ID" : "436", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4196", "Parent" : "402", "Child" : ["437"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "437", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4196.lut16_V_1_U", "Parent" : "436"},
	{"ID" : "438", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4205", "Parent" : "402", "Child" : ["439"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "439", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4205.lut16_V_1_U", "Parent" : "438"},
	{"ID" : "440", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4214", "Parent" : "402", "Child" : ["441"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "441", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4214.lut16_V_1_U", "Parent" : "440"},
	{"ID" : "442", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4223", "Parent" : "402", "Child" : ["443"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "443", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4223.lut16_V_1_U", "Parent" : "442"},
	{"ID" : "444", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4232", "Parent" : "402", "Child" : ["445"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "445", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4232.lut16_V_1_U", "Parent" : "444"},
	{"ID" : "446", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4241", "Parent" : "402", "Child" : ["447"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "447", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4241.lut16_V_1_U", "Parent" : "446"},
	{"ID" : "448", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4250", "Parent" : "402", "Child" : ["449"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "449", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4250.lut16_V_1_U", "Parent" : "448"},
	{"ID" : "450", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4259", "Parent" : "402", "Child" : ["451"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "451", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4259.lut16_V_1_U", "Parent" : "450"},
	{"ID" : "452", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4268", "Parent" : "402", "Child" : ["453"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "453", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4268.lut16_V_1_U", "Parent" : "452"},
	{"ID" : "454", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4277", "Parent" : "402", "Child" : ["455"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "455", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4277.lut16_V_1_U", "Parent" : "454"},
	{"ID" : "456", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4286", "Parent" : "402", "Child" : ["457"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "457", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4286.lut16_V_1_U", "Parent" : "456"},
	{"ID" : "458", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4295", "Parent" : "402", "Child" : ["459"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "459", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4295.lut16_V_1_U", "Parent" : "458"},
	{"ID" : "460", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4304", "Parent" : "402", "Child" : ["461"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "461", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4304.lut16_V_1_U", "Parent" : "460"},
	{"ID" : "462", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4313", "Parent" : "402", "Child" : ["463"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "463", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4313.lut16_V_1_U", "Parent" : "462"},
	{"ID" : "464", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4322", "Parent" : "402", "Child" : ["465"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "465", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4322.lut16_V_1_U", "Parent" : "464"},
	{"ID" : "466", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4331", "Parent" : "402", "Child" : ["467"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "467", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4331.lut16_V_1_U", "Parent" : "466"},
	{"ID" : "468", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4340", "Parent" : "402", "Child" : ["469"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "469", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4340.lut16_V_1_U", "Parent" : "468"},
	{"ID" : "470", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4349", "Parent" : "402", "Child" : ["471"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "471", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4349.lut16_V_1_U", "Parent" : "470"},
	{"ID" : "472", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4358", "Parent" : "402", "Child" : ["473"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "473", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4358.lut16_V_1_U", "Parent" : "472"},
	{"ID" : "474", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4367", "Parent" : "402", "Child" : ["475"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "475", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4367.lut16_V_1_U", "Parent" : "474"},
	{"ID" : "476", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4376", "Parent" : "402", "Child" : ["477"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "477", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4376.lut16_V_1_U", "Parent" : "476"},
	{"ID" : "478", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4385", "Parent" : "402", "Child" : ["479"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "479", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4385.lut16_V_1_U", "Parent" : "478"},
	{"ID" : "480", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4394", "Parent" : "402", "Child" : ["481"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "481", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4394.lut16_V_1_U", "Parent" : "480"},
	{"ID" : "482", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4403", "Parent" : "402", "Child" : ["483"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "483", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4403.lut16_V_1_U", "Parent" : "482"},
	{"ID" : "484", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4412", "Parent" : "402", "Child" : ["485"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "485", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4412.lut16_V_1_U", "Parent" : "484"},
	{"ID" : "486", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4421", "Parent" : "402", "Child" : ["487"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "487", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4421.lut16_V_1_U", "Parent" : "486"},
	{"ID" : "488", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4430", "Parent" : "402", "Child" : ["489"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "489", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4430.lut16_V_1_U", "Parent" : "488"},
	{"ID" : "490", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4439", "Parent" : "402", "Child" : ["491"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "491", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4439.lut16_V_1_U", "Parent" : "490"},
	{"ID" : "492", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4448", "Parent" : "402", "Child" : ["493"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "493", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4448.lut16_V_1_U", "Parent" : "492"},
	{"ID" : "494", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4457", "Parent" : "402", "Child" : ["495"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "495", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4457.lut16_V_1_U", "Parent" : "494"},
	{"ID" : "496", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4466", "Parent" : "402", "Child" : ["497"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "497", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4466.lut16_V_1_U", "Parent" : "496"},
	{"ID" : "498", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4475", "Parent" : "402", "Child" : ["499"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "499", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4475.lut16_V_1_U", "Parent" : "498"},
	{"ID" : "500", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4484", "Parent" : "402", "Child" : ["501"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "501", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4484.lut16_V_1_U", "Parent" : "500"},
	{"ID" : "502", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4493", "Parent" : "402", "Child" : ["503"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "503", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4493.lut16_V_1_U", "Parent" : "502"},
	{"ID" : "504", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4502", "Parent" : "402", "Child" : ["505"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "505", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4502.lut16_V_1_U", "Parent" : "504"},
	{"ID" : "506", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4511", "Parent" : "402", "Child" : ["507"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "507", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4511.lut16_V_1_U", "Parent" : "506"},
	{"ID" : "508", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4520", "Parent" : "402", "Child" : ["509"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "509", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4520.lut16_V_1_U", "Parent" : "508"},
	{"ID" : "510", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4529", "Parent" : "402", "Child" : ["511"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "511", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4529.lut16_V_1_U", "Parent" : "510"},
	{"ID" : "512", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4538", "Parent" : "402", "Child" : ["513"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "513", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4538.lut16_V_1_U", "Parent" : "512"},
	{"ID" : "514", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4547", "Parent" : "402", "Child" : ["515"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "515", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4547.lut16_V_1_U", "Parent" : "514"},
	{"ID" : "516", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4556", "Parent" : "402", "Child" : ["517"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "517", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4556.lut16_V_1_U", "Parent" : "516"},
	{"ID" : "518", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4565", "Parent" : "402", "Child" : ["519"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "519", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4565.lut16_V_1_U", "Parent" : "518"},
	{"ID" : "520", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4574", "Parent" : "402", "Child" : ["521"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "521", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4574.lut16_V_1_U", "Parent" : "520"},
	{"ID" : "522", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4583", "Parent" : "402", "Child" : ["523"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "523", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4583.lut16_V_1_U", "Parent" : "522"},
	{"ID" : "524", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4592", "Parent" : "402", "Child" : ["525"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "525", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4592.lut16_V_1_U", "Parent" : "524"},
	{"ID" : "526", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4601", "Parent" : "402", "Child" : ["527"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "527", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4601.lut16_V_1_U", "Parent" : "526"},
	{"ID" : "528", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4610", "Parent" : "402", "Child" : ["529"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "529", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4610.lut16_V_1_U", "Parent" : "528"},
	{"ID" : "530", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4619", "Parent" : "402", "Child" : ["531"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "531", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4619.lut16_V_1_U", "Parent" : "530"},
	{"ID" : "532", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4628", "Parent" : "402", "Child" : ["533"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "533", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4628.lut16_V_1_U", "Parent" : "532"},
	{"ID" : "534", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4637", "Parent" : "402", "Child" : ["535"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "535", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4637.lut16_V_1_U", "Parent" : "534"},
	{"ID" : "536", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4646", "Parent" : "402", "Child" : ["537"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "537", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4646.lut16_V_1_U", "Parent" : "536"},
	{"ID" : "538", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4655", "Parent" : "402", "Child" : ["539"],
		"CDFG" : "compute_engine_16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "539", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_8015.grp_compute_engine_16_fu_4655.lut16_V_1_U", "Parent" : "538"},
	{"ID" : "540", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494", "Parent" : "0", "Child" : ["541", "543", "545", "547", "549", "551", "553", "555", "557", "559", "561", "563", "565", "567", "569", "571", "573", "575", "577", "579", "581", "583", "585", "587", "589", "591", "593", "595", "597", "599", "601", "603", "605", "607", "609", "611", "613", "615", "617", "619", "621", "623", "625", "627", "629", "631", "633", "635", "637", "639", "641", "643", "645", "647", "649", "651", "653", "655", "657", "659", "661", "663", "665", "667", "669", "671", "673", "675", "677", "679", "681", "683", "685", "686", "687", "688", "689", "690", "691", "692", "693", "694", "695", "696", "697", "698", "699"],
		"CDFG" : "pgconv64_1bit",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "99", "EstimateLatencyMax" : "264",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "bottom_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bottom_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bottom_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bottom_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bottom_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bottom_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bottom_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bottom_7_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bottom_8_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V71", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V72", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V73", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V74", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V75", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V76", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V77", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V78", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V79", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V80", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V81", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V82", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V83", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V84", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V85", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V86", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V87", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V88", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V89", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V90", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V91", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V92", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V93", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V94", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V95", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V96", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V97", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V98", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V99", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V100", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V101", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V102", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V103", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V104", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V105", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V106", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V107", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V108", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V109", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V110", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V111", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V112", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V113", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V114", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V115", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V116", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V117", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V118", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V119", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V120", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V121", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V122", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V123", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V124", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V125", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V126", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V127", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V128", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V129", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V130", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V131", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V132", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V133", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V134", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V135", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V136", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V137", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V138", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V139", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V140", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V141", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V142", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V143", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V144", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V145", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V146", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V147", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V148", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V149", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V150", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V151", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V152", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V153", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V154", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V155", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V156", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V157", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V158", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V159", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V160", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V161", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V162", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V163", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V164", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V165", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V166", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V167", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V168", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V169", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V170", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V171", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V172", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V173", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V174", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V175", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V176", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V177", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V178", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V179", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V180", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V181", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V182", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V183", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V184", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V185", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V186", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V187", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V188", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V189", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V190", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V191", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V192", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V193", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V194", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V195", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V196", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V197", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V198", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V199", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V200", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V201", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V202", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V203", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V204", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V205", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V206", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V207", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V208", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V209", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V210", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V211", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V212", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V213", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V214", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V215", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V216", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V217", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V218", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V219", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V220", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V221", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V222", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V223", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V224", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V225", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "top_0_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_1_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_2_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_3_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_4_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_5_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_6_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_7_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_8_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_9_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_10_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_11_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_12_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_13_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_14_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_15_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_16_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_17_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_18_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_19_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_20_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_21_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_22_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_23_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_24_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_25_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_26_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_27_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_28_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_29_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_30_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_31_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "stride", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "575", "SubInstance" : "grp_compute_engine_64_fu_4699", "Port" : "lut16_V"},
					{"ID" : "607", "SubInstance" : "grp_compute_engine_64_fu_4864", "Port" : "lut16_V"},
					{"ID" : "579", "SubInstance" : "grp_compute_engine_64_fu_4717", "Port" : "lut16_V"},
					{"ID" : "615", "SubInstance" : "grp_compute_engine_64_fu_4898", "Port" : "lut16_V"},
					{"ID" : "617", "SubInstance" : "grp_compute_engine_64_fu_4907", "Port" : "lut16_V"},
					{"ID" : "591", "SubInstance" : "grp_compute_engine_64_fu_4771", "Port" : "lut16_V"},
					{"ID" : "595", "SubInstance" : "grp_compute_engine_64_fu_4789", "Port" : "lut16_V"},
					{"ID" : "569", "SubInstance" : "grp_compute_engine_64_fu_4672", "Port" : "lut16_V"},
					{"ID" : "581", "SubInstance" : "grp_compute_engine_64_fu_4726", "Port" : "lut16_V"},
					{"ID" : "543", "SubInstance" : "grp_compute_engine_64_fu_4555", "Port" : "lut16_V"},
					{"ID" : "547", "SubInstance" : "grp_compute_engine_64_fu_4573", "Port" : "lut16_V"},
					{"ID" : "555", "SubInstance" : "grp_compute_engine_64_fu_4609", "Port" : "lut16_V"},
					{"ID" : "571", "SubInstance" : "grp_compute_engine_64_fu_4681", "Port" : "lut16_V"},
					{"ID" : "577", "SubInstance" : "grp_compute_engine_64_fu_4708", "Port" : "lut16_V"},
					{"ID" : "583", "SubInstance" : "grp_compute_engine_64_fu_4735", "Port" : "lut16_V"},
					{"ID" : "585", "SubInstance" : "grp_compute_engine_64_fu_4744", "Port" : "lut16_V"},
					{"ID" : "589", "SubInstance" : "grp_compute_engine_64_fu_4762", "Port" : "lut16_V"},
					{"ID" : "599", "SubInstance" : "grp_compute_engine_64_fu_4807", "Port" : "lut16_V"},
					{"ID" : "603", "SubInstance" : "grp_compute_engine_64_fu_4825", "Port" : "lut16_V"},
					{"ID" : "605", "SubInstance" : "grp_compute_engine_64_fu_4855", "Port" : "lut16_V"},
					{"ID" : "609", "SubInstance" : "grp_compute_engine_64_fu_4872", "Port" : "lut16_V"},
					{"ID" : "613", "SubInstance" : "grp_compute_engine_64_fu_4890", "Port" : "lut16_V"},
					{"ID" : "601", "SubInstance" : "grp_compute_engine_64_fu_4816", "Port" : "lut16_V"},
					{"ID" : "541", "SubInstance" : "grp_compute_engine_64_fu_4546", "Port" : "lut16_V"},
					{"ID" : "551", "SubInstance" : "grp_compute_engine_64_fu_4591", "Port" : "lut16_V"},
					{"ID" : "553", "SubInstance" : "grp_compute_engine_64_fu_4600", "Port" : "lut16_V"},
					{"ID" : "557", "SubInstance" : "grp_compute_engine_64_fu_4618", "Port" : "lut16_V"},
					{"ID" : "559", "SubInstance" : "grp_compute_engine_64_fu_4627", "Port" : "lut16_V"},
					{"ID" : "565", "SubInstance" : "grp_compute_engine_64_fu_4654", "Port" : "lut16_V"},
					{"ID" : "611", "SubInstance" : "grp_compute_engine_64_fu_4881", "Port" : "lut16_V"},
					{"ID" : "545", "SubInstance" : "grp_compute_engine_64_fu_4564", "Port" : "lut16_V"},
					{"ID" : "567", "SubInstance" : "grp_compute_engine_64_fu_4663", "Port" : "lut16_V"},
					{"ID" : "549", "SubInstance" : "grp_compute_engine_64_fu_4582", "Port" : "lut16_V"},
					{"ID" : "587", "SubInstance" : "grp_compute_engine_64_fu_4753", "Port" : "lut16_V"},
					{"ID" : "597", "SubInstance" : "grp_compute_engine_64_fu_4798", "Port" : "lut16_V"},
					{"ID" : "563", "SubInstance" : "grp_compute_engine_64_fu_4645", "Port" : "lut16_V"},
					{"ID" : "573", "SubInstance" : "grp_compute_engine_64_fu_4690", "Port" : "lut16_V"},
					{"ID" : "593", "SubInstance" : "grp_compute_engine_64_fu_4780", "Port" : "lut16_V"},
					{"ID" : "561", "SubInstance" : "grp_compute_engine_64_fu_4636", "Port" : "lut16_V"},
					{"ID" : "649", "SubInstance" : "grp_compute_engine_64_fu_5046", "Port" : "lut16_V"},
					{"ID" : "619", "SubInstance" : "grp_compute_engine_64_fu_4916", "Port" : "lut16_V"},
					{"ID" : "627", "SubInstance" : "grp_compute_engine_64_fu_4950", "Port" : "lut16_V"},
					{"ID" : "625", "SubInstance" : "grp_compute_engine_64_fu_4942", "Port" : "lut16_V"},
					{"ID" : "653", "SubInstance" : "grp_compute_engine_64_fu_5063", "Port" : "lut16_V"},
					{"ID" : "643", "SubInstance" : "grp_compute_engine_64_fu_5020", "Port" : "lut16_V"},
					{"ID" : "637", "SubInstance" : "grp_compute_engine_64_fu_4994", "Port" : "lut16_V"},
					{"ID" : "629", "SubInstance" : "grp_compute_engine_64_fu_4959", "Port" : "lut16_V"},
					{"ID" : "651", "SubInstance" : "grp_compute_engine_64_fu_5054", "Port" : "lut16_V"},
					{"ID" : "645", "SubInstance" : "grp_compute_engine_64_fu_5028", "Port" : "lut16_V"},
					{"ID" : "621", "SubInstance" : "grp_compute_engine_64_fu_4924", "Port" : "lut16_V"},
					{"ID" : "633", "SubInstance" : "grp_compute_engine_64_fu_4976", "Port" : "lut16_V"},
					{"ID" : "641", "SubInstance" : "grp_compute_engine_64_fu_5011", "Port" : "lut16_V"},
					{"ID" : "623", "SubInstance" : "grp_compute_engine_64_fu_4933", "Port" : "lut16_V"},
					{"ID" : "635", "SubInstance" : "grp_compute_engine_64_fu_4985", "Port" : "lut16_V"},
					{"ID" : "647", "SubInstance" : "grp_compute_engine_64_fu_5037", "Port" : "lut16_V"},
					{"ID" : "631", "SubInstance" : "grp_compute_engine_64_fu_4968", "Port" : "lut16_V"},
					{"ID" : "655", "SubInstance" : "grp_compute_engine_64_fu_5072", "Port" : "lut16_V"},
					{"ID" : "639", "SubInstance" : "grp_compute_engine_64_fu_5002", "Port" : "lut16_V"}]},
			{"Name" : "weight_buf_3x3_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_31", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "541", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4546", "Parent" : "540", "Child" : ["542"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "542", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4546.lut16_V_U", "Parent" : "541"},
	{"ID" : "543", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4555", "Parent" : "540", "Child" : ["544"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "544", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4555.lut16_V_U", "Parent" : "543"},
	{"ID" : "545", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4564", "Parent" : "540", "Child" : ["546"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "546", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4564.lut16_V_U", "Parent" : "545"},
	{"ID" : "547", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4573", "Parent" : "540", "Child" : ["548"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "548", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4573.lut16_V_U", "Parent" : "547"},
	{"ID" : "549", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4582", "Parent" : "540", "Child" : ["550"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "550", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4582.lut16_V_U", "Parent" : "549"},
	{"ID" : "551", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4591", "Parent" : "540", "Child" : ["552"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "552", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4591.lut16_V_U", "Parent" : "551"},
	{"ID" : "553", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4600", "Parent" : "540", "Child" : ["554"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "554", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4600.lut16_V_U", "Parent" : "553"},
	{"ID" : "555", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4609", "Parent" : "540", "Child" : ["556"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "556", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4609.lut16_V_U", "Parent" : "555"},
	{"ID" : "557", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4618", "Parent" : "540", "Child" : ["558"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "558", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4618.lut16_V_U", "Parent" : "557"},
	{"ID" : "559", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4627", "Parent" : "540", "Child" : ["560"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "560", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4627.lut16_V_U", "Parent" : "559"},
	{"ID" : "561", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4636", "Parent" : "540", "Child" : ["562"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "562", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4636.lut16_V_U", "Parent" : "561"},
	{"ID" : "563", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4645", "Parent" : "540", "Child" : ["564"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "564", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4645.lut16_V_U", "Parent" : "563"},
	{"ID" : "565", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4654", "Parent" : "540", "Child" : ["566"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "566", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4654.lut16_V_U", "Parent" : "565"},
	{"ID" : "567", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4663", "Parent" : "540", "Child" : ["568"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "568", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4663.lut16_V_U", "Parent" : "567"},
	{"ID" : "569", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4672", "Parent" : "540", "Child" : ["570"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "570", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4672.lut16_V_U", "Parent" : "569"},
	{"ID" : "571", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4681", "Parent" : "540", "Child" : ["572"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "572", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4681.lut16_V_U", "Parent" : "571"},
	{"ID" : "573", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4690", "Parent" : "540", "Child" : ["574"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "574", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4690.lut16_V_U", "Parent" : "573"},
	{"ID" : "575", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4699", "Parent" : "540", "Child" : ["576"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "576", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4699.lut16_V_U", "Parent" : "575"},
	{"ID" : "577", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4708", "Parent" : "540", "Child" : ["578"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "578", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4708.lut16_V_U", "Parent" : "577"},
	{"ID" : "579", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4717", "Parent" : "540", "Child" : ["580"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "580", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4717.lut16_V_U", "Parent" : "579"},
	{"ID" : "581", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4726", "Parent" : "540", "Child" : ["582"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "582", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4726.lut16_V_U", "Parent" : "581"},
	{"ID" : "583", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4735", "Parent" : "540", "Child" : ["584"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "584", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4735.lut16_V_U", "Parent" : "583"},
	{"ID" : "585", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4744", "Parent" : "540", "Child" : ["586"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "586", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4744.lut16_V_U", "Parent" : "585"},
	{"ID" : "587", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4753", "Parent" : "540", "Child" : ["588"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "588", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4753.lut16_V_U", "Parent" : "587"},
	{"ID" : "589", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4762", "Parent" : "540", "Child" : ["590"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "590", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4762.lut16_V_U", "Parent" : "589"},
	{"ID" : "591", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4771", "Parent" : "540", "Child" : ["592"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "592", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4771.lut16_V_U", "Parent" : "591"},
	{"ID" : "593", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4780", "Parent" : "540", "Child" : ["594"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "594", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4780.lut16_V_U", "Parent" : "593"},
	{"ID" : "595", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4789", "Parent" : "540", "Child" : ["596"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "596", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4789.lut16_V_U", "Parent" : "595"},
	{"ID" : "597", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4798", "Parent" : "540", "Child" : ["598"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "598", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4798.lut16_V_U", "Parent" : "597"},
	{"ID" : "599", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4807", "Parent" : "540", "Child" : ["600"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "600", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4807.lut16_V_U", "Parent" : "599"},
	{"ID" : "601", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4816", "Parent" : "540", "Child" : ["602"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "602", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4816.lut16_V_U", "Parent" : "601"},
	{"ID" : "603", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4825", "Parent" : "540", "Child" : ["604"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "604", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4825.lut16_V_U", "Parent" : "603"},
	{"ID" : "605", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4855", "Parent" : "540", "Child" : ["606"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "606", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4855.lut16_V_U", "Parent" : "605"},
	{"ID" : "607", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4864", "Parent" : "540", "Child" : ["608"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "608", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4864.lut16_V_U", "Parent" : "607"},
	{"ID" : "609", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4872", "Parent" : "540", "Child" : ["610"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "610", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4872.lut16_V_U", "Parent" : "609"},
	{"ID" : "611", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4881", "Parent" : "540", "Child" : ["612"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "612", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4881.lut16_V_U", "Parent" : "611"},
	{"ID" : "613", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4890", "Parent" : "540", "Child" : ["614"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "614", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4890.lut16_V_U", "Parent" : "613"},
	{"ID" : "615", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4898", "Parent" : "540", "Child" : ["616"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "616", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4898.lut16_V_U", "Parent" : "615"},
	{"ID" : "617", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4907", "Parent" : "540", "Child" : ["618"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "618", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4907.lut16_V_U", "Parent" : "617"},
	{"ID" : "619", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4916", "Parent" : "540", "Child" : ["620"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "620", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4916.lut16_V_U", "Parent" : "619"},
	{"ID" : "621", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4924", "Parent" : "540", "Child" : ["622"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "622", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4924.lut16_V_U", "Parent" : "621"},
	{"ID" : "623", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4933", "Parent" : "540", "Child" : ["624"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "624", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4933.lut16_V_U", "Parent" : "623"},
	{"ID" : "625", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4942", "Parent" : "540", "Child" : ["626"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "626", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4942.lut16_V_U", "Parent" : "625"},
	{"ID" : "627", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4950", "Parent" : "540", "Child" : ["628"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "628", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4950.lut16_V_U", "Parent" : "627"},
	{"ID" : "629", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4959", "Parent" : "540", "Child" : ["630"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "630", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4959.lut16_V_U", "Parent" : "629"},
	{"ID" : "631", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4968", "Parent" : "540", "Child" : ["632"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "632", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4968.lut16_V_U", "Parent" : "631"},
	{"ID" : "633", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4976", "Parent" : "540", "Child" : ["634"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "634", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4976.lut16_V_U", "Parent" : "633"},
	{"ID" : "635", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4985", "Parent" : "540", "Child" : ["636"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "636", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4985.lut16_V_U", "Parent" : "635"},
	{"ID" : "637", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4994", "Parent" : "540", "Child" : ["638"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "638", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_4994.lut16_V_U", "Parent" : "637"},
	{"ID" : "639", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_5002", "Parent" : "540", "Child" : ["640"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "640", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_5002.lut16_V_U", "Parent" : "639"},
	{"ID" : "641", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_5011", "Parent" : "540", "Child" : ["642"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "642", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_5011.lut16_V_U", "Parent" : "641"},
	{"ID" : "643", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_5020", "Parent" : "540", "Child" : ["644"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "644", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_5020.lut16_V_U", "Parent" : "643"},
	{"ID" : "645", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_5028", "Parent" : "540", "Child" : ["646"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "646", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_5028.lut16_V_U", "Parent" : "645"},
	{"ID" : "647", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_5037", "Parent" : "540", "Child" : ["648"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "648", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_5037.lut16_V_U", "Parent" : "647"},
	{"ID" : "649", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_5046", "Parent" : "540", "Child" : ["650"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "650", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_5046.lut16_V_U", "Parent" : "649"},
	{"ID" : "651", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_5054", "Parent" : "540", "Child" : ["652"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "652", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_5054.lut16_V_U", "Parent" : "651"},
	{"ID" : "653", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_5063", "Parent" : "540", "Child" : ["654"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "654", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_5063.lut16_V_U", "Parent" : "653"},
	{"ID" : "655", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_5072", "Parent" : "540", "Child" : ["656"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "656", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_compute_engine_64_fu_5072.lut16_V_U", "Parent" : "655"},
	{"ID" : "657", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_relu_fu_5159", "Parent" : "540", "Child" : ["658"],
		"CDFG" : "relu",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "norm_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shiftx_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shifty_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "658", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_relu_fu_5159.FracNet_mac_muladmb6_U555", "Parent" : "657"},
	{"ID" : "659", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_relu_fu_5167", "Parent" : "540", "Child" : ["660"],
		"CDFG" : "relu",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "norm_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shiftx_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shifty_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "660", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_relu_fu_5167.FracNet_mac_muladmb6_U555", "Parent" : "659"},
	{"ID" : "661", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_relu_fu_5175", "Parent" : "540", "Child" : ["662"],
		"CDFG" : "relu",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "norm_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shiftx_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shifty_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "662", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_relu_fu_5175.FracNet_mac_muladmb6_U555", "Parent" : "661"},
	{"ID" : "663", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_relu_fu_5183", "Parent" : "540", "Child" : ["664"],
		"CDFG" : "relu",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "norm_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shiftx_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shifty_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "664", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_relu_fu_5183.FracNet_mac_muladmb6_U555", "Parent" : "663"},
	{"ID" : "665", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_relu_fu_5191", "Parent" : "540", "Child" : ["666"],
		"CDFG" : "relu",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "norm_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shiftx_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shifty_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "666", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_relu_fu_5191.FracNet_mac_muladmb6_U555", "Parent" : "665"},
	{"ID" : "667", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_relu_fu_5199", "Parent" : "540", "Child" : ["668"],
		"CDFG" : "relu",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "norm_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shiftx_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shifty_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "668", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_relu_fu_5199.FracNet_mac_muladmb6_U555", "Parent" : "667"},
	{"ID" : "669", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_relu_fu_5207", "Parent" : "540", "Child" : ["670"],
		"CDFG" : "relu",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "norm_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shiftx_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shifty_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "670", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_relu_fu_5207.FracNet_mac_muladmb6_U555", "Parent" : "669"},
	{"ID" : "671", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_batch_norm_fu_5236", "Parent" : "540", "Child" : ["672"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "672", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_batch_norm_fu_5236.FracNet_mul_mul_8fYi_U25", "Parent" : "671"},
	{"ID" : "673", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_batch_norm_fu_5244", "Parent" : "540", "Child" : ["674"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "674", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_batch_norm_fu_5244.FracNet_mul_mul_8fYi_U25", "Parent" : "673"},
	{"ID" : "675", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_batch_norm_fu_5252", "Parent" : "540", "Child" : ["676"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "676", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_batch_norm_fu_5252.FracNet_mul_mul_8fYi_U25", "Parent" : "675"},
	{"ID" : "677", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_batch_norm_fu_5260", "Parent" : "540", "Child" : ["678"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "678", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_batch_norm_fu_5260.FracNet_mul_mul_8fYi_U25", "Parent" : "677"},
	{"ID" : "679", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_batch_norm_fu_5268", "Parent" : "540", "Child" : ["680"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "680", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_batch_norm_fu_5268.FracNet_mul_mul_8fYi_U25", "Parent" : "679"},
	{"ID" : "681", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_batch_norm_fu_5276", "Parent" : "540", "Child" : ["682"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "682", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_batch_norm_fu_5276.FracNet_mul_mul_8fYi_U25", "Parent" : "681"},
	{"ID" : "683", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_batch_norm_fu_5284", "Parent" : "540", "Child" : ["684"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "684", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_batch_norm_fu_5284.FracNet_mul_mul_8fYi_U25", "Parent" : "683"},
	{"ID" : "685", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_sum_engine_fu_5292", "Parent" : "540",
		"CDFG" : "sum_engine",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "t0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "686", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_sum_engine_fu_5305", "Parent" : "540",
		"CDFG" : "sum_engine",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "t0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "687", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_sum_engine_fu_5318", "Parent" : "540",
		"CDFG" : "sum_engine",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "t0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "688", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_sum_engine_fu_5331", "Parent" : "540",
		"CDFG" : "sum_engine",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "t0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "689", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_sum_engine_fu_5344", "Parent" : "540",
		"CDFG" : "sum_engine",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "t0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "690", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_sum_engine_fu_5357", "Parent" : "540",
		"CDFG" : "sum_engine",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "t0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "691", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.grp_sum_engine_fu_5370", "Parent" : "540",
		"CDFG" : "sum_engine",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "t0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "692", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.FracNet_mux_94_64ncg_U561", "Parent" : "540"},
	{"ID" : "693", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.FracNet_mux_94_64ncg_U562", "Parent" : "540"},
	{"ID" : "694", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.FracNet_mux_94_64ncg_U563", "Parent" : "540"},
	{"ID" : "695", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.FracNet_mux_94_64ncg_U564", "Parent" : "540"},
	{"ID" : "696", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.FracNet_mux_94_64ncg_U565", "Parent" : "540"},
	{"ID" : "697", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.FracNet_mux_94_64ncg_U566", "Parent" : "540"},
	{"ID" : "698", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.FracNet_mux_94_64ncg_U567", "Parent" : "540"},
	{"ID" : "699", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1bit_fu_8494.FracNet_mux_94_64ncg_U568", "Parent" : "540"},
	{"ID" : "700", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482", "Parent" : "0", "Child" : ["701", "702", "703", "704", "705", "706", "707", "708", "709", "710", "711", "712", "713", "714", "715", "716", "717", "718", "719", "720", "721", "722", "723", "724", "725", "726", "727", "728", "729", "730", "731", "732", "733", "734", "735", "736"],
		"CDFG" : "store_bufs_organize",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "67", "EstimateLatencyMax" : "67",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "ddr_ptr_V", "Type" : "MAXI", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "ddr_ptr_V_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "ddr_ptr_V_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "ddr_ptr_V_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "ddr_ptr_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "row_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "col_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "ch_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "FM_buf0_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_31", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_31", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_31", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_63", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_30", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_62", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_29", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_61", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_28", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_60", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_27", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_59", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_26", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_58", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_25", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_57", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_24", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_56", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_23", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_55", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_22", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_54", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_21", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_53", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_20", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_52", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_19", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_51", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_18", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_50", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_17", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_49", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_16", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_48", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_15", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_47", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_14", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_46", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_13", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_45", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_12", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_44", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_11", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_43", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_10", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_42", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_9", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_41", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_8", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_40", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_7", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_39", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_38", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_37", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_36", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_35", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_34", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_33", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_32", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_31", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_31", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "701", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_urem_6ns_hbi_U804", "Parent" : "700"},
	{"ID" : "702", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_urem_6ns_hbi_U805", "Parent" : "700"},
	{"ID" : "703", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1ibs_U806", "Parent" : "700"},
	{"ID" : "704", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1ocq_U807", "Parent" : "700"},
	{"ID" : "705", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U808", "Parent" : "700"},
	{"ID" : "706", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U809", "Parent" : "700"},
	{"ID" : "707", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U810", "Parent" : "700"},
	{"ID" : "708", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U811", "Parent" : "700"},
	{"ID" : "709", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U812", "Parent" : "700"},
	{"ID" : "710", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U813", "Parent" : "700"},
	{"ID" : "711", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U814", "Parent" : "700"},
	{"ID" : "712", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U815", "Parent" : "700"},
	{"ID" : "713", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U816", "Parent" : "700"},
	{"ID" : "714", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U817", "Parent" : "700"},
	{"ID" : "715", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U818", "Parent" : "700"},
	{"ID" : "716", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U819", "Parent" : "700"},
	{"ID" : "717", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U820", "Parent" : "700"},
	{"ID" : "718", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U821", "Parent" : "700"},
	{"ID" : "719", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U822", "Parent" : "700"},
	{"ID" : "720", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U823", "Parent" : "700"},
	{"ID" : "721", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U824", "Parent" : "700"},
	{"ID" : "722", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U825", "Parent" : "700"},
	{"ID" : "723", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U826", "Parent" : "700"},
	{"ID" : "724", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U827", "Parent" : "700"},
	{"ID" : "725", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U828", "Parent" : "700"},
	{"ID" : "726", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U829", "Parent" : "700"},
	{"ID" : "727", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U830", "Parent" : "700"},
	{"ID" : "728", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U831", "Parent" : "700"},
	{"ID" : "729", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U832", "Parent" : "700"},
	{"ID" : "730", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U833", "Parent" : "700"},
	{"ID" : "731", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U834", "Parent" : "700"},
	{"ID" : "732", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U835", "Parent" : "700"},
	{"ID" : "733", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U836", "Parent" : "700"},
	{"ID" : "734", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U837", "Parent" : "700"},
	{"ID" : "735", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U838", "Parent" : "700"},
	{"ID" : "736", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_fu_9482.FracNet_mul_mul_1pcA_U839", "Parent" : "700"},
	{"ID" : "737", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350", "Parent" : "0", "Child" : ["738", "740", "742", "744", "746", "748", "750", "752", "754", "756", "758", "760", "762", "764", "766", "768", "770", "772", "774", "776", "778"],
		"CDFG" : "pgconv64_1x1_1bit",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "259", "EstimateLatencyMax" : "259",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "bottom_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bottom_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bottom_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bottom_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bottom_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bottom_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bottom_7_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V71", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V72", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V73", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V74", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V75", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V76", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V77", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V78", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V79", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V80", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V81", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V82", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V83", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V84", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V85", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V86", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V87", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V88", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V89", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V90", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V91", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V92", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V93", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V94", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V95", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V96", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V97", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V98", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V99", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V100", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weights_V101", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V102", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V103", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V104", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V105", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V106", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V107", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V108", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V109", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V110", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V111", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V112", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V113", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V114", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V115", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V116", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V117", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V118", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V119", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V120", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V121", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V122", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V123", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V124", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V125", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V126", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V127", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V128", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V129", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V130", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V131", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_V132", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V133", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V134", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V135", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V136", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V137", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V138", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V139", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V140", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V141", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V142", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V143", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V144", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V145", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V146", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V147", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V148", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V149", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V150", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V151", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V152", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V153", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V154", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V155", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V156", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V157", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V158", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V159", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V160", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V161", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V162", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shiftx_V163", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V164", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V165", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V166", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V167", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V168", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V169", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V170", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V171", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V172", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V173", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V174", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V175", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V176", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V177", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V178", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V179", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V180", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V181", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V182", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V183", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V184", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V185", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V186", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V187", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V188", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V189", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V190", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V191", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V192", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V193", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_shifty_V194", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V195", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V196", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V197", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V198", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V199", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V200", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V201", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V202", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V203", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V204", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V205", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V206", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V207", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V208", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V209", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V210", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V211", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V212", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V213", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V214", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V215", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V216", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V217", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V218", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V219", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V220", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V221", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V222", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V223", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V224", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "relu_weights_V225", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "top_0_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_1_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_2_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_3_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_4_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_5_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_6_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_7_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_8_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_9_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_10_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_11_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_12_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_13_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_14_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_15_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_16_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_17_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_18_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_19_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_20_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_21_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_22_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_23_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_24_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_25_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_26_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_27_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_28_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_29_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_30_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "top_31_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "738", "SubInstance" : "grp_compute_engine_64_fu_3501", "Port" : "lut16_V"},
					{"ID" : "740", "SubInstance" : "grp_compute_engine_64_fu_3510", "Port" : "lut16_V"},
					{"ID" : "744", "SubInstance" : "grp_compute_engine_64_fu_3526", "Port" : "lut16_V"},
					{"ID" : "750", "SubInstance" : "grp_compute_engine_64_fu_3550", "Port" : "lut16_V"},
					{"ID" : "746", "SubInstance" : "grp_compute_engine_64_fu_3534", "Port" : "lut16_V"},
					{"ID" : "748", "SubInstance" : "grp_compute_engine_64_fu_3542", "Port" : "lut16_V"},
					{"ID" : "742", "SubInstance" : "grp_compute_engine_64_fu_3518", "Port" : "lut16_V"}]},
			{"Name" : "weight_buf_1x1_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_31", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "738", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_compute_engine_64_fu_3501", "Parent" : "737", "Child" : ["739"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "739", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_compute_engine_64_fu_3501.lut16_V_U", "Parent" : "738"},
	{"ID" : "740", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_compute_engine_64_fu_3510", "Parent" : "737", "Child" : ["741"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "741", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_compute_engine_64_fu_3510.lut16_V_U", "Parent" : "740"},
	{"ID" : "742", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_compute_engine_64_fu_3518", "Parent" : "737", "Child" : ["743"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "743", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_compute_engine_64_fu_3518.lut16_V_U", "Parent" : "742"},
	{"ID" : "744", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_compute_engine_64_fu_3526", "Parent" : "737", "Child" : ["745"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "745", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_compute_engine_64_fu_3526.lut16_V_U", "Parent" : "744"},
	{"ID" : "746", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_compute_engine_64_fu_3534", "Parent" : "737", "Child" : ["747"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "747", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_compute_engine_64_fu_3534.lut16_V_U", "Parent" : "746"},
	{"ID" : "748", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_compute_engine_64_fu_3542", "Parent" : "737", "Child" : ["749"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "749", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_compute_engine_64_fu_3542.lut16_V_U", "Parent" : "748"},
	{"ID" : "750", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_compute_engine_64_fu_3550", "Parent" : "737", "Child" : ["751"],
		"CDFG" : "compute_engine_64",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "751", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_compute_engine_64_fu_3550.lut16_V_U", "Parent" : "750"},
	{"ID" : "752", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_relu_fu_3562", "Parent" : "737", "Child" : ["753"],
		"CDFG" : "relu",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "norm_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shiftx_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shifty_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "753", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_relu_fu_3562.FracNet_mac_muladmb6_U555", "Parent" : "752"},
	{"ID" : "754", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_relu_fu_3570", "Parent" : "737", "Child" : ["755"],
		"CDFG" : "relu",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "norm_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shiftx_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shifty_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "755", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_relu_fu_3570.FracNet_mac_muladmb6_U555", "Parent" : "754"},
	{"ID" : "756", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_relu_fu_3578", "Parent" : "737", "Child" : ["757"],
		"CDFG" : "relu",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "norm_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shiftx_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shifty_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "757", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_relu_fu_3578.FracNet_mac_muladmb6_U555", "Parent" : "756"},
	{"ID" : "758", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_relu_fu_3586", "Parent" : "737", "Child" : ["759"],
		"CDFG" : "relu",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "norm_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shiftx_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shifty_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "759", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_relu_fu_3586.FracNet_mac_muladmb6_U555", "Parent" : "758"},
	{"ID" : "760", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_relu_fu_3594", "Parent" : "737", "Child" : ["761"],
		"CDFG" : "relu",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "norm_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shiftx_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shifty_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "761", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_relu_fu_3594.FracNet_mac_muladmb6_U555", "Parent" : "760"},
	{"ID" : "762", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_relu_fu_3602", "Parent" : "737", "Child" : ["763"],
		"CDFG" : "relu",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "norm_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shiftx_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shifty_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "763", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_relu_fu_3602.FracNet_mac_muladmb6_U555", "Parent" : "762"},
	{"ID" : "764", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_relu_fu_3610", "Parent" : "737", "Child" : ["765"],
		"CDFG" : "relu",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "norm_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shiftx_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shifty_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "765", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_relu_fu_3610.FracNet_mac_muladmb6_U555", "Parent" : "764"},
	{"ID" : "766", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_batch_norm_fu_3639", "Parent" : "737", "Child" : ["767"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "767", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_batch_norm_fu_3639.FracNet_mul_mul_8fYi_U25", "Parent" : "766"},
	{"ID" : "768", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_batch_norm_fu_3647", "Parent" : "737", "Child" : ["769"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "769", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_batch_norm_fu_3647.FracNet_mul_mul_8fYi_U25", "Parent" : "768"},
	{"ID" : "770", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_batch_norm_fu_3655", "Parent" : "737", "Child" : ["771"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "771", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_batch_norm_fu_3655.FracNet_mul_mul_8fYi_U25", "Parent" : "770"},
	{"ID" : "772", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_batch_norm_fu_3663", "Parent" : "737", "Child" : ["773"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "773", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_batch_norm_fu_3663.FracNet_mul_mul_8fYi_U25", "Parent" : "772"},
	{"ID" : "774", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_batch_norm_fu_3671", "Parent" : "737", "Child" : ["775"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "775", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_batch_norm_fu_3671.FracNet_mul_mul_8fYi_U25", "Parent" : "774"},
	{"ID" : "776", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_batch_norm_fu_3679", "Parent" : "737", "Child" : ["777"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "777", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_batch_norm_fu_3679.FracNet_mul_mul_8fYi_U25", "Parent" : "776"},
	{"ID" : "778", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_batch_norm_fu_3687", "Parent" : "737", "Child" : ["779"],
		"CDFG" : "batch_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "779", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_1x1_1bit_fu_10350.grp_batch_norm_fu_3687.FracNet_mul_mul_8fYi_U25", "Parent" : "778"},
	{"ID" : "780", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_11324", "Parent" : "0", "Child" : ["781", "782", "783", "784", "785", "786", "787", "788", "789", "790", "791", "792", "793", "794", "795", "796", "797", "798", "799", "800"],
		"CDFG" : "matmul",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "73", "EstimateLatencyMax" : "73",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "bottom_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bottom_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_10_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_11_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_12_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_13_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_14_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_15_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_16_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_17_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_18_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_19_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_20_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_21_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_22_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_23_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_24_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_25_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_26_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_27_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_28_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_29_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_30_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_31_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_32_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_33_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_34_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_35_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_36_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_37_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_38_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_39_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_40_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_41_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_42_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_43_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_44_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_45_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_46_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_47_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_48_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_49_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_50_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_51_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_52_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_53_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_54_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_55_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_56_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_57_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_58_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_59_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_60_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_61_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_62_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_0_63_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_10_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_11_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_12_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_13_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_14_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_15_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_16_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_17_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_18_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_19_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_20_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_21_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_22_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_23_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_24_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_25_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_26_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_27_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_28_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_29_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_30_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_31_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_32_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_33_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_34_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_35_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_36_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_37_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_38_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_39_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_40_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_41_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_42_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_43_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_44_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_45_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_46_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_47_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_48_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_49_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_50_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_51_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_52_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_53_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_54_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_55_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_56_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_57_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_58_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_59_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_60_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_61_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_62_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_1_63_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_10_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_11_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_12_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_13_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_14_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_15_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_16_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_17_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_18_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_19_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_20_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_21_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_22_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_23_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_24_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_25_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_26_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_27_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_28_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_29_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_30_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_31_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_32_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_33_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_34_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_35_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_36_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_37_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_38_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_39_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_40_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_41_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_42_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_43_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_44_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_45_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_46_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_47_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_48_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_49_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_50_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_51_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_52_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_53_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_54_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_55_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_56_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_57_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_58_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_59_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_60_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_61_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_62_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_2_63_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_10_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_11_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_12_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_13_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_14_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_15_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_16_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_17_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_18_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_19_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_20_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_21_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_22_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_23_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_24_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_25_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_26_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_27_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_28_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_29_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_30_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_31_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_32_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_33_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_34_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_35_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_36_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_37_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_38_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_39_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_40_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_41_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_42_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_43_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_44_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_45_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_46_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_47_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_48_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_49_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_50_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_51_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_52_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_53_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_54_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_55_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_56_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_57_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_58_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_59_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_60_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_61_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_62_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_3_63_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_10_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_11_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_12_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_13_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_14_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_15_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_16_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_17_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_18_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_19_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_20_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_21_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_22_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_23_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_24_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_25_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_26_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_27_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_28_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_29_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_30_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_31_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_32_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_33_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_34_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_35_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_36_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_37_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_38_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_39_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_40_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_41_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_42_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_43_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_44_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_45_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_46_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_47_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_48_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_49_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_50_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_51_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_52_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_53_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_54_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_55_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_56_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_57_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_58_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_59_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_60_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_61_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_62_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_4_63_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_10_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_11_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_12_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_13_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_14_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_15_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_16_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_17_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_18_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_19_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_20_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_21_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_22_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_23_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_24_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_25_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_26_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_27_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_28_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_29_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_30_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_31_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_32_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_33_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_34_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_35_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_36_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_37_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_38_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_39_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_40_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_41_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_42_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_43_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_44_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_45_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_46_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_47_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_48_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_49_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_50_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_51_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_52_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_53_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_54_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_55_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_56_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_57_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_58_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_59_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_60_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_61_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_62_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_5_63_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_10_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_11_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_12_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_13_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_14_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_15_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_16_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_17_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_18_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_19_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_20_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_21_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_22_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_23_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_24_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_25_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_26_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_27_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_28_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_29_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_30_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_31_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_32_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_33_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_34_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_35_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_36_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_37_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_38_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_39_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_40_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_41_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_42_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_43_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_44_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_45_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_46_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_47_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_48_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_49_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_50_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_51_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_52_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_53_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_54_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_55_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_56_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_57_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_58_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_59_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_60_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_61_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_62_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_6_63_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_10_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_11_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_12_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_13_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_14_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_15_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_16_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_17_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_18_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_19_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_20_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_21_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_22_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_23_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_24_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_25_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_26_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_27_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_28_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_29_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_30_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_31_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_32_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_33_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_34_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_35_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_36_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_37_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_38_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_39_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_40_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_41_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_42_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_43_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_44_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_45_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_46_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_47_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_48_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_49_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_50_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_51_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_52_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_53_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_54_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_55_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_56_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_57_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_58_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_59_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_60_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_61_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_62_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_7_63_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_10_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_11_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_12_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_13_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_14_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_15_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_16_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_17_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_18_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_19_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_20_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_21_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_22_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_23_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_24_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_25_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_26_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_27_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_28_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_29_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_30_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_31_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_32_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_33_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_34_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_35_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_36_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_37_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_38_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_39_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_40_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_41_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_42_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_43_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_44_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_45_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_46_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_47_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_48_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_49_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_50_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_51_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_52_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_53_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_54_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_55_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_56_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_57_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_58_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_59_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_60_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_61_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_62_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_8_63_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_10_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_11_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_12_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_13_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_14_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_15_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_16_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_17_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_18_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_19_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_20_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_21_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_22_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_23_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_24_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_25_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_26_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_27_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_28_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_29_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_30_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_31_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_32_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_33_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_34_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_35_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_36_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_37_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_38_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_39_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_40_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_41_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_42_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_43_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_44_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_45_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_46_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_47_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_48_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_49_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_50_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_51_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_52_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_53_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_54_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_55_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_56_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_57_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_58_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_59_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_60_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_61_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_62_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_9_63_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_9_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "781", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_11324.FracNet_mux_646_1rcU_U1740", "Parent" : "780"},
	{"ID" : "782", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_11324.FracNet_mux_646_1rcU_U1741", "Parent" : "780"},
	{"ID" : "783", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_11324.FracNet_mux_646_1rcU_U1742", "Parent" : "780"},
	{"ID" : "784", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_11324.FracNet_mux_646_1rcU_U1743", "Parent" : "780"},
	{"ID" : "785", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_11324.FracNet_mux_646_1rcU_U1744", "Parent" : "780"},
	{"ID" : "786", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_11324.FracNet_mux_646_1rcU_U1745", "Parent" : "780"},
	{"ID" : "787", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_11324.FracNet_mux_646_1rcU_U1746", "Parent" : "780"},
	{"ID" : "788", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_11324.FracNet_mux_646_1rcU_U1747", "Parent" : "780"},
	{"ID" : "789", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_11324.FracNet_mux_646_1rcU_U1748", "Parent" : "780"},
	{"ID" : "790", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_11324.FracNet_mux_646_1rcU_U1749", "Parent" : "780"},
	{"ID" : "791", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_11324.FracNet_mul_mul_1sc4_U1750", "Parent" : "780"},
	{"ID" : "792", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_11324.FracNet_mul_mul_1sc4_U1751", "Parent" : "780"},
	{"ID" : "793", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_11324.FracNet_mul_mul_1sc4_U1752", "Parent" : "780"},
	{"ID" : "794", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_11324.FracNet_mul_mul_1sc4_U1753", "Parent" : "780"},
	{"ID" : "795", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_11324.FracNet_mul_mul_1sc4_U1754", "Parent" : "780"},
	{"ID" : "796", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_11324.FracNet_mul_mul_1sc4_U1755", "Parent" : "780"},
	{"ID" : "797", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_11324.FracNet_mul_mul_1sc4_U1756", "Parent" : "780"},
	{"ID" : "798", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_11324.FracNet_mul_mul_1sc4_U1757", "Parent" : "780"},
	{"ID" : "799", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_11324.FracNet_mul_mul_1sc4_U1758", "Parent" : "780"},
	{"ID" : "800", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_11324.FracNet_mul_mul_1sc4_U1759", "Parent" : "780"},
	{"ID" : "801", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639", "Parent" : "0", "Child" : ["802", "803", "804", "805", "806", "807", "808", "809", "810", "811", "812", "813", "814", "815", "816", "817", "818", "819", "820", "821", "822", "823", "824", "825", "826", "827", "828", "829", "830", "831", "832", "833", "834"],
		"CDFG" : "store_bufs_organize_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "28", "EstimateLatencyMax" : "28",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "ddr_ptr_V", "Type" : "MAXI", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "ddr_ptr_V_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "ddr_ptr_V_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "ddr_ptr_V_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "ddr_ptr_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "row_offset_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "col_offset_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "ch_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "FM_buf0_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_31", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_31", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf0_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_31", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_63", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_30", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_62", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_29", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_61", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_28", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_60", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_27", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_59", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_26", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_58", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_25", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_57", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_24", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_56", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_23", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_55", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_22", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_54", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_21", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_53", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_20", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_52", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_19", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_51", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_18", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_50", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_17", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_49", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_16", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_48", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_15", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_47", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_14", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_46", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_13", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_45", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_12", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_44", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_11", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_43", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_10", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_42", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_9", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_41", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_8", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_40", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_7", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_39", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_38", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_37", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_36", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_35", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_34", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_33", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf_all_V_32", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_weight_buf_V_31", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bn_bias_buf_V_31", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "802", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mac_muladqcK_U1501", "Parent" : "801"},
	{"ID" : "803", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1502", "Parent" : "801"},
	{"ID" : "804", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1503", "Parent" : "801"},
	{"ID" : "805", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1504", "Parent" : "801"},
	{"ID" : "806", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1505", "Parent" : "801"},
	{"ID" : "807", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1506", "Parent" : "801"},
	{"ID" : "808", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1507", "Parent" : "801"},
	{"ID" : "809", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1508", "Parent" : "801"},
	{"ID" : "810", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1509", "Parent" : "801"},
	{"ID" : "811", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1510", "Parent" : "801"},
	{"ID" : "812", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1511", "Parent" : "801"},
	{"ID" : "813", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1512", "Parent" : "801"},
	{"ID" : "814", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1513", "Parent" : "801"},
	{"ID" : "815", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1514", "Parent" : "801"},
	{"ID" : "816", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1515", "Parent" : "801"},
	{"ID" : "817", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1516", "Parent" : "801"},
	{"ID" : "818", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1517", "Parent" : "801"},
	{"ID" : "819", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1518", "Parent" : "801"},
	{"ID" : "820", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1519", "Parent" : "801"},
	{"ID" : "821", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1520", "Parent" : "801"},
	{"ID" : "822", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1521", "Parent" : "801"},
	{"ID" : "823", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1522", "Parent" : "801"},
	{"ID" : "824", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1523", "Parent" : "801"},
	{"ID" : "825", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1524", "Parent" : "801"},
	{"ID" : "826", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1525", "Parent" : "801"},
	{"ID" : "827", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1526", "Parent" : "801"},
	{"ID" : "828", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1527", "Parent" : "801"},
	{"ID" : "829", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1528", "Parent" : "801"},
	{"ID" : "830", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1529", "Parent" : "801"},
	{"ID" : "831", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1530", "Parent" : "801"},
	{"ID" : "832", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1531", "Parent" : "801"},
	{"ID" : "833", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1532", "Parent" : "801"},
	{"ID" : "834", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_bufs_organize_s_fu_12639.FracNet_mul_mul_1pcA_U1533", "Parent" : "801"},
	{"ID" : "835", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_load_weights_3x3_all_fu_13038", "Parent" : "0", "Child" : ["836"],
		"CDFG" : "load_weights_3x3_all",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "65", "EstimateLatencyMax" : "65",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weight_3x3_from_fu_2133"}],
		"Port" : [
			{"Name" : "conv_weight_3x3_all_V", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "conv_weight_3x3_all_V_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "conv_weight_3x3_all_V_blk_n_R", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "src_V"}]},
			{"Name" : "conv_weight_3x3_all_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_3x3_index", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_all_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_all_index", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_buf_3x3_V_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_0_V"}]},
			{"Name" : "weight_buf_3x3_V_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_1_V"}]},
			{"Name" : "weight_buf_3x3_V_2", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_2_V"}]},
			{"Name" : "weight_buf_3x3_V_3", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_3_V"}]},
			{"Name" : "weight_buf_3x3_V_4", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_4_V"}]},
			{"Name" : "weight_buf_3x3_V_5", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_5_V"}]},
			{"Name" : "weight_buf_3x3_V_6", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_6_V"}]},
			{"Name" : "weight_buf_3x3_V_7", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_7_V"}]},
			{"Name" : "weight_buf_3x3_V_8", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_8_V"}]},
			{"Name" : "weight_buf_3x3_V_9", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_9_V"}]},
			{"Name" : "weight_buf_3x3_V_10", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_10_V"}]},
			{"Name" : "weight_buf_3x3_V_11", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_11_V"}]},
			{"Name" : "weight_buf_3x3_V_12", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_12_V"}]},
			{"Name" : "weight_buf_3x3_V_13", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_13_V"}]},
			{"Name" : "weight_buf_3x3_V_14", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_14_V"}]},
			{"Name" : "weight_buf_3x3_V_15", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_15_V"}]},
			{"Name" : "weight_buf_3x3_V_16", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_16_V"}]},
			{"Name" : "weight_buf_3x3_V_17", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_17_V"}]},
			{"Name" : "weight_buf_3x3_V_18", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_18_V"}]},
			{"Name" : "weight_buf_3x3_V_19", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_19_V"}]},
			{"Name" : "weight_buf_3x3_V_20", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_20_V"}]},
			{"Name" : "weight_buf_3x3_V_21", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_21_V"}]},
			{"Name" : "weight_buf_3x3_V_22", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_22_V"}]},
			{"Name" : "weight_buf_3x3_V_23", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_23_V"}]},
			{"Name" : "weight_buf_3x3_V_24", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_24_V"}]},
			{"Name" : "weight_buf_3x3_V_25", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_25_V"}]},
			{"Name" : "weight_buf_3x3_V_26", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_26_V"}]},
			{"Name" : "weight_buf_3x3_V_27", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_27_V"}]},
			{"Name" : "weight_buf_3x3_V_28", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_28_V"}]},
			{"Name" : "weight_buf_3x3_V_29", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_29_V"}]},
			{"Name" : "weight_buf_3x3_V_30", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_30_V"}]},
			{"Name" : "weight_buf_3x3_V_31", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "836", "SubInstance" : "grp_load_weight_3x3_from_fu_2133", "Port" : "dest_31_V"}]},
			{"Name" : "relu_shiftx_buf_V_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_7", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_7", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_7", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_7", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_7", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_8", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_8", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_8", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_8", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_8", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_9", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_9", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_9", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_9", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_9", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_10", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_10", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_10", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_10", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_10", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_11", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_11", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_11", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_11", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_11", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_12", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_12", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_12", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_12", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_12", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_13", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_13", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_13", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_13", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_13", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_14", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_14", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_14", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_14", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_14", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_15", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_15", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_15", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_15", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_15", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_16", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_16", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_16", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_16", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_16", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_17", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_17", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_17", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_17", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_17", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_18", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_18", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_18", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_18", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_18", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_19", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_19", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_19", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_19", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_19", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_20", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_20", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_20", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_20", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_20", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_21", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_21", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_21", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_21", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_21", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_22", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_22", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_22", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_22", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_22", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_23", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_23", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_23", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_23", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_23", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_24", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_24", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_24", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_24", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_24", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_25", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_25", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_25", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_25", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_25", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_26", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_26", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_26", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_26", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_26", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_27", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_27", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_27", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_27", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_27", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_28", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_28", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_28", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_28", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_28", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_29", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_29", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_29", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_29", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_29", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_30", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_30", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_30", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_30", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_30", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_31", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_31", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_31", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_31", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_31", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "836", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_load_weights_3x3_all_fu_13038.grp_load_weight_3x3_from_fu_2133", "Parent" : "835",
		"CDFG" : "load_weight_3x3_from",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "47", "EstimateLatencyMax" : "47",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "dest_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_1_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_2_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_3_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_4_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_5_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_6_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_7_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_8_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_9_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_10_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_11_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_12_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_13_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_14_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_15_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_16_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_17_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_18_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_19_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_20_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_21_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_22_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_23_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_24_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_25_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_26_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_27_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_28_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_29_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_30_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_31_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "src_V", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "src_V_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "src_V_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "src_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "index", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "837", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_load_weights_1x1_all_fu_13434", "Parent" : "0", "Child" : ["838"],
		"CDFG" : "load_weights_1x1_all",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "65", "EstimateLatencyMax" : "65",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state11", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weight_1x1_from_fu_2159"}],
		"Port" : [
			{"Name" : "conv_weight_1x1_all_V", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "conv_weight_1x1_all_V_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "conv_weight_1x1_all_V_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "conv_weight_1x1_all_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_1x1_index", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_all_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "weights_all_index", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_buf_1x1_V_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V"}]},
			{"Name" : "weight_buf_1x1_V_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V1"}]},
			{"Name" : "weight_buf_1x1_V_2", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V2"}]},
			{"Name" : "weight_buf_1x1_V_3", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V3"}]},
			{"Name" : "weight_buf_1x1_V_4", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V4"}]},
			{"Name" : "weight_buf_1x1_V_5", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V5"}]},
			{"Name" : "weight_buf_1x1_V_6", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V6"}]},
			{"Name" : "weight_buf_1x1_V_7", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V7"}]},
			{"Name" : "weight_buf_1x1_V_8", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V8"}]},
			{"Name" : "weight_buf_1x1_V_9", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V9"}]},
			{"Name" : "weight_buf_1x1_V_10", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V10"}]},
			{"Name" : "weight_buf_1x1_V_11", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V11"}]},
			{"Name" : "weight_buf_1x1_V_12", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V12"}]},
			{"Name" : "weight_buf_1x1_V_13", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V13"}]},
			{"Name" : "weight_buf_1x1_V_14", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V14"}]},
			{"Name" : "weight_buf_1x1_V_15", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V15"}]},
			{"Name" : "weight_buf_1x1_V_16", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V16"}]},
			{"Name" : "weight_buf_1x1_V_17", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V17"}]},
			{"Name" : "weight_buf_1x1_V_18", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V18"}]},
			{"Name" : "weight_buf_1x1_V_19", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V19"}]},
			{"Name" : "weight_buf_1x1_V_20", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V20"}]},
			{"Name" : "weight_buf_1x1_V_21", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V21"}]},
			{"Name" : "weight_buf_1x1_V_22", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V22"}]},
			{"Name" : "weight_buf_1x1_V_23", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V23"}]},
			{"Name" : "weight_buf_1x1_V_24", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V24"}]},
			{"Name" : "weight_buf_1x1_V_25", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V25"}]},
			{"Name" : "weight_buf_1x1_V_26", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V26"}]},
			{"Name" : "weight_buf_1x1_V_27", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V27"}]},
			{"Name" : "weight_buf_1x1_V_28", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V28"}]},
			{"Name" : "weight_buf_1x1_V_29", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V29"}]},
			{"Name" : "weight_buf_1x1_V_30", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V30"}]},
			{"Name" : "weight_buf_1x1_V_31", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "838", "SubInstance" : "grp_load_weight_1x1_from_fu_2159", "Port" : "dest_V31"}]},
			{"Name" : "relu_shiftx_buf_V_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_7", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_7", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_7", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_7", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_7", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_8", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_8", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_8", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_8", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_8", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_9", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_9", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_9", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_9", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_9", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_10", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_10", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_10", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_10", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_10", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_11", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_11", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_11", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_11", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_11", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_12", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_12", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_12", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_12", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_12", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_13", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_13", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_13", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_13", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_13", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_14", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_14", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_14", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_14", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_14", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_15", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_15", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_15", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_15", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_15", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_16", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_16", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_16", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_16", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_16", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_17", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_17", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_17", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_17", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_17", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_18", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_18", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_18", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_18", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_18", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_19", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_19", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_19", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_19", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_19", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_20", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_20", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_20", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_20", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_20", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_21", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_21", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_21", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_21", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_21", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_22", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_22", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_22", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_22", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_22", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_23", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_23", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_23", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_23", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_23", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_24", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_24", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_24", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_24", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_24", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_25", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_25", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_25", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_25", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_25", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_26", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_26", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_26", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_26", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_26", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_27", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_27", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_27", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_27", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_27", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_28", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_28", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_28", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_28", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_28", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_29", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_29", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_29", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_29", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_29", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_30", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_30", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_30", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_30", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_30", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shiftx_buf_V_31", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_shifty_buf_V_31", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "relu_weight_buf_V_31", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_weight_buf_V_31", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bn_bias_buf_V_31", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "838", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_load_weights_1x1_all_fu_13434.grp_load_weight_1x1_from_fu_2159", "Parent" : "837",
		"CDFG" : "load_weight_1x1_from",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "7", "EstimateLatencyMax" : "7",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "dest_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V7", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V8", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V9", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V10", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V11", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V12", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V13", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V14", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V15", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V16", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V17", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V18", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V19", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V20", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V21", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V22", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V23", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V24", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V25", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V26", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V27", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V28", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V29", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V30", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_V31", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "src_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "coff", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "839", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_copy_input_layer_buf_fu_13833", "Parent" : "0", "Child" : ["840"],
		"CDFG" : "copy_input_layer_buf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "24", "EstimateLatencyMax" : "24",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "dest_V", "Type" : "MAXI", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "dest_V_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "dest_V_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "dest_V_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "dest_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "row_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "col_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FM_buf_acc0_V_31", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "840", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_copy_input_layer_buf_fu_13833.FracNet_mac_muladg8j_U162", "Parent" : "839"},
	{"ID" : "841", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_load_buf_from_buf_al_fu_13906", "Parent" : "0", "Child" : ["842"],
		"CDFG" : "load_buf_from_buf_al",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "85", "EstimateLatencyMax" : "85",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "row", "Type" : "None", "Direction" : "I"},
			{"Name" : "col", "Type" : "None", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_31", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_32", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_33", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_34", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_35", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_36", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_37", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_38", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_39", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_40", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_41", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_42", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_43", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_44", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_45", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_46", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_47", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_48", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_49", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_50", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_51", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_52", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_53", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_54", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_55", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_56", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_57", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_58", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_59", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_60", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_61", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_62", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf_all_V_63", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pg_buf0_V_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf0_V_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf0_V_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf0_V_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf0_V_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf0_V_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf0_V_6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf0_V_7", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pg_buf0_V_8", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "842", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_load_buf_from_buf_al_fu_13906.FracNet_mac_muladkbM_U475", "Parent" : "841"},
	{"ID" : "843", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_load_buf_from_DDR_fu_14064", "Parent" : "0", "Child" : ["844", "845", "846"],
		"CDFG" : "load_buf_from_DDR",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "69", "EstimateLatencyMax" : "69",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "src_V", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "src_V_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "src_V_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "src_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "dest_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_1_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_2_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_3_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_4_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_5_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_6_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_7_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_8_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_9_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_10_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_11_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_12_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_13_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_14_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_15_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_16_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_17_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_18_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_19_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_20_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_21_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_22_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_23_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_24_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_25_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_26_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_27_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_28_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_29_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_30_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "dest_31_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "row_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "col_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "ch_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "844", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_load_buf_from_DDR_fu_14064.FracNet_urem_6ns_hbi_U432", "Parent" : "843"},
	{"ID" : "845", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_load_buf_from_DDR_fu_14064.FracNet_mul_mul_1ibs_U433", "Parent" : "843"},
	{"ID" : "846", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_load_buf_from_DDR_fu_14064.FracNet_mac_muladjbC_U434", "Parent" : "843"},
	{"ID" : "847", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_7x7_1_fu_14148", "Parent" : "0", "Child" : ["848"],
		"CDFG" : "avgpool_7x7_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "33", "EstimateLatencyMax" : "33",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "buf_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "848", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_7x7_1_fu_14148.p_Val2_22_sum_engine_1_fu_163", "Parent" : "847",
		"CDFG" : "sum_engine_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "t0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "849", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_7x7_1_fu_14154", "Parent" : "0", "Child" : ["850"],
		"CDFG" : "avgpool_7x7_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "33", "EstimateLatencyMax" : "33",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "buf_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "850", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_7x7_1_fu_14154.p_Val2_22_sum_engine_1_fu_163", "Parent" : "849",
		"CDFG" : "sum_engine_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "t0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "851", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_7x7_1_fu_14188", "Parent" : "0", "Child" : ["852"],
		"CDFG" : "avgpool_7x7_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "33", "EstimateLatencyMax" : "33",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "buf_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "852", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_7x7_1_fu_14188.p_Val2_22_sum_engine_1_fu_163", "Parent" : "851",
		"CDFG" : "sum_engine_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "t0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "853", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_7x7_1_fu_14194", "Parent" : "0", "Child" : ["854"],
		"CDFG" : "avgpool_7x7_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "33", "EstimateLatencyMax" : "33",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "buf_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "854", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_7x7_1_fu_14194.p_Val2_22_sum_engine_1_fu_163", "Parent" : "853",
		"CDFG" : "sum_engine_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "t0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "855", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_load_input_fu_14200", "Parent" : "0", "Child" : ["856", "857", "858"],
		"CDFG" : "load_input",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "101", "EstimateLatencyMax" : "101",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "row", "Type" : "None", "Direction" : "I"},
			{"Name" : "col", "Type" : "None", "Direction" : "I"},
			{"Name" : "c", "Type" : "None", "Direction" : "I"},
			{"Name" : "buf_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "img_V", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "img_V_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "img_V_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "img_V_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "856", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_load_input_fu_14200.FracNet_urem_7ns_bkb_U1", "Parent" : "855"},
	{"ID" : "857", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_load_input_fu_14200.FracNet_mac_muladcud_U2", "Parent" : "855"},
	{"ID" : "858", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_load_input_fu_14200.FracNet_mac_muladdEe_U3", "Parent" : "855"},
	{"ID" : "859", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_fadd_32nsgxb_U2414", "Parent" : "0"},
	{"ID" : "860", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mux_104_3gyb_U2415", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	FracNet {
		IMG {Type I LastRead 19 FirstWrite -1}
		BUS512 {Type I LastRead 43 FirstWrite -1}
		DDR512 {Type IO LastRead 19 FirstWrite -1}
		BUS32 {Type IO LastRead 48 FirstWrite 58}
		image_thermo_V {Type I LastRead 0 FirstWrite -1}
		conv_weight_1x1_all_V {Type I LastRead 0 FirstWrite -1}
		conv_weight_3x3_all_V {Type I LastRead 0 FirstWrite -1}
		weights_all_V {Type I LastRead 0 FirstWrite -1}
		linear_weight_all_V {Type I LastRead 0 FirstWrite -1}
		linear_bias_all_V {Type I LastRead 0 FirstWrite -1}
		DDR_buff_merge_V {Type I LastRead 0 FirstWrite -1}
		out_r {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}
		bn_weight_buf_V_0 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_1 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_2 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_3 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_4 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_5 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_6 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_7 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_8 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_9 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_10 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_11 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_12 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_13 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_14 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_15 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_16 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_17 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_18 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_19 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_20 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_21 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_22 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_23 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_24 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_25 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_26 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_27 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_28 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_29 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_30 {Type IO LastRead -1 FirstWrite -1}
		bn_weight_buf_V_31 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_0 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_1 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_2 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_3 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_4 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_5 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_6 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_7 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_8 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_9 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_10 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_11 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_12 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_13 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_14 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_15 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_16 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_17 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_18 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_19 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_20 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_21 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_22 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_23 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_24 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_25 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_26 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_27 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_28 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_29 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_30 {Type IO LastRead -1 FirstWrite -1}
		bn_bias_buf_V_31 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_0 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_1 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_2 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_3 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_4 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_5 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_6 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_7 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_8 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_9 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_10 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_11 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_12 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_13 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_14 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_15 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_16 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_17 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_18 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_19 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_20 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_21 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_22 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_23 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_24 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_25 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_26 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_27 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_28 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_29 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_30 {Type IO LastRead -1 FirstWrite -1}
		FM_buf_acc0_V_31 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_0 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_1 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_2 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_3 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_4 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_5 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_6 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_7 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_8 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_9 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_10 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_11 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_12 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_13 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_14 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_15 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_16 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_17 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_18 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_19 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_20 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_21 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_22 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_23 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_24 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_25 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_26 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_27 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_28 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_29 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_30 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_31 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_0 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_1 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_2 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_3 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_4 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_5 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_6 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_7 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_8 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_9 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_10 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_11 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_12 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_13 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_14 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_15 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_16 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_17 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_18 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_19 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_20 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_21 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_22 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_23 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_24 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_25 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_26 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_27 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_28 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_29 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_30 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_31 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_0 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_0 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_0 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_1 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_1 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_1 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_2 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_2 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_2 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_3 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_3 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_3 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_4 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_4 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_4 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_5 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_5 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_5 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_6 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_6 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_6 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_7 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_7 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_7 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_8 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_8 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_8 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_9 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_9 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_9 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_10 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_10 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_10 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_11 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_11 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_11 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_12 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_12 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_12 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_13 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_13 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_13 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_14 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_14 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_14 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_15 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_15 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_15 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_16 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_16 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_16 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_17 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_17 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_17 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_18 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_18 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_18 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_19 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_19 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_19 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_20 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_20 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_20 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_21 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_21 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_21 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_22 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_22 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_22 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_23 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_23 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_23 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_24 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_24 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_24 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_25 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_25 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_25 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_26 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_26 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_26 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_27 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_27 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_27 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_28 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_28 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_28 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_29 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_29 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_29 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_30 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_30 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_30 {Type IO LastRead -1 FirstWrite -1}
		relu_shiftx_buf_V_31 {Type IO LastRead -1 FirstWrite -1}
		relu_shifty_buf_V_31 {Type IO LastRead -1 FirstWrite -1}
		relu_weight_buf_V_31 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_0 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_1 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_2 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_3 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_4 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_5 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_6 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_7 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_8 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_9 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_10 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_11 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_12 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_13 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_14 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_15 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_16 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_17 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_18 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_19 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_20 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_21 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_22 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_23 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_24 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_25 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_26 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_27 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_28 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_29 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_30 {Type IO LastRead -1 FirstWrite -1}
		FM_buf0_V_31 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_32 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_33 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_34 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_35 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_36 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_37 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_38 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_39 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_40 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_41 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_42 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_43 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_44 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_45 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_46 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_47 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_48 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_49 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_50 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_51 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_52 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_53 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_54 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_55 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_56 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_57 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_58 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_59 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_60 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_61 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_62 {Type IO LastRead -1 FirstWrite -1}
		pg_buf_all_V_63 {Type IO LastRead -1 FirstWrite -1}
		pg_buf0_V_0 {Type IO LastRead -1 FirstWrite -1}
		pg_buf0_V_1 {Type IO LastRead -1 FirstWrite -1}
		pg_buf0_V_2 {Type IO LastRead -1 FirstWrite -1}
		pg_buf0_V_3 {Type IO LastRead -1 FirstWrite -1}
		pg_buf0_V_4 {Type IO LastRead -1 FirstWrite -1}
		pg_buf0_V_5 {Type IO LastRead -1 FirstWrite -1}
		pg_buf0_V_6 {Type IO LastRead -1 FirstWrite -1}
		pg_buf0_V_7 {Type IO LastRead -1 FirstWrite -1}
		pg_buf0_V_8 {Type IO LastRead -1 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_0 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_1 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_2 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_3 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_4 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_5 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_6 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_7 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_8 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_9 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_10 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_11 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_12 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_13 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_14 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_15 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_16 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_17 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_18 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_19 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_20 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_21 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_22 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_23 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_24 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_25 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_26 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_27 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_28 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_29 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_30 {Type IO LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_31 {Type IO LastRead -1 FirstWrite -1}}
	biconv16 {
		bottom_V {Type I LastRead 7 FirstWrite -1}
		weights_0_V {Type I LastRead 6 FirstWrite -1}
		weights_1_V {Type I LastRead 6 FirstWrite -1}
		weights_2_V {Type I LastRead 6 FirstWrite -1}
		weights_3_V {Type I LastRead 6 FirstWrite -1}
		weights_4_V {Type I LastRead 6 FirstWrite -1}
		weights_5_V {Type I LastRead 6 FirstWrite -1}
		weights_6_V {Type I LastRead 6 FirstWrite -1}
		weights_7_V {Type I LastRead 6 FirstWrite -1}
		weights_8_V {Type I LastRead 6 FirstWrite -1}
		weights_9_V {Type I LastRead 6 FirstWrite -1}
		weights_10_V {Type I LastRead 6 FirstWrite -1}
		weights_11_V {Type I LastRead 6 FirstWrite -1}
		weights_12_V {Type I LastRead 6 FirstWrite -1}
		weights_13_V {Type I LastRead 6 FirstWrite -1}
		weights_14_V {Type I LastRead 6 FirstWrite -1}
		weights_15_V {Type I LastRead 6 FirstWrite -1}
		weights_16_V {Type I LastRead 6 FirstWrite -1}
		weights_17_V {Type I LastRead 6 FirstWrite -1}
		weights_18_V {Type I LastRead 6 FirstWrite -1}
		weights_19_V {Type I LastRead 6 FirstWrite -1}
		weights_20_V {Type I LastRead 6 FirstWrite -1}
		weights_21_V {Type I LastRead 6 FirstWrite -1}
		weights_22_V {Type I LastRead 6 FirstWrite -1}
		weights_23_V {Type I LastRead 6 FirstWrite -1}
		weights_24_V {Type I LastRead 6 FirstWrite -1}
		weights_25_V {Type I LastRead 6 FirstWrite -1}
		weights_26_V {Type I LastRead 6 FirstWrite -1}
		weights_27_V {Type I LastRead 6 FirstWrite -1}
		weights_28_V {Type I LastRead 6 FirstWrite -1}
		weights_29_V {Type I LastRead 7 FirstWrite -1}
		weights_30_V {Type I LastRead 7 FirstWrite -1}
		weights_31_V {Type I LastRead 7 FirstWrite -1}
		weights_V_offset {Type I LastRead 0 FirstWrite -1}
		bn_weight_V {Type I LastRead 6 FirstWrite -1}
		bn_weight_V32 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V33 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V34 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V35 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V36 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V37 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V38 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V39 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V40 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V41 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V42 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V43 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V44 {Type I LastRead 6 FirstWrite -1}
		bn_weight_V45 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V46 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V47 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V48 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V49 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V50 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V51 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V52 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V53 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V54 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V55 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V56 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V57 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V58 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V59 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V60 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V61 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V62 {Type I LastRead 11 FirstWrite -1}
		bn_weight_V_offset {Type I LastRead 0 FirstWrite -1}
		bn_bias_V {Type I LastRead 6 FirstWrite -1}
		bn_bias_V63 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V64 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V65 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V66 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V67 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V68 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V69 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V70 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V71 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V72 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V73 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V74 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V75 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V76 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V77 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V78 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V79 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V80 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V81 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V82 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V83 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V84 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V85 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V86 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V87 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V88 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V89 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V90 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V91 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V92 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V93 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V_offset {Type I LastRead 0 FirstWrite -1}
		top_0_V {Type IO LastRead 11 FirstWrite 15}
		top_1_V {Type IO LastRead 11 FirstWrite 15}
		top_2_V {Type IO LastRead 11 FirstWrite 15}
		top_3_V {Type IO LastRead 11 FirstWrite 15}
		top_4_V {Type IO LastRead 11 FirstWrite 15}
		top_5_V {Type IO LastRead 11 FirstWrite 15}
		top_6_V {Type IO LastRead 11 FirstWrite 15}
		top_7_V {Type IO LastRead 11 FirstWrite 16}
		top_8_V {Type IO LastRead 11 FirstWrite 16}
		top_9_V {Type IO LastRead 11 FirstWrite 16}
		top_10_V {Type IO LastRead 11 FirstWrite 16}
		top_11_V {Type IO LastRead 11 FirstWrite 16}
		top_12_V {Type IO LastRead 11 FirstWrite 16}
		top_13_V {Type IO LastRead 11 FirstWrite 16}
		top_14_V {Type IO LastRead 11 FirstWrite 17}
		top_15_V {Type IO LastRead 11 FirstWrite 17}
		top_16_V {Type IO LastRead 11 FirstWrite 17}
		top_17_V {Type IO LastRead 11 FirstWrite 17}
		top_18_V {Type IO LastRead 11 FirstWrite 17}
		top_19_V {Type IO LastRead 11 FirstWrite 17}
		top_20_V {Type IO LastRead 11 FirstWrite 17}
		top_21_V {Type IO LastRead 16 FirstWrite 18}
		top_22_V {Type IO LastRead 16 FirstWrite 18}
		top_23_V {Type IO LastRead 16 FirstWrite 18}
		top_24_V {Type IO LastRead 16 FirstWrite 18}
		top_25_V {Type IO LastRead 16 FirstWrite 18}
		top_26_V {Type IO LastRead 16 FirstWrite 18}
		top_27_V {Type IO LastRead 16 FirstWrite 18}
		top_28_V {Type IO LastRead 16 FirstWrite 19}
		top_29_V {Type IO LastRead 16 FirstWrite 19}
		top_30_V {Type IO LastRead 16 FirstWrite 19}
		top_31_V {Type IO LastRead 16 FirstWrite 19}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	sum_engine {
		t0_V {Type I LastRead 0 FirstWrite -1}
		t1_V {Type I LastRead 0 FirstWrite -1}
		t2_V {Type I LastRead 0 FirstWrite -1}
		t3_V {Type I LastRead 0 FirstWrite -1}
		t4_V {Type I LastRead 0 FirstWrite -1}
		t5_V {Type I LastRead 0 FirstWrite -1}
		t6_V {Type I LastRead 0 FirstWrite -1}
		t7_V {Type I LastRead 0 FirstWrite -1}
		t8_V {Type I LastRead 0 FirstWrite -1}}
	sum_engine {
		t0_V {Type I LastRead 0 FirstWrite -1}
		t1_V {Type I LastRead 0 FirstWrite -1}
		t2_V {Type I LastRead 0 FirstWrite -1}
		t3_V {Type I LastRead 0 FirstWrite -1}
		t4_V {Type I LastRead 0 FirstWrite -1}
		t5_V {Type I LastRead 0 FirstWrite -1}
		t6_V {Type I LastRead 0 FirstWrite -1}
		t7_V {Type I LastRead 0 FirstWrite -1}
		t8_V {Type I LastRead 0 FirstWrite -1}}
	sum_engine {
		t0_V {Type I LastRead 0 FirstWrite -1}
		t1_V {Type I LastRead 0 FirstWrite -1}
		t2_V {Type I LastRead 0 FirstWrite -1}
		t3_V {Type I LastRead 0 FirstWrite -1}
		t4_V {Type I LastRead 0 FirstWrite -1}
		t5_V {Type I LastRead 0 FirstWrite -1}
		t6_V {Type I LastRead 0 FirstWrite -1}
		t7_V {Type I LastRead 0 FirstWrite -1}
		t8_V {Type I LastRead 0 FirstWrite -1}}
	sum_engine {
		t0_V {Type I LastRead 0 FirstWrite -1}
		t1_V {Type I LastRead 0 FirstWrite -1}
		t2_V {Type I LastRead 0 FirstWrite -1}
		t3_V {Type I LastRead 0 FirstWrite -1}
		t4_V {Type I LastRead 0 FirstWrite -1}
		t5_V {Type I LastRead 0 FirstWrite -1}
		t6_V {Type I LastRead 0 FirstWrite -1}
		t7_V {Type I LastRead 0 FirstWrite -1}
		t8_V {Type I LastRead 0 FirstWrite -1}}
	sum_engine {
		t0_V {Type I LastRead 0 FirstWrite -1}
		t1_V {Type I LastRead 0 FirstWrite -1}
		t2_V {Type I LastRead 0 FirstWrite -1}
		t3_V {Type I LastRead 0 FirstWrite -1}
		t4_V {Type I LastRead 0 FirstWrite -1}
		t5_V {Type I LastRead 0 FirstWrite -1}
		t6_V {Type I LastRead 0 FirstWrite -1}
		t7_V {Type I LastRead 0 FirstWrite -1}
		t8_V {Type I LastRead 0 FirstWrite -1}}
	sum_engine {
		t0_V {Type I LastRead 0 FirstWrite -1}
		t1_V {Type I LastRead 0 FirstWrite -1}
		t2_V {Type I LastRead 0 FirstWrite -1}
		t3_V {Type I LastRead 0 FirstWrite -1}
		t4_V {Type I LastRead 0 FirstWrite -1}
		t5_V {Type I LastRead 0 FirstWrite -1}
		t6_V {Type I LastRead 0 FirstWrite -1}
		t7_V {Type I LastRead 0 FirstWrite -1}
		t8_V {Type I LastRead 0 FirstWrite -1}}
	sum_engine {
		t0_V {Type I LastRead 0 FirstWrite -1}
		t1_V {Type I LastRead 0 FirstWrite -1}
		t2_V {Type I LastRead 0 FirstWrite -1}
		t3_V {Type I LastRead 0 FirstWrite -1}
		t4_V {Type I LastRead 0 FirstWrite -1}
		t5_V {Type I LastRead 0 FirstWrite -1}
		t6_V {Type I LastRead 0 FirstWrite -1}
		t7_V {Type I LastRead 0 FirstWrite -1}
		t8_V {Type I LastRead 0 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	pgconv64_1bit {
		bottom_0_V {Type I LastRead 3 FirstWrite -1}
		bottom_1_V {Type I LastRead 3 FirstWrite -1}
		bottom_2_V {Type I LastRead 3 FirstWrite -1}
		bottom_3_V {Type I LastRead 3 FirstWrite -1}
		bottom_4_V {Type I LastRead 3 FirstWrite -1}
		bottom_5_V {Type I LastRead 3 FirstWrite -1}
		bottom_6_V {Type I LastRead 3 FirstWrite -1}
		bottom_7_V {Type I LastRead 3 FirstWrite -1}
		bottom_8_V {Type I LastRead 3 FirstWrite -1}
		bn_weights_V {Type I LastRead 6 FirstWrite -1}
		bn_weights_V71 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V72 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V73 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V74 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V75 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V76 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V77 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V78 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V79 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V80 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V81 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V82 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V83 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V84 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V85 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V86 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V87 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V88 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V89 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V90 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V91 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V92 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V93 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V94 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V95 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V96 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V97 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V98 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V99 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V100 {Type I LastRead 11 FirstWrite -1}
		bn_weights_V101 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V {Type I LastRead 6 FirstWrite -1}
		bn_bias_V102 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V103 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V104 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V105 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V106 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V107 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V108 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V109 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V110 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V111 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V112 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V113 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V114 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V115 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V116 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V117 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V118 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V119 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V120 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V121 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V122 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V123 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V124 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V125 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V126 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V127 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V128 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V129 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V130 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V131 {Type I LastRead 11 FirstWrite -1}
		bn_bias_V132 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V133 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V134 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V135 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V136 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V137 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V138 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V139 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V140 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V141 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V142 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V143 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V144 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V145 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V146 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V147 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V148 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V149 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V150 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V151 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V152 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V153 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V154 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V155 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V156 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V157 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V158 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V159 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V160 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V161 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V162 {Type I LastRead 16 FirstWrite -1}
		relu_shiftx_V163 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V164 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V165 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V166 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V167 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V168 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V169 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V170 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V171 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V172 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V173 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V174 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V175 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V176 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V177 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V178 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V179 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V180 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V181 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V182 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V183 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V184 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V185 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V186 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V187 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V188 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V189 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V190 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V191 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V192 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V193 {Type I LastRead 16 FirstWrite -1}
		relu_shifty_V194 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V {Type I LastRead 11 FirstWrite -1}
		relu_weights_V195 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V196 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V197 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V198 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V199 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V200 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V201 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V202 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V203 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V204 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V205 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V206 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V207 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V208 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V209 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V210 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V211 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V212 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V213 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V214 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V215 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V216 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V217 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V218 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V219 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V220 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V221 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V222 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V223 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V224 {Type I LastRead 16 FirstWrite -1}
		relu_weights_V225 {Type I LastRead 16 FirstWrite -1}
		top_0_V {Type IO LastRead 15 FirstWrite 19}
		top_1_V {Type IO LastRead 15 FirstWrite 19}
		top_2_V {Type IO LastRead 15 FirstWrite 19}
		top_3_V {Type IO LastRead 15 FirstWrite 19}
		top_4_V {Type IO LastRead 15 FirstWrite 19}
		top_5_V {Type IO LastRead 15 FirstWrite 19}
		top_6_V {Type IO LastRead 15 FirstWrite 19}
		top_7_V {Type IO LastRead 16 FirstWrite 20}
		top_8_V {Type IO LastRead 16 FirstWrite 20}
		top_9_V {Type IO LastRead 16 FirstWrite 20}
		top_10_V {Type IO LastRead 16 FirstWrite 20}
		top_11_V {Type IO LastRead 16 FirstWrite 20}
		top_12_V {Type IO LastRead 16 FirstWrite 20}
		top_13_V {Type IO LastRead 16 FirstWrite 20}
		top_14_V {Type IO LastRead 17 FirstWrite 21}
		top_15_V {Type IO LastRead 17 FirstWrite 21}
		top_16_V {Type IO LastRead 17 FirstWrite 21}
		top_17_V {Type IO LastRead 17 FirstWrite 21}
		top_18_V {Type IO LastRead 17 FirstWrite 21}
		top_19_V {Type IO LastRead 17 FirstWrite 21}
		top_20_V {Type IO LastRead 17 FirstWrite 21}
		top_21_V {Type IO LastRead 18 FirstWrite 22}
		top_22_V {Type IO LastRead 18 FirstWrite 22}
		top_23_V {Type IO LastRead 18 FirstWrite 22}
		top_24_V {Type IO LastRead 18 FirstWrite 22}
		top_25_V {Type IO LastRead 18 FirstWrite 22}
		top_26_V {Type IO LastRead 18 FirstWrite 22}
		top_27_V {Type IO LastRead 18 FirstWrite 22}
		top_28_V {Type IO LastRead 19 FirstWrite 23}
		top_29_V {Type IO LastRead 19 FirstWrite 23}
		top_30_V {Type IO LastRead 19 FirstWrite 23}
		top_31_V {Type IO LastRead 19 FirstWrite 23}
		stride {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}
		weight_buf_3x3_V_0 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_1 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_2 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_3 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_4 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_5 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_6 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_7 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_8 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_9 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_10 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_11 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_12 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_13 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_14 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_15 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_16 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_17 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_18 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_19 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_20 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_21 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_22 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_23 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_24 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_25 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_26 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_27 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_28 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_29 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_30 {Type I LastRead 6 FirstWrite -1}
		weight_buf_3x3_V_31 {Type I LastRead 6 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}
		shiftx_V {Type I LastRead 0 FirstWrite -1}
		shifty_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}
		shiftx_V {Type I LastRead 0 FirstWrite -1}
		shifty_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}
		shiftx_V {Type I LastRead 0 FirstWrite -1}
		shifty_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}
		shiftx_V {Type I LastRead 0 FirstWrite -1}
		shifty_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}
		shiftx_V {Type I LastRead 0 FirstWrite -1}
		shifty_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}
		shiftx_V {Type I LastRead 0 FirstWrite -1}
		shifty_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}
		shiftx_V {Type I LastRead 0 FirstWrite -1}
		shifty_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	sum_engine {
		t0_V {Type I LastRead 0 FirstWrite -1}
		t1_V {Type I LastRead 0 FirstWrite -1}
		t2_V {Type I LastRead 0 FirstWrite -1}
		t3_V {Type I LastRead 0 FirstWrite -1}
		t4_V {Type I LastRead 0 FirstWrite -1}
		t5_V {Type I LastRead 0 FirstWrite -1}
		t6_V {Type I LastRead 0 FirstWrite -1}
		t7_V {Type I LastRead 0 FirstWrite -1}
		t8_V {Type I LastRead 0 FirstWrite -1}}
	sum_engine {
		t0_V {Type I LastRead 0 FirstWrite -1}
		t1_V {Type I LastRead 0 FirstWrite -1}
		t2_V {Type I LastRead 0 FirstWrite -1}
		t3_V {Type I LastRead 0 FirstWrite -1}
		t4_V {Type I LastRead 0 FirstWrite -1}
		t5_V {Type I LastRead 0 FirstWrite -1}
		t6_V {Type I LastRead 0 FirstWrite -1}
		t7_V {Type I LastRead 0 FirstWrite -1}
		t8_V {Type I LastRead 0 FirstWrite -1}}
	sum_engine {
		t0_V {Type I LastRead 0 FirstWrite -1}
		t1_V {Type I LastRead 0 FirstWrite -1}
		t2_V {Type I LastRead 0 FirstWrite -1}
		t3_V {Type I LastRead 0 FirstWrite -1}
		t4_V {Type I LastRead 0 FirstWrite -1}
		t5_V {Type I LastRead 0 FirstWrite -1}
		t6_V {Type I LastRead 0 FirstWrite -1}
		t7_V {Type I LastRead 0 FirstWrite -1}
		t8_V {Type I LastRead 0 FirstWrite -1}}
	sum_engine {
		t0_V {Type I LastRead 0 FirstWrite -1}
		t1_V {Type I LastRead 0 FirstWrite -1}
		t2_V {Type I LastRead 0 FirstWrite -1}
		t3_V {Type I LastRead 0 FirstWrite -1}
		t4_V {Type I LastRead 0 FirstWrite -1}
		t5_V {Type I LastRead 0 FirstWrite -1}
		t6_V {Type I LastRead 0 FirstWrite -1}
		t7_V {Type I LastRead 0 FirstWrite -1}
		t8_V {Type I LastRead 0 FirstWrite -1}}
	sum_engine {
		t0_V {Type I LastRead 0 FirstWrite -1}
		t1_V {Type I LastRead 0 FirstWrite -1}
		t2_V {Type I LastRead 0 FirstWrite -1}
		t3_V {Type I LastRead 0 FirstWrite -1}
		t4_V {Type I LastRead 0 FirstWrite -1}
		t5_V {Type I LastRead 0 FirstWrite -1}
		t6_V {Type I LastRead 0 FirstWrite -1}
		t7_V {Type I LastRead 0 FirstWrite -1}
		t8_V {Type I LastRead 0 FirstWrite -1}}
	sum_engine {
		t0_V {Type I LastRead 0 FirstWrite -1}
		t1_V {Type I LastRead 0 FirstWrite -1}
		t2_V {Type I LastRead 0 FirstWrite -1}
		t3_V {Type I LastRead 0 FirstWrite -1}
		t4_V {Type I LastRead 0 FirstWrite -1}
		t5_V {Type I LastRead 0 FirstWrite -1}
		t6_V {Type I LastRead 0 FirstWrite -1}
		t7_V {Type I LastRead 0 FirstWrite -1}
		t8_V {Type I LastRead 0 FirstWrite -1}}
	sum_engine {
		t0_V {Type I LastRead 0 FirstWrite -1}
		t1_V {Type I LastRead 0 FirstWrite -1}
		t2_V {Type I LastRead 0 FirstWrite -1}
		t3_V {Type I LastRead 0 FirstWrite -1}
		t4_V {Type I LastRead 0 FirstWrite -1}
		t5_V {Type I LastRead 0 FirstWrite -1}
		t6_V {Type I LastRead 0 FirstWrite -1}
		t7_V {Type I LastRead 0 FirstWrite -1}
		t8_V {Type I LastRead 0 FirstWrite -1}}
	store_bufs_organize {
		ddr_ptr_V {Type O LastRead 14 FirstWrite 13}
		ddr_ptr_V_offset {Type I LastRead 1 FirstWrite -1}
		row_offset {Type I LastRead 0 FirstWrite -1}
		col_offset {Type I LastRead 1 FirstWrite -1}
		ch_offset {Type I LastRead 0 FirstWrite -1}
		FM_buf0_V_1 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_1 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_2 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_2 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_3 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_3 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_4 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_4 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_5 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_5 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_6 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_6 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_7 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_7 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_8 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_8 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_9 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_9 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_10 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_10 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_11 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_11 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_12 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_12 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_13 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_13 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_14 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_14 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_15 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_15 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_16 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_16 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_17 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_17 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_18 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_18 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_19 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_19 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_20 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_20 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_21 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_21 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_22 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_22 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_23 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_23 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_24 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_24 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_25 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_25 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_26 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_26 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_27 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_27 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_28 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_28 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_29 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_29 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_30 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_30 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_31 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_31 {Type I LastRead 3 FirstWrite -1}
		FM_buf0_V_0 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_0 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_31 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_63 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_30 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_62 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_29 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_61 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_28 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_60 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_27 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_59 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_26 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_58 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_25 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_57 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_24 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_56 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_23 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_55 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_22 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_54 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_21 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_53 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_20 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_52 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_19 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_51 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_18 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_50 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_17 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_49 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_16 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_48 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_15 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_47 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_14 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_46 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_13 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_45 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_12 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_44 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_11 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_43 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_10 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_42 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_9 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_41 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_8 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_40 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_7 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_39 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_6 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_38 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_5 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_37 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_4 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_36 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_3 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_35 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_2 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_34 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_1 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_33 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_0 {Type O LastRead -1 FirstWrite 8}
		pg_buf_all_V_32 {Type O LastRead -1 FirstWrite 8}
		bn_weight_buf_V_0 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_0 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_1 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_1 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_2 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_2 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_3 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_3 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_4 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_4 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_5 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_5 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_6 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_6 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_7 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_7 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_8 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_8 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_9 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_9 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_10 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_10 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_11 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_11 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_12 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_12 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_13 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_13 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_14 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_14 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_15 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_15 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_16 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_16 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_17 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_17 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_18 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_18 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_19 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_19 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_20 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_20 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_21 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_21 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_22 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_22 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_23 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_23 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_24 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_24 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_25 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_25 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_26 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_26 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_27 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_27 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_28 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_28 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_29 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_29 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_30 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_30 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_31 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_31 {Type I LastRead 0 FirstWrite -1}}
	pgconv64_1x1_1bit {
		bottom_1_V {Type I LastRead 2 FirstWrite -1}
		bottom_2_V {Type I LastRead 2 FirstWrite -1}
		bottom_3_V {Type I LastRead 2 FirstWrite -1}
		bottom_4_V {Type I LastRead 2 FirstWrite -1}
		bottom_5_V {Type I LastRead 2 FirstWrite -1}
		bottom_6_V {Type I LastRead 2 FirstWrite -1}
		bottom_7_V {Type I LastRead 2 FirstWrite -1}
		bn_weights_V {Type I LastRead 1 FirstWrite -1}
		bn_weights_V71 {Type I LastRead 1 FirstWrite -1}
		bn_weights_V72 {Type I LastRead 1 FirstWrite -1}
		bn_weights_V73 {Type I LastRead 1 FirstWrite -1}
		bn_weights_V74 {Type I LastRead 1 FirstWrite -1}
		bn_weights_V75 {Type I LastRead 1 FirstWrite -1}
		bn_weights_V76 {Type I LastRead 1 FirstWrite -1}
		bn_weights_V77 {Type I LastRead 1 FirstWrite -1}
		bn_weights_V78 {Type I LastRead 1 FirstWrite -1}
		bn_weights_V79 {Type I LastRead 1 FirstWrite -1}
		bn_weights_V80 {Type I LastRead 1 FirstWrite -1}
		bn_weights_V81 {Type I LastRead 1 FirstWrite -1}
		bn_weights_V82 {Type I LastRead 1 FirstWrite -1}
		bn_weights_V83 {Type I LastRead 1 FirstWrite -1}
		bn_weights_V84 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V85 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V86 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V87 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V88 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V89 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V90 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V91 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V92 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V93 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V94 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V95 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V96 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V97 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V98 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V99 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V100 {Type I LastRead 6 FirstWrite -1}
		bn_weights_V101 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V {Type I LastRead 1 FirstWrite -1}
		bn_bias_V102 {Type I LastRead 1 FirstWrite -1}
		bn_bias_V103 {Type I LastRead 1 FirstWrite -1}
		bn_bias_V104 {Type I LastRead 1 FirstWrite -1}
		bn_bias_V105 {Type I LastRead 1 FirstWrite -1}
		bn_bias_V106 {Type I LastRead 1 FirstWrite -1}
		bn_bias_V107 {Type I LastRead 1 FirstWrite -1}
		bn_bias_V108 {Type I LastRead 1 FirstWrite -1}
		bn_bias_V109 {Type I LastRead 1 FirstWrite -1}
		bn_bias_V110 {Type I LastRead 1 FirstWrite -1}
		bn_bias_V111 {Type I LastRead 1 FirstWrite -1}
		bn_bias_V112 {Type I LastRead 1 FirstWrite -1}
		bn_bias_V113 {Type I LastRead 1 FirstWrite -1}
		bn_bias_V114 {Type I LastRead 1 FirstWrite -1}
		bn_bias_V115 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V116 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V117 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V118 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V119 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V120 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V121 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V122 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V123 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V124 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V125 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V126 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V127 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V128 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V129 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V130 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V131 {Type I LastRead 6 FirstWrite -1}
		bn_bias_V132 {Type I LastRead 6 FirstWrite -1}
		relu_shiftx_V {Type I LastRead 6 FirstWrite -1}
		relu_shiftx_V133 {Type I LastRead 6 FirstWrite -1}
		relu_shiftx_V134 {Type I LastRead 6 FirstWrite -1}
		relu_shiftx_V135 {Type I LastRead 6 FirstWrite -1}
		relu_shiftx_V136 {Type I LastRead 6 FirstWrite -1}
		relu_shiftx_V137 {Type I LastRead 6 FirstWrite -1}
		relu_shiftx_V138 {Type I LastRead 6 FirstWrite -1}
		relu_shiftx_V139 {Type I LastRead 6 FirstWrite -1}
		relu_shiftx_V140 {Type I LastRead 6 FirstWrite -1}
		relu_shiftx_V141 {Type I LastRead 6 FirstWrite -1}
		relu_shiftx_V142 {Type I LastRead 6 FirstWrite -1}
		relu_shiftx_V143 {Type I LastRead 6 FirstWrite -1}
		relu_shiftx_V144 {Type I LastRead 6 FirstWrite -1}
		relu_shiftx_V145 {Type I LastRead 6 FirstWrite -1}
		relu_shiftx_V146 {Type I LastRead 6 FirstWrite -1}
		relu_shiftx_V147 {Type I LastRead 6 FirstWrite -1}
		relu_shiftx_V148 {Type I LastRead 6 FirstWrite -1}
		relu_shiftx_V149 {Type I LastRead 6 FirstWrite -1}
		relu_shiftx_V150 {Type I LastRead 6 FirstWrite -1}
		relu_shiftx_V151 {Type I LastRead 6 FirstWrite -1}
		relu_shiftx_V152 {Type I LastRead 6 FirstWrite -1}
		relu_shiftx_V153 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V154 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V155 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V156 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V157 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V158 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V159 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V160 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V161 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V162 {Type I LastRead 11 FirstWrite -1}
		relu_shiftx_V163 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V {Type I LastRead 6 FirstWrite -1}
		relu_shifty_V164 {Type I LastRead 6 FirstWrite -1}
		relu_shifty_V165 {Type I LastRead 6 FirstWrite -1}
		relu_shifty_V166 {Type I LastRead 6 FirstWrite -1}
		relu_shifty_V167 {Type I LastRead 6 FirstWrite -1}
		relu_shifty_V168 {Type I LastRead 6 FirstWrite -1}
		relu_shifty_V169 {Type I LastRead 6 FirstWrite -1}
		relu_shifty_V170 {Type I LastRead 6 FirstWrite -1}
		relu_shifty_V171 {Type I LastRead 6 FirstWrite -1}
		relu_shifty_V172 {Type I LastRead 6 FirstWrite -1}
		relu_shifty_V173 {Type I LastRead 6 FirstWrite -1}
		relu_shifty_V174 {Type I LastRead 6 FirstWrite -1}
		relu_shifty_V175 {Type I LastRead 6 FirstWrite -1}
		relu_shifty_V176 {Type I LastRead 6 FirstWrite -1}
		relu_shifty_V177 {Type I LastRead 6 FirstWrite -1}
		relu_shifty_V178 {Type I LastRead 6 FirstWrite -1}
		relu_shifty_V179 {Type I LastRead 6 FirstWrite -1}
		relu_shifty_V180 {Type I LastRead 6 FirstWrite -1}
		relu_shifty_V181 {Type I LastRead 6 FirstWrite -1}
		relu_shifty_V182 {Type I LastRead 6 FirstWrite -1}
		relu_shifty_V183 {Type I LastRead 6 FirstWrite -1}
		relu_shifty_V184 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V185 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V186 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V187 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V188 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V189 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V190 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V191 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V192 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V193 {Type I LastRead 11 FirstWrite -1}
		relu_shifty_V194 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V {Type I LastRead 6 FirstWrite -1}
		relu_weights_V195 {Type I LastRead 6 FirstWrite -1}
		relu_weights_V196 {Type I LastRead 6 FirstWrite -1}
		relu_weights_V197 {Type I LastRead 6 FirstWrite -1}
		relu_weights_V198 {Type I LastRead 6 FirstWrite -1}
		relu_weights_V199 {Type I LastRead 6 FirstWrite -1}
		relu_weights_V200 {Type I LastRead 6 FirstWrite -1}
		relu_weights_V201 {Type I LastRead 6 FirstWrite -1}
		relu_weights_V202 {Type I LastRead 6 FirstWrite -1}
		relu_weights_V203 {Type I LastRead 6 FirstWrite -1}
		relu_weights_V204 {Type I LastRead 6 FirstWrite -1}
		relu_weights_V205 {Type I LastRead 6 FirstWrite -1}
		relu_weights_V206 {Type I LastRead 6 FirstWrite -1}
		relu_weights_V207 {Type I LastRead 6 FirstWrite -1}
		relu_weights_V208 {Type I LastRead 6 FirstWrite -1}
		relu_weights_V209 {Type I LastRead 6 FirstWrite -1}
		relu_weights_V210 {Type I LastRead 6 FirstWrite -1}
		relu_weights_V211 {Type I LastRead 6 FirstWrite -1}
		relu_weights_V212 {Type I LastRead 6 FirstWrite -1}
		relu_weights_V213 {Type I LastRead 6 FirstWrite -1}
		relu_weights_V214 {Type I LastRead 6 FirstWrite -1}
		relu_weights_V215 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V216 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V217 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V218 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V219 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V220 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V221 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V222 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V223 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V224 {Type I LastRead 11 FirstWrite -1}
		relu_weights_V225 {Type I LastRead 11 FirstWrite -1}
		top_0_V {Type IO LastRead 12 FirstWrite 14}
		top_1_V {Type IO LastRead 12 FirstWrite 14}
		top_2_V {Type IO LastRead 12 FirstWrite 14}
		top_3_V {Type IO LastRead 12 FirstWrite 14}
		top_4_V {Type IO LastRead 12 FirstWrite 14}
		top_5_V {Type IO LastRead 12 FirstWrite 14}
		top_6_V {Type IO LastRead 12 FirstWrite 14}
		top_7_V {Type IO LastRead 12 FirstWrite 15}
		top_8_V {Type IO LastRead 12 FirstWrite 15}
		top_9_V {Type IO LastRead 12 FirstWrite 15}
		top_10_V {Type IO LastRead 12 FirstWrite 15}
		top_11_V {Type IO LastRead 12 FirstWrite 15}
		top_12_V {Type IO LastRead 12 FirstWrite 15}
		top_13_V {Type IO LastRead 12 FirstWrite 15}
		top_14_V {Type IO LastRead 12 FirstWrite 16}
		top_15_V {Type IO LastRead 12 FirstWrite 16}
		top_16_V {Type IO LastRead 12 FirstWrite 16}
		top_17_V {Type IO LastRead 12 FirstWrite 16}
		top_18_V {Type IO LastRead 12 FirstWrite 16}
		top_19_V {Type IO LastRead 12 FirstWrite 16}
		top_20_V {Type IO LastRead 12 FirstWrite 16}
		top_21_V {Type IO LastRead 12 FirstWrite 17}
		top_22_V {Type IO LastRead 12 FirstWrite 17}
		top_23_V {Type IO LastRead 12 FirstWrite 17}
		top_24_V {Type IO LastRead 12 FirstWrite 17}
		top_25_V {Type IO LastRead 12 FirstWrite 17}
		top_26_V {Type IO LastRead 12 FirstWrite 17}
		top_27_V {Type IO LastRead 12 FirstWrite 17}
		top_28_V {Type IO LastRead 12 FirstWrite 18}
		top_29_V {Type IO LastRead 12 FirstWrite 18}
		top_30_V {Type IO LastRead 12 FirstWrite 18}
		top_31_V {Type IO LastRead 12 FirstWrite 18}
		lut16_V {Type I LastRead -1 FirstWrite -1}
		weight_buf_1x1_V_0 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_1 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_2 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_3 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_4 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_5 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_6 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_7 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_8 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_9 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_10 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_11 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_12 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_13 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_14 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_15 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_16 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_17 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_18 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_19 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_20 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_21 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_22 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_23 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_24 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_25 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_26 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_27 {Type I LastRead 1 FirstWrite -1}
		weight_buf_1x1_V_28 {Type I LastRead 6 FirstWrite -1}
		weight_buf_1x1_V_29 {Type I LastRead 6 FirstWrite -1}
		weight_buf_1x1_V_30 {Type I LastRead 6 FirstWrite -1}
		weight_buf_1x1_V_31 {Type I LastRead 6 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}
		shiftx_V {Type I LastRead 0 FirstWrite -1}
		shifty_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}
		shiftx_V {Type I LastRead 0 FirstWrite -1}
		shifty_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}
		shiftx_V {Type I LastRead 0 FirstWrite -1}
		shifty_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}
		shiftx_V {Type I LastRead 0 FirstWrite -1}
		shifty_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}
		shiftx_V {Type I LastRead 0 FirstWrite -1}
		shifty_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}
		shiftx_V {Type I LastRead 0 FirstWrite -1}
		shifty_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}
		shiftx_V {Type I LastRead 0 FirstWrite -1}
		shifty_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}}
	matmul {
		bottom_V {Type I LastRead 1 FirstWrite -1}
		bottom_V_offset {Type I LastRead 0 FirstWrite -1}
		weights_0_0_V_read {Type I LastRead 0 FirstWrite -1}
		weights_0_1_V_read {Type I LastRead 0 FirstWrite -1}
		weights_0_2_V_read {Type I LastRead 0 FirstWrite -1}
		weights_0_3_V_read {Type I LastRead 0 FirstWrite -1}
		weights_0_4_V_read {Type I LastRead 0 FirstWrite -1}
		weights_0_5_V_read {Type I LastRead 0 FirstWrite -1}
		weights_0_6_V_read {Type I LastRead 0 FirstWrite -1}
		weights_0_7_V_read {Type I LastRead 0 FirstWrite -1}
		weights_0_8_V_read {Type I LastRead 0 FirstWrite -1}
		weights_0_9_V_read {Type I LastRead 0 FirstWrite -1}
		weights_0_10_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_11_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_12_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_13_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_14_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_15_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_16_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_17_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_18_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_19_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_20_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_21_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_22_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_23_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_24_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_25_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_26_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_27_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_28_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_29_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_30_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_31_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_32_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_33_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_34_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_35_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_36_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_37_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_38_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_39_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_40_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_41_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_42_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_43_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_44_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_45_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_46_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_47_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_48_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_49_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_50_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_51_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_52_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_53_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_54_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_55_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_56_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_57_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_58_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_59_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_60_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_61_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_62_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_0_63_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_0_V_read {Type I LastRead 0 FirstWrite -1}
		weights_1_1_V_read {Type I LastRead 0 FirstWrite -1}
		weights_1_2_V_read {Type I LastRead 0 FirstWrite -1}
		weights_1_3_V_read {Type I LastRead 0 FirstWrite -1}
		weights_1_4_V_read {Type I LastRead 0 FirstWrite -1}
		weights_1_5_V_read {Type I LastRead 0 FirstWrite -1}
		weights_1_6_V_read {Type I LastRead 0 FirstWrite -1}
		weights_1_7_V_read {Type I LastRead 0 FirstWrite -1}
		weights_1_8_V_read {Type I LastRead 0 FirstWrite -1}
		weights_1_9_V_read {Type I LastRead 0 FirstWrite -1}
		weights_1_10_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_11_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_12_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_13_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_14_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_15_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_16_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_17_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_18_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_19_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_20_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_21_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_22_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_23_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_24_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_25_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_26_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_27_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_28_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_29_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_30_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_31_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_32_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_33_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_34_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_35_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_36_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_37_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_38_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_39_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_40_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_41_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_42_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_43_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_44_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_45_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_46_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_47_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_48_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_49_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_50_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_51_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_52_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_53_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_54_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_55_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_56_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_57_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_58_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_59_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_60_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_61_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_62_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_1_63_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_0_V_read {Type I LastRead 0 FirstWrite -1}
		weights_2_1_V_read {Type I LastRead 0 FirstWrite -1}
		weights_2_2_V_read {Type I LastRead 0 FirstWrite -1}
		weights_2_3_V_read {Type I LastRead 0 FirstWrite -1}
		weights_2_4_V_read {Type I LastRead 0 FirstWrite -1}
		weights_2_5_V_read {Type I LastRead 0 FirstWrite -1}
		weights_2_6_V_read {Type I LastRead 0 FirstWrite -1}
		weights_2_7_V_read {Type I LastRead 0 FirstWrite -1}
		weights_2_8_V_read {Type I LastRead 0 FirstWrite -1}
		weights_2_9_V_read {Type I LastRead 0 FirstWrite -1}
		weights_2_10_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_11_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_12_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_13_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_14_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_15_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_16_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_17_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_18_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_19_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_20_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_21_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_22_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_23_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_24_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_25_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_26_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_27_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_28_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_29_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_30_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_31_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_32_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_33_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_34_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_35_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_36_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_37_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_38_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_39_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_40_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_41_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_42_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_43_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_44_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_45_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_46_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_47_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_48_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_49_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_50_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_51_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_52_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_53_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_54_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_55_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_56_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_57_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_58_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_59_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_60_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_61_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_62_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_2_63_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_0_V_read {Type I LastRead 0 FirstWrite -1}
		weights_3_1_V_read {Type I LastRead 0 FirstWrite -1}
		weights_3_2_V_read {Type I LastRead 0 FirstWrite -1}
		weights_3_3_V_read {Type I LastRead 0 FirstWrite -1}
		weights_3_4_V_read {Type I LastRead 0 FirstWrite -1}
		weights_3_5_V_read {Type I LastRead 0 FirstWrite -1}
		weights_3_6_V_read {Type I LastRead 0 FirstWrite -1}
		weights_3_7_V_read {Type I LastRead 0 FirstWrite -1}
		weights_3_8_V_read {Type I LastRead 0 FirstWrite -1}
		weights_3_9_V_read {Type I LastRead 0 FirstWrite -1}
		weights_3_10_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_11_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_12_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_13_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_14_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_15_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_16_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_17_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_18_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_19_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_20_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_21_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_22_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_23_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_24_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_25_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_26_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_27_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_28_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_29_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_30_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_31_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_32_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_33_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_34_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_35_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_36_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_37_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_38_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_39_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_40_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_41_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_42_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_43_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_44_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_45_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_46_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_47_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_48_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_49_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_50_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_51_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_52_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_53_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_54_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_55_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_56_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_57_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_58_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_59_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_60_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_61_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_62_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_3_63_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_0_V_read {Type I LastRead 0 FirstWrite -1}
		weights_4_1_V_read {Type I LastRead 0 FirstWrite -1}
		weights_4_2_V_read {Type I LastRead 0 FirstWrite -1}
		weights_4_3_V_read {Type I LastRead 0 FirstWrite -1}
		weights_4_4_V_read {Type I LastRead 0 FirstWrite -1}
		weights_4_5_V_read {Type I LastRead 0 FirstWrite -1}
		weights_4_6_V_read {Type I LastRead 0 FirstWrite -1}
		weights_4_7_V_read {Type I LastRead 0 FirstWrite -1}
		weights_4_8_V_read {Type I LastRead 0 FirstWrite -1}
		weights_4_9_V_read {Type I LastRead 0 FirstWrite -1}
		weights_4_10_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_11_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_12_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_13_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_14_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_15_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_16_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_17_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_18_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_19_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_20_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_21_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_22_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_23_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_24_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_25_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_26_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_27_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_28_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_29_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_30_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_31_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_32_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_33_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_34_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_35_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_36_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_37_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_38_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_39_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_40_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_41_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_42_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_43_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_44_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_45_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_46_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_47_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_48_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_49_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_50_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_51_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_52_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_53_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_54_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_55_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_56_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_57_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_58_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_59_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_60_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_61_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_62_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_4_63_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_0_V_read {Type I LastRead 0 FirstWrite -1}
		weights_5_1_V_read {Type I LastRead 0 FirstWrite -1}
		weights_5_2_V_read {Type I LastRead 0 FirstWrite -1}
		weights_5_3_V_read {Type I LastRead 0 FirstWrite -1}
		weights_5_4_V_read {Type I LastRead 0 FirstWrite -1}
		weights_5_5_V_read {Type I LastRead 0 FirstWrite -1}
		weights_5_6_V_read {Type I LastRead 0 FirstWrite -1}
		weights_5_7_V_read {Type I LastRead 0 FirstWrite -1}
		weights_5_8_V_read {Type I LastRead 0 FirstWrite -1}
		weights_5_9_V_read {Type I LastRead 0 FirstWrite -1}
		weights_5_10_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_11_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_12_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_13_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_14_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_15_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_16_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_17_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_18_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_19_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_20_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_21_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_22_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_23_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_24_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_25_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_26_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_27_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_28_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_29_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_30_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_31_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_32_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_33_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_34_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_35_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_36_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_37_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_38_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_39_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_40_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_41_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_42_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_43_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_44_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_45_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_46_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_47_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_48_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_49_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_50_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_51_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_52_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_53_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_54_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_55_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_56_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_57_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_58_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_59_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_60_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_61_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_62_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_5_63_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_0_V_read {Type I LastRead 0 FirstWrite -1}
		weights_6_1_V_read {Type I LastRead 0 FirstWrite -1}
		weights_6_2_V_read {Type I LastRead 0 FirstWrite -1}
		weights_6_3_V_read {Type I LastRead 0 FirstWrite -1}
		weights_6_4_V_read {Type I LastRead 0 FirstWrite -1}
		weights_6_5_V_read {Type I LastRead 0 FirstWrite -1}
		weights_6_6_V_read {Type I LastRead 0 FirstWrite -1}
		weights_6_7_V_read {Type I LastRead 0 FirstWrite -1}
		weights_6_8_V_read {Type I LastRead 0 FirstWrite -1}
		weights_6_9_V_read {Type I LastRead 0 FirstWrite -1}
		weights_6_10_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_11_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_12_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_13_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_14_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_15_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_16_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_17_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_18_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_19_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_20_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_21_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_22_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_23_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_24_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_25_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_26_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_27_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_28_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_29_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_30_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_31_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_32_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_33_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_34_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_35_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_36_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_37_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_38_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_39_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_40_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_41_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_42_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_43_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_44_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_45_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_46_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_47_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_48_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_49_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_50_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_51_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_52_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_53_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_54_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_55_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_56_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_57_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_58_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_59_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_60_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_61_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_62_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_6_63_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_0_V_read {Type I LastRead 0 FirstWrite -1}
		weights_7_1_V_read {Type I LastRead 0 FirstWrite -1}
		weights_7_2_V_read {Type I LastRead 0 FirstWrite -1}
		weights_7_3_V_read {Type I LastRead 0 FirstWrite -1}
		weights_7_4_V_read {Type I LastRead 0 FirstWrite -1}
		weights_7_5_V_read {Type I LastRead 0 FirstWrite -1}
		weights_7_6_V_read {Type I LastRead 0 FirstWrite -1}
		weights_7_7_V_read {Type I LastRead 0 FirstWrite -1}
		weights_7_8_V_read {Type I LastRead 0 FirstWrite -1}
		weights_7_9_V_read {Type I LastRead 0 FirstWrite -1}
		weights_7_10_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_11_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_12_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_13_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_14_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_15_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_16_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_17_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_18_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_19_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_20_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_21_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_22_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_23_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_24_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_25_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_26_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_27_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_28_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_29_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_30_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_31_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_32_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_33_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_34_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_35_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_36_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_37_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_38_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_39_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_40_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_41_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_42_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_43_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_44_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_45_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_46_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_47_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_48_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_49_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_50_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_51_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_52_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_53_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_54_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_55_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_56_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_57_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_58_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_59_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_60_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_61_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_62_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_7_63_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_0_V_read {Type I LastRead 0 FirstWrite -1}
		weights_8_1_V_read {Type I LastRead 0 FirstWrite -1}
		weights_8_2_V_read {Type I LastRead 0 FirstWrite -1}
		weights_8_3_V_read {Type I LastRead 0 FirstWrite -1}
		weights_8_4_V_read {Type I LastRead 0 FirstWrite -1}
		weights_8_5_V_read {Type I LastRead 0 FirstWrite -1}
		weights_8_6_V_read {Type I LastRead 0 FirstWrite -1}
		weights_8_7_V_read {Type I LastRead 0 FirstWrite -1}
		weights_8_8_V_read {Type I LastRead 0 FirstWrite -1}
		weights_8_9_V_read {Type I LastRead 0 FirstWrite -1}
		weights_8_10_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_11_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_12_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_13_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_14_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_15_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_16_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_17_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_18_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_19_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_20_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_21_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_22_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_23_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_24_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_25_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_26_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_27_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_28_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_29_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_30_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_31_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_32_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_33_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_34_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_35_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_36_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_37_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_38_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_39_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_40_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_41_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_42_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_43_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_44_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_45_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_46_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_47_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_48_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_49_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_50_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_51_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_52_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_53_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_54_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_55_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_56_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_57_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_58_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_59_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_60_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_61_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_62_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_8_63_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_0_V_read {Type I LastRead 0 FirstWrite -1}
		weights_9_1_V_read {Type I LastRead 0 FirstWrite -1}
		weights_9_2_V_read {Type I LastRead 0 FirstWrite -1}
		weights_9_3_V_read {Type I LastRead 0 FirstWrite -1}
		weights_9_4_V_read {Type I LastRead 0 FirstWrite -1}
		weights_9_5_V_read {Type I LastRead 0 FirstWrite -1}
		weights_9_6_V_read {Type I LastRead 0 FirstWrite -1}
		weights_9_7_V_read {Type I LastRead 0 FirstWrite -1}
		weights_9_8_V_read {Type I LastRead 0 FirstWrite -1}
		weights_9_9_V_read {Type I LastRead 0 FirstWrite -1}
		weights_9_10_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_11_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_12_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_13_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_14_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_15_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_16_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_17_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_18_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_19_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_20_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_21_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_22_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_23_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_24_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_25_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_26_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_27_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_28_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_29_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_30_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_31_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_32_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_33_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_34_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_35_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_36_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_37_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_38_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_39_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_40_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_41_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_42_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_43_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_44_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_45_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_46_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_47_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_48_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_49_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_50_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_51_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_52_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_53_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_54_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_55_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_56_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_57_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_58_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_59_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_60_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_61_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_62_V_rea {Type I LastRead 0 FirstWrite -1}
		weights_9_63_V_rea {Type I LastRead 0 FirstWrite -1}
		bias_0_V_read {Type I LastRead 0 FirstWrite -1}
		bias_1_V_read {Type I LastRead 0 FirstWrite -1}
		bias_2_V_read {Type I LastRead 0 FirstWrite -1}
		bias_3_V_read {Type I LastRead 0 FirstWrite -1}
		bias_4_V_read {Type I LastRead 0 FirstWrite -1}
		bias_5_V_read {Type I LastRead 0 FirstWrite -1}
		bias_6_V_read {Type I LastRead 0 FirstWrite -1}
		bias_7_V_read {Type I LastRead 0 FirstWrite -1}
		bias_8_V_read {Type I LastRead 0 FirstWrite -1}
		bias_9_V_read {Type I LastRead 0 FirstWrite -1}}
	store_bufs_organize_s {
		ddr_ptr_V {Type O LastRead 8 FirstWrite 7}
		ddr_ptr_V_offset {Type I LastRead 1 FirstWrite -1}
		row_offset_offset {Type I LastRead 0 FirstWrite -1}
		col_offset_offset {Type I LastRead 0 FirstWrite -1}
		ch_offset {Type I LastRead 0 FirstWrite -1}
		FM_buf0_V_1 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_1 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_2 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_2 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_3 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_3 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_4 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_4 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_5 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_5 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_6 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_6 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_7 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_7 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_8 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_8 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_9 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_9 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_10 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_10 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_11 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_11 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_12 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_12 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_13 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_13 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_14 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_14 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_15 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_15 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_16 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_16 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_17 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_17 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_18 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_18 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_19 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_19 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_20 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_20 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_21 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_21 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_22 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_22 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_23 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_23 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_24 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_24 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_25 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_25 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_26 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_26 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_27 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_27 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_28 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_28 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_29 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_29 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_30 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_30 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_31 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_31 {Type I LastRead 2 FirstWrite -1}
		FM_buf0_V_0 {Type I LastRead 2 FirstWrite -1}
		FM_buf_acc0_V_0 {Type I LastRead 2 FirstWrite -1}
		pg_buf_all_V_31 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_63 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_30 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_62 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_29 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_61 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_28 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_60 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_27 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_59 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_26 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_58 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_25 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_57 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_24 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_56 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_23 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_55 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_22 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_54 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_21 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_53 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_20 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_52 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_19 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_51 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_18 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_50 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_17 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_49 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_16 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_48 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_15 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_47 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_14 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_46 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_13 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_45 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_12 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_44 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_11 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_43 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_10 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_42 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_9 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_41 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_8 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_40 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_7 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_39 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_6 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_38 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_5 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_37 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_4 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_36 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_3 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_35 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_2 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_34 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_1 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_33 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_0 {Type O LastRead -1 FirstWrite 7}
		pg_buf_all_V_32 {Type O LastRead -1 FirstWrite 7}
		bn_weight_buf_V_0 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_0 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_1 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_1 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_2 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_2 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_3 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_3 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_4 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_4 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_5 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_5 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_6 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_6 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_7 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_7 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_8 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_8 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_9 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_9 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_10 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_10 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_11 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_11 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_12 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_12 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_13 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_13 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_14 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_14 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_15 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_15 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_16 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_16 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_17 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_17 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_18 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_18 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_19 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_19 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_20 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_20 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_21 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_21 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_22 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_22 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_23 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_23 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_24 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_24 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_25 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_25 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_26 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_26 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_27 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_27 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_28 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_28 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_29 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_29 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_30 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_30 {Type I LastRead 0 FirstWrite -1}
		bn_weight_buf_V_31 {Type I LastRead 0 FirstWrite -1}
		bn_bias_buf_V_31 {Type I LastRead 0 FirstWrite -1}}
	load_weights_3x3_all {
		conv_weight_3x3_all_V {Type I LastRead 13 FirstWrite -1}
		conv_weight_3x3_all_V_offset {Type I LastRead 0 FirstWrite -1}
		weight_3x3_index {Type I LastRead 0 FirstWrite -1}
		weights_all_V_offset {Type I LastRead 1 FirstWrite -1}
		weights_all_index {Type I LastRead 1 FirstWrite -1}
		weight_buf_3x3_V_0 {Type O LastRead -1 FirstWrite 11}
		weight_buf_3x3_V_1 {Type O LastRead -1 FirstWrite 11}
		weight_buf_3x3_V_2 {Type O LastRead -1 FirstWrite 11}
		weight_buf_3x3_V_3 {Type O LastRead -1 FirstWrite 11}
		weight_buf_3x3_V_4 {Type O LastRead -1 FirstWrite 11}
		weight_buf_3x3_V_5 {Type O LastRead -1 FirstWrite 11}
		weight_buf_3x3_V_6 {Type O LastRead -1 FirstWrite 11}
		weight_buf_3x3_V_7 {Type O LastRead -1 FirstWrite 11}
		weight_buf_3x3_V_8 {Type O LastRead -1 FirstWrite 12}
		weight_buf_3x3_V_9 {Type O LastRead -1 FirstWrite 12}
		weight_buf_3x3_V_10 {Type O LastRead -1 FirstWrite 12}
		weight_buf_3x3_V_11 {Type O LastRead -1 FirstWrite 12}
		weight_buf_3x3_V_12 {Type O LastRead -1 FirstWrite 12}
		weight_buf_3x3_V_13 {Type O LastRead -1 FirstWrite 12}
		weight_buf_3x3_V_14 {Type O LastRead -1 FirstWrite 12}
		weight_buf_3x3_V_15 {Type O LastRead -1 FirstWrite 12}
		weight_buf_3x3_V_16 {Type O LastRead -1 FirstWrite 13}
		weight_buf_3x3_V_17 {Type O LastRead -1 FirstWrite 13}
		weight_buf_3x3_V_18 {Type O LastRead -1 FirstWrite 13}
		weight_buf_3x3_V_19 {Type O LastRead -1 FirstWrite 13}
		weight_buf_3x3_V_20 {Type O LastRead -1 FirstWrite 13}
		weight_buf_3x3_V_21 {Type O LastRead -1 FirstWrite 13}
		weight_buf_3x3_V_22 {Type O LastRead -1 FirstWrite 13}
		weight_buf_3x3_V_23 {Type O LastRead -1 FirstWrite 13}
		weight_buf_3x3_V_24 {Type O LastRead -1 FirstWrite 14}
		weight_buf_3x3_V_25 {Type O LastRead -1 FirstWrite 14}
		weight_buf_3x3_V_26 {Type O LastRead -1 FirstWrite 14}
		weight_buf_3x3_V_27 {Type O LastRead -1 FirstWrite 14}
		weight_buf_3x3_V_28 {Type O LastRead -1 FirstWrite 14}
		weight_buf_3x3_V_29 {Type O LastRead -1 FirstWrite 14}
		weight_buf_3x3_V_30 {Type O LastRead -1 FirstWrite 14}
		weight_buf_3x3_V_31 {Type O LastRead -1 FirstWrite 14}
		relu_shiftx_buf_V_0 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_0 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_0 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_0 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_0 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_1 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_1 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_1 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_1 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_1 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_2 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_2 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_2 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_2 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_2 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_3 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_3 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_3 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_3 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_3 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_4 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_4 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_4 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_4 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_4 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_5 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_5 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_5 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_5 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_5 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_6 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_6 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_6 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_6 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_6 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_7 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_7 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_7 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_7 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_7 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_8 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_8 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_8 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_8 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_8 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_9 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_9 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_9 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_9 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_9 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_10 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_10 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_10 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_10 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_10 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_11 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_11 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_11 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_11 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_11 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_12 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_12 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_12 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_12 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_12 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_13 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_13 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_13 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_13 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_13 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_14 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_14 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_14 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_14 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_14 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_15 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_15 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_15 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_15 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_15 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_16 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_16 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_16 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_16 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_16 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_17 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_17 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_17 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_17 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_17 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_18 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_18 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_18 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_18 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_18 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_19 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_19 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_19 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_19 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_19 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_20 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_20 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_20 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_20 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_20 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_21 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_21 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_21 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_21 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_21 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_22 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_22 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_22 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_22 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_22 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_23 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_23 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_23 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_23 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_23 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_24 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_24 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_24 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_24 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_24 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_25 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_25 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_25 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_25 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_25 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_26 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_26 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_26 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_26 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_26 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_27 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_27 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_27 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_27 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_27 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_28 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_28 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_28 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_28 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_28 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_29 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_29 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_29 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_29 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_29 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_30 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_30 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_30 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_30 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_30 {Type O LastRead -1 FirstWrite 10}
		relu_shiftx_buf_V_31 {Type O LastRead -1 FirstWrite 10}
		relu_shifty_buf_V_31 {Type O LastRead -1 FirstWrite 10}
		relu_weight_buf_V_31 {Type O LastRead -1 FirstWrite 10}
		bn_weight_buf_V_31 {Type O LastRead -1 FirstWrite 10}
		bn_bias_buf_V_31 {Type O LastRead -1 FirstWrite 10}}
	load_weight_3x3_from {
		dest_0_V {Type O LastRead -1 FirstWrite 11}
		dest_1_V {Type O LastRead -1 FirstWrite 11}
		dest_2_V {Type O LastRead -1 FirstWrite 11}
		dest_3_V {Type O LastRead -1 FirstWrite 11}
		dest_4_V {Type O LastRead -1 FirstWrite 11}
		dest_5_V {Type O LastRead -1 FirstWrite 11}
		dest_6_V {Type O LastRead -1 FirstWrite 11}
		dest_7_V {Type O LastRead -1 FirstWrite 11}
		dest_8_V {Type O LastRead -1 FirstWrite 12}
		dest_9_V {Type O LastRead -1 FirstWrite 12}
		dest_10_V {Type O LastRead -1 FirstWrite 12}
		dest_11_V {Type O LastRead -1 FirstWrite 12}
		dest_12_V {Type O LastRead -1 FirstWrite 12}
		dest_13_V {Type O LastRead -1 FirstWrite 12}
		dest_14_V {Type O LastRead -1 FirstWrite 12}
		dest_15_V {Type O LastRead -1 FirstWrite 12}
		dest_16_V {Type O LastRead -1 FirstWrite 13}
		dest_17_V {Type O LastRead -1 FirstWrite 13}
		dest_18_V {Type O LastRead -1 FirstWrite 13}
		dest_19_V {Type O LastRead -1 FirstWrite 13}
		dest_20_V {Type O LastRead -1 FirstWrite 13}
		dest_21_V {Type O LastRead -1 FirstWrite 13}
		dest_22_V {Type O LastRead -1 FirstWrite 13}
		dest_23_V {Type O LastRead -1 FirstWrite 13}
		dest_24_V {Type O LastRead -1 FirstWrite 14}
		dest_25_V {Type O LastRead -1 FirstWrite 14}
		dest_26_V {Type O LastRead -1 FirstWrite 14}
		dest_27_V {Type O LastRead -1 FirstWrite 14}
		dest_28_V {Type O LastRead -1 FirstWrite 14}
		dest_29_V {Type O LastRead -1 FirstWrite 14}
		dest_30_V {Type O LastRead -1 FirstWrite 14}
		dest_31_V {Type O LastRead -1 FirstWrite 14}
		src_V {Type I LastRead 13 FirstWrite -1}
		src_V_offset {Type I LastRead 0 FirstWrite -1}
		index {Type I LastRead 0 FirstWrite -1}}
	load_weights_1x1_all {
		conv_weight_1x1_all_V {Type I LastRead 17 FirstWrite -1}
		conv_weight_1x1_all_V_offset {Type I LastRead 0 FirstWrite -1}
		weight_1x1_index {Type I LastRead 0 FirstWrite -1}
		weights_all_V_offset {Type I LastRead 7 FirstWrite -1}
		weights_all_index {Type I LastRead 7 FirstWrite -1}
		weight_buf_1x1_V_0 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_1 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_2 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_3 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_4 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_5 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_6 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_7 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_8 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_9 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_10 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_11 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_12 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_13 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_14 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_15 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_16 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_17 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_18 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_19 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_20 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_21 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_22 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_23 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_24 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_25 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_26 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_27 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_28 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_29 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_30 {Type O LastRead -1 FirstWrite 0}
		weight_buf_1x1_V_31 {Type O LastRead -1 FirstWrite 0}
		relu_shiftx_buf_V_0 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_0 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_0 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_0 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_0 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_1 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_1 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_1 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_1 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_1 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_2 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_2 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_2 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_2 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_2 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_3 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_3 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_3 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_3 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_3 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_4 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_4 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_4 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_4 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_4 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_5 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_5 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_5 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_5 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_5 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_6 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_6 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_6 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_6 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_6 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_7 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_7 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_7 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_7 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_7 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_8 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_8 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_8 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_8 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_8 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_9 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_9 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_9 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_9 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_9 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_10 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_10 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_10 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_10 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_10 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_11 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_11 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_11 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_11 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_11 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_12 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_12 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_12 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_12 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_12 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_13 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_13 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_13 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_13 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_13 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_14 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_14 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_14 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_14 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_14 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_15 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_15 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_15 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_15 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_15 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_16 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_16 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_16 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_16 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_16 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_17 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_17 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_17 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_17 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_17 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_18 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_18 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_18 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_18 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_18 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_19 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_19 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_19 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_19 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_19 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_20 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_20 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_20 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_20 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_20 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_21 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_21 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_21 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_21 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_21 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_22 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_22 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_22 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_22 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_22 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_23 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_23 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_23 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_23 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_23 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_24 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_24 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_24 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_24 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_24 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_25 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_25 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_25 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_25 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_25 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_26 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_26 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_26 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_26 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_26 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_27 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_27 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_27 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_27 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_27 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_28 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_28 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_28 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_28 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_28 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_29 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_29 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_29 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_29 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_29 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_30 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_30 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_30 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_30 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_30 {Type O LastRead -1 FirstWrite 17}
		relu_shiftx_buf_V_31 {Type O LastRead -1 FirstWrite 17}
		relu_shifty_buf_V_31 {Type O LastRead -1 FirstWrite 17}
		relu_weight_buf_V_31 {Type O LastRead -1 FirstWrite 17}
		bn_weight_buf_V_31 {Type O LastRead -1 FirstWrite 17}
		bn_bias_buf_V_31 {Type O LastRead -1 FirstWrite 17}}
	load_weight_1x1_from {
		dest_V {Type O LastRead -1 FirstWrite 0}
		dest_V1 {Type O LastRead -1 FirstWrite 0}
		dest_V2 {Type O LastRead -1 FirstWrite 0}
		dest_V3 {Type O LastRead -1 FirstWrite 0}
		dest_V4 {Type O LastRead -1 FirstWrite 0}
		dest_V5 {Type O LastRead -1 FirstWrite 0}
		dest_V6 {Type O LastRead -1 FirstWrite 0}
		dest_V7 {Type O LastRead -1 FirstWrite 0}
		dest_V8 {Type O LastRead -1 FirstWrite 0}
		dest_V9 {Type O LastRead -1 FirstWrite 0}
		dest_V10 {Type O LastRead -1 FirstWrite 0}
		dest_V11 {Type O LastRead -1 FirstWrite 0}
		dest_V12 {Type O LastRead -1 FirstWrite 0}
		dest_V13 {Type O LastRead -1 FirstWrite 0}
		dest_V14 {Type O LastRead -1 FirstWrite 0}
		dest_V15 {Type O LastRead -1 FirstWrite 0}
		dest_V16 {Type O LastRead -1 FirstWrite 0}
		dest_V17 {Type O LastRead -1 FirstWrite 0}
		dest_V18 {Type O LastRead -1 FirstWrite 0}
		dest_V19 {Type O LastRead -1 FirstWrite 0}
		dest_V20 {Type O LastRead -1 FirstWrite 0}
		dest_V21 {Type O LastRead -1 FirstWrite 0}
		dest_V22 {Type O LastRead -1 FirstWrite 0}
		dest_V23 {Type O LastRead -1 FirstWrite 0}
		dest_V24 {Type O LastRead -1 FirstWrite 0}
		dest_V25 {Type O LastRead -1 FirstWrite 0}
		dest_V26 {Type O LastRead -1 FirstWrite 0}
		dest_V27 {Type O LastRead -1 FirstWrite 0}
		dest_V28 {Type O LastRead -1 FirstWrite 0}
		dest_V29 {Type O LastRead -1 FirstWrite 0}
		dest_V30 {Type O LastRead -1 FirstWrite 0}
		dest_V31 {Type O LastRead -1 FirstWrite 0}
		src_V {Type I LastRead 0 FirstWrite -1}
		coff {Type I LastRead 0 FirstWrite -1}}
	copy_input_layer_buf {
		dest_V {Type O LastRead 4 FirstWrite 3}
		dest_V_offset {Type I LastRead 0 FirstWrite -1}
		row_offset {Type I LastRead 0 FirstWrite -1}
		col_offset {Type I LastRead 0 FirstWrite -1}
		FM_buf_acc0_V_0 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_1 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_2 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_3 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_4 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_5 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_6 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_7 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_8 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_9 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_10 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_11 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_12 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_13 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_14 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_15 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_16 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_17 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_18 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_19 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_20 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_21 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_22 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_23 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_24 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_25 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_26 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_27 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_28 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_29 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_30 {Type I LastRead 1 FirstWrite -1}
		FM_buf_acc0_V_31 {Type I LastRead 1 FirstWrite -1}}
	load_buf_from_buf_al {
		row {Type I LastRead 1 FirstWrite -1}
		col {Type I LastRead 0 FirstWrite -1}
		pg_buf_all_V_0 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_1 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_2 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_3 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_4 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_5 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_6 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_7 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_8 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_9 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_10 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_11 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_12 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_13 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_14 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_15 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_16 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_17 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_18 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_19 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_20 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_21 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_22 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_23 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_24 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_25 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_26 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_27 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_28 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_29 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_30 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_31 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_32 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_33 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_34 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_35 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_36 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_37 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_38 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_39 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_40 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_41 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_42 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_43 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_44 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_45 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_46 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_47 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_48 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_49 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_50 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_51 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_52 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_53 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_54 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_55 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_56 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_57 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_58 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_59 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_60 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_61 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_62 {Type I LastRead 3 FirstWrite -1}
		pg_buf_all_V_63 {Type I LastRead 3 FirstWrite -1}
		pg_buf0_V_0 {Type O LastRead -1 FirstWrite 4}
		pg_buf0_V_1 {Type O LastRead -1 FirstWrite 4}
		pg_buf0_V_2 {Type O LastRead -1 FirstWrite 4}
		pg_buf0_V_3 {Type O LastRead -1 FirstWrite 4}
		pg_buf0_V_4 {Type O LastRead -1 FirstWrite 4}
		pg_buf0_V_5 {Type O LastRead -1 FirstWrite 4}
		pg_buf0_V_6 {Type O LastRead -1 FirstWrite 4}
		pg_buf0_V_7 {Type O LastRead -1 FirstWrite 4}
		pg_buf0_V_8 {Type O LastRead -1 FirstWrite 4}}
	load_buf_from_DDR {
		src_V {Type I LastRead 19 FirstWrite -1}
		src_V_offset {Type I LastRead 1 FirstWrite -1}
		dest_0_V {Type O LastRead -1 FirstWrite 20}
		dest_1_V {Type O LastRead -1 FirstWrite 20}
		dest_2_V {Type O LastRead -1 FirstWrite 20}
		dest_3_V {Type O LastRead -1 FirstWrite 20}
		dest_4_V {Type O LastRead -1 FirstWrite 20}
		dest_5_V {Type O LastRead -1 FirstWrite 20}
		dest_6_V {Type O LastRead -1 FirstWrite 20}
		dest_7_V {Type O LastRead -1 FirstWrite 20}
		dest_8_V {Type O LastRead -1 FirstWrite 20}
		dest_9_V {Type O LastRead -1 FirstWrite 20}
		dest_10_V {Type O LastRead -1 FirstWrite 20}
		dest_11_V {Type O LastRead -1 FirstWrite 20}
		dest_12_V {Type O LastRead -1 FirstWrite 20}
		dest_13_V {Type O LastRead -1 FirstWrite 20}
		dest_14_V {Type O LastRead -1 FirstWrite 20}
		dest_15_V {Type O LastRead -1 FirstWrite 20}
		dest_16_V {Type O LastRead -1 FirstWrite 20}
		dest_17_V {Type O LastRead -1 FirstWrite 20}
		dest_18_V {Type O LastRead -1 FirstWrite 20}
		dest_19_V {Type O LastRead -1 FirstWrite 20}
		dest_20_V {Type O LastRead -1 FirstWrite 20}
		dest_21_V {Type O LastRead -1 FirstWrite 20}
		dest_22_V {Type O LastRead -1 FirstWrite 20}
		dest_23_V {Type O LastRead -1 FirstWrite 20}
		dest_24_V {Type O LastRead -1 FirstWrite 20}
		dest_25_V {Type O LastRead -1 FirstWrite 20}
		dest_26_V {Type O LastRead -1 FirstWrite 20}
		dest_27_V {Type O LastRead -1 FirstWrite 20}
		dest_28_V {Type O LastRead -1 FirstWrite 20}
		dest_29_V {Type O LastRead -1 FirstWrite 20}
		dest_30_V {Type O LastRead -1 FirstWrite 20}
		dest_31_V {Type O LastRead -1 FirstWrite 20}
		row_offset {Type I LastRead 1 FirstWrite -1}
		col_offset {Type I LastRead 1 FirstWrite -1}
		ch_offset {Type I LastRead 0 FirstWrite -1}}
	avgpool_7x7_1 {
		buf_V {Type I LastRead 5 FirstWrite -1}}
	sum_engine_1 {
		t0_V {Type I LastRead 0 FirstWrite -1}
		t1_V {Type I LastRead 0 FirstWrite -1}
		t2_V {Type I LastRead 0 FirstWrite -1}
		t3_V {Type I LastRead 0 FirstWrite -1}
		t4_V {Type I LastRead 0 FirstWrite -1}
		t5_V {Type I LastRead 0 FirstWrite -1}
		t6_V {Type I LastRead 0 FirstWrite -1}}
	avgpool_7x7_1 {
		buf_V {Type I LastRead 5 FirstWrite -1}}
	sum_engine_1 {
		t0_V {Type I LastRead 0 FirstWrite -1}
		t1_V {Type I LastRead 0 FirstWrite -1}
		t2_V {Type I LastRead 0 FirstWrite -1}
		t3_V {Type I LastRead 0 FirstWrite -1}
		t4_V {Type I LastRead 0 FirstWrite -1}
		t5_V {Type I LastRead 0 FirstWrite -1}
		t6_V {Type I LastRead 0 FirstWrite -1}}
	avgpool_7x7_1 {
		buf_V {Type I LastRead 5 FirstWrite -1}}
	sum_engine_1 {
		t0_V {Type I LastRead 0 FirstWrite -1}
		t1_V {Type I LastRead 0 FirstWrite -1}
		t2_V {Type I LastRead 0 FirstWrite -1}
		t3_V {Type I LastRead 0 FirstWrite -1}
		t4_V {Type I LastRead 0 FirstWrite -1}
		t5_V {Type I LastRead 0 FirstWrite -1}
		t6_V {Type I LastRead 0 FirstWrite -1}}
	avgpool_7x7_1 {
		buf_V {Type I LastRead 5 FirstWrite -1}}
	sum_engine_1 {
		t0_V {Type I LastRead 0 FirstWrite -1}
		t1_V {Type I LastRead 0 FirstWrite -1}
		t2_V {Type I LastRead 0 FirstWrite -1}
		t3_V {Type I LastRead 0 FirstWrite -1}
		t4_V {Type I LastRead 0 FirstWrite -1}
		t5_V {Type I LastRead 0 FirstWrite -1}
		t6_V {Type I LastRead 0 FirstWrite -1}}
	load_input {
		row {Type I LastRead 0 FirstWrite -1}
		col {Type I LastRead 0 FirstWrite -1}
		c {Type I LastRead 0 FirstWrite -1}
		buf_V {Type O LastRead -1 FirstWrite 20}
		img_V {Type I LastRead 19 FirstWrite -1}
		img_V_offset {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "3622103", "Max" : "4852231"}
	, {"Name" : "Interval", "Min" : "3622104", "Max" : "4852232"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
	{"Pipeline" : "3", "EnableSignal" : "ap_enable_pp3"}
	{"Pipeline" : "4", "EnableSignal" : "ap_enable_pp4"}
]}

set Spec2ImplPortList { 
	IMG { m_axi {  { m_axi_IMG_AWVALID VALID 1 1 }  { m_axi_IMG_AWREADY READY 0 1 }  { m_axi_IMG_AWADDR ADDR 1 32 }  { m_axi_IMG_AWID ID 1 1 }  { m_axi_IMG_AWLEN LEN 1 8 }  { m_axi_IMG_AWSIZE SIZE 1 3 }  { m_axi_IMG_AWBURST BURST 1 2 }  { m_axi_IMG_AWLOCK LOCK 1 2 }  { m_axi_IMG_AWCACHE CACHE 1 4 }  { m_axi_IMG_AWPROT PROT 1 3 }  { m_axi_IMG_AWQOS QOS 1 4 }  { m_axi_IMG_AWREGION REGION 1 4 }  { m_axi_IMG_AWUSER USER 1 1 }  { m_axi_IMG_WVALID VALID 1 1 }  { m_axi_IMG_WREADY READY 0 1 }  { m_axi_IMG_WDATA DATA 1 32 }  { m_axi_IMG_WSTRB STRB 1 4 }  { m_axi_IMG_WLAST LAST 1 1 }  { m_axi_IMG_WID ID 1 1 }  { m_axi_IMG_WUSER USER 1 1 }  { m_axi_IMG_ARVALID VALID 1 1 }  { m_axi_IMG_ARREADY READY 0 1 }  { m_axi_IMG_ARADDR ADDR 1 32 }  { m_axi_IMG_ARID ID 1 1 }  { m_axi_IMG_ARLEN LEN 1 8 }  { m_axi_IMG_ARSIZE SIZE 1 3 }  { m_axi_IMG_ARBURST BURST 1 2 }  { m_axi_IMG_ARLOCK LOCK 1 2 }  { m_axi_IMG_ARCACHE CACHE 1 4 }  { m_axi_IMG_ARPROT PROT 1 3 }  { m_axi_IMG_ARQOS QOS 1 4 }  { m_axi_IMG_ARREGION REGION 1 4 }  { m_axi_IMG_ARUSER USER 1 1 }  { m_axi_IMG_RVALID VALID 0 1 }  { m_axi_IMG_RREADY READY 1 1 }  { m_axi_IMG_RDATA DATA 0 32 }  { m_axi_IMG_RLAST LAST 0 1 }  { m_axi_IMG_RID ID 0 1 }  { m_axi_IMG_RUSER USER 0 1 }  { m_axi_IMG_RRESP RESP 0 2 }  { m_axi_IMG_BVALID VALID 0 1 }  { m_axi_IMG_BREADY READY 1 1 }  { m_axi_IMG_BRESP RESP 0 2 }  { m_axi_IMG_BID ID 0 1 }  { m_axi_IMG_BUSER USER 0 1 } } }
	BUS512 { m_axi {  { m_axi_BUS512_AWVALID VALID 1 1 }  { m_axi_BUS512_AWREADY READY 0 1 }  { m_axi_BUS512_AWADDR ADDR 1 32 }  { m_axi_BUS512_AWID ID 1 1 }  { m_axi_BUS512_AWLEN LEN 1 8 }  { m_axi_BUS512_AWSIZE SIZE 1 3 }  { m_axi_BUS512_AWBURST BURST 1 2 }  { m_axi_BUS512_AWLOCK LOCK 1 2 }  { m_axi_BUS512_AWCACHE CACHE 1 4 }  { m_axi_BUS512_AWPROT PROT 1 3 }  { m_axi_BUS512_AWQOS QOS 1 4 }  { m_axi_BUS512_AWREGION REGION 1 4 }  { m_axi_BUS512_AWUSER USER 1 1 }  { m_axi_BUS512_WVALID VALID 1 1 }  { m_axi_BUS512_WREADY READY 0 1 }  { m_axi_BUS512_WDATA DATA 1 512 }  { m_axi_BUS512_WSTRB STRB 1 64 }  { m_axi_BUS512_WLAST LAST 1 1 }  { m_axi_BUS512_WID ID 1 1 }  { m_axi_BUS512_WUSER USER 1 1 }  { m_axi_BUS512_ARVALID VALID 1 1 }  { m_axi_BUS512_ARREADY READY 0 1 }  { m_axi_BUS512_ARADDR ADDR 1 32 }  { m_axi_BUS512_ARID ID 1 1 }  { m_axi_BUS512_ARLEN LEN 1 8 }  { m_axi_BUS512_ARSIZE SIZE 1 3 }  { m_axi_BUS512_ARBURST BURST 1 2 }  { m_axi_BUS512_ARLOCK LOCK 1 2 }  { m_axi_BUS512_ARCACHE CACHE 1 4 }  { m_axi_BUS512_ARPROT PROT 1 3 }  { m_axi_BUS512_ARQOS QOS 1 4 }  { m_axi_BUS512_ARREGION REGION 1 4 }  { m_axi_BUS512_ARUSER USER 1 1 }  { m_axi_BUS512_RVALID VALID 0 1 }  { m_axi_BUS512_RREADY READY 1 1 }  { m_axi_BUS512_RDATA DATA 0 512 }  { m_axi_BUS512_RLAST LAST 0 1 }  { m_axi_BUS512_RID ID 0 1 }  { m_axi_BUS512_RUSER USER 0 1 }  { m_axi_BUS512_RRESP RESP 0 2 }  { m_axi_BUS512_BVALID VALID 0 1 }  { m_axi_BUS512_BREADY READY 1 1 }  { m_axi_BUS512_BRESP RESP 0 2 }  { m_axi_BUS512_BID ID 0 1 }  { m_axi_BUS512_BUSER USER 0 1 } } }
	DDR512 { m_axi {  { m_axi_DDR512_AWVALID VALID 1 1 }  { m_axi_DDR512_AWREADY READY 0 1 }  { m_axi_DDR512_AWADDR ADDR 1 32 }  { m_axi_DDR512_AWID ID 1 1 }  { m_axi_DDR512_AWLEN LEN 1 8 }  { m_axi_DDR512_AWSIZE SIZE 1 3 }  { m_axi_DDR512_AWBURST BURST 1 2 }  { m_axi_DDR512_AWLOCK LOCK 1 2 }  { m_axi_DDR512_AWCACHE CACHE 1 4 }  { m_axi_DDR512_AWPROT PROT 1 3 }  { m_axi_DDR512_AWQOS QOS 1 4 }  { m_axi_DDR512_AWREGION REGION 1 4 }  { m_axi_DDR512_AWUSER USER 1 1 }  { m_axi_DDR512_WVALID VALID 1 1 }  { m_axi_DDR512_WREADY READY 0 1 }  { m_axi_DDR512_WDATA DATA 1 512 }  { m_axi_DDR512_WSTRB STRB 1 64 }  { m_axi_DDR512_WLAST LAST 1 1 }  { m_axi_DDR512_WID ID 1 1 }  { m_axi_DDR512_WUSER USER 1 1 }  { m_axi_DDR512_ARVALID VALID 1 1 }  { m_axi_DDR512_ARREADY READY 0 1 }  { m_axi_DDR512_ARADDR ADDR 1 32 }  { m_axi_DDR512_ARID ID 1 1 }  { m_axi_DDR512_ARLEN LEN 1 8 }  { m_axi_DDR512_ARSIZE SIZE 1 3 }  { m_axi_DDR512_ARBURST BURST 1 2 }  { m_axi_DDR512_ARLOCK LOCK 1 2 }  { m_axi_DDR512_ARCACHE CACHE 1 4 }  { m_axi_DDR512_ARPROT PROT 1 3 }  { m_axi_DDR512_ARQOS QOS 1 4 }  { m_axi_DDR512_ARREGION REGION 1 4 }  { m_axi_DDR512_ARUSER USER 1 1 }  { m_axi_DDR512_RVALID VALID 0 1 }  { m_axi_DDR512_RREADY READY 1 1 }  { m_axi_DDR512_RDATA DATA 0 512 }  { m_axi_DDR512_RLAST LAST 0 1 }  { m_axi_DDR512_RID ID 0 1 }  { m_axi_DDR512_RUSER USER 0 1 }  { m_axi_DDR512_RRESP RESP 0 2 }  { m_axi_DDR512_BVALID VALID 0 1 }  { m_axi_DDR512_BREADY READY 1 1 }  { m_axi_DDR512_BRESP RESP 0 2 }  { m_axi_DDR512_BID ID 0 1 }  { m_axi_DDR512_BUSER USER 0 1 } } }
	BUS32 { m_axi {  { m_axi_BUS32_AWVALID VALID 1 1 }  { m_axi_BUS32_AWREADY READY 0 1 }  { m_axi_BUS32_AWADDR ADDR 1 32 }  { m_axi_BUS32_AWID ID 1 1 }  { m_axi_BUS32_AWLEN LEN 1 8 }  { m_axi_BUS32_AWSIZE SIZE 1 3 }  { m_axi_BUS32_AWBURST BURST 1 2 }  { m_axi_BUS32_AWLOCK LOCK 1 2 }  { m_axi_BUS32_AWCACHE CACHE 1 4 }  { m_axi_BUS32_AWPROT PROT 1 3 }  { m_axi_BUS32_AWQOS QOS 1 4 }  { m_axi_BUS32_AWREGION REGION 1 4 }  { m_axi_BUS32_AWUSER USER 1 1 }  { m_axi_BUS32_WVALID VALID 1 1 }  { m_axi_BUS32_WREADY READY 0 1 }  { m_axi_BUS32_WDATA DATA 1 32 }  { m_axi_BUS32_WSTRB STRB 1 4 }  { m_axi_BUS32_WLAST LAST 1 1 }  { m_axi_BUS32_WID ID 1 1 }  { m_axi_BUS32_WUSER USER 1 1 }  { m_axi_BUS32_ARVALID VALID 1 1 }  { m_axi_BUS32_ARREADY READY 0 1 }  { m_axi_BUS32_ARADDR ADDR 1 32 }  { m_axi_BUS32_ARID ID 1 1 }  { m_axi_BUS32_ARLEN LEN 1 8 }  { m_axi_BUS32_ARSIZE SIZE 1 3 }  { m_axi_BUS32_ARBURST BURST 1 2 }  { m_axi_BUS32_ARLOCK LOCK 1 2 }  { m_axi_BUS32_ARCACHE CACHE 1 4 }  { m_axi_BUS32_ARPROT PROT 1 3 }  { m_axi_BUS32_ARQOS QOS 1 4 }  { m_axi_BUS32_ARREGION REGION 1 4 }  { m_axi_BUS32_ARUSER USER 1 1 }  { m_axi_BUS32_RVALID VALID 0 1 }  { m_axi_BUS32_RREADY READY 1 1 }  { m_axi_BUS32_RDATA DATA 0 32 }  { m_axi_BUS32_RLAST LAST 0 1 }  { m_axi_BUS32_RID ID 0 1 }  { m_axi_BUS32_RUSER USER 0 1 }  { m_axi_BUS32_RRESP RESP 0 2 }  { m_axi_BUS32_BVALID VALID 0 1 }  { m_axi_BUS32_BREADY READY 1 1 }  { m_axi_BUS32_BRESP RESP 0 2 }  { m_axi_BUS32_BID ID 0 1 }  { m_axi_BUS32_BUSER USER 0 1 } } }
}

set busDeadlockParameterList { 
	{ IMG { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
	{ BUS512 { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
	{ DDR512 { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
	{ BUS32 { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
	{ IMG 1 }
	{ BUS512 1 }
	{ DDR512 1 }
	{ BUS32 1 }
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
	{ IMG 1 }
	{ BUS512 1 }
	{ DDR512 1 }
	{ BUS32 1 }
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
