set moduleName bn_relu_sc_relu
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
set C_modelName {bn_relu_sc_relu}
set C_modelType { void 0 }
set C_modelArgList {
	{ conv_threshold_0_V_s int 16 regular  }
	{ conv_threshold_1_V_s int 16 regular  }
	{ conv_threshold_2_V_s int 16 regular  }
	{ conv_threshold_3_V_s int 16 regular  }
	{ conv_threshold_4_V_s int 16 regular  }
	{ conv_threshold_5_V_s int 16 regular  }
	{ conv_threshold_6_V_s int 16 regular  }
	{ conv_threshold_7_V_s int 16 regular  }
	{ conv_threshold_8_V_s int 16 regular  }
	{ conv_threshold_9_V_s int 16 regular  }
	{ conv_threshold_10_V_read int 16 regular  }
	{ conv_threshold_11_V_read int 16 regular  }
	{ conv_threshold_12_V_read int 16 regular  }
	{ conv_threshold_13_V_read int 16 regular  }
	{ conv_threshold_14_V_read int 16 regular  }
	{ conv_threshold_15_V_read int 16 regular  }
	{ conv_threshold_16_V_read int 16 regular  }
	{ conv_threshold_17_V_read int 16 regular  }
	{ conv_threshold_18_V_read int 16 regular  }
	{ conv_threshold_19_V_read int 16 regular  }
	{ conv_threshold_20_V_read int 16 regular  }
	{ conv_threshold_21_V_read int 16 regular  }
	{ conv_threshold_22_V_read int 16 regular  }
	{ conv_threshold_23_V_read int 16 regular  }
	{ conv_threshold_24_V_read int 16 regular  }
	{ conv_threshold_25_V_read int 16 regular  }
	{ conv_threshold_26_V_read int 16 regular  }
	{ conv_threshold_27_V_read int 16 regular  }
	{ conv_threshold_28_V_read int 16 regular  }
	{ conv_threshold_29_V_read int 16 regular  }
	{ conv_threshold_30_V_read int 16 regular  }
	{ conv_threshold_31_V_read int 16 regular  }
	{ conv_bn_weight_0_V_s int 16 regular  }
	{ conv_bn_weight_1_V_s int 16 regular  }
	{ conv_bn_weight_2_V_s int 16 regular  }
	{ conv_bn_weight_3_V_s int 16 regular  }
	{ conv_bn_weight_4_V_s int 16 regular  }
	{ conv_bn_weight_5_V_s int 16 regular  }
	{ conv_bn_weight_6_V_s int 16 regular  }
	{ conv_bn_weight_7_V_s int 16 regular  }
	{ conv_bn_weight_8_V_s int 16 regular  }
	{ conv_bn_weight_9_V_s int 16 regular  }
	{ conv_bn_weight_10_V_read int 16 regular  }
	{ conv_bn_weight_11_V_read int 16 regular  }
	{ conv_bn_weight_12_V_read int 16 regular  }
	{ conv_bn_weight_13_V_read int 16 regular  }
	{ conv_bn_weight_14_V_read int 16 regular  }
	{ conv_bn_weight_15_V_read int 16 regular  }
	{ conv_bn_weight_16_V_read int 16 regular  }
	{ conv_bn_weight_17_V_read int 16 regular  }
	{ conv_bn_weight_18_V_read int 16 regular  }
	{ conv_bn_weight_19_V_read int 16 regular  }
	{ conv_bn_weight_20_V_read int 16 regular  }
	{ conv_bn_weight_21_V_read int 16 regular  }
	{ conv_bn_weight_22_V_read int 16 regular  }
	{ conv_bn_weight_23_V_read int 16 regular  }
	{ conv_bn_weight_24_V_read int 16 regular  }
	{ conv_bn_weight_25_V_read int 16 regular  }
	{ conv_bn_weight_26_V_read int 16 regular  }
	{ conv_bn_weight_27_V_read int 16 regular  }
	{ conv_bn_weight_28_V_read int 16 regular  }
	{ conv_bn_weight_29_V_read int 16 regular  }
	{ conv_bn_weight_30_V_read int 16 regular  }
	{ conv_bn_weight_31_V_read int 16 regular  }
	{ conv_bn_bias_0_V_re int 16 regular  }
	{ conv_bn_bias_1_V_re int 16 regular  }
	{ conv_bn_bias_2_V_re int 16 regular  }
	{ conv_bn_bias_3_V_re int 16 regular  }
	{ conv_bn_bias_4_V_re int 16 regular  }
	{ conv_bn_bias_5_V_re int 16 regular  }
	{ conv_bn_bias_6_V_re int 16 regular  }
	{ conv_bn_bias_7_V_re int 16 regular  }
	{ conv_bn_bias_8_V_re int 16 regular  }
	{ conv_bn_bias_9_V_re int 16 regular  }
	{ conv_bn_bias_10_V_r int 16 regular  }
	{ conv_bn_bias_11_V_r int 16 regular  }
	{ conv_bn_bias_12_V_r int 16 regular  }
	{ conv_bn_bias_13_V_r int 16 regular  }
	{ conv_bn_bias_14_V_r int 16 regular  }
	{ conv_bn_bias_15_V_r int 16 regular  }
	{ conv_bn_bias_16_V_r int 16 regular  }
	{ conv_bn_bias_17_V_r int 16 regular  }
	{ conv_bn_bias_18_V_r int 16 regular  }
	{ conv_bn_bias_19_V_r int 16 regular  }
	{ conv_bn_bias_20_V_r int 16 regular  }
	{ conv_bn_bias_21_V_r int 16 regular  }
	{ conv_bn_bias_22_V_r int 16 regular  }
	{ conv_bn_bias_23_V_r int 16 regular  }
	{ conv_bn_bias_24_V_r int 16 regular  }
	{ conv_bn_bias_25_V_r int 16 regular  }
	{ conv_bn_bias_26_V_r int 16 regular  }
	{ conv_bn_bias_27_V_r int 16 regular  }
	{ conv_bn_bias_28_V_r int 16 regular  }
	{ conv_bn_bias_29_V_r int 16 regular  }
	{ conv_bn_bias_30_V_r int 16 regular  }
	{ conv_bn_bias_31_V_r int 16 regular  }
	{ relu_shift_x_0_V_re int 16 regular  }
	{ relu_shift_x_1_V_re int 16 regular  }
	{ relu_shift_x_2_V_re int 16 regular  }
	{ relu_shift_x_3_V_re int 16 regular  }
	{ relu_shift_x_4_V_re int 16 regular  }
	{ relu_shift_x_5_V_re int 16 regular  }
	{ relu_shift_x_6_V_re int 16 regular  }
	{ relu_shift_x_7_V_re int 16 regular  }
	{ relu_shift_x_8_V_re int 16 regular  }
	{ relu_shift_x_9_V_re int 16 regular  }
	{ relu_shift_x_10_V_r int 16 regular  }
	{ relu_shift_x_11_V_r int 16 regular  }
	{ relu_shift_x_12_V_r int 16 regular  }
	{ relu_shift_x_13_V_r int 16 regular  }
	{ relu_shift_x_14_V_r int 16 regular  }
	{ relu_shift_x_15_V_r int 16 regular  }
	{ relu_shift_x_16_V_r int 16 regular  }
	{ relu_shift_x_17_V_r int 16 regular  }
	{ relu_shift_x_18_V_r int 16 regular  }
	{ relu_shift_x_19_V_r int 16 regular  }
	{ relu_shift_x_20_V_r int 16 regular  }
	{ relu_shift_x_21_V_r int 16 regular  }
	{ relu_shift_x_22_V_r int 16 regular  }
	{ relu_shift_x_23_V_r int 16 regular  }
	{ relu_shift_x_24_V_r int 16 regular  }
	{ relu_shift_x_25_V_r int 16 regular  }
	{ relu_shift_x_26_V_r int 16 regular  }
	{ relu_shift_x_27_V_r int 16 regular  }
	{ relu_shift_x_28_V_r int 16 regular  }
	{ relu_shift_x_29_V_r int 16 regular  }
	{ relu_shift_x_30_V_r int 16 regular  }
	{ relu_shift_x_31_V_r int 16 regular  }
	{ relu_shift_y_0_V_re int 16 regular  }
	{ relu_shift_y_1_V_re int 16 regular  }
	{ relu_shift_y_2_V_re int 16 regular  }
	{ relu_shift_y_3_V_re int 16 regular  }
	{ relu_shift_y_4_V_re int 16 regular  }
	{ relu_shift_y_5_V_re int 16 regular  }
	{ relu_shift_y_6_V_re int 16 regular  }
	{ relu_shift_y_7_V_re int 16 regular  }
	{ relu_shift_y_8_V_re int 16 regular  }
	{ relu_shift_y_9_V_re int 16 regular  }
	{ relu_shift_y_10_V_r int 16 regular  }
	{ relu_shift_y_11_V_r int 16 regular  }
	{ relu_shift_y_12_V_r int 16 regular  }
	{ relu_shift_y_13_V_r int 16 regular  }
	{ relu_shift_y_14_V_r int 16 regular  }
	{ relu_shift_y_15_V_r int 16 regular  }
	{ relu_shift_y_16_V_r int 16 regular  }
	{ relu_shift_y_17_V_r int 16 regular  }
	{ relu_shift_y_18_V_r int 16 regular  }
	{ relu_shift_y_19_V_r int 16 regular  }
	{ relu_shift_y_20_V_r int 16 regular  }
	{ relu_shift_y_21_V_r int 16 regular  }
	{ relu_shift_y_22_V_r int 16 regular  }
	{ relu_shift_y_23_V_r int 16 regular  }
	{ relu_shift_y_24_V_r int 16 regular  }
	{ relu_shift_y_25_V_r int 16 regular  }
	{ relu_shift_y_26_V_r int 16 regular  }
	{ relu_shift_y_27_V_r int 16 regular  }
	{ relu_shift_y_28_V_r int 16 regular  }
	{ relu_shift_y_29_V_r int 16 regular  }
	{ relu_shift_y_30_V_r int 16 regular  }
	{ relu_shift_y_31_V_r int 16 regular  }
	{ relu_weight_0_V_rea int 16 regular  }
	{ relu_weight_1_V_rea int 16 regular  }
	{ relu_weight_2_V_rea int 16 regular  }
	{ relu_weight_3_V_rea int 16 regular  }
	{ relu_weight_4_V_rea int 16 regular  }
	{ relu_weight_5_V_rea int 16 regular  }
	{ relu_weight_6_V_rea int 16 regular  }
	{ relu_weight_7_V_rea int 16 regular  }
	{ relu_weight_8_V_rea int 16 regular  }
	{ relu_weight_9_V_rea int 16 regular  }
	{ relu_weight_10_V_re int 16 regular  }
	{ relu_weight_11_V_re int 16 regular  }
	{ relu_weight_12_V_re int 16 regular  }
	{ relu_weight_13_V_re int 16 regular  }
	{ relu_weight_14_V_re int 16 regular  }
	{ relu_weight_15_V_re int 16 regular  }
	{ relu_weight_16_V_re int 16 regular  }
	{ relu_weight_17_V_re int 16 regular  }
	{ relu_weight_18_V_re int 16 regular  }
	{ relu_weight_19_V_re int 16 regular  }
	{ relu_weight_20_V_re int 16 regular  }
	{ relu_weight_21_V_re int 16 regular  }
	{ relu_weight_22_V_re int 16 regular  }
	{ relu_weight_23_V_re int 16 regular  }
	{ relu_weight_24_V_re int 16 regular  }
	{ relu_weight_25_V_re int 16 regular  }
	{ relu_weight_26_V_re int 16 regular  }
	{ relu_weight_27_V_re int 16 regular  }
	{ relu_weight_28_V_re int 16 regular  }
	{ relu_weight_29_V_re int 16 regular  }
	{ relu_weight_30_V_re int 16 regular  }
	{ relu_weight_31_V_re int 16 regular  }
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
	{ out_buf_all_0_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_1_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_2_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_3_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_4_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_5_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_6_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_7_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_8_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_9_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_10_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_11_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_12_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_13_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_14_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_15_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_16_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_17_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_18_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_19_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_20_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_21_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_22_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_23_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_24_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_25_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_26_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_27_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_28_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_29_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_30_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_all_31_V int 16 regular {array 2034 { 1 1 } 1 1 }  }
	{ out_buf_sc_0_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_1_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_2_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_3_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_4_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_5_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_6_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_7_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_8_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_9_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_10_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_11_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_12_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_13_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_14_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_15_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_16_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_17_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_18_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_19_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_20_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_21_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_22_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_23_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_24_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_25_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_26_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_27_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_28_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_29_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_30_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ out_buf_sc_31_V int 16 regular {array 904 { 1 3 } 1 1 }  }
	{ feat_buf_all_0_V_4 int 32 regular {array 51200 { 0 3 } 0 1 }  }
	{ H_fmap_in int 8 regular  }
	{ H_fmap_out int 8 regular  }
	{ c_out int 6 regular  }
	{ row_tile_start int 32 regular  }
	{ stride int 4 regular  }
	{ switch_bank int 1 regular  }
	{ feat_buf_all_1_V int 32 regular {array 51200 { 0 3 } 0 1 } {global 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "conv_threshold_0_V_s", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_1_V_s", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_2_V_s", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_3_V_s", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_4_V_s", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_5_V_s", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_6_V_s", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_7_V_s", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_8_V_s", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_9_V_s", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_10_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_11_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_12_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_13_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_14_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_15_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_16_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_17_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_18_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_19_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_20_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_21_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_22_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_23_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_24_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_25_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_26_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_27_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_28_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_29_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_30_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_threshold_31_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_0_V_s", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_1_V_s", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_2_V_s", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_3_V_s", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_4_V_s", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_5_V_s", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_6_V_s", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_7_V_s", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_8_V_s", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_9_V_s", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_10_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_11_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_12_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_13_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_14_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_15_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_16_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_17_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_18_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_19_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_20_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_21_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_22_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_23_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_24_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_25_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_26_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_27_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_28_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_29_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_30_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_weight_31_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_0_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_1_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_2_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_3_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_4_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_5_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_6_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_7_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_8_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_9_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_10_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_11_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_12_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_13_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_14_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_15_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_16_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_17_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_18_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_19_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_20_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_21_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_22_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_23_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_24_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_25_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_26_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_27_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_28_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_29_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_30_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "conv_bn_bias_31_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_0_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_1_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_2_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_3_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_4_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_5_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_6_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_7_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_8_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_9_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_10_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_11_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_12_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_13_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_14_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_15_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_16_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_17_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_18_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_19_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_20_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_21_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_22_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_23_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_24_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_25_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_26_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_27_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_28_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_29_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_30_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_x_31_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_0_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_1_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_2_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_3_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_4_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_5_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_6_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_7_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_8_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_9_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_10_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_11_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_12_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_13_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_14_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_15_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_16_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_17_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_18_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_19_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_20_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_21_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_22_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_23_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_24_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_25_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_26_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_27_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_28_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_29_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_30_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_shift_y_31_V_r", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_0_V_rea", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_1_V_rea", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_2_V_rea", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_3_V_rea", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_4_V_rea", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_5_V_rea", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_6_V_rea", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_7_V_rea", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_8_V_rea", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_9_V_rea", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_10_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_11_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_12_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_13_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_14_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_15_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_16_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_17_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_18_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_19_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_20_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_21_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_22_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_23_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_24_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_25_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_26_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_27_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_28_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_29_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_30_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu_weight_31_V_re", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
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
 	{ "Name" : "out_buf_sc_0_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_1_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_2_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_3_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_4_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_5_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_6_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_7_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_8_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_9_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_10_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_11_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_12_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_13_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_14_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_15_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_16_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_17_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_18_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_19_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_20_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_21_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_22_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_23_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_24_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_25_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_26_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_27_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_28_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_29_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_30_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_buf_sc_31_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "feat_buf_all_0_V_4", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "H_fmap_in", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "H_fmap_out", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "c_out", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "row_tile_start", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "stride", "interface" : "wire", "bitwidth" : 4, "direction" : "READONLY"} , 
 	{ "Name" : "switch_bank", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "feat_buf_all_1_V", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} ]}
# RTL Port declarations: 
set portNum 610
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ conv_threshold_0_V_s sc_in sc_lv 16 signal 0 } 
	{ conv_threshold_1_V_s sc_in sc_lv 16 signal 1 } 
	{ conv_threshold_2_V_s sc_in sc_lv 16 signal 2 } 
	{ conv_threshold_3_V_s sc_in sc_lv 16 signal 3 } 
	{ conv_threshold_4_V_s sc_in sc_lv 16 signal 4 } 
	{ conv_threshold_5_V_s sc_in sc_lv 16 signal 5 } 
	{ conv_threshold_6_V_s sc_in sc_lv 16 signal 6 } 
	{ conv_threshold_7_V_s sc_in sc_lv 16 signal 7 } 
	{ conv_threshold_8_V_s sc_in sc_lv 16 signal 8 } 
	{ conv_threshold_9_V_s sc_in sc_lv 16 signal 9 } 
	{ conv_threshold_10_V_read sc_in sc_lv 16 signal 10 } 
	{ conv_threshold_11_V_read sc_in sc_lv 16 signal 11 } 
	{ conv_threshold_12_V_read sc_in sc_lv 16 signal 12 } 
	{ conv_threshold_13_V_read sc_in sc_lv 16 signal 13 } 
	{ conv_threshold_14_V_read sc_in sc_lv 16 signal 14 } 
	{ conv_threshold_15_V_read sc_in sc_lv 16 signal 15 } 
	{ conv_threshold_16_V_read sc_in sc_lv 16 signal 16 } 
	{ conv_threshold_17_V_read sc_in sc_lv 16 signal 17 } 
	{ conv_threshold_18_V_read sc_in sc_lv 16 signal 18 } 
	{ conv_threshold_19_V_read sc_in sc_lv 16 signal 19 } 
	{ conv_threshold_20_V_read sc_in sc_lv 16 signal 20 } 
	{ conv_threshold_21_V_read sc_in sc_lv 16 signal 21 } 
	{ conv_threshold_22_V_read sc_in sc_lv 16 signal 22 } 
	{ conv_threshold_23_V_read sc_in sc_lv 16 signal 23 } 
	{ conv_threshold_24_V_read sc_in sc_lv 16 signal 24 } 
	{ conv_threshold_25_V_read sc_in sc_lv 16 signal 25 } 
	{ conv_threshold_26_V_read sc_in sc_lv 16 signal 26 } 
	{ conv_threshold_27_V_read sc_in sc_lv 16 signal 27 } 
	{ conv_threshold_28_V_read sc_in sc_lv 16 signal 28 } 
	{ conv_threshold_29_V_read sc_in sc_lv 16 signal 29 } 
	{ conv_threshold_30_V_read sc_in sc_lv 16 signal 30 } 
	{ conv_threshold_31_V_read sc_in sc_lv 16 signal 31 } 
	{ conv_bn_weight_0_V_s sc_in sc_lv 16 signal 32 } 
	{ conv_bn_weight_1_V_s sc_in sc_lv 16 signal 33 } 
	{ conv_bn_weight_2_V_s sc_in sc_lv 16 signal 34 } 
	{ conv_bn_weight_3_V_s sc_in sc_lv 16 signal 35 } 
	{ conv_bn_weight_4_V_s sc_in sc_lv 16 signal 36 } 
	{ conv_bn_weight_5_V_s sc_in sc_lv 16 signal 37 } 
	{ conv_bn_weight_6_V_s sc_in sc_lv 16 signal 38 } 
	{ conv_bn_weight_7_V_s sc_in sc_lv 16 signal 39 } 
	{ conv_bn_weight_8_V_s sc_in sc_lv 16 signal 40 } 
	{ conv_bn_weight_9_V_s sc_in sc_lv 16 signal 41 } 
	{ conv_bn_weight_10_V_read sc_in sc_lv 16 signal 42 } 
	{ conv_bn_weight_11_V_read sc_in sc_lv 16 signal 43 } 
	{ conv_bn_weight_12_V_read sc_in sc_lv 16 signal 44 } 
	{ conv_bn_weight_13_V_read sc_in sc_lv 16 signal 45 } 
	{ conv_bn_weight_14_V_read sc_in sc_lv 16 signal 46 } 
	{ conv_bn_weight_15_V_read sc_in sc_lv 16 signal 47 } 
	{ conv_bn_weight_16_V_read sc_in sc_lv 16 signal 48 } 
	{ conv_bn_weight_17_V_read sc_in sc_lv 16 signal 49 } 
	{ conv_bn_weight_18_V_read sc_in sc_lv 16 signal 50 } 
	{ conv_bn_weight_19_V_read sc_in sc_lv 16 signal 51 } 
	{ conv_bn_weight_20_V_read sc_in sc_lv 16 signal 52 } 
	{ conv_bn_weight_21_V_read sc_in sc_lv 16 signal 53 } 
	{ conv_bn_weight_22_V_read sc_in sc_lv 16 signal 54 } 
	{ conv_bn_weight_23_V_read sc_in sc_lv 16 signal 55 } 
	{ conv_bn_weight_24_V_read sc_in sc_lv 16 signal 56 } 
	{ conv_bn_weight_25_V_read sc_in sc_lv 16 signal 57 } 
	{ conv_bn_weight_26_V_read sc_in sc_lv 16 signal 58 } 
	{ conv_bn_weight_27_V_read sc_in sc_lv 16 signal 59 } 
	{ conv_bn_weight_28_V_read sc_in sc_lv 16 signal 60 } 
	{ conv_bn_weight_29_V_read sc_in sc_lv 16 signal 61 } 
	{ conv_bn_weight_30_V_read sc_in sc_lv 16 signal 62 } 
	{ conv_bn_weight_31_V_read sc_in sc_lv 16 signal 63 } 
	{ conv_bn_bias_0_V_re sc_in sc_lv 16 signal 64 } 
	{ conv_bn_bias_1_V_re sc_in sc_lv 16 signal 65 } 
	{ conv_bn_bias_2_V_re sc_in sc_lv 16 signal 66 } 
	{ conv_bn_bias_3_V_re sc_in sc_lv 16 signal 67 } 
	{ conv_bn_bias_4_V_re sc_in sc_lv 16 signal 68 } 
	{ conv_bn_bias_5_V_re sc_in sc_lv 16 signal 69 } 
	{ conv_bn_bias_6_V_re sc_in sc_lv 16 signal 70 } 
	{ conv_bn_bias_7_V_re sc_in sc_lv 16 signal 71 } 
	{ conv_bn_bias_8_V_re sc_in sc_lv 16 signal 72 } 
	{ conv_bn_bias_9_V_re sc_in sc_lv 16 signal 73 } 
	{ conv_bn_bias_10_V_r sc_in sc_lv 16 signal 74 } 
	{ conv_bn_bias_11_V_r sc_in sc_lv 16 signal 75 } 
	{ conv_bn_bias_12_V_r sc_in sc_lv 16 signal 76 } 
	{ conv_bn_bias_13_V_r sc_in sc_lv 16 signal 77 } 
	{ conv_bn_bias_14_V_r sc_in sc_lv 16 signal 78 } 
	{ conv_bn_bias_15_V_r sc_in sc_lv 16 signal 79 } 
	{ conv_bn_bias_16_V_r sc_in sc_lv 16 signal 80 } 
	{ conv_bn_bias_17_V_r sc_in sc_lv 16 signal 81 } 
	{ conv_bn_bias_18_V_r sc_in sc_lv 16 signal 82 } 
	{ conv_bn_bias_19_V_r sc_in sc_lv 16 signal 83 } 
	{ conv_bn_bias_20_V_r sc_in sc_lv 16 signal 84 } 
	{ conv_bn_bias_21_V_r sc_in sc_lv 16 signal 85 } 
	{ conv_bn_bias_22_V_r sc_in sc_lv 16 signal 86 } 
	{ conv_bn_bias_23_V_r sc_in sc_lv 16 signal 87 } 
	{ conv_bn_bias_24_V_r sc_in sc_lv 16 signal 88 } 
	{ conv_bn_bias_25_V_r sc_in sc_lv 16 signal 89 } 
	{ conv_bn_bias_26_V_r sc_in sc_lv 16 signal 90 } 
	{ conv_bn_bias_27_V_r sc_in sc_lv 16 signal 91 } 
	{ conv_bn_bias_28_V_r sc_in sc_lv 16 signal 92 } 
	{ conv_bn_bias_29_V_r sc_in sc_lv 16 signal 93 } 
	{ conv_bn_bias_30_V_r sc_in sc_lv 16 signal 94 } 
	{ conv_bn_bias_31_V_r sc_in sc_lv 16 signal 95 } 
	{ relu_shift_x_0_V_re sc_in sc_lv 16 signal 96 } 
	{ relu_shift_x_1_V_re sc_in sc_lv 16 signal 97 } 
	{ relu_shift_x_2_V_re sc_in sc_lv 16 signal 98 } 
	{ relu_shift_x_3_V_re sc_in sc_lv 16 signal 99 } 
	{ relu_shift_x_4_V_re sc_in sc_lv 16 signal 100 } 
	{ relu_shift_x_5_V_re sc_in sc_lv 16 signal 101 } 
	{ relu_shift_x_6_V_re sc_in sc_lv 16 signal 102 } 
	{ relu_shift_x_7_V_re sc_in sc_lv 16 signal 103 } 
	{ relu_shift_x_8_V_re sc_in sc_lv 16 signal 104 } 
	{ relu_shift_x_9_V_re sc_in sc_lv 16 signal 105 } 
	{ relu_shift_x_10_V_r sc_in sc_lv 16 signal 106 } 
	{ relu_shift_x_11_V_r sc_in sc_lv 16 signal 107 } 
	{ relu_shift_x_12_V_r sc_in sc_lv 16 signal 108 } 
	{ relu_shift_x_13_V_r sc_in sc_lv 16 signal 109 } 
	{ relu_shift_x_14_V_r sc_in sc_lv 16 signal 110 } 
	{ relu_shift_x_15_V_r sc_in sc_lv 16 signal 111 } 
	{ relu_shift_x_16_V_r sc_in sc_lv 16 signal 112 } 
	{ relu_shift_x_17_V_r sc_in sc_lv 16 signal 113 } 
	{ relu_shift_x_18_V_r sc_in sc_lv 16 signal 114 } 
	{ relu_shift_x_19_V_r sc_in sc_lv 16 signal 115 } 
	{ relu_shift_x_20_V_r sc_in sc_lv 16 signal 116 } 
	{ relu_shift_x_21_V_r sc_in sc_lv 16 signal 117 } 
	{ relu_shift_x_22_V_r sc_in sc_lv 16 signal 118 } 
	{ relu_shift_x_23_V_r sc_in sc_lv 16 signal 119 } 
	{ relu_shift_x_24_V_r sc_in sc_lv 16 signal 120 } 
	{ relu_shift_x_25_V_r sc_in sc_lv 16 signal 121 } 
	{ relu_shift_x_26_V_r sc_in sc_lv 16 signal 122 } 
	{ relu_shift_x_27_V_r sc_in sc_lv 16 signal 123 } 
	{ relu_shift_x_28_V_r sc_in sc_lv 16 signal 124 } 
	{ relu_shift_x_29_V_r sc_in sc_lv 16 signal 125 } 
	{ relu_shift_x_30_V_r sc_in sc_lv 16 signal 126 } 
	{ relu_shift_x_31_V_r sc_in sc_lv 16 signal 127 } 
	{ relu_shift_y_0_V_re sc_in sc_lv 16 signal 128 } 
	{ relu_shift_y_1_V_re sc_in sc_lv 16 signal 129 } 
	{ relu_shift_y_2_V_re sc_in sc_lv 16 signal 130 } 
	{ relu_shift_y_3_V_re sc_in sc_lv 16 signal 131 } 
	{ relu_shift_y_4_V_re sc_in sc_lv 16 signal 132 } 
	{ relu_shift_y_5_V_re sc_in sc_lv 16 signal 133 } 
	{ relu_shift_y_6_V_re sc_in sc_lv 16 signal 134 } 
	{ relu_shift_y_7_V_re sc_in sc_lv 16 signal 135 } 
	{ relu_shift_y_8_V_re sc_in sc_lv 16 signal 136 } 
	{ relu_shift_y_9_V_re sc_in sc_lv 16 signal 137 } 
	{ relu_shift_y_10_V_r sc_in sc_lv 16 signal 138 } 
	{ relu_shift_y_11_V_r sc_in sc_lv 16 signal 139 } 
	{ relu_shift_y_12_V_r sc_in sc_lv 16 signal 140 } 
	{ relu_shift_y_13_V_r sc_in sc_lv 16 signal 141 } 
	{ relu_shift_y_14_V_r sc_in sc_lv 16 signal 142 } 
	{ relu_shift_y_15_V_r sc_in sc_lv 16 signal 143 } 
	{ relu_shift_y_16_V_r sc_in sc_lv 16 signal 144 } 
	{ relu_shift_y_17_V_r sc_in sc_lv 16 signal 145 } 
	{ relu_shift_y_18_V_r sc_in sc_lv 16 signal 146 } 
	{ relu_shift_y_19_V_r sc_in sc_lv 16 signal 147 } 
	{ relu_shift_y_20_V_r sc_in sc_lv 16 signal 148 } 
	{ relu_shift_y_21_V_r sc_in sc_lv 16 signal 149 } 
	{ relu_shift_y_22_V_r sc_in sc_lv 16 signal 150 } 
	{ relu_shift_y_23_V_r sc_in sc_lv 16 signal 151 } 
	{ relu_shift_y_24_V_r sc_in sc_lv 16 signal 152 } 
	{ relu_shift_y_25_V_r sc_in sc_lv 16 signal 153 } 
	{ relu_shift_y_26_V_r sc_in sc_lv 16 signal 154 } 
	{ relu_shift_y_27_V_r sc_in sc_lv 16 signal 155 } 
	{ relu_shift_y_28_V_r sc_in sc_lv 16 signal 156 } 
	{ relu_shift_y_29_V_r sc_in sc_lv 16 signal 157 } 
	{ relu_shift_y_30_V_r sc_in sc_lv 16 signal 158 } 
	{ relu_shift_y_31_V_r sc_in sc_lv 16 signal 159 } 
	{ relu_weight_0_V_rea sc_in sc_lv 16 signal 160 } 
	{ relu_weight_1_V_rea sc_in sc_lv 16 signal 161 } 
	{ relu_weight_2_V_rea sc_in sc_lv 16 signal 162 } 
	{ relu_weight_3_V_rea sc_in sc_lv 16 signal 163 } 
	{ relu_weight_4_V_rea sc_in sc_lv 16 signal 164 } 
	{ relu_weight_5_V_rea sc_in sc_lv 16 signal 165 } 
	{ relu_weight_6_V_rea sc_in sc_lv 16 signal 166 } 
	{ relu_weight_7_V_rea sc_in sc_lv 16 signal 167 } 
	{ relu_weight_8_V_rea sc_in sc_lv 16 signal 168 } 
	{ relu_weight_9_V_rea sc_in sc_lv 16 signal 169 } 
	{ relu_weight_10_V_re sc_in sc_lv 16 signal 170 } 
	{ relu_weight_11_V_re sc_in sc_lv 16 signal 171 } 
	{ relu_weight_12_V_re sc_in sc_lv 16 signal 172 } 
	{ relu_weight_13_V_re sc_in sc_lv 16 signal 173 } 
	{ relu_weight_14_V_re sc_in sc_lv 16 signal 174 } 
	{ relu_weight_15_V_re sc_in sc_lv 16 signal 175 } 
	{ relu_weight_16_V_re sc_in sc_lv 16 signal 176 } 
	{ relu_weight_17_V_re sc_in sc_lv 16 signal 177 } 
	{ relu_weight_18_V_re sc_in sc_lv 16 signal 178 } 
	{ relu_weight_19_V_re sc_in sc_lv 16 signal 179 } 
	{ relu_weight_20_V_re sc_in sc_lv 16 signal 180 } 
	{ relu_weight_21_V_re sc_in sc_lv 16 signal 181 } 
	{ relu_weight_22_V_re sc_in sc_lv 16 signal 182 } 
	{ relu_weight_23_V_re sc_in sc_lv 16 signal 183 } 
	{ relu_weight_24_V_re sc_in sc_lv 16 signal 184 } 
	{ relu_weight_25_V_re sc_in sc_lv 16 signal 185 } 
	{ relu_weight_26_V_re sc_in sc_lv 16 signal 186 } 
	{ relu_weight_27_V_re sc_in sc_lv 16 signal 187 } 
	{ relu_weight_28_V_re sc_in sc_lv 16 signal 188 } 
	{ relu_weight_29_V_re sc_in sc_lv 16 signal 189 } 
	{ relu_weight_30_V_re sc_in sc_lv 16 signal 190 } 
	{ relu_weight_31_V_re sc_in sc_lv 16 signal 191 } 
	{ bn_weight_0_V_read sc_in sc_lv 16 signal 192 } 
	{ bn_weight_1_V_read sc_in sc_lv 16 signal 193 } 
	{ bn_weight_2_V_read sc_in sc_lv 16 signal 194 } 
	{ bn_weight_3_V_read sc_in sc_lv 16 signal 195 } 
	{ bn_weight_4_V_read sc_in sc_lv 16 signal 196 } 
	{ bn_weight_5_V_read sc_in sc_lv 16 signal 197 } 
	{ bn_weight_6_V_read sc_in sc_lv 16 signal 198 } 
	{ bn_weight_7_V_read sc_in sc_lv 16 signal 199 } 
	{ bn_weight_8_V_read sc_in sc_lv 16 signal 200 } 
	{ bn_weight_9_V_read sc_in sc_lv 16 signal 201 } 
	{ bn_weight_10_V_read sc_in sc_lv 16 signal 202 } 
	{ bn_weight_11_V_read sc_in sc_lv 16 signal 203 } 
	{ bn_weight_12_V_read sc_in sc_lv 16 signal 204 } 
	{ bn_weight_13_V_read sc_in sc_lv 16 signal 205 } 
	{ bn_weight_14_V_read sc_in sc_lv 16 signal 206 } 
	{ bn_weight_15_V_read sc_in sc_lv 16 signal 207 } 
	{ bn_weight_16_V_read sc_in sc_lv 16 signal 208 } 
	{ bn_weight_17_V_read sc_in sc_lv 16 signal 209 } 
	{ bn_weight_18_V_read sc_in sc_lv 16 signal 210 } 
	{ bn_weight_19_V_read sc_in sc_lv 16 signal 211 } 
	{ bn_weight_20_V_read sc_in sc_lv 16 signal 212 } 
	{ bn_weight_21_V_read sc_in sc_lv 16 signal 213 } 
	{ bn_weight_22_V_read sc_in sc_lv 16 signal 214 } 
	{ bn_weight_23_V_read sc_in sc_lv 16 signal 215 } 
	{ bn_weight_24_V_read sc_in sc_lv 16 signal 216 } 
	{ bn_weight_25_V_read sc_in sc_lv 16 signal 217 } 
	{ bn_weight_26_V_read sc_in sc_lv 16 signal 218 } 
	{ bn_weight_27_V_read sc_in sc_lv 16 signal 219 } 
	{ bn_weight_28_V_read sc_in sc_lv 16 signal 220 } 
	{ bn_weight_29_V_read sc_in sc_lv 16 signal 221 } 
	{ bn_weight_30_V_read sc_in sc_lv 16 signal 222 } 
	{ bn_weight_31_V_read sc_in sc_lv 16 signal 223 } 
	{ bn_bias_0_V_read sc_in sc_lv 16 signal 224 } 
	{ bn_bias_1_V_read sc_in sc_lv 16 signal 225 } 
	{ bn_bias_2_V_read sc_in sc_lv 16 signal 226 } 
	{ bn_bias_3_V_read sc_in sc_lv 16 signal 227 } 
	{ bn_bias_4_V_read sc_in sc_lv 16 signal 228 } 
	{ bn_bias_5_V_read sc_in sc_lv 16 signal 229 } 
	{ bn_bias_6_V_read sc_in sc_lv 16 signal 230 } 
	{ bn_bias_7_V_read sc_in sc_lv 16 signal 231 } 
	{ bn_bias_8_V_read sc_in sc_lv 16 signal 232 } 
	{ bn_bias_9_V_read sc_in sc_lv 16 signal 233 } 
	{ bn_bias_10_V_read sc_in sc_lv 16 signal 234 } 
	{ bn_bias_11_V_read sc_in sc_lv 16 signal 235 } 
	{ bn_bias_12_V_read sc_in sc_lv 16 signal 236 } 
	{ bn_bias_13_V_read sc_in sc_lv 16 signal 237 } 
	{ bn_bias_14_V_read sc_in sc_lv 16 signal 238 } 
	{ bn_bias_15_V_read sc_in sc_lv 16 signal 239 } 
	{ bn_bias_16_V_read sc_in sc_lv 16 signal 240 } 
	{ bn_bias_17_V_read sc_in sc_lv 16 signal 241 } 
	{ bn_bias_18_V_read sc_in sc_lv 16 signal 242 } 
	{ bn_bias_19_V_read sc_in sc_lv 16 signal 243 } 
	{ bn_bias_20_V_read sc_in sc_lv 16 signal 244 } 
	{ bn_bias_21_V_read sc_in sc_lv 16 signal 245 } 
	{ bn_bias_22_V_read sc_in sc_lv 16 signal 246 } 
	{ bn_bias_23_V_read sc_in sc_lv 16 signal 247 } 
	{ bn_bias_24_V_read sc_in sc_lv 16 signal 248 } 
	{ bn_bias_25_V_read sc_in sc_lv 16 signal 249 } 
	{ bn_bias_26_V_read sc_in sc_lv 16 signal 250 } 
	{ bn_bias_27_V_read sc_in sc_lv 16 signal 251 } 
	{ bn_bias_28_V_read sc_in sc_lv 16 signal 252 } 
	{ bn_bias_29_V_read sc_in sc_lv 16 signal 253 } 
	{ bn_bias_30_V_read sc_in sc_lv 16 signal 254 } 
	{ bn_bias_31_V_read sc_in sc_lv 16 signal 255 } 
	{ m_axi_DDR_buf_V_AWVALID sc_out sc_logic 1 signal 256 } 
	{ m_axi_DDR_buf_V_AWREADY sc_in sc_logic 1 signal 256 } 
	{ m_axi_DDR_buf_V_AWADDR sc_out sc_lv 32 signal 256 } 
	{ m_axi_DDR_buf_V_AWID sc_out sc_lv 1 signal 256 } 
	{ m_axi_DDR_buf_V_AWLEN sc_out sc_lv 32 signal 256 } 
	{ m_axi_DDR_buf_V_AWSIZE sc_out sc_lv 3 signal 256 } 
	{ m_axi_DDR_buf_V_AWBURST sc_out sc_lv 2 signal 256 } 
	{ m_axi_DDR_buf_V_AWLOCK sc_out sc_lv 2 signal 256 } 
	{ m_axi_DDR_buf_V_AWCACHE sc_out sc_lv 4 signal 256 } 
	{ m_axi_DDR_buf_V_AWPROT sc_out sc_lv 3 signal 256 } 
	{ m_axi_DDR_buf_V_AWQOS sc_out sc_lv 4 signal 256 } 
	{ m_axi_DDR_buf_V_AWREGION sc_out sc_lv 4 signal 256 } 
	{ m_axi_DDR_buf_V_AWUSER sc_out sc_lv 1 signal 256 } 
	{ m_axi_DDR_buf_V_WVALID sc_out sc_logic 1 signal 256 } 
	{ m_axi_DDR_buf_V_WREADY sc_in sc_logic 1 signal 256 } 
	{ m_axi_DDR_buf_V_WDATA sc_out sc_lv 512 signal 256 } 
	{ m_axi_DDR_buf_V_WSTRB sc_out sc_lv 64 signal 256 } 
	{ m_axi_DDR_buf_V_WLAST sc_out sc_logic 1 signal 256 } 
	{ m_axi_DDR_buf_V_WID sc_out sc_lv 1 signal 256 } 
	{ m_axi_DDR_buf_V_WUSER sc_out sc_lv 1 signal 256 } 
	{ m_axi_DDR_buf_V_ARVALID sc_out sc_logic 1 signal 256 } 
	{ m_axi_DDR_buf_V_ARREADY sc_in sc_logic 1 signal 256 } 
	{ m_axi_DDR_buf_V_ARADDR sc_out sc_lv 32 signal 256 } 
	{ m_axi_DDR_buf_V_ARID sc_out sc_lv 1 signal 256 } 
	{ m_axi_DDR_buf_V_ARLEN sc_out sc_lv 32 signal 256 } 
	{ m_axi_DDR_buf_V_ARSIZE sc_out sc_lv 3 signal 256 } 
	{ m_axi_DDR_buf_V_ARBURST sc_out sc_lv 2 signal 256 } 
	{ m_axi_DDR_buf_V_ARLOCK sc_out sc_lv 2 signal 256 } 
	{ m_axi_DDR_buf_V_ARCACHE sc_out sc_lv 4 signal 256 } 
	{ m_axi_DDR_buf_V_ARPROT sc_out sc_lv 3 signal 256 } 
	{ m_axi_DDR_buf_V_ARQOS sc_out sc_lv 4 signal 256 } 
	{ m_axi_DDR_buf_V_ARREGION sc_out sc_lv 4 signal 256 } 
	{ m_axi_DDR_buf_V_ARUSER sc_out sc_lv 1 signal 256 } 
	{ m_axi_DDR_buf_V_RVALID sc_in sc_logic 1 signal 256 } 
	{ m_axi_DDR_buf_V_RREADY sc_out sc_logic 1 signal 256 } 
	{ m_axi_DDR_buf_V_RDATA sc_in sc_lv 512 signal 256 } 
	{ m_axi_DDR_buf_V_RLAST sc_in sc_logic 1 signal 256 } 
	{ m_axi_DDR_buf_V_RID sc_in sc_lv 1 signal 256 } 
	{ m_axi_DDR_buf_V_RUSER sc_in sc_lv 1 signal 256 } 
	{ m_axi_DDR_buf_V_RRESP sc_in sc_lv 2 signal 256 } 
	{ m_axi_DDR_buf_V_BVALID sc_in sc_logic 1 signal 256 } 
	{ m_axi_DDR_buf_V_BREADY sc_out sc_logic 1 signal 256 } 
	{ m_axi_DDR_buf_V_BRESP sc_in sc_lv 2 signal 256 } 
	{ m_axi_DDR_buf_V_BID sc_in sc_lv 1 signal 256 } 
	{ m_axi_DDR_buf_V_BUSER sc_in sc_lv 1 signal 256 } 
	{ DDR_buf_V_offset sc_in sc_lv 26 signal 257 } 
	{ out_buf_all_0_V_address0 sc_out sc_lv 11 signal 258 } 
	{ out_buf_all_0_V_ce0 sc_out sc_logic 1 signal 258 } 
	{ out_buf_all_0_V_q0 sc_in sc_lv 16 signal 258 } 
	{ out_buf_all_0_V_address1 sc_out sc_lv 11 signal 258 } 
	{ out_buf_all_0_V_ce1 sc_out sc_logic 1 signal 258 } 
	{ out_buf_all_0_V_q1 sc_in sc_lv 16 signal 258 } 
	{ out_buf_all_1_V_address0 sc_out sc_lv 11 signal 259 } 
	{ out_buf_all_1_V_ce0 sc_out sc_logic 1 signal 259 } 
	{ out_buf_all_1_V_q0 sc_in sc_lv 16 signal 259 } 
	{ out_buf_all_1_V_address1 sc_out sc_lv 11 signal 259 } 
	{ out_buf_all_1_V_ce1 sc_out sc_logic 1 signal 259 } 
	{ out_buf_all_1_V_q1 sc_in sc_lv 16 signal 259 } 
	{ out_buf_all_2_V_address0 sc_out sc_lv 11 signal 260 } 
	{ out_buf_all_2_V_ce0 sc_out sc_logic 1 signal 260 } 
	{ out_buf_all_2_V_q0 sc_in sc_lv 16 signal 260 } 
	{ out_buf_all_2_V_address1 sc_out sc_lv 11 signal 260 } 
	{ out_buf_all_2_V_ce1 sc_out sc_logic 1 signal 260 } 
	{ out_buf_all_2_V_q1 sc_in sc_lv 16 signal 260 } 
	{ out_buf_all_3_V_address0 sc_out sc_lv 11 signal 261 } 
	{ out_buf_all_3_V_ce0 sc_out sc_logic 1 signal 261 } 
	{ out_buf_all_3_V_q0 sc_in sc_lv 16 signal 261 } 
	{ out_buf_all_3_V_address1 sc_out sc_lv 11 signal 261 } 
	{ out_buf_all_3_V_ce1 sc_out sc_logic 1 signal 261 } 
	{ out_buf_all_3_V_q1 sc_in sc_lv 16 signal 261 } 
	{ out_buf_all_4_V_address0 sc_out sc_lv 11 signal 262 } 
	{ out_buf_all_4_V_ce0 sc_out sc_logic 1 signal 262 } 
	{ out_buf_all_4_V_q0 sc_in sc_lv 16 signal 262 } 
	{ out_buf_all_4_V_address1 sc_out sc_lv 11 signal 262 } 
	{ out_buf_all_4_V_ce1 sc_out sc_logic 1 signal 262 } 
	{ out_buf_all_4_V_q1 sc_in sc_lv 16 signal 262 } 
	{ out_buf_all_5_V_address0 sc_out sc_lv 11 signal 263 } 
	{ out_buf_all_5_V_ce0 sc_out sc_logic 1 signal 263 } 
	{ out_buf_all_5_V_q0 sc_in sc_lv 16 signal 263 } 
	{ out_buf_all_5_V_address1 sc_out sc_lv 11 signal 263 } 
	{ out_buf_all_5_V_ce1 sc_out sc_logic 1 signal 263 } 
	{ out_buf_all_5_V_q1 sc_in sc_lv 16 signal 263 } 
	{ out_buf_all_6_V_address0 sc_out sc_lv 11 signal 264 } 
	{ out_buf_all_6_V_ce0 sc_out sc_logic 1 signal 264 } 
	{ out_buf_all_6_V_q0 sc_in sc_lv 16 signal 264 } 
	{ out_buf_all_6_V_address1 sc_out sc_lv 11 signal 264 } 
	{ out_buf_all_6_V_ce1 sc_out sc_logic 1 signal 264 } 
	{ out_buf_all_6_V_q1 sc_in sc_lv 16 signal 264 } 
	{ out_buf_all_7_V_address0 sc_out sc_lv 11 signal 265 } 
	{ out_buf_all_7_V_ce0 sc_out sc_logic 1 signal 265 } 
	{ out_buf_all_7_V_q0 sc_in sc_lv 16 signal 265 } 
	{ out_buf_all_7_V_address1 sc_out sc_lv 11 signal 265 } 
	{ out_buf_all_7_V_ce1 sc_out sc_logic 1 signal 265 } 
	{ out_buf_all_7_V_q1 sc_in sc_lv 16 signal 265 } 
	{ out_buf_all_8_V_address0 sc_out sc_lv 11 signal 266 } 
	{ out_buf_all_8_V_ce0 sc_out sc_logic 1 signal 266 } 
	{ out_buf_all_8_V_q0 sc_in sc_lv 16 signal 266 } 
	{ out_buf_all_8_V_address1 sc_out sc_lv 11 signal 266 } 
	{ out_buf_all_8_V_ce1 sc_out sc_logic 1 signal 266 } 
	{ out_buf_all_8_V_q1 sc_in sc_lv 16 signal 266 } 
	{ out_buf_all_9_V_address0 sc_out sc_lv 11 signal 267 } 
	{ out_buf_all_9_V_ce0 sc_out sc_logic 1 signal 267 } 
	{ out_buf_all_9_V_q0 sc_in sc_lv 16 signal 267 } 
	{ out_buf_all_9_V_address1 sc_out sc_lv 11 signal 267 } 
	{ out_buf_all_9_V_ce1 sc_out sc_logic 1 signal 267 } 
	{ out_buf_all_9_V_q1 sc_in sc_lv 16 signal 267 } 
	{ out_buf_all_10_V_address0 sc_out sc_lv 11 signal 268 } 
	{ out_buf_all_10_V_ce0 sc_out sc_logic 1 signal 268 } 
	{ out_buf_all_10_V_q0 sc_in sc_lv 16 signal 268 } 
	{ out_buf_all_10_V_address1 sc_out sc_lv 11 signal 268 } 
	{ out_buf_all_10_V_ce1 sc_out sc_logic 1 signal 268 } 
	{ out_buf_all_10_V_q1 sc_in sc_lv 16 signal 268 } 
	{ out_buf_all_11_V_address0 sc_out sc_lv 11 signal 269 } 
	{ out_buf_all_11_V_ce0 sc_out sc_logic 1 signal 269 } 
	{ out_buf_all_11_V_q0 sc_in sc_lv 16 signal 269 } 
	{ out_buf_all_11_V_address1 sc_out sc_lv 11 signal 269 } 
	{ out_buf_all_11_V_ce1 sc_out sc_logic 1 signal 269 } 
	{ out_buf_all_11_V_q1 sc_in sc_lv 16 signal 269 } 
	{ out_buf_all_12_V_address0 sc_out sc_lv 11 signal 270 } 
	{ out_buf_all_12_V_ce0 sc_out sc_logic 1 signal 270 } 
	{ out_buf_all_12_V_q0 sc_in sc_lv 16 signal 270 } 
	{ out_buf_all_12_V_address1 sc_out sc_lv 11 signal 270 } 
	{ out_buf_all_12_V_ce1 sc_out sc_logic 1 signal 270 } 
	{ out_buf_all_12_V_q1 sc_in sc_lv 16 signal 270 } 
	{ out_buf_all_13_V_address0 sc_out sc_lv 11 signal 271 } 
	{ out_buf_all_13_V_ce0 sc_out sc_logic 1 signal 271 } 
	{ out_buf_all_13_V_q0 sc_in sc_lv 16 signal 271 } 
	{ out_buf_all_13_V_address1 sc_out sc_lv 11 signal 271 } 
	{ out_buf_all_13_V_ce1 sc_out sc_logic 1 signal 271 } 
	{ out_buf_all_13_V_q1 sc_in sc_lv 16 signal 271 } 
	{ out_buf_all_14_V_address0 sc_out sc_lv 11 signal 272 } 
	{ out_buf_all_14_V_ce0 sc_out sc_logic 1 signal 272 } 
	{ out_buf_all_14_V_q0 sc_in sc_lv 16 signal 272 } 
	{ out_buf_all_14_V_address1 sc_out sc_lv 11 signal 272 } 
	{ out_buf_all_14_V_ce1 sc_out sc_logic 1 signal 272 } 
	{ out_buf_all_14_V_q1 sc_in sc_lv 16 signal 272 } 
	{ out_buf_all_15_V_address0 sc_out sc_lv 11 signal 273 } 
	{ out_buf_all_15_V_ce0 sc_out sc_logic 1 signal 273 } 
	{ out_buf_all_15_V_q0 sc_in sc_lv 16 signal 273 } 
	{ out_buf_all_15_V_address1 sc_out sc_lv 11 signal 273 } 
	{ out_buf_all_15_V_ce1 sc_out sc_logic 1 signal 273 } 
	{ out_buf_all_15_V_q1 sc_in sc_lv 16 signal 273 } 
	{ out_buf_all_16_V_address0 sc_out sc_lv 11 signal 274 } 
	{ out_buf_all_16_V_ce0 sc_out sc_logic 1 signal 274 } 
	{ out_buf_all_16_V_q0 sc_in sc_lv 16 signal 274 } 
	{ out_buf_all_16_V_address1 sc_out sc_lv 11 signal 274 } 
	{ out_buf_all_16_V_ce1 sc_out sc_logic 1 signal 274 } 
	{ out_buf_all_16_V_q1 sc_in sc_lv 16 signal 274 } 
	{ out_buf_all_17_V_address0 sc_out sc_lv 11 signal 275 } 
	{ out_buf_all_17_V_ce0 sc_out sc_logic 1 signal 275 } 
	{ out_buf_all_17_V_q0 sc_in sc_lv 16 signal 275 } 
	{ out_buf_all_17_V_address1 sc_out sc_lv 11 signal 275 } 
	{ out_buf_all_17_V_ce1 sc_out sc_logic 1 signal 275 } 
	{ out_buf_all_17_V_q1 sc_in sc_lv 16 signal 275 } 
	{ out_buf_all_18_V_address0 sc_out sc_lv 11 signal 276 } 
	{ out_buf_all_18_V_ce0 sc_out sc_logic 1 signal 276 } 
	{ out_buf_all_18_V_q0 sc_in sc_lv 16 signal 276 } 
	{ out_buf_all_18_V_address1 sc_out sc_lv 11 signal 276 } 
	{ out_buf_all_18_V_ce1 sc_out sc_logic 1 signal 276 } 
	{ out_buf_all_18_V_q1 sc_in sc_lv 16 signal 276 } 
	{ out_buf_all_19_V_address0 sc_out sc_lv 11 signal 277 } 
	{ out_buf_all_19_V_ce0 sc_out sc_logic 1 signal 277 } 
	{ out_buf_all_19_V_q0 sc_in sc_lv 16 signal 277 } 
	{ out_buf_all_19_V_address1 sc_out sc_lv 11 signal 277 } 
	{ out_buf_all_19_V_ce1 sc_out sc_logic 1 signal 277 } 
	{ out_buf_all_19_V_q1 sc_in sc_lv 16 signal 277 } 
	{ out_buf_all_20_V_address0 sc_out sc_lv 11 signal 278 } 
	{ out_buf_all_20_V_ce0 sc_out sc_logic 1 signal 278 } 
	{ out_buf_all_20_V_q0 sc_in sc_lv 16 signal 278 } 
	{ out_buf_all_20_V_address1 sc_out sc_lv 11 signal 278 } 
	{ out_buf_all_20_V_ce1 sc_out sc_logic 1 signal 278 } 
	{ out_buf_all_20_V_q1 sc_in sc_lv 16 signal 278 } 
	{ out_buf_all_21_V_address0 sc_out sc_lv 11 signal 279 } 
	{ out_buf_all_21_V_ce0 sc_out sc_logic 1 signal 279 } 
	{ out_buf_all_21_V_q0 sc_in sc_lv 16 signal 279 } 
	{ out_buf_all_21_V_address1 sc_out sc_lv 11 signal 279 } 
	{ out_buf_all_21_V_ce1 sc_out sc_logic 1 signal 279 } 
	{ out_buf_all_21_V_q1 sc_in sc_lv 16 signal 279 } 
	{ out_buf_all_22_V_address0 sc_out sc_lv 11 signal 280 } 
	{ out_buf_all_22_V_ce0 sc_out sc_logic 1 signal 280 } 
	{ out_buf_all_22_V_q0 sc_in sc_lv 16 signal 280 } 
	{ out_buf_all_22_V_address1 sc_out sc_lv 11 signal 280 } 
	{ out_buf_all_22_V_ce1 sc_out sc_logic 1 signal 280 } 
	{ out_buf_all_22_V_q1 sc_in sc_lv 16 signal 280 } 
	{ out_buf_all_23_V_address0 sc_out sc_lv 11 signal 281 } 
	{ out_buf_all_23_V_ce0 sc_out sc_logic 1 signal 281 } 
	{ out_buf_all_23_V_q0 sc_in sc_lv 16 signal 281 } 
	{ out_buf_all_23_V_address1 sc_out sc_lv 11 signal 281 } 
	{ out_buf_all_23_V_ce1 sc_out sc_logic 1 signal 281 } 
	{ out_buf_all_23_V_q1 sc_in sc_lv 16 signal 281 } 
	{ out_buf_all_24_V_address0 sc_out sc_lv 11 signal 282 } 
	{ out_buf_all_24_V_ce0 sc_out sc_logic 1 signal 282 } 
	{ out_buf_all_24_V_q0 sc_in sc_lv 16 signal 282 } 
	{ out_buf_all_24_V_address1 sc_out sc_lv 11 signal 282 } 
	{ out_buf_all_24_V_ce1 sc_out sc_logic 1 signal 282 } 
	{ out_buf_all_24_V_q1 sc_in sc_lv 16 signal 282 } 
	{ out_buf_all_25_V_address0 sc_out sc_lv 11 signal 283 } 
	{ out_buf_all_25_V_ce0 sc_out sc_logic 1 signal 283 } 
	{ out_buf_all_25_V_q0 sc_in sc_lv 16 signal 283 } 
	{ out_buf_all_25_V_address1 sc_out sc_lv 11 signal 283 } 
	{ out_buf_all_25_V_ce1 sc_out sc_logic 1 signal 283 } 
	{ out_buf_all_25_V_q1 sc_in sc_lv 16 signal 283 } 
	{ out_buf_all_26_V_address0 sc_out sc_lv 11 signal 284 } 
	{ out_buf_all_26_V_ce0 sc_out sc_logic 1 signal 284 } 
	{ out_buf_all_26_V_q0 sc_in sc_lv 16 signal 284 } 
	{ out_buf_all_26_V_address1 sc_out sc_lv 11 signal 284 } 
	{ out_buf_all_26_V_ce1 sc_out sc_logic 1 signal 284 } 
	{ out_buf_all_26_V_q1 sc_in sc_lv 16 signal 284 } 
	{ out_buf_all_27_V_address0 sc_out sc_lv 11 signal 285 } 
	{ out_buf_all_27_V_ce0 sc_out sc_logic 1 signal 285 } 
	{ out_buf_all_27_V_q0 sc_in sc_lv 16 signal 285 } 
	{ out_buf_all_27_V_address1 sc_out sc_lv 11 signal 285 } 
	{ out_buf_all_27_V_ce1 sc_out sc_logic 1 signal 285 } 
	{ out_buf_all_27_V_q1 sc_in sc_lv 16 signal 285 } 
	{ out_buf_all_28_V_address0 sc_out sc_lv 11 signal 286 } 
	{ out_buf_all_28_V_ce0 sc_out sc_logic 1 signal 286 } 
	{ out_buf_all_28_V_q0 sc_in sc_lv 16 signal 286 } 
	{ out_buf_all_28_V_address1 sc_out sc_lv 11 signal 286 } 
	{ out_buf_all_28_V_ce1 sc_out sc_logic 1 signal 286 } 
	{ out_buf_all_28_V_q1 sc_in sc_lv 16 signal 286 } 
	{ out_buf_all_29_V_address0 sc_out sc_lv 11 signal 287 } 
	{ out_buf_all_29_V_ce0 sc_out sc_logic 1 signal 287 } 
	{ out_buf_all_29_V_q0 sc_in sc_lv 16 signal 287 } 
	{ out_buf_all_29_V_address1 sc_out sc_lv 11 signal 287 } 
	{ out_buf_all_29_V_ce1 sc_out sc_logic 1 signal 287 } 
	{ out_buf_all_29_V_q1 sc_in sc_lv 16 signal 287 } 
	{ out_buf_all_30_V_address0 sc_out sc_lv 11 signal 288 } 
	{ out_buf_all_30_V_ce0 sc_out sc_logic 1 signal 288 } 
	{ out_buf_all_30_V_q0 sc_in sc_lv 16 signal 288 } 
	{ out_buf_all_30_V_address1 sc_out sc_lv 11 signal 288 } 
	{ out_buf_all_30_V_ce1 sc_out sc_logic 1 signal 288 } 
	{ out_buf_all_30_V_q1 sc_in sc_lv 16 signal 288 } 
	{ out_buf_all_31_V_address0 sc_out sc_lv 11 signal 289 } 
	{ out_buf_all_31_V_ce0 sc_out sc_logic 1 signal 289 } 
	{ out_buf_all_31_V_q0 sc_in sc_lv 16 signal 289 } 
	{ out_buf_all_31_V_address1 sc_out sc_lv 11 signal 289 } 
	{ out_buf_all_31_V_ce1 sc_out sc_logic 1 signal 289 } 
	{ out_buf_all_31_V_q1 sc_in sc_lv 16 signal 289 } 
	{ out_buf_sc_0_V_address0 sc_out sc_lv 10 signal 290 } 
	{ out_buf_sc_0_V_ce0 sc_out sc_logic 1 signal 290 } 
	{ out_buf_sc_0_V_q0 sc_in sc_lv 16 signal 290 } 
	{ out_buf_sc_1_V_address0 sc_out sc_lv 10 signal 291 } 
	{ out_buf_sc_1_V_ce0 sc_out sc_logic 1 signal 291 } 
	{ out_buf_sc_1_V_q0 sc_in sc_lv 16 signal 291 } 
	{ out_buf_sc_2_V_address0 sc_out sc_lv 10 signal 292 } 
	{ out_buf_sc_2_V_ce0 sc_out sc_logic 1 signal 292 } 
	{ out_buf_sc_2_V_q0 sc_in sc_lv 16 signal 292 } 
	{ out_buf_sc_3_V_address0 sc_out sc_lv 10 signal 293 } 
	{ out_buf_sc_3_V_ce0 sc_out sc_logic 1 signal 293 } 
	{ out_buf_sc_3_V_q0 sc_in sc_lv 16 signal 293 } 
	{ out_buf_sc_4_V_address0 sc_out sc_lv 10 signal 294 } 
	{ out_buf_sc_4_V_ce0 sc_out sc_logic 1 signal 294 } 
	{ out_buf_sc_4_V_q0 sc_in sc_lv 16 signal 294 } 
	{ out_buf_sc_5_V_address0 sc_out sc_lv 10 signal 295 } 
	{ out_buf_sc_5_V_ce0 sc_out sc_logic 1 signal 295 } 
	{ out_buf_sc_5_V_q0 sc_in sc_lv 16 signal 295 } 
	{ out_buf_sc_6_V_address0 sc_out sc_lv 10 signal 296 } 
	{ out_buf_sc_6_V_ce0 sc_out sc_logic 1 signal 296 } 
	{ out_buf_sc_6_V_q0 sc_in sc_lv 16 signal 296 } 
	{ out_buf_sc_7_V_address0 sc_out sc_lv 10 signal 297 } 
	{ out_buf_sc_7_V_ce0 sc_out sc_logic 1 signal 297 } 
	{ out_buf_sc_7_V_q0 sc_in sc_lv 16 signal 297 } 
	{ out_buf_sc_8_V_address0 sc_out sc_lv 10 signal 298 } 
	{ out_buf_sc_8_V_ce0 sc_out sc_logic 1 signal 298 } 
	{ out_buf_sc_8_V_q0 sc_in sc_lv 16 signal 298 } 
	{ out_buf_sc_9_V_address0 sc_out sc_lv 10 signal 299 } 
	{ out_buf_sc_9_V_ce0 sc_out sc_logic 1 signal 299 } 
	{ out_buf_sc_9_V_q0 sc_in sc_lv 16 signal 299 } 
	{ out_buf_sc_10_V_address0 sc_out sc_lv 10 signal 300 } 
	{ out_buf_sc_10_V_ce0 sc_out sc_logic 1 signal 300 } 
	{ out_buf_sc_10_V_q0 sc_in sc_lv 16 signal 300 } 
	{ out_buf_sc_11_V_address0 sc_out sc_lv 10 signal 301 } 
	{ out_buf_sc_11_V_ce0 sc_out sc_logic 1 signal 301 } 
	{ out_buf_sc_11_V_q0 sc_in sc_lv 16 signal 301 } 
	{ out_buf_sc_12_V_address0 sc_out sc_lv 10 signal 302 } 
	{ out_buf_sc_12_V_ce0 sc_out sc_logic 1 signal 302 } 
	{ out_buf_sc_12_V_q0 sc_in sc_lv 16 signal 302 } 
	{ out_buf_sc_13_V_address0 sc_out sc_lv 10 signal 303 } 
	{ out_buf_sc_13_V_ce0 sc_out sc_logic 1 signal 303 } 
	{ out_buf_sc_13_V_q0 sc_in sc_lv 16 signal 303 } 
	{ out_buf_sc_14_V_address0 sc_out sc_lv 10 signal 304 } 
	{ out_buf_sc_14_V_ce0 sc_out sc_logic 1 signal 304 } 
	{ out_buf_sc_14_V_q0 sc_in sc_lv 16 signal 304 } 
	{ out_buf_sc_15_V_address0 sc_out sc_lv 10 signal 305 } 
	{ out_buf_sc_15_V_ce0 sc_out sc_logic 1 signal 305 } 
	{ out_buf_sc_15_V_q0 sc_in sc_lv 16 signal 305 } 
	{ out_buf_sc_16_V_address0 sc_out sc_lv 10 signal 306 } 
	{ out_buf_sc_16_V_ce0 sc_out sc_logic 1 signal 306 } 
	{ out_buf_sc_16_V_q0 sc_in sc_lv 16 signal 306 } 
	{ out_buf_sc_17_V_address0 sc_out sc_lv 10 signal 307 } 
	{ out_buf_sc_17_V_ce0 sc_out sc_logic 1 signal 307 } 
	{ out_buf_sc_17_V_q0 sc_in sc_lv 16 signal 307 } 
	{ out_buf_sc_18_V_address0 sc_out sc_lv 10 signal 308 } 
	{ out_buf_sc_18_V_ce0 sc_out sc_logic 1 signal 308 } 
	{ out_buf_sc_18_V_q0 sc_in sc_lv 16 signal 308 } 
	{ out_buf_sc_19_V_address0 sc_out sc_lv 10 signal 309 } 
	{ out_buf_sc_19_V_ce0 sc_out sc_logic 1 signal 309 } 
	{ out_buf_sc_19_V_q0 sc_in sc_lv 16 signal 309 } 
	{ out_buf_sc_20_V_address0 sc_out sc_lv 10 signal 310 } 
	{ out_buf_sc_20_V_ce0 sc_out sc_logic 1 signal 310 } 
	{ out_buf_sc_20_V_q0 sc_in sc_lv 16 signal 310 } 
	{ out_buf_sc_21_V_address0 sc_out sc_lv 10 signal 311 } 
	{ out_buf_sc_21_V_ce0 sc_out sc_logic 1 signal 311 } 
	{ out_buf_sc_21_V_q0 sc_in sc_lv 16 signal 311 } 
	{ out_buf_sc_22_V_address0 sc_out sc_lv 10 signal 312 } 
	{ out_buf_sc_22_V_ce0 sc_out sc_logic 1 signal 312 } 
	{ out_buf_sc_22_V_q0 sc_in sc_lv 16 signal 312 } 
	{ out_buf_sc_23_V_address0 sc_out sc_lv 10 signal 313 } 
	{ out_buf_sc_23_V_ce0 sc_out sc_logic 1 signal 313 } 
	{ out_buf_sc_23_V_q0 sc_in sc_lv 16 signal 313 } 
	{ out_buf_sc_24_V_address0 sc_out sc_lv 10 signal 314 } 
	{ out_buf_sc_24_V_ce0 sc_out sc_logic 1 signal 314 } 
	{ out_buf_sc_24_V_q0 sc_in sc_lv 16 signal 314 } 
	{ out_buf_sc_25_V_address0 sc_out sc_lv 10 signal 315 } 
	{ out_buf_sc_25_V_ce0 sc_out sc_logic 1 signal 315 } 
	{ out_buf_sc_25_V_q0 sc_in sc_lv 16 signal 315 } 
	{ out_buf_sc_26_V_address0 sc_out sc_lv 10 signal 316 } 
	{ out_buf_sc_26_V_ce0 sc_out sc_logic 1 signal 316 } 
	{ out_buf_sc_26_V_q0 sc_in sc_lv 16 signal 316 } 
	{ out_buf_sc_27_V_address0 sc_out sc_lv 10 signal 317 } 
	{ out_buf_sc_27_V_ce0 sc_out sc_logic 1 signal 317 } 
	{ out_buf_sc_27_V_q0 sc_in sc_lv 16 signal 317 } 
	{ out_buf_sc_28_V_address0 sc_out sc_lv 10 signal 318 } 
	{ out_buf_sc_28_V_ce0 sc_out sc_logic 1 signal 318 } 
	{ out_buf_sc_28_V_q0 sc_in sc_lv 16 signal 318 } 
	{ out_buf_sc_29_V_address0 sc_out sc_lv 10 signal 319 } 
	{ out_buf_sc_29_V_ce0 sc_out sc_logic 1 signal 319 } 
	{ out_buf_sc_29_V_q0 sc_in sc_lv 16 signal 319 } 
	{ out_buf_sc_30_V_address0 sc_out sc_lv 10 signal 320 } 
	{ out_buf_sc_30_V_ce0 sc_out sc_logic 1 signal 320 } 
	{ out_buf_sc_30_V_q0 sc_in sc_lv 16 signal 320 } 
	{ out_buf_sc_31_V_address0 sc_out sc_lv 10 signal 321 } 
	{ out_buf_sc_31_V_ce0 sc_out sc_logic 1 signal 321 } 
	{ out_buf_sc_31_V_q0 sc_in sc_lv 16 signal 321 } 
	{ feat_buf_all_0_V_4_address0 sc_out sc_lv 16 signal 322 } 
	{ feat_buf_all_0_V_4_ce0 sc_out sc_logic 1 signal 322 } 
	{ feat_buf_all_0_V_4_we0 sc_out sc_logic 1 signal 322 } 
	{ feat_buf_all_0_V_4_d0 sc_out sc_lv 32 signal 322 } 
	{ H_fmap_in sc_in sc_lv 8 signal 323 } 
	{ H_fmap_out sc_in sc_lv 8 signal 324 } 
	{ c_out sc_in sc_lv 6 signal 325 } 
	{ row_tile_start sc_in sc_lv 32 signal 326 } 
	{ stride sc_in sc_lv 4 signal 327 } 
	{ switch_bank sc_in sc_lv 1 signal 328 } 
	{ feat_buf_all_1_V_address0 sc_out sc_lv 16 signal 329 } 
	{ feat_buf_all_1_V_ce0 sc_out sc_logic 1 signal 329 } 
	{ feat_buf_all_1_V_we0 sc_out sc_logic 1 signal 329 } 
	{ feat_buf_all_1_V_d0 sc_out sc_lv 32 signal 329 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "conv_threshold_0_V_s", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_0_V_s", "role": "default" }} , 
 	{ "name": "conv_threshold_1_V_s", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_1_V_s", "role": "default" }} , 
 	{ "name": "conv_threshold_2_V_s", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_2_V_s", "role": "default" }} , 
 	{ "name": "conv_threshold_3_V_s", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_3_V_s", "role": "default" }} , 
 	{ "name": "conv_threshold_4_V_s", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_4_V_s", "role": "default" }} , 
 	{ "name": "conv_threshold_5_V_s", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_5_V_s", "role": "default" }} , 
 	{ "name": "conv_threshold_6_V_s", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_6_V_s", "role": "default" }} , 
 	{ "name": "conv_threshold_7_V_s", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_7_V_s", "role": "default" }} , 
 	{ "name": "conv_threshold_8_V_s", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_8_V_s", "role": "default" }} , 
 	{ "name": "conv_threshold_9_V_s", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_9_V_s", "role": "default" }} , 
 	{ "name": "conv_threshold_10_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_10_V_read", "role": "default" }} , 
 	{ "name": "conv_threshold_11_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_11_V_read", "role": "default" }} , 
 	{ "name": "conv_threshold_12_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_12_V_read", "role": "default" }} , 
 	{ "name": "conv_threshold_13_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_13_V_read", "role": "default" }} , 
 	{ "name": "conv_threshold_14_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_14_V_read", "role": "default" }} , 
 	{ "name": "conv_threshold_15_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_15_V_read", "role": "default" }} , 
 	{ "name": "conv_threshold_16_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_16_V_read", "role": "default" }} , 
 	{ "name": "conv_threshold_17_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_17_V_read", "role": "default" }} , 
 	{ "name": "conv_threshold_18_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_18_V_read", "role": "default" }} , 
 	{ "name": "conv_threshold_19_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_19_V_read", "role": "default" }} , 
 	{ "name": "conv_threshold_20_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_20_V_read", "role": "default" }} , 
 	{ "name": "conv_threshold_21_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_21_V_read", "role": "default" }} , 
 	{ "name": "conv_threshold_22_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_22_V_read", "role": "default" }} , 
 	{ "name": "conv_threshold_23_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_23_V_read", "role": "default" }} , 
 	{ "name": "conv_threshold_24_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_24_V_read", "role": "default" }} , 
 	{ "name": "conv_threshold_25_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_25_V_read", "role": "default" }} , 
 	{ "name": "conv_threshold_26_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_26_V_read", "role": "default" }} , 
 	{ "name": "conv_threshold_27_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_27_V_read", "role": "default" }} , 
 	{ "name": "conv_threshold_28_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_28_V_read", "role": "default" }} , 
 	{ "name": "conv_threshold_29_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_29_V_read", "role": "default" }} , 
 	{ "name": "conv_threshold_30_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_30_V_read", "role": "default" }} , 
 	{ "name": "conv_threshold_31_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_threshold_31_V_read", "role": "default" }} , 
 	{ "name": "conv_bn_weight_0_V_s", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_0_V_s", "role": "default" }} , 
 	{ "name": "conv_bn_weight_1_V_s", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_1_V_s", "role": "default" }} , 
 	{ "name": "conv_bn_weight_2_V_s", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_2_V_s", "role": "default" }} , 
 	{ "name": "conv_bn_weight_3_V_s", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_3_V_s", "role": "default" }} , 
 	{ "name": "conv_bn_weight_4_V_s", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_4_V_s", "role": "default" }} , 
 	{ "name": "conv_bn_weight_5_V_s", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_5_V_s", "role": "default" }} , 
 	{ "name": "conv_bn_weight_6_V_s", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_6_V_s", "role": "default" }} , 
 	{ "name": "conv_bn_weight_7_V_s", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_7_V_s", "role": "default" }} , 
 	{ "name": "conv_bn_weight_8_V_s", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_8_V_s", "role": "default" }} , 
 	{ "name": "conv_bn_weight_9_V_s", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_9_V_s", "role": "default" }} , 
 	{ "name": "conv_bn_weight_10_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_10_V_read", "role": "default" }} , 
 	{ "name": "conv_bn_weight_11_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_11_V_read", "role": "default" }} , 
 	{ "name": "conv_bn_weight_12_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_12_V_read", "role": "default" }} , 
 	{ "name": "conv_bn_weight_13_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_13_V_read", "role": "default" }} , 
 	{ "name": "conv_bn_weight_14_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_14_V_read", "role": "default" }} , 
 	{ "name": "conv_bn_weight_15_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_15_V_read", "role": "default" }} , 
 	{ "name": "conv_bn_weight_16_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_16_V_read", "role": "default" }} , 
 	{ "name": "conv_bn_weight_17_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_17_V_read", "role": "default" }} , 
 	{ "name": "conv_bn_weight_18_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_18_V_read", "role": "default" }} , 
 	{ "name": "conv_bn_weight_19_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_19_V_read", "role": "default" }} , 
 	{ "name": "conv_bn_weight_20_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_20_V_read", "role": "default" }} , 
 	{ "name": "conv_bn_weight_21_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_21_V_read", "role": "default" }} , 
 	{ "name": "conv_bn_weight_22_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_22_V_read", "role": "default" }} , 
 	{ "name": "conv_bn_weight_23_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_23_V_read", "role": "default" }} , 
 	{ "name": "conv_bn_weight_24_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_24_V_read", "role": "default" }} , 
 	{ "name": "conv_bn_weight_25_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_25_V_read", "role": "default" }} , 
 	{ "name": "conv_bn_weight_26_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_26_V_read", "role": "default" }} , 
 	{ "name": "conv_bn_weight_27_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_27_V_read", "role": "default" }} , 
 	{ "name": "conv_bn_weight_28_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_28_V_read", "role": "default" }} , 
 	{ "name": "conv_bn_weight_29_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_29_V_read", "role": "default" }} , 
 	{ "name": "conv_bn_weight_30_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_30_V_read", "role": "default" }} , 
 	{ "name": "conv_bn_weight_31_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_weight_31_V_read", "role": "default" }} , 
 	{ "name": "conv_bn_bias_0_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_0_V_re", "role": "default" }} , 
 	{ "name": "conv_bn_bias_1_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_1_V_re", "role": "default" }} , 
 	{ "name": "conv_bn_bias_2_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_2_V_re", "role": "default" }} , 
 	{ "name": "conv_bn_bias_3_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_3_V_re", "role": "default" }} , 
 	{ "name": "conv_bn_bias_4_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_4_V_re", "role": "default" }} , 
 	{ "name": "conv_bn_bias_5_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_5_V_re", "role": "default" }} , 
 	{ "name": "conv_bn_bias_6_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_6_V_re", "role": "default" }} , 
 	{ "name": "conv_bn_bias_7_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_7_V_re", "role": "default" }} , 
 	{ "name": "conv_bn_bias_8_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_8_V_re", "role": "default" }} , 
 	{ "name": "conv_bn_bias_9_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_9_V_re", "role": "default" }} , 
 	{ "name": "conv_bn_bias_10_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_10_V_r", "role": "default" }} , 
 	{ "name": "conv_bn_bias_11_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_11_V_r", "role": "default" }} , 
 	{ "name": "conv_bn_bias_12_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_12_V_r", "role": "default" }} , 
 	{ "name": "conv_bn_bias_13_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_13_V_r", "role": "default" }} , 
 	{ "name": "conv_bn_bias_14_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_14_V_r", "role": "default" }} , 
 	{ "name": "conv_bn_bias_15_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_15_V_r", "role": "default" }} , 
 	{ "name": "conv_bn_bias_16_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_16_V_r", "role": "default" }} , 
 	{ "name": "conv_bn_bias_17_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_17_V_r", "role": "default" }} , 
 	{ "name": "conv_bn_bias_18_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_18_V_r", "role": "default" }} , 
 	{ "name": "conv_bn_bias_19_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_19_V_r", "role": "default" }} , 
 	{ "name": "conv_bn_bias_20_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_20_V_r", "role": "default" }} , 
 	{ "name": "conv_bn_bias_21_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_21_V_r", "role": "default" }} , 
 	{ "name": "conv_bn_bias_22_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_22_V_r", "role": "default" }} , 
 	{ "name": "conv_bn_bias_23_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_23_V_r", "role": "default" }} , 
 	{ "name": "conv_bn_bias_24_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_24_V_r", "role": "default" }} , 
 	{ "name": "conv_bn_bias_25_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_25_V_r", "role": "default" }} , 
 	{ "name": "conv_bn_bias_26_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_26_V_r", "role": "default" }} , 
 	{ "name": "conv_bn_bias_27_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_27_V_r", "role": "default" }} , 
 	{ "name": "conv_bn_bias_28_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_28_V_r", "role": "default" }} , 
 	{ "name": "conv_bn_bias_29_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_29_V_r", "role": "default" }} , 
 	{ "name": "conv_bn_bias_30_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_30_V_r", "role": "default" }} , 
 	{ "name": "conv_bn_bias_31_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv_bn_bias_31_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_x_0_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_0_V_re", "role": "default" }} , 
 	{ "name": "relu_shift_x_1_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_1_V_re", "role": "default" }} , 
 	{ "name": "relu_shift_x_2_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_2_V_re", "role": "default" }} , 
 	{ "name": "relu_shift_x_3_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_3_V_re", "role": "default" }} , 
 	{ "name": "relu_shift_x_4_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_4_V_re", "role": "default" }} , 
 	{ "name": "relu_shift_x_5_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_5_V_re", "role": "default" }} , 
 	{ "name": "relu_shift_x_6_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_6_V_re", "role": "default" }} , 
 	{ "name": "relu_shift_x_7_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_7_V_re", "role": "default" }} , 
 	{ "name": "relu_shift_x_8_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_8_V_re", "role": "default" }} , 
 	{ "name": "relu_shift_x_9_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_9_V_re", "role": "default" }} , 
 	{ "name": "relu_shift_x_10_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_10_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_x_11_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_11_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_x_12_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_12_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_x_13_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_13_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_x_14_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_14_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_x_15_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_15_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_x_16_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_16_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_x_17_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_17_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_x_18_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_18_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_x_19_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_19_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_x_20_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_20_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_x_21_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_21_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_x_22_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_22_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_x_23_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_23_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_x_24_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_24_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_x_25_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_25_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_x_26_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_26_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_x_27_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_27_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_x_28_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_28_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_x_29_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_29_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_x_30_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_30_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_x_31_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_x_31_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_y_0_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_0_V_re", "role": "default" }} , 
 	{ "name": "relu_shift_y_1_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_1_V_re", "role": "default" }} , 
 	{ "name": "relu_shift_y_2_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_2_V_re", "role": "default" }} , 
 	{ "name": "relu_shift_y_3_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_3_V_re", "role": "default" }} , 
 	{ "name": "relu_shift_y_4_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_4_V_re", "role": "default" }} , 
 	{ "name": "relu_shift_y_5_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_5_V_re", "role": "default" }} , 
 	{ "name": "relu_shift_y_6_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_6_V_re", "role": "default" }} , 
 	{ "name": "relu_shift_y_7_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_7_V_re", "role": "default" }} , 
 	{ "name": "relu_shift_y_8_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_8_V_re", "role": "default" }} , 
 	{ "name": "relu_shift_y_9_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_9_V_re", "role": "default" }} , 
 	{ "name": "relu_shift_y_10_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_10_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_y_11_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_11_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_y_12_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_12_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_y_13_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_13_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_y_14_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_14_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_y_15_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_15_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_y_16_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_16_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_y_17_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_17_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_y_18_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_18_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_y_19_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_19_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_y_20_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_20_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_y_21_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_21_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_y_22_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_22_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_y_23_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_23_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_y_24_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_24_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_y_25_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_25_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_y_26_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_26_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_y_27_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_27_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_y_28_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_28_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_y_29_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_29_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_y_30_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_30_V_r", "role": "default" }} , 
 	{ "name": "relu_shift_y_31_V_r", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_shift_y_31_V_r", "role": "default" }} , 
 	{ "name": "relu_weight_0_V_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_0_V_rea", "role": "default" }} , 
 	{ "name": "relu_weight_1_V_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_1_V_rea", "role": "default" }} , 
 	{ "name": "relu_weight_2_V_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_2_V_rea", "role": "default" }} , 
 	{ "name": "relu_weight_3_V_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_3_V_rea", "role": "default" }} , 
 	{ "name": "relu_weight_4_V_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_4_V_rea", "role": "default" }} , 
 	{ "name": "relu_weight_5_V_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_5_V_rea", "role": "default" }} , 
 	{ "name": "relu_weight_6_V_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_6_V_rea", "role": "default" }} , 
 	{ "name": "relu_weight_7_V_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_7_V_rea", "role": "default" }} , 
 	{ "name": "relu_weight_8_V_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_8_V_rea", "role": "default" }} , 
 	{ "name": "relu_weight_9_V_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_9_V_rea", "role": "default" }} , 
 	{ "name": "relu_weight_10_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_10_V_re", "role": "default" }} , 
 	{ "name": "relu_weight_11_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_11_V_re", "role": "default" }} , 
 	{ "name": "relu_weight_12_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_12_V_re", "role": "default" }} , 
 	{ "name": "relu_weight_13_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_13_V_re", "role": "default" }} , 
 	{ "name": "relu_weight_14_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_14_V_re", "role": "default" }} , 
 	{ "name": "relu_weight_15_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_15_V_re", "role": "default" }} , 
 	{ "name": "relu_weight_16_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_16_V_re", "role": "default" }} , 
 	{ "name": "relu_weight_17_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_17_V_re", "role": "default" }} , 
 	{ "name": "relu_weight_18_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_18_V_re", "role": "default" }} , 
 	{ "name": "relu_weight_19_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_19_V_re", "role": "default" }} , 
 	{ "name": "relu_weight_20_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_20_V_re", "role": "default" }} , 
 	{ "name": "relu_weight_21_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_21_V_re", "role": "default" }} , 
 	{ "name": "relu_weight_22_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_22_V_re", "role": "default" }} , 
 	{ "name": "relu_weight_23_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_23_V_re", "role": "default" }} , 
 	{ "name": "relu_weight_24_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_24_V_re", "role": "default" }} , 
 	{ "name": "relu_weight_25_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_25_V_re", "role": "default" }} , 
 	{ "name": "relu_weight_26_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_26_V_re", "role": "default" }} , 
 	{ "name": "relu_weight_27_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_27_V_re", "role": "default" }} , 
 	{ "name": "relu_weight_28_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_28_V_re", "role": "default" }} , 
 	{ "name": "relu_weight_29_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_29_V_re", "role": "default" }} , 
 	{ "name": "relu_weight_30_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_30_V_re", "role": "default" }} , 
 	{ "name": "relu_weight_31_V_re", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "relu_weight_31_V_re", "role": "default" }} , 
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
 	{ "name": "out_buf_all_0_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_0_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_0_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_0_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_0_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_0_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_1_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_1_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_1_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_1_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_1_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_1_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_1_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_1_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_1_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_2_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_2_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_2_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_2_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_2_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_2_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_2_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_2_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_2_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_3_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_3_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_3_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_3_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_3_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_3_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_3_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_3_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_3_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_4_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_4_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_4_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_4_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_4_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_4_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_4_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_4_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_4_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_5_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_5_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_5_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_5_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_5_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_5_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_5_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_5_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_5_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_6_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_6_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_6_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_6_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_6_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_6_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_6_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_6_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_6_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_7_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_7_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_7_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_7_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_7_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_7_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_7_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_7_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_7_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_8_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_8_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_8_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_8_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_8_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_8_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_8_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_8_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_8_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_8_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_8_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_8_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_9_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_9_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_9_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_9_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_9_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_9_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_9_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_9_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_9_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_9_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_9_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_9_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_10_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_10_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_10_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_10_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_10_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_10_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_10_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_10_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_10_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_10_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_10_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_10_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_11_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_11_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_11_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_11_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_11_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_11_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_11_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_11_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_11_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_11_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_11_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_11_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_12_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_12_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_12_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_12_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_12_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_12_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_12_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_12_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_12_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_12_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_12_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_12_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_13_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_13_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_13_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_13_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_13_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_13_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_13_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_13_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_13_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_13_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_13_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_13_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_14_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_14_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_14_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_14_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_14_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_14_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_14_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_14_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_14_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_14_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_14_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_14_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_15_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_15_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_15_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_15_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_15_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_15_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_15_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_15_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_15_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_15_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_15_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_15_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_16_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_16_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_16_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_16_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_16_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_16_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_16_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_16_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_16_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_16_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_16_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_16_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_17_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_17_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_17_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_17_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_17_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_17_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_17_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_17_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_17_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_17_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_17_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_17_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_18_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_18_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_18_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_18_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_18_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_18_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_18_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_18_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_18_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_18_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_18_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_18_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_19_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_19_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_19_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_19_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_19_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_19_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_19_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_19_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_19_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_19_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_19_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_19_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_20_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_20_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_20_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_20_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_20_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_20_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_20_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_20_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_20_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_20_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_20_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_20_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_21_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_21_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_21_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_21_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_21_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_21_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_21_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_21_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_21_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_21_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_21_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_21_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_22_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_22_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_22_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_22_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_22_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_22_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_22_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_22_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_22_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_22_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_22_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_22_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_23_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_23_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_23_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_23_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_23_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_23_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_23_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_23_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_23_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_23_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_23_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_23_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_24_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_24_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_24_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_24_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_24_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_24_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_24_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_24_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_24_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_24_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_24_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_24_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_25_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_25_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_25_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_25_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_25_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_25_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_25_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_25_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_25_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_25_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_25_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_25_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_26_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_26_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_26_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_26_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_26_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_26_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_26_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_26_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_26_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_26_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_26_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_26_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_27_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_27_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_27_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_27_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_27_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_27_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_27_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_27_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_27_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_27_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_27_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_27_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_28_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_28_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_28_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_28_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_28_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_28_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_28_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_28_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_28_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_28_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_28_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_28_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_29_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_29_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_29_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_29_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_29_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_29_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_29_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_29_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_29_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_29_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_29_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_29_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_30_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_30_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_30_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_30_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_30_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_30_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_30_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_30_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_30_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_30_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_30_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_30_V", "role": "q1" }} , 
 	{ "name": "out_buf_all_31_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_31_V", "role": "address0" }} , 
 	{ "name": "out_buf_all_31_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_31_V", "role": "ce0" }} , 
 	{ "name": "out_buf_all_31_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_31_V", "role": "q0" }} , 
 	{ "name": "out_buf_all_31_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "out_buf_all_31_V", "role": "address1" }} , 
 	{ "name": "out_buf_all_31_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_all_31_V", "role": "ce1" }} , 
 	{ "name": "out_buf_all_31_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_all_31_V", "role": "q1" }} , 
 	{ "name": "out_buf_sc_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_0_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_0_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_0_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_1_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_1_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_1_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_2_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_2_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_2_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_3_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_3_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_3_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_4_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_4_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_4_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_5_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_5_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_5_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_6_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_6_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_6_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_7_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_7_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_7_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_8_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_8_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_8_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_8_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_8_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_8_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_9_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_9_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_9_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_9_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_9_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_9_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_10_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_10_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_10_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_10_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_10_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_10_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_11_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_11_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_11_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_11_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_11_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_11_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_12_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_12_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_12_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_12_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_12_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_12_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_13_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_13_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_13_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_13_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_13_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_13_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_14_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_14_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_14_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_14_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_14_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_14_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_15_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_15_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_15_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_15_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_15_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_15_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_16_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_16_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_16_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_16_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_16_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_16_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_17_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_17_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_17_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_17_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_17_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_17_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_18_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_18_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_18_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_18_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_18_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_18_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_19_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_19_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_19_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_19_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_19_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_19_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_20_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_20_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_20_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_20_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_20_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_20_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_21_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_21_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_21_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_21_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_21_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_21_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_22_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_22_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_22_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_22_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_22_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_22_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_23_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_23_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_23_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_23_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_23_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_23_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_24_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_24_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_24_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_24_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_24_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_24_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_25_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_25_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_25_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_25_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_25_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_25_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_26_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_26_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_26_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_26_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_26_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_26_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_27_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_27_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_27_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_27_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_27_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_27_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_28_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_28_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_28_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_28_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_28_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_28_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_29_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_29_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_29_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_29_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_29_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_29_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_30_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_30_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_30_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_30_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_30_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_30_V", "role": "q0" }} , 
 	{ "name": "out_buf_sc_31_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_buf_sc_31_V", "role": "address0" }} , 
 	{ "name": "out_buf_sc_31_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_buf_sc_31_V", "role": "ce0" }} , 
 	{ "name": "out_buf_sc_31_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_buf_sc_31_V", "role": "q0" }} , 
 	{ "name": "feat_buf_all_0_V_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "feat_buf_all_0_V_4", "role": "address0" }} , 
 	{ "name": "feat_buf_all_0_V_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "feat_buf_all_0_V_4", "role": "ce0" }} , 
 	{ "name": "feat_buf_all_0_V_4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "feat_buf_all_0_V_4", "role": "we0" }} , 
 	{ "name": "feat_buf_all_0_V_4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "feat_buf_all_0_V_4", "role": "d0" }} , 
 	{ "name": "H_fmap_in", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "H_fmap_in", "role": "default" }} , 
 	{ "name": "H_fmap_out", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "H_fmap_out", "role": "default" }} , 
 	{ "name": "c_out", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "c_out", "role": "default" }} , 
 	{ "name": "row_tile_start", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "row_tile_start", "role": "default" }} , 
 	{ "name": "stride", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "stride", "role": "default" }} , 
 	{ "name": "switch_bank", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "switch_bank", "role": "default" }} , 
 	{ "name": "feat_buf_all_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "feat_buf_all_1_V", "role": "address0" }} , 
 	{ "name": "feat_buf_all_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "feat_buf_all_1_V", "role": "ce0" }} , 
 	{ "name": "feat_buf_all_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "feat_buf_all_1_V", "role": "we0" }} , 
 	{ "name": "feat_buf_all_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "feat_buf_all_1_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162", "163", "164", "165", "166", "167", "168", "169", "170", "171", "172"],
		"CDFG" : "bn_relu_sc_relu",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "85", "EstimateLatencyMax" : "1072",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "conv_threshold_0_V_s", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_1_V_s", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_2_V_s", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_3_V_s", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_4_V_s", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_5_V_s", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_6_V_s", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_7_V_s", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_8_V_s", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_9_V_s", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_threshold_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_0_V_s", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_1_V_s", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_2_V_s", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_3_V_s", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_4_V_s", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_5_V_s", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_6_V_s", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_7_V_s", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_8_V_s", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_9_V_s", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_weight_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_0_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_1_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_2_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_3_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_4_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_5_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_6_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_7_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_8_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_9_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_10_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_11_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_12_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_13_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_14_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_15_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_16_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_17_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_18_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_19_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_20_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_21_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_22_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_23_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_24_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_25_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_26_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_27_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_28_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_29_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_30_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_bn_bias_31_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_0_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_1_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_2_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_3_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_4_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_5_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_6_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_7_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_8_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_9_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_10_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_11_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_12_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_13_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_14_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_15_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_16_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_17_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_18_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_19_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_20_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_21_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_22_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_23_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_24_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_25_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_26_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_27_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_28_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_29_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_30_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_x_31_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_0_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_1_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_2_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_3_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_4_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_5_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_6_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_7_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_8_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_9_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_10_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_11_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_12_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_13_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_14_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_15_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_16_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_17_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_18_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_19_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_20_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_21_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_22_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_23_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_24_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_25_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_26_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_27_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_28_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_29_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_30_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_shift_y_31_V_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_0_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_1_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_2_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_3_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_4_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_5_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_6_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_7_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_8_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_9_V_rea", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_10_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_11_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_12_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_13_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_14_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_15_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_16_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_17_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_18_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_19_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_20_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_21_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_22_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_23_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_24_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_25_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_26_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_27_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_28_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_29_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_30_V_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "relu_weight_31_V_re", "Type" : "None", "Direction" : "I"},
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
			{"Name" : "out_buf_sc_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_7_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_8_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_9_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_10_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_11_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_12_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_13_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_14_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_15_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_16_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_17_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_18_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_19_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_20_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_21_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_22_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_23_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_24_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_25_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_26_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_27_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_28_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_29_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_30_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_buf_sc_31_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "feat_buf_all_0_V_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "H_fmap_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "H_fmap_out", "Type" : "None", "Direction" : "I"},
			{"Name" : "c_out", "Type" : "None", "Direction" : "I"},
			{"Name" : "row_tile_start", "Type" : "None", "Direction" : "I"},
			{"Name" : "stride", "Type" : "None", "Direction" : "I"},
			{"Name" : "switch_bank", "Type" : "None", "Direction" : "I"},
			{"Name" : "feat_buf_all_1_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_sdiv_32nsocq_U822", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_udiv_4ns_pcA_U823", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_32s_8qcK_U824", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_7ns_3rcU_U825", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_32s_8qcK_U826", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_7ns_3rcU_U827", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_9ns_3sc4_U828", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mac_muladtde_U829", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mac_muladudo_U830", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mac_muladncg_U831", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mac_muladvdy_U832", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mac_muladwdI_U833", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U834", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U835", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U836", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U837", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U838", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U839", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U840", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U841", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U842", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U843", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U844", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U845", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U846", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U847", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U848", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U849", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U850", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U851", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U852", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U853", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U854", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U855", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U856", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U857", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U858", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U859", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U860", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U861", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U862", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U863", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U864", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1xdS_U865", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U866", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U867", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U868", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U869", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U870", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U871", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U872", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U873", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U874", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U875", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U876", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U877", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U878", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U879", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U880", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U881", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U882", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U883", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U884", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U885", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U886", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U887", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U888", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U889", "Parent" : "0"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U890", "Parent" : "0"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U891", "Parent" : "0"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U892", "Parent" : "0"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U893", "Parent" : "0"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U894", "Parent" : "0"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U895", "Parent" : "0"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U896", "Parent" : "0"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1yd2_U897", "Parent" : "0"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U898", "Parent" : "0"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U899", "Parent" : "0"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U900", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U901", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U902", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U903", "Parent" : "0"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U904", "Parent" : "0"},
	{"ID" : "84", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U905", "Parent" : "0"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U906", "Parent" : "0"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U907", "Parent" : "0"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U908", "Parent" : "0"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U909", "Parent" : "0"},
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U910", "Parent" : "0"},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U911", "Parent" : "0"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U912", "Parent" : "0"},
	{"ID" : "92", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U913", "Parent" : "0"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U914", "Parent" : "0"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U915", "Parent" : "0"},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U916", "Parent" : "0"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U917", "Parent" : "0"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U918", "Parent" : "0"},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U919", "Parent" : "0"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U920", "Parent" : "0"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U921", "Parent" : "0"},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U922", "Parent" : "0"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U923", "Parent" : "0"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U924", "Parent" : "0"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U925", "Parent" : "0"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U926", "Parent" : "0"},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U927", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U928", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U929", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U930", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U931", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U932", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U933", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U934", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U935", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U936", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U937", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U938", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U939", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U940", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U941", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U942", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U943", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U944", "Parent" : "0"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U945", "Parent" : "0"},
	{"ID" : "125", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U946", "Parent" : "0"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U947", "Parent" : "0"},
	{"ID" : "127", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U948", "Parent" : "0"},
	{"ID" : "128", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U949", "Parent" : "0"},
	{"ID" : "129", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U950", "Parent" : "0"},
	{"ID" : "130", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U951", "Parent" : "0"},
	{"ID" : "131", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U952", "Parent" : "0"},
	{"ID" : "132", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U953", "Parent" : "0"},
	{"ID" : "133", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U954", "Parent" : "0"},
	{"ID" : "134", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U955", "Parent" : "0"},
	{"ID" : "135", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U956", "Parent" : "0"},
	{"ID" : "136", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U957", "Parent" : "0"},
	{"ID" : "137", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U958", "Parent" : "0"},
	{"ID" : "138", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U959", "Parent" : "0"},
	{"ID" : "139", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U960", "Parent" : "0"},
	{"ID" : "140", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U961", "Parent" : "0"},
	{"ID" : "141", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U962", "Parent" : "0"},
	{"ID" : "142", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U963", "Parent" : "0"},
	{"ID" : "143", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U964", "Parent" : "0"},
	{"ID" : "144", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U965", "Parent" : "0"},
	{"ID" : "145", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U966", "Parent" : "0"},
	{"ID" : "146", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U967", "Parent" : "0"},
	{"ID" : "147", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U968", "Parent" : "0"},
	{"ID" : "148", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U969", "Parent" : "0"},
	{"ID" : "149", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U970", "Parent" : "0"},
	{"ID" : "150", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U971", "Parent" : "0"},
	{"ID" : "151", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U972", "Parent" : "0"},
	{"ID" : "152", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U973", "Parent" : "0"},
	{"ID" : "153", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U974", "Parent" : "0"},
	{"ID" : "154", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U975", "Parent" : "0"},
	{"ID" : "155", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U976", "Parent" : "0"},
	{"ID" : "156", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U977", "Parent" : "0"},
	{"ID" : "157", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U978", "Parent" : "0"},
	{"ID" : "158", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U979", "Parent" : "0"},
	{"ID" : "159", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U980", "Parent" : "0"},
	{"ID" : "160", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U981", "Parent" : "0"},
	{"ID" : "161", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U982", "Parent" : "0"},
	{"ID" : "162", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U983", "Parent" : "0"},
	{"ID" : "163", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U984", "Parent" : "0"},
	{"ID" : "164", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U985", "Parent" : "0"},
	{"ID" : "165", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U986", "Parent" : "0"},
	{"ID" : "166", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U987", "Parent" : "0"},
	{"ID" : "167", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U988", "Parent" : "0"},
	{"ID" : "168", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U989", "Parent" : "0"},
	{"ID" : "169", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U990", "Parent" : "0"},
	{"ID" : "170", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U991", "Parent" : "0"},
	{"ID" : "171", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U992", "Parent" : "0"},
	{"ID" : "172", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mul_mul_1kbM_U993", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	bn_relu_sc_relu {
		conv_threshold_0_V_s {Type I LastRead 36 FirstWrite -1}
		conv_threshold_1_V_s {Type I LastRead 36 FirstWrite -1}
		conv_threshold_2_V_s {Type I LastRead 36 FirstWrite -1}
		conv_threshold_3_V_s {Type I LastRead 36 FirstWrite -1}
		conv_threshold_4_V_s {Type I LastRead 36 FirstWrite -1}
		conv_threshold_5_V_s {Type I LastRead 36 FirstWrite -1}
		conv_threshold_6_V_s {Type I LastRead 36 FirstWrite -1}
		conv_threshold_7_V_s {Type I LastRead 36 FirstWrite -1}
		conv_threshold_8_V_s {Type I LastRead 36 FirstWrite -1}
		conv_threshold_9_V_s {Type I LastRead 36 FirstWrite -1}
		conv_threshold_10_V_read {Type I LastRead 36 FirstWrite -1}
		conv_threshold_11_V_read {Type I LastRead 36 FirstWrite -1}
		conv_threshold_12_V_read {Type I LastRead 36 FirstWrite -1}
		conv_threshold_13_V_read {Type I LastRead 36 FirstWrite -1}
		conv_threshold_14_V_read {Type I LastRead 36 FirstWrite -1}
		conv_threshold_15_V_read {Type I LastRead 36 FirstWrite -1}
		conv_threshold_16_V_read {Type I LastRead 36 FirstWrite -1}
		conv_threshold_17_V_read {Type I LastRead 36 FirstWrite -1}
		conv_threshold_18_V_read {Type I LastRead 36 FirstWrite -1}
		conv_threshold_19_V_read {Type I LastRead 36 FirstWrite -1}
		conv_threshold_20_V_read {Type I LastRead 36 FirstWrite -1}
		conv_threshold_21_V_read {Type I LastRead 36 FirstWrite -1}
		conv_threshold_22_V_read {Type I LastRead 36 FirstWrite -1}
		conv_threshold_23_V_read {Type I LastRead 36 FirstWrite -1}
		conv_threshold_24_V_read {Type I LastRead 36 FirstWrite -1}
		conv_threshold_25_V_read {Type I LastRead 36 FirstWrite -1}
		conv_threshold_26_V_read {Type I LastRead 36 FirstWrite -1}
		conv_threshold_27_V_read {Type I LastRead 36 FirstWrite -1}
		conv_threshold_28_V_read {Type I LastRead 36 FirstWrite -1}
		conv_threshold_29_V_read {Type I LastRead 36 FirstWrite -1}
		conv_threshold_30_V_read {Type I LastRead 36 FirstWrite -1}
		conv_threshold_31_V_read {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_0_V_s {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_1_V_s {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_2_V_s {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_3_V_s {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_4_V_s {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_5_V_s {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_6_V_s {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_7_V_s {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_8_V_s {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_9_V_s {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_10_V_read {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_11_V_read {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_12_V_read {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_13_V_read {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_14_V_read {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_15_V_read {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_16_V_read {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_17_V_read {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_18_V_read {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_19_V_read {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_20_V_read {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_21_V_read {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_22_V_read {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_23_V_read {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_24_V_read {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_25_V_read {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_26_V_read {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_27_V_read {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_28_V_read {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_29_V_read {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_30_V_read {Type I LastRead 36 FirstWrite -1}
		conv_bn_weight_31_V_read {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_0_V_re {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_1_V_re {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_2_V_re {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_3_V_re {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_4_V_re {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_5_V_re {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_6_V_re {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_7_V_re {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_8_V_re {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_9_V_re {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_10_V_r {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_11_V_r {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_12_V_r {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_13_V_r {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_14_V_r {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_15_V_r {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_16_V_r {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_17_V_r {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_18_V_r {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_19_V_r {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_20_V_r {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_21_V_r {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_22_V_r {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_23_V_r {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_24_V_r {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_25_V_r {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_26_V_r {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_27_V_r {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_28_V_r {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_29_V_r {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_30_V_r {Type I LastRead 36 FirstWrite -1}
		conv_bn_bias_31_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_0_V_re {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_1_V_re {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_2_V_re {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_3_V_re {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_4_V_re {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_5_V_re {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_6_V_re {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_7_V_re {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_8_V_re {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_9_V_re {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_10_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_11_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_12_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_13_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_14_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_15_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_16_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_17_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_18_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_19_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_20_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_21_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_22_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_23_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_24_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_25_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_26_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_27_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_28_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_29_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_30_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_x_31_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_0_V_re {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_1_V_re {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_2_V_re {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_3_V_re {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_4_V_re {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_5_V_re {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_6_V_re {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_7_V_re {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_8_V_re {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_9_V_re {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_10_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_11_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_12_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_13_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_14_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_15_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_16_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_17_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_18_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_19_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_20_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_21_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_22_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_23_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_24_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_25_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_26_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_27_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_28_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_29_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_30_V_r {Type I LastRead 36 FirstWrite -1}
		relu_shift_y_31_V_r {Type I LastRead 36 FirstWrite -1}
		relu_weight_0_V_rea {Type I LastRead 36 FirstWrite -1}
		relu_weight_1_V_rea {Type I LastRead 36 FirstWrite -1}
		relu_weight_2_V_rea {Type I LastRead 36 FirstWrite -1}
		relu_weight_3_V_rea {Type I LastRead 36 FirstWrite -1}
		relu_weight_4_V_rea {Type I LastRead 36 FirstWrite -1}
		relu_weight_5_V_rea {Type I LastRead 36 FirstWrite -1}
		relu_weight_6_V_rea {Type I LastRead 36 FirstWrite -1}
		relu_weight_7_V_rea {Type I LastRead 36 FirstWrite -1}
		relu_weight_8_V_rea {Type I LastRead 36 FirstWrite -1}
		relu_weight_9_V_rea {Type I LastRead 36 FirstWrite -1}
		relu_weight_10_V_re {Type I LastRead 36 FirstWrite -1}
		relu_weight_11_V_re {Type I LastRead 36 FirstWrite -1}
		relu_weight_12_V_re {Type I LastRead 36 FirstWrite -1}
		relu_weight_13_V_re {Type I LastRead 36 FirstWrite -1}
		relu_weight_14_V_re {Type I LastRead 36 FirstWrite -1}
		relu_weight_15_V_re {Type I LastRead 36 FirstWrite -1}
		relu_weight_16_V_re {Type I LastRead 36 FirstWrite -1}
		relu_weight_17_V_re {Type I LastRead 36 FirstWrite -1}
		relu_weight_18_V_re {Type I LastRead 36 FirstWrite -1}
		relu_weight_19_V_re {Type I LastRead 36 FirstWrite -1}
		relu_weight_20_V_re {Type I LastRead 36 FirstWrite -1}
		relu_weight_21_V_re {Type I LastRead 36 FirstWrite -1}
		relu_weight_22_V_re {Type I LastRead 36 FirstWrite -1}
		relu_weight_23_V_re {Type I LastRead 36 FirstWrite -1}
		relu_weight_24_V_re {Type I LastRead 36 FirstWrite -1}
		relu_weight_25_V_re {Type I LastRead 36 FirstWrite -1}
		relu_weight_26_V_re {Type I LastRead 36 FirstWrite -1}
		relu_weight_27_V_re {Type I LastRead 36 FirstWrite -1}
		relu_weight_28_V_re {Type I LastRead 36 FirstWrite -1}
		relu_weight_29_V_re {Type I LastRead 36 FirstWrite -1}
		relu_weight_30_V_re {Type I LastRead 36 FirstWrite -1}
		relu_weight_31_V_re {Type I LastRead 36 FirstWrite -1}
		bn_weight_0_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_1_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_2_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_3_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_4_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_5_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_6_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_7_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_8_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_9_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_10_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_11_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_12_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_13_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_14_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_15_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_16_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_17_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_18_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_19_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_20_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_21_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_22_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_23_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_24_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_25_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_26_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_27_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_28_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_29_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_30_V_read {Type I LastRead 36 FirstWrite -1}
		bn_weight_31_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_0_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_1_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_2_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_3_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_4_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_5_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_6_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_7_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_8_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_9_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_10_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_11_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_12_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_13_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_14_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_15_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_16_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_17_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_18_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_19_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_20_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_21_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_22_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_23_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_24_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_25_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_26_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_27_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_28_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_29_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_30_V_read {Type I LastRead 36 FirstWrite -1}
		bn_bias_31_V_read {Type I LastRead 36 FirstWrite -1}
		DDR_buf_V {Type O LastRead 60 FirstWrite 59}
		DDR_buf_V_offset {Type I LastRead 36 FirstWrite -1}
		out_buf_all_0_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_1_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_2_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_3_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_4_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_5_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_6_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_7_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_8_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_9_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_10_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_11_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_12_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_13_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_14_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_15_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_16_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_17_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_18_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_19_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_20_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_21_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_22_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_23_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_24_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_25_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_26_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_27_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_28_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_29_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_30_V {Type I LastRead 42 FirstWrite -1}
		out_buf_all_31_V {Type I LastRead 42 FirstWrite -1}
		out_buf_sc_0_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_1_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_2_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_3_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_4_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_5_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_6_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_7_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_8_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_9_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_10_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_11_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_12_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_13_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_14_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_15_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_16_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_17_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_18_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_19_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_20_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_21_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_22_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_23_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_24_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_25_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_26_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_27_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_28_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_29_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_30_V {Type I LastRead 39 FirstWrite -1}
		out_buf_sc_31_V {Type I LastRead 39 FirstWrite -1}
		feat_buf_all_0_V_4 {Type O LastRead -1 FirstWrite 59}
		H_fmap_in {Type I LastRead 36 FirstWrite -1}
		H_fmap_out {Type I LastRead 35 FirstWrite -1}
		c_out {Type I LastRead 36 FirstWrite -1}
		row_tile_start {Type I LastRead 0 FirstWrite -1}
		stride {Type I LastRead 0 FirstWrite -1}
		switch_bank {Type I LastRead 36 FirstWrite -1}
		feat_buf_all_1_V {Type O LastRead -1 FirstWrite 59}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "85", "Max" : "1072"}
	, {"Name" : "Interval", "Min" : "85", "Max" : "1072"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	conv_threshold_0_V_s { ap_none {  { conv_threshold_0_V_s in_data 0 16 } } }
	conv_threshold_1_V_s { ap_none {  { conv_threshold_1_V_s in_data 0 16 } } }
	conv_threshold_2_V_s { ap_none {  { conv_threshold_2_V_s in_data 0 16 } } }
	conv_threshold_3_V_s { ap_none {  { conv_threshold_3_V_s in_data 0 16 } } }
	conv_threshold_4_V_s { ap_none {  { conv_threshold_4_V_s in_data 0 16 } } }
	conv_threshold_5_V_s { ap_none {  { conv_threshold_5_V_s in_data 0 16 } } }
	conv_threshold_6_V_s { ap_none {  { conv_threshold_6_V_s in_data 0 16 } } }
	conv_threshold_7_V_s { ap_none {  { conv_threshold_7_V_s in_data 0 16 } } }
	conv_threshold_8_V_s { ap_none {  { conv_threshold_8_V_s in_data 0 16 } } }
	conv_threshold_9_V_s { ap_none {  { conv_threshold_9_V_s in_data 0 16 } } }
	conv_threshold_10_V_read { ap_none {  { conv_threshold_10_V_read in_data 0 16 } } }
	conv_threshold_11_V_read { ap_none {  { conv_threshold_11_V_read in_data 0 16 } } }
	conv_threshold_12_V_read { ap_none {  { conv_threshold_12_V_read in_data 0 16 } } }
	conv_threshold_13_V_read { ap_none {  { conv_threshold_13_V_read in_data 0 16 } } }
	conv_threshold_14_V_read { ap_none {  { conv_threshold_14_V_read in_data 0 16 } } }
	conv_threshold_15_V_read { ap_none {  { conv_threshold_15_V_read in_data 0 16 } } }
	conv_threshold_16_V_read { ap_none {  { conv_threshold_16_V_read in_data 0 16 } } }
	conv_threshold_17_V_read { ap_none {  { conv_threshold_17_V_read in_data 0 16 } } }
	conv_threshold_18_V_read { ap_none {  { conv_threshold_18_V_read in_data 0 16 } } }
	conv_threshold_19_V_read { ap_none {  { conv_threshold_19_V_read in_data 0 16 } } }
	conv_threshold_20_V_read { ap_none {  { conv_threshold_20_V_read in_data 0 16 } } }
	conv_threshold_21_V_read { ap_none {  { conv_threshold_21_V_read in_data 0 16 } } }
	conv_threshold_22_V_read { ap_none {  { conv_threshold_22_V_read in_data 0 16 } } }
	conv_threshold_23_V_read { ap_none {  { conv_threshold_23_V_read in_data 0 16 } } }
	conv_threshold_24_V_read { ap_none {  { conv_threshold_24_V_read in_data 0 16 } } }
	conv_threshold_25_V_read { ap_none {  { conv_threshold_25_V_read in_data 0 16 } } }
	conv_threshold_26_V_read { ap_none {  { conv_threshold_26_V_read in_data 0 16 } } }
	conv_threshold_27_V_read { ap_none {  { conv_threshold_27_V_read in_data 0 16 } } }
	conv_threshold_28_V_read { ap_none {  { conv_threshold_28_V_read in_data 0 16 } } }
	conv_threshold_29_V_read { ap_none {  { conv_threshold_29_V_read in_data 0 16 } } }
	conv_threshold_30_V_read { ap_none {  { conv_threshold_30_V_read in_data 0 16 } } }
	conv_threshold_31_V_read { ap_none {  { conv_threshold_31_V_read in_data 0 16 } } }
	conv_bn_weight_0_V_s { ap_none {  { conv_bn_weight_0_V_s in_data 0 16 } } }
	conv_bn_weight_1_V_s { ap_none {  { conv_bn_weight_1_V_s in_data 0 16 } } }
	conv_bn_weight_2_V_s { ap_none {  { conv_bn_weight_2_V_s in_data 0 16 } } }
	conv_bn_weight_3_V_s { ap_none {  { conv_bn_weight_3_V_s in_data 0 16 } } }
	conv_bn_weight_4_V_s { ap_none {  { conv_bn_weight_4_V_s in_data 0 16 } } }
	conv_bn_weight_5_V_s { ap_none {  { conv_bn_weight_5_V_s in_data 0 16 } } }
	conv_bn_weight_6_V_s { ap_none {  { conv_bn_weight_6_V_s in_data 0 16 } } }
	conv_bn_weight_7_V_s { ap_none {  { conv_bn_weight_7_V_s in_data 0 16 } } }
	conv_bn_weight_8_V_s { ap_none {  { conv_bn_weight_8_V_s in_data 0 16 } } }
	conv_bn_weight_9_V_s { ap_none {  { conv_bn_weight_9_V_s in_data 0 16 } } }
	conv_bn_weight_10_V_read { ap_none {  { conv_bn_weight_10_V_read in_data 0 16 } } }
	conv_bn_weight_11_V_read { ap_none {  { conv_bn_weight_11_V_read in_data 0 16 } } }
	conv_bn_weight_12_V_read { ap_none {  { conv_bn_weight_12_V_read in_data 0 16 } } }
	conv_bn_weight_13_V_read { ap_none {  { conv_bn_weight_13_V_read in_data 0 16 } } }
	conv_bn_weight_14_V_read { ap_none {  { conv_bn_weight_14_V_read in_data 0 16 } } }
	conv_bn_weight_15_V_read { ap_none {  { conv_bn_weight_15_V_read in_data 0 16 } } }
	conv_bn_weight_16_V_read { ap_none {  { conv_bn_weight_16_V_read in_data 0 16 } } }
	conv_bn_weight_17_V_read { ap_none {  { conv_bn_weight_17_V_read in_data 0 16 } } }
	conv_bn_weight_18_V_read { ap_none {  { conv_bn_weight_18_V_read in_data 0 16 } } }
	conv_bn_weight_19_V_read { ap_none {  { conv_bn_weight_19_V_read in_data 0 16 } } }
	conv_bn_weight_20_V_read { ap_none {  { conv_bn_weight_20_V_read in_data 0 16 } } }
	conv_bn_weight_21_V_read { ap_none {  { conv_bn_weight_21_V_read in_data 0 16 } } }
	conv_bn_weight_22_V_read { ap_none {  { conv_bn_weight_22_V_read in_data 0 16 } } }
	conv_bn_weight_23_V_read { ap_none {  { conv_bn_weight_23_V_read in_data 0 16 } } }
	conv_bn_weight_24_V_read { ap_none {  { conv_bn_weight_24_V_read in_data 0 16 } } }
	conv_bn_weight_25_V_read { ap_none {  { conv_bn_weight_25_V_read in_data 0 16 } } }
	conv_bn_weight_26_V_read { ap_none {  { conv_bn_weight_26_V_read in_data 0 16 } } }
	conv_bn_weight_27_V_read { ap_none {  { conv_bn_weight_27_V_read in_data 0 16 } } }
	conv_bn_weight_28_V_read { ap_none {  { conv_bn_weight_28_V_read in_data 0 16 } } }
	conv_bn_weight_29_V_read { ap_none {  { conv_bn_weight_29_V_read in_data 0 16 } } }
	conv_bn_weight_30_V_read { ap_none {  { conv_bn_weight_30_V_read in_data 0 16 } } }
	conv_bn_weight_31_V_read { ap_none {  { conv_bn_weight_31_V_read in_data 0 16 } } }
	conv_bn_bias_0_V_re { ap_none {  { conv_bn_bias_0_V_re in_data 0 16 } } }
	conv_bn_bias_1_V_re { ap_none {  { conv_bn_bias_1_V_re in_data 0 16 } } }
	conv_bn_bias_2_V_re { ap_none {  { conv_bn_bias_2_V_re in_data 0 16 } } }
	conv_bn_bias_3_V_re { ap_none {  { conv_bn_bias_3_V_re in_data 0 16 } } }
	conv_bn_bias_4_V_re { ap_none {  { conv_bn_bias_4_V_re in_data 0 16 } } }
	conv_bn_bias_5_V_re { ap_none {  { conv_bn_bias_5_V_re in_data 0 16 } } }
	conv_bn_bias_6_V_re { ap_none {  { conv_bn_bias_6_V_re in_data 0 16 } } }
	conv_bn_bias_7_V_re { ap_none {  { conv_bn_bias_7_V_re in_data 0 16 } } }
	conv_bn_bias_8_V_re { ap_none {  { conv_bn_bias_8_V_re in_data 0 16 } } }
	conv_bn_bias_9_V_re { ap_none {  { conv_bn_bias_9_V_re in_data 0 16 } } }
	conv_bn_bias_10_V_r { ap_none {  { conv_bn_bias_10_V_r in_data 0 16 } } }
	conv_bn_bias_11_V_r { ap_none {  { conv_bn_bias_11_V_r in_data 0 16 } } }
	conv_bn_bias_12_V_r { ap_none {  { conv_bn_bias_12_V_r in_data 0 16 } } }
	conv_bn_bias_13_V_r { ap_none {  { conv_bn_bias_13_V_r in_data 0 16 } } }
	conv_bn_bias_14_V_r { ap_none {  { conv_bn_bias_14_V_r in_data 0 16 } } }
	conv_bn_bias_15_V_r { ap_none {  { conv_bn_bias_15_V_r in_data 0 16 } } }
	conv_bn_bias_16_V_r { ap_none {  { conv_bn_bias_16_V_r in_data 0 16 } } }
	conv_bn_bias_17_V_r { ap_none {  { conv_bn_bias_17_V_r in_data 0 16 } } }
	conv_bn_bias_18_V_r { ap_none {  { conv_bn_bias_18_V_r in_data 0 16 } } }
	conv_bn_bias_19_V_r { ap_none {  { conv_bn_bias_19_V_r in_data 0 16 } } }
	conv_bn_bias_20_V_r { ap_none {  { conv_bn_bias_20_V_r in_data 0 16 } } }
	conv_bn_bias_21_V_r { ap_none {  { conv_bn_bias_21_V_r in_data 0 16 } } }
	conv_bn_bias_22_V_r { ap_none {  { conv_bn_bias_22_V_r in_data 0 16 } } }
	conv_bn_bias_23_V_r { ap_none {  { conv_bn_bias_23_V_r in_data 0 16 } } }
	conv_bn_bias_24_V_r { ap_none {  { conv_bn_bias_24_V_r in_data 0 16 } } }
	conv_bn_bias_25_V_r { ap_none {  { conv_bn_bias_25_V_r in_data 0 16 } } }
	conv_bn_bias_26_V_r { ap_none {  { conv_bn_bias_26_V_r in_data 0 16 } } }
	conv_bn_bias_27_V_r { ap_none {  { conv_bn_bias_27_V_r in_data 0 16 } } }
	conv_bn_bias_28_V_r { ap_none {  { conv_bn_bias_28_V_r in_data 0 16 } } }
	conv_bn_bias_29_V_r { ap_none {  { conv_bn_bias_29_V_r in_data 0 16 } } }
	conv_bn_bias_30_V_r { ap_none {  { conv_bn_bias_30_V_r in_data 0 16 } } }
	conv_bn_bias_31_V_r { ap_none {  { conv_bn_bias_31_V_r in_data 0 16 } } }
	relu_shift_x_0_V_re { ap_none {  { relu_shift_x_0_V_re in_data 0 16 } } }
	relu_shift_x_1_V_re { ap_none {  { relu_shift_x_1_V_re in_data 0 16 } } }
	relu_shift_x_2_V_re { ap_none {  { relu_shift_x_2_V_re in_data 0 16 } } }
	relu_shift_x_3_V_re { ap_none {  { relu_shift_x_3_V_re in_data 0 16 } } }
	relu_shift_x_4_V_re { ap_none {  { relu_shift_x_4_V_re in_data 0 16 } } }
	relu_shift_x_5_V_re { ap_none {  { relu_shift_x_5_V_re in_data 0 16 } } }
	relu_shift_x_6_V_re { ap_none {  { relu_shift_x_6_V_re in_data 0 16 } } }
	relu_shift_x_7_V_re { ap_none {  { relu_shift_x_7_V_re in_data 0 16 } } }
	relu_shift_x_8_V_re { ap_none {  { relu_shift_x_8_V_re in_data 0 16 } } }
	relu_shift_x_9_V_re { ap_none {  { relu_shift_x_9_V_re in_data 0 16 } } }
	relu_shift_x_10_V_r { ap_none {  { relu_shift_x_10_V_r in_data 0 16 } } }
	relu_shift_x_11_V_r { ap_none {  { relu_shift_x_11_V_r in_data 0 16 } } }
	relu_shift_x_12_V_r { ap_none {  { relu_shift_x_12_V_r in_data 0 16 } } }
	relu_shift_x_13_V_r { ap_none {  { relu_shift_x_13_V_r in_data 0 16 } } }
	relu_shift_x_14_V_r { ap_none {  { relu_shift_x_14_V_r in_data 0 16 } } }
	relu_shift_x_15_V_r { ap_none {  { relu_shift_x_15_V_r in_data 0 16 } } }
	relu_shift_x_16_V_r { ap_none {  { relu_shift_x_16_V_r in_data 0 16 } } }
	relu_shift_x_17_V_r { ap_none {  { relu_shift_x_17_V_r in_data 0 16 } } }
	relu_shift_x_18_V_r { ap_none {  { relu_shift_x_18_V_r in_data 0 16 } } }
	relu_shift_x_19_V_r { ap_none {  { relu_shift_x_19_V_r in_data 0 16 } } }
	relu_shift_x_20_V_r { ap_none {  { relu_shift_x_20_V_r in_data 0 16 } } }
	relu_shift_x_21_V_r { ap_none {  { relu_shift_x_21_V_r in_data 0 16 } } }
	relu_shift_x_22_V_r { ap_none {  { relu_shift_x_22_V_r in_data 0 16 } } }
	relu_shift_x_23_V_r { ap_none {  { relu_shift_x_23_V_r in_data 0 16 } } }
	relu_shift_x_24_V_r { ap_none {  { relu_shift_x_24_V_r in_data 0 16 } } }
	relu_shift_x_25_V_r { ap_none {  { relu_shift_x_25_V_r in_data 0 16 } } }
	relu_shift_x_26_V_r { ap_none {  { relu_shift_x_26_V_r in_data 0 16 } } }
	relu_shift_x_27_V_r { ap_none {  { relu_shift_x_27_V_r in_data 0 16 } } }
	relu_shift_x_28_V_r { ap_none {  { relu_shift_x_28_V_r in_data 0 16 } } }
	relu_shift_x_29_V_r { ap_none {  { relu_shift_x_29_V_r in_data 0 16 } } }
	relu_shift_x_30_V_r { ap_none {  { relu_shift_x_30_V_r in_data 0 16 } } }
	relu_shift_x_31_V_r { ap_none {  { relu_shift_x_31_V_r in_data 0 16 } } }
	relu_shift_y_0_V_re { ap_none {  { relu_shift_y_0_V_re in_data 0 16 } } }
	relu_shift_y_1_V_re { ap_none {  { relu_shift_y_1_V_re in_data 0 16 } } }
	relu_shift_y_2_V_re { ap_none {  { relu_shift_y_2_V_re in_data 0 16 } } }
	relu_shift_y_3_V_re { ap_none {  { relu_shift_y_3_V_re in_data 0 16 } } }
	relu_shift_y_4_V_re { ap_none {  { relu_shift_y_4_V_re in_data 0 16 } } }
	relu_shift_y_5_V_re { ap_none {  { relu_shift_y_5_V_re in_data 0 16 } } }
	relu_shift_y_6_V_re { ap_none {  { relu_shift_y_6_V_re in_data 0 16 } } }
	relu_shift_y_7_V_re { ap_none {  { relu_shift_y_7_V_re in_data 0 16 } } }
	relu_shift_y_8_V_re { ap_none {  { relu_shift_y_8_V_re in_data 0 16 } } }
	relu_shift_y_9_V_re { ap_none {  { relu_shift_y_9_V_re in_data 0 16 } } }
	relu_shift_y_10_V_r { ap_none {  { relu_shift_y_10_V_r in_data 0 16 } } }
	relu_shift_y_11_V_r { ap_none {  { relu_shift_y_11_V_r in_data 0 16 } } }
	relu_shift_y_12_V_r { ap_none {  { relu_shift_y_12_V_r in_data 0 16 } } }
	relu_shift_y_13_V_r { ap_none {  { relu_shift_y_13_V_r in_data 0 16 } } }
	relu_shift_y_14_V_r { ap_none {  { relu_shift_y_14_V_r in_data 0 16 } } }
	relu_shift_y_15_V_r { ap_none {  { relu_shift_y_15_V_r in_data 0 16 } } }
	relu_shift_y_16_V_r { ap_none {  { relu_shift_y_16_V_r in_data 0 16 } } }
	relu_shift_y_17_V_r { ap_none {  { relu_shift_y_17_V_r in_data 0 16 } } }
	relu_shift_y_18_V_r { ap_none {  { relu_shift_y_18_V_r in_data 0 16 } } }
	relu_shift_y_19_V_r { ap_none {  { relu_shift_y_19_V_r in_data 0 16 } } }
	relu_shift_y_20_V_r { ap_none {  { relu_shift_y_20_V_r in_data 0 16 } } }
	relu_shift_y_21_V_r { ap_none {  { relu_shift_y_21_V_r in_data 0 16 } } }
	relu_shift_y_22_V_r { ap_none {  { relu_shift_y_22_V_r in_data 0 16 } } }
	relu_shift_y_23_V_r { ap_none {  { relu_shift_y_23_V_r in_data 0 16 } } }
	relu_shift_y_24_V_r { ap_none {  { relu_shift_y_24_V_r in_data 0 16 } } }
	relu_shift_y_25_V_r { ap_none {  { relu_shift_y_25_V_r in_data 0 16 } } }
	relu_shift_y_26_V_r { ap_none {  { relu_shift_y_26_V_r in_data 0 16 } } }
	relu_shift_y_27_V_r { ap_none {  { relu_shift_y_27_V_r in_data 0 16 } } }
	relu_shift_y_28_V_r { ap_none {  { relu_shift_y_28_V_r in_data 0 16 } } }
	relu_shift_y_29_V_r { ap_none {  { relu_shift_y_29_V_r in_data 0 16 } } }
	relu_shift_y_30_V_r { ap_none {  { relu_shift_y_30_V_r in_data 0 16 } } }
	relu_shift_y_31_V_r { ap_none {  { relu_shift_y_31_V_r in_data 0 16 } } }
	relu_weight_0_V_rea { ap_none {  { relu_weight_0_V_rea in_data 0 16 } } }
	relu_weight_1_V_rea { ap_none {  { relu_weight_1_V_rea in_data 0 16 } } }
	relu_weight_2_V_rea { ap_none {  { relu_weight_2_V_rea in_data 0 16 } } }
	relu_weight_3_V_rea { ap_none {  { relu_weight_3_V_rea in_data 0 16 } } }
	relu_weight_4_V_rea { ap_none {  { relu_weight_4_V_rea in_data 0 16 } } }
	relu_weight_5_V_rea { ap_none {  { relu_weight_5_V_rea in_data 0 16 } } }
	relu_weight_6_V_rea { ap_none {  { relu_weight_6_V_rea in_data 0 16 } } }
	relu_weight_7_V_rea { ap_none {  { relu_weight_7_V_rea in_data 0 16 } } }
	relu_weight_8_V_rea { ap_none {  { relu_weight_8_V_rea in_data 0 16 } } }
	relu_weight_9_V_rea { ap_none {  { relu_weight_9_V_rea in_data 0 16 } } }
	relu_weight_10_V_re { ap_none {  { relu_weight_10_V_re in_data 0 16 } } }
	relu_weight_11_V_re { ap_none {  { relu_weight_11_V_re in_data 0 16 } } }
	relu_weight_12_V_re { ap_none {  { relu_weight_12_V_re in_data 0 16 } } }
	relu_weight_13_V_re { ap_none {  { relu_weight_13_V_re in_data 0 16 } } }
	relu_weight_14_V_re { ap_none {  { relu_weight_14_V_re in_data 0 16 } } }
	relu_weight_15_V_re { ap_none {  { relu_weight_15_V_re in_data 0 16 } } }
	relu_weight_16_V_re { ap_none {  { relu_weight_16_V_re in_data 0 16 } } }
	relu_weight_17_V_re { ap_none {  { relu_weight_17_V_re in_data 0 16 } } }
	relu_weight_18_V_re { ap_none {  { relu_weight_18_V_re in_data 0 16 } } }
	relu_weight_19_V_re { ap_none {  { relu_weight_19_V_re in_data 0 16 } } }
	relu_weight_20_V_re { ap_none {  { relu_weight_20_V_re in_data 0 16 } } }
	relu_weight_21_V_re { ap_none {  { relu_weight_21_V_re in_data 0 16 } } }
	relu_weight_22_V_re { ap_none {  { relu_weight_22_V_re in_data 0 16 } } }
	relu_weight_23_V_re { ap_none {  { relu_weight_23_V_re in_data 0 16 } } }
	relu_weight_24_V_re { ap_none {  { relu_weight_24_V_re in_data 0 16 } } }
	relu_weight_25_V_re { ap_none {  { relu_weight_25_V_re in_data 0 16 } } }
	relu_weight_26_V_re { ap_none {  { relu_weight_26_V_re in_data 0 16 } } }
	relu_weight_27_V_re { ap_none {  { relu_weight_27_V_re in_data 0 16 } } }
	relu_weight_28_V_re { ap_none {  { relu_weight_28_V_re in_data 0 16 } } }
	relu_weight_29_V_re { ap_none {  { relu_weight_29_V_re in_data 0 16 } } }
	relu_weight_30_V_re { ap_none {  { relu_weight_30_V_re in_data 0 16 } } }
	relu_weight_31_V_re { ap_none {  { relu_weight_31_V_re in_data 0 16 } } }
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
	out_buf_all_0_V { ap_memory {  { out_buf_all_0_V_address0 mem_address 1 11 }  { out_buf_all_0_V_ce0 mem_ce 1 1 }  { out_buf_all_0_V_q0 mem_dout 0 16 }  { out_buf_all_0_V_address1 MemPortADDR2 1 11 }  { out_buf_all_0_V_ce1 MemPortCE2 1 1 }  { out_buf_all_0_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_1_V { ap_memory {  { out_buf_all_1_V_address0 mem_address 1 11 }  { out_buf_all_1_V_ce0 mem_ce 1 1 }  { out_buf_all_1_V_q0 mem_dout 0 16 }  { out_buf_all_1_V_address1 MemPortADDR2 1 11 }  { out_buf_all_1_V_ce1 MemPortCE2 1 1 }  { out_buf_all_1_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_2_V { ap_memory {  { out_buf_all_2_V_address0 mem_address 1 11 }  { out_buf_all_2_V_ce0 mem_ce 1 1 }  { out_buf_all_2_V_q0 mem_dout 0 16 }  { out_buf_all_2_V_address1 MemPortADDR2 1 11 }  { out_buf_all_2_V_ce1 MemPortCE2 1 1 }  { out_buf_all_2_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_3_V { ap_memory {  { out_buf_all_3_V_address0 mem_address 1 11 }  { out_buf_all_3_V_ce0 mem_ce 1 1 }  { out_buf_all_3_V_q0 mem_dout 0 16 }  { out_buf_all_3_V_address1 MemPortADDR2 1 11 }  { out_buf_all_3_V_ce1 MemPortCE2 1 1 }  { out_buf_all_3_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_4_V { ap_memory {  { out_buf_all_4_V_address0 mem_address 1 11 }  { out_buf_all_4_V_ce0 mem_ce 1 1 }  { out_buf_all_4_V_q0 mem_dout 0 16 }  { out_buf_all_4_V_address1 MemPortADDR2 1 11 }  { out_buf_all_4_V_ce1 MemPortCE2 1 1 }  { out_buf_all_4_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_5_V { ap_memory {  { out_buf_all_5_V_address0 mem_address 1 11 }  { out_buf_all_5_V_ce0 mem_ce 1 1 }  { out_buf_all_5_V_q0 mem_dout 0 16 }  { out_buf_all_5_V_address1 MemPortADDR2 1 11 }  { out_buf_all_5_V_ce1 MemPortCE2 1 1 }  { out_buf_all_5_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_6_V { ap_memory {  { out_buf_all_6_V_address0 mem_address 1 11 }  { out_buf_all_6_V_ce0 mem_ce 1 1 }  { out_buf_all_6_V_q0 mem_dout 0 16 }  { out_buf_all_6_V_address1 MemPortADDR2 1 11 }  { out_buf_all_6_V_ce1 MemPortCE2 1 1 }  { out_buf_all_6_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_7_V { ap_memory {  { out_buf_all_7_V_address0 mem_address 1 11 }  { out_buf_all_7_V_ce0 mem_ce 1 1 }  { out_buf_all_7_V_q0 mem_dout 0 16 }  { out_buf_all_7_V_address1 MemPortADDR2 1 11 }  { out_buf_all_7_V_ce1 MemPortCE2 1 1 }  { out_buf_all_7_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_8_V { ap_memory {  { out_buf_all_8_V_address0 mem_address 1 11 }  { out_buf_all_8_V_ce0 mem_ce 1 1 }  { out_buf_all_8_V_q0 mem_dout 0 16 }  { out_buf_all_8_V_address1 MemPortADDR2 1 11 }  { out_buf_all_8_V_ce1 MemPortCE2 1 1 }  { out_buf_all_8_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_9_V { ap_memory {  { out_buf_all_9_V_address0 mem_address 1 11 }  { out_buf_all_9_V_ce0 mem_ce 1 1 }  { out_buf_all_9_V_q0 mem_dout 0 16 }  { out_buf_all_9_V_address1 MemPortADDR2 1 11 }  { out_buf_all_9_V_ce1 MemPortCE2 1 1 }  { out_buf_all_9_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_10_V { ap_memory {  { out_buf_all_10_V_address0 mem_address 1 11 }  { out_buf_all_10_V_ce0 mem_ce 1 1 }  { out_buf_all_10_V_q0 mem_dout 0 16 }  { out_buf_all_10_V_address1 MemPortADDR2 1 11 }  { out_buf_all_10_V_ce1 MemPortCE2 1 1 }  { out_buf_all_10_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_11_V { ap_memory {  { out_buf_all_11_V_address0 mem_address 1 11 }  { out_buf_all_11_V_ce0 mem_ce 1 1 }  { out_buf_all_11_V_q0 mem_dout 0 16 }  { out_buf_all_11_V_address1 MemPortADDR2 1 11 }  { out_buf_all_11_V_ce1 MemPortCE2 1 1 }  { out_buf_all_11_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_12_V { ap_memory {  { out_buf_all_12_V_address0 mem_address 1 11 }  { out_buf_all_12_V_ce0 mem_ce 1 1 }  { out_buf_all_12_V_q0 mem_dout 0 16 }  { out_buf_all_12_V_address1 MemPortADDR2 1 11 }  { out_buf_all_12_V_ce1 MemPortCE2 1 1 }  { out_buf_all_12_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_13_V { ap_memory {  { out_buf_all_13_V_address0 mem_address 1 11 }  { out_buf_all_13_V_ce0 mem_ce 1 1 }  { out_buf_all_13_V_q0 mem_dout 0 16 }  { out_buf_all_13_V_address1 MemPortADDR2 1 11 }  { out_buf_all_13_V_ce1 MemPortCE2 1 1 }  { out_buf_all_13_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_14_V { ap_memory {  { out_buf_all_14_V_address0 mem_address 1 11 }  { out_buf_all_14_V_ce0 mem_ce 1 1 }  { out_buf_all_14_V_q0 mem_dout 0 16 }  { out_buf_all_14_V_address1 MemPortADDR2 1 11 }  { out_buf_all_14_V_ce1 MemPortCE2 1 1 }  { out_buf_all_14_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_15_V { ap_memory {  { out_buf_all_15_V_address0 mem_address 1 11 }  { out_buf_all_15_V_ce0 mem_ce 1 1 }  { out_buf_all_15_V_q0 mem_dout 0 16 }  { out_buf_all_15_V_address1 MemPortADDR2 1 11 }  { out_buf_all_15_V_ce1 MemPortCE2 1 1 }  { out_buf_all_15_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_16_V { ap_memory {  { out_buf_all_16_V_address0 mem_address 1 11 }  { out_buf_all_16_V_ce0 mem_ce 1 1 }  { out_buf_all_16_V_q0 mem_dout 0 16 }  { out_buf_all_16_V_address1 MemPortADDR2 1 11 }  { out_buf_all_16_V_ce1 MemPortCE2 1 1 }  { out_buf_all_16_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_17_V { ap_memory {  { out_buf_all_17_V_address0 mem_address 1 11 }  { out_buf_all_17_V_ce0 mem_ce 1 1 }  { out_buf_all_17_V_q0 mem_dout 0 16 }  { out_buf_all_17_V_address1 MemPortADDR2 1 11 }  { out_buf_all_17_V_ce1 MemPortCE2 1 1 }  { out_buf_all_17_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_18_V { ap_memory {  { out_buf_all_18_V_address0 mem_address 1 11 }  { out_buf_all_18_V_ce0 mem_ce 1 1 }  { out_buf_all_18_V_q0 mem_dout 0 16 }  { out_buf_all_18_V_address1 MemPortADDR2 1 11 }  { out_buf_all_18_V_ce1 MemPortCE2 1 1 }  { out_buf_all_18_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_19_V { ap_memory {  { out_buf_all_19_V_address0 mem_address 1 11 }  { out_buf_all_19_V_ce0 mem_ce 1 1 }  { out_buf_all_19_V_q0 mem_dout 0 16 }  { out_buf_all_19_V_address1 MemPortADDR2 1 11 }  { out_buf_all_19_V_ce1 MemPortCE2 1 1 }  { out_buf_all_19_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_20_V { ap_memory {  { out_buf_all_20_V_address0 mem_address 1 11 }  { out_buf_all_20_V_ce0 mem_ce 1 1 }  { out_buf_all_20_V_q0 mem_dout 0 16 }  { out_buf_all_20_V_address1 MemPortADDR2 1 11 }  { out_buf_all_20_V_ce1 MemPortCE2 1 1 }  { out_buf_all_20_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_21_V { ap_memory {  { out_buf_all_21_V_address0 mem_address 1 11 }  { out_buf_all_21_V_ce0 mem_ce 1 1 }  { out_buf_all_21_V_q0 mem_dout 0 16 }  { out_buf_all_21_V_address1 MemPortADDR2 1 11 }  { out_buf_all_21_V_ce1 MemPortCE2 1 1 }  { out_buf_all_21_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_22_V { ap_memory {  { out_buf_all_22_V_address0 mem_address 1 11 }  { out_buf_all_22_V_ce0 mem_ce 1 1 }  { out_buf_all_22_V_q0 mem_dout 0 16 }  { out_buf_all_22_V_address1 MemPortADDR2 1 11 }  { out_buf_all_22_V_ce1 MemPortCE2 1 1 }  { out_buf_all_22_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_23_V { ap_memory {  { out_buf_all_23_V_address0 mem_address 1 11 }  { out_buf_all_23_V_ce0 mem_ce 1 1 }  { out_buf_all_23_V_q0 mem_dout 0 16 }  { out_buf_all_23_V_address1 MemPortADDR2 1 11 }  { out_buf_all_23_V_ce1 MemPortCE2 1 1 }  { out_buf_all_23_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_24_V { ap_memory {  { out_buf_all_24_V_address0 mem_address 1 11 }  { out_buf_all_24_V_ce0 mem_ce 1 1 }  { out_buf_all_24_V_q0 mem_dout 0 16 }  { out_buf_all_24_V_address1 MemPortADDR2 1 11 }  { out_buf_all_24_V_ce1 MemPortCE2 1 1 }  { out_buf_all_24_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_25_V { ap_memory {  { out_buf_all_25_V_address0 mem_address 1 11 }  { out_buf_all_25_V_ce0 mem_ce 1 1 }  { out_buf_all_25_V_q0 mem_dout 0 16 }  { out_buf_all_25_V_address1 MemPortADDR2 1 11 }  { out_buf_all_25_V_ce1 MemPortCE2 1 1 }  { out_buf_all_25_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_26_V { ap_memory {  { out_buf_all_26_V_address0 mem_address 1 11 }  { out_buf_all_26_V_ce0 mem_ce 1 1 }  { out_buf_all_26_V_q0 mem_dout 0 16 }  { out_buf_all_26_V_address1 MemPortADDR2 1 11 }  { out_buf_all_26_V_ce1 MemPortCE2 1 1 }  { out_buf_all_26_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_27_V { ap_memory {  { out_buf_all_27_V_address0 mem_address 1 11 }  { out_buf_all_27_V_ce0 mem_ce 1 1 }  { out_buf_all_27_V_q0 mem_dout 0 16 }  { out_buf_all_27_V_address1 MemPortADDR2 1 11 }  { out_buf_all_27_V_ce1 MemPortCE2 1 1 }  { out_buf_all_27_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_28_V { ap_memory {  { out_buf_all_28_V_address0 mem_address 1 11 }  { out_buf_all_28_V_ce0 mem_ce 1 1 }  { out_buf_all_28_V_q0 mem_dout 0 16 }  { out_buf_all_28_V_address1 MemPortADDR2 1 11 }  { out_buf_all_28_V_ce1 MemPortCE2 1 1 }  { out_buf_all_28_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_29_V { ap_memory {  { out_buf_all_29_V_address0 mem_address 1 11 }  { out_buf_all_29_V_ce0 mem_ce 1 1 }  { out_buf_all_29_V_q0 mem_dout 0 16 }  { out_buf_all_29_V_address1 MemPortADDR2 1 11 }  { out_buf_all_29_V_ce1 MemPortCE2 1 1 }  { out_buf_all_29_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_30_V { ap_memory {  { out_buf_all_30_V_address0 mem_address 1 11 }  { out_buf_all_30_V_ce0 mem_ce 1 1 }  { out_buf_all_30_V_q0 mem_dout 0 16 }  { out_buf_all_30_V_address1 MemPortADDR2 1 11 }  { out_buf_all_30_V_ce1 MemPortCE2 1 1 }  { out_buf_all_30_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_all_31_V { ap_memory {  { out_buf_all_31_V_address0 mem_address 1 11 }  { out_buf_all_31_V_ce0 mem_ce 1 1 }  { out_buf_all_31_V_q0 mem_dout 0 16 }  { out_buf_all_31_V_address1 MemPortADDR2 1 11 }  { out_buf_all_31_V_ce1 MemPortCE2 1 1 }  { out_buf_all_31_V_q1 MemPortDOUT2 0 16 } } }
	out_buf_sc_0_V { ap_memory {  { out_buf_sc_0_V_address0 mem_address 1 10 }  { out_buf_sc_0_V_ce0 mem_ce 1 1 }  { out_buf_sc_0_V_q0 mem_dout 0 16 } } }
	out_buf_sc_1_V { ap_memory {  { out_buf_sc_1_V_address0 mem_address 1 10 }  { out_buf_sc_1_V_ce0 mem_ce 1 1 }  { out_buf_sc_1_V_q0 mem_dout 0 16 } } }
	out_buf_sc_2_V { ap_memory {  { out_buf_sc_2_V_address0 mem_address 1 10 }  { out_buf_sc_2_V_ce0 mem_ce 1 1 }  { out_buf_sc_2_V_q0 mem_dout 0 16 } } }
	out_buf_sc_3_V { ap_memory {  { out_buf_sc_3_V_address0 mem_address 1 10 }  { out_buf_sc_3_V_ce0 mem_ce 1 1 }  { out_buf_sc_3_V_q0 mem_dout 0 16 } } }
	out_buf_sc_4_V { ap_memory {  { out_buf_sc_4_V_address0 mem_address 1 10 }  { out_buf_sc_4_V_ce0 mem_ce 1 1 }  { out_buf_sc_4_V_q0 mem_dout 0 16 } } }
	out_buf_sc_5_V { ap_memory {  { out_buf_sc_5_V_address0 mem_address 1 10 }  { out_buf_sc_5_V_ce0 mem_ce 1 1 }  { out_buf_sc_5_V_q0 mem_dout 0 16 } } }
	out_buf_sc_6_V { ap_memory {  { out_buf_sc_6_V_address0 mem_address 1 10 }  { out_buf_sc_6_V_ce0 mem_ce 1 1 }  { out_buf_sc_6_V_q0 mem_dout 0 16 } } }
	out_buf_sc_7_V { ap_memory {  { out_buf_sc_7_V_address0 mem_address 1 10 }  { out_buf_sc_7_V_ce0 mem_ce 1 1 }  { out_buf_sc_7_V_q0 mem_dout 0 16 } } }
	out_buf_sc_8_V { ap_memory {  { out_buf_sc_8_V_address0 mem_address 1 10 }  { out_buf_sc_8_V_ce0 mem_ce 1 1 }  { out_buf_sc_8_V_q0 mem_dout 0 16 } } }
	out_buf_sc_9_V { ap_memory {  { out_buf_sc_9_V_address0 mem_address 1 10 }  { out_buf_sc_9_V_ce0 mem_ce 1 1 }  { out_buf_sc_9_V_q0 mem_dout 0 16 } } }
	out_buf_sc_10_V { ap_memory {  { out_buf_sc_10_V_address0 mem_address 1 10 }  { out_buf_sc_10_V_ce0 mem_ce 1 1 }  { out_buf_sc_10_V_q0 mem_dout 0 16 } } }
	out_buf_sc_11_V { ap_memory {  { out_buf_sc_11_V_address0 mem_address 1 10 }  { out_buf_sc_11_V_ce0 mem_ce 1 1 }  { out_buf_sc_11_V_q0 mem_dout 0 16 } } }
	out_buf_sc_12_V { ap_memory {  { out_buf_sc_12_V_address0 mem_address 1 10 }  { out_buf_sc_12_V_ce0 mem_ce 1 1 }  { out_buf_sc_12_V_q0 mem_dout 0 16 } } }
	out_buf_sc_13_V { ap_memory {  { out_buf_sc_13_V_address0 mem_address 1 10 }  { out_buf_sc_13_V_ce0 mem_ce 1 1 }  { out_buf_sc_13_V_q0 mem_dout 0 16 } } }
	out_buf_sc_14_V { ap_memory {  { out_buf_sc_14_V_address0 mem_address 1 10 }  { out_buf_sc_14_V_ce0 mem_ce 1 1 }  { out_buf_sc_14_V_q0 mem_dout 0 16 } } }
	out_buf_sc_15_V { ap_memory {  { out_buf_sc_15_V_address0 mem_address 1 10 }  { out_buf_sc_15_V_ce0 mem_ce 1 1 }  { out_buf_sc_15_V_q0 mem_dout 0 16 } } }
	out_buf_sc_16_V { ap_memory {  { out_buf_sc_16_V_address0 mem_address 1 10 }  { out_buf_sc_16_V_ce0 mem_ce 1 1 }  { out_buf_sc_16_V_q0 mem_dout 0 16 } } }
	out_buf_sc_17_V { ap_memory {  { out_buf_sc_17_V_address0 mem_address 1 10 }  { out_buf_sc_17_V_ce0 mem_ce 1 1 }  { out_buf_sc_17_V_q0 mem_dout 0 16 } } }
	out_buf_sc_18_V { ap_memory {  { out_buf_sc_18_V_address0 mem_address 1 10 }  { out_buf_sc_18_V_ce0 mem_ce 1 1 }  { out_buf_sc_18_V_q0 mem_dout 0 16 } } }
	out_buf_sc_19_V { ap_memory {  { out_buf_sc_19_V_address0 mem_address 1 10 }  { out_buf_sc_19_V_ce0 mem_ce 1 1 }  { out_buf_sc_19_V_q0 mem_dout 0 16 } } }
	out_buf_sc_20_V { ap_memory {  { out_buf_sc_20_V_address0 mem_address 1 10 }  { out_buf_sc_20_V_ce0 mem_ce 1 1 }  { out_buf_sc_20_V_q0 mem_dout 0 16 } } }
	out_buf_sc_21_V { ap_memory {  { out_buf_sc_21_V_address0 mem_address 1 10 }  { out_buf_sc_21_V_ce0 mem_ce 1 1 }  { out_buf_sc_21_V_q0 mem_dout 0 16 } } }
	out_buf_sc_22_V { ap_memory {  { out_buf_sc_22_V_address0 mem_address 1 10 }  { out_buf_sc_22_V_ce0 mem_ce 1 1 }  { out_buf_sc_22_V_q0 mem_dout 0 16 } } }
	out_buf_sc_23_V { ap_memory {  { out_buf_sc_23_V_address0 mem_address 1 10 }  { out_buf_sc_23_V_ce0 mem_ce 1 1 }  { out_buf_sc_23_V_q0 mem_dout 0 16 } } }
	out_buf_sc_24_V { ap_memory {  { out_buf_sc_24_V_address0 mem_address 1 10 }  { out_buf_sc_24_V_ce0 mem_ce 1 1 }  { out_buf_sc_24_V_q0 mem_dout 0 16 } } }
	out_buf_sc_25_V { ap_memory {  { out_buf_sc_25_V_address0 mem_address 1 10 }  { out_buf_sc_25_V_ce0 mem_ce 1 1 }  { out_buf_sc_25_V_q0 mem_dout 0 16 } } }
	out_buf_sc_26_V { ap_memory {  { out_buf_sc_26_V_address0 mem_address 1 10 }  { out_buf_sc_26_V_ce0 mem_ce 1 1 }  { out_buf_sc_26_V_q0 mem_dout 0 16 } } }
	out_buf_sc_27_V { ap_memory {  { out_buf_sc_27_V_address0 mem_address 1 10 }  { out_buf_sc_27_V_ce0 mem_ce 1 1 }  { out_buf_sc_27_V_q0 mem_dout 0 16 } } }
	out_buf_sc_28_V { ap_memory {  { out_buf_sc_28_V_address0 mem_address 1 10 }  { out_buf_sc_28_V_ce0 mem_ce 1 1 }  { out_buf_sc_28_V_q0 mem_dout 0 16 } } }
	out_buf_sc_29_V { ap_memory {  { out_buf_sc_29_V_address0 mem_address 1 10 }  { out_buf_sc_29_V_ce0 mem_ce 1 1 }  { out_buf_sc_29_V_q0 mem_dout 0 16 } } }
	out_buf_sc_30_V { ap_memory {  { out_buf_sc_30_V_address0 mem_address 1 10 }  { out_buf_sc_30_V_ce0 mem_ce 1 1 }  { out_buf_sc_30_V_q0 mem_dout 0 16 } } }
	out_buf_sc_31_V { ap_memory {  { out_buf_sc_31_V_address0 mem_address 1 10 }  { out_buf_sc_31_V_ce0 mem_ce 1 1 }  { out_buf_sc_31_V_q0 mem_dout 0 16 } } }
	feat_buf_all_0_V_4 { ap_memory {  { feat_buf_all_0_V_4_address0 mem_address 1 16 }  { feat_buf_all_0_V_4_ce0 mem_ce 1 1 }  { feat_buf_all_0_V_4_we0 mem_we 1 1 }  { feat_buf_all_0_V_4_d0 mem_din 1 32 } } }
	H_fmap_in { ap_none {  { H_fmap_in in_data 0 8 } } }
	H_fmap_out { ap_none {  { H_fmap_out in_data 0 8 } } }
	c_out { ap_none {  { c_out in_data 0 6 } } }
	row_tile_start { ap_none {  { row_tile_start in_data 0 32 } } }
	stride { ap_none {  { stride in_data 0 4 } } }
	switch_bank { ap_none {  { switch_bank in_data 0 1 } } }
	feat_buf_all_1_V { ap_memory {  { feat_buf_all_1_V_address0 mem_address 1 16 }  { feat_buf_all_1_V_ce0 mem_ce 1 1 }  { feat_buf_all_1_V_we0 mem_we 1 1 }  { feat_buf_all_1_V_d0 mem_din 1 32 } } }
}
