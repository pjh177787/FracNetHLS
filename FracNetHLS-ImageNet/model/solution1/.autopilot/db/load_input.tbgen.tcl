set moduleName load_input
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
set C_modelName {load_input}
set C_modelType { void 0 }
set C_modelArgList {
	{ row int 5 regular  }
	{ col int 5 regular  }
	{ c int 3 regular  }
	{ buf_V int 16 regular {array 81 { 0 3 } 0 1 }  }
	{ img_V int 16 regular {axi_master 0}  }
	{ img_V_offset int 31 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "row", "interface" : "wire", "bitwidth" : 5, "direction" : "READONLY"} , 
 	{ "Name" : "col", "interface" : "wire", "bitwidth" : 5, "direction" : "READONLY"} , 
 	{ "Name" : "c", "interface" : "wire", "bitwidth" : 3, "direction" : "READONLY"} , 
 	{ "Name" : "buf_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "img_V", "interface" : "axi_master", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "img_V_offset", "interface" : "wire", "bitwidth" : 31, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 59
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ row sc_in sc_lv 5 signal 0 } 
	{ col sc_in sc_lv 5 signal 1 } 
	{ c sc_in sc_lv 3 signal 2 } 
	{ buf_V_address0 sc_out sc_lv 7 signal 3 } 
	{ buf_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ buf_V_we0 sc_out sc_logic 1 signal 3 } 
	{ buf_V_d0 sc_out sc_lv 16 signal 3 } 
	{ m_axi_img_V_AWVALID sc_out sc_logic 1 signal 4 } 
	{ m_axi_img_V_AWREADY sc_in sc_logic 1 signal 4 } 
	{ m_axi_img_V_AWADDR sc_out sc_lv 32 signal 4 } 
	{ m_axi_img_V_AWID sc_out sc_lv 1 signal 4 } 
	{ m_axi_img_V_AWLEN sc_out sc_lv 32 signal 4 } 
	{ m_axi_img_V_AWSIZE sc_out sc_lv 3 signal 4 } 
	{ m_axi_img_V_AWBURST sc_out sc_lv 2 signal 4 } 
	{ m_axi_img_V_AWLOCK sc_out sc_lv 2 signal 4 } 
	{ m_axi_img_V_AWCACHE sc_out sc_lv 4 signal 4 } 
	{ m_axi_img_V_AWPROT sc_out sc_lv 3 signal 4 } 
	{ m_axi_img_V_AWQOS sc_out sc_lv 4 signal 4 } 
	{ m_axi_img_V_AWREGION sc_out sc_lv 4 signal 4 } 
	{ m_axi_img_V_AWUSER sc_out sc_lv 1 signal 4 } 
	{ m_axi_img_V_WVALID sc_out sc_logic 1 signal 4 } 
	{ m_axi_img_V_WREADY sc_in sc_logic 1 signal 4 } 
	{ m_axi_img_V_WDATA sc_out sc_lv 16 signal 4 } 
	{ m_axi_img_V_WSTRB sc_out sc_lv 2 signal 4 } 
	{ m_axi_img_V_WLAST sc_out sc_logic 1 signal 4 } 
	{ m_axi_img_V_WID sc_out sc_lv 1 signal 4 } 
	{ m_axi_img_V_WUSER sc_out sc_lv 1 signal 4 } 
	{ m_axi_img_V_ARVALID sc_out sc_logic 1 signal 4 } 
	{ m_axi_img_V_ARREADY sc_in sc_logic 1 signal 4 } 
	{ m_axi_img_V_ARADDR sc_out sc_lv 32 signal 4 } 
	{ m_axi_img_V_ARID sc_out sc_lv 1 signal 4 } 
	{ m_axi_img_V_ARLEN sc_out sc_lv 32 signal 4 } 
	{ m_axi_img_V_ARSIZE sc_out sc_lv 3 signal 4 } 
	{ m_axi_img_V_ARBURST sc_out sc_lv 2 signal 4 } 
	{ m_axi_img_V_ARLOCK sc_out sc_lv 2 signal 4 } 
	{ m_axi_img_V_ARCACHE sc_out sc_lv 4 signal 4 } 
	{ m_axi_img_V_ARPROT sc_out sc_lv 3 signal 4 } 
	{ m_axi_img_V_ARQOS sc_out sc_lv 4 signal 4 } 
	{ m_axi_img_V_ARREGION sc_out sc_lv 4 signal 4 } 
	{ m_axi_img_V_ARUSER sc_out sc_lv 1 signal 4 } 
	{ m_axi_img_V_RVALID sc_in sc_logic 1 signal 4 } 
	{ m_axi_img_V_RREADY sc_out sc_logic 1 signal 4 } 
	{ m_axi_img_V_RDATA sc_in sc_lv 16 signal 4 } 
	{ m_axi_img_V_RLAST sc_in sc_logic 1 signal 4 } 
	{ m_axi_img_V_RID sc_in sc_lv 1 signal 4 } 
	{ m_axi_img_V_RUSER sc_in sc_lv 1 signal 4 } 
	{ m_axi_img_V_RRESP sc_in sc_lv 2 signal 4 } 
	{ m_axi_img_V_BVALID sc_in sc_logic 1 signal 4 } 
	{ m_axi_img_V_BREADY sc_out sc_logic 1 signal 4 } 
	{ m_axi_img_V_BRESP sc_in sc_lv 2 signal 4 } 
	{ m_axi_img_V_BID sc_in sc_lv 1 signal 4 } 
	{ m_axi_img_V_BUSER sc_in sc_lv 1 signal 4 } 
	{ img_V_offset sc_in sc_lv 31 signal 5 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "row", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "row", "role": "default" }} , 
 	{ "name": "col", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "col", "role": "default" }} , 
 	{ "name": "c", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "c", "role": "default" }} , 
 	{ "name": "buf_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "buf_V", "role": "address0" }} , 
 	{ "name": "buf_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buf_V", "role": "ce0" }} , 
 	{ "name": "buf_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buf_V", "role": "we0" }} , 
 	{ "name": "buf_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "buf_V", "role": "d0" }} , 
 	{ "name": "m_axi_img_V_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_V", "role": "AWVALID" }} , 
 	{ "name": "m_axi_img_V_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_V", "role": "AWREADY" }} , 
 	{ "name": "m_axi_img_V_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "img_V", "role": "AWADDR" }} , 
 	{ "name": "m_axi_img_V_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "img_V", "role": "AWID" }} , 
 	{ "name": "m_axi_img_V_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "img_V", "role": "AWLEN" }} , 
 	{ "name": "m_axi_img_V_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "img_V", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_img_V_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "img_V", "role": "AWBURST" }} , 
 	{ "name": "m_axi_img_V_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "img_V", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_img_V_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "img_V", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_img_V_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "img_V", "role": "AWPROT" }} , 
 	{ "name": "m_axi_img_V_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "img_V", "role": "AWQOS" }} , 
 	{ "name": "m_axi_img_V_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "img_V", "role": "AWREGION" }} , 
 	{ "name": "m_axi_img_V_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "img_V", "role": "AWUSER" }} , 
 	{ "name": "m_axi_img_V_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_V", "role": "WVALID" }} , 
 	{ "name": "m_axi_img_V_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_V", "role": "WREADY" }} , 
 	{ "name": "m_axi_img_V_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "img_V", "role": "WDATA" }} , 
 	{ "name": "m_axi_img_V_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "img_V", "role": "WSTRB" }} , 
 	{ "name": "m_axi_img_V_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_V", "role": "WLAST" }} , 
 	{ "name": "m_axi_img_V_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "img_V", "role": "WID" }} , 
 	{ "name": "m_axi_img_V_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "img_V", "role": "WUSER" }} , 
 	{ "name": "m_axi_img_V_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_V", "role": "ARVALID" }} , 
 	{ "name": "m_axi_img_V_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_V", "role": "ARREADY" }} , 
 	{ "name": "m_axi_img_V_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "img_V", "role": "ARADDR" }} , 
 	{ "name": "m_axi_img_V_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "img_V", "role": "ARID" }} , 
 	{ "name": "m_axi_img_V_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "img_V", "role": "ARLEN" }} , 
 	{ "name": "m_axi_img_V_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "img_V", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_img_V_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "img_V", "role": "ARBURST" }} , 
 	{ "name": "m_axi_img_V_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "img_V", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_img_V_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "img_V", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_img_V_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "img_V", "role": "ARPROT" }} , 
 	{ "name": "m_axi_img_V_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "img_V", "role": "ARQOS" }} , 
 	{ "name": "m_axi_img_V_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "img_V", "role": "ARREGION" }} , 
 	{ "name": "m_axi_img_V_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "img_V", "role": "ARUSER" }} , 
 	{ "name": "m_axi_img_V_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_V", "role": "RVALID" }} , 
 	{ "name": "m_axi_img_V_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_V", "role": "RREADY" }} , 
 	{ "name": "m_axi_img_V_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "img_V", "role": "RDATA" }} , 
 	{ "name": "m_axi_img_V_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_V", "role": "RLAST" }} , 
 	{ "name": "m_axi_img_V_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "img_V", "role": "RID" }} , 
 	{ "name": "m_axi_img_V_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "img_V", "role": "RUSER" }} , 
 	{ "name": "m_axi_img_V_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "img_V", "role": "RRESP" }} , 
 	{ "name": "m_axi_img_V_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_V", "role": "BVALID" }} , 
 	{ "name": "m_axi_img_V_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_V", "role": "BREADY" }} , 
 	{ "name": "m_axi_img_V_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "img_V", "role": "BRESP" }} , 
 	{ "name": "m_axi_img_V_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "img_V", "role": "BID" }} , 
 	{ "name": "m_axi_img_V_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "img_V", "role": "BUSER" }} , 
 	{ "name": "img_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":31, "type": "signal", "bundle":{"name": "img_V_offset", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3"],
		"CDFG" : "load_input",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "103", "EstimateLatencyMax" : "103",
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_urem_7ns_bkb_U1", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mac_muladcud_U2", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mac_muladdEe_U3", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	load_input {
		row {Type I LastRead 0 FirstWrite -1}
		col {Type I LastRead 1 FirstWrite -1}
		c {Type I LastRead 1 FirstWrite -1}
		buf_V {Type O LastRead -1 FirstWrite 22}
		img_V {Type I LastRead 21 FirstWrite -1}
		img_V_offset {Type I LastRead 1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "103", "Max" : "103"}
	, {"Name" : "Interval", "Min" : "103", "Max" : "103"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	row { ap_none {  { row in_data 0 5 } } }
	col { ap_none {  { col in_data 0 5 } } }
	c { ap_none {  { c in_data 0 3 } } }
	buf_V { ap_memory {  { buf_V_address0 mem_address 1 7 }  { buf_V_ce0 mem_ce 1 1 }  { buf_V_we0 mem_we 1 1 }  { buf_V_d0 mem_din 1 16 } } }
	img_V { m_axi {  { m_axi_img_V_AWVALID VALID 1 1 }  { m_axi_img_V_AWREADY READY 0 1 }  { m_axi_img_V_AWADDR ADDR 1 32 }  { m_axi_img_V_AWID ID 1 1 }  { m_axi_img_V_AWLEN LEN 1 32 }  { m_axi_img_V_AWSIZE SIZE 1 3 }  { m_axi_img_V_AWBURST BURST 1 2 }  { m_axi_img_V_AWLOCK LOCK 1 2 }  { m_axi_img_V_AWCACHE CACHE 1 4 }  { m_axi_img_V_AWPROT PROT 1 3 }  { m_axi_img_V_AWQOS QOS 1 4 }  { m_axi_img_V_AWREGION REGION 1 4 }  { m_axi_img_V_AWUSER USER 1 1 }  { m_axi_img_V_WVALID VALID 1 1 }  { m_axi_img_V_WREADY READY 0 1 }  { m_axi_img_V_WDATA DATA 1 16 }  { m_axi_img_V_WSTRB STRB 1 2 }  { m_axi_img_V_WLAST LAST 1 1 }  { m_axi_img_V_WID ID 1 1 }  { m_axi_img_V_WUSER USER 1 1 }  { m_axi_img_V_ARVALID VALID 1 1 }  { m_axi_img_V_ARREADY READY 0 1 }  { m_axi_img_V_ARADDR ADDR 1 32 }  { m_axi_img_V_ARID ID 1 1 }  { m_axi_img_V_ARLEN LEN 1 32 }  { m_axi_img_V_ARSIZE SIZE 1 3 }  { m_axi_img_V_ARBURST BURST 1 2 }  { m_axi_img_V_ARLOCK LOCK 1 2 }  { m_axi_img_V_ARCACHE CACHE 1 4 }  { m_axi_img_V_ARPROT PROT 1 3 }  { m_axi_img_V_ARQOS QOS 1 4 }  { m_axi_img_V_ARREGION REGION 1 4 }  { m_axi_img_V_ARUSER USER 1 1 }  { m_axi_img_V_RVALID VALID 0 1 }  { m_axi_img_V_RREADY READY 1 1 }  { m_axi_img_V_RDATA DATA 0 16 }  { m_axi_img_V_RLAST LAST 0 1 }  { m_axi_img_V_RID ID 0 1 }  { m_axi_img_V_RUSER USER 0 1 }  { m_axi_img_V_RRESP RESP 0 2 }  { m_axi_img_V_BVALID VALID 0 1 }  { m_axi_img_V_BREADY READY 1 1 }  { m_axi_img_V_BRESP RESP 0 2 }  { m_axi_img_V_BID ID 0 1 }  { m_axi_img_V_BUSER USER 0 1 } } }
	img_V_offset { ap_none {  { img_V_offset in_data 0 31 } } }
}
