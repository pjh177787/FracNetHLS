set moduleName load_conv1x1_weights
set isTopModule 0
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
set C_modelName {load_conv1x1_weights}
set C_modelType { int 1024 }
set C_modelArgList {
	{ conv_weight_1x1_all_V int 512 regular {axi_master 0}  }
	{ conv_weight_1x1_all_V_offset int 26 regular  }
	{ conv1x1_weight_ptr int 13 regular  }
	{ c_out int 6 regular  }
	{ c_in int 6 regular  }
	{ in_channels_after_pa int 7 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "conv_weight_1x1_all_V", "interface" : "axi_master", "bitwidth" : 512, "direction" : "READONLY"} , 
 	{ "Name" : "conv_weight_1x1_all_V_offset", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "conv1x1_weight_ptr", "interface" : "wire", "bitwidth" : 13, "direction" : "READONLY"} , 
 	{ "Name" : "c_out", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "c_in", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "in_channels_after_pa", "interface" : "wire", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 1024} ]}
# RTL Port declarations: 
set portNum 88
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ m_axi_conv_weight_1x1_all_V_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_AWADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_AWLEN sc_out sc_lv 32 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_WDATA sc_out sc_lv 512 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_WSTRB sc_out sc_lv 64 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_ARADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_ARLEN sc_out sc_lv 32 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_RDATA sc_in sc_lv 512 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_1x1_all_V_BUSER sc_in sc_lv 1 signal 0 } 
	{ conv_weight_1x1_all_V_offset sc_in sc_lv 26 signal 1 } 
	{ conv1x1_weight_ptr sc_in sc_lv 13 signal 2 } 
	{ c_out sc_in sc_lv 6 signal 3 } 
	{ c_in sc_in sc_lv 6 signal 4 } 
	{ in_channels_after_pa sc_in sc_lv 7 signal 5 } 
	{ ap_return_0 sc_out sc_lv 32 signal -1 } 
	{ ap_return_1 sc_out sc_lv 32 signal -1 } 
	{ ap_return_2 sc_out sc_lv 32 signal -1 } 
	{ ap_return_3 sc_out sc_lv 32 signal -1 } 
	{ ap_return_4 sc_out sc_lv 32 signal -1 } 
	{ ap_return_5 sc_out sc_lv 32 signal -1 } 
	{ ap_return_6 sc_out sc_lv 32 signal -1 } 
	{ ap_return_7 sc_out sc_lv 32 signal -1 } 
	{ ap_return_8 sc_out sc_lv 32 signal -1 } 
	{ ap_return_9 sc_out sc_lv 32 signal -1 } 
	{ ap_return_10 sc_out sc_lv 32 signal -1 } 
	{ ap_return_11 sc_out sc_lv 32 signal -1 } 
	{ ap_return_12 sc_out sc_lv 32 signal -1 } 
	{ ap_return_13 sc_out sc_lv 32 signal -1 } 
	{ ap_return_14 sc_out sc_lv 32 signal -1 } 
	{ ap_return_15 sc_out sc_lv 32 signal -1 } 
	{ ap_return_16 sc_out sc_lv 32 signal -1 } 
	{ ap_return_17 sc_out sc_lv 32 signal -1 } 
	{ ap_return_18 sc_out sc_lv 32 signal -1 } 
	{ ap_return_19 sc_out sc_lv 32 signal -1 } 
	{ ap_return_20 sc_out sc_lv 32 signal -1 } 
	{ ap_return_21 sc_out sc_lv 32 signal -1 } 
	{ ap_return_22 sc_out sc_lv 32 signal -1 } 
	{ ap_return_23 sc_out sc_lv 32 signal -1 } 
	{ ap_return_24 sc_out sc_lv 32 signal -1 } 
	{ ap_return_25 sc_out sc_lv 32 signal -1 } 
	{ ap_return_26 sc_out sc_lv 32 signal -1 } 
	{ ap_return_27 sc_out sc_lv 32 signal -1 } 
	{ ap_return_28 sc_out sc_lv 32 signal -1 } 
	{ ap_return_29 sc_out sc_lv 32 signal -1 } 
	{ ap_return_30 sc_out sc_lv 32 signal -1 } 
	{ ap_return_31 sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "AWVALID" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "AWREADY" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "AWADDR" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "AWID" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "AWLEN" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "AWBURST" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "AWPROT" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "AWQOS" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "AWREGION" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "AWUSER" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "WVALID" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "WREADY" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "WDATA" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "WSTRB" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "WLAST" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "WID" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "WUSER" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "ARVALID" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "ARREADY" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "ARADDR" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "ARID" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "ARLEN" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "ARBURST" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "ARPROT" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "ARQOS" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "ARREGION" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "ARUSER" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "RVALID" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "RREADY" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "RDATA" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "RLAST" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "RID" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "RUSER" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "RRESP" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "BVALID" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "BREADY" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "BRESP" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "BID" }} , 
 	{ "name": "m_axi_conv_weight_1x1_all_V_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V", "role": "BUSER" }} , 
 	{ "name": "conv_weight_1x1_all_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "conv_weight_1x1_all_V_offset", "role": "default" }} , 
 	{ "name": "conv1x1_weight_ptr", "direction": "in", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "conv1x1_weight_ptr", "role": "default" }} , 
 	{ "name": "c_out", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "c_out", "role": "default" }} , 
 	{ "name": "c_in", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "c_in", "role": "default" }} , 
 	{ "name": "in_channels_after_pa", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "in_channels_after_pa", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }} , 
 	{ "name": "ap_return_8", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_8", "role": "default" }} , 
 	{ "name": "ap_return_9", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_9", "role": "default" }} , 
 	{ "name": "ap_return_10", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_10", "role": "default" }} , 
 	{ "name": "ap_return_11", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_11", "role": "default" }} , 
 	{ "name": "ap_return_12", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_12", "role": "default" }} , 
 	{ "name": "ap_return_13", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_13", "role": "default" }} , 
 	{ "name": "ap_return_14", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_14", "role": "default" }} , 
 	{ "name": "ap_return_15", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_15", "role": "default" }} , 
 	{ "name": "ap_return_16", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_16", "role": "default" }} , 
 	{ "name": "ap_return_17", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_17", "role": "default" }} , 
 	{ "name": "ap_return_18", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_18", "role": "default" }} , 
 	{ "name": "ap_return_19", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_19", "role": "default" }} , 
 	{ "name": "ap_return_20", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_20", "role": "default" }} , 
 	{ "name": "ap_return_21", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_21", "role": "default" }} , 
 	{ "name": "ap_return_22", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_22", "role": "default" }} , 
 	{ "name": "ap_return_23", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_23", "role": "default" }} , 
 	{ "name": "ap_return_24", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_24", "role": "default" }} , 
 	{ "name": "ap_return_25", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_25", "role": "default" }} , 
 	{ "name": "ap_return_26", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_26", "role": "default" }} , 
 	{ "name": "ap_return_27", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_27", "role": "default" }} , 
 	{ "name": "ap_return_28", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_28", "role": "default" }} , 
 	{ "name": "ap_return_29", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_29", "role": "default" }} , 
 	{ "name": "ap_return_30", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_30", "role": "default" }} , 
 	{ "name": "ap_return_31", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_31", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "load_conv1x1_weights",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "13", "EstimateLatencyMax" : "13",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "conv_weight_1x1_all_V", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "conv_weight_1x1_all_V_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "conv_weight_1x1_all_V_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "conv_weight_1x1_all_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv1x1_weight_ptr", "Type" : "None", "Direction" : "I"},
			{"Name" : "c_out", "Type" : "None", "Direction" : "I"},
			{"Name" : "c_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_channels_after_pa", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mac_muladcud_U1341", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	load_conv1x1_weights {
		conv_weight_1x1_all_V {Type I LastRead 10 FirstWrite -1}
		conv_weight_1x1_all_V_offset {Type I LastRead 1 FirstWrite -1}
		conv1x1_weight_ptr {Type I LastRead 1 FirstWrite -1}
		c_out {Type I LastRead 0 FirstWrite -1}
		c_in {Type I LastRead 0 FirstWrite -1}
		in_channels_after_pa {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "13", "Max" : "13"}
	, {"Name" : "Interval", "Min" : "13", "Max" : "13"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	conv_weight_1x1_all_V { m_axi {  { m_axi_conv_weight_1x1_all_V_AWVALID VALID 1 1 }  { m_axi_conv_weight_1x1_all_V_AWREADY READY 0 1 }  { m_axi_conv_weight_1x1_all_V_AWADDR ADDR 1 32 }  { m_axi_conv_weight_1x1_all_V_AWID ID 1 1 }  { m_axi_conv_weight_1x1_all_V_AWLEN LEN 1 32 }  { m_axi_conv_weight_1x1_all_V_AWSIZE SIZE 1 3 }  { m_axi_conv_weight_1x1_all_V_AWBURST BURST 1 2 }  { m_axi_conv_weight_1x1_all_V_AWLOCK LOCK 1 2 }  { m_axi_conv_weight_1x1_all_V_AWCACHE CACHE 1 4 }  { m_axi_conv_weight_1x1_all_V_AWPROT PROT 1 3 }  { m_axi_conv_weight_1x1_all_V_AWQOS QOS 1 4 }  { m_axi_conv_weight_1x1_all_V_AWREGION REGION 1 4 }  { m_axi_conv_weight_1x1_all_V_AWUSER USER 1 1 }  { m_axi_conv_weight_1x1_all_V_WVALID VALID 1 1 }  { m_axi_conv_weight_1x1_all_V_WREADY READY 0 1 }  { m_axi_conv_weight_1x1_all_V_WDATA DATA 1 512 }  { m_axi_conv_weight_1x1_all_V_WSTRB STRB 1 64 }  { m_axi_conv_weight_1x1_all_V_WLAST LAST 1 1 }  { m_axi_conv_weight_1x1_all_V_WID ID 1 1 }  { m_axi_conv_weight_1x1_all_V_WUSER USER 1 1 }  { m_axi_conv_weight_1x1_all_V_ARVALID VALID 1 1 }  { m_axi_conv_weight_1x1_all_V_ARREADY READY 0 1 }  { m_axi_conv_weight_1x1_all_V_ARADDR ADDR 1 32 }  { m_axi_conv_weight_1x1_all_V_ARID ID 1 1 }  { m_axi_conv_weight_1x1_all_V_ARLEN LEN 1 32 }  { m_axi_conv_weight_1x1_all_V_ARSIZE SIZE 1 3 }  { m_axi_conv_weight_1x1_all_V_ARBURST BURST 1 2 }  { m_axi_conv_weight_1x1_all_V_ARLOCK LOCK 1 2 }  { m_axi_conv_weight_1x1_all_V_ARCACHE CACHE 1 4 }  { m_axi_conv_weight_1x1_all_V_ARPROT PROT 1 3 }  { m_axi_conv_weight_1x1_all_V_ARQOS QOS 1 4 }  { m_axi_conv_weight_1x1_all_V_ARREGION REGION 1 4 }  { m_axi_conv_weight_1x1_all_V_ARUSER USER 1 1 }  { m_axi_conv_weight_1x1_all_V_RVALID VALID 0 1 }  { m_axi_conv_weight_1x1_all_V_RREADY READY 1 1 }  { m_axi_conv_weight_1x1_all_V_RDATA DATA 0 512 }  { m_axi_conv_weight_1x1_all_V_RLAST LAST 0 1 }  { m_axi_conv_weight_1x1_all_V_RID ID 0 1 }  { m_axi_conv_weight_1x1_all_V_RUSER USER 0 1 }  { m_axi_conv_weight_1x1_all_V_RRESP RESP 0 2 }  { m_axi_conv_weight_1x1_all_V_BVALID VALID 0 1 }  { m_axi_conv_weight_1x1_all_V_BREADY READY 1 1 }  { m_axi_conv_weight_1x1_all_V_BRESP RESP 0 2 }  { m_axi_conv_weight_1x1_all_V_BID ID 0 1 }  { m_axi_conv_weight_1x1_all_V_BUSER USER 0 1 } } }
	conv_weight_1x1_all_V_offset { ap_none {  { conv_weight_1x1_all_V_offset in_data 0 26 } } }
	conv1x1_weight_ptr { ap_none {  { conv1x1_weight_ptr in_data 0 13 } } }
	c_out { ap_none {  { c_out in_data 0 6 } } }
	c_in { ap_none {  { c_in in_data 0 6 } } }
	in_channels_after_pa { ap_none {  { in_channels_after_pa in_data 0 7 } } }
}
