set moduleName biconv16
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
set C_modelName {biconv16}
set C_modelType { void 0 }
set C_modelArgList {
	{ bottom_0_V int 16 regular {array 1024 { 1 1 } 1 1 }  }
	{ bottom_1_V int 16 regular {array 1024 { 1 1 } 1 1 }  }
	{ bottom_2_V int 16 regular {array 1024 { 1 1 } 1 1 }  }
	{ bottom_3_V int 16 regular {array 1024 { 1 1 } 1 1 }  }
	{ bottom_4_V int 16 regular {array 1024 { 1 1 } 1 1 }  }
	{ bottom_5_V int 16 regular {array 1024 { 1 1 } 1 1 }  }
	{ bottom_V_offset int 3 regular  }
	{ weights_0_V int 2 regular {array 9 { 1 1 } 1 1 }  }
	{ weights_1_V int 2 regular {array 9 { 1 1 } 1 1 }  }
	{ weights_2_V int 2 regular {array 9 { 1 1 } 1 1 }  }
	{ weights_3_V int 2 regular {array 9 { 1 1 } 1 1 }  }
	{ weights_4_V int 2 regular {array 9 { 1 1 } 1 1 }  }
	{ weights_5_V int 2 regular {array 9 { 1 1 } 1 1 }  }
	{ weights_6_V int 2 regular {array 9 { 1 1 } 1 1 }  }
	{ weights_7_V int 2 regular {array 9 { 1 1 } 1 1 }  }
	{ weights_8_V int 2 regular {array 9 { 1 1 } 1 1 }  }
	{ weights_9_V int 2 regular {array 9 { 1 1 } 1 1 }  }
	{ weights_10_V int 2 regular {array 9 { 1 1 } 1 1 }  }
	{ weights_11_V int 2 regular {array 9 { 1 1 } 1 1 }  }
	{ weights_12_V int 2 regular {array 9 { 1 1 } 1 1 }  }
	{ weights_13_V int 2 regular {array 9 { 1 1 } 1 1 }  }
	{ weights_14_V int 2 regular {array 9 { 1 1 } 1 1 }  }
	{ weights_15_V int 2 regular {array 9 { 1 1 } 1 1 }  }
	{ top_0_V int 12 regular {array 1024 { 2 3 } 1 1 }  }
	{ top_1_V int 12 regular {array 1024 { 2 3 } 1 1 }  }
	{ top_2_V int 12 regular {array 1024 { 2 3 } 1 1 }  }
	{ top_3_V int 12 regular {array 1024 { 2 3 } 1 1 }  }
	{ top_4_V int 12 regular {array 1024 { 2 3 } 1 1 }  }
	{ top_5_V int 12 regular {array 1024 { 2 3 } 1 1 }  }
	{ top_6_V int 12 regular {array 1024 { 2 3 } 1 1 }  }
	{ top_7_V int 12 regular {array 1024 { 2 3 } 1 1 }  }
	{ top_8_V int 12 regular {array 1024 { 2 3 } 1 1 }  }
	{ top_9_V int 12 regular {array 1024 { 2 3 } 1 1 }  }
	{ top_10_V int 12 regular {array 1024 { 2 3 } 1 1 }  }
	{ top_11_V int 12 regular {array 1024 { 2 3 } 1 1 }  }
	{ top_12_V int 12 regular {array 1024 { 2 3 } 1 1 }  }
	{ top_13_V int 12 regular {array 1024 { 2 3 } 1 1 }  }
	{ top_14_V int 12 regular {array 1024 { 2 3 } 1 1 }  }
	{ top_15_V int 12 regular {array 1024 { 2 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "bottom_0_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_1_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_2_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_3_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_4_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_5_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bottom_V_offset", "interface" : "wire", "bitwidth" : 3, "direction" : "READONLY"} , 
 	{ "Name" : "weights_0_V", "interface" : "memory", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "weights_1_V", "interface" : "memory", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "weights_2_V", "interface" : "memory", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "weights_3_V", "interface" : "memory", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "weights_4_V", "interface" : "memory", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "weights_5_V", "interface" : "memory", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "weights_6_V", "interface" : "memory", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "weights_7_V", "interface" : "memory", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "weights_8_V", "interface" : "memory", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "weights_9_V", "interface" : "memory", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "weights_10_V", "interface" : "memory", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "weights_11_V", "interface" : "memory", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "weights_12_V", "interface" : "memory", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "weights_13_V", "interface" : "memory", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "weights_14_V", "interface" : "memory", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "weights_15_V", "interface" : "memory", "bitwidth" : 2, "direction" : "READONLY"} , 
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
set portNum 219
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ bottom_0_V_address0 sc_out sc_lv 10 signal 0 } 
	{ bottom_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ bottom_0_V_q0 sc_in sc_lv 16 signal 0 } 
	{ bottom_0_V_address1 sc_out sc_lv 10 signal 0 } 
	{ bottom_0_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ bottom_0_V_q1 sc_in sc_lv 16 signal 0 } 
	{ bottom_1_V_address0 sc_out sc_lv 10 signal 1 } 
	{ bottom_1_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ bottom_1_V_q0 sc_in sc_lv 16 signal 1 } 
	{ bottom_1_V_address1 sc_out sc_lv 10 signal 1 } 
	{ bottom_1_V_ce1 sc_out sc_logic 1 signal 1 } 
	{ bottom_1_V_q1 sc_in sc_lv 16 signal 1 } 
	{ bottom_2_V_address0 sc_out sc_lv 10 signal 2 } 
	{ bottom_2_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ bottom_2_V_q0 sc_in sc_lv 16 signal 2 } 
	{ bottom_2_V_address1 sc_out sc_lv 10 signal 2 } 
	{ bottom_2_V_ce1 sc_out sc_logic 1 signal 2 } 
	{ bottom_2_V_q1 sc_in sc_lv 16 signal 2 } 
	{ bottom_3_V_address0 sc_out sc_lv 10 signal 3 } 
	{ bottom_3_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ bottom_3_V_q0 sc_in sc_lv 16 signal 3 } 
	{ bottom_3_V_address1 sc_out sc_lv 10 signal 3 } 
	{ bottom_3_V_ce1 sc_out sc_logic 1 signal 3 } 
	{ bottom_3_V_q1 sc_in sc_lv 16 signal 3 } 
	{ bottom_4_V_address0 sc_out sc_lv 10 signal 4 } 
	{ bottom_4_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ bottom_4_V_q0 sc_in sc_lv 16 signal 4 } 
	{ bottom_4_V_address1 sc_out sc_lv 10 signal 4 } 
	{ bottom_4_V_ce1 sc_out sc_logic 1 signal 4 } 
	{ bottom_4_V_q1 sc_in sc_lv 16 signal 4 } 
	{ bottom_5_V_address0 sc_out sc_lv 10 signal 5 } 
	{ bottom_5_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ bottom_5_V_q0 sc_in sc_lv 16 signal 5 } 
	{ bottom_5_V_address1 sc_out sc_lv 10 signal 5 } 
	{ bottom_5_V_ce1 sc_out sc_logic 1 signal 5 } 
	{ bottom_5_V_q1 sc_in sc_lv 16 signal 5 } 
	{ bottom_V_offset sc_in sc_lv 3 signal 6 } 
	{ weights_0_V_address0 sc_out sc_lv 4 signal 7 } 
	{ weights_0_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ weights_0_V_q0 sc_in sc_lv 2 signal 7 } 
	{ weights_0_V_address1 sc_out sc_lv 4 signal 7 } 
	{ weights_0_V_ce1 sc_out sc_logic 1 signal 7 } 
	{ weights_0_V_q1 sc_in sc_lv 2 signal 7 } 
	{ weights_1_V_address0 sc_out sc_lv 4 signal 8 } 
	{ weights_1_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ weights_1_V_q0 sc_in sc_lv 2 signal 8 } 
	{ weights_1_V_address1 sc_out sc_lv 4 signal 8 } 
	{ weights_1_V_ce1 sc_out sc_logic 1 signal 8 } 
	{ weights_1_V_q1 sc_in sc_lv 2 signal 8 } 
	{ weights_2_V_address0 sc_out sc_lv 4 signal 9 } 
	{ weights_2_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ weights_2_V_q0 sc_in sc_lv 2 signal 9 } 
	{ weights_2_V_address1 sc_out sc_lv 4 signal 9 } 
	{ weights_2_V_ce1 sc_out sc_logic 1 signal 9 } 
	{ weights_2_V_q1 sc_in sc_lv 2 signal 9 } 
	{ weights_3_V_address0 sc_out sc_lv 4 signal 10 } 
	{ weights_3_V_ce0 sc_out sc_logic 1 signal 10 } 
	{ weights_3_V_q0 sc_in sc_lv 2 signal 10 } 
	{ weights_3_V_address1 sc_out sc_lv 4 signal 10 } 
	{ weights_3_V_ce1 sc_out sc_logic 1 signal 10 } 
	{ weights_3_V_q1 sc_in sc_lv 2 signal 10 } 
	{ weights_4_V_address0 sc_out sc_lv 4 signal 11 } 
	{ weights_4_V_ce0 sc_out sc_logic 1 signal 11 } 
	{ weights_4_V_q0 sc_in sc_lv 2 signal 11 } 
	{ weights_4_V_address1 sc_out sc_lv 4 signal 11 } 
	{ weights_4_V_ce1 sc_out sc_logic 1 signal 11 } 
	{ weights_4_V_q1 sc_in sc_lv 2 signal 11 } 
	{ weights_5_V_address0 sc_out sc_lv 4 signal 12 } 
	{ weights_5_V_ce0 sc_out sc_logic 1 signal 12 } 
	{ weights_5_V_q0 sc_in sc_lv 2 signal 12 } 
	{ weights_5_V_address1 sc_out sc_lv 4 signal 12 } 
	{ weights_5_V_ce1 sc_out sc_logic 1 signal 12 } 
	{ weights_5_V_q1 sc_in sc_lv 2 signal 12 } 
	{ weights_6_V_address0 sc_out sc_lv 4 signal 13 } 
	{ weights_6_V_ce0 sc_out sc_logic 1 signal 13 } 
	{ weights_6_V_q0 sc_in sc_lv 2 signal 13 } 
	{ weights_6_V_address1 sc_out sc_lv 4 signal 13 } 
	{ weights_6_V_ce1 sc_out sc_logic 1 signal 13 } 
	{ weights_6_V_q1 sc_in sc_lv 2 signal 13 } 
	{ weights_7_V_address0 sc_out sc_lv 4 signal 14 } 
	{ weights_7_V_ce0 sc_out sc_logic 1 signal 14 } 
	{ weights_7_V_q0 sc_in sc_lv 2 signal 14 } 
	{ weights_7_V_address1 sc_out sc_lv 4 signal 14 } 
	{ weights_7_V_ce1 sc_out sc_logic 1 signal 14 } 
	{ weights_7_V_q1 sc_in sc_lv 2 signal 14 } 
	{ weights_8_V_address0 sc_out sc_lv 4 signal 15 } 
	{ weights_8_V_ce0 sc_out sc_logic 1 signal 15 } 
	{ weights_8_V_q0 sc_in sc_lv 2 signal 15 } 
	{ weights_8_V_address1 sc_out sc_lv 4 signal 15 } 
	{ weights_8_V_ce1 sc_out sc_logic 1 signal 15 } 
	{ weights_8_V_q1 sc_in sc_lv 2 signal 15 } 
	{ weights_9_V_address0 sc_out sc_lv 4 signal 16 } 
	{ weights_9_V_ce0 sc_out sc_logic 1 signal 16 } 
	{ weights_9_V_q0 sc_in sc_lv 2 signal 16 } 
	{ weights_9_V_address1 sc_out sc_lv 4 signal 16 } 
	{ weights_9_V_ce1 sc_out sc_logic 1 signal 16 } 
	{ weights_9_V_q1 sc_in sc_lv 2 signal 16 } 
	{ weights_10_V_address0 sc_out sc_lv 4 signal 17 } 
	{ weights_10_V_ce0 sc_out sc_logic 1 signal 17 } 
	{ weights_10_V_q0 sc_in sc_lv 2 signal 17 } 
	{ weights_10_V_address1 sc_out sc_lv 4 signal 17 } 
	{ weights_10_V_ce1 sc_out sc_logic 1 signal 17 } 
	{ weights_10_V_q1 sc_in sc_lv 2 signal 17 } 
	{ weights_11_V_address0 sc_out sc_lv 4 signal 18 } 
	{ weights_11_V_ce0 sc_out sc_logic 1 signal 18 } 
	{ weights_11_V_q0 sc_in sc_lv 2 signal 18 } 
	{ weights_11_V_address1 sc_out sc_lv 4 signal 18 } 
	{ weights_11_V_ce1 sc_out sc_logic 1 signal 18 } 
	{ weights_11_V_q1 sc_in sc_lv 2 signal 18 } 
	{ weights_12_V_address0 sc_out sc_lv 4 signal 19 } 
	{ weights_12_V_ce0 sc_out sc_logic 1 signal 19 } 
	{ weights_12_V_q0 sc_in sc_lv 2 signal 19 } 
	{ weights_12_V_address1 sc_out sc_lv 4 signal 19 } 
	{ weights_12_V_ce1 sc_out sc_logic 1 signal 19 } 
	{ weights_12_V_q1 sc_in sc_lv 2 signal 19 } 
	{ weights_13_V_address0 sc_out sc_lv 4 signal 20 } 
	{ weights_13_V_ce0 sc_out sc_logic 1 signal 20 } 
	{ weights_13_V_q0 sc_in sc_lv 2 signal 20 } 
	{ weights_13_V_address1 sc_out sc_lv 4 signal 20 } 
	{ weights_13_V_ce1 sc_out sc_logic 1 signal 20 } 
	{ weights_13_V_q1 sc_in sc_lv 2 signal 20 } 
	{ weights_14_V_address0 sc_out sc_lv 4 signal 21 } 
	{ weights_14_V_ce0 sc_out sc_logic 1 signal 21 } 
	{ weights_14_V_q0 sc_in sc_lv 2 signal 21 } 
	{ weights_14_V_address1 sc_out sc_lv 4 signal 21 } 
	{ weights_14_V_ce1 sc_out sc_logic 1 signal 21 } 
	{ weights_14_V_q1 sc_in sc_lv 2 signal 21 } 
	{ weights_15_V_address0 sc_out sc_lv 4 signal 22 } 
	{ weights_15_V_ce0 sc_out sc_logic 1 signal 22 } 
	{ weights_15_V_q0 sc_in sc_lv 2 signal 22 } 
	{ weights_15_V_address1 sc_out sc_lv 4 signal 22 } 
	{ weights_15_V_ce1 sc_out sc_logic 1 signal 22 } 
	{ weights_15_V_q1 sc_in sc_lv 2 signal 22 } 
	{ top_0_V_address0 sc_out sc_lv 10 signal 23 } 
	{ top_0_V_ce0 sc_out sc_logic 1 signal 23 } 
	{ top_0_V_we0 sc_out sc_logic 1 signal 23 } 
	{ top_0_V_d0 sc_out sc_lv 12 signal 23 } 
	{ top_0_V_q0 sc_in sc_lv 12 signal 23 } 
	{ top_1_V_address0 sc_out sc_lv 10 signal 24 } 
	{ top_1_V_ce0 sc_out sc_logic 1 signal 24 } 
	{ top_1_V_we0 sc_out sc_logic 1 signal 24 } 
	{ top_1_V_d0 sc_out sc_lv 12 signal 24 } 
	{ top_1_V_q0 sc_in sc_lv 12 signal 24 } 
	{ top_2_V_address0 sc_out sc_lv 10 signal 25 } 
	{ top_2_V_ce0 sc_out sc_logic 1 signal 25 } 
	{ top_2_V_we0 sc_out sc_logic 1 signal 25 } 
	{ top_2_V_d0 sc_out sc_lv 12 signal 25 } 
	{ top_2_V_q0 sc_in sc_lv 12 signal 25 } 
	{ top_3_V_address0 sc_out sc_lv 10 signal 26 } 
	{ top_3_V_ce0 sc_out sc_logic 1 signal 26 } 
	{ top_3_V_we0 sc_out sc_logic 1 signal 26 } 
	{ top_3_V_d0 sc_out sc_lv 12 signal 26 } 
	{ top_3_V_q0 sc_in sc_lv 12 signal 26 } 
	{ top_4_V_address0 sc_out sc_lv 10 signal 27 } 
	{ top_4_V_ce0 sc_out sc_logic 1 signal 27 } 
	{ top_4_V_we0 sc_out sc_logic 1 signal 27 } 
	{ top_4_V_d0 sc_out sc_lv 12 signal 27 } 
	{ top_4_V_q0 sc_in sc_lv 12 signal 27 } 
	{ top_5_V_address0 sc_out sc_lv 10 signal 28 } 
	{ top_5_V_ce0 sc_out sc_logic 1 signal 28 } 
	{ top_5_V_we0 sc_out sc_logic 1 signal 28 } 
	{ top_5_V_d0 sc_out sc_lv 12 signal 28 } 
	{ top_5_V_q0 sc_in sc_lv 12 signal 28 } 
	{ top_6_V_address0 sc_out sc_lv 10 signal 29 } 
	{ top_6_V_ce0 sc_out sc_logic 1 signal 29 } 
	{ top_6_V_we0 sc_out sc_logic 1 signal 29 } 
	{ top_6_V_d0 sc_out sc_lv 12 signal 29 } 
	{ top_6_V_q0 sc_in sc_lv 12 signal 29 } 
	{ top_7_V_address0 sc_out sc_lv 10 signal 30 } 
	{ top_7_V_ce0 sc_out sc_logic 1 signal 30 } 
	{ top_7_V_we0 sc_out sc_logic 1 signal 30 } 
	{ top_7_V_d0 sc_out sc_lv 12 signal 30 } 
	{ top_7_V_q0 sc_in sc_lv 12 signal 30 } 
	{ top_8_V_address0 sc_out sc_lv 10 signal 31 } 
	{ top_8_V_ce0 sc_out sc_logic 1 signal 31 } 
	{ top_8_V_we0 sc_out sc_logic 1 signal 31 } 
	{ top_8_V_d0 sc_out sc_lv 12 signal 31 } 
	{ top_8_V_q0 sc_in sc_lv 12 signal 31 } 
	{ top_9_V_address0 sc_out sc_lv 10 signal 32 } 
	{ top_9_V_ce0 sc_out sc_logic 1 signal 32 } 
	{ top_9_V_we0 sc_out sc_logic 1 signal 32 } 
	{ top_9_V_d0 sc_out sc_lv 12 signal 32 } 
	{ top_9_V_q0 sc_in sc_lv 12 signal 32 } 
	{ top_10_V_address0 sc_out sc_lv 10 signal 33 } 
	{ top_10_V_ce0 sc_out sc_logic 1 signal 33 } 
	{ top_10_V_we0 sc_out sc_logic 1 signal 33 } 
	{ top_10_V_d0 sc_out sc_lv 12 signal 33 } 
	{ top_10_V_q0 sc_in sc_lv 12 signal 33 } 
	{ top_11_V_address0 sc_out sc_lv 10 signal 34 } 
	{ top_11_V_ce0 sc_out sc_logic 1 signal 34 } 
	{ top_11_V_we0 sc_out sc_logic 1 signal 34 } 
	{ top_11_V_d0 sc_out sc_lv 12 signal 34 } 
	{ top_11_V_q0 sc_in sc_lv 12 signal 34 } 
	{ top_12_V_address0 sc_out sc_lv 10 signal 35 } 
	{ top_12_V_ce0 sc_out sc_logic 1 signal 35 } 
	{ top_12_V_we0 sc_out sc_logic 1 signal 35 } 
	{ top_12_V_d0 sc_out sc_lv 12 signal 35 } 
	{ top_12_V_q0 sc_in sc_lv 12 signal 35 } 
	{ top_13_V_address0 sc_out sc_lv 10 signal 36 } 
	{ top_13_V_ce0 sc_out sc_logic 1 signal 36 } 
	{ top_13_V_we0 sc_out sc_logic 1 signal 36 } 
	{ top_13_V_d0 sc_out sc_lv 12 signal 36 } 
	{ top_13_V_q0 sc_in sc_lv 12 signal 36 } 
	{ top_14_V_address0 sc_out sc_lv 10 signal 37 } 
	{ top_14_V_ce0 sc_out sc_logic 1 signal 37 } 
	{ top_14_V_we0 sc_out sc_logic 1 signal 37 } 
	{ top_14_V_d0 sc_out sc_lv 12 signal 37 } 
	{ top_14_V_q0 sc_in sc_lv 12 signal 37 } 
	{ top_15_V_address0 sc_out sc_lv 10 signal 38 } 
	{ top_15_V_ce0 sc_out sc_logic 1 signal 38 } 
	{ top_15_V_we0 sc_out sc_logic 1 signal 38 } 
	{ top_15_V_d0 sc_out sc_lv 12 signal 38 } 
	{ top_15_V_q0 sc_in sc_lv 12 signal 38 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "bottom_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "bottom_0_V", "role": "address0" }} , 
 	{ "name": "bottom_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_0_V", "role": "ce0" }} , 
 	{ "name": "bottom_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bottom_0_V", "role": "q0" }} , 
 	{ "name": "bottom_0_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "bottom_0_V", "role": "address1" }} , 
 	{ "name": "bottom_0_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_0_V", "role": "ce1" }} , 
 	{ "name": "bottom_0_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bottom_0_V", "role": "q1" }} , 
 	{ "name": "bottom_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "bottom_1_V", "role": "address0" }} , 
 	{ "name": "bottom_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_1_V", "role": "ce0" }} , 
 	{ "name": "bottom_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bottom_1_V", "role": "q0" }} , 
 	{ "name": "bottom_1_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "bottom_1_V", "role": "address1" }} , 
 	{ "name": "bottom_1_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_1_V", "role": "ce1" }} , 
 	{ "name": "bottom_1_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bottom_1_V", "role": "q1" }} , 
 	{ "name": "bottom_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "bottom_2_V", "role": "address0" }} , 
 	{ "name": "bottom_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_2_V", "role": "ce0" }} , 
 	{ "name": "bottom_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bottom_2_V", "role": "q0" }} , 
 	{ "name": "bottom_2_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "bottom_2_V", "role": "address1" }} , 
 	{ "name": "bottom_2_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_2_V", "role": "ce1" }} , 
 	{ "name": "bottom_2_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bottom_2_V", "role": "q1" }} , 
 	{ "name": "bottom_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "bottom_3_V", "role": "address0" }} , 
 	{ "name": "bottom_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_3_V", "role": "ce0" }} , 
 	{ "name": "bottom_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bottom_3_V", "role": "q0" }} , 
 	{ "name": "bottom_3_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "bottom_3_V", "role": "address1" }} , 
 	{ "name": "bottom_3_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_3_V", "role": "ce1" }} , 
 	{ "name": "bottom_3_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bottom_3_V", "role": "q1" }} , 
 	{ "name": "bottom_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "bottom_4_V", "role": "address0" }} , 
 	{ "name": "bottom_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_4_V", "role": "ce0" }} , 
 	{ "name": "bottom_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bottom_4_V", "role": "q0" }} , 
 	{ "name": "bottom_4_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "bottom_4_V", "role": "address1" }} , 
 	{ "name": "bottom_4_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_4_V", "role": "ce1" }} , 
 	{ "name": "bottom_4_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bottom_4_V", "role": "q1" }} , 
 	{ "name": "bottom_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "bottom_5_V", "role": "address0" }} , 
 	{ "name": "bottom_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_5_V", "role": "ce0" }} , 
 	{ "name": "bottom_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bottom_5_V", "role": "q0" }} , 
 	{ "name": "bottom_5_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "bottom_5_V", "role": "address1" }} , 
 	{ "name": "bottom_5_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bottom_5_V", "role": "ce1" }} , 
 	{ "name": "bottom_5_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bottom_5_V", "role": "q1" }} , 
 	{ "name": "bottom_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "bottom_V_offset", "role": "default" }} , 
 	{ "name": "weights_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_0_V", "role": "address0" }} , 
 	{ "name": "weights_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_0_V", "role": "ce0" }} , 
 	{ "name": "weights_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_0_V", "role": "q0" }} , 
 	{ "name": "weights_0_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_0_V", "role": "address1" }} , 
 	{ "name": "weights_0_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_0_V", "role": "ce1" }} , 
 	{ "name": "weights_0_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_0_V", "role": "q1" }} , 
 	{ "name": "weights_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_1_V", "role": "address0" }} , 
 	{ "name": "weights_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_1_V", "role": "ce0" }} , 
 	{ "name": "weights_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_1_V", "role": "q0" }} , 
 	{ "name": "weights_1_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_1_V", "role": "address1" }} , 
 	{ "name": "weights_1_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_1_V", "role": "ce1" }} , 
 	{ "name": "weights_1_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_1_V", "role": "q1" }} , 
 	{ "name": "weights_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_2_V", "role": "address0" }} , 
 	{ "name": "weights_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_2_V", "role": "ce0" }} , 
 	{ "name": "weights_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_2_V", "role": "q0" }} , 
 	{ "name": "weights_2_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_2_V", "role": "address1" }} , 
 	{ "name": "weights_2_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_2_V", "role": "ce1" }} , 
 	{ "name": "weights_2_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_2_V", "role": "q1" }} , 
 	{ "name": "weights_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_3_V", "role": "address0" }} , 
 	{ "name": "weights_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_3_V", "role": "ce0" }} , 
 	{ "name": "weights_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_3_V", "role": "q0" }} , 
 	{ "name": "weights_3_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_3_V", "role": "address1" }} , 
 	{ "name": "weights_3_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_3_V", "role": "ce1" }} , 
 	{ "name": "weights_3_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_3_V", "role": "q1" }} , 
 	{ "name": "weights_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_4_V", "role": "address0" }} , 
 	{ "name": "weights_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_4_V", "role": "ce0" }} , 
 	{ "name": "weights_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_4_V", "role": "q0" }} , 
 	{ "name": "weights_4_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_4_V", "role": "address1" }} , 
 	{ "name": "weights_4_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_4_V", "role": "ce1" }} , 
 	{ "name": "weights_4_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_4_V", "role": "q1" }} , 
 	{ "name": "weights_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_5_V", "role": "address0" }} , 
 	{ "name": "weights_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_5_V", "role": "ce0" }} , 
 	{ "name": "weights_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_5_V", "role": "q0" }} , 
 	{ "name": "weights_5_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_5_V", "role": "address1" }} , 
 	{ "name": "weights_5_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_5_V", "role": "ce1" }} , 
 	{ "name": "weights_5_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_5_V", "role": "q1" }} , 
 	{ "name": "weights_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_6_V", "role": "address0" }} , 
 	{ "name": "weights_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_6_V", "role": "ce0" }} , 
 	{ "name": "weights_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_6_V", "role": "q0" }} , 
 	{ "name": "weights_6_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_6_V", "role": "address1" }} , 
 	{ "name": "weights_6_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_6_V", "role": "ce1" }} , 
 	{ "name": "weights_6_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_6_V", "role": "q1" }} , 
 	{ "name": "weights_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_7_V", "role": "address0" }} , 
 	{ "name": "weights_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_7_V", "role": "ce0" }} , 
 	{ "name": "weights_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_7_V", "role": "q0" }} , 
 	{ "name": "weights_7_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_7_V", "role": "address1" }} , 
 	{ "name": "weights_7_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_7_V", "role": "ce1" }} , 
 	{ "name": "weights_7_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_7_V", "role": "q1" }} , 
 	{ "name": "weights_8_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_8_V", "role": "address0" }} , 
 	{ "name": "weights_8_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_8_V", "role": "ce0" }} , 
 	{ "name": "weights_8_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_8_V", "role": "q0" }} , 
 	{ "name": "weights_8_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_8_V", "role": "address1" }} , 
 	{ "name": "weights_8_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_8_V", "role": "ce1" }} , 
 	{ "name": "weights_8_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_8_V", "role": "q1" }} , 
 	{ "name": "weights_9_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_9_V", "role": "address0" }} , 
 	{ "name": "weights_9_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_9_V", "role": "ce0" }} , 
 	{ "name": "weights_9_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_9_V", "role": "q0" }} , 
 	{ "name": "weights_9_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_9_V", "role": "address1" }} , 
 	{ "name": "weights_9_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_9_V", "role": "ce1" }} , 
 	{ "name": "weights_9_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_9_V", "role": "q1" }} , 
 	{ "name": "weights_10_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_10_V", "role": "address0" }} , 
 	{ "name": "weights_10_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_10_V", "role": "ce0" }} , 
 	{ "name": "weights_10_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_10_V", "role": "q0" }} , 
 	{ "name": "weights_10_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_10_V", "role": "address1" }} , 
 	{ "name": "weights_10_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_10_V", "role": "ce1" }} , 
 	{ "name": "weights_10_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_10_V", "role": "q1" }} , 
 	{ "name": "weights_11_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_11_V", "role": "address0" }} , 
 	{ "name": "weights_11_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_11_V", "role": "ce0" }} , 
 	{ "name": "weights_11_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_11_V", "role": "q0" }} , 
 	{ "name": "weights_11_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_11_V", "role": "address1" }} , 
 	{ "name": "weights_11_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_11_V", "role": "ce1" }} , 
 	{ "name": "weights_11_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_11_V", "role": "q1" }} , 
 	{ "name": "weights_12_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_12_V", "role": "address0" }} , 
 	{ "name": "weights_12_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_12_V", "role": "ce0" }} , 
 	{ "name": "weights_12_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_12_V", "role": "q0" }} , 
 	{ "name": "weights_12_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_12_V", "role": "address1" }} , 
 	{ "name": "weights_12_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_12_V", "role": "ce1" }} , 
 	{ "name": "weights_12_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_12_V", "role": "q1" }} , 
 	{ "name": "weights_13_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_13_V", "role": "address0" }} , 
 	{ "name": "weights_13_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_13_V", "role": "ce0" }} , 
 	{ "name": "weights_13_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_13_V", "role": "q0" }} , 
 	{ "name": "weights_13_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_13_V", "role": "address1" }} , 
 	{ "name": "weights_13_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_13_V", "role": "ce1" }} , 
 	{ "name": "weights_13_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_13_V", "role": "q1" }} , 
 	{ "name": "weights_14_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_14_V", "role": "address0" }} , 
 	{ "name": "weights_14_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_14_V", "role": "ce0" }} , 
 	{ "name": "weights_14_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_14_V", "role": "q0" }} , 
 	{ "name": "weights_14_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_14_V", "role": "address1" }} , 
 	{ "name": "weights_14_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_14_V", "role": "ce1" }} , 
 	{ "name": "weights_14_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_14_V", "role": "q1" }} , 
 	{ "name": "weights_15_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_15_V", "role": "address0" }} , 
 	{ "name": "weights_15_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_15_V", "role": "ce0" }} , 
 	{ "name": "weights_15_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_15_V", "role": "q0" }} , 
 	{ "name": "weights_15_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weights_15_V", "role": "address1" }} , 
 	{ "name": "weights_15_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_15_V", "role": "ce1" }} , 
 	{ "name": "weights_15_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weights_15_V", "role": "q1" }} , 
 	{ "name": "top_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "top_0_V", "role": "address0" }} , 
 	{ "name": "top_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_0_V", "role": "ce0" }} , 
 	{ "name": "top_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_0_V", "role": "we0" }} , 
 	{ "name": "top_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_0_V", "role": "d0" }} , 
 	{ "name": "top_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_0_V", "role": "q0" }} , 
 	{ "name": "top_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "top_1_V", "role": "address0" }} , 
 	{ "name": "top_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_1_V", "role": "ce0" }} , 
 	{ "name": "top_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_1_V", "role": "we0" }} , 
 	{ "name": "top_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_1_V", "role": "d0" }} , 
 	{ "name": "top_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_1_V", "role": "q0" }} , 
 	{ "name": "top_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "top_2_V", "role": "address0" }} , 
 	{ "name": "top_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_2_V", "role": "ce0" }} , 
 	{ "name": "top_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_2_V", "role": "we0" }} , 
 	{ "name": "top_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_2_V", "role": "d0" }} , 
 	{ "name": "top_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_2_V", "role": "q0" }} , 
 	{ "name": "top_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "top_3_V", "role": "address0" }} , 
 	{ "name": "top_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_3_V", "role": "ce0" }} , 
 	{ "name": "top_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_3_V", "role": "we0" }} , 
 	{ "name": "top_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_3_V", "role": "d0" }} , 
 	{ "name": "top_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_3_V", "role": "q0" }} , 
 	{ "name": "top_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "top_4_V", "role": "address0" }} , 
 	{ "name": "top_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_4_V", "role": "ce0" }} , 
 	{ "name": "top_4_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_4_V", "role": "we0" }} , 
 	{ "name": "top_4_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_4_V", "role": "d0" }} , 
 	{ "name": "top_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_4_V", "role": "q0" }} , 
 	{ "name": "top_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "top_5_V", "role": "address0" }} , 
 	{ "name": "top_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_5_V", "role": "ce0" }} , 
 	{ "name": "top_5_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_5_V", "role": "we0" }} , 
 	{ "name": "top_5_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_5_V", "role": "d0" }} , 
 	{ "name": "top_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_5_V", "role": "q0" }} , 
 	{ "name": "top_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "top_6_V", "role": "address0" }} , 
 	{ "name": "top_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_6_V", "role": "ce0" }} , 
 	{ "name": "top_6_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_6_V", "role": "we0" }} , 
 	{ "name": "top_6_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_6_V", "role": "d0" }} , 
 	{ "name": "top_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_6_V", "role": "q0" }} , 
 	{ "name": "top_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "top_7_V", "role": "address0" }} , 
 	{ "name": "top_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_7_V", "role": "ce0" }} , 
 	{ "name": "top_7_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_7_V", "role": "we0" }} , 
 	{ "name": "top_7_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_7_V", "role": "d0" }} , 
 	{ "name": "top_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_7_V", "role": "q0" }} , 
 	{ "name": "top_8_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "top_8_V", "role": "address0" }} , 
 	{ "name": "top_8_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_8_V", "role": "ce0" }} , 
 	{ "name": "top_8_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_8_V", "role": "we0" }} , 
 	{ "name": "top_8_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_8_V", "role": "d0" }} , 
 	{ "name": "top_8_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_8_V", "role": "q0" }} , 
 	{ "name": "top_9_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "top_9_V", "role": "address0" }} , 
 	{ "name": "top_9_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_9_V", "role": "ce0" }} , 
 	{ "name": "top_9_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_9_V", "role": "we0" }} , 
 	{ "name": "top_9_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_9_V", "role": "d0" }} , 
 	{ "name": "top_9_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_9_V", "role": "q0" }} , 
 	{ "name": "top_10_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "top_10_V", "role": "address0" }} , 
 	{ "name": "top_10_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_10_V", "role": "ce0" }} , 
 	{ "name": "top_10_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_10_V", "role": "we0" }} , 
 	{ "name": "top_10_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_10_V", "role": "d0" }} , 
 	{ "name": "top_10_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_10_V", "role": "q0" }} , 
 	{ "name": "top_11_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "top_11_V", "role": "address0" }} , 
 	{ "name": "top_11_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_11_V", "role": "ce0" }} , 
 	{ "name": "top_11_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_11_V", "role": "we0" }} , 
 	{ "name": "top_11_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_11_V", "role": "d0" }} , 
 	{ "name": "top_11_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_11_V", "role": "q0" }} , 
 	{ "name": "top_12_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "top_12_V", "role": "address0" }} , 
 	{ "name": "top_12_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_12_V", "role": "ce0" }} , 
 	{ "name": "top_12_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_12_V", "role": "we0" }} , 
 	{ "name": "top_12_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_12_V", "role": "d0" }} , 
 	{ "name": "top_12_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_12_V", "role": "q0" }} , 
 	{ "name": "top_13_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "top_13_V", "role": "address0" }} , 
 	{ "name": "top_13_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_13_V", "role": "ce0" }} , 
 	{ "name": "top_13_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_13_V", "role": "we0" }} , 
 	{ "name": "top_13_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_13_V", "role": "d0" }} , 
 	{ "name": "top_13_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_13_V", "role": "q0" }} , 
 	{ "name": "top_14_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "top_14_V", "role": "address0" }} , 
 	{ "name": "top_14_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_14_V", "role": "ce0" }} , 
 	{ "name": "top_14_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_14_V", "role": "we0" }} , 
 	{ "name": "top_14_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_14_V", "role": "d0" }} , 
 	{ "name": "top_14_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_14_V", "role": "q0" }} , 
 	{ "name": "top_15_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "top_15_V", "role": "address0" }} , 
 	{ "name": "top_15_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_15_V", "role": "ce0" }} , 
 	{ "name": "top_15_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "top_15_V", "role": "we0" }} , 
 	{ "name": "top_15_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_15_V", "role": "d0" }} , 
 	{ "name": "top_15_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "top_15_V", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "7", "9", "11", "13", "15", "17", "19", "21", "23", "25", "27", "29", "31", "33", "35", "37", "39", "41", "43", "45", "47", "49", "51", "53", "55", "57", "59", "61", "63", "64"],
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
					{"ID" : "27", "SubInstance" : "grp_compute_engine_16_fu_2352", "Port" : "lut16_V"},
					{"ID" : "7", "SubInstance" : "grp_compute_engine_16_fu_2262", "Port" : "lut16_V"},
					{"ID" : "9", "SubInstance" : "grp_compute_engine_16_fu_2271", "Port" : "lut16_V"},
					{"ID" : "11", "SubInstance" : "grp_compute_engine_16_fu_2280", "Port" : "lut16_V"},
					{"ID" : "15", "SubInstance" : "grp_compute_engine_16_fu_2298", "Port" : "lut16_V"},
					{"ID" : "19", "SubInstance" : "grp_compute_engine_16_fu_2316", "Port" : "lut16_V"},
					{"ID" : "23", "SubInstance" : "grp_compute_engine_16_fu_2334", "Port" : "lut16_V"},
					{"ID" : "5", "SubInstance" : "grp_compute_engine_16_fu_2253", "Port" : "lut16_V"},
					{"ID" : "21", "SubInstance" : "grp_compute_engine_16_fu_2325", "Port" : "lut16_V"},
					{"ID" : "25", "SubInstance" : "grp_compute_engine_16_fu_2343", "Port" : "lut16_V"},
					{"ID" : "31", "SubInstance" : "grp_compute_engine_16_fu_2370", "Port" : "lut16_V"},
					{"ID" : "33", "SubInstance" : "grp_compute_engine_16_fu_2379", "Port" : "lut16_V"},
					{"ID" : "35", "SubInstance" : "grp_compute_engine_16_fu_2388", "Port" : "lut16_V"},
					{"ID" : "39", "SubInstance" : "grp_compute_engine_16_fu_2406", "Port" : "lut16_V"},
					{"ID" : "41", "SubInstance" : "grp_compute_engine_16_fu_2415", "Port" : "lut16_V"},
					{"ID" : "13", "SubInstance" : "grp_compute_engine_16_fu_2289", "Port" : "lut16_V"},
					{"ID" : "29", "SubInstance" : "grp_compute_engine_16_fu_2361", "Port" : "lut16_V"},
					{"ID" : "37", "SubInstance" : "grp_compute_engine_16_fu_2397", "Port" : "lut16_V"},
					{"ID" : "17", "SubInstance" : "grp_compute_engine_16_fu_2307", "Port" : "lut16_V"},
					{"ID" : "43", "SubInstance" : "grp_compute_engine_16_fu_2424", "Port" : "lut16_V"},
					{"ID" : "45", "SubInstance" : "grp_compute_engine_16_fu_2433", "Port" : "lut16_V"},
					{"ID" : "59", "SubInstance" : "grp_compute_engine_16_fu_2496", "Port" : "lut16_V"},
					{"ID" : "53", "SubInstance" : "grp_compute_engine_16_fu_2469", "Port" : "lut16_V"},
					{"ID" : "51", "SubInstance" : "grp_compute_engine_16_fu_2460", "Port" : "lut16_V"},
					{"ID" : "57", "SubInstance" : "grp_compute_engine_16_fu_2487", "Port" : "lut16_V"},
					{"ID" : "61", "SubInstance" : "grp_compute_engine_16_fu_2505", "Port" : "lut16_V"},
					{"ID" : "55", "SubInstance" : "grp_compute_engine_16_fu_2478", "Port" : "lut16_V"},
					{"ID" : "47", "SubInstance" : "grp_compute_engine_16_fu_2442", "Port" : "lut16_V"},
					{"ID" : "49", "SubInstance" : "grp_compute_engine_16_fu_2451", "Port" : "lut16_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sum_engine_fu_2201", "Parent" : "0",
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
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sum_engine_fu_2214", "Parent" : "0",
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
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sum_engine_fu_2227", "Parent" : "0",
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
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sum_engine_fu_2240", "Parent" : "0",
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
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2253", "Parent" : "0", "Child" : ["6"],
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
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2253.lut16_V_U", "Parent" : "5"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2262", "Parent" : "0", "Child" : ["8"],
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
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2262.lut16_V_U", "Parent" : "7"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2271", "Parent" : "0", "Child" : ["10"],
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
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2271.lut16_V_U", "Parent" : "9"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2280", "Parent" : "0", "Child" : ["12"],
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
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2280.lut16_V_U", "Parent" : "11"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2289", "Parent" : "0", "Child" : ["14"],
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
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2289.lut16_V_U", "Parent" : "13"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2298", "Parent" : "0", "Child" : ["16"],
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
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2298.lut16_V_U", "Parent" : "15"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2307", "Parent" : "0", "Child" : ["18"],
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
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2307.lut16_V_U", "Parent" : "17"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2316", "Parent" : "0", "Child" : ["20"],
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
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2316.lut16_V_U", "Parent" : "19"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2325", "Parent" : "0", "Child" : ["22"],
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
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2325.lut16_V_U", "Parent" : "21"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2334", "Parent" : "0", "Child" : ["24"],
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
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2334.lut16_V_U", "Parent" : "23"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2343", "Parent" : "0", "Child" : ["26"],
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
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2343.lut16_V_U", "Parent" : "25"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2352", "Parent" : "0", "Child" : ["28"],
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
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2352.lut16_V_U", "Parent" : "27"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2361", "Parent" : "0", "Child" : ["30"],
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
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2361.lut16_V_U", "Parent" : "29"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2370", "Parent" : "0", "Child" : ["32"],
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
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2370.lut16_V_U", "Parent" : "31"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2379", "Parent" : "0", "Child" : ["34"],
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
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2379.lut16_V_U", "Parent" : "33"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2388", "Parent" : "0", "Child" : ["36"],
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
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2388.lut16_V_U", "Parent" : "35"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2397", "Parent" : "0", "Child" : ["38"],
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
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2397.lut16_V_U", "Parent" : "37"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2406", "Parent" : "0", "Child" : ["40"],
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
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2406.lut16_V_U", "Parent" : "39"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2415", "Parent" : "0", "Child" : ["42"],
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
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2415.lut16_V_U", "Parent" : "41"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2424", "Parent" : "0", "Child" : ["44"],
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
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2424.lut16_V_U", "Parent" : "43"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2433", "Parent" : "0", "Child" : ["46"],
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
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2433.lut16_V_U", "Parent" : "45"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2442", "Parent" : "0", "Child" : ["48"],
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
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2442.lut16_V_U", "Parent" : "47"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2451", "Parent" : "0", "Child" : ["50"],
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
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2451.lut16_V_U", "Parent" : "49"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2460", "Parent" : "0", "Child" : ["52"],
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
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2460.lut16_V_U", "Parent" : "51"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2469", "Parent" : "0", "Child" : ["54"],
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
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2469.lut16_V_U", "Parent" : "53"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2478", "Parent" : "0", "Child" : ["56"],
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
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2478.lut16_V_U", "Parent" : "55"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2487", "Parent" : "0", "Child" : ["58"],
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
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2487.lut16_V_U", "Parent" : "57"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2496", "Parent" : "0", "Child" : ["60"],
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
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2496.lut16_V_U", "Parent" : "59"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2505", "Parent" : "0", "Child" : ["62"],
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
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_engine_16_fu_2505.lut16_V_U", "Parent" : "61"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ResNet_mux_63_16_cud_U13", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ResNet_mux_63_16_cud_U14", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
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
		lut16_V {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "4506", "Max" : "4506"}
	, {"Name" : "Interval", "Min" : "4506", "Max" : "4506"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	bottom_0_V { ap_memory {  { bottom_0_V_address0 mem_address 1 10 }  { bottom_0_V_ce0 mem_ce 1 1 }  { bottom_0_V_q0 mem_dout 0 16 }  { bottom_0_V_address1 MemPortADDR2 1 10 }  { bottom_0_V_ce1 MemPortCE2 1 1 }  { bottom_0_V_q1 MemPortDOUT2 0 16 } } }
	bottom_1_V { ap_memory {  { bottom_1_V_address0 mem_address 1 10 }  { bottom_1_V_ce0 mem_ce 1 1 }  { bottom_1_V_q0 mem_dout 0 16 }  { bottom_1_V_address1 MemPortADDR2 1 10 }  { bottom_1_V_ce1 MemPortCE2 1 1 }  { bottom_1_V_q1 MemPortDOUT2 0 16 } } }
	bottom_2_V { ap_memory {  { bottom_2_V_address0 mem_address 1 10 }  { bottom_2_V_ce0 mem_ce 1 1 }  { bottom_2_V_q0 mem_dout 0 16 }  { bottom_2_V_address1 MemPortADDR2 1 10 }  { bottom_2_V_ce1 MemPortCE2 1 1 }  { bottom_2_V_q1 MemPortDOUT2 0 16 } } }
	bottom_3_V { ap_memory {  { bottom_3_V_address0 mem_address 1 10 }  { bottom_3_V_ce0 mem_ce 1 1 }  { bottom_3_V_q0 mem_dout 0 16 }  { bottom_3_V_address1 MemPortADDR2 1 10 }  { bottom_3_V_ce1 MemPortCE2 1 1 }  { bottom_3_V_q1 MemPortDOUT2 0 16 } } }
	bottom_4_V { ap_memory {  { bottom_4_V_address0 mem_address 1 10 }  { bottom_4_V_ce0 mem_ce 1 1 }  { bottom_4_V_q0 mem_dout 0 16 }  { bottom_4_V_address1 MemPortADDR2 1 10 }  { bottom_4_V_ce1 MemPortCE2 1 1 }  { bottom_4_V_q1 MemPortDOUT2 0 16 } } }
	bottom_5_V { ap_memory {  { bottom_5_V_address0 mem_address 1 10 }  { bottom_5_V_ce0 mem_ce 1 1 }  { bottom_5_V_q0 mem_dout 0 16 }  { bottom_5_V_address1 MemPortADDR2 1 10 }  { bottom_5_V_ce1 MemPortCE2 1 1 }  { bottom_5_V_q1 MemPortDOUT2 0 16 } } }
	bottom_V_offset { ap_none {  { bottom_V_offset in_data 0 3 } } }
	weights_0_V { ap_memory {  { weights_0_V_address0 mem_address 1 4 }  { weights_0_V_ce0 mem_ce 1 1 }  { weights_0_V_q0 mem_dout 0 2 }  { weights_0_V_address1 MemPortADDR2 1 4 }  { weights_0_V_ce1 MemPortCE2 1 1 }  { weights_0_V_q1 MemPortDOUT2 0 2 } } }
	weights_1_V { ap_memory {  { weights_1_V_address0 mem_address 1 4 }  { weights_1_V_ce0 mem_ce 1 1 }  { weights_1_V_q0 mem_dout 0 2 }  { weights_1_V_address1 MemPortADDR2 1 4 }  { weights_1_V_ce1 MemPortCE2 1 1 }  { weights_1_V_q1 MemPortDOUT2 0 2 } } }
	weights_2_V { ap_memory {  { weights_2_V_address0 mem_address 1 4 }  { weights_2_V_ce0 mem_ce 1 1 }  { weights_2_V_q0 mem_dout 0 2 }  { weights_2_V_address1 MemPortADDR2 1 4 }  { weights_2_V_ce1 MemPortCE2 1 1 }  { weights_2_V_q1 MemPortDOUT2 0 2 } } }
	weights_3_V { ap_memory {  { weights_3_V_address0 mem_address 1 4 }  { weights_3_V_ce0 mem_ce 1 1 }  { weights_3_V_q0 mem_dout 0 2 }  { weights_3_V_address1 MemPortADDR2 1 4 }  { weights_3_V_ce1 MemPortCE2 1 1 }  { weights_3_V_q1 MemPortDOUT2 0 2 } } }
	weights_4_V { ap_memory {  { weights_4_V_address0 mem_address 1 4 }  { weights_4_V_ce0 mem_ce 1 1 }  { weights_4_V_q0 mem_dout 0 2 }  { weights_4_V_address1 MemPortADDR2 1 4 }  { weights_4_V_ce1 MemPortCE2 1 1 }  { weights_4_V_q1 MemPortDOUT2 0 2 } } }
	weights_5_V { ap_memory {  { weights_5_V_address0 mem_address 1 4 }  { weights_5_V_ce0 mem_ce 1 1 }  { weights_5_V_q0 mem_dout 0 2 }  { weights_5_V_address1 MemPortADDR2 1 4 }  { weights_5_V_ce1 MemPortCE2 1 1 }  { weights_5_V_q1 MemPortDOUT2 0 2 } } }
	weights_6_V { ap_memory {  { weights_6_V_address0 mem_address 1 4 }  { weights_6_V_ce0 mem_ce 1 1 }  { weights_6_V_q0 mem_dout 0 2 }  { weights_6_V_address1 MemPortADDR2 1 4 }  { weights_6_V_ce1 MemPortCE2 1 1 }  { weights_6_V_q1 MemPortDOUT2 0 2 } } }
	weights_7_V { ap_memory {  { weights_7_V_address0 mem_address 1 4 }  { weights_7_V_ce0 mem_ce 1 1 }  { weights_7_V_q0 mem_dout 0 2 }  { weights_7_V_address1 MemPortADDR2 1 4 }  { weights_7_V_ce1 MemPortCE2 1 1 }  { weights_7_V_q1 MemPortDOUT2 0 2 } } }
	weights_8_V { ap_memory {  { weights_8_V_address0 mem_address 1 4 }  { weights_8_V_ce0 mem_ce 1 1 }  { weights_8_V_q0 mem_dout 0 2 }  { weights_8_V_address1 MemPortADDR2 1 4 }  { weights_8_V_ce1 MemPortCE2 1 1 }  { weights_8_V_q1 MemPortDOUT2 0 2 } } }
	weights_9_V { ap_memory {  { weights_9_V_address0 mem_address 1 4 }  { weights_9_V_ce0 mem_ce 1 1 }  { weights_9_V_q0 mem_dout 0 2 }  { weights_9_V_address1 MemPortADDR2 1 4 }  { weights_9_V_ce1 MemPortCE2 1 1 }  { weights_9_V_q1 MemPortDOUT2 0 2 } } }
	weights_10_V { ap_memory {  { weights_10_V_address0 mem_address 1 4 }  { weights_10_V_ce0 mem_ce 1 1 }  { weights_10_V_q0 mem_dout 0 2 }  { weights_10_V_address1 MemPortADDR2 1 4 }  { weights_10_V_ce1 MemPortCE2 1 1 }  { weights_10_V_q1 MemPortDOUT2 0 2 } } }
	weights_11_V { ap_memory {  { weights_11_V_address0 mem_address 1 4 }  { weights_11_V_ce0 mem_ce 1 1 }  { weights_11_V_q0 mem_dout 0 2 }  { weights_11_V_address1 MemPortADDR2 1 4 }  { weights_11_V_ce1 MemPortCE2 1 1 }  { weights_11_V_q1 MemPortDOUT2 0 2 } } }
	weights_12_V { ap_memory {  { weights_12_V_address0 mem_address 1 4 }  { weights_12_V_ce0 mem_ce 1 1 }  { weights_12_V_q0 mem_dout 0 2 }  { weights_12_V_address1 MemPortADDR2 1 4 }  { weights_12_V_ce1 MemPortCE2 1 1 }  { weights_12_V_q1 MemPortDOUT2 0 2 } } }
	weights_13_V { ap_memory {  { weights_13_V_address0 mem_address 1 4 }  { weights_13_V_ce0 mem_ce 1 1 }  { weights_13_V_q0 mem_dout 0 2 }  { weights_13_V_address1 MemPortADDR2 1 4 }  { weights_13_V_ce1 MemPortCE2 1 1 }  { weights_13_V_q1 MemPortDOUT2 0 2 } } }
	weights_14_V { ap_memory {  { weights_14_V_address0 mem_address 1 4 }  { weights_14_V_ce0 mem_ce 1 1 }  { weights_14_V_q0 mem_dout 0 2 }  { weights_14_V_address1 MemPortADDR2 1 4 }  { weights_14_V_ce1 MemPortCE2 1 1 }  { weights_14_V_q1 MemPortDOUT2 0 2 } } }
	weights_15_V { ap_memory {  { weights_15_V_address0 mem_address 1 4 }  { weights_15_V_ce0 mem_ce 1 1 }  { weights_15_V_q0 mem_dout 0 2 }  { weights_15_V_address1 MemPortADDR2 1 4 }  { weights_15_V_ce1 MemPortCE2 1 1 }  { weights_15_V_q1 MemPortDOUT2 0 2 } } }
	top_0_V { ap_memory {  { top_0_V_address0 mem_address 1 10 }  { top_0_V_ce0 mem_ce 1 1 }  { top_0_V_we0 mem_we 1 1 }  { top_0_V_d0 mem_din 1 12 }  { top_0_V_q0 mem_dout 0 12 } } }
	top_1_V { ap_memory {  { top_1_V_address0 mem_address 1 10 }  { top_1_V_ce0 mem_ce 1 1 }  { top_1_V_we0 mem_we 1 1 }  { top_1_V_d0 mem_din 1 12 }  { top_1_V_q0 mem_dout 0 12 } } }
	top_2_V { ap_memory {  { top_2_V_address0 mem_address 1 10 }  { top_2_V_ce0 mem_ce 1 1 }  { top_2_V_we0 mem_we 1 1 }  { top_2_V_d0 mem_din 1 12 }  { top_2_V_q0 mem_dout 0 12 } } }
	top_3_V { ap_memory {  { top_3_V_address0 mem_address 1 10 }  { top_3_V_ce0 mem_ce 1 1 }  { top_3_V_we0 mem_we 1 1 }  { top_3_V_d0 mem_din 1 12 }  { top_3_V_q0 mem_dout 0 12 } } }
	top_4_V { ap_memory {  { top_4_V_address0 mem_address 1 10 }  { top_4_V_ce0 mem_ce 1 1 }  { top_4_V_we0 mem_we 1 1 }  { top_4_V_d0 mem_din 1 12 }  { top_4_V_q0 mem_dout 0 12 } } }
	top_5_V { ap_memory {  { top_5_V_address0 mem_address 1 10 }  { top_5_V_ce0 mem_ce 1 1 }  { top_5_V_we0 mem_we 1 1 }  { top_5_V_d0 mem_din 1 12 }  { top_5_V_q0 mem_dout 0 12 } } }
	top_6_V { ap_memory {  { top_6_V_address0 mem_address 1 10 }  { top_6_V_ce0 mem_ce 1 1 }  { top_6_V_we0 mem_we 1 1 }  { top_6_V_d0 mem_din 1 12 }  { top_6_V_q0 mem_dout 0 12 } } }
	top_7_V { ap_memory {  { top_7_V_address0 mem_address 1 10 }  { top_7_V_ce0 mem_ce 1 1 }  { top_7_V_we0 mem_we 1 1 }  { top_7_V_d0 mem_din 1 12 }  { top_7_V_q0 mem_dout 0 12 } } }
	top_8_V { ap_memory {  { top_8_V_address0 mem_address 1 10 }  { top_8_V_ce0 mem_ce 1 1 }  { top_8_V_we0 mem_we 1 1 }  { top_8_V_d0 mem_din 1 12 }  { top_8_V_q0 mem_dout 0 12 } } }
	top_9_V { ap_memory {  { top_9_V_address0 mem_address 1 10 }  { top_9_V_ce0 mem_ce 1 1 }  { top_9_V_we0 mem_we 1 1 }  { top_9_V_d0 mem_din 1 12 }  { top_9_V_q0 mem_dout 0 12 } } }
	top_10_V { ap_memory {  { top_10_V_address0 mem_address 1 10 }  { top_10_V_ce0 mem_ce 1 1 }  { top_10_V_we0 mem_we 1 1 }  { top_10_V_d0 mem_din 1 12 }  { top_10_V_q0 mem_dout 0 12 } } }
	top_11_V { ap_memory {  { top_11_V_address0 mem_address 1 10 }  { top_11_V_ce0 mem_ce 1 1 }  { top_11_V_we0 mem_we 1 1 }  { top_11_V_d0 mem_din 1 12 }  { top_11_V_q0 mem_dout 0 12 } } }
	top_12_V { ap_memory {  { top_12_V_address0 mem_address 1 10 }  { top_12_V_ce0 mem_ce 1 1 }  { top_12_V_we0 mem_we 1 1 }  { top_12_V_d0 mem_din 1 12 }  { top_12_V_q0 mem_dout 0 12 } } }
	top_13_V { ap_memory {  { top_13_V_address0 mem_address 1 10 }  { top_13_V_ce0 mem_ce 1 1 }  { top_13_V_we0 mem_we 1 1 }  { top_13_V_d0 mem_din 1 12 }  { top_13_V_q0 mem_dout 0 12 } } }
	top_14_V { ap_memory {  { top_14_V_address0 mem_address 1 10 }  { top_14_V_ce0 mem_ce 1 1 }  { top_14_V_we0 mem_we 1 1 }  { top_14_V_d0 mem_din 1 12 }  { top_14_V_q0 mem_dout 0 12 } } }
	top_15_V { ap_memory {  { top_15_V_address0 mem_address 1 10 }  { top_15_V_ce0 mem_ce 1 1 }  { top_15_V_we0 mem_we 1 1 }  { top_15_V_d0 mem_din 1 12 }  { top_15_V_q0 mem_dout 0 12 } } }
}
