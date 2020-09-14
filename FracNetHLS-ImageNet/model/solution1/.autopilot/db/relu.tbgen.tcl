set moduleName relu
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 1
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {relu}
set C_modelType { int 14 }
set C_modelArgList {
	{ norm_V int 14 regular  }
	{ shiftx_V int 11 regular  }
	{ shifty_V int 11 regular  }
	{ weight_V int 11 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "norm_V", "interface" : "wire", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "shiftx_V", "interface" : "wire", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "shifty_V", "interface" : "wire", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "weight_V", "interface" : "wire", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 14} ]}
# RTL Port declarations: 
set portNum 8
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ norm_V sc_in sc_lv 14 signal 0 } 
	{ shiftx_V sc_in sc_lv 11 signal 1 } 
	{ shifty_V sc_in sc_lv 11 signal 2 } 
	{ weight_V sc_in sc_lv 11 signal 3 } 
	{ ap_return sc_out sc_lv 14 signal -1 } 
	{ ap_ce sc_in sc_logic 1 ce -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "norm_V", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "norm_V", "role": "default" }} , 
 	{ "name": "shiftx_V", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "shiftx_V", "role": "default" }} , 
 	{ "name": "shifty_V", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "shifty_V", "role": "default" }} , 
 	{ "name": "weight_V", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "weight_V", "role": "default" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }} , 
 	{ "name": "ap_ce", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "ce", "bundle":{"name": "ap_ce", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mac_muladmb6_U555", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	relu {
		norm_V {Type I LastRead 0 FirstWrite -1}
		shiftx_V {Type I LastRead 0 FirstWrite -1}
		shifty_V {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "3", "Max" : "3"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	norm_V { ap_none {  { norm_V in_data 0 14 } } }
	shiftx_V { ap_none {  { shiftx_V in_data 0 11 } } }
	shifty_V { ap_none {  { shifty_V in_data 0 11 } } }
	weight_V { ap_none {  { weight_V in_data 0 11 } } }
}
