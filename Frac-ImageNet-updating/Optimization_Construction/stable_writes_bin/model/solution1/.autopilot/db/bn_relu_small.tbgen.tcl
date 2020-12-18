set moduleName bn_relu_small
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
set C_modelName {bn_relu_small}
set C_modelType { void 0 }
set C_modelArgList {
	{ bn_weight_0_V_read int 16 regular  }
	{ bn_weight_1_V_read int 16 regular  }
	{ bn_weight_2_V_read int 16 regular  }
	{ bn_weight_3_V_read int 16 regular  }
	{ bn_weight_4_V_read int 16 regular  }
	{ bn_weight_5_V_read int 16 regular  }
	{ bn_weight_6_V_read int 16 regular  }
	{ bn_weight_7_V_read int 16 regular  }
	{ bn_weight_8_V_read int 16 regular  }
	{ bn_weight_9_V_read int 16 regular  }
	{ bn_weight_10_V_read int 16 regular  }
	{ bn_weight_11_V_read int 16 regular  }
	{ bn_weight_12_V_read int 16 regular  }
	{ bn_weight_13_V_read int 16 regular  }
	{ bn_weight_14_V_read int 16 regular  }
	{ bn_weight_15_V_read int 16 regular  }
	{ bn_weight_16_V_read int 16 regular  }
	{ bn_weight_17_V_read int 16 regular  }
	{ bn_weight_18_V_read int 16 regular  }
	{ bn_weight_19_V_read int 16 regular  }
	{ bn_weight_20_V_read int 16 regular  }
	{ bn_weight_21_V_read int 16 regular  }
	{ bn_weight_22_V_read int 16 regular  }
	{ bn_weight_23_V_read int 16 regular  }
	{ bn_weight_24_V_read int 16 regular  }
	{ bn_weight_25_V_read int 16 regular  }
	{ bn_weight_26_V_read int 16 regular  }
	{ bn_weight_27_V_read int 16 regular  }
	{ bn_weight_28_V_read int 16 regular  }
	{ bn_weight_29_V_read int 16 regular  }
	{ bn_weight_30_V_read int 16 regular  }
	{ bn_weight_31_V_read int 16 regular  }
	{ bn_bias_0_V_read int 16 regular  }
	{ bn_bias_1_V_read int 16 regular  }
	{ bn_bias_2_V_read int 16 regular  }
	{ bn_bias_3_V_read int 16 regular  }
	{ bn_bias_4_V_read int 16 regular  }
	{ bn_bias_5_V_read int 16 regular  }
	{ bn_bias_6_V_read int 16 regular  }
	{ bn_bias_7_V_read int 16 regular  }
	{ bn_bias_8_V_read int 16 regular  }
	{ bn_bias_9_V_read int 16 regular  }
	{ bn_bias_10_V_read int 16 regular  }
	{ bn_bias_11_V_read int 16 regular  }
	{ bn_bias_12_V_read int 16 regular  }
	{ bn_bias_13_V_read int 16 regular  }
	{ bn_bias_14_V_read int 16 regular  }
	{ bn_bias_15_V_read int 16 regular  }
	{ bn_bias_16_V_read int 16 regular  }
	{ bn_bias_17_V_read int 16 regular  }
	{ bn_bias_18_V_read int 16 regular  }
	{ bn_bias_19_V_read int 16 regular  }
	{ bn_bias_20_V_read int 16 regular  }
	{ bn_bias_21_V_read int 16 regular  }
	{ bn_bias_22_V_read int 16 regular  }
	{ bn_bias_23_V_read int 16 regular  }
	{ bn_bias_24_V_read int 16 regular  }
	{ bn_bias_25_V_read int 16 regular  }
	{ bn_bias_26_V_read int 16 regular  }
	{ bn_bias_27_V_read int 16 regular  }
	{ bn_bias_28_V_read int 16 regular  }
	{ bn_bias_29_V_read int 16 regular  }
	{ bn_bias_30_V_read int 16 regular  }
	{ bn_bias_31_V_read int 16 regular  }
	{ DDR_buf_V int 512 regular {axi_master 1}  }
	{ DDR_buf_V_offset int 26 regular  }
	{ out_buf_all_0_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_1_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_2_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_3_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_4_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_5_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_6_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_7_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_8_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_9_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_10_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_11_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_12_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_13_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_14_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_15_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_16_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_17_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_18_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_19_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_20_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_21_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_22_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_23_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_24_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_25_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_26_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_27_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_28_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_29_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_30_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ out_buf_all_31_V int 16 regular {array 2034 { 1 3 } 1 1 }  }
	{ feat_buf_all_1_V_2 int 32 regular {array 51200 { 0 3 } 0 1 }  }
	{ feat_buf_all_0_V_2 int 32 regular {array 51200 { 0 3 } 0 1 }  }
	{ row_tile_start int 9 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "bn_weight_0_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_1_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_2_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_3_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_4_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_5_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_6_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_7_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_8_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_9_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_10_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_11_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_12_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_13_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_14_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_15_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_16_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_17_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_18_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_19_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_20_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_21_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_22_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_23_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_24_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_25_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_26_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_27_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_28_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_29_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_30_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_weight_31_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_0_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_1_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_2_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_3_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_4_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_5_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_6_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_7_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_8_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_9_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_10_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_11_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_12_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_13_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_14_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_15_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_16_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_17_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_18_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_19_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_20_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_21_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_22_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_23_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_24_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_25_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_26_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_27_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_28_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_29_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_30_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bn_bias_31_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "DDR_buf_V", "interface" : "axi_master", "bitwidth" : 512, "direction" : "WRITEONLY"} , 
 	{ "Name" : "DDR_buf_V_offset", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_0_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_1_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_2_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_3_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_4_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_5_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_6_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_7_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_8_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_9_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_10_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_11_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_12_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_13_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_14_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_15_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_16_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_17_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_18_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_19_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_20_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_21_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_22_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_23_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_24_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_25_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_26_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_27_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_28_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_29_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_30_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_all_31_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "feat_buf_all_1_V_2", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "feat_buf_all_0_V_2", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "row_tile_start", "interface" : "wire", "bitwidth" : 9, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 221
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ bn_weight_0_V_read sc_in sc_lv 16 signal 0 } 
	{ bn_weight_1_V_read sc_in sc_lv 16 signal 1 } 
	{ bn_weight_2_V_read sc_in sc_lv 16 signal 2 } 
	{ bn_weight_3_V_read sc_in sc_lv 16 signal 3 } 
	{ bn_weight_4_V_read sc_in sc_lv 16 signal 4 } 
	{ bn_weight_5_V_read sc_in sc_lv 16 signal 5 } 
	{ bn_weight_6_V_read sc_in sc_lv 16 signal 6 } 
	{ bn_weight_7_V_read sc_in sc_lv 16 signal 7 } 
	{ bn_weight_8_V_read sc_in sc_lv 16 signal 8 } 
	{ bn_weight_9_V_read sc_in sc_lv 16 signal 9 } 
	{ bn_weight_10_V_read sc_in sc_lv 16 signal 10 } 
	{ bn_weight_11_V_read sc_in sc_lv 16 signal 11 } 
	{ bn_weight_12_V_read sc_in sc_lv 16 signal 12 } 
	{ bn_weight_13_V_read sc_in sc_lv 16 signal 13 } 
	{ bn_weight_14_V_read sc_in sc_lv 16 signal 14 } 
	{ bn_weight_15_V_read sc_in sc_lv 16 signal 15 } 
	{ bn_weight_16_V_read sc_in sc_lv 16 signal 16 } 
	{ bn_weight_17_V_read sc_in sc_lv 16 signal 17 } 
	{ bn_weight_18_V_read sc_in sc_lv 16 signal 18 } 
	{ bn_weight_19_V_read sc_in sc_lv 16 signal 19 } 
	{ bn_weight_20_V_read sc_in sc_lv 16 signal 20 } 
	{ bn_weight_21_V_read sc_in sc_lv 16 signal 21 } 
	{ bn_weight_22_V_read sc_in sc_lv 16 signal 22 } 
	{ bn_weight_23_V_read sc_in sc_lv 16 signal 23 } 
	{ bn_weight_24_V_read sc_in sc_lv 16 signal 24 } 
	{ bn_weight_25_V_read sc_in sc_lv 16 signal 25 } 
	{ bn_weight_26_V_read sc_in sc_lv 16 signal 26 } 
	{ bn_weight_27_V_read sc_in sc_lv 16 signal 27 } 
	{ bn_weight_28_V_read sc_in sc_lv 16 signal 28 } 
	{ bn_weight_29_V_read sc_in sc_lv 16 signal 29 } 
	{ bn_weight_30_V_read sc_in sc_lv 16 signal 30 } 
	{ bn_weight_31_V_read sc_in sc_lv 16 signal 31 } 
	{ bn_bias_0_V_read sc_in sc_lv 16 signal 32 } 
	{ bn_bias_1_V_read sc_in sc_lv 16 signal 33 } 
	{ bn_bias_2_V_read sc_in sc_lv 16 signal 34 } 
	{ bn_bias_3_V_read sc_in sc_lv 16 signal 35 } 
	{ bn_bias_4_V_read sc_in sc_lv 16 signal 36 } 
	{ bn_bias_5_V_read sc_in sc_lv 16 signal 37 } 
	{ bn_bias_6_V_read sc_in sc_lv 16 signal 38 } 
	{ bn_bias_7_V_read sc_in sc_lv 16 signal 39 } 
	{ bn_bias_8_V_read sc_in sc_lv 16 signal 40 } 
	{ bn_bias_9_V_read sc_in sc_lv 16 signal 41 } 
	{ bn_bias_10_V_read sc_in sc_lv 16 signal 42 } 
	{ bn_bias_11_V_read sc_in sc_lv 16 signal 43 } 
	{ bn_bias_12_V_read sc_in sc_lv 16 signal 44 } 
	{ bn_bias_13_V_read sc_in sc_lv 16 signal 45 } 
	{ bn_bias_14_V_read sc_in sc_lv 16 signal 46 } 
	{ bn_bias_15_V_read sc_in sc_lv 16 signal 47 } 
	{ bn_bias_16_V_read sc_in sc_lv 16 signal 48 } 
	{ bn_bias_17_V_read sc_in sc_lv 16 signal 49 } 
	{ bn_bias_18_V_read sc_in sc_lv 16 signal 50 } 
	{ bn_bias_19_V_read sc_in sc_lv 16 signal 51 } 
	{ bn_bias_20_V_read sc_in sc_lv 16 signal 52 } 
	{ bn_bias_21_V_read sc_in sc_lv 16 signal 53 } 
	{ bn_bias_22_V_read sc_in sc_lv 16 signal 54 } 
	{ bn_bias_23_V_read sc_in sc_lv 16 signal 55 } 
	{ bn_bias_24_V_read sc_in sc_lv 16 signal 56 } 
	{ bn_bias_25_V_read sc_in sc_lv 16 signal 57 } 
	{ bn_bias_26_V_read sc_in sc_lv 16 signal 58 } 
	{ bn_bias_27_V_read sc_in sc_lv 16 signal 59 } 
	{ bn_bias_28_V_read sc_in sc_lv 16 signal 60 } 
	{ bn_bias_29_V_read sc_in sc_lv 16 signal 61 } 
	{ bn_bias_30_V_read sc_in sc_lv 16 signal 62 } 
	{ bn_bias_31_V_read sc_in sc_lv 16 signal 63 } 
	{ m_axi_DDR_buf_V_AWVALID sc_out sc_logic 1 signal 64 } 
	{ m_axi_DDR_buf_V_AWREADY sc_in sc_logic 1 signal 64 } 
	{ m_axi_DDR_buf_V_AWADDR sc_out sc_lv 32 signal 64 } 
	{ m_axi_DDR_buf_V_AWID sc_out sc_lv 1 signal 64 } 
	{ m_axi_DDR_buf_V_AWLEN sc_out sc_lv 32 signal 64 } 
	{ m_axi_DDR_buf_V_AWSIZE sc_out sc_lv 3 signal 64 } 
	{ m_axi_DDR_buf_V_AWBURST sc_out sc_lv 2 signal 64 } 
	{ m_axi_DDR_buf_V_AWLOCK sc_out sc_lv 2 signal 64 } 
	{ m_axi_DDR_buf_V_AWCACHE sc_out sc_lv 4 signal 64 } 
	{ m_axi_DDR_buf_V_AWPROT sc_out sc_lv 3 signal 64 } 
	{ m_axi_DDR_buf_V_AWQOS sc_out sc_lv 4 signal 64 } 
	{ m_axi_DDR_buf_V_AWREGION sc_out sc_lv 4 signal 64 } 
	{ m_axi_DDR_buf_V_AWUSER sc_out sc_lv 1 signal 64 } 
	{ m_axi_DDR_buf_V_WVALID sc_out sc_logic 1 signal 64 } 
	{ m_axi_DDR_buf_V_WREADY sc_in sc_logic 1 signal 64 } 
	{ m_axi_DDR_buf_V_WDATA sc_out sc_lv 512 signal 64 } 
	{ m_axi_DDR_buf_V_WSTRB sc_out sc_lv 64 signal 64 } 
	{ m_axi_DDR_buf_V_WLAST sc_out sc_logic 1 signal 64 } 
	{ m_axi_DDR_buf_V_WID sc_out sc_lv 1 signal 64 } 
	{ m_axi_DDR_buf_V_WUSER sc_out sc_lv 1 signal 64 } 
	{ m_axi_DDR_buf_V_ARVALID sc_out sc_logic 1 signal 64 } 
	{ m_axi_DDR_buf_V_ARREADY sc_in sc_logic 1 signal 64 } 
	{ m_axi_DDR_buf_V_ARADDR sc_out sc_lv 32 signal 64 } 
	{ m_axi_DDR_buf_V_ARID sc_out sc_lv 1 signal 64 } 
	{ m_axi_DDR_buf_V_ARLEN sc_out sc_lv 32 signal 64 } 
	{ m_axi_DDR_buf_V_ARSIZE sc_out sc_lv 3 signal 64 } 
	{ m_axi_DDR_buf_V_ARBURST sc_out sc_lv 2 signal 64 } 
	{ m_axi_DDR_buf_V_ARLOCK sc_out sc_lv 2 signal 64 } 
	{ m_axi_DDR_buf_V_ARCACHE sc_out sc_lv 4 signal 64 } 
	{ m_axi_DDR_buf_V_ARPROT sc_out sc_lv 3 signal 64 } 
	{ m_axi_DDR_buf_V_ARQOS sc_out sc_lv 4 signal 64 } 
	{ m_axi_DDR_buf_V_ARREGION sc_out sc_lv 4 signal 64 } 
	{ m_axi_DDR_buf_V_ARUSER sc_out sc_lv 1 signal 64 } 
	{ m_axi_DDR_buf_V_RVALID sc_in sc_logic 1 signal 64 } 
	{ m_axi_DDR_buf_V_RREADY sc_out sc_logic 1 signal 64 } 
	{ m_axi_DDR_buf_V_RDATA sc_in sc_lv 512 signal 64 } 
	{ m_axi_DDR_buf_V_RLAST sc_in sc_logic 1 signal 64 } 
	{ m_axi_DDR_buf_V_RID sc_in sc_lv 1 signal 64 } 
	{ m_axi_DDR_buf_V_RUSER sc_in sc_lv 1 signal 64 } 
	{ m_axi_DDR_buf_V_RRESP sc_in sc_lv 2 signal 64 } 
	{ m_axi_DDR_buf_V_BVALID sc_in sc_logic 1 signal 64 } 
	{ m_axi_DDR_buf_V_BREADY sc_out sc_logic 1 signal 64 } 
	{ m_axi_DDR_buf_V_BRESP sc_in sc_lv 2 signal 64 } 
	{ m_axi_DDR_buf_V_BID sc_in sc_lv 1 signal 64 } 
	{ m_axi_DDR_buf_V_BUSER sc_in sc_lv 1 signal 64 } 
	{ DDR_buf_V_offset sc_in sc_lv 26 signal 65 } 
	{ out_buf_all_0_V_address0 sc_out sc_lv 11 signal 66 } 
	{ out_buf_all_0_V_ce0 sc_out sc_logic 1 signal 66 } 
	{ out_buf_all_0_V_q0 sc_in sc_lv 16 signal 66 } 
	{ out_buf_all_1_V_address0 sc_out sc_lv 11 signal 67 } 
	{ out_buf_all_1_V_ce0 sc_out sc_logic 1 signal 67 } 
	{ out_buf_all_1_V_q0 sc_in sc_lv 16 signal 67 } 
	{ out_buf_all_2_V_address0 sc_out sc_lv 11 signal 68 } 
	{ out_buf_all_2_V_ce0 sc_out sc_logic 1 signal 68 } 
	{ out_buf_all_2_V_q0 sc_in sc_lv 16 signal 68 } 
	{ out_buf_all_3_V_address0 sc_out sc_lv 11 signal 69 } 
	{ out_buf_all_3_V_ce0 sc_out sc_logic 1 signal 69 } 
	{ out_buf_all_3_V_q0 sc_in sc_lv 16 signal 69 } 
	{ out_buf_all_4_V_address0 sc_out sc_lv 11 signal 70 } 
	{ out_buf_all_4_V_ce0 sc_out sc_logic 1 signal 70 } 
	{ out_buf_all_4_V_q0 sc_in sc_lv 16 signal 70 } 
	{ out_buf_all_5_V_address0 sc_out sc_lv 11 signal 71 } 
	{ out_buf_all_5_V_ce0 sc_out sc_logic 1 signal 71 } 
	{ out_buf_all_5_V_q0 sc_in sc_lv 16 signal 71 } 
	{ out_buf_all_6_V_address0 sc_out sc_lv 11 signal 72 } 
	{ out_buf_all_6_V_ce0 sc_out sc_logic 1 signal 72 } 
	{ out_buf_all_6_V_q0 sc_in sc_lv 16 signal 72 } 
	{ out_buf_all_7_V_address0 sc_out sc_lv 11 signal 73 } 
	{ out_buf_all_7_V_ce0 sc_out sc_logic 1 signal 73 } 
	{ out_buf_all_7_V_q0 sc_in sc_lv 16 signal 73 } 
	{ out_buf_all_8_V_address0 sc_out sc_lv 11 signal 74 } 
	{ out_buf_all_8_V_ce0 sc_out sc_logic 1 signal 74 } 
	{ out_buf_all_8_V_q0 sc_in sc_lv 16 signal 74 } 
	{ out_buf_all_9_V_address0 sc_out sc_lv 11 signal 75 } 
	{ out_buf_all_9_V_ce0 sc_out sc_logic 1 signal 75 } 
	{ out_buf_all_9_V_q0 sc_in sc_lv 16 signal 75 } 
	{ out_buf_all_10_V_address0 sc_out sc_lv 11 signal 76 } 
	{ out_buf_all_10_V_ce0 sc_out sc_logic 1 signal 76 } 
	{ out_buf_all_10_V_q0 sc_in sc_lv 16 signal 76 } 
	{ out_buf_all_11_V_address0 sc_out sc_lv 11 signal 77 } 
	{ out_buf_all_11_V_ce0 sc_out sc_logic 1 signal 77 } 
	{ out_buf_all_11_V_q0 sc_in sc_lv 16 signal 77 } 
	{ out_buf_all_12_V_address0 sc_out sc_lv 11 signal 78 } 
	{ out_buf_all_12_V_ce0 sc_out sc_logic 1 signal 78 } 
	{ out_buf_all_12_V_q0 sc_in sc_lv 16 signal 78 } 
	{ out_buf_all_13_V_address0 sc_out sc_lv 11 signal 79 } 
	{ out_buf_all_13_V_ce0 sc_out sc_logic 1 signal 79 } 
	{ out_buf_all_13_V_q0 sc_in sc_lv 16 signal 79 } 
	{ out_buf_all_14_V_address0 sc_out sc_lv 11 signal 80 } 
	{ out_buf_all_14_V_ce0 sc_out sc_logic 1 signal 80 } 
	{ out_buf_all_14_V_q0 sc_in sc_lv 16 signal 80 } 
	{ out_buf_all_15_V_address0 sc_out sc_lv 11 signal 81 } 
	{ out_buf_all_15_V_ce0 sc_out sc_logic 1 signal 81 } 
	{ out_buf_all_15_V_q0 sc_in sc_lv 16 signal 81 } 
	{ out_buf_all_16_V_address0 sc_out sc_lv 11 signal 82 } 
	{ out_buf_all_16_V_ce0 sc_out sc_logic 1 signal 82 } 
	{ out_buf_all_16_V_q0 sc_in sc_lv 16 signal 82 } 
	{ out_buf_all_17_V_address0 sc_out sc_lv 11 signal 83 } 
	{ out_buf_all_17_V_ce0 sc_out sc_logic 1 signal 83 } 
	{ out_buf_all_17_V_q0 sc_in sc_lv 16 signal 83 } 
	{ out_buf_all_18_V_address0 sc_out sc_lv 11 signal 84 } 
	{ out_buf_all_18_V_ce0 sc_out sc_logic 1 signal 84 } 
	{ out_buf_all_18_V_q0 sc_in sc_lv 16 signal 84 } 
	{ out_buf_all_19_V_address0 sc_out sc_lv 11 signal 85 } 
	{ out_buf_all_19_V_ce0 sc_out sc_logic 1 signal 85 } 
	{ out_buf_all_19_V_q0 sc_in sc_lv 16 signal 85 } 
	{ out_buf_all_20_V_address0 sc_out sc_lv 11 signal 86 } 
	{ out_buf_all_20_V_ce0 sc_out sc_logic 1 signal 86 } 
	{ out_buf_all_20_V_q0 sc_in sc_lv 16 signal 86 } 
	{ out_buf_all_21_V_address0 sc_out sc_lv 11 signal 87 } 
	{ out_buf_all_21_V_ce0 sc_out sc_logic 1 signal 87 } 
	{ out_buf_all_21_V_q0 sc_in sc_lv 16 signal 87 } 
	{ out_buf_all_22_V_address0 sc_out sc_lv 11 signal 88 } 
	{ out_buf_all_22_V_ce0 sc_out sc_logic 1 signal 88 } 
	{ out_buf_all_22_V_q0 sc_in sc_lv 16 signal 88 } 
	{ out_buf_all_23_V_address0 sc_out sc_lv 11 signal 89 } 
	{ out_buf_all_23_V_ce0 sc_out sc_logic 1 signal 89 } 
	{ out_buf_all_23_V_q0 sc_in sc_lv 16 signal 89 } 
	{ out_buf_all_24_V_address0 sc_out sc_lv 11 signal 90 } 
	{ out_buf_all_24_V_ce0 sc_out sc_logic 1 signal 90 } 
	{ out_buf_all_24_V_q0 sc_in sc_lv 16 signal 90 } 
	{ out_buf_all_25_V_address0 sc_out sc_lv 11 signal 91 } 
	{ out_buf_all_25_V_ce0 sc_out sc_logic 1 signal 91 } 
	{ out_buf_all_25_V_q0 sc_in sc_lv 16 signal 91 } 
	{ out_buf_all_26_V_address0 sc_out sc_lv 11 signal 92 } 
	{ out_buf_all_26_V_ce0 sc_out sc_logic 1 signal 92 } 
	{ out_buf_all_26_V_q0 sc_in sc_lv 16 signal 92 } 
	{ out_buf_all_27_V_address0 sc_out sc_lv 11 signal 93 } 
	{ out_buf_all_27_V_ce0 sc_out sc_logic 1 signal 93 } 
	{ out_buf_all_27_V_q0 sc_in sc_lv 16 signal 93 } 
	{ out_buf_all_28_V_address0 sc_out sc_lv 11 signal 94 } 
	{ out_buf_all_28_V_ce0 sc_out sc_logic 1 signal 94 } 
	{ out_buf_all_28_V_q0 sc_in sc_lv 16 signal 94 } 
	{ out_buf_all_29_V_address0 sc_out sc_lv 11 signal 95 } 
	{ out_buf_all_29_V_ce0 sc_out sc_logic 1 signal 95 } 
	{ out_buf_all_29_V_q0 sc_in sc_lv 16 signal 95 } 
	{ out_buf_all_30_V_address0 sc_out sc_lv 11 signal 96 } 
	{ out_buf_all_30_V_ce0 sc_out sc_logic 1 signal 96 } 
	{ out_buf_all_30_V_q0 sc_in sc_lv 16 signal 96 } 
	{ out_buf_all_31_V_address0 sc_out sc_lv 11 signal 97 } 
	{ out_buf_all_31_V_ce0 sc_out sc_logic 1 signal 97 } 
	{ out_buf_all_31_V_q0 sc_in sc_lv 16 signal 97 } 
	{ feat_buf_all_1_V_2_address0 sc_out sc_lv 16 signal 98 } 
	{ feat_buf_all_1_V_2_ce0 sc_out sc_logic 1 signal 98 } 
	{ feat_buf_all_1_V_2_we0 sc_out sc_logic 1 signal 98 } 
	{ feat_buf_all_1_V_2_d0 sc_out sc_lv 32 signal 98 } 
	{ feat_buf_all_0_V_2_address0 sc_out sc_lv 16 signal 99 } 
	{ feat_buf_all_0_V_2_ce0 sc_out sc_logic 1 signal 99 } 
	{ feat_buf_all_0_V_2_we0 sc_out sc_logic 1 signal 99 } 
	{ feat_buf_all_0_V_2_d0 sc_out sc_lv 32 signal 99 } 
	{ row_tile_start sc_in sc_lv 9 signal 100 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "bn_weight_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_0_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_1_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_2_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_3_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_4_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_4_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_5_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_5_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_6_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_6_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_7_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_7_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_8_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_8_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_9_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_9_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_10_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_10_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_11_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_11_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_12_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_12_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_13_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_13_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_14_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_14_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_15_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_15_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_16_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_16_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_17_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_17_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_18_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_18_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_19_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_19_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_20_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_20_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_21_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_21_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_22_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_22_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_23_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_23_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_24_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_24_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_25_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_25_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_26_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_26_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_27_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_27_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_28_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_28_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_29_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_29_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_30_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_30_V_read", "role": "default" }} , 
 	{ "name": "bn_weight_31_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_weight_31_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_0_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_1_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_2_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_3_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_4_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_4_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_5_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_5_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_6_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_6_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_7_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_7_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_8_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_8_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_9_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_9_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_10_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_10_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_11_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_11_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_12_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_12_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_13_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_13_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_14_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_14_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_15_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_15_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_16_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_16_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_17_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_17_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_18_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_18_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_19_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_19_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_20_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_20_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_21_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_21_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_22_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_22_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_23_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_23_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_24_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_24_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_25_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_25_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_26_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_26_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_27_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_27_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_28_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_28_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_29_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_29_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_30_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_30_V_read", "role": "default" }} , 
 	{ "name": "bn_bias_31_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bn_bias_31_V_read", "role": "default" }} , 
 	{ "name": "m_axi_DDR_buf_V_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "AWVALID" }} , 
 	{ "name": "m_axi_DDR_buf_V_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "AWREADY" }} , 
 	{ "name": "m_axi_DDR_buf_V_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "AWADDR" }} , 
 	{ "name": "m_axi_DDR_buf_V_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "AWID" }} , 
 	{ "name": "m_axi_DDR_buf_V_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "AWLEN" }} , 
 	{ "name": "m_axi_DDR_buf_V_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_DDR_buf_V_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "AWBURST" }} , 
 	{ "name": "m_axi_DDR_buf_V_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_DDR_buf_V_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_DDR_buf_V_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "AWPROT" }} , 
 	{ "name": "m_axi_DDR_buf_V_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "AWQOS" }} , 
 	{ "name": "m_axi_DDR_buf_V_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "AWREGION" }} , 
 	{ "name": "m_axi_DDR_buf_V_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "AWUSER" }} , 
 	{ "name": "m_axi_DDR_buf_V_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "WVALID" }} , 
 	{ "name": "m_axi_DDR_buf_V_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "WREADY" }} , 
 	{ "name": "m_axi_DDR_buf_V_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "WDATA" }} , 
 	{ "name": "m_axi_DDR_buf_V_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "WSTRB" }} , 
 	{ "name": "m_axi_DDR_buf_V_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "WLAST" }} , 
 	{ "name": "m_axi_DDR_buf_V_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "WID" }} , 
 	{ "name": "m_axi_DDR_buf_V_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "WUSER" }} , 
 	{ "name": "m_axi_DDR_buf_V_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "ARVALID" }} , 
 	{ "name": "m_axi_DDR_buf_V_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "ARREADY" }} , 
 	{ "name": "m_axi_DDR_buf_V_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "ARADDR" }} , 
 	{ "name": "m_axi_DDR_buf_V_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "ARID" }} , 
 	{ "name": "m_axi_DDR_buf_V_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "ARLEN" }} , 
 	{ "name": "m_axi_DDR_buf_V_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_DDR_buf_V_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "ARBURST" }} , 
 	{ "name": "m_axi_DDR_buf_V_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_DDR_buf_V_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_DDR_buf_V_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "ARPROT" }} , 
 	{ "name": "m_axi_DDR_buf_V_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "ARQOS" }} , 
 	{ "name": "m_axi_DDR_buf_V_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "ARREGION" }} , 
 	{ "name": "m_axi_DDR_buf_V_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "ARUSER" }} , 
 	{ "name": "m_axi_DDR_buf_V_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "RVALID" }} , 
 	{ "name": "m_axi_DDR_buf_V_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "RREADY" }} , 
 	{ "name": "m_axi_DDR_buf_V_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "RDATA" }} , 
 	{ "name": "m_axi_DDR_buf_V_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "RLAST" }} , 
 	{ "name": "m_axi_DDR_buf_V_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "RID" }} , 
 	{ "name": "m_axi_DDR_buf_V_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "RUSER" }} , 
 	{ "name": "m_axi_DDR_buf_V_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "RRESP" }} , 
 	{ "name": "m_axi_DDR_buf_V_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "BVALID" }} , 
 	{ "name": "m_axi_DDR_buf_V_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "BREADY" }} , 
 	{ "name": "m_axi_DDR_buf_V_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "BRESP" }} , 
 	{ "name": "m_axi_DDR_buf_V_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "BID" }} , 
 	{ "name": "m_axi_DDR_buf_V_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DDR_buf_V", "role": "BUSER" }} , 
 	{ "name": "DDR_buf_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "DDR_buf_V_offset", "role": "default" }} , 
 	{ "name": "out_buf_all_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_0_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_0_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_0_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_1_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_1_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_1_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_2_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_2_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_2_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_3_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_3_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_3_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_4_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_4_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_4_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_5_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_5_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_5_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_6_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_6_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_6_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_7_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_7_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_7_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_8_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_8_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_8_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_8_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_8_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_8_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_9_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_9_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_9_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_9_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_9_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_9_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_10_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_10_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_10_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_10_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_10_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_10_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_11_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_11_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_11_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_11_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_11_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_11_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_12_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_12_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_12_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_12_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_12_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_12_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_13_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_13_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_13_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_13_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_13_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_13_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_14_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_14_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_14_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_14_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_14_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_14_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_15_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_15_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_15_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_15_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_15_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_15_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_16_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_16_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_16_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_16_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_16_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_16_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_17_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_17_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_17_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_17_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_17_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_17_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_18_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_18_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_18_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_18_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_18_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_18_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_19_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_19_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_19_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_19_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_19_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_19_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_20_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_20_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_20_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_20_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_20_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_20_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_21_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_21_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_21_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_21_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_21_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_21_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_22_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_22_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_22_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_22_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_22_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_22_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_23_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_23_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_23_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_23_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_23_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_23_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_24_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_24_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_24_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_24_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_24_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_24_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_25_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_25_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_25_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_25_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_25_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_25_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_26_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_26_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_26_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_26_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_26_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_26_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_27_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_27_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_27_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_27_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_27_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_27_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_28_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_28_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_28_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_28_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_28_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_28_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_29_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_29_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_29_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_29_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_29_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_29_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_30_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_30_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_30_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_30_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_30_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_30_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_31_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_31_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_31_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_31_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_31_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_31_V", "role": "q0" }} , 
 	{ "name": "feat_buf_all_1_V_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "feat_buf_all_1_V_2", "role": "address0" }} , 
 	{ "name": "feat_buf_all_1_V_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "feat_buf_all_1_V_2", "role": "ce0" }} , 
 	{ "name": "feat_buf_all_1_V_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "feat_buf_all_1_V_2", "role": "we0" }} , 
 	{ "name": "feat_buf_all_1_V_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "feat_buf_all_1_V_2", "role": "d0" }} , 
 	{ "name": "feat_buf_all_0_V_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "feat_buf_all_0_V_2", "role": "address0" }} , 
 	{ "name": "feat_buf_all_0_V_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "feat_buf_all_0_V_2", "role": "ce0" }} , 
 	{ "name": "feat_buf_all_0_V_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "feat_buf_all_0_V_2", "role": "we0" }} , 
 	{ "name": "feat_buf_all_0_V_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "feat_buf_all_0_V_2", "role": "d0" }} , 
 	{ "name": "row_tile_start", "direction": "in", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "row_tile_start", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35"],
		"CDFG" : "bn_relu_small",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "350", "EstimateLatencyMax" : "462",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "bn_weight_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_weight_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "bn_bias_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "DDR_buf_V", "Type" : "MAXI", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "DDR_buf_V_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "DDR_buf_V_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "DDR_buf_V_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "DDR_buf_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "out_buf_all_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_7_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_8_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_9_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_10_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_11_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_12_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_13_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_14_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_15_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_16_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_17_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_18_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_19_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_20_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_21_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_22_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_23_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_24_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_25_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_26_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_27_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_28_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_29_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_30_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_all_31_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "feat_buf_all_1_V_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "feat_buf_all_0_V_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "row_tile_start", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_9ns_3hbi_U631", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_8ns_3ibs_U632", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mac_muladjbC_U633", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U634", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U635", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U636", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U637", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U638", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U639", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U640", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U641", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U642", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U643", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U644", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U645", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U646", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U647", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U648", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U649", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U650", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U651", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U652", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U653", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U654", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U655", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U656", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U657", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U658", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U659", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U660", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U661", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U662", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U663", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U664", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U665", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	bn_relu_small {
		bn_weight_0_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_1_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_2_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_3_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_4_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_5_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_6_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_7_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_8_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_9_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_10_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_11_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_12_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_13_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_14_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_15_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_16_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_17_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_18_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_19_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_20_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_21_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_22_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_23_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_24_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_25_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_26_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_27_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_28_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_29_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_30_V_read {Type I LastRead 1 FirstWrite -1}
		bn_weight_31_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_0_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_1_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_2_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_3_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_4_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_5_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_6_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_7_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_8_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_9_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_10_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_11_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_12_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_13_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_14_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_15_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_16_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_17_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_18_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_19_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_20_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_21_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_22_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_23_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_24_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_25_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_26_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_27_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_28_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_29_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_30_V_read {Type I LastRead 1 FirstWrite -1}
		bn_bias_31_V_read {Type I LastRead 1 FirstWrite -1}
		DDR_buf_V {Type O LastRead 10 FirstWrite 9}
		DDR_buf_V_offset {Type I LastRead 1 FirstWrite -1}
		out_buf_all_0_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_1_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_2_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_3_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_4_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_5_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_6_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_7_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_8_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_9_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_10_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_11_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_12_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_13_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_14_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_15_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_16_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_17_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_18_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_19_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_20_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_21_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_22_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_23_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_24_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_25_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_26_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_27_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_28_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_29_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_30_V {Type I LastRead 4 FirstWrite -1}
		out_buf_all_31_V {Type I LastRead 4 FirstWrite -1}
		feat_buf_all_1_V_2 {Type O LastRead -1 FirstWrite 9}
		feat_buf_all_0_V_2 {Type O LastRead -1 FirstWrite 9}
		row_tile_start {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "350", "Max" : "462"}
	, {"Name" : "Interval", "Min" : "350", "Max" : "462"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	bn_weight_0_V_read { ap_none {  { bn_weight_0_V_read in_data 0 16 } } }
	bn_weight_1_V_read { ap_none {  { bn_weight_1_V_read in_data 0 16 } } }
	bn_weight_2_V_read { ap_none {  { bn_weight_2_V_read in_data 0 16 } } }
	bn_weight_3_V_read { ap_none {  { bn_weight_3_V_read in_data 0 16 } } }
	bn_weight_4_V_read { ap_none {  { bn_weight_4_V_read in_data 0 16 } } }
	bn_weight_5_V_read { ap_none {  { bn_weight_5_V_read in_data 0 16 } } }
	bn_weight_6_V_read { ap_none {  { bn_weight_6_V_read in_data 0 16 } } }
	bn_weight_7_V_read { ap_none {  { bn_weight_7_V_read in_data 0 16 } } }
	bn_weight_8_V_read { ap_none {  { bn_weight_8_V_read in_data 0 16 } } }
	bn_weight_9_V_read { ap_none {  { bn_weight_9_V_read in_data 0 16 } } }
	bn_weight_10_V_read { ap_none {  { bn_weight_10_V_read in_data 0 16 } } }
	bn_weight_11_V_read { ap_none {  { bn_weight_11_V_read in_data 0 16 } } }
	bn_weight_12_V_read { ap_none {  { bn_weight_12_V_read in_data 0 16 } } }
	bn_weight_13_V_read { ap_none {  { bn_weight_13_V_read in_data 0 16 } } }
	bn_weight_14_V_read { ap_none {  { bn_weight_14_V_read in_data 0 16 } } }
	bn_weight_15_V_read { ap_none {  { bn_weight_15_V_read in_data 0 16 } } }
	bn_weight_16_V_read { ap_none {  { bn_weight_16_V_read in_data 0 16 } } }
	bn_weight_17_V_read { ap_none {  { bn_weight_17_V_read in_data 0 16 } } }
	bn_weight_18_V_read { ap_none {  { bn_weight_18_V_read in_data 0 16 } } }
	bn_weight_19_V_read { ap_none {  { bn_weight_19_V_read in_data 0 16 } } }
	bn_weight_20_V_read { ap_none {  { bn_weight_20_V_read in_data 0 16 } } }
	bn_weight_21_V_read { ap_none {  { bn_weight_21_V_read in_data 0 16 } } }
	bn_weight_22_V_read { ap_none {  { bn_weight_22_V_read in_data 0 16 } } }
	bn_weight_23_V_read { ap_none {  { bn_weight_23_V_read in_data 0 16 } } }
	bn_weight_24_V_read { ap_none {  { bn_weight_24_V_read in_data 0 16 } } }
	bn_weight_25_V_read { ap_none {  { bn_weight_25_V_read in_data 0 16 } } }
	bn_weight_26_V_read { ap_none {  { bn_weight_26_V_read in_data 0 16 } } }
	bn_weight_27_V_read { ap_none {  { bn_weight_27_V_read in_data 0 16 } } }
	bn_weight_28_V_read { ap_none {  { bn_weight_28_V_read in_data 0 16 } } }
	bn_weight_29_V_read { ap_none {  { bn_weight_29_V_read in_data 0 16 } } }
	bn_weight_30_V_read { ap_none {  { bn_weight_30_V_read in_data 0 16 } } }
	bn_weight_31_V_read { ap_none {  { bn_weight_31_V_read in_data 0 16 } } }
	bn_bias_0_V_read { ap_none {  { bn_bias_0_V_read in_data 0 16 } } }
	bn_bias_1_V_read { ap_none {  { bn_bias_1_V_read in_data 0 16 } } }
	bn_bias_2_V_read { ap_none {  { bn_bias_2_V_read in_data 0 16 } } }
	bn_bias_3_V_read { ap_none {  { bn_bias_3_V_read in_data 0 16 } } }
	bn_bias_4_V_read { ap_none {  { bn_bias_4_V_read in_data 0 16 } } }
	bn_bias_5_V_read { ap_none {  { bn_bias_5_V_read in_data 0 16 } } }
	bn_bias_6_V_read { ap_none {  { bn_bias_6_V_read in_data 0 16 } } }
	bn_bias_7_V_read { ap_none {  { bn_bias_7_V_read in_data 0 16 } } }
	bn_bias_8_V_read { ap_none {  { bn_bias_8_V_read in_data 0 16 } } }
	bn_bias_9_V_read { ap_none {  { bn_bias_9_V_read in_data 0 16 } } }
	bn_bias_10_V_read { ap_none {  { bn_bias_10_V_read in_data 0 16 } } }
	bn_bias_11_V_read { ap_none {  { bn_bias_11_V_read in_data 0 16 } } }
	bn_bias_12_V_read { ap_none {  { bn_bias_12_V_read in_data 0 16 } } }
	bn_bias_13_V_read { ap_none {  { bn_bias_13_V_read in_data 0 16 } } }
	bn_bias_14_V_read { ap_none {  { bn_bias_14_V_read in_data 0 16 } } }
	bn_bias_15_V_read { ap_none {  { bn_bias_15_V_read in_data 0 16 } } }
	bn_bias_16_V_read { ap_none {  { bn_bias_16_V_read in_data 0 16 } } }
	bn_bias_17_V_read { ap_none {  { bn_bias_17_V_read in_data 0 16 } } }
	bn_bias_18_V_read { ap_none {  { bn_bias_18_V_read in_data 0 16 } } }
	bn_bias_19_V_read { ap_none {  { bn_bias_19_V_read in_data 0 16 } } }
	bn_bias_20_V_read { ap_none {  { bn_bias_20_V_read in_data 0 16 } } }
	bn_bias_21_V_read { ap_none {  { bn_bias_21_V_read in_data 0 16 } } }
	bn_bias_22_V_read { ap_none {  { bn_bias_22_V_read in_data 0 16 } } }
	bn_bias_23_V_read { ap_none {  { bn_bias_23_V_read in_data 0 16 } } }
	bn_bias_24_V_read { ap_none {  { bn_bias_24_V_read in_data 0 16 } } }
	bn_bias_25_V_read { ap_none {  { bn_bias_25_V_read in_data 0 16 } } }
	bn_bias_26_V_read { ap_none {  { bn_bias_26_V_read in_data 0 16 } } }
	bn_bias_27_V_read { ap_none {  { bn_bias_27_V_read in_data 0 16 } } }
	bn_bias_28_V_read { ap_none {  { bn_bias_28_V_read in_data 0 16 } } }
	bn_bias_29_V_read { ap_none {  { bn_bias_29_V_read in_data 0 16 } } }
	bn_bias_30_V_read { ap_none {  { bn_bias_30_V_read in_data 0 16 } } }
	bn_bias_31_V_read { ap_none {  { bn_bias_31_V_read in_data 0 16 } } }
	DDR_buf_V { m_axi {  { m_axi_DDR_buf_V_AWVALID VALID 1 1 }  { m_axi_DDR_buf_V_AWREADY READY 0 1 }  { m_axi_DDR_buf_V_AWADDR ADDR 1 32 }  { m_axi_DDR_buf_V_AWID ID 1 1 }  { m_axi_DDR_buf_V_AWLEN LEN 1 32 }  { m_axi_DDR_buf_V_AWSIZE SIZE 1 3 }  { m_axi_DDR_buf_V_AWBURST BURST 1 2 }  { m_axi_DDR_buf_V_AWLOCK LOCK 1 2 }  { m_axi_DDR_buf_V_AWCACHE CACHE 1 4 }  { m_axi_DDR_buf_V_AWPROT PROT 1 3 }  { m_axi_DDR_buf_V_AWQOS QOS 1 4 }  { m_axi_DDR_buf_V_AWREGION REGION 1 4 }  { m_axi_DDR_buf_V_AWUSER USER 1 1 }  { m_axi_DDR_buf_V_WVALID VALID 1 1 }  { m_axi_DDR_buf_V_WREADY READY 0 1 }  { m_axi_DDR_buf_V_WDATA DATA 1 512 }  { m_axi_DDR_buf_V_WSTRB STRB 1 64 }  { m_axi_DDR_buf_V_WLAST LAST 1 1 }  { m_axi_DDR_buf_V_WID ID 1 1 }  { m_axi_DDR_buf_V_WUSER USER 1 1 }  { m_axi_DDR_buf_V_ARVALID VALID 1 1 }  { m_axi_DDR_buf_V_ARREADY READY 0 1 }  { m_axi_DDR_buf_V_ARADDR ADDR 1 32 }  { m_axi_DDR_buf_V_ARID ID 1 1 }  { m_axi_DDR_buf_V_ARLEN LEN 1 32 }  { m_axi_DDR_buf_V_ARSIZE SIZE 1 3 }  { m_axi_DDR_buf_V_ARBURST BURST 1 2 }  { m_axi_DDR_buf_V_ARLOCK LOCK 1 2 }  { m_axi_DDR_buf_V_ARCACHE CACHE 1 4 }  { m_axi_DDR_buf_V_ARPROT PROT 1 3 }  { m_axi_DDR_buf_V_ARQOS QOS 1 4 }  { m_axi_DDR_buf_V_ARREGION REGION 1 4 }  { m_axi_DDR_buf_V_ARUSER USER 1 1 }  { m_axi_DDR_buf_V_RVALID VALID 0 1 }  { m_axi_DDR_buf_V_RREADY READY 1 1 }  { m_axi_DDR_buf_V_RDATA DATA 0 512 }  { m_axi_DDR_buf_V_RLAST LAST 0 1 }  { m_axi_DDR_buf_V_RID ID 0 1 }  { m_axi_DDR_buf_V_RUSER USER 0 1 }  { m_axi_DDR_buf_V_RRESP RESP 0 2 }  { m_axi_DDR_buf_V_BVALID VALID 0 1 }  { m_axi_DDR_buf_V_BREADY READY 1 1 }  { m_axi_DDR_buf_V_BRESP RESP 0 2 }  { m_axi_DDR_buf_V_BID ID 0 1 }  { m_axi_DDR_buf_V_BUSER USER 0 1 } } }
	DDR_buf_V_offset { ap_none {  { DDR_buf_V_offset in_data 0 26 } } }
	out_buf_all_0_V { ap_memory {  { out_buf_all_0_V_address0 mem_address 1 11 }  { out_buf_all_0_V_ce0 mem_ce 1 1 }  { out_buf_all_0_V_q0 mem_dout 0 16 } } }
	out_buf_all_1_V { ap_memory {  { out_buf_all_1_V_address0 mem_address 1 11 }  { out_buf_all_1_V_ce0 mem_ce 1 1 }  { out_buf_all_1_V_q0 mem_dout 0 16 } } }
	out_buf_all_2_V { ap_memory {  { out_buf_all_2_V_address0 mem_address 1 11 }  { out_buf_all_2_V_ce0 mem_ce 1 1 }  { out_buf_all_2_V_q0 mem_dout 0 16 } } }
	out_buf_all_3_V { ap_memory {  { out_buf_all_3_V_address0 mem_address 1 11 }  { out_buf_all_3_V_ce0 mem_ce 1 1 }  { out_buf_all_3_V_q0 mem_dout 0 16 } } }
	out_buf_all_4_V { ap_memory {  { out_buf_all_4_V_address0 mem_address 1 11 }  { out_buf_all_4_V_ce0 mem_ce 1 1 }  { out_buf_all_4_V_q0 mem_dout 0 16 } } }
	out_buf_all_5_V { ap_memory {  { out_buf_all_5_V_address0 mem_address 1 11 }  { out_buf_all_5_V_ce0 mem_ce 1 1 }  { out_buf_all_5_V_q0 mem_dout 0 16 } } }
	out_buf_all_6_V { ap_memory {  { out_buf_all_6_V_address0 mem_address 1 11 }  { out_buf_all_6_V_ce0 mem_ce 1 1 }  { out_buf_all_6_V_q0 mem_dout 0 16 } } }
	out_buf_all_7_V { ap_memory {  { out_buf_all_7_V_address0 mem_address 1 11 }  { out_buf_all_7_V_ce0 mem_ce 1 1 }  { out_buf_all_7_V_q0 mem_dout 0 16 } } }
	out_buf_all_8_V { ap_memory {  { out_buf_all_8_V_address0 mem_address 1 11 }  { out_buf_all_8_V_ce0 mem_ce 1 1 }  { out_buf_all_8_V_q0 mem_dout 0 16 } } }
	out_buf_all_9_V { ap_memory {  { out_buf_all_9_V_address0 mem_address 1 11 }  { out_buf_all_9_V_ce0 mem_ce 1 1 }  { out_buf_all_9_V_q0 mem_dout 0 16 } } }
	out_buf_all_10_V { ap_memory {  { out_buf_all_10_V_address0 mem_address 1 11 }  { out_buf_all_10_V_ce0 mem_ce 1 1 }  { out_buf_all_10_V_q0 mem_dout 0 16 } } }
	out_buf_all_11_V { ap_memory {  { out_buf_all_11_V_address0 mem_address 1 11 }  { out_buf_all_11_V_ce0 mem_ce 1 1 }  { out_buf_all_11_V_q0 mem_dout 0 16 } } }
	out_buf_all_12_V { ap_memory {  { out_buf_all_12_V_address0 mem_address 1 11 }  { out_buf_all_12_V_ce0 mem_ce 1 1 }  { out_buf_all_12_V_q0 mem_dout 0 16 } } }
	out_buf_all_13_V { ap_memory {  { out_buf_all_13_V_address0 mem_address 1 11 }  { out_buf_all_13_V_ce0 mem_ce 1 1 }  { out_buf_all_13_V_q0 mem_dout 0 16 } } }
	out_buf_all_14_V { ap_memory {  { out_buf_all_14_V_address0 mem_address 1 11 }  { out_buf_all_14_V_ce0 mem_ce 1 1 }  { out_buf_all_14_V_q0 mem_dout 0 16 } } }
	out_buf_all_15_V { ap_memory {  { out_buf_all_15_V_address0 mem_address 1 11 }  { out_buf_all_15_V_ce0 mem_ce 1 1 }  { out_buf_all_15_V_q0 mem_dout 0 16 } } }
	out_buf_all_16_V { ap_memory {  { out_buf_all_16_V_address0 mem_address 1 11 }  { out_buf_all_16_V_ce0 mem_ce 1 1 }  { out_buf_all_16_V_q0 mem_dout 0 16 } } }
	out_buf_all_17_V { ap_memory {  { out_buf_all_17_V_address0 mem_address 1 11 }  { out_buf_all_17_V_ce0 mem_ce 1 1 }  { out_buf_all_17_V_q0 mem_dout 0 16 } } }
	out_buf_all_18_V { ap_memory {  { out_buf_all_18_V_address0 mem_address 1 11 }  { out_buf_all_18_V_ce0 mem_ce 1 1 }  { out_buf_all_18_V_q0 mem_dout 0 16 } } }
	out_buf_all_19_V { ap_memory {  { out_buf_all_19_V_address0 mem_address 1 11 }  { out_buf_all_19_V_ce0 mem_ce 1 1 }  { out_buf_all_19_V_q0 mem_dout 0 16 } } }
	out_buf_all_20_V { ap_memory {  { out_buf_all_20_V_address0 mem_address 1 11 }  { out_buf_all_20_V_ce0 mem_ce 1 1 }  { out_buf_all_20_V_q0 mem_dout 0 16 } } }
	out_buf_all_21_V { ap_memory {  { out_buf_all_21_V_address0 mem_address 1 11 }  { out_buf_all_21_V_ce0 mem_ce 1 1 }  { out_buf_all_21_V_q0 mem_dout 0 16 } } }
	out_buf_all_22_V { ap_memory {  { out_buf_all_22_V_address0 mem_address 1 11 }  { out_buf_all_22_V_ce0 mem_ce 1 1 }  { out_buf_all_22_V_q0 mem_dout 0 16 } } }
	out_buf_all_23_V { ap_memory {  { out_buf_all_23_V_address0 mem_address 1 11 }  { out_buf_all_23_V_ce0 mem_ce 1 1 }  { out_buf_all_23_V_q0 mem_dout 0 16 } } }
	out_buf_all_24_V { ap_memory {  { out_buf_all_24_V_address0 mem_address 1 11 }  { out_buf_all_24_V_ce0 mem_ce 1 1 }  { out_buf_all_24_V_q0 mem_dout 0 16 } } }
	out_buf_all_25_V { ap_memory {  { out_buf_all_25_V_address0 mem_address 1 11 }  { out_buf_all_25_V_ce0 mem_ce 1 1 }  { out_buf_all_25_V_q0 mem_dout 0 16 } } }
	out_buf_all_26_V { ap_memory {  { out_buf_all_26_V_address0 mem_address 1 11 }  { out_buf_all_26_V_ce0 mem_ce 1 1 }  { out_buf_all_26_V_q0 mem_dout 0 16 } } }
	out_buf_all_27_V { ap_memory {  { out_buf_all_27_V_address0 mem_address 1 11 }  { out_buf_all_27_V_ce0 mem_ce 1 1 }  { out_buf_all_27_V_q0 mem_dout 0 16 } } }
	out_buf_all_28_V { ap_memory {  { out_buf_all_28_V_address0 mem_address 1 11 }  { out_buf_all_28_V_ce0 mem_ce 1 1 }  { out_buf_all_28_V_q0 mem_dout 0 16 } } }
	out_buf_all_29_V { ap_memory {  { out_buf_all_29_V_address0 mem_address 1 11 }  { out_buf_all_29_V_ce0 mem_ce 1 1 }  { out_buf_all_29_V_q0 mem_dout 0 16 } } }
	out_buf_all_30_V { ap_memory {  { out_buf_all_30_V_address0 mem_address 1 11 }  { out_buf_all_30_V_ce0 mem_ce 1 1 }  { out_buf_all_30_V_q0 mem_dout 0 16 } } }
	out_buf_all_31_V { ap_memory {  { out_buf_all_31_V_address0 mem_address 1 11 }  { out_buf_all_31_V_ce0 mem_ce 1 1 }  { out_buf_all_31_V_q0 mem_dout 0 16 } } }
	feat_buf_all_1_V_2 { ap_memory {  { feat_buf_all_1_V_2_address0 mem_address 1 16 }  { feat_buf_all_1_V_2_ce0 mem_ce 1 1 }  { feat_buf_all_1_V_2_we0 mem_we 1 1 }  { feat_buf_all_1_V_2_d0 mem_din 1 32 } } }
	feat_buf_all_0_V_2 { ap_memory {  { feat_buf_all_0_V_2_address0 mem_address 1 16 }  { feat_buf_all_0_V_2_ce0 mem_ce 1 1 }  { feat_buf_all_0_V_2_we0 mem_we 1 1 }  { feat_buf_all_0_V_2_d0 mem_din 1 32 } } }
	row_tile_start { ap_none {  { row_tile_start in_data 0 9 } } }
}
