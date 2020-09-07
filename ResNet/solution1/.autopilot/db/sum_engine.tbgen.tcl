set moduleName sum_engine
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 1
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {sum_engine}
set C_modelType { int 8 }
set C_modelArgList {
	{ t0_V int 6 regular  }
	{ t1_V int 6 regular  }
	{ t2_V int 6 regular  }
	{ t3_V int 6 regular  }
	{ t4_V int 6 regular  }
	{ t5_V int 6 regular  }
	{ t6_V int 6 regular  }
	{ t7_V int 6 regular  }
	{ t8_V int 6 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "t0_V", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "t1_V", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "t2_V", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "t3_V", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "t4_V", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "t5_V", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "t6_V", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "t7_V", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "t8_V", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 8} ]}
# RTL Port declarations: 
set portNum 11
set portList { 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ t0_V sc_in sc_lv 6 signal 0 } 
	{ t1_V sc_in sc_lv 6 signal 1 } 
	{ t2_V sc_in sc_lv 6 signal 2 } 
	{ t3_V sc_in sc_lv 6 signal 3 } 
	{ t4_V sc_in sc_lv 6 signal 4 } 
	{ t5_V sc_in sc_lv 6 signal 5 } 
	{ t6_V sc_in sc_lv 6 signal 6 } 
	{ t7_V sc_in sc_lv 6 signal 7 } 
	{ t8_V sc_in sc_lv 6 signal 8 } 
	{ ap_return sc_out sc_lv 8 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "t0_V", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "t0_V", "role": "default" }} , 
 	{ "name": "t1_V", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "t1_V", "role": "default" }} , 
 	{ "name": "t2_V", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "t2_V", "role": "default" }} , 
 	{ "name": "t3_V", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "t3_V", "role": "default" }} , 
 	{ "name": "t4_V", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "t4_V", "role": "default" }} , 
 	{ "name": "t5_V", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "t5_V", "role": "default" }} , 
 	{ "name": "t6_V", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "t6_V", "role": "default" }} , 
 	{ "name": "t7_V", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "t7_V", "role": "default" }} , 
 	{ "name": "t8_V", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "t8_V", "role": "default" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
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
			{"Name" : "t8_V", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	sum_engine {
		t0_V {Type I LastRead 0 FirstWrite -1}
		t1_V {Type I LastRead 0 FirstWrite -1}
		t2_V {Type I LastRead 0 FirstWrite -1}
		t3_V {Type I LastRead 0 FirstWrite -1}
		t4_V {Type I LastRead 0 FirstWrite -1}
		t5_V {Type I LastRead 0 FirstWrite -1}
		t6_V {Type I LastRead 0 FirstWrite -1}
		t7_V {Type I LastRead 0 FirstWrite -1}
		t8_V {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "0", "Max" : "0"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	t0_V { ap_none {  { t0_V in_data 0 6 } } }
	t1_V { ap_none {  { t1_V in_data 0 6 } } }
	t2_V { ap_none {  { t2_V in_data 0 6 } } }
	t3_V { ap_none {  { t3_V in_data 0 6 } } }
	t4_V { ap_none {  { t4_V in_data 0 6 } } }
	t5_V { ap_none {  { t5_V in_data 0 6 } } }
	t6_V { ap_none {  { t6_V in_data 0 6 } } }
	t7_V { ap_none {  { t7_V in_data 0 6 } } }
	t8_V { ap_none {  { t8_V in_data 0 6 } } }
}
