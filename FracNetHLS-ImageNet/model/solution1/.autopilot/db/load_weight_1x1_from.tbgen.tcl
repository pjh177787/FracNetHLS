set moduleName load_weight_1x1_from
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
set C_modelName {load_weight_1x1_from}
set C_modelType { void 0 }
set C_modelArgList {
	{ dest_V int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V1 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V2 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V3 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V4 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V5 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V6 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V7 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V8 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V9 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V10 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V11 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V12 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V13 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V14 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V15 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V16 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V17 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V18 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V19 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V20 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V21 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V22 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V23 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V24 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V25 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V26 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V27 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V28 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V29 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V30 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ dest_V31 int 64 regular {array 4 { 0 3 } 0 1 }  }
	{ src_V int 512 regular  }
	{ coff int 3 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "dest_V", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V1", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V2", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V3", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V4", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V5", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V6", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V7", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V8", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V9", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V10", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V11", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V12", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V13", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V14", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V15", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V16", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V17", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V18", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V19", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V20", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V21", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V22", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V23", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V24", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V25", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V26", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V27", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V28", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V29", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V30", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dest_V31", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "src_V", "interface" : "wire", "bitwidth" : 512, "direction" : "READONLY"} , 
 	{ "Name" : "coff", "interface" : "wire", "bitwidth" : 3, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 136
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ dest_V_address0 sc_out sc_lv 2 signal 0 } 
	{ dest_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ dest_V_we0 sc_out sc_logic 1 signal 0 } 
	{ dest_V_d0 sc_out sc_lv 64 signal 0 } 
	{ dest_V1_address0 sc_out sc_lv 2 signal 1 } 
	{ dest_V1_ce0 sc_out sc_logic 1 signal 1 } 
	{ dest_V1_we0 sc_out sc_logic 1 signal 1 } 
	{ dest_V1_d0 sc_out sc_lv 64 signal 1 } 
	{ dest_V2_address0 sc_out sc_lv 2 signal 2 } 
	{ dest_V2_ce0 sc_out sc_logic 1 signal 2 } 
	{ dest_V2_we0 sc_out sc_logic 1 signal 2 } 
	{ dest_V2_d0 sc_out sc_lv 64 signal 2 } 
	{ dest_V3_address0 sc_out sc_lv 2 signal 3 } 
	{ dest_V3_ce0 sc_out sc_logic 1 signal 3 } 
	{ dest_V3_we0 sc_out sc_logic 1 signal 3 } 
	{ dest_V3_d0 sc_out sc_lv 64 signal 3 } 
	{ dest_V4_address0 sc_out sc_lv 2 signal 4 } 
	{ dest_V4_ce0 sc_out sc_logic 1 signal 4 } 
	{ dest_V4_we0 sc_out sc_logic 1 signal 4 } 
	{ dest_V4_d0 sc_out sc_lv 64 signal 4 } 
	{ dest_V5_address0 sc_out sc_lv 2 signal 5 } 
	{ dest_V5_ce0 sc_out sc_logic 1 signal 5 } 
	{ dest_V5_we0 sc_out sc_logic 1 signal 5 } 
	{ dest_V5_d0 sc_out sc_lv 64 signal 5 } 
	{ dest_V6_address0 sc_out sc_lv 2 signal 6 } 
	{ dest_V6_ce0 sc_out sc_logic 1 signal 6 } 
	{ dest_V6_we0 sc_out sc_logic 1 signal 6 } 
	{ dest_V6_d0 sc_out sc_lv 64 signal 6 } 
	{ dest_V7_address0 sc_out sc_lv 2 signal 7 } 
	{ dest_V7_ce0 sc_out sc_logic 1 signal 7 } 
	{ dest_V7_we0 sc_out sc_logic 1 signal 7 } 
	{ dest_V7_d0 sc_out sc_lv 64 signal 7 } 
	{ dest_V8_address0 sc_out sc_lv 2 signal 8 } 
	{ dest_V8_ce0 sc_out sc_logic 1 signal 8 } 
	{ dest_V8_we0 sc_out sc_logic 1 signal 8 } 
	{ dest_V8_d0 sc_out sc_lv 64 signal 8 } 
	{ dest_V9_address0 sc_out sc_lv 2 signal 9 } 
	{ dest_V9_ce0 sc_out sc_logic 1 signal 9 } 
	{ dest_V9_we0 sc_out sc_logic 1 signal 9 } 
	{ dest_V9_d0 sc_out sc_lv 64 signal 9 } 
	{ dest_V10_address0 sc_out sc_lv 2 signal 10 } 
	{ dest_V10_ce0 sc_out sc_logic 1 signal 10 } 
	{ dest_V10_we0 sc_out sc_logic 1 signal 10 } 
	{ dest_V10_d0 sc_out sc_lv 64 signal 10 } 
	{ dest_V11_address0 sc_out sc_lv 2 signal 11 } 
	{ dest_V11_ce0 sc_out sc_logic 1 signal 11 } 
	{ dest_V11_we0 sc_out sc_logic 1 signal 11 } 
	{ dest_V11_d0 sc_out sc_lv 64 signal 11 } 
	{ dest_V12_address0 sc_out sc_lv 2 signal 12 } 
	{ dest_V12_ce0 sc_out sc_logic 1 signal 12 } 
	{ dest_V12_we0 sc_out sc_logic 1 signal 12 } 
	{ dest_V12_d0 sc_out sc_lv 64 signal 12 } 
	{ dest_V13_address0 sc_out sc_lv 2 signal 13 } 
	{ dest_V13_ce0 sc_out sc_logic 1 signal 13 } 
	{ dest_V13_we0 sc_out sc_logic 1 signal 13 } 
	{ dest_V13_d0 sc_out sc_lv 64 signal 13 } 
	{ dest_V14_address0 sc_out sc_lv 2 signal 14 } 
	{ dest_V14_ce0 sc_out sc_logic 1 signal 14 } 
	{ dest_V14_we0 sc_out sc_logic 1 signal 14 } 
	{ dest_V14_d0 sc_out sc_lv 64 signal 14 } 
	{ dest_V15_address0 sc_out sc_lv 2 signal 15 } 
	{ dest_V15_ce0 sc_out sc_logic 1 signal 15 } 
	{ dest_V15_we0 sc_out sc_logic 1 signal 15 } 
	{ dest_V15_d0 sc_out sc_lv 64 signal 15 } 
	{ dest_V16_address0 sc_out sc_lv 2 signal 16 } 
	{ dest_V16_ce0 sc_out sc_logic 1 signal 16 } 
	{ dest_V16_we0 sc_out sc_logic 1 signal 16 } 
	{ dest_V16_d0 sc_out sc_lv 64 signal 16 } 
	{ dest_V17_address0 sc_out sc_lv 2 signal 17 } 
	{ dest_V17_ce0 sc_out sc_logic 1 signal 17 } 
	{ dest_V17_we0 sc_out sc_logic 1 signal 17 } 
	{ dest_V17_d0 sc_out sc_lv 64 signal 17 } 
	{ dest_V18_address0 sc_out sc_lv 2 signal 18 } 
	{ dest_V18_ce0 sc_out sc_logic 1 signal 18 } 
	{ dest_V18_we0 sc_out sc_logic 1 signal 18 } 
	{ dest_V18_d0 sc_out sc_lv 64 signal 18 } 
	{ dest_V19_address0 sc_out sc_lv 2 signal 19 } 
	{ dest_V19_ce0 sc_out sc_logic 1 signal 19 } 
	{ dest_V19_we0 sc_out sc_logic 1 signal 19 } 
	{ dest_V19_d0 sc_out sc_lv 64 signal 19 } 
	{ dest_V20_address0 sc_out sc_lv 2 signal 20 } 
	{ dest_V20_ce0 sc_out sc_logic 1 signal 20 } 
	{ dest_V20_we0 sc_out sc_logic 1 signal 20 } 
	{ dest_V20_d0 sc_out sc_lv 64 signal 20 } 
	{ dest_V21_address0 sc_out sc_lv 2 signal 21 } 
	{ dest_V21_ce0 sc_out sc_logic 1 signal 21 } 
	{ dest_V21_we0 sc_out sc_logic 1 signal 21 } 
	{ dest_V21_d0 sc_out sc_lv 64 signal 21 } 
	{ dest_V22_address0 sc_out sc_lv 2 signal 22 } 
	{ dest_V22_ce0 sc_out sc_logic 1 signal 22 } 
	{ dest_V22_we0 sc_out sc_logic 1 signal 22 } 
	{ dest_V22_d0 sc_out sc_lv 64 signal 22 } 
	{ dest_V23_address0 sc_out sc_lv 2 signal 23 } 
	{ dest_V23_ce0 sc_out sc_logic 1 signal 23 } 
	{ dest_V23_we0 sc_out sc_logic 1 signal 23 } 
	{ dest_V23_d0 sc_out sc_lv 64 signal 23 } 
	{ dest_V24_address0 sc_out sc_lv 2 signal 24 } 
	{ dest_V24_ce0 sc_out sc_logic 1 signal 24 } 
	{ dest_V24_we0 sc_out sc_logic 1 signal 24 } 
	{ dest_V24_d0 sc_out sc_lv 64 signal 24 } 
	{ dest_V25_address0 sc_out sc_lv 2 signal 25 } 
	{ dest_V25_ce0 sc_out sc_logic 1 signal 25 } 
	{ dest_V25_we0 sc_out sc_logic 1 signal 25 } 
	{ dest_V25_d0 sc_out sc_lv 64 signal 25 } 
	{ dest_V26_address0 sc_out sc_lv 2 signal 26 } 
	{ dest_V26_ce0 sc_out sc_logic 1 signal 26 } 
	{ dest_V26_we0 sc_out sc_logic 1 signal 26 } 
	{ dest_V26_d0 sc_out sc_lv 64 signal 26 } 
	{ dest_V27_address0 sc_out sc_lv 2 signal 27 } 
	{ dest_V27_ce0 sc_out sc_logic 1 signal 27 } 
	{ dest_V27_we0 sc_out sc_logic 1 signal 27 } 
	{ dest_V27_d0 sc_out sc_lv 64 signal 27 } 
	{ dest_V28_address0 sc_out sc_lv 2 signal 28 } 
	{ dest_V28_ce0 sc_out sc_logic 1 signal 28 } 
	{ dest_V28_we0 sc_out sc_logic 1 signal 28 } 
	{ dest_V28_d0 sc_out sc_lv 64 signal 28 } 
	{ dest_V29_address0 sc_out sc_lv 2 signal 29 } 
	{ dest_V29_ce0 sc_out sc_logic 1 signal 29 } 
	{ dest_V29_we0 sc_out sc_logic 1 signal 29 } 
	{ dest_V29_d0 sc_out sc_lv 64 signal 29 } 
	{ dest_V30_address0 sc_out sc_lv 2 signal 30 } 
	{ dest_V30_ce0 sc_out sc_logic 1 signal 30 } 
	{ dest_V30_we0 sc_out sc_logic 1 signal 30 } 
	{ dest_V30_d0 sc_out sc_lv 64 signal 30 } 
	{ dest_V31_address0 sc_out sc_lv 2 signal 31 } 
	{ dest_V31_ce0 sc_out sc_logic 1 signal 31 } 
	{ dest_V31_we0 sc_out sc_logic 1 signal 31 } 
	{ dest_V31_d0 sc_out sc_lv 64 signal 31 } 
	{ src_V sc_in sc_lv 512 signal 32 } 
	{ coff sc_in sc_lv 3 signal 33 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "dest_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V", "role": "address0" }} , 
 	{ "name": "dest_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V", "role": "ce0" }} , 
 	{ "name": "dest_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V", "role": "we0" }} , 
 	{ "name": "dest_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V", "role": "d0" }} , 
 	{ "name": "dest_V1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V1", "role": "address0" }} , 
 	{ "name": "dest_V1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V1", "role": "ce0" }} , 
 	{ "name": "dest_V1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V1", "role": "we0" }} , 
 	{ "name": "dest_V1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V1", "role": "d0" }} , 
 	{ "name": "dest_V2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V2", "role": "address0" }} , 
 	{ "name": "dest_V2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V2", "role": "ce0" }} , 
 	{ "name": "dest_V2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V2", "role": "we0" }} , 
 	{ "name": "dest_V2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V2", "role": "d0" }} , 
 	{ "name": "dest_V3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V3", "role": "address0" }} , 
 	{ "name": "dest_V3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V3", "role": "ce0" }} , 
 	{ "name": "dest_V3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V3", "role": "we0" }} , 
 	{ "name": "dest_V3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V3", "role": "d0" }} , 
 	{ "name": "dest_V4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V4", "role": "address0" }} , 
 	{ "name": "dest_V4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V4", "role": "ce0" }} , 
 	{ "name": "dest_V4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V4", "role": "we0" }} , 
 	{ "name": "dest_V4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V4", "role": "d0" }} , 
 	{ "name": "dest_V5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V5", "role": "address0" }} , 
 	{ "name": "dest_V5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V5", "role": "ce0" }} , 
 	{ "name": "dest_V5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V5", "role": "we0" }} , 
 	{ "name": "dest_V5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V5", "role": "d0" }} , 
 	{ "name": "dest_V6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V6", "role": "address0" }} , 
 	{ "name": "dest_V6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V6", "role": "ce0" }} , 
 	{ "name": "dest_V6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V6", "role": "we0" }} , 
 	{ "name": "dest_V6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V6", "role": "d0" }} , 
 	{ "name": "dest_V7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V7", "role": "address0" }} , 
 	{ "name": "dest_V7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V7", "role": "ce0" }} , 
 	{ "name": "dest_V7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V7", "role": "we0" }} , 
 	{ "name": "dest_V7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V7", "role": "d0" }} , 
 	{ "name": "dest_V8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V8", "role": "address0" }} , 
 	{ "name": "dest_V8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V8", "role": "ce0" }} , 
 	{ "name": "dest_V8_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V8", "role": "we0" }} , 
 	{ "name": "dest_V8_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V8", "role": "d0" }} , 
 	{ "name": "dest_V9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V9", "role": "address0" }} , 
 	{ "name": "dest_V9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V9", "role": "ce0" }} , 
 	{ "name": "dest_V9_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V9", "role": "we0" }} , 
 	{ "name": "dest_V9_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V9", "role": "d0" }} , 
 	{ "name": "dest_V10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V10", "role": "address0" }} , 
 	{ "name": "dest_V10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V10", "role": "ce0" }} , 
 	{ "name": "dest_V10_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V10", "role": "we0" }} , 
 	{ "name": "dest_V10_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V10", "role": "d0" }} , 
 	{ "name": "dest_V11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V11", "role": "address0" }} , 
 	{ "name": "dest_V11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V11", "role": "ce0" }} , 
 	{ "name": "dest_V11_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V11", "role": "we0" }} , 
 	{ "name": "dest_V11_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V11", "role": "d0" }} , 
 	{ "name": "dest_V12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V12", "role": "address0" }} , 
 	{ "name": "dest_V12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V12", "role": "ce0" }} , 
 	{ "name": "dest_V12_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V12", "role": "we0" }} , 
 	{ "name": "dest_V12_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V12", "role": "d0" }} , 
 	{ "name": "dest_V13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V13", "role": "address0" }} , 
 	{ "name": "dest_V13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V13", "role": "ce0" }} , 
 	{ "name": "dest_V13_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V13", "role": "we0" }} , 
 	{ "name": "dest_V13_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V13", "role": "d0" }} , 
 	{ "name": "dest_V14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V14", "role": "address0" }} , 
 	{ "name": "dest_V14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V14", "role": "ce0" }} , 
 	{ "name": "dest_V14_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V14", "role": "we0" }} , 
 	{ "name": "dest_V14_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V14", "role": "d0" }} , 
 	{ "name": "dest_V15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V15", "role": "address0" }} , 
 	{ "name": "dest_V15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V15", "role": "ce0" }} , 
 	{ "name": "dest_V15_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V15", "role": "we0" }} , 
 	{ "name": "dest_V15_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V15", "role": "d0" }} , 
 	{ "name": "dest_V16_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V16", "role": "address0" }} , 
 	{ "name": "dest_V16_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V16", "role": "ce0" }} , 
 	{ "name": "dest_V16_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V16", "role": "we0" }} , 
 	{ "name": "dest_V16_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V16", "role": "d0" }} , 
 	{ "name": "dest_V17_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V17", "role": "address0" }} , 
 	{ "name": "dest_V17_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V17", "role": "ce0" }} , 
 	{ "name": "dest_V17_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V17", "role": "we0" }} , 
 	{ "name": "dest_V17_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V17", "role": "d0" }} , 
 	{ "name": "dest_V18_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V18", "role": "address0" }} , 
 	{ "name": "dest_V18_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V18", "role": "ce0" }} , 
 	{ "name": "dest_V18_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V18", "role": "we0" }} , 
 	{ "name": "dest_V18_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V18", "role": "d0" }} , 
 	{ "name": "dest_V19_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V19", "role": "address0" }} , 
 	{ "name": "dest_V19_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V19", "role": "ce0" }} , 
 	{ "name": "dest_V19_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V19", "role": "we0" }} , 
 	{ "name": "dest_V19_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V19", "role": "d0" }} , 
 	{ "name": "dest_V20_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V20", "role": "address0" }} , 
 	{ "name": "dest_V20_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V20", "role": "ce0" }} , 
 	{ "name": "dest_V20_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V20", "role": "we0" }} , 
 	{ "name": "dest_V20_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V20", "role": "d0" }} , 
 	{ "name": "dest_V21_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V21", "role": "address0" }} , 
 	{ "name": "dest_V21_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V21", "role": "ce0" }} , 
 	{ "name": "dest_V21_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V21", "role": "we0" }} , 
 	{ "name": "dest_V21_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V21", "role": "d0" }} , 
 	{ "name": "dest_V22_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V22", "role": "address0" }} , 
 	{ "name": "dest_V22_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V22", "role": "ce0" }} , 
 	{ "name": "dest_V22_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V22", "role": "we0" }} , 
 	{ "name": "dest_V22_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V22", "role": "d0" }} , 
 	{ "name": "dest_V23_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V23", "role": "address0" }} , 
 	{ "name": "dest_V23_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V23", "role": "ce0" }} , 
 	{ "name": "dest_V23_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V23", "role": "we0" }} , 
 	{ "name": "dest_V23_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V23", "role": "d0" }} , 
 	{ "name": "dest_V24_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V24", "role": "address0" }} , 
 	{ "name": "dest_V24_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V24", "role": "ce0" }} , 
 	{ "name": "dest_V24_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V24", "role": "we0" }} , 
 	{ "name": "dest_V24_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V24", "role": "d0" }} , 
 	{ "name": "dest_V25_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V25", "role": "address0" }} , 
 	{ "name": "dest_V25_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V25", "role": "ce0" }} , 
 	{ "name": "dest_V25_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V25", "role": "we0" }} , 
 	{ "name": "dest_V25_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V25", "role": "d0" }} , 
 	{ "name": "dest_V26_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V26", "role": "address0" }} , 
 	{ "name": "dest_V26_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V26", "role": "ce0" }} , 
 	{ "name": "dest_V26_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V26", "role": "we0" }} , 
 	{ "name": "dest_V26_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V26", "role": "d0" }} , 
 	{ "name": "dest_V27_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V27", "role": "address0" }} , 
 	{ "name": "dest_V27_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V27", "role": "ce0" }} , 
 	{ "name": "dest_V27_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V27", "role": "we0" }} , 
 	{ "name": "dest_V27_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V27", "role": "d0" }} , 
 	{ "name": "dest_V28_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V28", "role": "address0" }} , 
 	{ "name": "dest_V28_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V28", "role": "ce0" }} , 
 	{ "name": "dest_V28_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V28", "role": "we0" }} , 
 	{ "name": "dest_V28_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V28", "role": "d0" }} , 
 	{ "name": "dest_V29_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V29", "role": "address0" }} , 
 	{ "name": "dest_V29_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V29", "role": "ce0" }} , 
 	{ "name": "dest_V29_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V29", "role": "we0" }} , 
 	{ "name": "dest_V29_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V29", "role": "d0" }} , 
 	{ "name": "dest_V30_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V30", "role": "address0" }} , 
 	{ "name": "dest_V30_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V30", "role": "ce0" }} , 
 	{ "name": "dest_V30_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V30", "role": "we0" }} , 
 	{ "name": "dest_V30_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V30", "role": "d0" }} , 
 	{ "name": "dest_V31_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dest_V31", "role": "address0" }} , 
 	{ "name": "dest_V31_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V31", "role": "ce0" }} , 
 	{ "name": "dest_V31_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dest_V31", "role": "we0" }} , 
 	{ "name": "dest_V31_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dest_V31", "role": "d0" }} , 
 	{ "name": "src_V", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "src_V", "role": "default" }} , 
 	{ "name": "coff", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "coff", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
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
			{"Name" : "coff", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
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
		coff {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "7", "Max" : "7"}
	, {"Name" : "Interval", "Min" : "7", "Max" : "7"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	dest_V { ap_memory {  { dest_V_address0 mem_address 1 2 }  { dest_V_ce0 mem_ce 1 1 }  { dest_V_we0 mem_we 1 1 }  { dest_V_d0 mem_din 1 64 } } }
	dest_V1 { ap_memory {  { dest_V1_address0 mem_address 1 2 }  { dest_V1_ce0 mem_ce 1 1 }  { dest_V1_we0 mem_we 1 1 }  { dest_V1_d0 mem_din 1 64 } } }
	dest_V2 { ap_memory {  { dest_V2_address0 mem_address 1 2 }  { dest_V2_ce0 mem_ce 1 1 }  { dest_V2_we0 mem_we 1 1 }  { dest_V2_d0 mem_din 1 64 } } }
	dest_V3 { ap_memory {  { dest_V3_address0 mem_address 1 2 }  { dest_V3_ce0 mem_ce 1 1 }  { dest_V3_we0 mem_we 1 1 }  { dest_V3_d0 mem_din 1 64 } } }
	dest_V4 { ap_memory {  { dest_V4_address0 mem_address 1 2 }  { dest_V4_ce0 mem_ce 1 1 }  { dest_V4_we0 mem_we 1 1 }  { dest_V4_d0 mem_din 1 64 } } }
	dest_V5 { ap_memory {  { dest_V5_address0 mem_address 1 2 }  { dest_V5_ce0 mem_ce 1 1 }  { dest_V5_we0 mem_we 1 1 }  { dest_V5_d0 mem_din 1 64 } } }
	dest_V6 { ap_memory {  { dest_V6_address0 mem_address 1 2 }  { dest_V6_ce0 mem_ce 1 1 }  { dest_V6_we0 mem_we 1 1 }  { dest_V6_d0 mem_din 1 64 } } }
	dest_V7 { ap_memory {  { dest_V7_address0 mem_address 1 2 }  { dest_V7_ce0 mem_ce 1 1 }  { dest_V7_we0 mem_we 1 1 }  { dest_V7_d0 mem_din 1 64 } } }
	dest_V8 { ap_memory {  { dest_V8_address0 mem_address 1 2 }  { dest_V8_ce0 mem_ce 1 1 }  { dest_V8_we0 mem_we 1 1 }  { dest_V8_d0 mem_din 1 64 } } }
	dest_V9 { ap_memory {  { dest_V9_address0 mem_address 1 2 }  { dest_V9_ce0 mem_ce 1 1 }  { dest_V9_we0 mem_we 1 1 }  { dest_V9_d0 mem_din 1 64 } } }
	dest_V10 { ap_memory {  { dest_V10_address0 mem_address 1 2 }  { dest_V10_ce0 mem_ce 1 1 }  { dest_V10_we0 mem_we 1 1 }  { dest_V10_d0 mem_din 1 64 } } }
	dest_V11 { ap_memory {  { dest_V11_address0 mem_address 1 2 }  { dest_V11_ce0 mem_ce 1 1 }  { dest_V11_we0 mem_we 1 1 }  { dest_V11_d0 mem_din 1 64 } } }
	dest_V12 { ap_memory {  { dest_V12_address0 mem_address 1 2 }  { dest_V12_ce0 mem_ce 1 1 }  { dest_V12_we0 mem_we 1 1 }  { dest_V12_d0 mem_din 1 64 } } }
	dest_V13 { ap_memory {  { dest_V13_address0 mem_address 1 2 }  { dest_V13_ce0 mem_ce 1 1 }  { dest_V13_we0 mem_we 1 1 }  { dest_V13_d0 mem_din 1 64 } } }
	dest_V14 { ap_memory {  { dest_V14_address0 mem_address 1 2 }  { dest_V14_ce0 mem_ce 1 1 }  { dest_V14_we0 mem_we 1 1 }  { dest_V14_d0 mem_din 1 64 } } }
	dest_V15 { ap_memory {  { dest_V15_address0 mem_address 1 2 }  { dest_V15_ce0 mem_ce 1 1 }  { dest_V15_we0 mem_we 1 1 }  { dest_V15_d0 mem_din 1 64 } } }
	dest_V16 { ap_memory {  { dest_V16_address0 mem_address 1 2 }  { dest_V16_ce0 mem_ce 1 1 }  { dest_V16_we0 mem_we 1 1 }  { dest_V16_d0 mem_din 1 64 } } }
	dest_V17 { ap_memory {  { dest_V17_address0 mem_address 1 2 }  { dest_V17_ce0 mem_ce 1 1 }  { dest_V17_we0 mem_we 1 1 }  { dest_V17_d0 mem_din 1 64 } } }
	dest_V18 { ap_memory {  { dest_V18_address0 mem_address 1 2 }  { dest_V18_ce0 mem_ce 1 1 }  { dest_V18_we0 mem_we 1 1 }  { dest_V18_d0 mem_din 1 64 } } }
	dest_V19 { ap_memory {  { dest_V19_address0 mem_address 1 2 }  { dest_V19_ce0 mem_ce 1 1 }  { dest_V19_we0 mem_we 1 1 }  { dest_V19_d0 mem_din 1 64 } } }
	dest_V20 { ap_memory {  { dest_V20_address0 mem_address 1 2 }  { dest_V20_ce0 mem_ce 1 1 }  { dest_V20_we0 mem_we 1 1 }  { dest_V20_d0 mem_din 1 64 } } }
	dest_V21 { ap_memory {  { dest_V21_address0 mem_address 1 2 }  { dest_V21_ce0 mem_ce 1 1 }  { dest_V21_we0 mem_we 1 1 }  { dest_V21_d0 mem_din 1 64 } } }
	dest_V22 { ap_memory {  { dest_V22_address0 mem_address 1 2 }  { dest_V22_ce0 mem_ce 1 1 }  { dest_V22_we0 mem_we 1 1 }  { dest_V22_d0 mem_din 1 64 } } }
	dest_V23 { ap_memory {  { dest_V23_address0 mem_address 1 2 }  { dest_V23_ce0 mem_ce 1 1 }  { dest_V23_we0 mem_we 1 1 }  { dest_V23_d0 mem_din 1 64 } } }
	dest_V24 { ap_memory {  { dest_V24_address0 mem_address 1 2 }  { dest_V24_ce0 mem_ce 1 1 }  { dest_V24_we0 mem_we 1 1 }  { dest_V24_d0 mem_din 1 64 } } }
	dest_V25 { ap_memory {  { dest_V25_address0 mem_address 1 2 }  { dest_V25_ce0 mem_ce 1 1 }  { dest_V25_we0 mem_we 1 1 }  { dest_V25_d0 mem_din 1 64 } } }
	dest_V26 { ap_memory {  { dest_V26_address0 mem_address 1 2 }  { dest_V26_ce0 mem_ce 1 1 }  { dest_V26_we0 mem_we 1 1 }  { dest_V26_d0 mem_din 1 64 } } }
	dest_V27 { ap_memory {  { dest_V27_address0 mem_address 1 2 }  { dest_V27_ce0 mem_ce 1 1 }  { dest_V27_we0 mem_we 1 1 }  { dest_V27_d0 mem_din 1 64 } } }
	dest_V28 { ap_memory {  { dest_V28_address0 mem_address 1 2 }  { dest_V28_ce0 mem_ce 1 1 }  { dest_V28_we0 mem_we 1 1 }  { dest_V28_d0 mem_din 1 64 } } }
	dest_V29 { ap_memory {  { dest_V29_address0 mem_address 1 2 }  { dest_V29_ce0 mem_ce 1 1 }  { dest_V29_we0 mem_we 1 1 }  { dest_V29_d0 mem_din 1 64 } } }
	dest_V30 { ap_memory {  { dest_V30_address0 mem_address 1 2 }  { dest_V30_ce0 mem_ce 1 1 }  { dest_V30_we0 mem_we 1 1 }  { dest_V30_d0 mem_din 1 64 } } }
	dest_V31 { ap_memory {  { dest_V31_address0 mem_address 1 2 }  { dest_V31_ce0 mem_ce 1 1 }  { dest_V31_we0 mem_we 1 1 }  { dest_V31_d0 mem_din 1 64 } } }
	src_V { ap_none {  { src_V in_data 0 512 } } }
	coff { ap_none {  { coff in_data 0 3 } } }
}
