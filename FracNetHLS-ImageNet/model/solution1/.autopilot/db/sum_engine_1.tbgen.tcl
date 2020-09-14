set moduleName sum_engine_1
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
set C_modelName {sum_engine.1}
set C_modelType { int 14 }
set C_modelArgList {
	{ t0_V int 9 regular  }
	{ t1_V int 9 regular  }
	{ t2_V int 9 regular  }
	{ t3_V int 9 regular  }
	{ t4_V int 9 regular  }
	{ t5_V int 9 regular  }
	{ t6_V int 9 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "t0_V", "interface" : "wire", "bitwidth" : 9, "direction" : "READONLY"} , 
 	{ "Name" : "t1_V", "interface" : "wire", "bitwidth" : 9, "direction" : "READONLY"} , 
 	{ "Name" : "t2_V", "interface" : "wire", "bitwidth" : 9, "direction" : "READONLY"} , 
 	{ "Name" : "t3_V", "interface" : "wire", "bitwidth" : 9, "direction" : "READONLY"} , 
 	{ "Name" : "t4_V", "interface" : "wire", "bitwidth" : 9, "direction" : "READONLY"} , 
 	{ "Name" : "t5_V", "interface" : "wire", "bitwidth" : 9, "direction" : "READONLY"} , 
 	{ "Name" : "t6_V", "interface" : "wire", "bitwidth" : 9, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 14} ]}
# RTL Port declarations: 
set portNum 10
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ t0_V sc_in sc_lv 9 signal 0 } 
	{ t1_V sc_in sc_lv 9 signal 1 } 
	{ t2_V sc_in sc_lv 9 signal 2 } 
	{ t3_V sc_in sc_lv 9 signal 3 } 
	{ t4_V sc_in sc_lv 9 signal 4 } 
	{ t5_V sc_in sc_lv 9 signal 5 } 
	{ t6_V sc_in sc_lv 9 signal 6 } 
	{ ap_return sc_out sc_lv 14 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "t0_V", "direction": "in", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "t0_V", "role": "default" }} , 
 	{ "name": "t1_V", "direction": "in", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "t1_V", "role": "default" }} , 
 	{ "name": "t2_V", "direction": "in", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "t2_V", "role": "default" }} , 
 	{ "name": "t3_V", "direction": "in", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "t3_V", "role": "default" }} , 
 	{ "name": "t4_V", "direction": "in", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "t4_V", "role": "default" }} , 
 	{ "name": "t5_V", "direction": "in", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "t5_V", "role": "default" }} , 
 	{ "name": "t6_V", "direction": "in", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "t6_V", "role": "default" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "sum_engine_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
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
			{"Name" : "t6_V", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	sum_engine_1 {
		t0_V {Type I LastRead 0 FirstWrite -1}
		t1_V {Type I LastRead 0 FirstWrite -1}
		t2_V {Type I LastRead 0 FirstWrite -1}
		t3_V {Type I LastRead 0 FirstWrite -1}
		t4_V {Type I LastRead 0 FirstWrite -1}
		t5_V {Type I LastRead 0 FirstWrite -1}
		t6_V {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1", "Max" : "1"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	t0_V { ap_none {  { t0_V in_data 0 9 } } }
	t1_V { ap_none {  { t1_V in_data 0 9 } } }
	t2_V { ap_none {  { t2_V in_data 0 9 } } }
	t3_V { ap_none {  { t3_V in_data 0 9 } } }
	t4_V { ap_none {  { t4_V in_data 0 9 } } }
	t5_V { ap_none {  { t5_V in_data 0 9 } } }
	t6_V { ap_none {  { t6_V in_data 0 9 } } }
}
