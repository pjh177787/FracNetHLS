set moduleName pgconv64s2_16u_s
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
set C_modelName {pgconv64s2<16u>}
set C_modelType { void 0 }
set C_modelArgList {
	{ bottom1_V int 64 regular {array 100 { 1 1 } 1 1 }  }
	{ row_off int 2 regular  }
	{ col_off int 2 regular  }
	{ top_0_V int 12 regular {array 100 { 2 3 } 1 1 }  }
	{ top_1_V int 12 regular {array 100 { 2 3 } 1 1 }  }
	{ top_2_V int 12 regular {array 100 { 2 3 } 1 1 }  }
	{ top_3_V int 12 regular {array 100 { 2 3 } 1 1 }  }
	{ top_4_V int 12 regular {array 100 { 2 3 } 1 1 }  }
	{ top_5_V int 12 regular {array 100 { 2 3 } 1 1 }  }
	{ top_6_V int 12 regular {array 100 { 2 3 } 1 1 }  }
	{ top_7_V int 12 regular {array 100 { 2 3 } 1 1 }  }
	{ top_8_V int 12 regular {array 100 { 2 3 } 1 1 }  }
	{ top_9_V int 12 regular {array 100 { 2 3 } 1 1 }  }
	{ top_10_V int 12 regular {array 100 { 2 3 } 1 1 }  }
	{ top_11_V int 12 regular {array 100 { 2 3 } 1 1 }  }
	{ top_12_V int 12 regular {array 100 { 2 3 } 1 1 }  }
	{ top_13_V int 12 regular {array 100 { 2 3 } 1 1 }  }
	{ top_14_V int 12 regular {array 100 { 2 3 } 1 1 }  }
	{ top_15_V int 12 regular {array 100 { 2 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "bottom1_V", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "row_off", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "col_off", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "top_0_V", "interface" : "memory", "bitwidth" : 12, "direction" : "READWRITE"} , 
 	{ "Name" : "top_1_V", "interface" : "memory", "bitwidth" : 12, "direction" : "READWRITE"} , 
 	{ "Name" : "top_2_V", "interface" : "memory", "bitwidth" : 12, "direction" : "READWRITE"} , 
 	{ "Name" : "top_3_V", "interface" : "memory", "bitwidth" : 12, "direction" : "READWRITE"} , 
 	{ "Name" : "top_4_V", "interface" : "memory", "bitwidth" : 12, "direction" : "READWRITE"} , 
 	{ "Name" : "top_5_V", "interface" : "memory", "bitwidth" : 12, "direction" : "READWRITE"} , 
 	{ "Name" : "top_6_V", "interface" : "memory", "bitwidth" : 12, "direction" : "READWRITE"} , 
 	{ "Name" : "top_7_V", "interface" : "memory", "bitwidth" : 12, "direction" : "READWRITE"} , 
 	{ "Name" : "top_8_V", "interface" : "memory", "bitwidth" : 12, "direction" : "READWRITE"} , 
 	{ "Name" : "top_9_V", "interface" : "memory", "bitwidth" : 12, "direction" : "READWRITE"} , 
 	{ "Name" : "top_10_V", "interface" : "memory", "bitwidth" : 12, "direction" : "READWRITE"} , 
 	{ "Name" : "top_11_V", "interface" : "memory", "bitwidth" : 12, "direction" : "READWRITE"} , 
 	{ "Name" : "top_12_V", "interface" : "memory", "bitwidth" : 12, "direction" : "READWRITE"} , 
 	{ "Name" : "top_13_V", "interface" : "memory", "bitwidth" : 12, "direction" : "READWRITE"} , 
 	{ "Name" : "top_14_V", "interface" : "memory", "bitwidth" : 12, "direction" : "READWRITE"} , 
 	{ "Name" : "top_15_V", "interface" : "memory", "bitwidth" : 12, "direction" : "READWRITE"} ]}
# RTL Port declarations: 
set portNum 94
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ bottom1_V_address0 sc_out sc_lv 7 signal 0 } 
	{ bottom1_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ bottom1_V_q0 sc_in sc_lv 64 signal 0 } 
	{ bottom1_V_address1 sc_out sc_lv 7 signal 0 } 
	{ bottom1_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ bottom1_V_q1 sc_in sc_lv 64 signal 0 } 
	{ row_off sc_in sc_lv 2 signal 1 } 
	{ col_off sc_in sc_lv 2 signal 2 } 
	{ top_0_V_address0 sc_out sc_lv 7 signal 3 } 
	{ top_0_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ top_0_V_we0 sc_out sc_logic 1 signal 3 } 
	{ top_0_V_d0 sc_out sc_lv 12 signal 3 } 
	{ top_0_V_q0 sc_in sc_lv 12 signal 3 } 
	{ top_1_V_address0 sc_out sc_lv 7 signal 4 } 
	{ top_1_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ top_1_V_we0 sc_out sc_logic 1 signal 4 } 
	{ top_1_V_d0 sc_out sc_lv 12 signal 4 } 
	{ top_1_V_q0 sc_in sc_lv 12 signal 4 } 
	{ top_2_V_address0 sc_out sc_lv 7 signal 5 } 
	{ top_2_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ top_2_V_we0 sc_out sc_logic 1 signal 5 } 
	{ top_2_V_d0 sc_out sc_lv 12 signal 5 } 
	{ top_2_V_q0 sc_in sc_lv 12 signal 5 } 
	{ top_3_V_address0 sc_out sc_lv 7 signal 6 } 
	{ top_3_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ top_3_V_we0 sc_out sc_logic 1 signal 6 } 
	{ top_3_V_d0 sc_out sc_lv 12 signal 6 } 
	{ top_3_V_q0 sc_in sc_lv 12 signal 6 } 
	{ top_4_V_address0 sc_out sc_lv 7 signal 7 } 
	{ top_4_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ top_4_V_we0 sc_out sc_logic 1 signal 7 } 
	{ top_4_V_d0 sc_out sc_lv 12 signal 7 } 
	{ top_4_V_q0 sc_in sc_lv 12 signal 7 } 
	{ top_5_V_address0 sc_out sc_lv 7 signal 8 } 
	{ top_5_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ top_5_V_we0 sc_out sc_logic 1 signal 8 } 
	{ top_5_V_d0 sc_out sc_lv 12 signal 8 } 
	{ top_5_V_q0 sc_in sc_lv 12 signal 8 } 
	{ top_6_V_address0 sc_out sc_lv 7 signal 9 } 
	{ top_6_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ top_6_V_we0 sc_out sc_logic 1 signal 9 } 
	{ top_6_V_d0 sc_out sc_lv 12 signal 9 } 
	{ top_6_V_q0 sc_in sc_lv 12 signal 9 } 
	{ top_7_V_address0 sc_out sc_lv 7 signal 10 } 
	{ top_7_V_ce0 sc_out sc_logic 1 signal 10 } 
	{ top_7_V_we0 sc_out sc_logic 1 signal 10 } 
	{ top_7_V_d0 sc_out sc_lv 12 signal 10 } 
	{ top_7_V_q0 sc_in sc_lv 12 signal 10 } 
	{ top_8_V_address0 sc_out sc_lv 7 signal 11 } 
	{ top_8_V_ce0 sc_out sc_logic 1 signal 11 } 
	{ top_8_V_we0 sc_out sc_logic 1 signal 11 } 
	{ top_8_V_d0 sc_out sc_lv 12 signal 11 } 
	{ top_8_V_q0 sc_in sc_lv 12 signal 11 } 
	{ top_9_V_address0 sc_out sc_lv 7 signal 12 } 
	{ top_9_V_ce0 sc_out sc_logic 1 signal 12 } 
	{ top_9_V_we0 sc_out sc_logic 1 signal 12 } 
	{ top_9_V_d0 sc_out sc_lv 12 signal 12 } 
	{ top_9_V_q0 sc_in sc_lv 12 signal 12 } 
	{ top_10_V_address0 sc_out sc_lv 7 signal 13 } 
	{ top_10_V_ce0 sc_out sc_logic 1 signal 13 } 
	{ top_10_V_we0 sc_out sc_logic 1 signal 13 } 
	{ top_10_V_d0 sc_out sc_lv 12 signal 13 } 
	{ top_10_V_q0 sc_in sc_lv 12 signal 13 } 
	{ top_11_V_address0 sc_out sc_lv 7 signal 14 } 
	{ top_11_V_ce0 sc_out sc_logic 1 signal 14 } 
	{ top_11_V_we0 sc_out sc_logic 1 signal 14 } 
	{ top_11_V_d0 sc_out sc_lv 12 signal 14 } 
	{ top_11_V_q0 sc_in sc_lv 12 signal 14 } 
	{ top_12_V_address0 sc_out sc_lv 7 signal 15 } 
	{ top_12_V_ce0 sc_out sc_logic 1 signal 15 } 
	{ top_12_V_we0 sc_out sc_logic 1 signal 15 } 
	{ top_12_V_d0 sc_out sc_lv 12 signal 15 } 
	{ top_12_V_q0 sc_in sc_lv 12 signal 15 } 
	{ top_13_V_address0 sc_out sc_lv 7 signal 16 } 
	{ top_13_V_ce0 sc_out sc_logic 1 signal 16 } 
	{ top_13_V_we0 sc_out sc_logic 1 signal 16 } 
	{ top_13_V_d0 sc_out sc_lv 12 signal 16 } 
	{ top_13_V_q0 sc_in sc_lv 12 signal 16 } 
	{ top_14_V_address0 sc_out sc_lv 7 signal 17 } 
	{ top_14_V_ce0 sc_out sc_logic 1 signal 17 } 
	{ top_14_V_we0 sc_out sc_logic 1 signal 17 } 
	{ top_14_V_d0 sc_out sc_lv 12 signal 17 } 
	{ top_14_V_q0 sc_in sc_lv 12 signal 17 } 
	{ top_15_V_address0 sc_out sc_lv 7 signal 18 } 
	{ top_15_V_ce0 sc_out sc_logic 1 signal 18 } 
	{ top_15_V_we0 sc_out sc_logic 1 signal 18 } 
	{ top_15_V_d0 sc_out sc_lv 12 signal 18 } 
	{ top_15_V_q0 sc_in sc_lv 12 signal 18 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "bottom1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "bottom1_V", "role": "address0" }} , 
 	{ "name": "bottom1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom1_V", "role": "ce0" }} , 
 	{ "name": "bottom1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "bottom1_V", "role": "q0" }} , 
 	{ "name": "bottom1_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "bottom1_V", "role": "address1" }} , 
 	{ "name": "bottom1_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom1_V", "role": "ce1" }} , 
 	{ "name": "bottom1_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "bottom1_V", "role": "q1" }} , 
 	{ "name": "row_off", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "row_off", "role": "default" }} , 
 	{ "name": "col_off", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "col_off", "role": "default" }} , 
 	{ "name": "top_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_0_V", "role": "address0" }} , 
 	{ "name": "top_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_0_V", "role": "ce0" }} , 
 	{ "name": "top_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_0_V", "role": "we0" }} , 
 	{ "name": "top_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_0_V", "role": "d0" }} , 
 	{ "name": "top_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_0_V", "role": "q0" }} , 
 	{ "name": "top_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_1_V", "role": "address0" }} , 
 	{ "name": "top_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_1_V", "role": "ce0" }} , 
 	{ "name": "top_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_1_V", "role": "we0" }} , 
 	{ "name": "top_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_1_V", "role": "d0" }} , 
 	{ "name": "top_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_1_V", "role": "q0" }} , 
 	{ "name": "top_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_2_V", "role": "address0" }} , 
 	{ "name": "top_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_2_V", "role": "ce0" }} , 
 	{ "name": "top_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_2_V", "role": "we0" }} , 
 	{ "name": "top_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_2_V", "role": "d0" }} , 
 	{ "name": "top_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_2_V", "role": "q0" }} , 
 	{ "name": "top_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_3_V", "role": "address0" }} , 
 	{ "name": "top_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_3_V", "role": "ce0" }} , 
 	{ "name": "top_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_3_V", "role": "we0" }} , 
 	{ "name": "top_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_3_V", "role": "d0" }} , 
 	{ "name": "top_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_3_V", "role": "q0" }} , 
 	{ "name": "top_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_4_V", "role": "address0" }} , 
 	{ "name": "top_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_4_V", "role": "ce0" }} , 
 	{ "name": "top_4_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_4_V", "role": "we0" }} , 
 	{ "name": "top_4_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_4_V", "role": "d0" }} , 
 	{ "name": "top_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_4_V", "role": "q0" }} , 
 	{ "name": "top_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_5_V", "role": "address0" }} , 
 	{ "name": "top_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_5_V", "role": "ce0" }} , 
 	{ "name": "top_5_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_5_V", "role": "we0" }} , 
 	{ "name": "top_5_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_5_V", "role": "d0" }} , 
 	{ "name": "top_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_5_V", "role": "q0" }} , 
 	{ "name": "top_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_6_V", "role": "address0" }} , 
 	{ "name": "top_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_6_V", "role": "ce0" }} , 
 	{ "name": "top_6_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_6_V", "role": "we0" }} , 
 	{ "name": "top_6_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_6_V", "role": "d0" }} , 
 	{ "name": "top_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_6_V", "role": "q0" }} , 
 	{ "name": "top_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_7_V", "role": "address0" }} , 
 	{ "name": "top_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_7_V", "role": "ce0" }} , 
 	{ "name": "top_7_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_7_V", "role": "we0" }} , 
 	{ "name": "top_7_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_7_V", "role": "d0" }} , 
 	{ "name": "top_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_7_V", "role": "q0" }} , 
 	{ "name": "top_8_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_8_V", "role": "address0" }} , 
 	{ "name": "top_8_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_8_V", "role": "ce0" }} , 
 	{ "name": "top_8_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_8_V", "role": "we0" }} , 
 	{ "name": "top_8_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_8_V", "role": "d0" }} , 
 	{ "name": "top_8_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_8_V", "role": "q0" }} , 
 	{ "name": "top_9_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_9_V", "role": "address0" }} , 
 	{ "name": "top_9_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_9_V", "role": "ce0" }} , 
 	{ "name": "top_9_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_9_V", "role": "we0" }} , 
 	{ "name": "top_9_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_9_V", "role": "d0" }} , 
 	{ "name": "top_9_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_9_V", "role": "q0" }} , 
 	{ "name": "top_10_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_10_V", "role": "address0" }} , 
 	{ "name": "top_10_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_10_V", "role": "ce0" }} , 
 	{ "name": "top_10_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_10_V", "role": "we0" }} , 
 	{ "name": "top_10_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_10_V", "role": "d0" }} , 
 	{ "name": "top_10_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_10_V", "role": "q0" }} , 
 	{ "name": "top_11_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_11_V", "role": "address0" }} , 
 	{ "name": "top_11_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_11_V", "role": "ce0" }} , 
 	{ "name": "top_11_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_11_V", "role": "we0" }} , 
 	{ "name": "top_11_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_11_V", "role": "d0" }} , 
 	{ "name": "top_11_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_11_V", "role": "q0" }} , 
 	{ "name": "top_12_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_12_V", "role": "address0" }} , 
 	{ "name": "top_12_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_12_V", "role": "ce0" }} , 
 	{ "name": "top_12_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_12_V", "role": "we0" }} , 
 	{ "name": "top_12_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_12_V", "role": "d0" }} , 
 	{ "name": "top_12_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_12_V", "role": "q0" }} , 
 	{ "name": "top_13_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_13_V", "role": "address0" }} , 
 	{ "name": "top_13_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_13_V", "role": "ce0" }} , 
 	{ "name": "top_13_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_13_V", "role": "we0" }} , 
 	{ "name": "top_13_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_13_V", "role": "d0" }} , 
 	{ "name": "top_13_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_13_V", "role": "q0" }} , 
 	{ "name": "top_14_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_14_V", "role": "address0" }} , 
 	{ "name": "top_14_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_14_V", "role": "ce0" }} , 
 	{ "name": "top_14_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_14_V", "role": "we0" }} , 
 	{ "name": "top_14_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_14_V", "role": "d0" }} , 
 	{ "name": "top_14_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_14_V", "role": "q0" }} , 
 	{ "name": "top_15_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "top_15_V", "role": "address0" }} , 
 	{ "name": "top_15_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_15_V", "role": "ce0" }} , 
 	{ "name": "top_15_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_15_V", "role": "we0" }} , 
 	{ "name": "top_15_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_15_V", "role": "d0" }} , 
 	{ "name": "top_15_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_15_V", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "3", "5"],
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
					{"ID" : "1", "SubInstance" : "grp_compute_engine_64_fu_575", "Port" : "lut16_V_1"},
					{"ID" : "3", "SubInstance" : "grp_compute_engine_64_fu_585", "Port" : "lut16_V_1"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_575", "Parent" : "0", "Child" : ["2"],
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
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_575.lut16_V_1_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_585", "Parent" : "0", "Child" : ["4"],
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
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_64_fu_585.lut16_V_1_U", "Parent" : "3"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sum_V_ret_sum_engine_fu_595", "Parent" : "0",
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
		t8_V {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "85", "Max" : "85"}
	, {"Name" : "Interval", "Min" : "85", "Max" : "85"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	bottom1_V { ap_memory {  { bottom1_V_address0 mem_address 1 7 }  { bottom1_V_ce0 mem_ce 1 1 }  { bottom1_V_q0 mem_dout 0 64 }  { bottom1_V_address1 MemPortADDR2 1 7 }  { bottom1_V_ce1 MemPortCE2 1 1 }  { bottom1_V_q1 MemPortDOUT2 0 64 } } }
	row_off { ap_none {  { row_off in_data 0 2 } } }
	col_off { ap_none {  { col_off in_data 0 2 } } }
	top_0_V { ap_memory {  { top_0_V_address0 mem_address 1 7 }  { top_0_V_ce0 mem_ce 1 1 }  { top_0_V_we0 mem_we 1 1 }  { top_0_V_d0 mem_din 1 12 }  { top_0_V_q0 mem_dout 0 12 } } }
	top_1_V { ap_memory {  { top_1_V_address0 mem_address 1 7 }  { top_1_V_ce0 mem_ce 1 1 }  { top_1_V_we0 mem_we 1 1 }  { top_1_V_d0 mem_din 1 12 }  { top_1_V_q0 mem_dout 0 12 } } }
	top_2_V { ap_memory {  { top_2_V_address0 mem_address 1 7 }  { top_2_V_ce0 mem_ce 1 1 }  { top_2_V_we0 mem_we 1 1 }  { top_2_V_d0 mem_din 1 12 }  { top_2_V_q0 mem_dout 0 12 } } }
	top_3_V { ap_memory {  { top_3_V_address0 mem_address 1 7 }  { top_3_V_ce0 mem_ce 1 1 }  { top_3_V_we0 mem_we 1 1 }  { top_3_V_d0 mem_din 1 12 }  { top_3_V_q0 mem_dout 0 12 } } }
	top_4_V { ap_memory {  { top_4_V_address0 mem_address 1 7 }  { top_4_V_ce0 mem_ce 1 1 }  { top_4_V_we0 mem_we 1 1 }  { top_4_V_d0 mem_din 1 12 }  { top_4_V_q0 mem_dout 0 12 } } }
	top_5_V { ap_memory {  { top_5_V_address0 mem_address 1 7 }  { top_5_V_ce0 mem_ce 1 1 }  { top_5_V_we0 mem_we 1 1 }  { top_5_V_d0 mem_din 1 12 }  { top_5_V_q0 mem_dout 0 12 } } }
	top_6_V { ap_memory {  { top_6_V_address0 mem_address 1 7 }  { top_6_V_ce0 mem_ce 1 1 }  { top_6_V_we0 mem_we 1 1 }  { top_6_V_d0 mem_din 1 12 }  { top_6_V_q0 mem_dout 0 12 } } }
	top_7_V { ap_memory {  { top_7_V_address0 mem_address 1 7 }  { top_7_V_ce0 mem_ce 1 1 }  { top_7_V_we0 mem_we 1 1 }  { top_7_V_d0 mem_din 1 12 }  { top_7_V_q0 mem_dout 0 12 } } }
	top_8_V { ap_memory {  { top_8_V_address0 mem_address 1 7 }  { top_8_V_ce0 mem_ce 1 1 }  { top_8_V_we0 mem_we 1 1 }  { top_8_V_d0 mem_din 1 12 }  { top_8_V_q0 mem_dout 0 12 } } }
	top_9_V { ap_memory {  { top_9_V_address0 mem_address 1 7 }  { top_9_V_ce0 mem_ce 1 1 }  { top_9_V_we0 mem_we 1 1 }  { top_9_V_d0 mem_din 1 12 }  { top_9_V_q0 mem_dout 0 12 } } }
	top_10_V { ap_memory {  { top_10_V_address0 mem_address 1 7 }  { top_10_V_ce0 mem_ce 1 1 }  { top_10_V_we0 mem_we 1 1 }  { top_10_V_d0 mem_din 1 12 }  { top_10_V_q0 mem_dout 0 12 } } }
	top_11_V { ap_memory {  { top_11_V_address0 mem_address 1 7 }  { top_11_V_ce0 mem_ce 1 1 }  { top_11_V_we0 mem_we 1 1 }  { top_11_V_d0 mem_din 1 12 }  { top_11_V_q0 mem_dout 0 12 } } }
	top_12_V { ap_memory {  { top_12_V_address0 mem_address 1 7 }  { top_12_V_ce0 mem_ce 1 1 }  { top_12_V_we0 mem_we 1 1 }  { top_12_V_d0 mem_din 1 12 }  { top_12_V_q0 mem_dout 0 12 } } }
	top_13_V { ap_memory {  { top_13_V_address0 mem_address 1 7 }  { top_13_V_ce0 mem_ce 1 1 }  { top_13_V_we0 mem_we 1 1 }  { top_13_V_d0 mem_din 1 12 }  { top_13_V_q0 mem_dout 0 12 } } }
	top_14_V { ap_memory {  { top_14_V_address0 mem_address 1 7 }  { top_14_V_ce0 mem_ce 1 1 }  { top_14_V_we0 mem_we 1 1 }  { top_14_V_d0 mem_din 1 12 }  { top_14_V_q0 mem_dout 0 12 } } }
	top_15_V { ap_memory {  { top_15_V_address0 mem_address 1 7 }  { top_15_V_ce0 mem_ce 1 1 }  { top_15_V_we0 mem_we 1 1 }  { top_15_V_d0 mem_din 1 12 }  { top_15_V_q0 mem_dout 0 12 } } }
}
