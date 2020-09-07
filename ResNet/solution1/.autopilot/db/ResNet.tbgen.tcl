set moduleName ResNet
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
set C_modelName {ResNet}
set C_modelType { void 0 }
set C_modelArgList {
	{ IMG int 16 regular {axi_master 0}  }
	{ BUS32 float 32 regular {axi_master 1}  }
	{ image_thermo_V int 32 regular {axi_slave 0}  }
	{ result int 32 regular {axi_slave 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "IMG", "interface" : "axi_master", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "image_thermo.V","cData": "uint16","bit_use": { "low": 0,"up": 15},"offset": { "type": "dynamic","port_name": "image_thermo_V","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 6143,"step" : 1}]}]}]} , 
 	{ "Name" : "BUS32", "interface" : "axi_master", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "result","cData": "float","bit_use": { "low": 0,"up": 31},"offset": { "type": "dynamic","port_name": "result","bundle": "AXILiteS"},"direction": "WRITEONLY","cArray": [{"low" : 0,"up" : 9,"step" : 1}]}]}]} , 
 	{ "Name" : "image_thermo_V", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":16}, "offset_end" : {"in":23}} , 
 	{ "Name" : "result", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":24}, "offset_end" : {"in":31}} ]}
# RTL Port declarations: 
set portNum 110
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
	{ m_axi_BUS32_AWVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_BUS32_AWREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_BUS32_AWADDR sc_out sc_lv 32 signal 1 } 
	{ m_axi_BUS32_AWID sc_out sc_lv 1 signal 1 } 
	{ m_axi_BUS32_AWLEN sc_out sc_lv 8 signal 1 } 
	{ m_axi_BUS32_AWSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_BUS32_AWBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_BUS32_AWLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_BUS32_AWCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_BUS32_AWPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_BUS32_AWQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_BUS32_AWREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_BUS32_AWUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_BUS32_WVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_BUS32_WREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_BUS32_WDATA sc_out sc_lv 32 signal 1 } 
	{ m_axi_BUS32_WSTRB sc_out sc_lv 4 signal 1 } 
	{ m_axi_BUS32_WLAST sc_out sc_logic 1 signal 1 } 
	{ m_axi_BUS32_WID sc_out sc_lv 1 signal 1 } 
	{ m_axi_BUS32_WUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_BUS32_ARVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_BUS32_ARREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_BUS32_ARADDR sc_out sc_lv 32 signal 1 } 
	{ m_axi_BUS32_ARID sc_out sc_lv 1 signal 1 } 
	{ m_axi_BUS32_ARLEN sc_out sc_lv 8 signal 1 } 
	{ m_axi_BUS32_ARSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_BUS32_ARBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_BUS32_ARLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_BUS32_ARCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_BUS32_ARPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_BUS32_ARQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_BUS32_ARREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_BUS32_ARUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_BUS32_RVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_BUS32_RREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_BUS32_RDATA sc_in sc_lv 32 signal 1 } 
	{ m_axi_BUS32_RLAST sc_in sc_logic 1 signal 1 } 
	{ m_axi_BUS32_RID sc_in sc_lv 1 signal 1 } 
	{ m_axi_BUS32_RUSER sc_in sc_lv 1 signal 1 } 
	{ m_axi_BUS32_RRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_BUS32_BVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_BUS32_BREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_BUS32_BRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_BUS32_BID sc_in sc_lv 1 signal 1 } 
	{ m_axi_BUS32_BUSER sc_in sc_lv 1 signal 1 } 
	{ s_axi_AXILiteS_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_AWADDR sc_in sc_lv 5 signal -1 } 
	{ s_axi_AXILiteS_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_AXILiteS_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_AXILiteS_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_ARADDR sc_in sc_lv 5 signal -1 } 
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
	{ "name": "s_axi_AXILiteS_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWADDR" },"address":[{"name":"ResNet","role":"start","value":"0","valid_bit":"0"},{"name":"ResNet","role":"continue","value":"0","valid_bit":"4"},{"name":"ResNet","role":"auto_start","value":"0","valid_bit":"7"},{"name":"image_thermo_V","role":"data","value":"16"},{"name":"result","role":"data","value":"24"}] },
	{ "name": "s_axi_AXILiteS_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWVALID" } },
	{ "name": "s_axi_AXILiteS_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWREADY" } },
	{ "name": "s_axi_AXILiteS_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WVALID" } },
	{ "name": "s_axi_AXILiteS_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WREADY" } },
	{ "name": "s_axi_AXILiteS_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WDATA" } },
	{ "name": "s_axi_AXILiteS_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WSTRB" } },
	{ "name": "s_axi_AXILiteS_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARADDR" },"address":[{"name":"ResNet","role":"start","value":"0","valid_bit":"0"},{"name":"ResNet","role":"done","value":"0","valid_bit":"1"},{"name":"ResNet","role":"idle","value":"0","valid_bit":"2"},{"name":"ResNet","role":"ready","value":"0","valid_bit":"3"},{"name":"ResNet","role":"auto_start","value":"0","valid_bit":"7"}] },
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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "367", "432", "479", "480", "481", "515", "528", "534", "536", "544"],
		"CDFG" : "ResNet",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "163084", "EstimateLatencyMax" : "163084",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state106", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64s2_32u_s_fu_3755"},
			{"State" : "ap_ST_fsm_state17", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_biconv16_fu_3801"},
			{"State" : "ap_ST_fsm_state107", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847"},
			{"State" : "ap_ST_fsm_state112", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847"},
			{"State" : "ap_ST_fsm_state117", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847"},
			{"State" : "ap_ST_fsm_state122", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847"},
			{"State" : "ap_ST_fsm_state127", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847"},
			{"State" : "ap_ST_fsm_state132", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847"},
			{"State" : "ap_ST_fsm_state68", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025"},
			{"State" : "ap_ST_fsm_state75", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025"},
			{"State" : "ap_ST_fsm_state82", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025"},
			{"State" : "ap_ST_fsm_state87", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025"},
			{"State" : "ap_ST_fsm_state94", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025"},
			{"State" : "ap_ST_fsm_state99", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025"},
			{"State" : "ap_ST_fsm_state27", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176"},
			{"State" : "ap_ST_fsm_state33", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176"},
			{"State" : "ap_ST_fsm_state40", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176"},
			{"State" : "ap_ST_fsm_state46", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176"},
			{"State" : "ap_ST_fsm_state53", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176"},
			{"State" : "ap_ST_fsm_state59", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176"},
			{"State" : "ap_ST_fsm_state111", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_64u_s_fu_4252"},
			{"State" : "ap_ST_fsm_state116", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_64u_s_fu_4252"},
			{"State" : "ap_ST_fsm_state121", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_64u_s_fu_4252"},
			{"State" : "ap_ST_fsm_state126", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_64u_s_fu_4252"},
			{"State" : "ap_ST_fsm_state131", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_64u_s_fu_4252"},
			{"State" : "ap_ST_fsm_state136", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_matmul_fu_4298"},
			{"State" : "ap_ST_fsm_state67", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64s2_16u_s_fu_4389"},
			{"State" : "ap_ST_fsm_state23", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_fu_4433"},
			{"State" : "ap_ST_fsm_state29", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_fu_4433"},
			{"State" : "ap_ST_fsm_state36", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_fu_4433"},
			{"State" : "ap_ST_fsm_state42", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_fu_4433"},
			{"State" : "ap_ST_fsm_state49", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_fu_4433"},
			{"State" : "ap_ST_fsm_state55", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_fu_4433"},
			{"State" : "ap_ST_fsm_state65", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_fu_4433"},
			{"State" : "ap_ST_fsm_state71", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_fu_4433"},
			{"State" : "ap_ST_fsm_state78", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_fu_4433"},
			{"State" : "ap_ST_fsm_state83", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_fu_4433"},
			{"State" : "ap_ST_fsm_state90", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_fu_4433"},
			{"State" : "ap_ST_fsm_state95", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_fu_4433"},
			{"State" : "ap_ST_fsm_state108", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_fu_4433"},
			{"State" : "ap_ST_fsm_state104", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_fu_4433"},
			{"State" : "ap_ST_fsm_state113", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_fu_4433"},
			{"State" : "ap_ST_fsm_state118", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_fu_4433"},
			{"State" : "ap_ST_fsm_state123", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_fu_4433"},
			{"State" : "ap_ST_fsm_state128", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fill_fm_buf_fu_4433"},
			{"State" : "ap_ST_fsm_state25", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_16u_s_fu_4582"},
			{"State" : "ap_ST_fsm_state31", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_16u_s_fu_4582"},
			{"State" : "ap_ST_fsm_state38", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_16u_s_fu_4582"},
			{"State" : "ap_ST_fsm_state44", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_16u_s_fu_4582"},
			{"State" : "ap_ST_fsm_state51", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_16u_s_fu_4582"},
			{"State" : "ap_ST_fsm_state57", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_16u_s_fu_4582"},
			{"State" : "ap_ST_fsm_state74", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_32u_s_fu_4622"},
			{"State" : "ap_ST_fsm_state81", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_32u_s_fu_4622"},
			{"State" : "ap_ST_fsm_state86", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_32u_s_fu_4622"},
			{"State" : "ap_ST_fsm_state93", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_32u_s_fu_4622"},
			{"State" : "ap_ST_fsm_state98", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pgconv64_32u_s_fu_4622"}],
		"Port" : [
			{"Name" : "IMG", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "IMG_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "IMG_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "BUS32", "Type" : "MAXI", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "515", "SubInstance" : "grp_matmul_fu_4298", "Port" : "top"}]},
			{"Name" : "image_thermo_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "result", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv1_weight_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "367", "SubInstance" : "grp_biconv16_fu_3801", "Port" : "lut16_V"}]},
			{"Name" : "fm_buf_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_0"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "fm_buf_V_0"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_0"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_0"}]},
			{"Name" : "fm_buf_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_1"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "fm_buf_V_1"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_1"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_1"}]},
			{"Name" : "fm_buf_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_2"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "fm_buf_V_2"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_2"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_2"}]},
			{"Name" : "fm_buf_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_3"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "fm_buf_V_3"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_3"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_3"}]},
			{"Name" : "fm_buf_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_4"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "fm_buf_V_4"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_4"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_4"}]},
			{"Name" : "fm_buf_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_5"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "fm_buf_V_5"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_5"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_5"}]},
			{"Name" : "fm_buf_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_6"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "fm_buf_V_6"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_6"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_6"}]},
			{"Name" : "fm_buf_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_7"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "fm_buf_V_7"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_7"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_7"}]},
			{"Name" : "fm_buf_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_8"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "fm_buf_V_8"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_8"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_8"}]},
			{"Name" : "fm_buf_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_9"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "fm_buf_V_9"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_9"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_9"}]},
			{"Name" : "fm_buf_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_10"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "fm_buf_V_10"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_10"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_10"}]},
			{"Name" : "fm_buf_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_11"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "fm_buf_V_11"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_11"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_11"}]},
			{"Name" : "fm_buf_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_12"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "fm_buf_V_12"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_12"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_12"}]},
			{"Name" : "fm_buf_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_13"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "fm_buf_V_13"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_13"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_13"}]},
			{"Name" : "fm_buf_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_14"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "fm_buf_V_14"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_14"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_14"}]},
			{"Name" : "fm_buf_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_15"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "fm_buf_V_15"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_15"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_15"}]},
			{"Name" : "fm_buf_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_16"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_16"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_16"}]},
			{"Name" : "fm_buf_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_17"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_17"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_17"}]},
			{"Name" : "fm_buf_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_18"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_18"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_18"}]},
			{"Name" : "fm_buf_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_19"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_19"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_19"}]},
			{"Name" : "fm_buf_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_20"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_20"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_20"}]},
			{"Name" : "fm_buf_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_21"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_21"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_21"}]},
			{"Name" : "fm_buf_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_22"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_22"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_22"}]},
			{"Name" : "fm_buf_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_23"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_23"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_23"}]},
			{"Name" : "fm_buf_V_24", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_24"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_24"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_24"}]},
			{"Name" : "fm_buf_V_25", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_25"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_25"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_25"}]},
			{"Name" : "fm_buf_V_26", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_26"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_26"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_26"}]},
			{"Name" : "fm_buf_V_27", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_27"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_27"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_27"}]},
			{"Name" : "fm_buf_V_28", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_28"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_28"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_28"}]},
			{"Name" : "fm_buf_V_29", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_29"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_29"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_29"}]},
			{"Name" : "fm_buf_V_30", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_30"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_30"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_30"}]},
			{"Name" : "fm_buf_V_31", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_31"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_31"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_31"}]},
			{"Name" : "fm_buf_V_32", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_32"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_32"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_32"}]},
			{"Name" : "fm_buf_V_33", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_33"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_33"}]},
			{"Name" : "fm_buf_V_34", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_34"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_34"}]},
			{"Name" : "fm_buf_V_35", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_35"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_35"}]},
			{"Name" : "fm_buf_V_36", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_36"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_36"}]},
			{"Name" : "fm_buf_V_37", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_37"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_37"}]},
			{"Name" : "fm_buf_V_38", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_38"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_38"}]},
			{"Name" : "fm_buf_V_39", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_39"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_39"}]},
			{"Name" : "fm_buf_V_40", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_40"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_40"}]},
			{"Name" : "fm_buf_V_41", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_41"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_41"}]},
			{"Name" : "fm_buf_V_42", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_42"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_42"}]},
			{"Name" : "fm_buf_V_43", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_43"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_43"}]},
			{"Name" : "fm_buf_V_44", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_44"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_44"}]},
			{"Name" : "fm_buf_V_45", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_45"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_45"}]},
			{"Name" : "fm_buf_V_46", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_46"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_46"}]},
			{"Name" : "fm_buf_V_47", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_47"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_47"}]},
			{"Name" : "fm_buf_V_48", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_48"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_48"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_48"}]},
			{"Name" : "fm_buf_V_49", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_49"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_49"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_49"}]},
			{"Name" : "fm_buf_V_50", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_50"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_50"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_50"}]},
			{"Name" : "fm_buf_V_51", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_51"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_51"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_51"}]},
			{"Name" : "fm_buf_V_52", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_52"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_52"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_52"}]},
			{"Name" : "fm_buf_V_53", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_53"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_53"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_53"}]},
			{"Name" : "fm_buf_V_54", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_54"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_54"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_54"}]},
			{"Name" : "fm_buf_V_55", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_55"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_55"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_55"}]},
			{"Name" : "fm_buf_V_56", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_56"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_56"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_56"}]},
			{"Name" : "fm_buf_V_57", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_57"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_57"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_57"}]},
			{"Name" : "fm_buf_V_58", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_58"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_58"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_58"}]},
			{"Name" : "fm_buf_V_59", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_59"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_59"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_59"}]},
			{"Name" : "fm_buf_V_60", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_60"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_60"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_60"}]},
			{"Name" : "fm_buf_V_61", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_61"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_61"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_61"}]},
			{"Name" : "fm_buf_V_62", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_62"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_62"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_62"}]},
			{"Name" : "fm_buf_V_63", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "fm_buf_V_63"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "fm_buf_V_63"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "fm_buf_V_63"}]},
			{"Name" : "input_buf_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "input_buf_V_1"},
					{"ID" : "124", "SubInstance" : "grp_pgconv64s2_32u_s_fu_3755", "Port" : "bottom1_V"},
					{"ID" : "481", "SubInstance" : "grp_pgconv64_64u_s_fu_4252", "Port" : "bottom1_V"},
					{"ID" : "528", "SubInstance" : "grp_pgconv64s2_16u_s_fu_4389", "Port" : "bottom1_V"},
					{"ID" : "536", "SubInstance" : "grp_pgconv64_16u_s_fu_4582", "Port" : "bottom1_V"},
					{"ID" : "544", "SubInstance" : "grp_pgconv64_32u_s_fu_4622", "Port" : "bottom1_V"}]},
			{"Name" : "input_buf_V_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "534", "SubInstance" : "grp_fill_fm_buf_fu_4433", "Port" : "input_buf_V_0"}]},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "124", "SubInstance" : "grp_pgconv64s2_32u_s_fu_3755", "Port" : "lut16_V_1"},
					{"ID" : "481", "SubInstance" : "grp_pgconv64_64u_s_fu_4252", "Port" : "lut16_V_1"},
					{"ID" : "528", "SubInstance" : "grp_pgconv64s2_16u_s_fu_4389", "Port" : "lut16_V_1"},
					{"ID" : "536", "SubInstance" : "grp_pgconv64_16u_s_fu_4582", "Port" : "lut16_V_1"},
					{"ID" : "544", "SubInstance" : "grp_pgconv64_32u_s_fu_4622", "Port" : "lut16_V_1"}]},
			{"Name" : "out_buf0_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "124", "SubInstance" : "grp_pgconv64s2_32u_s_fu_3755", "Port" : "top_0_V"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "out_buf0_V_0"},
					{"ID" : "481", "SubInstance" : "grp_pgconv64_64u_s_fu_4252", "Port" : "top_0_V"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "out_buf0_V_0"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "out_buf0_V_0"},
					{"ID" : "528", "SubInstance" : "grp_pgconv64s2_16u_s_fu_4389", "Port" : "top_0_V"},
					{"ID" : "536", "SubInstance" : "grp_pgconv64_16u_s_fu_4582", "Port" : "top_0_V"},
					{"ID" : "544", "SubInstance" : "grp_pgconv64_32u_s_fu_4622", "Port" : "top_0_V"}]},
			{"Name" : "out_buf0_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "124", "SubInstance" : "grp_pgconv64s2_32u_s_fu_3755", "Port" : "top_1_V"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "out_buf0_V_1"},
					{"ID" : "481", "SubInstance" : "grp_pgconv64_64u_s_fu_4252", "Port" : "top_1_V"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "out_buf0_V_1"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "out_buf0_V_1"},
					{"ID" : "528", "SubInstance" : "grp_pgconv64s2_16u_s_fu_4389", "Port" : "top_1_V"},
					{"ID" : "536", "SubInstance" : "grp_pgconv64_16u_s_fu_4582", "Port" : "top_1_V"},
					{"ID" : "544", "SubInstance" : "grp_pgconv64_32u_s_fu_4622", "Port" : "top_1_V"}]},
			{"Name" : "out_buf0_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "124", "SubInstance" : "grp_pgconv64s2_32u_s_fu_3755", "Port" : "top_2_V"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "out_buf0_V_2"},
					{"ID" : "481", "SubInstance" : "grp_pgconv64_64u_s_fu_4252", "Port" : "top_2_V"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "out_buf0_V_2"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "out_buf0_V_2"},
					{"ID" : "528", "SubInstance" : "grp_pgconv64s2_16u_s_fu_4389", "Port" : "top_2_V"},
					{"ID" : "536", "SubInstance" : "grp_pgconv64_16u_s_fu_4582", "Port" : "top_2_V"},
					{"ID" : "544", "SubInstance" : "grp_pgconv64_32u_s_fu_4622", "Port" : "top_2_V"}]},
			{"Name" : "out_buf0_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "124", "SubInstance" : "grp_pgconv64s2_32u_s_fu_3755", "Port" : "top_3_V"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "out_buf0_V_3"},
					{"ID" : "481", "SubInstance" : "grp_pgconv64_64u_s_fu_4252", "Port" : "top_3_V"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "out_buf0_V_3"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "out_buf0_V_3"},
					{"ID" : "528", "SubInstance" : "grp_pgconv64s2_16u_s_fu_4389", "Port" : "top_3_V"},
					{"ID" : "536", "SubInstance" : "grp_pgconv64_16u_s_fu_4582", "Port" : "top_3_V"},
					{"ID" : "544", "SubInstance" : "grp_pgconv64_32u_s_fu_4622", "Port" : "top_3_V"}]},
			{"Name" : "out_buf0_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "124", "SubInstance" : "grp_pgconv64s2_32u_s_fu_3755", "Port" : "top_4_V"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "out_buf0_V_4"},
					{"ID" : "481", "SubInstance" : "grp_pgconv64_64u_s_fu_4252", "Port" : "top_4_V"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "out_buf0_V_4"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "out_buf0_V_4"},
					{"ID" : "528", "SubInstance" : "grp_pgconv64s2_16u_s_fu_4389", "Port" : "top_4_V"},
					{"ID" : "536", "SubInstance" : "grp_pgconv64_16u_s_fu_4582", "Port" : "top_4_V"},
					{"ID" : "544", "SubInstance" : "grp_pgconv64_32u_s_fu_4622", "Port" : "top_4_V"}]},
			{"Name" : "out_buf0_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "124", "SubInstance" : "grp_pgconv64s2_32u_s_fu_3755", "Port" : "top_5_V"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "out_buf0_V_5"},
					{"ID" : "481", "SubInstance" : "grp_pgconv64_64u_s_fu_4252", "Port" : "top_5_V"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "out_buf0_V_5"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "out_buf0_V_5"},
					{"ID" : "528", "SubInstance" : "grp_pgconv64s2_16u_s_fu_4389", "Port" : "top_5_V"},
					{"ID" : "536", "SubInstance" : "grp_pgconv64_16u_s_fu_4582", "Port" : "top_5_V"},
					{"ID" : "544", "SubInstance" : "grp_pgconv64_32u_s_fu_4622", "Port" : "top_5_V"}]},
			{"Name" : "out_buf0_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "124", "SubInstance" : "grp_pgconv64s2_32u_s_fu_3755", "Port" : "top_6_V"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "out_buf0_V_6"},
					{"ID" : "481", "SubInstance" : "grp_pgconv64_64u_s_fu_4252", "Port" : "top_6_V"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "out_buf0_V_6"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "out_buf0_V_6"},
					{"ID" : "528", "SubInstance" : "grp_pgconv64s2_16u_s_fu_4389", "Port" : "top_6_V"},
					{"ID" : "536", "SubInstance" : "grp_pgconv64_16u_s_fu_4582", "Port" : "top_6_V"},
					{"ID" : "544", "SubInstance" : "grp_pgconv64_32u_s_fu_4622", "Port" : "top_6_V"}]},
			{"Name" : "out_buf0_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "124", "SubInstance" : "grp_pgconv64s2_32u_s_fu_3755", "Port" : "top_7_V"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "out_buf0_V_7"},
					{"ID" : "481", "SubInstance" : "grp_pgconv64_64u_s_fu_4252", "Port" : "top_7_V"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "out_buf0_V_7"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "out_buf0_V_7"},
					{"ID" : "528", "SubInstance" : "grp_pgconv64s2_16u_s_fu_4389", "Port" : "top_7_V"},
					{"ID" : "536", "SubInstance" : "grp_pgconv64_16u_s_fu_4582", "Port" : "top_7_V"},
					{"ID" : "544", "SubInstance" : "grp_pgconv64_32u_s_fu_4622", "Port" : "top_7_V"}]},
			{"Name" : "out_buf0_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "124", "SubInstance" : "grp_pgconv64s2_32u_s_fu_3755", "Port" : "top_8_V"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "out_buf0_V_8"},
					{"ID" : "481", "SubInstance" : "grp_pgconv64_64u_s_fu_4252", "Port" : "top_8_V"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "out_buf0_V_8"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "out_buf0_V_8"},
					{"ID" : "528", "SubInstance" : "grp_pgconv64s2_16u_s_fu_4389", "Port" : "top_8_V"},
					{"ID" : "536", "SubInstance" : "grp_pgconv64_16u_s_fu_4582", "Port" : "top_8_V"},
					{"ID" : "544", "SubInstance" : "grp_pgconv64_32u_s_fu_4622", "Port" : "top_8_V"}]},
			{"Name" : "out_buf0_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "124", "SubInstance" : "grp_pgconv64s2_32u_s_fu_3755", "Port" : "top_9_V"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "out_buf0_V_9"},
					{"ID" : "481", "SubInstance" : "grp_pgconv64_64u_s_fu_4252", "Port" : "top_9_V"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "out_buf0_V_9"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "out_buf0_V_9"},
					{"ID" : "528", "SubInstance" : "grp_pgconv64s2_16u_s_fu_4389", "Port" : "top_9_V"},
					{"ID" : "536", "SubInstance" : "grp_pgconv64_16u_s_fu_4582", "Port" : "top_9_V"},
					{"ID" : "544", "SubInstance" : "grp_pgconv64_32u_s_fu_4622", "Port" : "top_9_V"}]},
			{"Name" : "out_buf0_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "124", "SubInstance" : "grp_pgconv64s2_32u_s_fu_3755", "Port" : "top_10_V"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "out_buf0_V_10"},
					{"ID" : "481", "SubInstance" : "grp_pgconv64_64u_s_fu_4252", "Port" : "top_10_V"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "out_buf0_V_10"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "out_buf0_V_10"},
					{"ID" : "528", "SubInstance" : "grp_pgconv64s2_16u_s_fu_4389", "Port" : "top_10_V"},
					{"ID" : "536", "SubInstance" : "grp_pgconv64_16u_s_fu_4582", "Port" : "top_10_V"},
					{"ID" : "544", "SubInstance" : "grp_pgconv64_32u_s_fu_4622", "Port" : "top_10_V"}]},
			{"Name" : "out_buf0_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "124", "SubInstance" : "grp_pgconv64s2_32u_s_fu_3755", "Port" : "top_11_V"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "out_buf0_V_11"},
					{"ID" : "481", "SubInstance" : "grp_pgconv64_64u_s_fu_4252", "Port" : "top_11_V"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "out_buf0_V_11"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "out_buf0_V_11"},
					{"ID" : "528", "SubInstance" : "grp_pgconv64s2_16u_s_fu_4389", "Port" : "top_11_V"},
					{"ID" : "536", "SubInstance" : "grp_pgconv64_16u_s_fu_4582", "Port" : "top_11_V"},
					{"ID" : "544", "SubInstance" : "grp_pgconv64_32u_s_fu_4622", "Port" : "top_11_V"}]},
			{"Name" : "out_buf0_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "124", "SubInstance" : "grp_pgconv64s2_32u_s_fu_3755", "Port" : "top_12_V"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "out_buf0_V_12"},
					{"ID" : "481", "SubInstance" : "grp_pgconv64_64u_s_fu_4252", "Port" : "top_12_V"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "out_buf0_V_12"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "out_buf0_V_12"},
					{"ID" : "528", "SubInstance" : "grp_pgconv64s2_16u_s_fu_4389", "Port" : "top_12_V"},
					{"ID" : "536", "SubInstance" : "grp_pgconv64_16u_s_fu_4582", "Port" : "top_12_V"},
					{"ID" : "544", "SubInstance" : "grp_pgconv64_32u_s_fu_4622", "Port" : "top_12_V"}]},
			{"Name" : "out_buf0_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "124", "SubInstance" : "grp_pgconv64s2_32u_s_fu_3755", "Port" : "top_13_V"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "out_buf0_V_13"},
					{"ID" : "481", "SubInstance" : "grp_pgconv64_64u_s_fu_4252", "Port" : "top_13_V"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "out_buf0_V_13"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "out_buf0_V_13"},
					{"ID" : "528", "SubInstance" : "grp_pgconv64s2_16u_s_fu_4389", "Port" : "top_13_V"},
					{"ID" : "536", "SubInstance" : "grp_pgconv64_16u_s_fu_4582", "Port" : "top_13_V"},
					{"ID" : "544", "SubInstance" : "grp_pgconv64_32u_s_fu_4622", "Port" : "top_13_V"}]},
			{"Name" : "out_buf0_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "124", "SubInstance" : "grp_pgconv64s2_32u_s_fu_3755", "Port" : "top_14_V"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "out_buf0_V_14"},
					{"ID" : "481", "SubInstance" : "grp_pgconv64_64u_s_fu_4252", "Port" : "top_14_V"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "out_buf0_V_14"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "out_buf0_V_14"},
					{"ID" : "528", "SubInstance" : "grp_pgconv64s2_16u_s_fu_4389", "Port" : "top_14_V"},
					{"ID" : "536", "SubInstance" : "grp_pgconv64_16u_s_fu_4582", "Port" : "top_14_V"},
					{"ID" : "544", "SubInstance" : "grp_pgconv64_32u_s_fu_4622", "Port" : "top_14_V"}]},
			{"Name" : "out_buf0_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "124", "SubInstance" : "grp_pgconv64s2_32u_s_fu_3755", "Port" : "top_15_V"},
					{"ID" : "480", "SubInstance" : "grp_fill_fm_buf_bn_16u_s_fu_4176", "Port" : "out_buf0_V_15"},
					{"ID" : "481", "SubInstance" : "grp_pgconv64_64u_s_fu_4252", "Port" : "top_15_V"},
					{"ID" : "432", "SubInstance" : "grp_fill_fm_buf_bn_64u_s_fu_3847", "Port" : "out_buf0_V_15"},
					{"ID" : "479", "SubInstance" : "grp_fill_fm_buf_bn_32u_s_fu_4025", "Port" : "out_buf0_V_15"},
					{"ID" : "528", "SubInstance" : "grp_pgconv64s2_16u_s_fu_4389", "Port" : "top_15_V"},
					{"ID" : "536", "SubInstance" : "grp_pgconv64_16u_s_fu_4582", "Port" : "top_15_V"},
					{"ID" : "544", "SubInstance" : "grp_pgconv64_32u_s_fu_4622", "Port" : "top_15_V"}]},
			{"Name" : "linear_weight_V_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "515", "SubInstance" : "grp_matmul_fu_4298", "Port" : "linear_weight_V_0"}]},
			{"Name" : "linear_weight_V_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "515", "SubInstance" : "grp_matmul_fu_4298", "Port" : "linear_weight_V_1"}]},
			{"Name" : "linear_weight_V_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "515", "SubInstance" : "grp_matmul_fu_4298", "Port" : "linear_weight_V_2"}]},
			{"Name" : "linear_weight_V_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "515", "SubInstance" : "grp_matmul_fu_4298", "Port" : "linear_weight_V_3"}]},
			{"Name" : "linear_weight_V_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "515", "SubInstance" : "grp_matmul_fu_4298", "Port" : "linear_weight_V_4"}]},
			{"Name" : "linear_weight_V_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "515", "SubInstance" : "grp_matmul_fu_4298", "Port" : "linear_weight_V_5"}]},
			{"Name" : "linear_weight_V_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "515", "SubInstance" : "grp_matmul_fu_4298", "Port" : "linear_weight_V_6"}]},
			{"Name" : "linear_weight_V_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "515", "SubInstance" : "grp_matmul_fu_4298", "Port" : "linear_weight_V_7"}]},
			{"Name" : "linear_weight_V_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "515", "SubInstance" : "grp_matmul_fu_4298", "Port" : "linear_weight_V_8"}]},
			{"Name" : "linear_weight_V_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "515", "SubInstance" : "grp_matmul_fu_4298", "Port" : "linear_weight_V_9"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weight_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_0_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_1_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_2_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_3_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_4_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_5_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_6_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_7_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_8_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_9_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_10_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_11_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_12_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_13_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_14_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_15_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_16_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_17_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_18_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_19_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_20_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_21_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_22_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_23_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_24_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_25_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_26_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_27_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_28_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_29_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_30_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_31_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_32_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_33_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_34_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_35_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_36_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_37_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_38_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_39_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_40_U", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_41_U", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_42_U", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_43_U", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_44_U", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_45_U", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_46_U", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_47_U", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_48_U", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_49_U", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_50_U", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_51_U", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_52_U", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_53_U", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_54_U", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_55_U", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_56_U", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_57_U", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_58_U", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_59_U", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_60_U", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_61_U", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_62_U", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_buf_V_63_U", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.input_buf_V_1_U", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.out_buf0_V_0_U", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.out_buf0_V_1_U", "Parent" : "0"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.out_buf0_V_2_U", "Parent" : "0"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.out_buf0_V_3_U", "Parent" : "0"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.out_buf0_V_4_U", "Parent" : "0"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.out_buf0_V_5_U", "Parent" : "0"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.out_buf0_V_6_U", "Parent" : "0"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.out_buf0_V_7_U", "Parent" : "0"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.out_buf0_V_8_U", "Parent" : "0"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.out_buf0_V_9_U", "Parent" : "0"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.out_buf0_V_10_U", "Parent" : "0"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.out_buf0_V_11_U", "Parent" : "0"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.out_buf0_V_12_U", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.out_buf0_V_13_U", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.out_buf0_V_14_U", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.out_buf0_V_15_U", "Parent" : "0"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ResNet_AXILiteS_s_axi_U", "Parent" : "0"},
	{"ID" : "84", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ResNet_IMG_m_axi_U", "Parent" : "0"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ResNet_BUS32_m_axi_U", "Parent" : "0"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_buf_0_V_U", "Parent" : "0"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_buf_1_V_U", "Parent" : "0"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_buf_2_V_U", "Parent" : "0"},
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_buf_3_V_U", "Parent" : "0"},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_buf_4_V_U", "Parent" : "0"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_buf_5_V_U", "Parent" : "0"},
	{"ID" : "92", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_out_0_U", "Parent" : "0"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_out_1_U", "Parent" : "0"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_out_2_U", "Parent" : "0"},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_out_3_U", "Parent" : "0"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_out_4_U", "Parent" : "0"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_out_5_U", "Parent" : "0"},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_out_6_U", "Parent" : "0"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_out_7_U", "Parent" : "0"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_out_8_U", "Parent" : "0"},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_out_9_U", "Parent" : "0"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_out_10_U", "Parent" : "0"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_out_11_U", "Parent" : "0"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_out_12_U", "Parent" : "0"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_out_13_U", "Parent" : "0"},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_out_14_U", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_out_15_U", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weight_buf_0_s_U", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weight_buf_1_s_U", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weight_buf_2_s_U", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weight_buf_3_s_U", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weight_buf_4_s_U", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weight_buf_5_s_U", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weight_buf_6_s_U", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weight_buf_7_s_U", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weight_buf_8_s_U", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weight_buf_9_s_U", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weight_buf_10_U", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weight_buf_11_U", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weight_buf_12_U", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weight_buf_13_U", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weight_buf_14_U", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_weight_buf_15_U", "Parent" : "0"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755", "Parent" : "0", "Child" : ["125", "127", "129", "131", "133", "135", "137", "139", "141", "143", "145", "147", "149", "151", "153", "155", "157", "159", "161", "163", "165", "167", "169", "171", "173", "175", "177", "179", "181", "183", "184", "185", "186", "187", "188", "189", "190", "191", "192", "193", "194", "195", "196", "197", "198", "199", "200", "201", "202", "203", "204", "205", "206", "207", "208", "209", "210", "211", "212", "213", "214", "215", "216", "217", "218", "219", "220", "221", "222", "223", "224", "225", "226", "227", "228", "229", "230", "231", "232", "233", "234", "235", "236", "237", "238", "239", "240", "241", "242", "243", "244", "245", "246", "247", "248", "249", "250", "251", "252", "253", "254", "255", "256", "257", "258", "259", "260", "261", "262", "263", "264", "265", "266", "267", "268", "269", "270", "271", "272", "273", "274", "275", "276", "277", "278", "279", "280", "281", "282", "283", "284", "285", "286", "287", "288", "289", "290", "291", "292", "293", "294", "295", "296", "297", "298", "299", "300", "301", "302", "303", "304", "305", "306", "307", "308", "309", "310", "311", "312", "313", "314", "315", "316", "317", "318", "319", "320", "321", "322", "323", "324", "325", "326", "327", "328", "329", "330", "331", "332", "333", "334", "335", "336", "337", "338", "339", "340", "341", "342", "343", "344", "345", "346", "347", "348", "349", "350", "351", "352", "353", "354", "355", "356", "357", "358", "359", "360", "361", "362", "363", "364", "365", "366"],
		"CDFG" : "pgconv64s2_32u_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "89", "EstimateLatencyMax" : "89",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "bottom1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "c", "Type" : "None", "Direction" : "I"},
			{"Name" : "row_off", "Type" : "None", "Direction" : "I"},
			{"Name" : "col_off", "Type" : "None", "Direction" : "I"},
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "125", "SubInstance" : "grp_compute_engine_64_fu_548", "Port" : "lut16_V_1"},
					{"ID" : "127", "SubInstance" : "grp_compute_engine_64_fu_558", "Port" : "lut16_V_1"},
					{"ID" : "133", "SubInstance" : "grp_compute_engine_64_fu_585", "Port" : "lut16_V_1"},
					{"ID" : "135", "SubInstance" : "grp_compute_engine_64_fu_594", "Port" : "lut16_V_1"},
					{"ID" : "139", "SubInstance" : "grp_compute_engine_64_fu_612", "Port" : "lut16_V_1"},
					{"ID" : "143", "SubInstance" : "grp_compute_engine_64_fu_630", "Port" : "lut16_V_1"},
					{"ID" : "131", "SubInstance" : "grp_compute_engine_64_fu_576", "Port" : "lut16_V_1"},
					{"ID" : "145", "SubInstance" : "grp_compute_engine_64_fu_639", "Port" : "lut16_V_1"},
					{"ID" : "147", "SubInstance" : "grp_compute_engine_64_fu_648", "Port" : "lut16_V_1"},
					{"ID" : "141", "SubInstance" : "grp_compute_engine_64_fu_621", "Port" : "lut16_V_1"},
					{"ID" : "137", "SubInstance" : "grp_compute_engine_64_fu_603", "Port" : "lut16_V_1"},
					{"ID" : "129", "SubInstance" : "grp_compute_engine_64_fu_567", "Port" : "lut16_V_1"},
					{"ID" : "157", "SubInstance" : "grp_compute_engine_64_fu_693", "Port" : "lut16_V_1"},
					{"ID" : "175", "SubInstance" : "grp_compute_engine_64_fu_774", "Port" : "lut16_V_1"},
					{"ID" : "159", "SubInstance" : "grp_compute_engine_64_fu_702", "Port" : "lut16_V_1"},
					{"ID" : "169", "SubInstance" : "grp_compute_engine_64_fu_747", "Port" : "lut16_V_1"},
					{"ID" : "171", "SubInstance" : "grp_compute_engine_64_fu_756", "Port" : "lut16_V_1"},
					{"ID" : "179", "SubInstance" : "grp_compute_engine_64_fu_792", "Port" : "lut16_V_1"},
					{"ID" : "155", "SubInstance" : "grp_compute_engine_64_fu_684", "Port" : "lut16_V_1"},
					{"ID" : "181", "SubInstance" : "grp_compute_engine_64_fu_801", "Port" : "lut16_V_1"},
					{"ID" : "177", "SubInstance" : "grp_compute_engine_64_fu_783", "Port" : "lut16_V_1"},
					{"ID" : "149", "SubInstance" : "grp_compute_engine_64_fu_657", "Port" : "lut16_V_1"},
					{"ID" : "151", "SubInstance" : "grp_compute_engine_64_fu_666", "Port" : "lut16_V_1"},
					{"ID" : "167", "SubInstance" : "grp_compute_engine_64_fu_738", "Port" : "lut16_V_1"},
					{"ID" : "165", "SubInstance" : "grp_compute_engine_64_fu_729", "Port" : "lut16_V_1"},
					{"ID" : "163", "SubInstance" : "grp_compute_engine_64_fu_720", "Port" : "lut16_V_1"},
					{"ID" : "161", "SubInstance" : "grp_compute_engine_64_fu_711", "Port" : "lut16_V_1"},
					{"ID" : "153", "SubInstance" : "grp_compute_engine_64_fu_675", "Port" : "lut16_V_1"},
					{"ID" : "173", "SubInstance" : "grp_compute_engine_64_fu_765", "Port" : "lut16_V_1"}]}]},
	{"ID" : "125", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_548", "Parent" : "124", "Child" : ["126"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "126", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_548.lut16_V_1_U", "Parent" : "125"},
	{"ID" : "127", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_558", "Parent" : "124", "Child" : ["128"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "128", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_558.lut16_V_1_U", "Parent" : "127"},
	{"ID" : "129", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_567", "Parent" : "124", "Child" : ["130"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "130", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_567.lut16_V_1_U", "Parent" : "129"},
	{"ID" : "131", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_576", "Parent" : "124", "Child" : ["132"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "132", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_576.lut16_V_1_U", "Parent" : "131"},
	{"ID" : "133", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_585", "Parent" : "124", "Child" : ["134"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "134", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_585.lut16_V_1_U", "Parent" : "133"},
	{"ID" : "135", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_594", "Parent" : "124", "Child" : ["136"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "136", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_594.lut16_V_1_U", "Parent" : "135"},
	{"ID" : "137", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_603", "Parent" : "124", "Child" : ["138"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "138", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_603.lut16_V_1_U", "Parent" : "137"},
	{"ID" : "139", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_612", "Parent" : "124", "Child" : ["140"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "140", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_612.lut16_V_1_U", "Parent" : "139"},
	{"ID" : "141", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_621", "Parent" : "124", "Child" : ["142"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "142", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_621.lut16_V_1_U", "Parent" : "141"},
	{"ID" : "143", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_630", "Parent" : "124", "Child" : ["144"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "144", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_630.lut16_V_1_U", "Parent" : "143"},
	{"ID" : "145", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_639", "Parent" : "124", "Child" : ["146"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "146", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_639.lut16_V_1_U", "Parent" : "145"},
	{"ID" : "147", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_648", "Parent" : "124", "Child" : ["148"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "148", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_648.lut16_V_1_U", "Parent" : "147"},
	{"ID" : "149", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_657", "Parent" : "124", "Child" : ["150"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "150", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_657.lut16_V_1_U", "Parent" : "149"},
	{"ID" : "151", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_666", "Parent" : "124", "Child" : ["152"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "152", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_666.lut16_V_1_U", "Parent" : "151"},
	{"ID" : "153", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_675", "Parent" : "124", "Child" : ["154"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "154", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_675.lut16_V_1_U", "Parent" : "153"},
	{"ID" : "155", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_684", "Parent" : "124", "Child" : ["156"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "156", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_684.lut16_V_1_U", "Parent" : "155"},
	{"ID" : "157", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_693", "Parent" : "124", "Child" : ["158"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "158", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_693.lut16_V_1_U", "Parent" : "157"},
	{"ID" : "159", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_702", "Parent" : "124", "Child" : ["160"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "160", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_702.lut16_V_1_U", "Parent" : "159"},
	{"ID" : "161", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_711", "Parent" : "124", "Child" : ["162"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "162", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_711.lut16_V_1_U", "Parent" : "161"},
	{"ID" : "163", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_720", "Parent" : "124", "Child" : ["164"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "164", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_720.lut16_V_1_U", "Parent" : "163"},
	{"ID" : "165", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_729", "Parent" : "124", "Child" : ["166"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "166", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_729.lut16_V_1_U", "Parent" : "165"},
	{"ID" : "167", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_738", "Parent" : "124", "Child" : ["168"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "168", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_738.lut16_V_1_U", "Parent" : "167"},
	{"ID" : "169", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_747", "Parent" : "124", "Child" : ["170"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "170", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_747.lut16_V_1_U", "Parent" : "169"},
	{"ID" : "171", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_756", "Parent" : "124", "Child" : ["172"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "172", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_756.lut16_V_1_U", "Parent" : "171"},
	{"ID" : "173", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_765", "Parent" : "124", "Child" : ["174"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "174", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_765.lut16_V_1_U", "Parent" : "173"},
	{"ID" : "175", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_774", "Parent" : "124", "Child" : ["176"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "176", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_774.lut16_V_1_U", "Parent" : "175"},
	{"ID" : "177", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_783", "Parent" : "124", "Child" : ["178"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "178", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_783.lut16_V_1_U", "Parent" : "177"},
	{"ID" : "179", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_792", "Parent" : "124", "Child" : ["180"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "180", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_792.lut16_V_1_U", "Parent" : "179"},
	{"ID" : "181", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_801", "Parent" : "124", "Child" : ["182"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "182", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_compute_engine_64_fu_801.lut16_V_1_U", "Parent" : "181"},
	{"ID" : "183", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_relu_fu_818", "Parent" : "124",
		"CDFG" : "relu",
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
			{"Name" : "norm_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "184", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_relu_fu_823", "Parent" : "124",
		"CDFG" : "relu",
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
			{"Name" : "norm_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "185", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_relu_fu_828", "Parent" : "124",
		"CDFG" : "relu",
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
			{"Name" : "norm_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "186", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_relu_fu_833", "Parent" : "124",
		"CDFG" : "relu",
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
			{"Name" : "norm_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "187", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_sum_engine_fu_838", "Parent" : "124",
		"CDFG" : "sum_engine",
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
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "188", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_sum_engine_fu_852", "Parent" : "124",
		"CDFG" : "sum_engine",
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
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "189", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_sum_engine_fu_866", "Parent" : "124",
		"CDFG" : "sum_engine",
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
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "190", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_sum_engine_fu_880", "Parent" : "124",
		"CDFG" : "sum_engine",
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
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "191", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_batch_norm_fu_894", "Parent" : "124",
		"CDFG" : "batch_norm",
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
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "192", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_batch_norm_fu_899", "Parent" : "124",
		"CDFG" : "batch_norm",
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
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "193", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_batch_norm_fu_904", "Parent" : "124",
		"CDFG" : "batch_norm",
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
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "194", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.grp_batch_norm_fu_909", "Parent" : "124",
		"CDFG" : "batch_norm",
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
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "195", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_646_64fYi_U283", "Parent" : "124"},
	{"ID" : "196", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U284", "Parent" : "124"},
	{"ID" : "197", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U285", "Parent" : "124"},
	{"ID" : "198", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U286", "Parent" : "124"},
	{"ID" : "199", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U287", "Parent" : "124"},
	{"ID" : "200", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U288", "Parent" : "124"},
	{"ID" : "201", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U289", "Parent" : "124"},
	{"ID" : "202", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U290", "Parent" : "124"},
	{"ID" : "203", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U291", "Parent" : "124"},
	{"ID" : "204", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U292", "Parent" : "124"},
	{"ID" : "205", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U293", "Parent" : "124"},
	{"ID" : "206", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U294", "Parent" : "124"},
	{"ID" : "207", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U295", "Parent" : "124"},
	{"ID" : "208", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U296", "Parent" : "124"},
	{"ID" : "209", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U297", "Parent" : "124"},
	{"ID" : "210", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U298", "Parent" : "124"},
	{"ID" : "211", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U299", "Parent" : "124"},
	{"ID" : "212", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U300", "Parent" : "124"},
	{"ID" : "213", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U301", "Parent" : "124"},
	{"ID" : "214", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U302", "Parent" : "124"},
	{"ID" : "215", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U303", "Parent" : "124"},
	{"ID" : "216", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U304", "Parent" : "124"},
	{"ID" : "217", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U305", "Parent" : "124"},
	{"ID" : "218", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U306", "Parent" : "124"},
	{"ID" : "219", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U307", "Parent" : "124"},
	{"ID" : "220", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U308", "Parent" : "124"},
	{"ID" : "221", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U309", "Parent" : "124"},
	{"ID" : "222", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U310", "Parent" : "124"},
	{"ID" : "223", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_646_64fYi_U311", "Parent" : "124"},
	{"ID" : "224", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_646_64fYi_U312", "Parent" : "124"},
	{"ID" : "225", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_646_64fYi_U313", "Parent" : "124"},
	{"ID" : "226", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_646_64fYi_U314", "Parent" : "124"},
	{"ID" : "227", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_646_64fYi_U315", "Parent" : "124"},
	{"ID" : "228", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_646_64fYi_U316", "Parent" : "124"},
	{"ID" : "229", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_646_64fYi_U317", "Parent" : "124"},
	{"ID" : "230", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_646_64fYi_U318", "Parent" : "124"},
	{"ID" : "231", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_646_64fYi_U319", "Parent" : "124"},
	{"ID" : "232", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U320", "Parent" : "124"},
	{"ID" : "233", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U321", "Parent" : "124"},
	{"ID" : "234", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U322", "Parent" : "124"},
	{"ID" : "235", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U323", "Parent" : "124"},
	{"ID" : "236", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U324", "Parent" : "124"},
	{"ID" : "237", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U325", "Parent" : "124"},
	{"ID" : "238", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U326", "Parent" : "124"},
	{"ID" : "239", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U327", "Parent" : "124"},
	{"ID" : "240", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U328", "Parent" : "124"},
	{"ID" : "241", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U329", "Parent" : "124"},
	{"ID" : "242", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U330", "Parent" : "124"},
	{"ID" : "243", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U331", "Parent" : "124"},
	{"ID" : "244", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U332", "Parent" : "124"},
	{"ID" : "245", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U333", "Parent" : "124"},
	{"ID" : "246", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U334", "Parent" : "124"},
	{"ID" : "247", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U335", "Parent" : "124"},
	{"ID" : "248", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U336", "Parent" : "124"},
	{"ID" : "249", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U337", "Parent" : "124"},
	{"ID" : "250", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U338", "Parent" : "124"},
	{"ID" : "251", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U339", "Parent" : "124"},
	{"ID" : "252", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U340", "Parent" : "124"},
	{"ID" : "253", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U341", "Parent" : "124"},
	{"ID" : "254", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U342", "Parent" : "124"},
	{"ID" : "255", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U343", "Parent" : "124"},
	{"ID" : "256", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U344", "Parent" : "124"},
	{"ID" : "257", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U345", "Parent" : "124"},
	{"ID" : "258", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U346", "Parent" : "124"},
	{"ID" : "259", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U347", "Parent" : "124"},
	{"ID" : "260", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U348", "Parent" : "124"},
	{"ID" : "261", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U349", "Parent" : "124"},
	{"ID" : "262", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U350", "Parent" : "124"},
	{"ID" : "263", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U351", "Parent" : "124"},
	{"ID" : "264", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U352", "Parent" : "124"},
	{"ID" : "265", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U353", "Parent" : "124"},
	{"ID" : "266", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U354", "Parent" : "124"},
	{"ID" : "267", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U355", "Parent" : "124"},
	{"ID" : "268", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U356", "Parent" : "124"},
	{"ID" : "269", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U357", "Parent" : "124"},
	{"ID" : "270", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U358", "Parent" : "124"},
	{"ID" : "271", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U359", "Parent" : "124"},
	{"ID" : "272", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U360", "Parent" : "124"},
	{"ID" : "273", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U361", "Parent" : "124"},
	{"ID" : "274", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U362", "Parent" : "124"},
	{"ID" : "275", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U363", "Parent" : "124"},
	{"ID" : "276", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U364", "Parent" : "124"},
	{"ID" : "277", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U365", "Parent" : "124"},
	{"ID" : "278", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U366", "Parent" : "124"},
	{"ID" : "279", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U367", "Parent" : "124"},
	{"ID" : "280", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U368", "Parent" : "124"},
	{"ID" : "281", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U369", "Parent" : "124"},
	{"ID" : "282", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U370", "Parent" : "124"},
	{"ID" : "283", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U371", "Parent" : "124"},
	{"ID" : "284", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U372", "Parent" : "124"},
	{"ID" : "285", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U373", "Parent" : "124"},
	{"ID" : "286", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U374", "Parent" : "124"},
	{"ID" : "287", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U375", "Parent" : "124"},
	{"ID" : "288", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U376", "Parent" : "124"},
	{"ID" : "289", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U377", "Parent" : "124"},
	{"ID" : "290", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U378", "Parent" : "124"},
	{"ID" : "291", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U379", "Parent" : "124"},
	{"ID" : "292", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U380", "Parent" : "124"},
	{"ID" : "293", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U381", "Parent" : "124"},
	{"ID" : "294", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U382", "Parent" : "124"},
	{"ID" : "295", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U383", "Parent" : "124"},
	{"ID" : "296", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U384", "Parent" : "124"},
	{"ID" : "297", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U385", "Parent" : "124"},
	{"ID" : "298", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U386", "Parent" : "124"},
	{"ID" : "299", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U387", "Parent" : "124"},
	{"ID" : "300", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U388", "Parent" : "124"},
	{"ID" : "301", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U389", "Parent" : "124"},
	{"ID" : "302", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U390", "Parent" : "124"},
	{"ID" : "303", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U391", "Parent" : "124"},
	{"ID" : "304", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U392", "Parent" : "124"},
	{"ID" : "305", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U393", "Parent" : "124"},
	{"ID" : "306", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U394", "Parent" : "124"},
	{"ID" : "307", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U395", "Parent" : "124"},
	{"ID" : "308", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U396", "Parent" : "124"},
	{"ID" : "309", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U397", "Parent" : "124"},
	{"ID" : "310", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U398", "Parent" : "124"},
	{"ID" : "311", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U399", "Parent" : "124"},
	{"ID" : "312", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U400", "Parent" : "124"},
	{"ID" : "313", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U401", "Parent" : "124"},
	{"ID" : "314", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U402", "Parent" : "124"},
	{"ID" : "315", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U403", "Parent" : "124"},
	{"ID" : "316", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U404", "Parent" : "124"},
	{"ID" : "317", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U405", "Parent" : "124"},
	{"ID" : "318", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U406", "Parent" : "124"},
	{"ID" : "319", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U407", "Parent" : "124"},
	{"ID" : "320", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U408", "Parent" : "124"},
	{"ID" : "321", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U409", "Parent" : "124"},
	{"ID" : "322", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U410", "Parent" : "124"},
	{"ID" : "323", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U411", "Parent" : "124"},
	{"ID" : "324", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U412", "Parent" : "124"},
	{"ID" : "325", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U413", "Parent" : "124"},
	{"ID" : "326", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U414", "Parent" : "124"},
	{"ID" : "327", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U415", "Parent" : "124"},
	{"ID" : "328", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U416", "Parent" : "124"},
	{"ID" : "329", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U417", "Parent" : "124"},
	{"ID" : "330", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U418", "Parent" : "124"},
	{"ID" : "331", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U419", "Parent" : "124"},
	{"ID" : "332", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U420", "Parent" : "124"},
	{"ID" : "333", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U421", "Parent" : "124"},
	{"ID" : "334", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U422", "Parent" : "124"},
	{"ID" : "335", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U423", "Parent" : "124"},
	{"ID" : "336", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U424", "Parent" : "124"},
	{"ID" : "337", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U425", "Parent" : "124"},
	{"ID" : "338", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U426", "Parent" : "124"},
	{"ID" : "339", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U427", "Parent" : "124"},
	{"ID" : "340", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U428", "Parent" : "124"},
	{"ID" : "341", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U429", "Parent" : "124"},
	{"ID" : "342", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U430", "Parent" : "124"},
	{"ID" : "343", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U431", "Parent" : "124"},
	{"ID" : "344", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U432", "Parent" : "124"},
	{"ID" : "345", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U433", "Parent" : "124"},
	{"ID" : "346", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U434", "Parent" : "124"},
	{"ID" : "347", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U435", "Parent" : "124"},
	{"ID" : "348", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U436", "Parent" : "124"},
	{"ID" : "349", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U437", "Parent" : "124"},
	{"ID" : "350", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U438", "Parent" : "124"},
	{"ID" : "351", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U439", "Parent" : "124"},
	{"ID" : "352", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U440", "Parent" : "124"},
	{"ID" : "353", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U441", "Parent" : "124"},
	{"ID" : "354", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U442", "Parent" : "124"},
	{"ID" : "355", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U443", "Parent" : "124"},
	{"ID" : "356", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U444", "Parent" : "124"},
	{"ID" : "357", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U445", "Parent" : "124"},
	{"ID" : "358", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U446", "Parent" : "124"},
	{"ID" : "359", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U447", "Parent" : "124"},
	{"ID" : "360", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U448", "Parent" : "124"},
	{"ID" : "361", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U449", "Parent" : "124"},
	{"ID" : "362", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U450", "Parent" : "124"},
	{"ID" : "363", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U451", "Parent" : "124"},
	{"ID" : "364", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U452", "Parent" : "124"},
	{"ID" : "365", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U453", "Parent" : "124"},
	{"ID" : "366", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_32u_s_fu_3755.ResNet_mux_42_64_g8j_U454", "Parent" : "124"},
	{"ID" : "367", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801", "Parent" : "0", "Child" : ["368", "369", "370", "371", "372", "374", "376", "378", "380", "382", "384", "386", "388", "390", "392", "394", "396", "398", "400", "402", "404", "406", "408", "410", "412", "414", "416", "418", "420", "422", "424", "426", "428", "430", "431"],
		"CDFG" : "biconv16",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "4506", "EstimateLatencyMax" : "4506",
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
			{"Name" : "bottom_V_offset", "Type" : "None", "Direction" : "I"},
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "394", "SubInstance" : "grp_compute_engine_16_fu_2352", "Port" : "lut16_V"},
					{"ID" : "374", "SubInstance" : "grp_compute_engine_16_fu_2262", "Port" : "lut16_V"},
					{"ID" : "376", "SubInstance" : "grp_compute_engine_16_fu_2271", "Port" : "lut16_V"},
					{"ID" : "378", "SubInstance" : "grp_compute_engine_16_fu_2280", "Port" : "lut16_V"},
					{"ID" : "382", "SubInstance" : "grp_compute_engine_16_fu_2298", "Port" : "lut16_V"},
					{"ID" : "386", "SubInstance" : "grp_compute_engine_16_fu_2316", "Port" : "lut16_V"},
					{"ID" : "390", "SubInstance" : "grp_compute_engine_16_fu_2334", "Port" : "lut16_V"},
					{"ID" : "372", "SubInstance" : "grp_compute_engine_16_fu_2253", "Port" : "lut16_V"},
					{"ID" : "388", "SubInstance" : "grp_compute_engine_16_fu_2325", "Port" : "lut16_V"},
					{"ID" : "392", "SubInstance" : "grp_compute_engine_16_fu_2343", "Port" : "lut16_V"},
					{"ID" : "398", "SubInstance" : "grp_compute_engine_16_fu_2370", "Port" : "lut16_V"},
					{"ID" : "400", "SubInstance" : "grp_compute_engine_16_fu_2379", "Port" : "lut16_V"},
					{"ID" : "402", "SubInstance" : "grp_compute_engine_16_fu_2388", "Port" : "lut16_V"},
					{"ID" : "406", "SubInstance" : "grp_compute_engine_16_fu_2406", "Port" : "lut16_V"},
					{"ID" : "408", "SubInstance" : "grp_compute_engine_16_fu_2415", "Port" : "lut16_V"},
					{"ID" : "380", "SubInstance" : "grp_compute_engine_16_fu_2289", "Port" : "lut16_V"},
					{"ID" : "396", "SubInstance" : "grp_compute_engine_16_fu_2361", "Port" : "lut16_V"},
					{"ID" : "404", "SubInstance" : "grp_compute_engine_16_fu_2397", "Port" : "lut16_V"},
					{"ID" : "384", "SubInstance" : "grp_compute_engine_16_fu_2307", "Port" : "lut16_V"},
					{"ID" : "410", "SubInstance" : "grp_compute_engine_16_fu_2424", "Port" : "lut16_V"},
					{"ID" : "412", "SubInstance" : "grp_compute_engine_16_fu_2433", "Port" : "lut16_V"},
					{"ID" : "426", "SubInstance" : "grp_compute_engine_16_fu_2496", "Port" : "lut16_V"},
					{"ID" : "420", "SubInstance" : "grp_compute_engine_16_fu_2469", "Port" : "lut16_V"},
					{"ID" : "418", "SubInstance" : "grp_compute_engine_16_fu_2460", "Port" : "lut16_V"},
					{"ID" : "424", "SubInstance" : "grp_compute_engine_16_fu_2487", "Port" : "lut16_V"},
					{"ID" : "428", "SubInstance" : "grp_compute_engine_16_fu_2505", "Port" : "lut16_V"},
					{"ID" : "422", "SubInstance" : "grp_compute_engine_16_fu_2478", "Port" : "lut16_V"},
					{"ID" : "414", "SubInstance" : "grp_compute_engine_16_fu_2442", "Port" : "lut16_V"},
					{"ID" : "416", "SubInstance" : "grp_compute_engine_16_fu_2451", "Port" : "lut16_V"}]}]},
	{"ID" : "368", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_sum_engine_fu_2201", "Parent" : "367",
		"CDFG" : "sum_engine",
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
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "369", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_sum_engine_fu_2214", "Parent" : "367",
		"CDFG" : "sum_engine",
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
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "370", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_sum_engine_fu_2227", "Parent" : "367",
		"CDFG" : "sum_engine",
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
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "371", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_sum_engine_fu_2240", "Parent" : "367",
		"CDFG" : "sum_engine",
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
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "372", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2253", "Parent" : "367", "Child" : ["373"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "373", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2253.lut16_V_U", "Parent" : "372"},
	{"ID" : "374", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2262", "Parent" : "367", "Child" : ["375"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "375", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2262.lut16_V_U", "Parent" : "374"},
	{"ID" : "376", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2271", "Parent" : "367", "Child" : ["377"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "377", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2271.lut16_V_U", "Parent" : "376"},
	{"ID" : "378", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2280", "Parent" : "367", "Child" : ["379"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "379", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2280.lut16_V_U", "Parent" : "378"},
	{"ID" : "380", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2289", "Parent" : "367", "Child" : ["381"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "381", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2289.lut16_V_U", "Parent" : "380"},
	{"ID" : "382", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2298", "Parent" : "367", "Child" : ["383"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "383", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2298.lut16_V_U", "Parent" : "382"},
	{"ID" : "384", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2307", "Parent" : "367", "Child" : ["385"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "385", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2307.lut16_V_U", "Parent" : "384"},
	{"ID" : "386", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2316", "Parent" : "367", "Child" : ["387"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "387", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2316.lut16_V_U", "Parent" : "386"},
	{"ID" : "388", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2325", "Parent" : "367", "Child" : ["389"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "389", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2325.lut16_V_U", "Parent" : "388"},
	{"ID" : "390", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2334", "Parent" : "367", "Child" : ["391"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "391", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2334.lut16_V_U", "Parent" : "390"},
	{"ID" : "392", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2343", "Parent" : "367", "Child" : ["393"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "393", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2343.lut16_V_U", "Parent" : "392"},
	{"ID" : "394", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2352", "Parent" : "367", "Child" : ["395"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "395", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2352.lut16_V_U", "Parent" : "394"},
	{"ID" : "396", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2361", "Parent" : "367", "Child" : ["397"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "397", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2361.lut16_V_U", "Parent" : "396"},
	{"ID" : "398", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2370", "Parent" : "367", "Child" : ["399"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "399", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2370.lut16_V_U", "Parent" : "398"},
	{"ID" : "400", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2379", "Parent" : "367", "Child" : ["401"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "401", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2379.lut16_V_U", "Parent" : "400"},
	{"ID" : "402", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2388", "Parent" : "367", "Child" : ["403"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "403", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2388.lut16_V_U", "Parent" : "402"},
	{"ID" : "404", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2397", "Parent" : "367", "Child" : ["405"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "405", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2397.lut16_V_U", "Parent" : "404"},
	{"ID" : "406", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2406", "Parent" : "367", "Child" : ["407"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "407", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2406.lut16_V_U", "Parent" : "406"},
	{"ID" : "408", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2415", "Parent" : "367", "Child" : ["409"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "409", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2415.lut16_V_U", "Parent" : "408"},
	{"ID" : "410", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2424", "Parent" : "367", "Child" : ["411"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "411", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2424.lut16_V_U", "Parent" : "410"},
	{"ID" : "412", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2433", "Parent" : "367", "Child" : ["413"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "413", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2433.lut16_V_U", "Parent" : "412"},
	{"ID" : "414", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2442", "Parent" : "367", "Child" : ["415"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "415", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2442.lut16_V_U", "Parent" : "414"},
	{"ID" : "416", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2451", "Parent" : "367", "Child" : ["417"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "417", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2451.lut16_V_U", "Parent" : "416"},
	{"ID" : "418", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2460", "Parent" : "367", "Child" : ["419"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "419", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2460.lut16_V_U", "Parent" : "418"},
	{"ID" : "420", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2469", "Parent" : "367", "Child" : ["421"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "421", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2469.lut16_V_U", "Parent" : "420"},
	{"ID" : "422", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2478", "Parent" : "367", "Child" : ["423"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "423", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2478.lut16_V_U", "Parent" : "422"},
	{"ID" : "424", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2487", "Parent" : "367", "Child" : ["425"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "425", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2487.lut16_V_U", "Parent" : "424"},
	{"ID" : "426", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2496", "Parent" : "367", "Child" : ["427"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "427", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2496.lut16_V_U", "Parent" : "426"},
	{"ID" : "428", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2505", "Parent" : "367", "Child" : ["429"],
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
			{"Name" : "lut16_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "429", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.grp_compute_engine_16_fu_2505.lut16_V_U", "Parent" : "428"},
	{"ID" : "430", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.ResNet_mux_63_16_cud_U13", "Parent" : "367"},
	{"ID" : "431", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_biconv16_fu_3801.ResNet_mux_63_16_cud_U14", "Parent" : "367"},
	{"ID" : "432", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847", "Parent" : "0", "Child" : ["433", "434", "435", "436", "437", "438", "439", "440", "441", "442", "443", "444", "445", "446", "447", "448", "449", "450", "451", "452", "453", "454", "455", "456", "457", "458", "459", "460", "461", "462", "463", "464", "465", "466", "467", "468", "469", "470", "471", "472", "473", "474", "475", "476", "477", "478"],
		"CDFG" : "fill_fm_buf_bn_64u_s",
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
			{"Name" : "c", "Type" : "None", "Direction" : "I"},
			{"Name" : "c_cat", "Type" : "None", "Direction" : "I"},
			{"Name" : "out_buf0_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_49", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_17", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_33", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_50", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_18", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_34", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_51", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_19", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_35", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_52", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_20", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_36", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_53", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_21", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_37", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_54", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_22", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_38", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_55", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_23", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_39", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_56", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_24", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_40", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_57", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_25", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_41", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_58", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_26", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_42", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_59", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_27", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_43", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_60", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_28", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_44", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_61", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_13", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_29", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_45", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_62", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_14", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_30", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_46", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_63", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_15", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_31", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_47", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_16", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_32", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_48", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "433", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_646_11hbi_U477", "Parent" : "432"},
	{"ID" : "434", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U478", "Parent" : "432"},
	{"ID" : "435", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U479", "Parent" : "432"},
	{"ID" : "436", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U480", "Parent" : "432"},
	{"ID" : "437", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U481", "Parent" : "432"},
	{"ID" : "438", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U482", "Parent" : "432"},
	{"ID" : "439", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U483", "Parent" : "432"},
	{"ID" : "440", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U484", "Parent" : "432"},
	{"ID" : "441", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U485", "Parent" : "432"},
	{"ID" : "442", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U486", "Parent" : "432"},
	{"ID" : "443", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U487", "Parent" : "432"},
	{"ID" : "444", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U488", "Parent" : "432"},
	{"ID" : "445", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U489", "Parent" : "432"},
	{"ID" : "446", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U490", "Parent" : "432"},
	{"ID" : "447", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U491", "Parent" : "432"},
	{"ID" : "448", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U492", "Parent" : "432"},
	{"ID" : "449", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U493", "Parent" : "432"},
	{"ID" : "450", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U494", "Parent" : "432"},
	{"ID" : "451", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U495", "Parent" : "432"},
	{"ID" : "452", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U496", "Parent" : "432"},
	{"ID" : "453", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U497", "Parent" : "432"},
	{"ID" : "454", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U498", "Parent" : "432"},
	{"ID" : "455", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U499", "Parent" : "432"},
	{"ID" : "456", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U500", "Parent" : "432"},
	{"ID" : "457", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U501", "Parent" : "432"},
	{"ID" : "458", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U502", "Parent" : "432"},
	{"ID" : "459", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U503", "Parent" : "432"},
	{"ID" : "460", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U504", "Parent" : "432"},
	{"ID" : "461", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U505", "Parent" : "432"},
	{"ID" : "462", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U506", "Parent" : "432"},
	{"ID" : "463", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mux_42_11_ibs_U507", "Parent" : "432"},
	{"ID" : "464", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mac_muladdjbC_U508", "Parent" : "432"},
	{"ID" : "465", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mac_muladdjbC_U509", "Parent" : "432"},
	{"ID" : "466", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mac_muladdjbC_U510", "Parent" : "432"},
	{"ID" : "467", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mac_muladdjbC_U511", "Parent" : "432"},
	{"ID" : "468", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mac_muladdjbC_U512", "Parent" : "432"},
	{"ID" : "469", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mac_muladdjbC_U513", "Parent" : "432"},
	{"ID" : "470", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mac_muladdjbC_U514", "Parent" : "432"},
	{"ID" : "471", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mac_muladdjbC_U515", "Parent" : "432"},
	{"ID" : "472", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mac_muladdjbC_U516", "Parent" : "432"},
	{"ID" : "473", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mac_muladdjbC_U517", "Parent" : "432"},
	{"ID" : "474", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mac_muladdjbC_U518", "Parent" : "432"},
	{"ID" : "475", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mac_muladdjbC_U519", "Parent" : "432"},
	{"ID" : "476", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mac_muladdjbC_U520", "Parent" : "432"},
	{"ID" : "477", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mac_muladdjbC_U521", "Parent" : "432"},
	{"ID" : "478", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_64u_s_fu_3847.ResNet_mac_muladdjbC_U522", "Parent" : "432"},
	{"ID" : "479", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_32u_s_fu_4025", "Parent" : "0",
		"CDFG" : "fill_fm_buf_bn_32u_s",
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
			{"Name" : "row", "Type" : "None", "Direction" : "I"},
			{"Name" : "col", "Type" : "None", "Direction" : "I"},
			{"Name" : "c_cat", "Type" : "None", "Direction" : "I"},
			{"Name" : "out_buf0_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_17", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_18", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_19", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_20", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_21", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_22", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_23", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_24", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_25", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_26", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_27", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_28", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_13", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_29", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_14", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_30", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_15", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_31", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_63", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_buf_V_62", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_buf_V_61", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_buf_V_60", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_buf_V_59", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_buf_V_58", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_buf_V_57", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_buf_V_56", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_buf_V_55", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_buf_V_54", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_buf_V_53", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_buf_V_52", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_buf_V_51", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_buf_V_50", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_buf_V_49", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_buf_V_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_16", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_buf_V_32", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_48", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "480", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_bn_16u_s_fu_4176", "Parent" : "0",
		"CDFG" : "fill_fm_buf_bn_16u_s",
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
			{"Name" : "row", "Type" : "None", "Direction" : "I"},
			{"Name" : "col", "Type" : "None", "Direction" : "I"},
			{"Name" : "out_buf0_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_13", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_14", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "out_buf0_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_15", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "481", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252", "Parent" : "0", "Child" : ["482", "484", "486", "488", "490", "492", "494", "495", "496", "497", "498", "499", "500", "501", "502", "503", "504", "505", "506", "507", "508", "509", "510", "511", "512", "513", "514"],
		"CDFG" : "pgconv64_64u_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "327", "EstimateLatencyMax" : "327",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "bottom1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "c", "Type" : "None", "Direction" : "I"},
			{"Name" : "top_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_1_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_2_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_3_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_4_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_5_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_6_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_7_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_8_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_9_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_10_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_11_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_12_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_13_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_14_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_15_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "484", "SubInstance" : "grp_compute_engine_64_fu_449", "Port" : "lut16_V_1"},
					{"ID" : "492", "SubInstance" : "grp_compute_engine_64_fu_486", "Port" : "lut16_V_1"},
					{"ID" : "486", "SubInstance" : "grp_compute_engine_64_fu_458", "Port" : "lut16_V_1"},
					{"ID" : "490", "SubInstance" : "grp_compute_engine_64_fu_476", "Port" : "lut16_V_1"},
					{"ID" : "488", "SubInstance" : "grp_compute_engine_64_fu_467", "Port" : "lut16_V_1"},
					{"ID" : "482", "SubInstance" : "grp_compute_engine_64_fu_440", "Port" : "lut16_V_1"}]}]},
	{"ID" : "482", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.grp_compute_engine_64_fu_440", "Parent" : "481", "Child" : ["483"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "483", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.grp_compute_engine_64_fu_440.lut16_V_1_U", "Parent" : "482"},
	{"ID" : "484", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.grp_compute_engine_64_fu_449", "Parent" : "481", "Child" : ["485"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "485", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.grp_compute_engine_64_fu_449.lut16_V_1_U", "Parent" : "484"},
	{"ID" : "486", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.grp_compute_engine_64_fu_458", "Parent" : "481", "Child" : ["487"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "487", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.grp_compute_engine_64_fu_458.lut16_V_1_U", "Parent" : "486"},
	{"ID" : "488", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.grp_compute_engine_64_fu_467", "Parent" : "481", "Child" : ["489"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "489", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.grp_compute_engine_64_fu_467.lut16_V_1_U", "Parent" : "488"},
	{"ID" : "490", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.grp_compute_engine_64_fu_476", "Parent" : "481", "Child" : ["491"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "491", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.grp_compute_engine_64_fu_476.lut16_V_1_U", "Parent" : "490"},
	{"ID" : "492", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.grp_compute_engine_64_fu_486", "Parent" : "481", "Child" : ["493"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "493", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.grp_compute_engine_64_fu_486.lut16_V_1_U", "Parent" : "492"},
	{"ID" : "494", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.grp_relu_fu_498", "Parent" : "481",
		"CDFG" : "relu",
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
			{"Name" : "norm_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "495", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.grp_sum_engine_fu_519", "Parent" : "481",
		"CDFG" : "sum_engine",
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
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "496", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.grp_batch_norm_fu_533", "Parent" : "481",
		"CDFG" : "batch_norm",
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
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "497", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.ResNet_mux_42_1_1_1_U608", "Parent" : "481"},
	{"ID" : "498", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.ResNet_mux_42_1_1_1_U609", "Parent" : "481"},
	{"ID" : "499", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.ResNet_mux_42_1_1_1_U610", "Parent" : "481"},
	{"ID" : "500", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.ResNet_mux_42_1_1_1_U611", "Parent" : "481"},
	{"ID" : "501", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.ResNet_mux_42_1_1_1_U612", "Parent" : "481"},
	{"ID" : "502", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.ResNet_mux_42_1_1_1_U613", "Parent" : "481"},
	{"ID" : "503", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.ResNet_mux_42_1_1_1_U614", "Parent" : "481"},
	{"ID" : "504", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.ResNet_mux_42_1_1_1_U615", "Parent" : "481"},
	{"ID" : "505", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.ResNet_mux_42_1_1_1_U616", "Parent" : "481"},
	{"ID" : "506", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.ResNet_mux_42_1_1_1_U617", "Parent" : "481"},
	{"ID" : "507", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.ResNet_mux_42_1_1_1_U618", "Parent" : "481"},
	{"ID" : "508", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.ResNet_mux_42_1_1_1_U619", "Parent" : "481"},
	{"ID" : "509", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.ResNet_mux_42_1_1_1_U620", "Parent" : "481"},
	{"ID" : "510", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.ResNet_mux_42_1_1_1_U621", "Parent" : "481"},
	{"ID" : "511", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.ResNet_mux_42_1_1_1_U622", "Parent" : "481"},
	{"ID" : "512", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.ResNet_mux_42_1_1_1_U623", "Parent" : "481"},
	{"ID" : "513", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.ResNet_mux_42_1_1_1_U624", "Parent" : "481"},
	{"ID" : "514", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_64u_s_fu_4252.ResNet_mux_42_1_1_1_U625", "Parent" : "481"},
	{"ID" : "515", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_4298", "Parent" : "0", "Child" : ["516", "517", "518", "519", "520", "521", "522", "523", "524", "525", "526", "527"],
		"CDFG" : "matmul",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "147", "EstimateLatencyMax" : "147",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "bottom_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_33_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_35_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_36_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_37_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_38_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_39_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_40_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_41_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_42_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_43_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_44_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_45_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_46_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_47_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_48_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_49_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_50_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_51_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_52_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_53_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_54_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_55_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_56_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_57_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_58_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_59_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_60_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_61_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_62_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bottom_63_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "top", "Type" : "MAXI", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "top_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "top_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "top_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "top_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "linear_weight_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "linear_weight_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "linear_weight_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "linear_weight_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "linear_weight_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "linear_weight_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "linear_weight_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "linear_weight_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "linear_weight_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "linear_weight_V_9", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "516", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_4298.linear_weight_V_0_U", "Parent" : "515"},
	{"ID" : "517", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_4298.linear_weight_V_1_U", "Parent" : "515"},
	{"ID" : "518", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_4298.linear_weight_V_2_U", "Parent" : "515"},
	{"ID" : "519", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_4298.linear_weight_V_3_U", "Parent" : "515"},
	{"ID" : "520", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_4298.linear_weight_V_4_U", "Parent" : "515"},
	{"ID" : "521", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_4298.linear_weight_V_5_U", "Parent" : "515"},
	{"ID" : "522", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_4298.linear_weight_V_6_U", "Parent" : "515"},
	{"ID" : "523", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_4298.linear_weight_V_7_U", "Parent" : "515"},
	{"ID" : "524", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_4298.linear_weight_V_8_U", "Parent" : "515"},
	{"ID" : "525", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_4298.linear_weight_V_9_U", "Parent" : "515"},
	{"ID" : "526", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_4298.ResNet_mux_646_12udo_U645", "Parent" : "515"},
	{"ID" : "527", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_matmul_fu_4298.ResNet_mux_104_12vdy_U646", "Parent" : "515"},
	{"ID" : "528", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_16u_s_fu_4389", "Parent" : "0", "Child" : ["529", "531", "533"],
		"CDFG" : "pgconv64s2_16u_s",
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
			{"Name" : "bottom1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "row_off", "Type" : "None", "Direction" : "I"},
			{"Name" : "col_off", "Type" : "None", "Direction" : "I"},
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
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "529", "SubInstance" : "grp_compute_engine_64_fu_575", "Port" : "lut16_V_1"},
					{"ID" : "531", "SubInstance" : "grp_compute_engine_64_fu_585", "Port" : "lut16_V_1"}]}]},
	{"ID" : "529", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_16u_s_fu_4389.grp_compute_engine_64_fu_575", "Parent" : "528", "Child" : ["530"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "530", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_16u_s_fu_4389.grp_compute_engine_64_fu_575.lut16_V_1_U", "Parent" : "529"},
	{"ID" : "531", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_16u_s_fu_4389.grp_compute_engine_64_fu_585", "Parent" : "528", "Child" : ["532"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "532", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_16u_s_fu_4389.grp_compute_engine_64_fu_585.lut16_V_1_U", "Parent" : "531"},
	{"ID" : "533", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64s2_16u_s_fu_4389.sum_V_ret_sum_engine_fu_595", "Parent" : "528",
		"CDFG" : "sum_engine",
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
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "534", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_fu_4433", "Parent" : "0", "Child" : ["535"],
		"CDFG" : "fill_fm_buf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "145", "EstimateLatencyMax" : "145",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "row", "Type" : "None", "Direction" : "I"},
			{"Name" : "col", "Type" : "None", "Direction" : "I"},
			{"Name" : "fm_buf_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_31", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_32", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_33", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_34", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_35", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_36", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_37", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_38", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_39", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_40", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_41", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_42", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_43", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_44", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_45", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_46", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_47", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_48", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_49", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_50", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_51", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_52", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_53", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_54", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_55", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_56", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_57", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_58", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_59", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_60", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_61", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_62", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_buf_V_63", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_buf_V_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "input_buf_V_0", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "535", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fill_fm_buf_fu_4433.input_buf_V_0_U", "Parent" : "534"},
	{"ID" : "536", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_16u_s_fu_4582", "Parent" : "0", "Child" : ["537", "539", "541", "542", "543"],
		"CDFG" : "pgconv64_16u_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "325", "EstimateLatencyMax" : "325",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "bottom1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "top_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_1_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_2_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_3_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_4_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_5_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_6_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_7_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_8_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_9_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_10_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_11_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_12_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_13_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_14_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_15_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "539", "SubInstance" : "grp_compute_engine_64_fu_436", "Port" : "lut16_V_1"},
					{"ID" : "537", "SubInstance" : "grp_compute_engine_64_fu_426", "Port" : "lut16_V_1"}]}]},
	{"ID" : "537", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_16u_s_fu_4582.grp_compute_engine_64_fu_426", "Parent" : "536", "Child" : ["538"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "538", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_16u_s_fu_4582.grp_compute_engine_64_fu_426.lut16_V_1_U", "Parent" : "537"},
	{"ID" : "539", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_16u_s_fu_4582.grp_compute_engine_64_fu_436", "Parent" : "536", "Child" : ["540"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "540", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_16u_s_fu_4582.grp_compute_engine_64_fu_436.lut16_V_1_U", "Parent" : "539"},
	{"ID" : "541", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_16u_s_fu_4582.op_V_assign_relu_fu_446", "Parent" : "536",
		"CDFG" : "relu",
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
			{"Name" : "norm_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "542", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_16u_s_fu_4582.sum_V_ret_sum_engine_fu_467", "Parent" : "536",
		"CDFG" : "sum_engine",
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
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "543", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_16u_s_fu_4582.norm_V_batch_norm_fu_481", "Parent" : "536",
		"CDFG" : "batch_norm",
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
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "544", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_32u_s_fu_4622", "Parent" : "0", "Child" : ["545", "547", "549", "550", "551"],
		"CDFG" : "pgconv64_32u_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "325", "EstimateLatencyMax" : "325",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "bottom1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "top_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_1_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_2_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_3_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_4_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_5_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_6_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_7_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_8_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_9_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_10_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_11_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_12_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_13_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_14_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "top_15_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "lut16_V_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "545", "SubInstance" : "grp_compute_engine_64_fu_426", "Port" : "lut16_V_1"},
					{"ID" : "547", "SubInstance" : "grp_compute_engine_64_fu_436", "Port" : "lut16_V_1"}]}]},
	{"ID" : "545", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_32u_s_fu_4622.grp_compute_engine_64_fu_426", "Parent" : "544", "Child" : ["546"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "546", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_32u_s_fu_4622.grp_compute_engine_64_fu_426.lut16_V_1_U", "Parent" : "545"},
	{"ID" : "547", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_32u_s_fu_4622.grp_compute_engine_64_fu_436", "Parent" : "544", "Child" : ["548"],
		"CDFG" : "compute_engine_64",
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
	{"ID" : "548", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_32u_s_fu_4622.grp_compute_engine_64_fu_436.lut16_V_1_U", "Parent" : "547"},
	{"ID" : "549", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_32u_s_fu_4622.op_V_assign_relu_fu_446", "Parent" : "544",
		"CDFG" : "relu",
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
			{"Name" : "norm_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "550", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_32u_s_fu_4622.sum_V_ret_sum_engine_fu_467", "Parent" : "544",
		"CDFG" : "sum_engine",
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
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "551", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pgconv64_32u_s_fu_4622.norm_V_batch_norm_fu_481", "Parent" : "544",
		"CDFG" : "batch_norm",
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
			{"Name" : "sum_V", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	ResNet {
		IMG {Type I LastRead 9 FirstWrite -1}
		BUS32 {Type O LastRead 4 FirstWrite 5}
		image_thermo_V {Type I LastRead 0 FirstWrite -1}
		result {Type I LastRead 0 FirstWrite -1}
		conv1_weight_V {Type I LastRead -1 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}
		fm_buf_V_0 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_1 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_2 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_3 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_4 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_5 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_6 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_7 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_8 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_9 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_10 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_11 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_12 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_13 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_14 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_15 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_16 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_17 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_18 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_19 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_20 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_21 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_22 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_23 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_24 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_25 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_26 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_27 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_28 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_29 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_30 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_31 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_32 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_33 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_34 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_35 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_36 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_37 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_38 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_39 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_40 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_41 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_42 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_43 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_44 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_45 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_46 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_47 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_48 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_49 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_50 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_51 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_52 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_53 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_54 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_55 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_56 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_57 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_58 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_59 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_60 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_61 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_62 {Type IO LastRead -1 FirstWrite -1}
		fm_buf_V_63 {Type IO LastRead -1 FirstWrite -1}
		input_buf_V_1 {Type IO LastRead -1 FirstWrite -1}
		input_buf_V_0 {Type O LastRead -1 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}
		out_buf0_V_0 {Type IO LastRead -1 FirstWrite -1}
		out_buf0_V_1 {Type IO LastRead -1 FirstWrite -1}
		out_buf0_V_2 {Type IO LastRead -1 FirstWrite -1}
		out_buf0_V_3 {Type IO LastRead -1 FirstWrite -1}
		out_buf0_V_4 {Type IO LastRead -1 FirstWrite -1}
		out_buf0_V_5 {Type IO LastRead -1 FirstWrite -1}
		out_buf0_V_6 {Type IO LastRead -1 FirstWrite -1}
		out_buf0_V_7 {Type IO LastRead -1 FirstWrite -1}
		out_buf0_V_8 {Type IO LastRead -1 FirstWrite -1}
		out_buf0_V_9 {Type IO LastRead -1 FirstWrite -1}
		out_buf0_V_10 {Type IO LastRead -1 FirstWrite -1}
		out_buf0_V_11 {Type IO LastRead -1 FirstWrite -1}
		out_buf0_V_12 {Type IO LastRead -1 FirstWrite -1}
		out_buf0_V_13 {Type IO LastRead -1 FirstWrite -1}
		out_buf0_V_14 {Type IO LastRead -1 FirstWrite -1}
		out_buf0_V_15 {Type IO LastRead -1 FirstWrite -1}
		linear_weight_V_0 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_1 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_2 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_3 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_4 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_5 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_6 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_7 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_8 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_9 {Type I LastRead -1 FirstWrite -1}}
	pgconv64s2_32u_s {
		bottom1_V {Type I LastRead 6 FirstWrite -1}
		c {Type I LastRead 0 FirstWrite -1}
		row_off {Type I LastRead 0 FirstWrite -1}
		col_off {Type I LastRead 0 FirstWrite -1}
		top_0_V {Type IO LastRead 6 FirstWrite 10}
		top_1_V {Type IO LastRead 6 FirstWrite 10}
		top_2_V {Type IO LastRead 6 FirstWrite 10}
		top_3_V {Type IO LastRead 6 FirstWrite 10}
		top_4_V {Type IO LastRead 7 FirstWrite 11}
		top_5_V {Type IO LastRead 7 FirstWrite 11}
		top_6_V {Type IO LastRead 7 FirstWrite 11}
		top_7_V {Type IO LastRead 7 FirstWrite 11}
		top_8_V {Type IO LastRead 8 FirstWrite 12}
		top_9_V {Type IO LastRead 8 FirstWrite 12}
		top_10_V {Type IO LastRead 8 FirstWrite 12}
		top_11_V {Type IO LastRead 8 FirstWrite 12}
		top_12_V {Type IO LastRead 9 FirstWrite 13}
		top_13_V {Type IO LastRead 9 FirstWrite 13}
		top_14_V {Type IO LastRead 9 FirstWrite 13}
		top_15_V {Type IO LastRead 9 FirstWrite 13}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}}
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
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}}
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}}
	biconv16 {
		bottom_0_V {Type I LastRead 6 FirstWrite -1}
		bottom_1_V {Type I LastRead 6 FirstWrite -1}
		bottom_2_V {Type I LastRead 6 FirstWrite -1}
		bottom_3_V {Type I LastRead 6 FirstWrite -1}
		bottom_4_V {Type I LastRead 6 FirstWrite -1}
		bottom_5_V {Type I LastRead 6 FirstWrite -1}
		bottom_V_offset {Type I LastRead 0 FirstWrite -1}
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
		top_0_V {Type IO LastRead 6 FirstWrite 8}
		top_1_V {Type IO LastRead 6 FirstWrite 8}
		top_2_V {Type IO LastRead 6 FirstWrite 8}
		top_3_V {Type IO LastRead 6 FirstWrite 8}
		top_4_V {Type IO LastRead 6 FirstWrite 8}
		top_5_V {Type IO LastRead 6 FirstWrite 8}
		top_6_V {Type IO LastRead 6 FirstWrite 8}
		top_7_V {Type IO LastRead 6 FirstWrite 8}
		top_8_V {Type IO LastRead 6 FirstWrite 9}
		top_9_V {Type IO LastRead 6 FirstWrite 9}
		top_10_V {Type IO LastRead 6 FirstWrite 9}
		top_11_V {Type IO LastRead 6 FirstWrite 9}
		top_12_V {Type IO LastRead 6 FirstWrite 10}
		top_13_V {Type IO LastRead 6 FirstWrite 10}
		top_14_V {Type IO LastRead 6 FirstWrite 10}
		top_15_V {Type IO LastRead 6 FirstWrite 10}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
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
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	compute_engine_16 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V {Type I LastRead -1 FirstWrite -1}}
	fill_fm_buf_bn_64u_s {
		c {Type I LastRead 0 FirstWrite -1}
		c_cat {Type I LastRead 0 FirstWrite -1}
		out_buf0_V_1 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_49 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_1 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_17 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_33 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_2 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_50 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_2 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_18 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_34 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_3 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_51 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_3 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_19 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_35 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_4 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_52 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_4 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_20 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_36 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_5 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_53 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_5 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_21 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_37 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_6 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_54 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_6 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_22 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_38 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_7 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_55 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_7 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_23 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_39 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_8 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_56 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_8 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_24 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_40 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_9 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_57 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_9 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_25 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_41 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_10 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_58 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_10 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_26 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_42 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_11 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_59 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_11 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_27 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_43 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_12 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_60 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_12 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_28 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_44 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_13 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_61 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_13 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_29 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_45 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_14 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_62 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_14 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_30 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_46 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_15 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_63 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_15 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_31 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_47 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_0 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_0 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_16 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_32 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_48 {Type IO LastRead 1 FirstWrite 3}}
	fill_fm_buf_bn_32u_s {
		row {Type I LastRead 0 FirstWrite -1}
		col {Type I LastRead 0 FirstWrite -1}
		c_cat {Type I LastRead 0 FirstWrite -1}
		out_buf0_V_1 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_1 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_17 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_2 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_2 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_18 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_3 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_3 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_19 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_4 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_4 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_20 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_5 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_5 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_21 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_6 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_6 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_22 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_7 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_7 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_23 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_8 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_8 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_24 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_9 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_9 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_25 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_10 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_10 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_26 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_11 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_11 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_27 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_12 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_12 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_28 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_13 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_13 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_29 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_14 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_14 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_30 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_15 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_15 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_31 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_0 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_63 {Type O LastRead -1 FirstWrite 3}
		fm_buf_V_62 {Type O LastRead -1 FirstWrite 3}
		fm_buf_V_61 {Type O LastRead -1 FirstWrite 3}
		fm_buf_V_60 {Type O LastRead -1 FirstWrite 3}
		fm_buf_V_59 {Type O LastRead -1 FirstWrite 3}
		fm_buf_V_58 {Type O LastRead -1 FirstWrite 3}
		fm_buf_V_57 {Type O LastRead -1 FirstWrite 3}
		fm_buf_V_56 {Type O LastRead -1 FirstWrite 3}
		fm_buf_V_55 {Type O LastRead -1 FirstWrite 3}
		fm_buf_V_54 {Type O LastRead -1 FirstWrite 3}
		fm_buf_V_53 {Type O LastRead -1 FirstWrite 3}
		fm_buf_V_52 {Type O LastRead -1 FirstWrite 3}
		fm_buf_V_51 {Type O LastRead -1 FirstWrite 3}
		fm_buf_V_50 {Type O LastRead -1 FirstWrite 3}
		fm_buf_V_49 {Type O LastRead -1 FirstWrite 3}
		fm_buf_V_0 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_16 {Type IO LastRead 1 FirstWrite 3}
		fm_buf_V_32 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_48 {Type IO LastRead 1 FirstWrite 3}}
	fill_fm_buf_bn_16u_s {
		row {Type I LastRead 0 FirstWrite -1}
		col {Type I LastRead 0 FirstWrite -1}
		out_buf0_V_0 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_0 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_1 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_1 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_2 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_2 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_3 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_3 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_4 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_4 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_5 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_5 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_6 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_6 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_7 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_7 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_8 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_8 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_9 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_9 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_10 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_10 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_11 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_11 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_12 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_12 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_13 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_13 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_14 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_14 {Type IO LastRead 1 FirstWrite 3}
		out_buf0_V_15 {Type I LastRead 1 FirstWrite -1}
		fm_buf_V_15 {Type IO LastRead 1 FirstWrite 3}}
	pgconv64_64u_s {
		bottom1_V {Type I LastRead 6 FirstWrite -1}
		c {Type I LastRead 0 FirstWrite -1}
		top_0_V {Type O LastRead -1 FirstWrite 9}
		top_1_V {Type O LastRead -1 FirstWrite 10}
		top_2_V {Type O LastRead -1 FirstWrite 11}
		top_3_V {Type O LastRead -1 FirstWrite 11}
		top_4_V {Type O LastRead -1 FirstWrite 11}
		top_5_V {Type O LastRead -1 FirstWrite 11}
		top_6_V {Type O LastRead -1 FirstWrite 11}
		top_7_V {Type O LastRead -1 FirstWrite 11}
		top_8_V {Type O LastRead -1 FirstWrite 11}
		top_9_V {Type O LastRead -1 FirstWrite 11}
		top_10_V {Type O LastRead -1 FirstWrite 11}
		top_11_V {Type O LastRead -1 FirstWrite 11}
		top_12_V {Type O LastRead -1 FirstWrite 11}
		top_13_V {Type O LastRead -1 FirstWrite 11}
		top_14_V {Type O LastRead -1 FirstWrite 11}
		top_15_V {Type O LastRead -1 FirstWrite 11}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}}
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
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}}
	matmul {
		bottom_0_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_1_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_2_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_3_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_4_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_5_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_6_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_7_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_8_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_9_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_10_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_11_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_12_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_13_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_14_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_15_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_16_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_17_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_18_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_19_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_20_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_21_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_22_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_23_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_24_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_25_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_26_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_27_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_28_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_29_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_30_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_31_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_32_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_33_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_34_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_35_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_36_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_37_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_38_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_39_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_40_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_41_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_42_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_43_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_44_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_45_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_46_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_47_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_48_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_49_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_50_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_51_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_52_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_53_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_54_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_55_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_56_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_57_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_58_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_59_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_60_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_61_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_62_V_read {Type I LastRead 0 FirstWrite -1}
		bottom_63_V_read {Type I LastRead 0 FirstWrite -1}
		top {Type O LastRead 4 FirstWrite 5}
		top_offset {Type I LastRead 0 FirstWrite -1}
		linear_weight_V_0 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_1 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_2 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_3 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_4 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_5 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_6 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_7 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_8 {Type I LastRead -1 FirstWrite -1}
		linear_weight_V_9 {Type I LastRead -1 FirstWrite -1}}
	pgconv64s2_16u_s {
		bottom1_V {Type I LastRead 6 FirstWrite -1}
		row_off {Type I LastRead 0 FirstWrite -1}
		col_off {Type I LastRead 0 FirstWrite -1}
		top_0_V {Type IO LastRead 5 FirstWrite 9}
		top_1_V {Type IO LastRead 5 FirstWrite 9}
		top_2_V {Type IO LastRead 5 FirstWrite 9}
		top_3_V {Type IO LastRead 5 FirstWrite 9}
		top_4_V {Type IO LastRead 5 FirstWrite 9}
		top_5_V {Type IO LastRead 5 FirstWrite 9}
		top_6_V {Type IO LastRead 5 FirstWrite 9}
		top_7_V {Type IO LastRead 5 FirstWrite 9}
		top_8_V {Type IO LastRead 5 FirstWrite 9}
		top_9_V {Type IO LastRead 5 FirstWrite 9}
		top_10_V {Type IO LastRead 5 FirstWrite 9}
		top_11_V {Type IO LastRead 5 FirstWrite 9}
		top_12_V {Type IO LastRead 5 FirstWrite 9}
		top_13_V {Type IO LastRead 5 FirstWrite 9}
		top_14_V {Type IO LastRead 5 FirstWrite 9}
		top_15_V {Type IO LastRead 5 FirstWrite 9}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
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
	fill_fm_buf {
		row {Type I LastRead 0 FirstWrite -1}
		col {Type I LastRead 0 FirstWrite -1}
		fm_buf_V_0 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_1 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_2 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_3 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_4 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_5 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_6 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_7 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_8 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_9 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_10 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_11 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_12 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_13 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_14 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_15 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_16 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_17 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_18 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_19 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_20 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_21 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_22 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_23 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_24 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_25 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_26 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_27 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_28 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_29 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_30 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_31 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_32 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_33 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_34 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_35 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_36 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_37 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_38 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_39 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_40 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_41 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_42 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_43 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_44 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_45 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_46 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_47 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_48 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_49 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_50 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_51 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_52 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_53 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_54 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_55 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_56 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_57 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_58 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_59 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_60 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_61 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_62 {Type I LastRead 2 FirstWrite -1}
		fm_buf_V_63 {Type I LastRead 2 FirstWrite -1}
		input_buf_V_1 {Type O LastRead -1 FirstWrite 3}
		input_buf_V_0 {Type O LastRead -1 FirstWrite -1}}
	pgconv64_16u_s {
		bottom1_V {Type I LastRead 6 FirstWrite -1}
		top_0_V {Type O LastRead -1 FirstWrite 9}
		top_1_V {Type O LastRead -1 FirstWrite 9}
		top_2_V {Type O LastRead -1 FirstWrite 9}
		top_3_V {Type O LastRead -1 FirstWrite 9}
		top_4_V {Type O LastRead -1 FirstWrite 9}
		top_5_V {Type O LastRead -1 FirstWrite 9}
		top_6_V {Type O LastRead -1 FirstWrite 9}
		top_7_V {Type O LastRead -1 FirstWrite 9}
		top_8_V {Type O LastRead -1 FirstWrite 9}
		top_9_V {Type O LastRead -1 FirstWrite 9}
		top_10_V {Type O LastRead -1 FirstWrite 9}
		top_11_V {Type O LastRead -1 FirstWrite 9}
		top_12_V {Type O LastRead -1 FirstWrite 9}
		top_13_V {Type O LastRead -1 FirstWrite 9}
		top_14_V {Type O LastRead -1 FirstWrite 9}
		top_15_V {Type O LastRead -1 FirstWrite 9}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}}
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
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}}
	pgconv64_32u_s {
		bottom1_V {Type I LastRead 6 FirstWrite -1}
		top_0_V {Type O LastRead -1 FirstWrite 9}
		top_1_V {Type O LastRead -1 FirstWrite 9}
		top_2_V {Type O LastRead -1 FirstWrite 9}
		top_3_V {Type O LastRead -1 FirstWrite 9}
		top_4_V {Type O LastRead -1 FirstWrite 9}
		top_5_V {Type O LastRead -1 FirstWrite 9}
		top_6_V {Type O LastRead -1 FirstWrite 9}
		top_7_V {Type O LastRead -1 FirstWrite 9}
		top_8_V {Type O LastRead -1 FirstWrite 9}
		top_9_V {Type O LastRead -1 FirstWrite 9}
		top_10_V {Type O LastRead -1 FirstWrite 9}
		top_11_V {Type O LastRead -1 FirstWrite 9}
		top_12_V {Type O LastRead -1 FirstWrite 9}
		top_13_V {Type O LastRead -1 FirstWrite 9}
		top_14_V {Type O LastRead -1 FirstWrite 9}
		top_15_V {Type O LastRead -1 FirstWrite 9}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	compute_engine_64 {
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}
		lut16_V_1 {Type I LastRead -1 FirstWrite -1}}
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}}
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
	batch_norm {
		sum_V {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "163084", "Max" : "163084"}
	, {"Name" : "Interval", "Min" : "163085", "Max" : "163085"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
	{"Pipeline" : "3", "EnableSignal" : "ap_enable_pp3"}
]}

set Spec2ImplPortList { 
	IMG { m_axi {  { m_axi_IMG_AWVALID VALID 1 1 }  { m_axi_IMG_AWREADY READY 0 1 }  { m_axi_IMG_AWADDR ADDR 1 32 }  { m_axi_IMG_AWID ID 1 1 }  { m_axi_IMG_AWLEN LEN 1 8 }  { m_axi_IMG_AWSIZE SIZE 1 3 }  { m_axi_IMG_AWBURST BURST 1 2 }  { m_axi_IMG_AWLOCK LOCK 1 2 }  { m_axi_IMG_AWCACHE CACHE 1 4 }  { m_axi_IMG_AWPROT PROT 1 3 }  { m_axi_IMG_AWQOS QOS 1 4 }  { m_axi_IMG_AWREGION REGION 1 4 }  { m_axi_IMG_AWUSER USER 1 1 }  { m_axi_IMG_WVALID VALID 1 1 }  { m_axi_IMG_WREADY READY 0 1 }  { m_axi_IMG_WDATA DATA 1 32 }  { m_axi_IMG_WSTRB STRB 1 4 }  { m_axi_IMG_WLAST LAST 1 1 }  { m_axi_IMG_WID ID 1 1 }  { m_axi_IMG_WUSER USER 1 1 }  { m_axi_IMG_ARVALID VALID 1 1 }  { m_axi_IMG_ARREADY READY 0 1 }  { m_axi_IMG_ARADDR ADDR 1 32 }  { m_axi_IMG_ARID ID 1 1 }  { m_axi_IMG_ARLEN LEN 1 8 }  { m_axi_IMG_ARSIZE SIZE 1 3 }  { m_axi_IMG_ARBURST BURST 1 2 }  { m_axi_IMG_ARLOCK LOCK 1 2 }  { m_axi_IMG_ARCACHE CACHE 1 4 }  { m_axi_IMG_ARPROT PROT 1 3 }  { m_axi_IMG_ARQOS QOS 1 4 }  { m_axi_IMG_ARREGION REGION 1 4 }  { m_axi_IMG_ARUSER USER 1 1 }  { m_axi_IMG_RVALID VALID 0 1 }  { m_axi_IMG_RREADY READY 1 1 }  { m_axi_IMG_RDATA DATA 0 32 }  { m_axi_IMG_RLAST LAST 0 1 }  { m_axi_IMG_RID ID 0 1 }  { m_axi_IMG_RUSER USER 0 1 }  { m_axi_IMG_RRESP RESP 0 2 }  { m_axi_IMG_BVALID VALID 0 1 }  { m_axi_IMG_BREADY READY 1 1 }  { m_axi_IMG_BRESP RESP 0 2 }  { m_axi_IMG_BID ID 0 1 }  { m_axi_IMG_BUSER USER 0 1 } } }
	BUS32 { m_axi {  { m_axi_BUS32_AWVALID VALID 1 1 }  { m_axi_BUS32_AWREADY READY 0 1 }  { m_axi_BUS32_AWADDR ADDR 1 32 }  { m_axi_BUS32_AWID ID 1 1 }  { m_axi_BUS32_AWLEN LEN 1 8 }  { m_axi_BUS32_AWSIZE SIZE 1 3 }  { m_axi_BUS32_AWBURST BURST 1 2 }  { m_axi_BUS32_AWLOCK LOCK 1 2 }  { m_axi_BUS32_AWCACHE CACHE 1 4 }  { m_axi_BUS32_AWPROT PROT 1 3 }  { m_axi_BUS32_AWQOS QOS 1 4 }  { m_axi_BUS32_AWREGION REGION 1 4 }  { m_axi_BUS32_AWUSER USER 1 1 }  { m_axi_BUS32_WVALID VALID 1 1 }  { m_axi_BUS32_WREADY READY 0 1 }  { m_axi_BUS32_WDATA DATA 1 32 }  { m_axi_BUS32_WSTRB STRB 1 4 }  { m_axi_BUS32_WLAST LAST 1 1 }  { m_axi_BUS32_WID ID 1 1 }  { m_axi_BUS32_WUSER USER 1 1 }  { m_axi_BUS32_ARVALID VALID 1 1 }  { m_axi_BUS32_ARREADY READY 0 1 }  { m_axi_BUS32_ARADDR ADDR 1 32 }  { m_axi_BUS32_ARID ID 1 1 }  { m_axi_BUS32_ARLEN LEN 1 8 }  { m_axi_BUS32_ARSIZE SIZE 1 3 }  { m_axi_BUS32_ARBURST BURST 1 2 }  { m_axi_BUS32_ARLOCK LOCK 1 2 }  { m_axi_BUS32_ARCACHE CACHE 1 4 }  { m_axi_BUS32_ARPROT PROT 1 3 }  { m_axi_BUS32_ARQOS QOS 1 4 }  { m_axi_BUS32_ARREGION REGION 1 4 }  { m_axi_BUS32_ARUSER USER 1 1 }  { m_axi_BUS32_RVALID VALID 0 1 }  { m_axi_BUS32_RREADY READY 1 1 }  { m_axi_BUS32_RDATA DATA 0 32 }  { m_axi_BUS32_RLAST LAST 0 1 }  { m_axi_BUS32_RID ID 0 1 }  { m_axi_BUS32_RUSER USER 0 1 }  { m_axi_BUS32_RRESP RESP 0 2 }  { m_axi_BUS32_BVALID VALID 0 1 }  { m_axi_BUS32_BREADY READY 1 1 }  { m_axi_BUS32_BRESP RESP 0 2 }  { m_axi_BUS32_BID ID 0 1 }  { m_axi_BUS32_BUSER USER 0 1 } } }
}

set busDeadlockParameterList { 
	{ IMG { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
	{ BUS32 { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
	{ IMG 1 }
	{ BUS32 1 }
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
	{ IMG 1 }
	{ BUS32 1 }
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
